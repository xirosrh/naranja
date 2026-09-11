#!/usr/bin/env python3
"""Import map layouts and tilesets from the Naranja Beta 2 Ruby ROM.

This importer is deliberately scoped to the known NaranjaB2.gba image. It
imports all 394 map headers, editable block layouts, referenced tilesets,
warps, connections, and raw event metadata. ROM scripts are not source code,
so generated maps use an empty map script and keep non-warp event records in a
sidecar JSON file for later decompilation.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
import unicodedata
import zlib
from collections import defaultdict
from dataclasses import dataclass
from pathlib import Path


ROM_BASE = 0x08000000
NARANJA_SHA1 = "4a8b88c0f16500c0e8295c4adf61c4036a3876d0"
MAP_GROUPS_OFFSET = 0x00308588
REGION_MAP_ENTRIES_OFFSET = 0x003E73C4
REGION_MAP_ENTRY_COUNT = 88

# Naranja Beta 2 keeps Ruby's 88-entry Hoenn MAPSEC value range, but replaces
# its contents with the Orange Archipelago.  Keep the values stable so save
# data and map headers retain their original ROM meaning.
HOENN_MAPSEC_IDS = [
    "MAPSEC_LITTLEROOT_TOWN", "MAPSEC_OLDALE_TOWN", "MAPSEC_DEWFORD_TOWN",
    "MAPSEC_LAVARIDGE_TOWN", "MAPSEC_FALLARBOR_TOWN", "MAPSEC_VERDANTURF_TOWN",
    "MAPSEC_PACIFIDLOG_TOWN", "MAPSEC_PETALBURG_CITY", "MAPSEC_SLATEPORT_CITY",
    "MAPSEC_MAUVILLE_CITY", "MAPSEC_RUSTBORO_CITY", "MAPSEC_FORTREE_CITY",
    "MAPSEC_LILYCOVE_CITY", "MAPSEC_MOSSDEEP_CITY", "MAPSEC_SOOTOPOLIS_CITY",
    "MAPSEC_EVER_GRANDE_CITY", "MAPSEC_ROUTE_101", "MAPSEC_ROUTE_102",
    "MAPSEC_ROUTE_103", "MAPSEC_ROUTE_104", "MAPSEC_ROUTE_105", "MAPSEC_ROUTE_106",
    "MAPSEC_ROUTE_107", "MAPSEC_ROUTE_108", "MAPSEC_ROUTE_109", "MAPSEC_ROUTE_110",
    "MAPSEC_ROUTE_111", "MAPSEC_ROUTE_112", "MAPSEC_ROUTE_113", "MAPSEC_ROUTE_114",
    "MAPSEC_ROUTE_115", "MAPSEC_ROUTE_116", "MAPSEC_ROUTE_117", "MAPSEC_ROUTE_118",
    "MAPSEC_ROUTE_119", "MAPSEC_ROUTE_120", "MAPSEC_ROUTE_121", "MAPSEC_ROUTE_122",
    "MAPSEC_ROUTE_123", "MAPSEC_ROUTE_124", "MAPSEC_ROUTE_125", "MAPSEC_ROUTE_126",
    "MAPSEC_ROUTE_127", "MAPSEC_ROUTE_128", "MAPSEC_ROUTE_129", "MAPSEC_ROUTE_130",
    "MAPSEC_ROUTE_131", "MAPSEC_ROUTE_132", "MAPSEC_ROUTE_133", "MAPSEC_ROUTE_134",
    "MAPSEC_UNDERWATER_124", "MAPSEC_UNDERWATER_126", "MAPSEC_UNDERWATER_127",
    "MAPSEC_UNDERWATER_128", "MAPSEC_UNDERWATER_SOOTOPOLIS", "MAPSEC_GRANITE_CAVE",
    "MAPSEC_MT_CHIMNEY", "MAPSEC_SAFARI_ZONE", "MAPSEC_BATTLE_FRONTIER",
    "MAPSEC_PETALBURG_WOODS", "MAPSEC_RUSTURF_TUNNEL", "MAPSEC_ABANDONED_SHIP",
    "MAPSEC_NEW_MAUVILLE", "MAPSEC_METEOR_FALLS", "MAPSEC_METEOR_FALLS2",
    "MAPSEC_MT_PYRE", "MAPSEC_AQUA_HIDEOUT_OLD", "MAPSEC_SHOAL_CAVE",
    "MAPSEC_SEAFLOOR_CAVERN", "MAPSEC_UNDERWATER_SEAFLOOR_CAVERN",
    "MAPSEC_VICTORY_ROAD", "MAPSEC_MIRAGE_ISLAND", "MAPSEC_CAVE_OF_ORIGIN",
    "MAPSEC_SOUTHERN_ISLAND", "MAPSEC_FIERY_PATH", "MAPSEC_FIERY_PATH2",
    "MAPSEC_JAGGED_PASS", "MAPSEC_JAGGED_PASS2", "MAPSEC_SEALED_CHAMBER",
    "MAPSEC_UNDERWATER_SEALED_CHAMBER", "MAPSEC_SCORCHED_SLAB",
    "MAPSEC_ISLAND_CAVE", "MAPSEC_DESERT_RUINS", "MAPSEC_ANCIENT_TOMB",
    "MAPSEC_INSIDE_OF_TRUCK", "MAPSEC_SKY_PILLAR", "MAPSEC_SECRET_BASE",
    "MAPSEC_DYNAMIC",
]

NARANJA_MAPSEC_IDS = [
    "MAPSEC_PUERTO_DE_TANGELO", "MAPSEC_ISLA_TANGELO", "MAPSEC_7_ISLAS_POMELO",
    "MAPSEC_VALLE_CHARIZARD", "MAPSEC_ISLA_NAVEL", "MAPSEC_ISLA_MANDARINA",
    "MAPSEC_ISLA_HAMLIN", "MAPSEC_ISLA_VALENCIA", "MAPSEC_ISLA_MURCOTT",
    "MAPSEC_ISLA_MANDARIN", "MAPSEC_ISLA_TROVITA", "MAPSEC_ISLA_SHAMOUTI",
    "MAPSEC_ISLA_KUMQUAT", "MAPSEC_ISLA_MELLSWEET", "MAPSEC_ISLA_NUEVA",
    "MAPSEC_ISLA_POMELO", "MAPSEC_TANGELO", "MAPSEC_VALN_TANG", "MAPSEC_RUTA_AZUL",
    "MAPSEC_ISLAS", "MAPSEC_ISLA_MIKAN", "MAPSEC_ROUTE_106", "MAPSEC_ISLA_MORO",
    "MAPSEC_ROUTE_108", "MAPSEC_ROUTE_109", "MAPSEC_ROUTE_110", "MAPSEC_ROUTE_111",
    "MAPSEC_ROUTE_112", "MAPSEC_NORTE", "MAPSEC_CAMINO_FRIO", "MAPSEC_ISLA_PINKAN",
    "MAPSEC_MANDARIN", "MAPSEC_DESIERTO", "MAPSEC_ROUTE_118", "MAPSEC_ROUTE_119",
    "MAPSEC_ROUTE_120", "MAPSEC_ROUTE_121", "MAPSEC_ROUTE_122", "MAPSEC_ROUTE_123",
    "MAPSEC_ROUTE_124", "MAPSEC_ROUTE_125", "MAPSEC_ROUTE_126", "MAPSEC_ROUTE_666",
    "MAPSEC_ROUTE_128", "MAPSEC_ROUTE_129", "MAPSEC_ROUTE_130", "MAPSEC_ROUTE_131",
    "MAPSEC_ROUTE_132", "MAPSEC_ROUTE_133", "MAPSEC_ROUTE_134",
    "MAPSEC_UNDERWATER_ROUTE_124", "MAPSEC_UNDERWATER_ROUTE_126",
    "MAPSEC_UNDERWATER_ROUTE_666", "MAPSEC_UNDERWATER_ROUTE_128",
    "MAPSEC_UNDERWATER_ISLA_NUEVA", "MAPSEC_GRANITE_CAVE", "MAPSEC_MT_CHIMNEY",
    "MAPSEC_SAFARI", "MAPSEC_PUEBLO_PALETA", "MAPSEC_VALLE_DE_LAS_FLORES",
    "MAPSEC_CUEVA_DE_CRISTAL", "MAPSEC_ABANDONED_SHIP", "MAPSEC_NEW_MAUVILLE",
    "MAPSEC_CUEVA_KABUTO", "MAPSEC_CUEVA_KABUTO_2", "MAPSEC_BEMENTER",
    "MAPSEC_TEAM_HIDESHOAL_CAVE", "MAPSEC_SHOAL_CAVE", "MAPSEC_SEAFLOOR_CAVERN",
    "MAPSEC_UNDERWATER_SEAFLOOR_CAVERN", "MAPSEC_VICTORY_ROAD",
    "MAPSEC_MIRAGE_ISLAND", "MAPSEC_CAVE_OF_ORIGIN", "MAPSEC_SOUTHERN_ISLAND",
    "MAPSEC_FIERY_PATH", "MAPSEC_FIERY_PATH_2", "MAPSEC_JAGGED_PASS",
    "MAPSEC_JAGGED_PASS_2", "MAPSEC_SEALED_CHAMBER",
    "MAPSEC_UNDERWATER_SEALED_CHAMBER", "MAPSEC_SCORCHED_SLAB",
    "MAPSEC_ISLAND_CAVE", "MAPSEC_DESERT_RUINS", "MAPSEC_ANCIENT_TOMB",
    "MAPSEC_INSIDE_OF_TRUCK", "MAPSEC_SKY_PILLAR", "MAPSEC_SECRET_BASE",
    "MAPSEC_DYNAMIC",
]

NARANJA_MAPSEC_NAMES = {
    2: "7 Islas POMELO", 9: "Isla MANDARIN", 19: "Islas", 29: "Camino FRIO",
    31: "Mandarin", 57: "Safari", 58: "Pueblo PALETA",
    59: "VALLE DE LAS FLORES", 60: "Cueva de CRISTAL", 61: "ABANDONED SHIP",
    63: "Cueva KABUTO", 64: "Cueva KABUTO", 87: "Sin Nombre",
}

# Pointer tables and DMA sizes are from this exact SHA-1 ROM.  The frame bytes
# are exported rather than borrowed from a stock Ruby/Emerald asset tree.
NARANJA_ANIMATION_SPECS = [
    ("GeneralFlower", "primary/naranja_00/anim/flower", 0x08376F24, 4, 0x80),
    ("GeneralWater", "primary/naranja_00/anim/water", 0x08378D34, 8, 0x3C0),
    ("GeneralSandWaterEdge", "primary/naranja_00/anim/sand_water_edge", 0x08379614, 8, 0x140),
    ("GeneralWaterfall", "primary/naranja_00/anim/waterfall", 0x08379934, 4, 0xC0),
    ("GeneralLandWaterEdge", "primary/naranja_00/anim/land_water_edge", 0x08379E44, 4, 0x140),
    ("BuildingTv", "primary/naranja_01/anim/tv", 0x0837CA7C, 2, 0x80),
    ("LavaridgeSteam", "secondary/naranja_09/anim/steam", 0x0837A054, 4, 0x80),
    ("PacifidlogLogBridges", "secondary/naranja_11/anim/log_bridges", 0x0837ABA4, 4, 0x3C0),
    ("UnderwaterSeaweed", "secondary/naranja_14/anim/seaweed", 0x0837ADB4, 4, 0x80),
    ("PacifidlogWaterCurrents", "secondary/naranja_11/anim/water_currents", 0x0837B5C4, 8, 0x100),
    ("MauvilleFlower1", "secondary/naranja_12/anim/flower_1", 0x0837BB24, 12, 0x80),
    ("MauvilleFlower2", "secondary/naranja_12/anim/flower_2", 0x0837BB54, 12, 0x80),
    ("MauvilleFlower1Alt", "secondary/naranja_12/anim/flower_1_alt", 0x0837BB84, 4, 0x80),
    ("MauvilleFlower2Alt", "secondary/naranja_12/anim/flower_2_alt", 0x0837BB94, 4, 0x80),
    ("RustboroWindyWater", "secondary/naranja_02/anim/windy_water", 0x0837BFC4, 8, 0x80),
    ("RustboroFountain", "secondary/naranja_02/anim/fountain", 0x0837C0E4, 2, 0x80),
    ("CaveLava", "secondary/naranja_13/anim/lava", 0x0837C50C, 4, 0x80),
    ("EverGrandeFlowers", "secondary/naranja_06/anim/flowers", 0x0837C95C, 8, 0x80),
    ("SootopolisGymSideWaterfall", "secondary/naranja_36/anim/side_waterfall", 0x0837D684, 3, 0x180),
    ("SootopolisGymFrontWaterfall", "secondary/naranja_36/anim/front_waterfall", 0x0837D690, 3, 0x280),
    ("EliteFourWallLights", "secondary/naranja_37/anim/wall_lights", 0x0837D83C, 4, 0x20),
    ("EliteFourFloorLights", "secondary/naranja_37/anim/floor_lights", 0x0837D84C, 2, 0x80),
    ("MauvilleGymElectricGates", "secondary/naranja_28/anim/electric_gates", 0x0837DC74, 2, 0x200),
    ("BikeShopBlinkingLights", "secondary/naranja_25/anim/blinking_lights", 0x0837DEDC, 2, 0x120),
]

NARANJA_ACTIVE_TILESET_CALLBACKS = {
    0x08072FC5: "InitTilesetAnim_NaranjaPrimary00",
    0x08072FED: "InitTilesetAnim_NaranjaPrimary01",
    0x08073139: "InitTilesetAnim_NaranjaSecondary02",
    0x080731B5: "InitTilesetAnim_NaranjaSecondary12",
    0x080731E5: "InitTilesetAnim_NaranjaSecondary09",
    0x080732B1: "InitTilesetAnim_NaranjaSecondary06",
    0x080732DD: "InitTilesetAnim_NaranjaSecondary11",
    0x08073335: "InitTilesetAnim_NaranjaSecondary14",
    0x08073359: "InitTilesetAnim_NaranjaSecondary36",
    0x0807337D: "InitTilesetAnim_NaranjaSecondary13",
    0x080733A9: "InitTilesetAnim_NaranjaSecondary37",
    0x080733CD: "InitTilesetAnim_NaranjaSecondary28",
    0x080733F9: "InitTilesetAnim_NaranjaSecondary25",
}
NARANJA_NOOP_TILESET_CALLBACKS = {
    0x08073111, 0x08073165, 0x0807318D, 0x08073211,
    0x08073239, 0x08073261, 0x08073289, 0x0807330D,
}
RUBY_GROUP_SIZES = [
    54, 5, 5, 6, 7, 7, 8, 7, 7, 13, 8, 17, 10, 24, 13, 13, 14,
    2, 2, 2, 3, 1, 1, 1, 86, 44, 12, 2, 1, 13, 1, 1, 3, 1,
]

MAP_TYPES = {
    0: "MAP_TYPE_NONE", 1: "MAP_TYPE_TOWN", 2: "MAP_TYPE_CITY",
    3: "MAP_TYPE_ROUTE", 4: "MAP_TYPE_UNDERGROUND", 5: "MAP_TYPE_UNDERWATER",
    6: "MAP_TYPE_OCEAN_ROUTE", 7: "MAP_TYPE_UNKNOWN", 8: "MAP_TYPE_INDOOR",
    9: "MAP_TYPE_SECRET_BASE",
}
WEATHERS = {
    0: "WEATHER_NONE", 1: "WEATHER_SUNNY_CLOUDS", 2: "WEATHER_SUNNY",
    3: "WEATHER_RAIN", 4: "WEATHER_SNOW", 5: "WEATHER_RAIN_THUNDERSTORM",
    6: "WEATHER_FOG_HORIZONTAL", 7: "WEATHER_VOLCANIC_ASH",
    8: "WEATHER_SANDSTORM", 9: "WEATHER_FOG_DIAGONAL",
    10: "WEATHER_UNDERWATER", 11: "WEATHER_SHADE", 12: "WEATHER_DROUGHT",
    13: "WEATHER_DOWNPOUR", 14: "WEATHER_UNDERWATER_BUBBLES",
    15: "WEATHER_ABNORMAL", 20: "WEATHER_ROUTE119_CYCLE",
    21: "WEATHER_ROUTE123_CYCLE",
}
BATTLE_SCENES = {
    0: "MAP_BATTLE_SCENE_NORMAL", 1: "MAP_BATTLE_SCENE_GYM",
    2: "MAP_BATTLE_SCENE_MAGMA", 3: "MAP_BATTLE_SCENE_AQUA",
    4: "MAP_BATTLE_SCENE_SIDNEY", 5: "MAP_BATTLE_SCENE_PHOEBE",
    6: "MAP_BATTLE_SCENE_GLACIA", 7: "MAP_BATTLE_SCENE_DRAKE",
    8: "MAP_BATTLE_SCENE_FRONTIER",
}
CONNECTION_DIRECTIONS = {1: "down", 2: "up", 3: "left", 4: "right", 5: "dive", 6: "emerge"}


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def s16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<h", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def s32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<i", data, offset)[0]


def rom_offset(pointer: int, size: int) -> int:
    offset = pointer - ROM_BASE
    if not 0 <= offset < size:
        raise ValueError(f"invalid ROM pointer {pointer:#010x}")
    return offset


def gba_lz77_decompress(data: bytes, offset: int) -> bytes:
    if data[offset] != 0x10:
        raise ValueError(f"expected GBA LZ77 data at {offset:#x}")
    output_size = int.from_bytes(data[offset + 1 : offset + 4], "little")
    source = offset + 4
    output = bytearray()
    while len(output) < output_size:
        flags = data[source]
        source += 1
        for bit in range(7, -1, -1):
            if len(output) >= output_size:
                break
            if flags & (1 << bit):
                first, second = data[source], data[source + 1]
                source += 2
                count = (first >> 4) + 3
                distance = ((first & 0xF) << 8 | second) + 1
                for _ in range(count):
                    output.append(output[-distance])
                    if len(output) >= output_size:
                        break
            else:
                output.append(data[source])
                source += 1
    return bytes(output)


def gba_color(value: int) -> tuple[int, int, int]:
    expand = lambda component: (component << 3) | (component >> 2)
    return expand(value & 31), expand((value >> 5) & 31), expand((value >> 10) & 31)


def png_chunk(kind: bytes, payload: bytes) -> bytes:
    body = kind + payload
    return struct.pack(">I", len(payload)) + body + struct.pack(">I", zlib.crc32(body) & 0xFFFFFFFF)


def write_indexed_png(path: Path, width: int, height: int, pixels: bytes, palette: list[tuple[int, int, int]]) -> None:
    header = struct.pack(">IIBBBBB", width, height, 8, 3, 0, 0, 0)
    palette_data = b"".join(bytes(color) for color in palette)
    scanlines = b"".join(b"\0" + pixels[y * width : (y + 1) * width] for y in range(height))
    png = (b"\x89PNG\r\n\x1a\n" + png_chunk(b"IHDR", header)
           + png_chunk(b"PLTE", palette_data) + png_chunk(b"IDAT", zlib.compress(scanlines, 9))
           + png_chunk(b"IEND", b""))
    path.write_bytes(png)


def write_tiles_png(
    path: Path,
    tiles: bytes,
    palette: list[tuple[int, int, int]],
    tiles_per_row: int = 16,
) -> int:
    tile_count = (len(tiles) + 31) // 32
    padded_tiles = tiles.ljust(tile_count * 32, b"\0")
    rows = max(1, (tile_count + tiles_per_row - 1) // tiles_per_row)
    width, height = tiles_per_row * 8, rows * 8
    pixels = bytearray(width * height)
    for tile_index in range(tile_count):
        tile_x = (tile_index % tiles_per_row) * 8
        tile_y = (tile_index // tiles_per_row) * 8
        tile = padded_tiles[tile_index * 32 : tile_index * 32 + 32]
        for y in range(8):
            for byte_x in range(4):
                packed = tile[y * 4 + byte_x]
                pixels[(tile_y + y) * width + tile_x + byte_x * 2] = packed & 0xF
                pixels[(tile_y + y) * width + tile_x + byte_x * 2 + 1] = packed >> 4
    write_indexed_png(path, width, height, bytes(pixels), palette)
    return tile_count


def write_jasc_palette(path: Path, colors: list[tuple[int, int, int]]) -> None:
    lines = ["JASC-PAL", "0100", str(len(colors)), *(f"{r} {g} {b}" for r, g, b in colors)]
    path.write_text("\n".join(lines) + "\n", encoding="ascii")


CHARMAP: dict[int, str] = {0x00: " ", 0x32: "de", 0x5A: "Í", 0x6F: "í"}
CHARMAP.update({0xA1 + i: str(i) for i in range(10)})
CHARMAP.update({0xBB + i: chr(ord("A") + i) for i in range(26)})
CHARMAP.update({0xD5 + i: chr(ord("a") + i) for i in range(26)})
CHARMAP.update({0x02: "Á", 0x06: "É", 0x0E: "Ó", 0x12: "Ú", 0x14: "Ñ", 0x17: "á", 0x1B: "é", 0x23: "ó", 0x27: "ú", 0x29: "ñ"})
CHARMAP.update({0xAB: "!", 0xAC: "?", 0xAD: ".", 0xAE: "-", 0xB4: "'", 0xB8: ",", 0xBA: "/"})


def decode_string(data: bytes, offset: int, limit: int = 64) -> str:
    result: list[str] = []
    for value in data[offset : offset + limit]:
        if value == 0xFF:
            break
        result.append(CHARMAP.get(value, "_"))
    return re.sub(r"\s+", " ", "".join(result)).strip() or "Sin Nombre"


def identifier_words(value: str) -> list[str]:
    ascii_value = unicodedata.normalize("NFKD", value).encode("ascii", "ignore").decode("ascii")
    return re.findall(r"[A-Za-z0-9]+", ascii_value)


def pascal_identifier(value: str) -> str:
    words = identifier_words(value)
    return "".join(word[:1].upper() + word[1:].lower() for word in words) or "SinNombre"


def upper_identifier(value: str) -> str:
    words = identifier_words(value)
    return "_".join(word.upper() for word in words) or "SIN_NOMBRE"


@dataclass
class MapRecord:
    group: int
    number: int
    header_pointer: int
    layout_pointer: int
    events_pointer: int
    scripts_pointer: int
    connections_pointer: int
    music: int
    source_layout_id: int
    section_id: int
    requires_flash: int
    weather: int
    map_type: int
    escape_rope: int
    show_map_name: int
    battle_scene: int
    section_name: str
    name: str
    map_id: str


@dataclass
class LayoutRecord:
    pointer: int
    width: int
    height: int
    border_pointer: int
    map_pointer: int
    primary_tileset: int
    secondary_tileset: int
    name: str
    layout_id: str


@dataclass
class TilesetRecord:
    pointer: int
    is_compressed: bool
    is_secondary: bool
    tiles_pointer: int
    palettes_pointer: int
    metatiles_pointer: int
    attributes_pointer: int
    callback_pointer: int
    name: str = ""
    directory: str = ""
    metatile_count: int = 0
    tile_count: int = 0


def read_region_names(data: bytes) -> list[str]:
    names: list[str] = []
    for index in range(REGION_MAP_ENTRY_COUNT):
        entry = REGION_MAP_ENTRIES_OFFSET + index * 8
        pointer = u32(data, entry + 4)
        names.append(decode_string(data, rom_offset(pointer, len(data))))
    return names


def export_region_map_sections(root: Path, data: bytes, region_names: list[str]) -> None:
    if len(HOENN_MAPSEC_IDS) != REGION_MAP_ENTRY_COUNT or len(NARANJA_MAPSEC_IDS) != REGION_MAP_ENTRY_COUNT:
        raise ValueError("MAPSEC replacement tables must contain exactly 88 entries")
    path = root / "src/data/region_map/region_map_sections.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    if len(document["map_sections"]) < REGION_MAP_ENTRY_COUNT:
        raise ValueError("target region map table is shorter than the Ruby MAPSEC range")

    entries = []
    for index, (new_id, old_id) in enumerate(zip(NARANJA_MAPSEC_IDS, HOENN_MAPSEC_IDS)):
        offset = REGION_MAP_ENTRIES_OFFSET + index * 8
        entry = {
            "id": new_id,
            "name": NARANJA_MAPSEC_NAMES.get(index, region_names[index]),
            "x": data[offset], "y": data[offset + 1],
            "width": data[offset + 2], "height": data[offset + 3],
        }
        entries.append(entry)
    document["map_sections"] = entries + document["map_sections"][REGION_MAP_ENTRY_COUNT:]
    path.write_text(json.dumps(document, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")

    # Porymap validates map JSON values against the ids in the table above.
    # Move the unused Hoenn maps to their value-equivalent Naranja ids too.
    replacements = dict(zip(HOENN_MAPSEC_IDS, NARANJA_MAPSEC_IDS))
    for map_path in (root / "data/maps").glob("*/map.json"):
        map_json = json.loads(map_path.read_text(encoding="utf-8"))
        old_value = map_json.get("region_map_section")
        new_value = replacements.get(old_value, old_value)
        if new_value != old_value:
            map_json["region_map_section"] = new_value
            map_path.write_text(json.dumps(map_json, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")


def read_maps(data: bytes, region_names: list[str]) -> list[MapRecord]:
    maps: list[MapRecord] = []
    for group, group_size in enumerate(RUBY_GROUP_SIZES):
        group_pointer = u32(data, MAP_GROUPS_OFFSET + group * 4)
        group_offset = rom_offset(group_pointer, len(data))
        for number in range(group_size):
            header_pointer = u32(data, group_offset + number * 4)
            header = rom_offset(header_pointer, len(data))
            section_id = data[header + 20]
            section_name = region_names[section_id] if section_id < len(region_names) else f"Seccion {section_id}"
            stem = f"Naranja_{pascal_identifier(section_name)}_G{group:02d}_M{number:02d}"
            maps.append(MapRecord(
                group=group, number=number, header_pointer=header_pointer,
                layout_pointer=u32(data, header), events_pointer=u32(data, header + 4),
                scripts_pointer=u32(data, header + 8), connections_pointer=u32(data, header + 12),
                music=u16(data, header + 16), source_layout_id=u16(data, header + 18),
                section_id=section_id, requires_flash=data[header + 21], weather=data[header + 22],
                map_type=data[header + 23], escape_rope=data[header + 25],
                show_map_name=data[header + 26], battle_scene=data[header + 27],
                section_name=section_name, name=stem,
                map_id=f"MAP_NARANJA_{upper_identifier(section_name)}_G{group:02d}_M{number:02d}",
            ))
    return maps


def read_layouts(data: bytes, maps: list[MapRecord]) -> tuple[list[LayoutRecord], dict[int, LayoutRecord]]:
    layouts: list[LayoutRecord] = []
    by_pointer: dict[int, LayoutRecord] = {}
    for map_record in maps:
        if map_record.layout_pointer in by_pointer:
            continue
        offset = rom_offset(map_record.layout_pointer, len(data))
        width, height = u32(data, offset), u32(data, offset + 4)
        if width == 0 and (map_record.group, map_record.number) == (26, 6):
            width, height = 4, 7
        if not (1 <= width <= 512 and 1 <= height <= 512 and width * height <= 131072):
            raise ValueError(f"invalid layout dimensions {width}x{height} at {map_record.layout_pointer:#x}")
        layout = LayoutRecord(
            pointer=map_record.layout_pointer, width=width, height=height,
            border_pointer=u32(data, offset + 8), map_pointer=u32(data, offset + 12),
            primary_tileset=u32(data, offset + 16), secondary_tileset=u32(data, offset + 20),
            name=f"{map_record.name}_Layout",
            layout_id=f"LAYOUT_{map_record.map_id.removeprefix('MAP_')}",
        )
        layouts.append(layout)
        by_pointer[layout.pointer] = layout
    return layouts, by_pointer


def read_tilesets(data: bytes, layouts: list[LayoutRecord]) -> tuple[list[TilesetRecord], dict[int, TilesetRecord]]:
    pointers: list[int] = []
    for layout in layouts:
        for pointer in (layout.primary_tileset, layout.secondary_tileset):
            if pointer not in pointers:
                pointers.append(pointer)
    tilesets: list[TilesetRecord] = []
    by_pointer: dict[int, TilesetRecord] = {}
    counters = defaultdict(int)
    for pointer in pointers:
        offset = rom_offset(pointer, len(data))
        is_secondary = bool(data[offset + 1])
        kind = "Secondary" if is_secondary else "Primary"
        index = counters[kind]
        counters[kind] += 1
        record = TilesetRecord(
            pointer=pointer, is_compressed=bool(data[offset]), is_secondary=is_secondary,
            tiles_pointer=u32(data, offset + 4), palettes_pointer=u32(data, offset + 8),
            metatiles_pointer=u32(data, offset + 12), attributes_pointer=u32(data, offset + 16),
            callback_pointer=u32(data, offset + 20), name=f"Naranja{kind}{index:02d}",
            directory=f"data/tilesets/{kind.lower()}/naranja_{index:02d}",
        )
        tilesets.append(record)
        by_pointer[pointer] = record
    return tilesets, by_pointer


def determine_metatile_counts(data: bytes, layouts: list[LayoutRecord], tilesets: dict[int, TilesetRecord]) -> None:
    max_used: dict[int, int] = defaultdict(lambda: -1)
    for layout in layouts:
        border = rom_offset(layout.border_pointer, len(data))
        blockdata = rom_offset(layout.map_pointer, len(data))
        entries = data[border : border + 8] + data[blockdata : blockdata + layout.width * layout.height * 2]
        for offset in range(0, len(entries), 2):
            metatile_id = u16(entries, offset) & 0x3FF
            if metatile_id < 512:
                max_used[layout.primary_tileset] = max(max_used[layout.primary_tileset], metatile_id)
            else:
                max_used[layout.secondary_tileset] = max(max_used[layout.secondary_tileset], metatile_id - 512)
    for tileset in tilesets.values():
        if not tileset.is_secondary:
            tileset.metatile_count = 512
            continue
        metatiles = rom_offset(tileset.metatiles_pointer, len(data))
        attributes = rom_offset(tileset.attributes_pointer, len(data))
        delta = attributes - metatiles
        inferred = delta // 16 if 16 <= delta <= 8192 and delta % 16 == 0 else max_used[tileset.pointer] + 1
        tileset.metatile_count = max(inferred, max_used[tileset.pointer] + 1, 1)
        if tileset.metatile_count > 512:
            raise ValueError(f"tileset {tileset.name} requires {tileset.metatile_count} metatiles")


def raw_events(data: bytes, map_record: MapRecord) -> dict[str, object]:
    if map_record.events_pointer == 0:
        return {"object_events": [], "warp_events": [], "coord_events": [], "bg_events": []}
    offset = rom_offset(map_record.events_pointer, len(data))
    object_count, warp_count, coord_count, bg_count = data[offset : offset + 4]
    object_pointer, warp_pointer, coord_pointer, bg_pointer = struct.unpack_from("<IIII", data, offset + 4)
    objects = []
    if object_count and object_pointer:
        base = rom_offset(object_pointer, len(data))
        for index in range(object_count):
            item = base + index * 24
            ranges = u16(data, item + 10)
            objects.append({
                "local_id": data[item], "graphics_id": data[item + 1], "kind": data[item + 2],
                "x": s16(data, item + 4), "y": s16(data, item + 6), "elevation": data[item + 8],
                "movement_type": data[item + 9], "movement_range_x": ranges & 0xF,
                "movement_range_y": (ranges >> 4) & 0xF, "trainer_type": u16(data, item + 12),
                "trainer_sight_or_berry_tree_id": u16(data, item + 14),
                "script_pointer": f"0x{u32(data, item + 16):08X}", "flag": u16(data, item + 20),
            })
    warps = []
    if warp_count and warp_pointer:
        base = rom_offset(warp_pointer, len(data))
        for index in range(warp_count):
            item = base + index * 8
            warps.append({
                "x": s16(data, item), "y": s16(data, item + 2), "elevation": data[item + 4],
                "dest_warp_id": data[item + 5], "dest_map_num": data[item + 6], "dest_map_group": data[item + 7],
            })
    coords = []
    if coord_count and coord_pointer:
        base = rom_offset(coord_pointer, len(data))
        for index in range(coord_count):
            item = base + index * 16
            coords.append({
                "x": s16(data, item), "y": s16(data, item + 2), "elevation": data[item + 4],
                "trigger": u16(data, item + 6), "index": u16(data, item + 8),
                "script_pointer": f"0x{u32(data, item + 12):08X}",
            })
    backgrounds = []
    if bg_count and bg_pointer:
        base = rom_offset(bg_pointer, len(data))
        for index in range(bg_count):
            item = base + index * 12
            backgrounds.append({
                "x": u16(data, item), "y": u16(data, item + 2), "elevation": data[item + 4],
                "kind": data[item + 5], "data": f"0x{u32(data, item + 8):08X}",
            })
    return {"object_events": objects, "warp_events": warps, "coord_events": coords, "bg_events": backgrounds}


def active_warps(events: dict[str, object], maps_by_key: dict[tuple[int, int], MapRecord]) -> list[dict[str, object]]:
    result = []
    for warp in events["warp_events"]:  # type: ignore[index]
        destination = maps_by_key.get((warp["dest_map_group"], warp["dest_map_num"]))
        result.append({
            "x": warp["x"], "y": warp["y"], "elevation": warp["elevation"],
            "dest_map": destination.map_id if destination else "MAP_UNDEFINED",
            "dest_warp_id": str(warp["dest_warp_id"]),
        })
    return result


def active_connections(data: bytes, map_record: MapRecord, maps_by_key: dict[tuple[int, int], MapRecord]) -> list[dict[str, object]]:
    if map_record.connections_pointer == 0:
        return []
    header = rom_offset(map_record.connections_pointer, len(data))
    count, pointer = s32(data, header), u32(data, header + 4)
    if not 0 <= count <= 32 or (count and pointer == 0):
        return []
    base = rom_offset(pointer, len(data)) if count else 0
    result = []
    for index in range(count):
        item = base + index * 12
        direction = CONNECTION_DIRECTIONS.get(data[item])
        destination = maps_by_key.get((data[item + 8], data[item + 9]))
        if direction and destination:
            result.append({"map": destination.map_id, "offset": s32(data, item + 4), "direction": direction})
    return result


def replace_generated_section(path: Path, section: str, lines: list[str]) -> None:
    """Write generated tileset data directly where Porymap expects to parse it."""
    begin = f"// BEGIN AUTO-GENERATED NARANJA TILESETS: {section}"
    end = f"// END AUTO-GENERATED NARANJA TILESETS: {section}"
    old_include = f'#include "naranja_{section}.h"'
    text = path.read_text(encoding="utf-8")
    text = re.sub(
        rf"\n?{re.escape(begin)}.*?{re.escape(end)}\n?",
        "\n",
        text,
        flags=re.DOTALL,
    )
    text = re.sub(rf"^\s*{re.escape(old_include)}\s*$", "", text, flags=re.MULTILINE)
    generated = "\n".join(lines).rstrip()
    path.write_text(f"{text.rstrip()}\n\n{begin}\n{generated}\n{end}\n", encoding="utf-8")


def replace_generated_section_before(path: Path, section: str, lines: list[str], anchor: str) -> None:
    begin = f"// BEGIN AUTO-GENERATED NARANJA TILESETS: {section}"
    end = f"// END AUTO-GENERATED NARANJA TILESETS: {section}"
    text = path.read_text(encoding="utf-8")
    text = re.sub(
        rf"\n?{re.escape(begin)}.*?{re.escape(end)}\n?",
        "\n",
        text,
        flags=re.DOTALL,
    )
    if anchor not in text:
        raise ValueError(f"could not find {anchor!r} in {path}")
    generated = "\n".join(lines).rstrip()
    block = f"{begin}\n{generated}\n{end}\n\n"
    path.write_text(text.replace(anchor, block + anchor, 1), encoding="utf-8")


def export_tilesets(root: Path, data: bytes, tilesets: list[TilesetRecord]) -> None:
    graphics_lines = ["// Auto-generated by tools/import_naranja_rom.py from NaranjaB2.gba.", ""]
    metatile_lines = ["// Auto-generated by tools/import_naranja_rom.py from NaranjaB2.gba.", ""]
    header_lines = ["// Auto-generated by tools/import_naranja_rom.py from NaranjaB2.gba.", ""]
    for tileset in tilesets:
        directory = root / tileset.directory
        palettes_dir = directory / "palettes"
        palettes_dir.mkdir(parents=True, exist_ok=True)
        palette_offset = rom_offset(tileset.palettes_pointer, len(data))
        all_colors = [gba_color(u16(data, palette_offset + i * 2)) for i in range(16 * 16)]
        for index in range(16):
            write_jasc_palette(palettes_dir / f"{index:02d}.pal", all_colors[index * 16 : (index + 1) * 16])
        tiles_offset = rom_offset(tileset.tiles_pointer, len(data))
        tiles = gba_lz77_decompress(data, tiles_offset) if tileset.is_compressed else data[tiles_offset : tiles_offset + 512 * 32]
        tileset.tile_count = write_tiles_png(directory / "tiles.png", tiles, all_colors[:16])
        metatiles_offset = rom_offset(tileset.metatiles_pointer, len(data))
        attributes_offset = rom_offset(tileset.attributes_pointer, len(data))
        (directory / "metatiles.bin").write_bytes(data[metatiles_offset : metatiles_offset + tileset.metatile_count * 16])
        (directory / "metatile_attributes.bin").write_bytes(data[attributes_offset : attributes_offset + tileset.metatile_count * 2])

        graphics_lines.append(f'const u32 gTilesetTiles_{tileset.name}[] = INCGFX_U32("{tileset.directory}/tiles.png", ".4bpp.lz");')
        graphics_lines.append(f"const u16 gTilesetPalettes_{tileset.name}[][16] =")
        graphics_lines.append("{")
        for index in range(16):
            graphics_lines.append(f'    INCGFX_U16("{tileset.directory}/palettes/{index:02d}.pal", ".gbapal"),')
        graphics_lines.extend(["};", ""])
        metatile_lines.extend([
            f'const u16 gMetatiles_{tileset.name}[] = INCBIN_U16("{tileset.directory}/metatiles.bin");',
            f'const u16 gMetatileAttributes_{tileset.name}[] = INCBIN_U16("{tileset.directory}/metatile_attributes.bin");', "",
        ])
        if (tileset.callback_pointer
                and tileset.callback_pointer not in NARANJA_ACTIVE_TILESET_CALLBACKS
                and tileset.callback_pointer not in NARANJA_NOOP_TILESET_CALLBACKS):
            raise ValueError(f"unknown tileset animation callback {tileset.callback_pointer:#010x}")
        callback = NARANJA_ACTIVE_TILESET_CALLBACKS.get(tileset.callback_pointer, "NULL")
        header_lines.extend([
            f"const struct Tileset gTileset_{tileset.name} =", "{",
            f"    .isCompressed = {'TRUE' if tileset.is_compressed else 'FALSE'},",
            f"    .isSecondary = {'TRUE' if tileset.is_secondary else 'FALSE'},",
            f"    .tiles = gTilesetTiles_{tileset.name},",
            f"    .palettes = gTilesetPalettes_{tileset.name},",
            f"    .metatiles = gMetatiles_{tileset.name},",
            f"    .metatileAttributes = gMetatileAttributes_{tileset.name},",
            f"    .callback = {callback},", "};", "",
        ])
    generated_dir = root / "src/data/tilesets"
    replace_generated_section(generated_dir / "graphics.h", "graphics", graphics_lines)
    replace_generated_section(generated_dir / "metatiles.h", "metatiles", metatile_lines)
    replace_generated_section(generated_dir / "headers.h", "headers", header_lines)
    for obsolete in ("naranja_graphics.h", "naranja_metatiles.h", "naranja_headers.h"):
        (generated_dir / obsolete).unlink(missing_ok=True)


def export_tileset_animations(root: Path, data: bytes) -> None:
    source_lines = ["// Auto-generated by tools/import_naranja_rom.py from NaranjaB2.gba.", ""]
    manifest_specs = []
    grayscale_palette = [(value * 17, value * 17, value * 17) for value in range(16)]
    for name, relative_dir, table_pointer, entry_count, frame_size in NARANJA_ANIMATION_SPECS:
        table_offset = rom_offset(table_pointer, len(data))
        pointers = [u32(data, table_offset + index * 4) for index in range(entry_count)]
        frame_indices: dict[int, int] = {}
        directory = root / "data/tilesets" / relative_dir
        directory.mkdir(parents=True, exist_ok=True)
        for pointer in pointers:
            if pointer in frame_indices:
                continue
            index = len(frame_indices)
            frame_indices[pointer] = index
            frame_offset = rom_offset(pointer, len(data))
            raw_path = directory / f"{index}.4bpp"
            raw_path.unlink(missing_ok=True)
            write_tiles_png(
                directory / f"{index}.png",
                data[frame_offset : frame_offset + frame_size],
                grayscale_palette,
                tiles_per_row=1,
            )
            source_lines.append(
                f'static const u16 sNaranjaAnim{name}Frame{index}[] = '
                f'INCBIN_U16("data/tilesets/{relative_dir}/{index}.4bpp");'
            )
        source_lines.append(f"static const u16 *const sNaranjaAnim{name}[] =")
        source_lines.append("{")
        source_lines.extend(f"    sNaranjaAnim{name}Frame{frame_indices[pointer]}," for pointer in pointers)
        source_lines.extend(["};", ""])
        manifest_specs.append({
            "name": name, "tileset_directory": f"data/tilesets/{relative_dir}",
            "table_pointer": f"0x{table_pointer:08X}", "frame_size": frame_size,
            "sequence": [f"0x{pointer:08X}" for pointer in pointers],
            "unique_frames": len(frame_indices),
        })

    # Ruby contains four additional, deliberately unused cave-animation frames.
    unused_dir = root / "data/tilesets/secondary/naranja_13/anim/unused"
    unused_dir.mkdir(parents=True, exist_ok=True)
    for index, pointer in enumerate((0x0837C2EC, 0x0837C36C, 0x0837C3EC, 0x0837C46C)):
        offset = rom_offset(pointer, len(data))
        (unused_dir / f"{index}.4bpp").unlink(missing_ok=True)
        write_tiles_png(
            unused_dir / f"{index}.png",
            data[offset : offset + 0x80],
            grayscale_palette,
            tiles_per_row=1,
        )

    source_lines.extend(r"""
static void QueueNaranjaTilesetAnim(const u16 *const *frames, u16 frameCount, u16 timer, u16 tile, u16 size)
{
    AppendTilesetAnimToBuffer(frames[timer % frameCount], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(tile)), size);
}

static void TilesetAnim_NaranjaPrimary00(u16 timer)
{
    switch (timer % 16)
    {
    case 0:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralFlower, ARRAY_COUNT(sNaranjaAnimGeneralFlower), timer / 16, 508, 4 * TILE_SIZE_4BPP);
        break;
    case 1:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralWater, ARRAY_COUNT(sNaranjaAnimGeneralWater), timer / 16, 432, 30 * TILE_SIZE_4BPP);
        break;
    case 2:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralSandWaterEdge, ARRAY_COUNT(sNaranjaAnimGeneralSandWaterEdge), timer / 16, 464, 10 * TILE_SIZE_4BPP);
        break;
    case 3:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralWaterfall, ARRAY_COUNT(sNaranjaAnimGeneralWaterfall), timer / 16, 496, 6 * TILE_SIZE_4BPP);
        break;
    case 4:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralLandWaterEdge, ARRAY_COUNT(sNaranjaAnimGeneralLandWaterEdge), timer / 16, 480, 10 * TILE_SIZE_4BPP);
        break;
    }
}

static void TilesetAnim_NaranjaPrimary01(u16 timer)
{
    if (timer % 8 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimBuildingTv, ARRAY_COUNT(sNaranjaAnimBuildingTv), timer / 8, 496, 4 * TILE_SIZE_4BPP);
}

static void QueueNaranjaRustboroWindyWater(u16 timer, u8 phase)
{
    timer -= phase;
    QueueNaranjaTilesetAnim(sNaranjaAnimRustboroWindyWater, ARRAY_COUNT(sNaranjaAnimRustboroWindyWater), timer,
                           NUM_TILES_IN_PRIMARY + 128 + phase * 4, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary02(u16 timer)
{
    u8 phase = timer % 8;
    QueueNaranjaRustboroWindyWater(timer / 8, phase);
    if (phase == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimRustboroFountain, ARRAY_COUNT(sNaranjaAnimRustboroFountain), timer / 8,
                               NUM_TILES_IN_PRIMARY + 448, 4 * TILE_SIZE_4BPP);
}

static void QueueNaranjaMauvilleFlowers(u16 timer, u8 phase)
{
    timer -= phase;
    if (timer < ARRAY_COUNT(sNaranjaAnimMauvilleFlower1))
    {
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower1, ARRAY_COUNT(sNaranjaAnimMauvilleFlower1), timer,
                               NUM_TILES_IN_PRIMARY + 96 + phase * 4, 4 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower2, ARRAY_COUNT(sNaranjaAnimMauvilleFlower2), timer,
                               NUM_TILES_IN_PRIMARY + 128 + phase * 4, 4 * TILE_SIZE_4BPP);
    }
    else
    {
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower1Alt, ARRAY_COUNT(sNaranjaAnimMauvilleFlower1Alt), timer,
                               NUM_TILES_IN_PRIMARY + 96 + phase * 4, 4 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower2Alt, ARRAY_COUNT(sNaranjaAnimMauvilleFlower2Alt), timer,
                               NUM_TILES_IN_PRIMARY + 128 + phase * 4, 4 * TILE_SIZE_4BPP);
    }
}

static void TilesetAnim_NaranjaSecondary12(u16 timer)
{
    QueueNaranjaMauvilleFlowers(timer / 8, timer % 8);
}

static void TilesetAnim_NaranjaSecondary09(u16 timer)
{
    if (timer % 16 == 0)
    {
        u16 frame = timer / 16;
        QueueNaranjaTilesetAnim(sNaranjaAnimLavaridgeSteam, ARRAY_COUNT(sNaranjaAnimLavaridgeSteam), frame,
                               NUM_TILES_IN_PRIMARY + 288, 4 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimLavaridgeSteam, ARRAY_COUNT(sNaranjaAnimLavaridgeSteam), frame + 2,
                               NUM_TILES_IN_PRIMARY + 292, 4 * TILE_SIZE_4BPP);
    }
    if (timer % 16 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimCaveLava, ARRAY_COUNT(sNaranjaAnimCaveLava), timer / 16,
                               NUM_TILES_IN_PRIMARY + 160, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary06(u16 timer)
{
    u8 phase = timer % 8;
    timer = timer / 8 - phase;
    QueueNaranjaTilesetAnim(sNaranjaAnimEverGrandeFlowers, ARRAY_COUNT(sNaranjaAnimEverGrandeFlowers), timer,
                           NUM_TILES_IN_PRIMARY + 224 + phase * 4, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary11(u16 timer)
{
    if (timer % 16 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimPacifidlogLogBridges, ARRAY_COUNT(sNaranjaAnimPacifidlogLogBridges), timer / 16,
                               NUM_TILES_IN_PRIMARY + 464, 30 * TILE_SIZE_4BPP);
    if (timer % 16 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimPacifidlogWaterCurrents, ARRAY_COUNT(sNaranjaAnimPacifidlogWaterCurrents), timer / 16,
                               NUM_TILES_IN_PRIMARY + 496, 8 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary14(u16 timer)
{
    if (timer % 16 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimUnderwaterSeaweed, ARRAY_COUNT(sNaranjaAnimUnderwaterSeaweed), timer / 16,
                               NUM_TILES_IN_PRIMARY + 496, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary36(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueNaranjaTilesetAnim(sNaranjaAnimSootopolisGymSideWaterfall, ARRAY_COUNT(sNaranjaAnimSootopolisGymSideWaterfall), timer / 8,
                               NUM_TILES_IN_PRIMARY + 496, 12 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimSootopolisGymFrontWaterfall, ARRAY_COUNT(sNaranjaAnimSootopolisGymFrontWaterfall), timer / 8,
                               NUM_TILES_IN_PRIMARY + 464, 20 * TILE_SIZE_4BPP);
    }
}

static void TilesetAnim_NaranjaSecondary13(u16 timer)
{
    if (timer % 16 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimCaveLava, ARRAY_COUNT(sNaranjaAnimCaveLava), timer / 16,
                               NUM_TILES_IN_PRIMARY + 416, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary37(u16 timer)
{
    if (timer % 64 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimEliteFourFloorLights, ARRAY_COUNT(sNaranjaAnimEliteFourFloorLights), timer / 64,
                               NUM_TILES_IN_PRIMARY + 480, 4 * TILE_SIZE_4BPP);
    if (timer % 8 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimEliteFourWallLights, ARRAY_COUNT(sNaranjaAnimEliteFourWallLights), timer / 8,
                               NUM_TILES_IN_PRIMARY + 504, TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary28(u16 timer)
{
    if (timer % 2 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleGymElectricGates, ARRAY_COUNT(sNaranjaAnimMauvilleGymElectricGates), timer / 2,
                               NUM_TILES_IN_PRIMARY + 144, 16 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary25(u16 timer)
{
    if (timer % 4 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimBikeShopBlinkingLights, ARRAY_COUNT(sNaranjaAnimBikeShopBlinkingLights), timer / 4,
                               NUM_TILES_IN_PRIMARY + 496, 9 * TILE_SIZE_4BPP);
}

void InitTilesetAnim_NaranjaPrimary00(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_NaranjaPrimary00;
}

void InitTilesetAnim_NaranjaPrimary01(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_NaranjaPrimary01;
}

#define INIT_NARANJA_SECONDARY(name, max)       \
void InitTilesetAnim_NaranjaSecondary##name(void) \
{                                                 \
    sSecondaryTilesetAnimCounter = 0;             \
    sSecondaryTilesetAnimCounterMax = (max);      \
    sSecondaryTilesetAnimCallback = TilesetAnim_NaranjaSecondary##name; \
}

INIT_NARANJA_SECONDARY(02, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(06, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(09, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(11, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(12, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(13, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(14, 128)
INIT_NARANJA_SECONDARY(25, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(28, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(36, 240)
INIT_NARANJA_SECONDARY(37, 128)

#undef INIT_NARANJA_SECONDARY
""".strip().splitlines())

    replace_generated_section(root / "src/tileset_anims.c", "animations", source_lines)
    prototypes = [
        "// Auto-generated by tools/import_naranja_rom.py from NaranjaB2.gba.", "",
        "void InitTilesetAnim_NaranjaPrimary00(void);",
        "void InitTilesetAnim_NaranjaPrimary01(void);",
        *[f"void InitTilesetAnim_NaranjaSecondary{index}(void);"
          for index in ("02", "06", "09", "11", "12", "13", "14", "25", "28", "36", "37")],
    ]
    replace_generated_section_before(
        root / "include/tileset_anims.h", "animations", prototypes,
        "#endif // GUARD_TILESET_ANIMS_H",
    )
    manifest = {
        "source_rom": "NaranjaB2.gba", "source_sha1": NARANJA_SHA1,
        "active_sequences": manifest_specs,
        "unused_cave_frames": [f"0x{pointer:08X}" for pointer in (0x0837C2EC, 0x0837C36C, 0x0837C3EC, 0x0837C46C)],
    }
    (root / "data/tilesets/naranja_animations.json").write_text(
        json.dumps(manifest, indent=2) + "\n", encoding="utf-8"
    )


def add_include(path: Path, include_line: str) -> None:
    text = path.read_text(encoding="utf-8")
    if include_line not in text:
        if not text.endswith("\n"):
            text += "\n"
        path.write_text(text + "\n" + include_line + "\n", encoding="utf-8")


def import_rom(rom_path: Path, root: Path) -> None:
    data = rom_path.read_bytes()
    digest = hashlib.sha1(data).hexdigest()
    if digest != NARANJA_SHA1:
        raise SystemExit(f"unsupported ROM SHA1 {digest}; expected {NARANJA_SHA1}")
    region_names = read_region_names(data)
    maps = read_maps(data, region_names)
    layouts, layouts_by_pointer = read_layouts(data, maps)
    tilesets, tilesets_by_pointer = read_tilesets(data, layouts)
    determine_metatile_counts(data, layouts, tilesets_by_pointer)
    maps_by_key = {(item.group, item.number): item for item in maps}

    export_region_map_sections(root, data, region_names)
    export_tileset_animations(root, data)
    export_tilesets(root, data, tilesets)

    layouts_path = root / "data/layouts/layouts.json"
    layouts_json = json.loads(layouts_path.read_text(encoding="utf-8"))
    layouts_json["layouts"] = [item for item in layouts_json["layouts"] if not (isinstance(item, dict) and str(item.get("id", "")).startswith("LAYOUT_NARANJA_"))]
    for layout in layouts:
        first_map = next(item for item in maps if item.layout_pointer == layout.pointer)
        directory = root / "data/layouts" / first_map.name
        directory.mkdir(parents=True, exist_ok=True)
        border = rom_offset(layout.border_pointer, len(data))
        blockdata = rom_offset(layout.map_pointer, len(data))
        (directory / "border.bin").write_bytes(data[border : border + 8])
        (directory / "map.bin").write_bytes(data[blockdata : blockdata + layout.width * layout.height * 2])
        layouts_json["layouts"].append({
            "id": layout.layout_id, "name": layout.name, "width": layout.width, "height": layout.height,
            "primary_tileset": f"gTileset_{tilesets_by_pointer[layout.primary_tileset].name}",
            "secondary_tileset": f"gTileset_{tilesets_by_pointer[layout.secondary_tileset].name}",
            "border_filepath": f"data/layouts/{first_map.name}/border.bin",
            "blockdata_filepath": f"data/layouts/{first_map.name}/map.bin",
        })
    layouts_path.write_text(json.dumps(layouts_json, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")

    connections_order: list[str] = []
    script_lines = ["@ Auto-generated safe map-script stubs for the Naranja Beta 2 map import.", ""]
    for map_record in maps:
        events = raw_events(data, map_record)
        connections = active_connections(data, map_record, maps_by_key)
        map_json = {
            "id": map_record.map_id, "name": map_record.name,
            "layout": layouts_by_pointer[map_record.layout_pointer].layout_id,
            "music": "MUS_DUMMY", "region_map_section": NARANJA_MAPSEC_IDS[map_record.section_id],
            "requires_flash": bool(map_record.requires_flash),
            "weather": WEATHERS.get(map_record.weather, "WEATHER_NONE"),
            "map_type": MAP_TYPES.get(map_record.map_type, "MAP_TYPE_NONE"),
            "allow_cycling": map_record.map_type in (1, 2, 3, 6),
            "allow_escaping": bool(map_record.escape_rope), "allow_running": True,
            "show_map_name": bool(map_record.show_map_name),
            "battle_scene": BATTLE_SCENES.get(map_record.battle_scene, "MAP_BATTLE_SCENE_NORMAL"),
            "connections": connections, "object_events": [],
            "warp_events": active_warps(events, maps_by_key), "coord_events": [], "bg_events": [],
        }
        map_dir = root / "data/maps" / map_record.name
        map_dir.mkdir(parents=True, exist_ok=True)
        (map_dir / "map.json").write_text(json.dumps(map_json, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
        metadata = {
            "source_rom": rom_path.name, "source_sha1": digest,
            "map_group": map_record.group, "map_number": map_record.number,
            "region_map_section_id": map_record.section_id, "region_name": map_record.section_name,
            "header_pointer": f"0x{map_record.header_pointer:08X}",
            "layout_pointer": f"0x{map_record.layout_pointer:08X}",
            "events_pointer": f"0x{map_record.events_pointer:08X}",
            "scripts_pointer": f"0x{map_record.scripts_pointer:08X}",
            "connections_pointer": f"0x{map_record.connections_pointer:08X}",
            "music_id": map_record.music, "source_layout_id": map_record.source_layout_id,
            "show_map_name": bool(map_record.show_map_name), **events,
        }
        (map_dir / "rom_metadata.json").write_text(json.dumps(metadata, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
        if connections:
            connections_order.append(map_record.name)
        script_lines.extend([f"{map_record.name}_MapScripts::", "    .byte 0", ""])
    (root / "data/maps/naranja_scripts.inc").write_text("\n".join(script_lines), encoding="utf-8")
    add_include(root / "data/event_scripts.s", '\t.include "data/maps/naranja_scripts.inc"')

    groups_path = root / "data/maps/map_groups.json"
    groups_json = json.loads(groups_path.read_text(encoding="utf-8"))
    old_naranja_groups = [name for name in groups_json["group_order"] if name.startswith("gMapGroup_Naranja_")]
    groups_json["group_order"] = [name for name in groups_json["group_order"] if name not in old_naranja_groups]
    for name in old_naranja_groups:
        groups_json.pop(name, None)
    for group in range(len(RUBY_GROUP_SIZES)):
        group_name = f"gMapGroup_Naranja_{group:02d}"
        groups_json["group_order"].append(group_name)
        groups_json[group_name] = [item.name for item in maps if item.group == group]
    groups_json["connections_include_order"] = [
        name for name in groups_json.get("connections_include_order", []) if not name.startswith("Naranja_")
    ] + connections_order
    groups_path.write_text(json.dumps(groups_json, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")

    manifest = {
        "source_rom": str(rom_path), "source_sha1": digest,
        "map_groups_offset": f"0x{MAP_GROUPS_OFFSET:08X}",
        "region_map_entries_offset": f"0x{REGION_MAP_ENTRIES_OFFSET:08X}",
        "maps": len(maps), "layouts": len(layouts),
        "primary_tilesets": sum(not item.is_secondary for item in tilesets),
        "secondary_tilesets": sum(item.is_secondary for item in tilesets),
        "tilesets": [{
            "name": item.name, "rom_pointer": f"0x{item.pointer:08X}",
            "tile_count": item.tile_count, "metatile_count": item.metatile_count,
        } for item in tilesets],
    }
    (root / "data/maps/naranja_import_manifest.json").write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    print(f"Imported {len(maps)} maps, {len(layouts)} layouts, and {len(tilesets)} tilesets")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("rom", type=Path, help="path to NaranjaB2.gba")
    parser.add_argument("--repo", type=Path, default=Path.cwd(), help="pokeemerald repository root")
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    import_rom(args.rom.resolve(), args.repo.resolve())


if __name__ == "__main__":
    main()
