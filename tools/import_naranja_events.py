#!/usr/bin/env python3
"""Import Naranja Beta 2 map events and decompile its Ruby event scripts.

The ROM is the source of truth.  ``rom_metadata.json`` supplies the map/event
addresses produced by ``import_naranja_rom.py``; pokeruby supplies the command
ABI and semantic constant names; the generated source is Poryscript.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
from collections import defaultdict
from dataclasses import dataclass, field
from pathlib import Path


ROM_BASE = 0x08000000
NARANJA_SHA1 = "4a8b88c0f16500c0e8295c4adf61c4036a3876d0"


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def rom_offset(pointer: int, size: int) -> int:
    offset = pointer - ROM_BASE
    if not 0 <= offset < size:
        raise ValueError(f"invalid ROM pointer {pointer:#010x}")
    return offset


def macro_token(text: str) -> str:
    text = re.sub(r"(?<=[a-z0-9])(?=[A-Z])", "_", text)
    text = re.sub(r"(?<=[A-Z])(?=[A-Z][a-z])", "_", text)
    text = re.sub(r"[^A-Za-z0-9]+", "_", text).strip("_")
    return text.upper() or "UNNAMED"


def parse_direct_defines(path: Path, prefix: str) -> dict[int, str]:
    """Read simple numeric defines, preferring descriptive names over UNUSED."""
    result: dict[int, str] = {}
    if not path.exists():
        return result
    for line in path.read_text(encoding="utf-8").splitlines():
        match = re.match(rf"\s*#define\s+({re.escape(prefix)}\w+)\s+(0x[0-9A-Fa-f]+|\d+)\b", line)
        if not match:
            continue
        name, raw = match.groups()
        value = int(raw, 0)
        old = result.get(value)
        if old is None or ("UNUSED" in old and "UNUSED" not in name):
            result[value] = name
    return result


def parse_numeric_defines(path: Path, prefix: str) -> dict[int, str]:
    """Resolve the simple arithmetic defines used by pokeemerald constants."""
    definitions: dict[str, str] = {}
    for line in path.read_text(encoding="utf-8").splitlines():
        match = re.match(r"\s*#define\s+(\w+)\s+(.+?)(?:\s+//.*)?$", line)
        if match and "(" not in match.group(1):
            definitions[match.group(1)] = match.group(2).strip()
    values: dict[str, int] = {}
    for _ in range(20):
        changed = False
        for name, expression in definitions.items():
            if name in values:
                continue
            cooked = expression
            for symbol in sorted(values, key=len, reverse=True):
                cooked = re.sub(rf"\b{re.escape(symbol)}\b", str(values[symbol]), cooked)
            cooked = re.sub(r"\b([0-9]+)[uUlL]+\b", r"\1", cooked)
            cooked = re.sub(
                r"\b0[xX][0-9A-Fa-f]+\b",
                lambda match: str(int(match.group(0), 16)),
                cooked,
            )
            if re.search(r"[A-Za-z_]", cooked) or not re.fullmatch(r"[0-9A-Fa-fxX()+\-*/<>&|~\s]+", cooked):
                continue
            try:
                values[name] = int(eval(cooked, {"__builtins__": {}}, {}))
                changed = True
            except (SyntaxError, ValueError, TypeError, ZeroDivisionError):
                pass
        if not changed:
            break
    result: dict[int, str] = {}
    for name, value in values.items():
        if not name.startswith(prefix):
            continue
        old = result.get(value)
        if old is None or ("UNUSED" in old and "UNUSED" not in name):
            result[value] = name
    return result


def extract_c_function(source: str, name: str) -> str | None:
    match = re.search(rf"\b(?:static\s+)?bool8\s+ScrCmd_{re.escape(name)}\s*\([^)]*\)\s*\{{", source)
    if not match:
        return None
    depth = 1
    pos = match.end()
    while pos < len(source) and depth:
        if source[pos] == "{":
            depth += 1
        elif source[pos] == "}":
            depth -= 1
        pos += 1
    return source[match.end() : pos - 1]


@dataclass
class CommandSpec:
    opcode: int
    name: str
    widths: list[int]


def read_command_specs(pokeruby: Path) -> dict[int, CommandSpec]:
    table = (pokeruby / "data/script_cmd_table.inc").read_text(encoding="utf-8")
    source = (pokeruby / "src/scrcmd.c").read_text(encoding="utf-8")
    specs: dict[int, CommandSpec] = {}
    for name, raw_opcode in re.findall(
        r"\.4byte\s+ScrCmd_(\w+)\s+@\s+0x([0-9A-Fa-f]+)", table
    ):
        opcode = int(raw_opcode, 16)
        body = extract_c_function(source, name)
        if body is None:
            raise ValueError(f"ScrCmd_{name} not found")
        kinds = re.findall(r"ScriptRead(Byte|Halfword|Word)\s*\(ctx\)", body)
        specs[opcode] = CommandSpec(opcode, name, [{"Byte": 1, "Halfword": 2, "Word": 4}[kind] for kind in kinds])

    # These commands delegate their argument reads to helpers or have a
    # variable payload.  Spell out the Ruby bytecode ABI explicitly.
    map_warp = [1, 1, 1, 2, 2]
    for opcode in (0x39, 0x3A, 0x3B, 0x3D, 0x3E, 0x3F, 0x40, 0x41):
        specs[opcode].widths = map_warp[:] if opcode != 0x3C else [1, 1]
    specs[0x3C].widths = [1, 1]
    specs[0x4F].widths = [2, 4]
    specs[0x50].widths = [2, 4, 1, 1]
    specs[0x51].widths = [2]
    specs[0x52].widths = [2, 1, 1]
    specs[0x53].widths = [2]
    specs[0x54].widths = [2, 1, 1]
    specs[0x55].widths = [2]
    specs[0x56].widths = [2, 1, 1]
    specs[0x5C].widths = []  # trainerbattle is decoded separately
    specs[0x79].widths = [2, 1, 2, 4, 4, 1]
    return specs


@dataclass
class Instruction:
    address: int
    opcode: int
    name: str
    values: list[int]
    next_address: int


TERMINATORS = {0x02, 0x03, 0x05, 0x08, 0x0C, 0x0D, 0x24, 0x5E, 0x5F}

SCRIPT_POINTER_ARGS = {0x04: (0,), 0x05: (0,), 0x06: (1,), 0x07: (1,)}
TEXT_POINTER_ARGS = {0x67: (0,), 0x78: (0,), 0x85: (1,), 0x9B: (0,)}
MOVEMENT_POINTER_ARGS = {0x4F: (1,), 0x50: (1,)}
MART_POINTER_ARGS = {0x86: (0,), 0x87: (0,), 0x88: (0,)}


@dataclass
class MapInfo:
    name: str
    directory: Path
    metadata: dict[str, object]
    map_json: dict[str, object]

    @property
    def token(self) -> str:
        return macro_token(self.name.removeprefix("Naranja_"))


@dataclass
class Registry:
    data: bytes
    specs: dict[int, CommandSpec]
    entries: dict[int, str] = field(default_factory=dict)
    owners: dict[int, str] = field(default_factory=dict)
    instructions: dict[int, Instruction] = field(default_factory=dict)
    instruction_owners: dict[int, str] = field(default_factory=dict)
    invalid_roots: dict[int, str] = field(default_factory=dict)
    text_labels: dict[int, str] = field(default_factory=dict)
    movement_labels: dict[int, str] = field(default_factory=dict)
    mart_labels: dict[int, str] = field(default_factory=dict)

    def in_rom(self, pointer: int) -> bool:
        return ROM_BASE <= pointer < ROM_BASE + len(self.data)

    def add_entry(self, pointer: int, label: str, owner: str) -> bool:
        if not self.in_rom(pointer):
            self.invalid_roots[pointer] = "not a ROM pointer"
            return False
        if not self.is_plausible(pointer):
            self.invalid_roots[pointer] = "does not decode as a Ruby event script"
            return False
        self.entries.setdefault(pointer, label)
        self.owners.setdefault(pointer, owner)
        return True

    def is_plausible(self, pointer: int) -> bool:
        cursor = pointer
        for _ in range(1024):
            try:
                insn = read_instruction(self.data, cursor, self.specs)
            except ValueError:
                return False
            if insn.opcode in (0x06, 0x07, 0x0A, 0x0B) and insn.values[0] > 5:
                return False
            for arg_index in SCRIPT_POINTER_ARGS.get(insn.opcode, ()):
                if not self.in_rom(insn.values[arg_index]):
                    return False
            if insn.opcode in TERMINATORS:
                return True
            cursor = insn.next_address
        return False

    def discover(self) -> None:
        pending = list(self.entries)
        visited_entries: set[int] = set()
        while pending:
            entry = pending.pop(0)
            if entry in visited_entries:
                continue
            visited_entries.add(entry)
            owner = self.owners[entry]
            cursor = entry
            for _ in range(4096):
                if cursor in self.instructions:
                    break
                insn = read_instruction(self.data, cursor, self.specs)
                self.instructions[cursor] = insn
                self.instruction_owners[cursor] = owner
                for arg_index in SCRIPT_POINTER_ARGS.get(insn.opcode, ()):
                    target = insn.values[arg_index]
                    if self.in_rom(target) and self.is_plausible(target):
                        if target not in self.entries:
                            self.entries[target] = f"{owner}_EventScript_Sub_{target:08X}"
                            self.owners[target] = owner
                            pending.append(target)
                if insn.opcode == 0x5C:
                    battle_type = insn.values[0]
                    if battle_type in (1, 2):
                        self._add_trainer_script(insn.values[-1], owner, pending)
                    elif battle_type in (6, 8):
                        self._add_trainer_script(insn.values[-1], owner, pending)
                self._collect_data_pointers(insn, owner)
                cursor = insn.next_address
                if insn.opcode in TERMINATORS:
                    break

    def _add_trainer_script(self, target: int, owner: str, pending: list[int]) -> None:
        if target not in self.entries and self.in_rom(target) and self.is_plausible(target):
            self.entries[target] = f"{owner}_EventScript_AfterBattle_{target:08X}"
            self.owners[target] = owner
            pending.append(target)

    def _collect_data_pointers(self, insn: Instruction, owner: str) -> None:
        for index in TEXT_POINTER_ARGS.get(insn.opcode, ()):
            pointer = insn.values[index]
            if self.in_rom(pointer):
                self.text_labels.setdefault(pointer, f"{owner}_Text_{pointer:08X}")
        # loadword can put arbitrary pointers in banks 1-3.  Bank 0 is the
        # text bank used by the Ruby message helpers.
        if insn.opcode == 0x0F and insn.values and insn.values[0] == 0:
            pointer = insn.values[1]
            if self.in_rom(pointer):
                self.text_labels.setdefault(pointer, f"{owner}_Text_{pointer:08X}")
        for index in MOVEMENT_POINTER_ARGS.get(insn.opcode, ()):
            pointer = insn.values[index]
            if self.in_rom(pointer):
                self.movement_labels.setdefault(pointer, f"{owner}_Movement_{pointer:08X}")
        for index in MART_POINTER_ARGS.get(insn.opcode, ()):
            pointer = insn.values[index]
            if self.in_rom(pointer):
                self.mart_labels.setdefault(pointer, f"{owner}_Mart_{pointer:08X}")
        if insn.opcode == 0x5C:
            battle_type = insn.values[0]
            text_count = {0: 2, 1: 2, 2: 2, 3: 1, 4: 3, 5: 2, 6: 3, 7: 3, 8: 3}[battle_type]
            for pointer in insn.values[3 : 3 + text_count]:
                if self.in_rom(pointer):
                    self.text_labels.setdefault(pointer, f"{owner}_Text_{pointer:08X}")


def read_instruction(data: bytes, pointer: int, specs: dict[int, CommandSpec]) -> Instruction:
    offset = rom_offset(pointer, len(data))
    opcode = data[offset]
    if opcode not in specs:
        raise ValueError(f"unknown opcode {opcode:#04x} at {pointer:#010x}")
    spec = specs[opcode]
    cursor = offset + 1
    widths = spec.widths
    if opcode == 0x5C:
        battle_type = data[cursor]
        pointer_counts = {0: 2, 1: 3, 2: 3, 3: 1, 4: 3, 5: 2, 6: 4, 7: 3, 8: 4}
        if battle_type not in pointer_counts:
            raise ValueError(f"unknown trainer battle type {battle_type} at {pointer:#010x}")
        widths = [1, 2, 2] + [4] * pointer_counts[battle_type]
    values: list[int] = []
    for width in widths:
        values.append(int.from_bytes(data[cursor : cursor + width], "little"))
        cursor += width
    return Instruction(pointer, opcode, spec.name, values, ROM_BASE + cursor)


def analyze_roots(root: Path, data: bytes, specs: dict[int, CommandSpec]) -> dict[str, object]:
    roots: list[tuple[str, int]] = []
    for metadata_path in sorted((root / "data/maps").glob("Naranja_*/rom_metadata.json")):
        metadata = json.loads(metadata_path.read_text(encoding="utf-8"))
        map_name = metadata_path.parent.name
        for event in metadata["object_events"]:
            roots.append((map_name, int(event["script_pointer"], 16)))
        for event in metadata["coord_events"]:
            roots.append((map_name, int(event["script_pointer"], 16)))
        for event in metadata["bg_events"]:
            if event["kind"] <= 4:
                roots.append((map_name, int(event["data"], 16)))

    opcode_counts: dict[int, int] = defaultdict(int)
    errors: list[str] = []
    decoded = 0
    for map_name, pointer in roots:
        if not ROM_BASE <= pointer < ROM_BASE + len(data):
            continue
        cursor = pointer
        trace: list[str] = []
        for _ in range(2048):
            try:
                insn = read_instruction(data, cursor, specs)
            except ValueError as error:
                trail = " -> ".join(trace[-8:])
                errors.append(f"{map_name}: {error}; trace {trail}")
                break
            decoded += 1
            opcode_counts[insn.opcode] += 1
            trace.append(f"{insn.address:#010x}:{insn.name}({','.join(hex(v) for v in insn.values)})")
            cursor = insn.next_address
            if insn.opcode in TERMINATORS:
                break
        else:
            errors.append(f"{map_name}: unterminated script at {pointer:#010x}")
    return {
        "roots": len(roots),
        "decoded_instructions": decoded,
        "opcode_counts": {f"0x{key:02X}": value for key, value in sorted(opcode_counts.items())},
        "errors": errors,
    }


def load_maps(root: Path) -> list[MapInfo]:
    maps: list[MapInfo] = []
    for metadata_path in sorted((root / "data/maps").glob("Naranja_*/rom_metadata.json")):
        directory = metadata_path.parent
        maps.append(
            MapInfo(
                directory.name,
                directory,
                json.loads(metadata_path.read_text(encoding="utf-8")),
                json.loads((directory / "map.json").read_text(encoding="utf-8")),
            )
        )
    return maps


def _special_list(path: Path) -> list[str]:
    text = path.read_text(encoding="utf-8")
    start = text.index("gSpecials::")
    return re.findall(r"^\s*def_special\s+(\w+)", text[start:], re.MULTILINE)


def _special_key(name: str) -> str:
    name = re.sub(r"^(?:ScrSpecial_|Special_|Script_)", "", name)
    return re.sub(r"[^a-z0-9]", "", name.lower())


def read_special_names(pokeruby: Path, target_root: Path) -> dict[int, str]:
    """Translate Ruby special-table indexes to Emerald special functions.

    The tables preserve their broad semantic order, but Emerald inserted new
    functions and gave many old functions descriptive names.  Exact semantic
    names are anchors; legacy unnamed entries are aligned between those
    anchors instead of incorrectly reusing the Ruby numeric index.
    """
    source = _special_list(pokeruby / "data/specials.inc")
    target = _special_list(target_root / "data/specials.inc")
    target_by_key: dict[str, int] = {}
    for index, name in enumerate(target):
        target_by_key.setdefault(_special_key(name), index)

    anchors: list[tuple[int, int]] = []
    last_target = -1
    for source_index, name in enumerate(source):
        target_index = target_by_key.get(_special_key(name))
        if target_index is not None and target_index > last_target:
            anchors.append((source_index, target_index))
            last_target = target_index
    if not anchors:
        raise ValueError("could not align pokeruby and pokeemerald special tables")

    result: dict[int, str] = {}
    for source_index, name in enumerate(source):
        exact = target_by_key.get(_special_key(name))
        if exact is not None:
            result[source_index] = target[exact]
            continue
        before = max((pair for pair in anchors if pair[0] < source_index), default=anchors[0])
        after = min((pair for pair in anchors if pair[0] > source_index), default=anchors[-1])
        if before[0] == after[0]:
            guess = before[1] + (source_index - before[0])
        else:
            ratio = (source_index - before[0]) / (after[0] - before[0])
            guess = round(before[1] + ratio * (after[1] - before[1]))
        result[source_index] = target[max(0, min(guess, len(target) - 1))]
    return result


def read_charmap(path: Path) -> tuple[dict[int, str], dict[tuple[int, ...], str]]:
    chars: dict[int, str] = {}
    tokens: dict[tuple[int, ...], str] = {}
    for line in path.read_text(encoding="utf-8").splitlines():
        match = re.match(r"\s*(.+?)\s*=\s*((?:[0-9A-Fa-f]{2}\s*)+)(?:@.*)?$", line)
        if not match:
            continue
        left, raw = match.groups()
        values = tuple(int(part, 16) for part in raw.split())
        if left.startswith("'") and left.endswith("'") and len(values) == 1:
            value = left[1:-1]
            if value == r"\'":
                value = "'"
            if len(value) == 1 or value in (r"\n", r"\l", r"\p"):
                chars.setdefault(values[0], value)
        elif re.fullmatch(r"[A-Z][A-Z0-9_]*", left):
            tokens.setdefault(values, left)
    return chars, tokens


FIELD_PLACEHOLDERS = {
    0x01: "PLAYER", 0x02: "STR_VAR_1", 0x03: "STR_VAR_2", 0x04: "STR_VAR_3",
    0x05: "KUN", 0x06: "RIVAL", 0x07: "VERSION", 0x08: "AQUA",
    0x09: "MAGMA", 0x0A: "ARCHIE", 0x0B: "MAXIE", 0x0C: "KYOGRE", 0x0D: "GROUDON",
}


def decode_text(data: bytes, pointer: int, chars: dict[int, str], tokens: dict[tuple[int, ...], str]) -> str:
    cursor = rom_offset(pointer, len(data))
    output: list[str] = []
    limit = min(len(data), cursor + 900)
    while cursor < limit:
        value = data[cursor]
        cursor += 1
        if value == 0xFF:
            break
        if value == 0xFD and cursor < len(data):
            if data[cursor] not in FIELD_PLACEHOLDERS:
                raise ValueError(f"unknown text placeholder {data[cursor]:#04x} at {pointer:#010x}")
            output.append("{" + FIELD_PLACEHOLDERS[data[cursor]] + "}")
            cursor += 1
            continue
        if value == 0xFC and cursor < len(data):
            control = data[cursor]
            cursor += 1
            arg_counts = {1: 1, 2: 1, 3: 1, 4: 3, 5: 1, 6: 1, 8: 1, 0x0B: 2,
                          0x0C: 1, 0x0D: 1, 0x0E: 1, 0x0F: 1, 0x10: 2,
                          0x11: 1, 0x12: 1, 0x13: 1, 0x14: 1}
            count = arg_counts.get(control, 0)
            args = tuple(data[cursor : cursor + count])
            cursor += count
            control_names = {
                0: "NAME_END", 1: "COLOR", 2: "HIGHLIGHT", 3: "SHADOW",
                4: "COLOR_HIGHLIGHT_SHADOW", 5: "PALETTE", 6: "FONT", 7: "RESET_FONT",
                8: "PAUSE", 9: "PAUSE_UNTIL_PRESS", 0x0A: "WAIT_SE", 0x0B: "PLAY_BGM",
                0x0C: "ESCAPE", 0x0D: "SHIFT_RIGHT", 0x0E: "SHIFT_DOWN",
                0x0F: "FILL_WINDOW", 0x10: "PLAY_SE", 0x11: "CLEAR", 0x12: "SKIP_TO",
                0x13: "CLEAR_TO", 0x14: "MIN_LETTER_SPACING", 0x15: "JPN", 0x16: "ENG",
                0x17: "PAUSE_MUSIC", 0x18: "RESUME_MUSIC",
            }
            if control not in control_names:
                raise ValueError(f"unknown text control {control:#04x} at {pointer:#010x}")
            name = control_names[control]
            suffix = "" if not args else " " + " ".join(f"0x{arg:02X}" for arg in args)
            output.append("{" + name + suffix + "}")
            continue
        output.append(chars.get(value, "{" + tokens.get((value,), f"CHAR_{value:02X}") + "}"))
    else:
        raise ValueError(f"unterminated text at {pointer:#010x}")
    text = "".join(output)
    # Charmap newlines are already Poryscript escapes (\n, \l, \p).
    return text.replace('"', '\\"')


def replace_generated_constants(path: Path, tag: str, lines: list[str]) -> None:
    begin = f"// BEGIN AUTO-GENERATED NARANJA EVENTS: {tag}"
    end = f"// END AUTO-GENERATED NARANJA EVENTS: {tag}"
    text = path.read_text(encoding="utf-8")
    text = re.sub(rf"\n?{re.escape(begin)}.*?{re.escape(end)}\n?", "\n", text, flags=re.DOTALL)
    block = begin + "\n" + "\n".join(lines).rstrip() + "\n" + end + "\n"
    endif = text.rfind("#endif")
    if endif < 0:
        raise ValueError(f"no #endif in {path}")
    output = text[:endif].rstrip() + "\n\n" + block + "\n" + text[endif:]
    temporary = path.with_suffix(path.suffix + ".naranja.tmp")
    temporary.write_text(output, encoding="utf-8")
    temporary.replace(path)


SYSTEM_FLAG_NAMES = {
    0x860: "FLAG_SYS_POKEMON_GET", 0x861: "FLAG_SYS_POKEDEX_GET",
    0x862: "FLAG_SYS_POKENAV_GET", 0x864: "FLAG_SYS_GAME_CLEAR",
    0x867: "FLAG_BADGE01_GET", 0x868: "FLAG_BADGE02_GET", 0x869: "FLAG_BADGE03_GET",
    0x86A: "FLAG_BADGE04_GET", 0x86B: "FLAG_BADGE05_GET", 0x86C: "FLAG_BADGE06_GET",
    0x86D: "FLAG_BADGE07_GET", 0x86E: "FLAG_BADGE08_GET",
    0x888: "FLAG_SYS_USE_FLASH", 0x889: "FLAG_SYS_USE_STRENGTH",
    0x88C: "FLAG_SYS_SAFARI_MODE", 0x895: "FLAG_SYS_CLOCK_SET",
    0x896: "FLAG_SYS_NATIONAL_DEX", 0x8C0: "FLAG_SYS_B_DASH",
}


class SemanticNames:
    def __init__(
        self,
        root: Path,
        maps: list[MapInfo],
        registry: Registry,
        pokeruby: Path,
        map_scripts: dict[str, list[tuple[int, object]]],
    ):
        self.root = root
        self.maps = maps
        self.registry = registry
        self.source_gfx = parse_direct_defines(pokeruby / "include/constants/event_objects.h", "OBJ_EVENT_GFX_")
        self.source_moves = parse_direct_defines(pokeruby / "include/constants/event_object_movement.h", "MOVEMENT_TYPE_")
        self.target_flags = parse_numeric_defines(root / "include/constants/flags.h", "FLAG_")
        self.target_vars = parse_numeric_defines(root / "include/constants/vars.h", "VAR_")
        self.target_vars.update(parse_direct_defines(root / "include/constants/vars.h", "VAR_"))
        # Never treat constants from a previous generated block as native
        # Emerald variables. Otherwise a second importer run can omit them.
        self.target_vars = {
            value: name for value, name in self.target_vars.items()
            if not name.startswith("VAR_NARANJA_")
        }
        self.flag_names: dict[int, str] = {}
        self.flag_target_values: dict[int, int] = {}
        self.var_names: dict[int, str] = {}
        self.var_target_values: dict[int, int] = {}
        self.trainer_names: dict[int, str] = {}
        self.object_local_names: dict[tuple[str, int], str] = {}
        self._used_names: set[str] = set()
        self._next_hidden_key = 0x100000
        self._prepare_objects()
        self._prepare_script_constants(map_scripts)

    def _unique(self, base: str) -> str:
        name = base
        index = 2
        while name in self._used_names:
            name = f"{base}_{index}"
            index += 1
        self._used_names.add(name)
        return name

    def role(self, graphics_id: int, local_id: int) -> str:
        gfx = self.source_gfx.get(graphics_id, f"OBJ_EVENT_GFX_{graphics_id:03d}")
        role = gfx.removeprefix("OBJ_EVENT_GFX_")
        if role.startswith("VAR_"):
            role = f"DYNAMIC_{role.removeprefix('VAR_')}"
        return f"{role}_{local_id}" if role in ("BOY_1", "GIRL_1", "MAN_1", "WOMAN_1") else role

    @staticmethod
    def area(owner: str) -> str:
        owner = owner.removeprefix("Naranja_")
        owner = re.sub(r"_G\d+_M\d+$", "", owner)
        return macro_token(owner)

    @staticmethod
    def best_owner(scores: dict[str, int]) -> str:
        return max(scores, key=lambda owner: (scores[owner], -len(owner), owner)) if scores else "NARANJA"

    def _set_flag(self, source: int, name: str, target: int) -> None:
        self.flag_names[source] = name
        self.flag_target_values[source] = target

    def _prepare_objects(self) -> None:
        occurrences: dict[int, list[tuple[MapInfo, dict[str, object]]]] = defaultdict(list)
        for map_info in self.maps:
            per_role: dict[str, int] = defaultdict(int)
            for event in map_info.metadata["object_events"]:  # type: ignore[index]
                local_id = int(event["local_id"])
                role = self.role(int(event["graphics_id"]), local_id)
                per_role[role] += 1
                if per_role[role] > 1:
                    role += f"_{per_role[role]}"
                local_name = f"LOCALID_{map_info.token}_{macro_token(role)}"
                self.object_local_names[(map_info.name, local_id)] = local_name
                flag = int(event["flag"])
                if flag:
                    occurrences[flag].append((map_info, event))
        for flag, found in occurrences.items():
            if flag in SYSTEM_FLAG_NAMES:
                self._set_flag(flag, SYSTEM_FLAG_NAMES[flag], flag)
            elif 0 < flag <= 0x1F:
                self._set_flag(flag, self.target_flags.get(flag, f"FLAG_TEMP_{flag:X}"), flag)
            else:
                map_info, event = found[0]
                role = self.role(int(event["graphics_id"]), int(event["local_id"]))
                self.flag_names[flag] = self._unique(f"FLAG_HIDE_{map_info.token}_{macro_token(role)}")

    def _prepare_script_constants(self, map_scripts: dict[str, list[tuple[int, object]]]) -> None:
        flag_scores: dict[int, dict[str, int]] = defaultdict(lambda: defaultdict(int))
        var_scores: dict[int, dict[str, int]] = defaultdict(lambda: defaultdict(int))
        trainer_scores: dict[int, dict[str, int]] = defaultdict(lambda: defaultdict(int))
        for address, insn in self.registry.instructions.items():
            owner = self.registry.instruction_owners.get(address, "Naranja")
            if insn.opcode in (0x29, 0x2A, 0x2B):
                flag_scores[insn.values[0]][owner] += 1
            for value in variable_values(insn):
                var_scores[value][owner] += 1
            if insn.opcode == 0x5C:
                trainer_scores[insn.values[1]][owner] += 1
        for owner, entries in map_scripts.items():
            for script_type, payload in entries:
                if script_type in (2, 4):
                    for variable, _value, _label in payload:  # type: ignore[union-attr]
                        var_scores[variable][owner] += 10

        # Hoenn is intentionally unused. Reuse its normal persistent flag
        # space while keeping Emerald's actual system flags at their canonical
        # ids. Reserve 0x400-0x4FF for generated hidden-item flags.
        custom_sources = set(self.flag_names) | set(flag_scores)
        normal_slots = iter(range(0x20, 0x400))
        for source in sorted(custom_sources):
            if source in SYSTEM_FLAG_NAMES:
                self._set_flag(source, SYSTEM_FLAG_NAMES[source], source)
                continue
            if 0 < source <= 0x1F:
                self._set_flag(source, self.target_flags.get(source, f"FLAG_TEMP_{source:X}"), source)
                continue
            if source not in self.flag_names:
                owner = self.best_owner(flag_scores[source])
                self.flag_names[source] = self._unique(
                    f"FLAG_NARANJA_{self.area(owner)}_EVENT_COMPLETE_{source:04X}"
                )
            self.flag_target_values[source] = next(normal_slots)

        used_story_targets = {
            value for value in var_scores if 0x4050 <= value <= 0x40FF
        }
        free_story_targets = iter(value for value in range(0x4050, 0x4100) if value not in used_story_targets)
        area_counts: dict[str, int] = defaultdict(int)
        for source in sorted(var_scores):
            if 0x4000 <= source <= 0x404F or 0x8000 <= source <= 0x8015:
                self.var_names[source] = self.target_vars.get(source, f"VAR_0x{source:04X}")
                self.var_target_values[source] = source
                continue
            area = self.area(self.best_owner(var_scores[source]))
            area_counts[area] += 1
            suffix = "STORY_STATE" if area_counts[area] == 1 else f"EVENT_STATE_{area_counts[area]}"
            self.var_names[source] = self._unique(f"VAR_NARANJA_{area}_{suffix}")
            self.var_target_values[source] = source if 0x4050 <= source <= 0x40FF else next(free_story_targets)

        for trainer, scores in trainer_scores.items():
            area = self.area(self.best_owner(scores))
            self.trainer_names[trainer] = self._unique(f"TRAINER_NARANJA_{area}_{trainer:03d}")

    def flag(self, value: int) -> str:
        return self.flag_names.get(value, f"0x{value:X}")

    def var(self, value: int) -> str:
        return self.var_names.get(value, f"0x{value:X}")

    def ensure_story_var(self, value: int, owner: str) -> str:
        if value in self.var_names:
            return self.var_names[value]
        if 0x4000 <= value <= 0x404F or 0x8000 <= value <= 0x8015:
            self.var_names[value] = self.target_vars.get(value, f"VAR_0x{value:04X}")
            self.var_target_values[value] = value
        else:
            used = set(self.var_target_values.values())
            target = value if 0x4050 <= value <= 0x40FF else next(
                candidate for candidate in range(0x4050, 0x4100) if candidate not in used
            )
            self.var_names[value] = self._unique(f"VAR_NARANJA_{self.area(owner)}_STORY_STATE")
            self.var_target_values[value] = target
        return self.var_names[value]

    def add_hidden_flag(self, name: str) -> str:
        source = self._next_hidden_key
        self._next_hidden_key += 1
        target = 0x400 + source - 0x100000
        if target >= 0x500:
            raise ValueError("Naranja has more hidden items than the reserved flag range")
        self._set_flag(source, self._unique(name), target)
        return self.flag_names[source]


def variable_values(insn: Instruction) -> list[int]:
    positions = {
        0x16: (0,), 0x17: (0,), 0x18: (0,), 0x19: (0, 1), 0x1A: (0, 1),
        0x21: (0,), 0x22: (0, 1), 0x26: (0,), 0x42: (0, 1), 0x83: (1,),
        0x9D: (0,), 0xB3: (0,),
    }
    return [insn.values[index] for index in positions.get(insn.opcode, ()) if insn.values[index] >= 0x4000]


MAP_SCRIPT_NAMES = {
    1: "MAP_SCRIPT_ON_LOAD", 2: "MAP_SCRIPT_ON_FRAME_TABLE",
    3: "MAP_SCRIPT_ON_TRANSITION", 4: "MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE",
    5: "MAP_SCRIPT_ON_RESUME", 6: "MAP_SCRIPT_ON_DIVE_WARP",
    7: "MAP_SCRIPT_ON_RETURN_TO_FIELD",
}


def register_map_scripts(registry: Registry, maps: list[MapInfo]) -> dict[str, list[tuple[int, object]]]:
    result: dict[str, list[tuple[int, object]]] = {}
    for map_info in maps:
        entries: list[tuple[int, object]] = []
        pointer = int(map_info.metadata["scripts_pointer"], 16)  # type: ignore[arg-type]
        if not registry.in_rom(pointer):
            result[map_info.name] = entries
            continue
        cursor = rom_offset(pointer, len(registry.data))
        for index in range(16):
            script_type = registry.data[cursor]
            cursor += 1
            if script_type == 0:
                break
            if script_type not in MAP_SCRIPT_NAMES:
                break
            target = u32(registry.data, cursor)
            cursor += 4
            type_name = MAP_SCRIPT_NAMES[script_type]
            if script_type in (2, 4):
                table: list[tuple[int, int, int]] = []
                if registry.in_rom(target):
                    table_cursor = rom_offset(target, len(registry.data))
                    for row in range(256):
                        variable = u16(registry.data, table_cursor)
                        if variable == 0:
                            break
                        value = u16(registry.data, table_cursor + 2)
                        script = u32(registry.data, table_cursor + 4)
                        label = f"{map_info.name}_{'OnFrame' if script_type == 2 else 'OnWarp'}_{row + 1}"
                        if registry.add_entry(script, label, map_info.name):
                            label = registry.entries[script]
                        else:
                            label = "0x0"
                        table.append((variable, value, label))
                        table_cursor += 8
                entries.append((script_type, table))
            else:
                suffix = {
                    1: "OnLoad", 3: "OnTransition", 5: "OnResume",
                    6: "OnDiveWarp", 7: "OnReturnToField",
                }[script_type]
                label = f"{map_info.name}_{suffix}"
                if registry.add_entry(target, label, map_info.name):
                    label = registry.entries[target]
                else:
                    label = "0x0"
                entries.append((script_type, label))
        result[map_info.name] = entries
    return result


def register_event_roots(registry: Registry, maps: list[MapInfo], names_hint: dict[int, str]) -> None:
    for map_info in maps:
        for index, event in enumerate(map_info.metadata["object_events"]):  # type: ignore[index]
            pointer = int(event["script_pointer"], 16)
            role = names_hint.get((int(event["graphics_id"]) << 8) | int(event["local_id"]), f"Object_{index + 1}")
            registry.add_entry(
                pointer,
                f"{map_info.name}_EventScript_{role}_LocalId{int(event['local_id'])}",
                map_info.name,
            )
        for index, event in enumerate(map_info.metadata["coord_events"]):  # type: ignore[index]
            pointer = int(event["script_pointer"], 16)
            if pointer:
                registry.add_entry(pointer, f"{map_info.name}_EventScript_Trigger_{index + 1}", map_info.name)
        for index, event in enumerate(map_info.metadata["bg_events"]):  # type: ignore[index]
            if int(event["kind"]) <= 4:
                pointer = int(event["data"], 16)
                registry.add_entry(pointer, f"{map_info.name}_EventScript_Sign_{index + 1}", map_info.name)


class Formatter:
    def __init__(self, root: Path, pokeruby: Path, maps: list[MapInfo], registry: Registry, names: SemanticNames):
        self.root = root
        self.registry = registry
        self.names = names
        self.specials = read_special_names(pokeruby, root)
        self.items = parse_direct_defines(pokeruby / "include/constants/items.h", "ITEM_")
        # pokeruby names TMs after their moves; pokeemerald uses ITEM_TM##.
        for value, item_name in list(self.items.items()):
            match = re.match(r"ITEM_((?:TM|HM)\d+)_", item_name)
            if match:
                self.items[value] = f"ITEM_{match.group(1)}"
        self.species = parse_direct_defines(pokeruby / "include/constants/species.h", "SPECIES_")
        self.moves = parse_direct_defines(pokeruby / "include/constants/moves.h", "MOVE_")
        # Song IDs are compatible, but several descriptive aliases changed
        # between Ruby and Emerald (for example ROUTE111 -> DESERT).
        self.songs = parse_direct_defines(root / "include/constants/songs.h", "")
        self.trainer_types = parse_direct_defines(pokeruby / "include/constants/trainers.h", "TRAINER_TYPE_")
        self.comparisons = {
            0: "LESS_THAN", 1: "EQUAL", 2: "GREATER_THAN",
            3: "LESS_THAN_OR_EQUAL", 4: "GREATER_THAN_OR_EQUAL", 5: "NOT_EQUAL",
        }
        self.movement_actions = parse_direct_defines(pokeruby / "include/constants/event_object_movement.h", "MOVEMENT_ACTION_")
        self.movement_macros = self._read_movement_macros(root / "asm/macros/movement.inc")
        self.maps_by_key = {
            (int(item.metadata["map_group"]), int(item.metadata["map_number"])): item.map_json["id"]
            for item in maps
        }
        self.local_ids = names.object_local_names

    def _read_movement_macros(self, path: Path) -> dict[int, str]:
        constants = parse_direct_defines(self.root / "include/constants/event_object_movement.h", "MOVEMENT_ACTION_")
        values_by_name = {name: value for value, name in constants.items()}
        result: dict[int, str] = {}
        for macro, constant in re.findall(r"create_movement_action\s+(\w+),\s+(MOVEMENT_ACTION_\w+)", path.read_text(encoding="utf-8")):
            if constant in values_by_name:
                result[values_by_name[constant]] = macro
        return result

    def local_id(self, owner: str, value: int) -> str:
        if value == 0:
            return "LOCALID_NONE"
        if value == 255:
            return "LOCALID_PLAYER"
        return self.local_ids.get((owner, value), str(value))

    def map_id(self, group: int, number: int) -> str:
        if (group, number) == (0xFF, 0xFF):
            return "MAP_UNDEFINED"
        # A few unused/garbage branches in the ROM contain invalid map pairs.
        # MAP_UNDEFINED is an explicit, safe Emerald value and still lets the
        # original bytes be audited through rom_metadata.json.
        return str(self.maps_by_key.get((group, number), "MAP_UNDEFINED"))

    def instruction(self, insn: Instruction, owner: str) -> str:
        name = insn.name
        values: list[object] = list(insn.values)
        renamed_commands = {
            0x0C: "returnram", 0x0D: "endram", 0x11: "setptr",
            0x12: "loadbytefromptr", 0x1D: "compare_local_to_ptr",
            0x1E: "compare_ptr_to_local", 0x1F: "compare_ptr_to_value",
            0x20: "compare_ptr_to_ptr", 0x5D: "dotrainerbattle",
            0x77: "showcontestpainting", 0x96: "getpokenewsactive",
            0x99: "setflashlevel", 0xBE: "vbuffermessage",
        }
        name = renamed_commands.get(insn.opcode, name)
        # Ruby's copyvar accepts a literal source through VarGet. Poryscript's
        # Emerald macro warns because its second operand is declared as a var;
        # setvar is byte-for-byte equivalent for literal sources.
        if insn.opcode == 0x19 and int(insn.values[1]) < 0x4000:
            name = "setvar"
        if insn.opcode in (0x50, 0x52, 0x54, 0x56):
            name = {0x50: "applymovement", 0x52: "waitmovement", 0x54: "removeobject", 0x56: "addobject"}[insn.opcode]
            values = values[:-2] + [self.map_id(int(values[-2]), int(values[-1]))]
        elif insn.opcode in (0x58, 0x59):
            values = [values[0], self.map_id(int(values[1]), int(values[2]))]
        elif insn.opcode == 0xA8:
            name = "setobjectsubpriority"
            values = [values[0], self.map_id(int(values[1]), int(values[2])), values[3]]
        elif insn.opcode == 0xA9:
            name = "resetobjectsubpriority"
            values = [values[0], self.map_id(int(values[1]), int(values[2]))]
        elif insn.opcode in (0x39, 0x3A, 0x3B, 0x3D, 0x3E, 0x3F, 0x40, 0x41):
            values = [self.map_id(int(values[0]), int(values[1]))] + values[2:]
        elif insn.opcode == 0x3C:
            values = [self.map_id(int(values[0]), int(values[1]))]
        elif insn.opcode == 0xC4:
            values = [self.map_id(int(values[0]), int(values[1]))] + values[2:]
        elif insn.opcode == 0x94:
            values = []
        elif insn.opcode == 0x95:
            values = [values[2]]

        for index in SCRIPT_POINTER_ARGS.get(insn.opcode, ()):
            values[index] = self.registry.entries.get(int(values[index]), f"0x{int(values[index]):08X}")
        for index in TEXT_POINTER_ARGS.get(insn.opcode, ()):
            values[index] = self.registry.text_labels.get(int(values[index]), f"0x{int(values[index]):08X}")
        for index in MOVEMENT_POINTER_ARGS.get(insn.opcode, ()):
            values[index] = self.registry.movement_labels.get(int(values[index]), f"0x{int(values[index]):08X}")
        for index in MART_POINTER_ARGS.get(insn.opcode, ()):
            values[index] = self.registry.mart_labels.get(int(values[index]), f"0x{int(values[index]):08X}")

        if insn.opcode == 0x0F and int(insn.values[0]) == 0:
            values[1] = self.registry.text_labels.get(int(insn.values[1]), values[1])
        if insn.opcode in (0x29, 0x2A, 0x2B):
            values[0] = self.names.flag(int(insn.values[0]))
        var_positions = {
            0x16: (0,), 0x17: (0,), 0x18: (0,), 0x19: (0, 1), 0x1A: (0, 1),
            0x21: (0,), 0x22: (0, 1), 0x26: (0,), 0x42: (0, 1), 0x83: (1,),
            0x9D: (0,), 0xB3: (0,),
        }
        for index in var_positions.get(insn.opcode, ()):
            if int(insn.values[index]) >= 0x4000:
                values[index] = self.names.var(int(insn.values[index]))
        if insn.opcode in (0x06, 0x07, 0x0A, 0x0B):
            values[0] = self.comparisons.get(int(insn.values[0]), str(insn.values[0]))
        if insn.opcode in (0x25, 0x26):
            special_index = 0 if insn.opcode == 0x25 else 1
            values[special_index] = self.specials.get(int(insn.values[special_index]), f"NaranjaSpecial_{int(insn.values[special_index]):03X}")
        if insn.opcode == 0x64:
            name = "copyobjectxytoperm"
        if insn.opcode in (0x2F, 0x31, 0x33, 0x34, 0x36):
            values[0] = self.songs.get(int(insn.values[0]), f"0x{int(insn.values[0]):X}")
        item_positions = {0x44: (0,), 0x45: (0,), 0x46: (0,), 0x47: (0,), 0x48: (0,),
                          0x49: (0,), 0x4A: (0,), 0x80: (1,)}
        for index in item_positions.get(insn.opcode, ()):
            values[index] = self.items.get(int(insn.values[index]), f"0x{int(insn.values[index]):X}")
        species_positions = {0x75: (0,), 0x79: (0,), 0x7A: (0,), 0x7D: (1,), 0xA1: (0,), 0xB6: (0,)}
        for index in species_positions.get(insn.opcode, ()):
            values[index] = self.species.get(int(insn.values[index]), f"0x{int(insn.values[index]):X}")
        move_positions = {0x7B: (2,), 0x7C: (0,), 0x82: (1,)}
        for index in move_positions.get(insn.opcode, ()):
            values[index] = self.moves.get(int(insn.values[index]), f"0x{int(insn.values[index]):X}")
        local_positions = {0x4F: (0,), 0x50: (0,), 0x51: (0,), 0x52: (0,), 0x53: (0,),
                           0x54: (0,), 0x55: (0,), 0x56: (0,), 0x57: (0,), 0x58: (0,),
                           0x59: (0,), 0x5B: (0,), 0x63: (0,), 0x64: (0,), 0x65: (0,),
                           0xA8: (0,), 0xA9: (0,)}
        for index in local_positions.get(insn.opcode, ()):
            values[index] = self.local_id(owner, int(insn.values[index]))
        if insn.opcode == 0x5C:
            type_names = {
                0: "TRAINER_BATTLE_SINGLE", 1: "TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC",
                2: "TRAINER_BATTLE_CONTINUE_SCRIPT", 3: "TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT",
                4: "TRAINER_BATTLE_DOUBLE", 5: "TRAINER_BATTLE_REMATCH",
                6: "TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE", 7: "TRAINER_BATTLE_REMATCH_DOUBLE",
                8: "TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC",
            }
            values[0] = type_names[int(insn.values[0])]
            values[1] = self.names.trainer_names[int(insn.values[1])]
            values[2] = self.local_id(owner, int(insn.values[2]))
            text_count = {0: 2, 1: 2, 2: 2, 3: 1, 4: 3, 5: 2, 6: 3, 7: 3, 8: 3}[int(insn.values[0])]
            for index in range(3, 3 + text_count):
                values[index] = self.registry.text_labels.get(int(insn.values[index]), f"0x{int(insn.values[index]):08X}")
            if len(values) > 3 + text_count:
                values[-1] = self.registry.entries.get(int(insn.values[-1]), f"0x{int(insn.values[-1]):08X}")
        if insn.opcode == 0x79:
            values = values[:3]
        rendered = ", ".join(str(value) if isinstance(value, str) else (str(value) if value < 10 else f"0x{value:X}") for value in values)
        return name if not rendered else f"{name}({rendered})"

    def movement(self, pointer: int) -> list[str]:
        cursor = rom_offset(pointer, len(self.registry.data))
        result: list[str] = []
        for _ in range(1024):
            value = self.registry.data[cursor]
            cursor += 1
            if value == 0xFE:
                return result
            # Invalid actions occur in one unused/corrupt pointer in the ROM.
            # Keep the sequence safe for Emerald instead of indexing beyond
            # its movement-action table.
            result.append(self.movement_macros.get(value, "delay_1"))
        raise ValueError(f"unterminated movement at {pointer:#010x}")

    def mart(self, pointer: int) -> list[str]:
        cursor = rom_offset(pointer, len(self.registry.data))
        result: list[str] = []
        for _ in range(1024):
            item = u16(self.registry.data, cursor)
            cursor += 2
            if item == 0:
                return result
            result.append(self.items.get(item, f"0x{item:X}"))
        raise ValueError(f"unterminated mart at {pointer:#010x}")


def emit_mapscripts(map_info: MapInfo, entries: list[tuple[int, object]], names: SemanticNames) -> list[str]:
    lines = [f"mapscripts {map_info.name}_MapScripts {{"]
    for script_type, payload in entries:
        type_name = MAP_SCRIPT_NAMES[script_type]
        if script_type in (2, 4):
            rows = payload  # type: ignore[assignment]
            if not rows:
                continue
            lines.append(f"    {type_name} [")
            for variable, value, label in rows:  # type: ignore[union-attr]
                if label == "0x0":
                    continue
                var_name = names.ensure_story_var(variable, map_info.name)
                lines.append(f"        {var_name}, {value}: {label}")
            lines.append("    ]")
        elif payload != "0x0":
            lines.append(f"    {type_name}: {payload}")
    lines.append("}")
    return lines


def emit_script_block(pointer: int, registry: Registry, formatter: Formatter) -> list[str]:
    label = registry.entries[pointer]
    owner = registry.owners[pointer]
    lines = [f"script {label} {{"]
    cursor = pointer
    for _ in range(4096):
        if cursor != pointer and cursor in registry.entries:
            lines.append(f"    goto({registry.entries[cursor]})")
            break
        insn = registry.instructions.get(cursor)
        if insn is None:
            lines.append("    end")
            break
        lines.append("    " + formatter.instruction(insn, owner))
        cursor = insn.next_address
        if insn.opcode in TERMINATORS:
            break
    lines.append("}")
    return lines


def write_pory_files(
    root: Path,
    maps: list[MapInfo],
    map_scripts: dict[str, list[tuple[int, object]]],
    registry: Registry,
    names: SemanticNames,
    formatter: Formatter,
) -> None:
    chars, tokens = read_charmap(root / "charmap.txt")
    by_owner_scripts: dict[str, list[int]] = defaultdict(list)
    for pointer, owner in registry.owners.items():
        by_owner_scripts[owner].append(pointer)
    by_owner_text: dict[str, list[int]] = defaultdict(list)
    by_owner_movement: dict[str, list[int]] = defaultdict(list)
    by_owner_mart: dict[str, list[int]] = defaultdict(list)
    for pointer, label in registry.text_labels.items():
        by_owner_text[label.split("_Text_", 1)[0]].append(pointer)
    for pointer, label in registry.movement_labels.items():
        by_owner_movement[label.split("_Movement_", 1)[0]].append(pointer)
    for pointer, label in registry.mart_labels.items():
        by_owner_mart[label.split("_Mart_", 1)[0]].append(pointer)

    for map_info in maps:
        lines = [
            "// Auto-generated from Naranja Beta 2. Edit the importer, not scripts.inc.",
            "// Names use Naranja map context; engine flags retain pokeemerald semantics.",
            "",
            *emit_mapscripts(map_info, map_scripts[map_info.name], names),
        ]
        for pointer in sorted(by_owner_scripts[map_info.name]):
            lines.extend(["", *emit_script_block(pointer, registry, formatter)])
        for pointer in sorted(by_owner_movement[map_info.name]):
            try:
                moves = formatter.movement(pointer)
            except ValueError:
                continue
            lines.extend(["", f"movement {registry.movement_labels[pointer]} {{"])
            lines.extend(f"    {move}" for move in moves)
            lines.append("}")
        for pointer in sorted(by_owner_mart[map_info.name]):
            try:
                items = formatter.mart(pointer)
            except ValueError:
                continue
            lines.extend(["", f"mart {registry.mart_labels[pointer]} {{"])
            lines.extend(f"    {item}" for item in items)
            lines.append("}")
        for pointer in sorted(by_owner_text[map_info.name]):
            try:
                content = decode_text(registry.data, pointer, chars, tokens)
            except ValueError:
                content = "Texto no recuperable del ROM original."
            lines.extend(["", f"text {registry.text_labels[pointer]} {{", f'    "{content}"', "}"])
        (map_info.directory / "scripts.pory").write_text("\n".join(lines).rstrip() + "\n", encoding="utf-8")


def update_event_includes(root: Path, maps: list[MapInfo]) -> None:
    path = root / "data/event_scripts.s"
    begin = "@ BEGIN AUTO-GENERATED NARANJA PORYSCRIPTS"
    end = "@ END AUTO-GENERATED NARANJA PORYSCRIPTS"
    text = path.read_text(encoding="utf-8")
    text = text.replace('\n\t.include "data/maps/naranja_scripts.inc"', "")
    text = re.sub(rf"\n?{re.escape(begin)}.*?{re.escape(end)}\n?", "\n", text, flags=re.DOTALL)
    includes = [begin] + [f'\t.include "data/maps/{item.name}/scripts.inc"' for item in maps] + [end]
    path.write_text(text.rstrip() + "\n\n" + "\n".join(includes) + "\n", encoding="utf-8")


def import_events(root: Path, pokeruby: Path, rom_path: Path, data: bytes, specs: dict[int, CommandSpec]) -> dict[str, object]:
    digest = hashlib.sha1(data).hexdigest()
    if digest != NARANJA_SHA1:
        raise SystemExit(f"unsupported ROM SHA1 {digest}; expected {NARANJA_SHA1}")
    maps = load_maps(root)
    registry = Registry(data, specs)
    source_gfx = parse_direct_defines(pokeruby / "include/constants/event_objects.h", "OBJ_EVENT_GFX_")
    hints = {
        (gfx << 8) | local: macro_token(source_gfx.get(gfx, f"OBJECT_{local}"))
        for map_info in maps
        for event in map_info.metadata["object_events"]  # type: ignore[index]
        for gfx, local in [(int(event["graphics_id"]), int(event["local_id"]))]
    }
    register_event_roots(registry, maps, hints)
    map_scripts = register_map_scripts(registry, maps)
    registry.discover()
    names = SemanticNames(root, maps, registry, pokeruby, map_scripts)
    formatter = Formatter(root, pokeruby, maps, registry, names)

    target_gfx = parse_direct_defines(root / "include/constants/event_objects.h", "OBJ_EVENT_GFX_")
    target_movement = parse_direct_defines(root / "include/constants/event_object_movement.h", "MOVEMENT_TYPE_")
    target_trainer_types = parse_direct_defines(root / "include/constants/trainers.h", "TRAINER_TYPE_")
    coord_weather = parse_direct_defines(root / "include/constants/weather.h", "COORD_EVENT_WEATHER_")
    if not coord_weather:
        coord_weather = parse_direct_defines(root / "include/constants/coord_event_weather.h", "COORD_EVENT_WEATHER_")
    hidden_start = next((value for value, name in parse_numeric_defines(root / "include/constants/flags.h", "FLAG_").items() if name == "FLAG_HIDDEN_ITEMS_START"), 0x1F4)
    for map_info in maps:
        object_events: list[dict[str, object]] = []
        for event in map_info.metadata["object_events"]:  # type: ignore[index]
            pointer = int(event["script_pointer"], 16)
            raw_flag = int(event["flag"])
            object_events.append({
                "local_id": names.object_local_names[(map_info.name, int(event["local_id"]))],
                "graphics_id": target_gfx.get(int(event["graphics_id"]), f"OBJ_EVENT_GFX_VAR_{int(event['graphics_id']) - 240:X}" if int(event["graphics_id"]) >= 240 else str(event["graphics_id"])),
                "x": event["x"], "y": event["y"], "elevation": event["elevation"],
                "movement_type": target_movement.get(int(event["movement_type"]), str(event["movement_type"])),
                "movement_range_x": event["movement_range_x"], "movement_range_y": event["movement_range_y"],
                "trainer_type": target_trainer_types.get(int(event["trainer_type"]), str(event["trainer_type"])),
                "trainer_sight_or_berry_tree_id": str(event["trainer_sight_or_berry_tree_id"]),
                "script": registry.entries.get(pointer, "0x0"),
                "flag": names.flag(raw_flag),
            })

        coord_events: list[dict[str, object]] = []
        for event in map_info.metadata["coord_events"]:  # type: ignore[index]
            pointer = int(event["script_pointer"], 16)
            if pointer == 0:
                coord_events.append({
                    "type": "weather", "x": event["x"], "y": event["y"], "elevation": event["elevation"],
                    "weather": coord_weather.get(int(event["trigger"]), str(event["trigger"])),
                })
            elif pointer in registry.entries:
                coord_events.append({
                    "type": "trigger", "x": event["x"], "y": event["y"], "elevation": event["elevation"],
                    "var": names.ensure_story_var(int(event["trigger"]), map_info.name),
                    "var_value": str(event["index"]), "script": registry.entries[pointer],
                })

        bg_events: list[dict[str, object]] = []
        facing = {0: "BG_EVENT_PLAYER_FACING_ANY", 1: "BG_EVENT_PLAYER_FACING_NORTH",
                  2: "BG_EVENT_PLAYER_FACING_SOUTH", 3: "BG_EVENT_PLAYER_FACING_EAST",
                  4: "BG_EVENT_PLAYER_FACING_WEST"}
        for index, event in enumerate(map_info.metadata["bg_events"]):  # type: ignore[index]
            kind = int(event["kind"])
            raw_data = int(event["data"], 16)
            if kind <= 4 and raw_data in registry.entries:
                bg_events.append({
                    "type": "sign", "x": event["x"], "y": event["y"], "elevation": event["elevation"],
                    "player_facing_dir": facing[kind], "script": registry.entries[raw_data],
                })
            elif kind == 7:
                item, hidden_id = raw_data & 0xFFFF, (raw_data >> 16) & 0xFF
                source_item_name = formatter.items.get(item, f"UNKNOWN_{item}")
                # A few corrupt/unused ROM events contain values far beyond
                # NUM_ITEMS. Keep the event but make collecting it harmless.
                item_name = formatter.items.get(item, "ITEM_NONE")
                flag_name = f"FLAG_HIDDEN_ITEM_{map_info.token}_{macro_token(source_item_name.removeprefix('ITEM_'))}_{index + 1}"
                flag_name = names.add_hidden_flag(flag_name)
                bg_events.append({
                    "type": "hidden_item", "x": event["x"], "y": event["y"], "elevation": event["elevation"],
                    "item": item_name, "flag": flag_name,
                })
            elif kind == 8:
                bg_events.append({
                    "type": "secret_base", "x": event["x"], "y": event["y"], "elevation": event["elevation"],
                    "secret_base_id": str(raw_data),
                })
        map_info.map_json["object_events"] = object_events
        map_info.map_json["coord_events"] = coord_events
        map_info.map_json["bg_events"] = bg_events
        (map_info.directory / "map.json").write_text(json.dumps(map_info.map_json, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")

    custom_flags = sorted(
        (names.flag_target_values[source], name)
        for source, name in names.flag_names.items()
        if name not in SYSTEM_FLAG_NAMES.values() and not name.startswith("FLAG_TEMP_")
    )
    custom_vars = sorted(
        (names.var_target_values[source], name)
        for source, name in names.var_names.items()
        if not name.startswith("VAR_TEMP_") and not name.startswith("VAR_0x") and name not in names.target_vars.values()
    )
    custom_trainers = sorted((value, name) for value, name in names.trainer_names.items())
    replace_generated_constants(root / "include/constants/flags.h", "flags", [f"#define {name:<72} 0x{value:03X}" for value, name in custom_flags])
    replace_generated_constants(root / "include/constants/vars.h", "vars", [f"#define {name:<72} 0x{value:04X}" for value, name in custom_vars])
    replace_generated_constants(root / "include/constants/opponents.h", "trainers", [f"#define {name:<72} {value}" for value, name in custom_trainers])
    write_pory_files(root, maps, map_scripts, registry, names, formatter)
    update_event_includes(root, maps)

    report = {
        "source_rom": str(rom_path), "source_sha1": digest,
        "maps": len(maps), "object_events": sum(len(item.metadata["object_events"]) for item in maps),
        "coord_events": sum(len(item.metadata["coord_events"]) for item in maps),
        "bg_events": sum(len(item.metadata["bg_events"]) for item in maps),
        "script_entries": len(registry.entries), "instructions": len(registry.instructions),
        "texts": len(registry.text_labels), "movements": len(registry.movement_labels),
        "marts": len(registry.mart_labels), "invalid_script_pointers": len(registry.invalid_roots),
        "flag_remap": {
            f"0x{source:X}": {"name": names.flag_names[source], "target": f"0x{target:X}"}
            for source, target in sorted(names.flag_target_values.items())
            if source < 0x100000
        },
        "var_remap": {
            f"0x{source:X}": {"name": names.var_names[source], "target": f"0x{target:X}"}
            for source, target in sorted(names.var_target_values.items())
        },
    }
    (root / "data/maps/naranja_event_import.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    return report


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("rom", type=Path)
    parser.add_argument("--repo", type=Path, default=Path.cwd())
    parser.add_argument("--pokeruby", type=Path, required=True)
    parser.add_argument("--analyze", action="store_true")
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    data = args.rom.read_bytes()
    specs = read_command_specs(args.pokeruby)
    if args.analyze:
        print(json.dumps(analyze_roots(args.repo, data, specs), indent=2))
        return
    print(json.dumps(import_events(args.repo, args.pokeruby, args.rom, data, specs), indent=2))


if __name__ == "__main__":
    main()
