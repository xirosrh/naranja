Naranja_SinNombre_G25_M38_MapScripts::
# 11 "data/maps/Naranja_SinNombre_G25_M38/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SinNombre_G25_M28_OnTransition
# 12 "data/maps/Naranja_SinNombre_G25_M38/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SinNombre_G25_M28_OnResume
# 5 "data/maps/Naranja_SinNombre_G25_M38/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_SinNombre_G25_M38_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/Naranja_SinNombre_G25_M38/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SinNombre_G25_M38_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SinNombre_G25_M38_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_SinNombre_G25_M38/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_SinNombre_G25_M28_OnWarp_1
	.2byte 0

Naranja_SinNombre_G25_M38_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Naranja_SinNombre_G25_M38/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_SinNombre_G25_M28_OnFrame_1
	.2byte 0

