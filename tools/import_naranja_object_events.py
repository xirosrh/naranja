#!/usr/bin/env python3
"""Import Naranja Beta 2 overworld/object-event graphics into Emerald slots."""

from __future__ import annotations

import argparse
import binascii
import re
import struct
import zlib
from pathlib import Path


ROM_BASE = 0x08000000
ROM_SIZE = 0x01000000
NUM_RUBY_OBJECT_EVENT_GFX = 218
GRAPHICS_INFO_TABLE = 0x0836DC58
PALETTE_TABLE = 0x0837377C
NUM_OBJECT_EVENT_PALETTES = 27

KNOWN_CONSTANT_RENAMES = {
    "OBJ_EVENT_GFX_BRENDAN_NORMAL": "OBJ_EVENT_GFX_ASH_NORMAL",
    "OBJ_EVENT_GFX_BRENDAN_MACH_BIKE": "OBJ_EVENT_GFX_ASH_MACH_BIKE",
    "OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE": "OBJ_EVENT_GFX_ASH_ACRO_BIKE",
    "OBJ_EVENT_GFX_BRENDAN_SURFING": "OBJ_EVENT_GFX_ASH_SURFING",
    "OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE": "OBJ_EVENT_GFX_ASH_FIELD_MOVE",
    "OBJ_EVENT_GFX_MAY_NORMAL": "OBJ_EVENT_GFX_MISTY_NORMAL",
    "OBJ_EVENT_GFX_MAY_MACH_BIKE": "OBJ_EVENT_GFX_MISTY_MACH_BIKE",
    "OBJ_EVENT_GFX_MAY_ACRO_BIKE": "OBJ_EVENT_GFX_MISTY_ACRO_BIKE",
    "OBJ_EVENT_GFX_MAY_SURFING": "OBJ_EVENT_GFX_MISTY_SURFING",
    "OBJ_EVENT_GFX_MAY_FIELD_MOVE": "OBJ_EVENT_GFX_MISTY_FIELD_MOVE",
    "OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL": "OBJ_EVENT_GFX_RIVAL_ASH_NORMAL",
    "OBJ_EVENT_GFX_RIVAL_BRENDAN_MACH_BIKE": "OBJ_EVENT_GFX_RIVAL_ASH_MACH_BIKE",
    "OBJ_EVENT_GFX_RIVAL_BRENDAN_ACRO_BIKE": "OBJ_EVENT_GFX_RIVAL_ASH_ACRO_BIKE",
    "OBJ_EVENT_GFX_RIVAL_BRENDAN_SURFING": "OBJ_EVENT_GFX_RIVAL_ASH_SURFING",
    "OBJ_EVENT_GFX_RIVAL_BRENDAN_FIELD_MOVE": "OBJ_EVENT_GFX_RIVAL_ASH_FIELD_MOVE",
    "OBJ_EVENT_GFX_RIVAL_MAY_NORMAL": "OBJ_EVENT_GFX_RIVAL_MISTY_NORMAL",
    "OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE": "OBJ_EVENT_GFX_RIVAL_MISTY_MACH_BIKE",
    "OBJ_EVENT_GFX_RIVAL_MAY_ACRO_BIKE": "OBJ_EVENT_GFX_RIVAL_MISTY_ACRO_BIKE",
    "OBJ_EVENT_GFX_RIVAL_MAY_SURFING": "OBJ_EVENT_GFX_RIVAL_MISTY_SURFING",
    "OBJ_EVENT_GFX_RIVAL_MAY_FIELD_MOVE": "OBJ_EVENT_GFX_RIVAL_MISTY_FIELD_MOVE",
    "OBJ_EVENT_GFX_BRENDAN_UNDERWATER": "OBJ_EVENT_GFX_ASH_UNDERWATER",
    "OBJ_EVENT_GFX_MAY_UNDERWATER": "OBJ_EVENT_GFX_MISTY_UNDERWATER",
    "OBJ_EVENT_GFX_BRENDAN_FISHING": "OBJ_EVENT_GFX_ASH_FISHING",
    "OBJ_EVENT_GFX_MAY_FISHING": "OBJ_EVENT_GFX_MISTY_FISHING",
    "OBJ_EVENT_GFX_BRENDAN_WATERING": "OBJ_EVENT_GFX_ASH_WATERING",
    "OBJ_EVENT_GFX_MAY_WATERING": "OBJ_EVENT_GFX_MISTY_WATERING",
    "OBJ_EVENT_GFX_BRENDAN_DECORATING": "OBJ_EVENT_GFX_ASH_DECORATING",
    "OBJ_EVENT_GFX_MAY_DECORATING": "OBJ_EVENT_GFX_MISTY_DECORATING",
    "OBJ_EVENT_GFX_LINK_BRENDAN": "OBJ_EVENT_GFX_LINK_ASH",
    "OBJ_EVENT_GFX_LINK_MAY": "OBJ_EVENT_GFX_LINK_MISTY",
    "OBJ_EVENT_GFX_RAYQUAZA_STILL": "OBJ_EVENT_GFX_WOMAN_8",
    "OBJ_EVENT_GFX_PROF_BIRCH": "OBJ_EVENT_GFX_OAK",
    "OBJ_EVENT_GFX_AQUA_MEMBER_M": "OBJ_EVENT_GFX_BUTCH",
    "OBJ_EVENT_GFX_AQUA_MEMBER_F": "OBJ_EVENT_GFX_CASSIDY",
    "OBJ_EVENT_GFX_MAGMA_MEMBER_M": "OBJ_EVENT_GFX_JAMES",
    "OBJ_EVENT_GFX_MAGMA_MEMBER_F": "OBJ_EVENT_GFX_JESSIE",
    "OBJ_EVENT_GFX_ROXANNE": "OBJ_EVENT_GFX_HERACROSS",
    "OBJ_EVENT_GFX_BRAWLY": "OBJ_EVENT_GFX_DANNY",
    "OBJ_EVENT_GFX_STEVEN": "OBJ_EVENT_GFX_GARY",
    "OBJ_EVENT_GFX_WALLY": "OBJ_EVENT_GFX_TRACEY",
    "OBJ_EVENT_GFX_VIGOROTH_CARRYING_BOX": "OBJ_EVENT_GFX_MACHOKE_CARRYING_BOX",
    "OBJ_EVENT_GFX_VIGOROTH_FACING_AWAY": "OBJ_EVENT_GFX_MACHOKE_FACING_AWAY",
    "OBJ_EVENT_GFX_RAYQUAZA": "OBJ_EVENT_GFX_DRAGONITE",
    "OBJ_EVENT_GFX_ZIGZAGOON_2": "OBJ_EVENT_GFX_MEOWTH",
}


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def is_rom_pointer(value: int, size: int) -> bool:
    return ROM_BASE <= value < ROM_BASE + size and value % 4 == 0


def find_pointer_runs(data: bytes, minimum: int) -> list[tuple[int, int]]:
    runs: list[tuple[int, int]] = []
    start = -1
    count = 0
    for offset in range(0, len(data) - 3, 4):
        if is_rom_pointer(u32(data, offset), len(data)):
            if start < 0:
                start = offset
            count += 1
        else:
            if count >= minimum:
                runs.append((start, count))
            start = -1
            count = 0
    if count >= minimum:
        runs.append((start, count))
    return runs


def graphics_info_score(data: bytes, pointer: int) -> int:
    offset = pointer - ROM_BASE
    if not 0 <= offset <= len(data) - 0x24:
        return 0
    score = 0
    if u16(data, offset) == 0xFFFF:
        score += 2
    if u16(data, offset + 6) in (32, 64, 128, 256, 512, 1024, 2048):
        score += 2
    if u16(data, offset + 8) in (8, 16, 32, 64):
        score += 1
    if u16(data, offset + 10) in (8, 16, 32, 64):
        score += 1
    if data[offset + 13] <= 2:
        score += 1
    score += sum(
        is_rom_pointer(u32(data, offset + field), len(data))
        for field in (0x10, 0x14, 0x18, 0x1C, 0x20)
    )
    return score


def find_graphics_info_table(data: bytes) -> list[tuple[int, int]]:
    candidates: list[tuple[int, int]] = []
    for run_offset, run_count in find_pointer_runs(data, NUM_RUBY_OBJECT_EVENT_GFX):
        for first in range(run_count - NUM_RUBY_OBJECT_EVENT_GFX + 1):
            table_offset = run_offset + first * 4
            score = sum(
                graphics_info_score(data, u32(data, table_offset + index * 4))
                for index in range(NUM_RUBY_OBJECT_EVENT_GFX)
            )
            candidates.append((score, table_offset))
    return sorted(candidates, reverse=True)


def find_palette_tables(data: bytes, minimum: int = 8) -> list[tuple[int, int, list[int]]]:
    results: list[tuple[int, int, list[int]]] = []
    for start in range(0, len(data) - minimum * 8, 4):
        tags: list[int] = []
        offset = start
        while offset + 8 <= len(data):
            pointer = u32(data, offset)
            tag = u16(data, offset + 4)
            padding = u16(data, offset + 6)
            if not is_rom_pointer(pointer, len(data)) or not 0x1100 <= tag <= 0x11FF or padding != 0:
                break
            tags.append(tag)
            offset += 8
        if len(tags) >= minimum:
            results.append((start, len(tags), tags))
    return results


def read_graphics_info(
    data: bytes, graphics_id: int, table_address: int = GRAPHICS_INFO_TABLE
) -> dict[str, int]:
    table_offset = table_address - ROM_BASE
    pointer = u32(data, table_offset + graphics_id * 4)
    offset = pointer - ROM_BASE
    return {
        "pointer": pointer,
        "tile_tag": u16(data, offset),
        "palette_tag": u16(data, offset + 2),
        "reflection_palette_tag": u16(data, offset + 4),
        "size": u16(data, offset + 6),
        "width": u16(data, offset + 8),
        "height": u16(data, offset + 10),
        "flags": data[offset + 12],
        "tracks": data[offset + 13],
        "oam": u32(data, offset + 0x10),
        "subsprites": u32(data, offset + 0x14),
        "anims": u32(data, offset + 0x18),
        "images": u32(data, offset + 0x1C),
        "affine_anims": u32(data, offset + 0x20),
    }


def read_frame_blobs(data: bytes, info: dict[str, int], limit: int = 64) -> list[bytes]:
    """Read a sprite's frame-image table until its entries stop being valid."""
    table_offset = info["images"] - ROM_BASE
    frames: list[bytes] = []
    for frame_index in range(limit):
        entry = table_offset + frame_index * 8
        if not 0 <= entry <= len(data) - 8:
            break
        image_pointer = u32(data, entry)
        image_size = u32(data, entry + 4)
        if not is_rom_pointer(image_pointer, len(data)) or image_size != info["size"]:
            break
        image_offset = image_pointer - ROM_BASE
        if image_offset + image_size > len(data):
            break
        frames.append(data[image_offset : image_offset + image_size])
    return frames


def compare_vanilla_rom(data: bytes, vanilla: bytes, vanilla_table: int, vanilla_palette_table: int) -> None:
    changed: list[int] = []
    structural: list[int] = []
    for graphics_id in range(NUM_RUBY_OBJECT_EVENT_GFX):
        info = read_graphics_info(data, graphics_id)
        old_info = read_graphics_info(vanilla, graphics_id, vanilla_table)
        frames = read_frame_blobs(data, info)
        old_frames = read_frame_blobs(vanilla, old_info)
        shape = (info["width"], info["height"], info["size"], len(frames))
        old_shape = (old_info["width"], old_info["height"], old_info["size"], len(old_frames))
        if shape != old_shape:
            structural.append(graphics_id)
        if shape != old_shape or frames != old_frames or info["palette_tag"] != old_info["palette_tag"]:
            changed.append(graphics_id)
            print(
                f"{graphics_id:3d}: {old_shape} -> {shape}; "
                f"pal 0x{old_info['palette_tag']:04X} -> 0x{info['palette_tag']:04X}; "
                f"pixels={'changed' if frames != old_frames else 'same'}"
            )
    print(f"Changed graphics slots ({len(changed)}): " + ", ".join(map(str, changed)))
    print(f"Structural changes ({len(structural)}): " + ", ".join(map(str, structural)))

    current_palettes = object_event_palettes(data)
    old_palettes: dict[int, bytes] = {}
    table_offset = vanilla_palette_table - ROM_BASE
    for index in range(NUM_OBJECT_EVENT_PALETTES):
        entry = table_offset + index * 8
        pointer = u32(vanilla, entry)
        tag = u16(vanilla, entry + 4)
        old_palettes[tag] = vanilla[pointer - ROM_BASE : pointer - ROM_BASE + 32]
    changed_tags = sorted(
        tag for tag, palette in current_palettes.items() if old_palettes.get(tag) != palette
    )
    print("Changed palette tags: " + ", ".join(f"0x{tag:04X}" for tag in changed_tags))


def object_event_palettes(data: bytes) -> dict[int, bytes]:
    result: dict[int, bytes] = {}
    table_offset = PALETTE_TABLE - ROM_BASE
    for index in range(NUM_OBJECT_EVENT_PALETTES):
        entry = table_offset + index * 8
        pointer = u32(data, entry)
        tag = u16(data, entry + 4)
        offset = pointer - ROM_BASE
        result[tag] = data[offset : offset + 32]
    return result


def decode_4bpp_frame(raw: bytes, width: int, height: int) -> bytes:
    tiles_wide = width // 8
    tiles_high = height // 8
    expected = tiles_wide * tiles_high * 32
    # A few dynamic objects (notably berry trees) allocate a taller bounding
    # box than the current frame occupies. Empty tiles are transparent.
    raw = raw.ljust(expected, b"\0")
    pixels = bytearray(width * height)
    for tile_y in range(tiles_high):
        for tile_x in range(tiles_wide):
            tile_offset = (tile_y * tiles_wide + tile_x) * 32
            for y in range(8):
                for pair in range(4):
                    value = raw[tile_offset + y * 4 + pair]
                    x = pair * 2
                    row = (tile_y * 8 + y) * width + tile_x * 8
                    pixels[row + x] = value & 0xF
                    pixels[row + x + 1] = value >> 4
    return bytes(pixels)


def png_chunk(kind: bytes, payload: bytes) -> bytes:
    body = kind + payload
    return struct.pack(">I", len(payload)) + body + struct.pack(">I", binascii.crc32(body) & 0xFFFFFFFF)


def write_indexed_png(path: Path, width: int, height: int, pixels: bytes, palette: bytes) -> None:
    colors = bytearray()
    for index in range(16):
        value = struct.unpack_from("<H", palette, index * 2)[0]
        colors.extend(
            (
                ((value >> 0) & 31) * 255 // 31,
                ((value >> 5) & 31) * 255 // 31,
                ((value >> 10) & 31) * 255 // 31,
            )
        )
    rows = b"".join(b"\0" + pixels[y * width : (y + 1) * width] for y in range(height))
    png = bytearray(b"\x89PNG\r\n\x1a\n")
    png += png_chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 3, 0, 0, 0))
    png += png_chunk(b"PLTE", bytes(colors))
    png += png_chunk(b"tRNS", b"\0" + b"\xFF" * 15)
    png += png_chunk(b"IDAT", zlib.compress(rows, 9))
    png += png_chunk(b"IEND", b"")
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(png)


def write_palette(path: Path, palette: bytes) -> None:
    lines = ["JASC-PAL", "0100", "16"]
    for index in range(16):
        value = struct.unpack_from("<H", palette, index * 2)[0]
        lines.append(
            f"{((value >> 0) & 31) * 255 // 31} "
            f"{((value >> 5) & 31) * 255 // 31} "
            f"{((value >> 10) & 31) * 255 // 31}"
        )
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("\n".join(lines) + "\n", encoding="ascii")


def parse_constants(path: Path) -> tuple[dict[str, int], dict[int, str]]:
    text = path.read_text(encoding="utf-8")
    by_name = {
        name: int(value)
        for name, value in re.findall(r"^#define\s+(OBJ_EVENT_GFX_\w+)\s+(\d+)\b", text, re.M)
    }
    return by_name, {value: name for name, value in by_name.items()}


def parse_slot_tables(repo: Path) -> dict[int, str]:
    by_name, _ = parse_constants(repo / "include/constants/event_objects.h")
    pointers = (repo / "src/data/object_events/object_event_graphics_info_pointers.h").read_text(
        encoding="utf-8"
    )
    info_for_slot = {
        by_name[constant]: info
        for constant, info in re.findall(
            r"\[(OBJ_EVENT_GFX_\w+)\]\s*=\s*&gObjectEventGraphicsInfo_(\w+)", pointers
        )
        if constant in by_name and by_name[constant] < NUM_RUBY_OBJECT_EVENT_GFX
    }
    infos = (repo / "src/data/object_events/object_event_graphics_info.h").read_text(encoding="utf-8")
    table_for_info: dict[str, str] = {}
    for match in re.finditer(
        r"const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_(\w+)\s*=\s*\{(.*?)\n\};",
        infos,
        re.S,
    ):
        images = re.search(r"\.images\s*=\s*(\w+)", match.group(2))
        if images:
            table_for_info[match.group(1)] = images.group(1)
    return {
        slot: table_for_info[info]
        for slot, info in info_for_slot.items()
        if info in table_for_info
    }


def parse_pic_tables(repo: Path) -> dict[str, list[tuple[str, int, int, int]]]:
    text = (repo / "src/data/object_events/object_event_pic_tables.h").read_text(encoding="utf-8")
    result: dict[str, list[tuple[str, int, int, int]]] = {}
    for match in re.finditer(
        r"(?:static\s+)?const struct SpriteFrameImage\s+(\w+)\[\]\s*=\s*\{(.*?)\n\};",
        text,
        re.S,
    ):
        rows: list[tuple[str, int, int, int]] = []
        for symbol, tiles_wide, tiles_high, frame in re.findall(
            r"overworld_frame\((\w+),\s*(\d+),\s*(\d+),\s*(\d+)\)", match.group(2)
        ):
            rows.append((symbol, int(frame), int(tiles_wide) * 8, int(tiles_high) * 8))
        if not rows:
            for symbol in re.findall(r"obj_frame_tiles\((\w+)\)", match.group(2)):
                rows.append((symbol, 0, 0, 0))
        result[match.group(1)] = rows
    return result


def parse_graphics_assets(repo: Path) -> tuple[dict[str, Path], dict[str, Path]]:
    text = (repo / "src/data/object_events/object_event_graphics.h").read_text(encoding="utf-8")
    pics = {
        symbol: repo / relative
        for symbol, relative in re.findall(
            r"const u32\s+(gObjectEventPic_\w+)\[\]\s*=\s*INCGFX_U32\(\"([^\"]+\.png)\"",
            text,
        )
    }
    palettes = {
        symbol: repo / relative
        for symbol, relative in re.findall(
            r"const u16\s+(gObjectEventPal_\w+)\[\]\s*=\s*INCGFX_U16\(\"([^\"]+\.pal)\"",
            text,
        )
    }
    return pics, palettes


def parse_palette_assets(repo: Path, palette_assets: dict[str, Path]) -> dict[int, Path]:
    text = (repo / "src/event_object_movement.c").read_text(encoding="utf-8")
    tag_values = {
        name: int(value, 16)
        for name, value in re.findall(r"^#define\s+(OBJ_EVENT_PAL_TAG_\w+)\s+(0x[0-9A-Fa-f]+)", text, re.M)
    }
    result: dict[int, Path] = {}
    palette_table = re.search(
        r"sObjectEventSpritePalettes\[\]\s*=\s*\{(.*?)\n\};", text, re.S
    )
    if not palette_table:
        return result
    for symbol, tag_name in re.findall(
        r"\{\s*(gObjectEventPal_\w+),\s*(OBJ_EVENT_PAL_TAG_\w+)\s*\}", palette_table.group(1)
    ):
        if symbol in palette_assets and tag_name in tag_values:
            result[tag_values[tag_name]] = palette_assets[symbol]
    return result


def import_assets(data: bytes, repo: Path, pokeruby: Path) -> None:
    source_slot_tables = parse_slot_tables(pokeruby)
    source_pic_tables = parse_pic_tables(pokeruby)
    target_slot_tables = parse_slot_tables(repo)
    target_pic_tables = parse_pic_tables(repo)
    pic_assets, palette_assets = parse_graphics_assets(repo)
    palettes = object_event_palettes(data)
    gathered: dict[str, dict[int, tuple[bytes, int, int, bytes]]] = {}
    owners: dict[tuple[str, int], int] = {}
    skipped: list[tuple[int, str]] = []

    def unique_symbols(rows: list[tuple[str, int, int, int]]) -> list[str]:
        return list(dict.fromkeys(row[0] for row in rows))

    for graphics_id in range(NUM_RUBY_OBJECT_EVENT_GFX):
        source_table = source_slot_tables.get(graphics_id)
        target_table = target_slot_tables.get(graphics_id)
        source_rows = source_pic_tables.get(source_table or "", [])
        target_rows = target_pic_tables.get(target_table or "", [])
        if not source_rows or not target_rows:
            # Berry-tree images are selected dynamically and do not represent a
            # conventional object-event sprite sheet.
            if graphics_id not in (60, 61, 62):
                skipped.append(
                    (graphics_id, f"missing source/target table {source_table!r} -> {target_table!r}")
                )
            continue
        source_symbols = unique_symbols(source_rows)
        target_symbols = unique_symbols(target_rows)
        if len(source_symbols) == len(target_symbols):
            symbol_map = {
                source: [target]
                for source, target in zip(source_symbols, target_symbols)
            }
        elif len(source_symbols) == 1 and len(target_symbols) == 2:
            # Emerald keeps separate walking and running sheets for the player,
            # link player, and rival. Ruby/Naranja stores a single nine-frame
            # sheet, so mirror it into both existing Emerald assets.
            symbol_map = {source_symbols[0]: target_symbols}
        else:
            skipped.append(
                (
                    graphics_id,
                    f"asset partition mismatch {source_symbols} -> {target_symbols}",
                )
            )
            continue
        info = read_graphics_info(data, graphics_id)
        image_table = info["images"] - ROM_BASE
        palette = palettes.get(info["palette_tag"], bytes(32))
        for row_index, (source_symbol, frame_index, row_width, row_height) in enumerate(source_rows):
            entry = image_table + row_index * 8
            image_pointer = u32(data, entry)
            image_size = u32(data, entry + 4)
            width = row_width or info["width"]
            height = row_height or info["height"]
            expected_size = width * height // 2
            if not is_rom_pointer(image_pointer, len(data)) or image_size != expected_size:
                skipped.append((graphics_id, f"invalid ROM frame {row_index} for {source_table}"))
                break
            raw = data[image_pointer - ROM_BASE : image_pointer - ROM_BASE + image_size]
            for symbol in symbol_map[source_symbol]:
                if symbol not in pic_assets:
                    skipped.append((graphics_id, f"missing target asset for {symbol}"))
                    break
                key = (symbol, frame_index)
                existing = gathered.setdefault(symbol, {}).get(frame_index)
                value = (raw, width, height, palette)
                if existing is not None and existing[:3] != value[:3]:
                    raise SystemExit(
                        f"conflicting graphics for {symbol} frame {frame_index}: "
                        f"slots {owners[key]} and {graphics_id}"
                    )
                gathered[symbol][frame_index] = value
                owners[key] = graphics_id

    written = 0
    for symbol, frames in gathered.items():
        max_frame = max(frames)
        raw0, width, height, palette = frames[min(frames)]
        del raw0
        pixels = bytearray(width * (max_frame + 1) * height)
        for frame_index in range(max_frame + 1):
            if frame_index not in frames:
                raise SystemExit(f"missing {symbol} frame {frame_index}")
            raw, frame_width, frame_height, _ = frames[frame_index]
            if (frame_width, frame_height) != (width, height):
                raise SystemExit(f"mixed frame dimensions for {symbol}")
            decoded = decode_4bpp_frame(raw, width, height)
            strip_width = width * (max_frame + 1)
            for y in range(height):
                source = y * width
                target = y * strip_width + frame_index * width
                pixels[target : target + width] = decoded[source : source + width]
        write_indexed_png(pic_assets[symbol], width * (max_frame + 1), height, bytes(pixels), palette)
        written += 1

    palette_paths = parse_palette_assets(repo, palette_assets)
    written_palettes = 0
    for tag, palette in palettes.items():
        path = palette_paths.get(tag)
        if path:
            write_palette(path, palette)
            written_palettes += 1
    print(f"Wrote {written} existing object-event sprite sheets and {written_palettes} palettes.")
    for graphics_id, reason in skipped:
        print(f"Skipped slot {graphics_id}: {reason}")


def sync_pic_tables(repo: Path, pokeruby: Path) -> None:
    source_slot_tables = parse_slot_tables(pokeruby)
    source_tables = parse_pic_tables(pokeruby)
    target_slot_tables = parse_slot_tables(repo)
    target_tables = parse_pic_tables(repo)
    replacements: dict[str, list[tuple[str, int, int, int]]] = {}
    skipped: list[tuple[int, str]] = []

    def unique_symbols(rows: list[tuple[str, int, int, int]]) -> list[str]:
        return list(dict.fromkeys(row[0] for row in rows))

    for graphics_id in range(NUM_RUBY_OBJECT_EVENT_GFX):
        if graphics_id in (60, 61, 62):
            continue
        source_table = source_slot_tables.get(graphics_id)
        target_table = target_slot_tables.get(graphics_id)
        source_rows = source_tables.get(source_table or "", [])
        target_rows = target_tables.get(target_table or "", [])
        if not source_rows or not target_rows:
            skipped.append((graphics_id, "missing source or target frame table"))
            continue
        source_symbols = unique_symbols(source_rows)
        target_symbols = unique_symbols(target_rows)
        if len(source_symbols) == len(target_symbols):
            symbol_map = dict(zip(source_symbols, target_symbols))
            translated = [
                (symbol_map[symbol], frame, width, height)
                for symbol, frame, width, height in source_rows
            ]
        elif len(source_symbols) == 1 and len(target_symbols) == 2:
            translated = [
                (target_symbol, frame, width, height)
                for target_symbol in target_symbols
                for _, frame, width, height in source_rows
            ]
        else:
            skipped.append(
                (graphics_id, f"asset partition mismatch {source_symbols} -> {target_symbols}")
            )
            continue
        previous = replacements.get(target_table)
        if previous is not None and previous != translated:
            skipped.append((graphics_id, f"shared target table conflict for {target_table}"))
            continue
        replacements[target_table] = translated

    path = repo / "src/data/object_events/object_event_pic_tables.h"
    text = path.read_text(encoding="utf-8")
    changed = 0
    for table, rows in replacements.items():
        pattern = re.compile(
            rf"((?:static\s+)?const struct SpriteFrameImage\s+{re.escape(table)}\[\]\s*=\s*\{{).*?(\n\}};)",
            re.S,
        )
        body = "".join(
            f"\n    overworld_frame({symbol}, {width // 8}, {height // 8}, {frame}),"
            for symbol, frame, width, height in rows
        )
        updated, count = pattern.subn(rf"\1{body}\2", text, count=1)
        if count:
            text = updated
            changed += 1
        else:
            skipped.append((-1, f"could not rewrite {table}"))
    path.write_text(text, encoding="utf-8", newline="")
    print(f"Synchronized {changed} existing Emerald frame tables with the Ruby/Naranja layout.")
    for graphics_id, reason in skipped:
        print(f"Skipped frame-table slot {graphics_id}: {reason}")


def rename_known_constants(repo: Path) -> None:
    changed = 0
    roots = [repo / name for name in ("include", "src", "data", "tools")]
    suffixes = {".c", ".h", ".inc", ".json", ".pory", ".py", ".s"}
    for root in roots:
        for path in root.rglob("*"):
            if not path.is_file() or path.suffix not in suffixes:
                continue
            if path.name == Path(__file__).name and path.parent.name == "tools":
                continue
            try:
                original = path.read_text(encoding="utf-8")
            except UnicodeDecodeError:
                continue
            updated = original
            for old, new in KNOWN_CONSTANT_RENAMES.items():
                updated = updated.replace(old, new)
            if updated != original:
                path.write_text(updated, encoding="utf-8", newline="")
                changed += 1
    print(f"Renamed known Naranja object-event constants in {changed} files.")


def extract_previews(data: bytes, output: Path) -> None:
    palettes = object_event_palettes(data)
    for graphics_id in range(NUM_RUBY_OBJECT_EVENT_GFX):
        info = read_graphics_info(data, graphics_id)
        image_table = info["images"] - ROM_BASE
        image_pointer = u32(data, image_table)
        image_size = u32(data, image_table + 4)
        raw_offset = image_pointer - ROM_BASE
        raw = data[raw_offset : raw_offset + image_size]
        pixels = decode_4bpp_frame(raw, info["width"], info["height"])
        palette = palettes.get(info["palette_tag"], bytes(32))
        write_indexed_png(output / f"{graphics_id:03d}.png", info["width"], info["height"], pixels, palette)


def create_contact_sheet(preview_dir: Path, pokeruby: Path, output: Path) -> None:
    try:
        from PIL import Image, ImageDraw
    except ImportError as error:
        raise SystemExit("Pillow is required for --contact-sheet") from error
    constants = (pokeruby / "include/constants/event_objects.h").read_text(encoding="utf-8")
    names = {
        int(value): name.removeprefix("OBJ_EVENT_GFX_")
        for name, value in re.findall(r"#define\s+(OBJ_EVENT_GFX_\w+)\s+(\d+)\b", constants)
    }
    columns, cell_width, cell_height = 10, 150, 105
    rows = (NUM_RUBY_OBJECT_EVENT_GFX + columns - 1) // columns
    sheet = Image.new("RGB", (columns * cell_width, rows * cell_height), (36, 36, 40))
    draw = ImageDraw.Draw(sheet)
    for graphics_id in range(NUM_RUBY_OBJECT_EVENT_GFX):
        image = Image.open(preview_dir / f"{graphics_id:03d}.png").convert("RGBA")
        scale = min(3, max(1, min((cell_width - 8) // image.width, (cell_height - 30) // image.height)))
        image = image.resize((image.width * scale, image.height * scale), Image.Resampling.NEAREST)
        cell_x = (graphics_id % columns) * cell_width
        cell_y = (graphics_id // columns) * cell_height
        sheet.paste(image, (cell_x + (cell_width - image.width) // 2, cell_y + 18), image)
        draw.text((cell_x + 3, cell_y + 3), f"{graphics_id:03d} {names.get(graphics_id, '?')}", fill="white")
    output.parent.mkdir(parents=True, exist_ok=True)
    sheet.save(output)


def report_graphics_info(data: bytes) -> None:
    infos = [read_graphics_info(data, graphics_id) for graphics_id in range(NUM_RUBY_OBJECT_EVENT_GFX)]
    image_tables = sorted({info["images"] for info in infos})
    for graphics_id, info in enumerate(infos):
        table = info["images"]
        table_offset = table - ROM_BASE
        frame_count = 0
        while table_offset + (frame_count + 1) * 8 <= len(data):
            address = table_offset + frame_count * 8
            if frame_count and ROM_BASE + address in image_tables:
                break
            image_pointer = u32(data, address)
            image_size = u32(data, address + 4)
            if not is_rom_pointer(image_pointer, len(data)) or image_size != info["size"]:
                break
            frame_count += 1
        print(
            f"{graphics_id:3d} info=0x{info['pointer']:08X} pal=0x{info['palette_tag']:04X} "
            f"{info['width']:2d}x{info['height']:2d} size={info['size']:4d} "
            f"images=0x{table:08X} frames={frame_count:2d}"
        )


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("rom", type=Path)
    parser.add_argument("--scan", action="store_true")
    parser.add_argument("--report", action="store_true")
    parser.add_argument("--extract-previews", type=Path)
    parser.add_argument("--contact-sheet", type=Path)
    parser.add_argument("--pokeruby", type=Path)
    parser.add_argument("--compare-vanilla-rom", type=Path)
    parser.add_argument("--vanilla-table", type=lambda value: int(value, 0), default=0x082F164C)
    parser.add_argument("--vanilla-palette-table", type=lambda value: int(value, 0), default=0x082F5628)
    parser.add_argument("--import-assets", type=Path, metavar="POKEEMERALD_REPO")
    parser.add_argument("--rename-known", type=Path, metavar="POKEEMERALD_REPO")
    parser.add_argument("--sync-pic-tables", type=Path, metavar="POKERUBY_REPO")
    args = parser.parse_args()
    data = args.rom.read_bytes()
    if len(data) != ROM_SIZE:
        raise SystemExit(f"expected a 16 MiB ROM, got {len(data)} bytes")
    if args.scan:
        for offset, count in find_pointer_runs(data, NUM_RUBY_OBJECT_EVENT_GFX):
            print(f"0x{ROM_BASE + offset:08X}: {count} ROM pointers")
        print("Best graphics-info table candidates:")
        for score, offset in find_graphics_info_table(data)[:10]:
            print(f"0x{ROM_BASE + offset:08X}: score {score}")
        print("Palette table candidates:")
        for offset, count, tags in find_palette_tables(data):
            rendered_tags = ", ".join(f"0x{tag:04X}" for tag in tags[:12])
            print(f"0x{ROM_BASE + offset:08X}: {count} entries ({rendered_tags})")
    if args.report:
        report_graphics_info(data)
    if args.extract_previews:
        extract_previews(data, args.extract_previews)
    if args.contact_sheet:
        if not args.extract_previews or not args.pokeruby:
            parser.error("--contact-sheet requires --extract-previews and --pokeruby")
        create_contact_sheet(args.extract_previews, args.pokeruby, args.contact_sheet)
    if args.compare_vanilla_rom:
        compare_vanilla_rom(
            data,
            args.compare_vanilla_rom.read_bytes(),
            args.vanilla_table,
            args.vanilla_palette_table,
        )
    if args.import_assets:
        if not args.pokeruby:
            parser.error("--import-assets requires --pokeruby")
        import_assets(data, args.import_assets.resolve(), args.pokeruby.resolve())
    if args.rename_known:
        rename_known_constants(args.rename_known.resolve())
    if args.sync_pic_tables:
        sync_pic_tables(Path.cwd().resolve(), args.sync_pic_tables.resolve())


if __name__ == "__main__":
    main()
