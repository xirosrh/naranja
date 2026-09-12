Naranja_SecretBase_G25_M21_MapScripts::
# 8 "data/maps/Naranja_SecretBase_G25_M21/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SecretBase_G25_M00_OnTransition
# 12 "data/maps/Naranja_SecretBase_G25_M21/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SecretBase_G25_M00_OnResume
# 5 "data/maps/Naranja_SecretBase_G25_M21/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_SecretBase_G25_M21_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_SecretBase_G25_M21/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SecretBase_G25_M21_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SecretBase_G25_M21_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_SecretBase_G25_M21/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_STORY_STATE, 0, Naranja_SecretBase_G25_M00_OnWarp_1
	.2byte 0

Naranja_SecretBase_G25_M21_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_SecretBase_G25_M21/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_EVENT_STATE_2, 0, Naranja_SecretBase_G25_M00_OnFrame_1
	.2byte 0

