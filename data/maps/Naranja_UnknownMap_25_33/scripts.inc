Naranja_UnknownMap_25_33_MapScripts::
# 11 "data/maps/Naranja_UnknownMap_25_33/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_LinkContestRoom1_OnTransition
# 12 "data/maps/Naranja_UnknownMap_25_33/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_LinkContestRoom1_OnResume
# 5 "data/maps/Naranja_UnknownMap_25_33/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_UnknownMap_25_33_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/Naranja_UnknownMap_25_33/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_UnknownMap_25_33_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_UnknownMap_25_33_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_UnknownMap_25_33/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_LinkContestRoom1_OnWarp_1
	.2byte 0

Naranja_UnknownMap_25_33_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Naranja_UnknownMap_25_33/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_LinkContestRoom1_OnFrame_1
	.2byte 0

