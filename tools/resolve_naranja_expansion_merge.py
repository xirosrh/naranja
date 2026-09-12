#!/usr/bin/env python3
"""Resolve the Naranja/emerald-expansion merge while preserving both datasets."""

import json
import re
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def blob(stage, path):
    try:
        spec = f":{stage}:{path}"
        return subprocess.check_output(
            ["git", "show", spec], cwd=ROOT, text=True, encoding="utf-8", stderr=subprocess.DEVNULL
        )
    except subprocess.CalledProcessError:
        # Once a conflict is staged Git discards stages 1-3. During an active
        # merge the same blobs remain addressable through the three commits.
        if stage == 1:
            commit = subprocess.check_output(
                ["git", "merge-base", "HEAD", "MERGE_HEAD"], cwd=ROOT, text=True
            ).strip()
        elif stage == 2:
            commit = "HEAD"
        elif stage == 3:
            commit = "MERGE_HEAD"
        else:
            raise
        return subprocess.check_output(
            ["git", "show", f"{commit}:{path}"], cwd=ROOT, text=True, encoding="utf-8"
        )


def write(path, text):
    (ROOT / path).write_text(text, encoding="utf-8", newline="\n")


def write_json(path, value):
    write(path, json.dumps(value, ensure_ascii=False, indent=2) + "\n")


def marked_block(text, begin, end):
    match = re.search(
        rf"(?ms)^[^\r\n]*{re.escape(begin)}[^\r\n]*\r?$.*?^[^\r\n]*{re.escape(end)}[^\r\n]*\r?$",
        text,
    )
    if not match:
        raise RuntimeError(f"Missing block {begin!r} ... {end!r}")
    return match.group(0)


def insert_before(text, anchor, addition):
    if addition.strip() in text:
        return text
    pos = text.find(anchor)
    if pos < 0:
        raise RuntimeError(f"Missing insertion anchor {anchor!r}")
    return text[:pos] + addition.rstrip() + "\n\n" + text[pos:]


def merge_map_groups():
    ours = json.loads(blob(2, "data/maps/map_groups.json"))
    theirs = json.loads(blob(3, "data/maps/map_groups.json"))
    naranja_names = [name for name in ours["group_order"] if name.startswith("gMapGroup_Naranja_")]
    order = list(theirs["group_order"])
    first_frlg = next((i for i, name in enumerate(order) if name.endswith("_Frlg")), len(order))
    order[first_frlg:first_frlg] = [name for name in naranja_names if name not in order]
    theirs["group_order"] = order
    for name in naranja_names:
        theirs[name] = ours[name]
    write_json("data/maps/map_groups.json", theirs)


def merge_layouts():
    ours = json.loads(blob(2, "data/layouts/layouts.json"))
    theirs = json.loads(blob(3, "data/layouts/layouts.json"))
    seen = {layout["id"] for layout in theirs["layouts"]}
    for layout in ours["layouts"]:
        if layout["id"].startswith("LAYOUT_NARANJA_") and layout["id"] not in seen:
            layout = dict(layout)
            layout["layout_version"] = "emerald"
            theirs["layouts"].append(layout)
    write_json("data/layouts/layouts.json", theirs)


def merge_region_sections():
    base = json.loads(blob(1, "src/data/region_map/region_map_sections.json"))["map_sections"]
    ours = json.loads(blob(2, "src/data/region_map/region_map_sections.json"))["map_sections"]
    theirs_doc = json.loads(blob(3, "src/data/region_map/region_map_sections.json"))
    theirs = theirs_doc["map_sections"]
    dynamic = next(i for i, entry in enumerate(base) if entry["id"] == "MAPSEC_DYNAMIC")
    for index in range(dynamic + 1):
        if ours[index] != base[index]:
            theirs[index] = ours[index]
    theirs_doc["map_sections"] = theirs
    write_json("src/data/region_map/region_map_sections.json", theirs_doc)


def add_naranja_region_fields():
    for path in sorted((ROOT / "data/maps").glob("Naranja_*/map.json")):
        doc = json.loads(path.read_text(encoding="utf-8"))
        if doc.get("region") != "REGION_HOENN":
            rebuilt = {}
            inserted = False
            for key, value in doc.items():
                rebuilt[key] = value
                if key == "id":
                    rebuilt["region"] = "REGION_HOENN"
                    inserted = True
            if not inserted:
                rebuilt["region"] = "REGION_HOENN"
            path.write_text(json.dumps(rebuilt, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")


def merge_generated_constant_block(path, kind):
    theirs = blob(3, path)
    block = marked_block(
        blob(2, path),
        f"BEGIN AUTO-GENERATED NARANJA EVENTS: {kind}",
        f"END AUTO-GENERATED NARANJA EVENTS: {kind}",
    )
    # Keep Naranja constants available in normal builds. Expansion places its
    # test-only constants at the end of both headers, so inserting at the first
    # #endif can accidentally nest the block inside a region or TESTING guard.
    write(path, insert_before(theirs, "#if TESTING", block))


def merge_event_scripts():
    theirs = blob(3, "data/event_scripts.s")
    block = marked_block(
        blob(2, "data/event_scripts.s"),
        "BEGIN AUTO-GENERATED NARANJA PORYSCRIPTS",
        "END AUTO-GENERATED NARANJA PORYSCRIPTS",
    )
    write("data/event_scripts.s", theirs.rstrip() + "\n\n" + block + "\n")


def merge_makefile():
    text = blob(3, "Makefile")
    tool_anchor = next(
        line for line in text.splitlines(True) if line.startswith("GFX") or line.startswith("SMOLTM")
    )
    text = text.replace(tool_anchor, tool_anchor + "SCRIPT        := $(TOOLS_DIR)/poryscript/poryscript$(EXE)\n", 1)
    generated_anchor = "# NOTE: Tools must have been built prior (FIXME)"
    text = insert_before(
        text,
        generated_anchor,
        "AUTO_GEN_TARGETS += $(patsubst %.pory,%.inc,$(shell find data/ -type f -name '*.pory'))",
    )
    rule = "%.pory: ;\n\ndata/%.inc: data/%.pory\n\t$(SCRIPT) -i $< -o $@ -fc tools/poryscript/font_config.json -cc tools/poryscript/command_config.json"
    pattern_anchor = next(
        line for line in text.splitlines(True) if re.match(r"^%\.(?:1bpp|4bpp):", line)
    )
    text = text.replace(pattern_anchor, rule + "\n\n" + pattern_anchor, 1)
    write("Makefile", text)


def merge_marked_append(path, begin, end, anchor):
    block = marked_block(blob(2, path), begin, end)
    write(path, insert_before(blob(3, path), anchor, block))


def constant_rename_map():
    pattern = re.compile(r"^#define\s+(OBJ_EVENT_GFX_[A-Z0-9_]+)\s+([^/\s]+)", re.M)
    base = {value: name for name, value in pattern.findall(blob(1, "include/constants/event_objects.h"))}
    ours = {value: name for name, value in pattern.findall(blob(2, "include/constants/event_objects.h"))}
    return {base[value]: ours[value] for value in base.keys() & ours.keys() if base[value] != ours[value]}


def mapsec_rename_map():
    base = json.loads(blob(1, "src/data/region_map/region_map_sections.json"))["map_sections"]
    ours = json.loads(blob(2, "src/data/region_map/region_map_sections.json"))["map_sections"]
    return {old["id"]: new["id"] for old, new in zip(base, ours) if old["id"] != new["id"]}


def replace_tokens(text, mapping):
    if not mapping:
        return text
    pattern = re.compile(r"\b(?:" + "|".join(map(re.escape, sorted(mapping, key=len, reverse=True))) + r")\b")
    return pattern.sub(lambda match: mapping[match.group(0)], text)


def apply_semantic_renames_globally(mapping):
    allowed = {".c", ".h", ".s", ".inc", ".pory", ".json", ".txt"}
    excluded = {
        "tools/import_naranja_object_events.py",
        "tools/resolve_naranja_expansion_merge.py",
    }
    paths = subprocess.check_output(["git", "ls-files", "-z"], cwd=ROOT).decode().split("\0")
    changed = 0
    for relative in paths:
        if not relative or relative in excluded or Path(relative).suffix.lower() not in allowed:
            continue
        path = ROOT / relative
        if not path.is_file():
            continue
        try:
            old = path.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        new = replace_tokens(old, mapping)
        if new != old:
            path.write_text(new, encoding="utf-8", newline="\n")
            changed += 1
    return changed


def merge_simple_sources(mapping):
    paths = [
        "src/cable_car.c",
        "src/field_player_avatar.c",
        "src/field_specials.c",
        "src/overworld.c",
        "src/pokenav_match_call_data.c",
        "src/region_map.c",
    ]
    for path in paths:
        write(path, replace_tokens(blob(3, path), mapping))

    new_game = replace_tokens(blob(3, "src/new_game.c"), mapping)
    new_game = new_game.replace(
        "SetWarpDestination(MAP_GROUP(MAP_INSIDE_OF_TRUCK), MAP_NUM(MAP_INSIDE_OF_TRUCK), WARP_ID_NONE, -1, -1);",
        "SetWarpDestination(MAP_GROUP(MAP_NARANJA_INSIDE_OF_TRUCK_G25_M40), MAP_NUM(MAP_NARANJA_INSIDE_OF_TRUCK_G25_M40), WARP_ID_NONE, -1, -1);",
    )
    write("src/new_game.c", new_game)


def extract_structs(text, declaration_prefix):
    result = {}
    start_pattern = re.compile(rf"(?m)^{re.escape(declaration_prefix)}(\w+)\[\]\s*=\s*\{{")
    for match in start_pattern.finditer(text):
        end = text.find("\n};", match.end())
        if end < 0:
            raise RuntimeError(f"Unterminated definition {match.group(1)}")
        end += 3
        result[match.group(1)] = text[match.start():end]
    return result


def collapse_ascending_pic_tables(text):
    pattern = re.compile(
        r"(?ms)^(static const struct SpriteFrameImage \w+\[\] = \{\n)(.*?)(^\};)"
    )
    frame_pattern = re.compile(
        r"^    overworld_frame\((\w+),\s*(\d+),\s*(\d+),\s*(\d+)\),?$"
    )

    def replace(match):
        lines = [line for line in match.group(2).splitlines() if line.strip()]
        frames = [frame_pattern.fullmatch(line) for line in lines]
        if len(frames) < 2 or any(frame is None for frame in frames):
            return match.group(0)
        symbol, width, height = frames[0].group(1, 2, 3)
        if any(frame.group(1, 2, 3) != (symbol, width, height) for frame in frames):
            return match.group(0)
        if [int(frame.group(4)) for frame in frames] != list(range(len(frames))):
            return match.group(0)
        return (
            match.group(1)
            + f"    overworld_ascending_frames({symbol}, {width}, {height}),\n"
            + match.group(3)
        )

    return pattern.sub(replace, text)


def merge_pic_tables():
    path = "src/data/object_events/object_event_pic_tables.h"
    ours_text = blob(2, path)
    text = blob(3, path)
    prefix = "static const struct SpriteFrameImage "
    ours = extract_structs(ours_text, prefix)
    theirs = extract_structs(text, prefix)
    # Add Naranja-only special tables before the first FRLG-only table/end of file.
    for name in ("sPicTable_Woman8", "sPicTable_MachokeCarryingBox", "sPicTable_MachokeFacingAway", "sPicTable_Rayquaza"):
        if name in ours and name not in theirs:
            text = text.rstrip() + "\n\n" + ours[name] + "\n"
    text = collapse_ascending_pic_tables(text)
    write(path, text)


def merge_object_graphics():
    path = "src/data/object_events/object_event_graphics.h"
    ours = blob(2, path)
    text = blob(3, path)
    wanted = (
        "gObjectEventPic_Woman8",
        "gObjectEventPic_MachokeCarryingBox",
        "gObjectEventPic_MachokeFacingAway",
        "gObjectEventPic_Rayquaza",
    )
    additions = []
    for symbol in wanted:
        match = re.search(rf"(?m)^const u32 {symbol}\[\].*$", ours)
        if not match:
            raise RuntimeError(f"Missing {symbol} in our graphics declarations")
        line = match.group(0).replace("pics/pokemon/", "pics/pokemon_old/")
        if symbol not in text:
            additions.append(line)
    if additions:
        text = text.rstrip() + "\n\n" + "\n".join(additions) + "\n"
    write(path, text)


def replace_initializer_field(text, struct_name, field, value):
    pattern = re.compile(
        rf"(const struct ObjectEventGraphicsInfo {re.escape(struct_name)}\s*=\s*\{{.*?)(\n\}};)", re.S
    )
    match = pattern.search(text)
    if not match:
        raise RuntimeError(f"Missing object graphics info {struct_name}")
    body = match.group(1)
    field_pattern = re.compile(rf"(?m)^(\s*\.{re.escape(field)}\s*=\s*)[^,]+,")
    if not field_pattern.search(body):
        raise RuntimeError(f"Missing field {field} in {struct_name}")
    body = field_pattern.sub(rf"\g<1>{value},", body, count=1)
    return text[:match.start()] + body + match.group(2) + text[match.end():]


def merge_object_info(mapping):
    path = "src/data/object_events/object_event_graphics_info.h"
    text = replace_tokens(blob(3, path), mapping)
    text = text.replace("gObjectEventGraphicsInfo_RayquazaStill", "gObjectEventGraphicsInfo_Woman8")
    text = text.replace("gObjectEventGraphicsInfo_VigorothCarryingBox", "gObjectEventGraphicsInfo_MachokeCarryingBox")
    text = text.replace("gObjectEventGraphicsInfo_VigorothFacingAway", "gObjectEventGraphicsInfo_MachokeFacingAway")
    special = {
        "gObjectEventGraphicsInfo_Woman8": {
            "size": "256",
            "width": "16",
            "height": "32",
            "oam": "&gObjectEventBaseOam_16x32",
            "subspriteTables": "sOamTables_16x32",
            "anims": "sAnimTable_Standard",
            "images": "sPicTable_Woman8",
        },
        "gObjectEventGraphicsInfo_MachokeCarryingBox": {
            "images": "sPicTable_MachokeCarryingBox",
            "anims": "sAnimTable_Standard",
        },
        "gObjectEventGraphicsInfo_MachokeFacingAway": {
            "images": "sPicTable_MachokeFacingAway",
            "anims": "sAnimTable_Standard",
        },
        "gObjectEventGraphicsInfo_Dragonite": {
            "size": "512",
            "width": "32",
            "height": "32",
            "oam": "&gObjectEventBaseOam_32x32",
            "subspriteTables": "sOamTables_32x32",
            "anims": "sAnimTable_Standard",
            "images": "sPicTable_Rayquaza",
        },
    }
    for struct_name, fields in special.items():
        for field, value in fields.items():
            text = replace_initializer_field(text, struct_name, field, value)
    write(path, text)


def merge_event_objects(mapping):
    write("include/constants/event_objects.h", replace_tokens(blob(3, "include/constants/event_objects.h"), mapping))


def disambiguate_frlg_meowth():
    # Naranja repurposes Emerald's Zigzagoon2 slot as Meowth. Expansion also
    # supplies a distinct FRLG Meowth, so keep the FRLG object under its suffix.
    for path in (
        "include/constants/event_objects.h",
        "src/data/object_events/object_event_graphics_info_pointers.h",
    ):
        text = (ROOT / path).read_text(encoding="utf-8")
        # Normalize any result from a previous run first, making this operation
        # idempotent even if a generated file already contains repeated suffixes.
        text = re.sub(
            r"\bOBJ_EVENT_GFX_MEOWTH(?:_FRLG)+\b",
            "OBJ_EVENT_GFX_MEOWTH",
            text,
        )
        split_at = text.rfind("OBJ_EVENT_GFX_RED_NORMAL")
        if split_at < 0:
            raise RuntimeError(f"Could not locate FRLG object section in {path}")
        text = text[:split_at] + re.sub(
            r"\bOBJ_EVENT_GFX_MEOWTH\b",
            "OBJ_EVENT_GFX_MEOWTH_FRLG",
            text[split_at:],
        )
        write(path, text)
    for path in sorted((ROOT / "data/maps").glob("*_Frlg/map.json")):
        text = path.read_text(encoding="utf-8")
        if "OBJ_EVENT_GFX_MEOWTH" in text:
            text = re.sub(
                r"\bOBJ_EVENT_GFX_MEOWTH(?:_FRLG)+\b",
                "OBJ_EVENT_GFX_MEOWTH_FRLG",
                text,
            )
            path.write_text(text, encoding="utf-8")


def main():
    merge_map_groups()
    merge_layouts()
    merge_region_sections()
    add_naranja_region_fields()
    merge_generated_constant_block("include/constants/flags.h", "flags")
    merge_generated_constant_block("include/constants/vars.h", "vars")
    merge_event_scripts()
    merge_makefile()

    for path, kind, anchor in (
        ("src/data/tilesets/graphics.h", "graphics", "#else"),
        ("src/data/tilesets/headers.h", "headers", "#else"),
        ("src/data/tilesets/metatiles.h", "metatiles", "#else"),
        ("include/tileset_anims.h", "animations", "#endif"),
    ):
        merge_marked_append(
            path,
            f"BEGIN AUTO-GENERATED NARANJA TILESETS: {kind}",
            f"END AUTO-GENERATED NARANJA TILESETS: {kind}",
            anchor,
        )
    merge_marked_append(
        "src/tileset_anims.c",
        "BEGIN AUTO-GENERATED NARANJA TILESETS: animations",
        "END AUTO-GENERATED NARANJA TILESETS: animations",
        "// FRLG",
    )

    mapping = {}
    mapping.update(constant_rename_map())
    mapping.update(mapsec_rename_map())
    merge_event_objects(mapping)
    merge_simple_sources(mapping)
    merge_pic_tables()
    merge_object_graphics()
    merge_object_info(mapping)
    changed = apply_semantic_renames_globally(mapping)
    disambiguate_frlg_meowth()

    print(f"Resolved structured/text conflicts; applied {len(mapping)} semantic token renames in {changed} files.")


if __name__ == "__main__":
    main()
