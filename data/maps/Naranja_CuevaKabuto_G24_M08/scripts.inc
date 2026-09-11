Naranja_CuevaKabuto_G24_M08_MapScripts::
# 8 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Bementer_G24_M16_OnTransition
# 9 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_CuevaKabuto_G24_M08_OnResume
# 5 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_CuevaKabuto_G24_M08_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_CuevaKabuto_G24_M08_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, Naranja_Bementer_G24_M16_OnFrame_1
	.2byte 0


Naranja_CuevaKabuto_G24_M08_OnResume::
# 13 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	setstepcallback 7
# 14 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	setholewarp MAP_NARANJA_CUEVA_KABUTO_G24_M09, 0xFF, 0, 0
	end


Naranja_CuevaKabuto_G24_M08_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId20::
# 19 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11E
# 20 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 21 "data/maps/Naranja_CuevaKabuto_G24_M08/scripts.pory"
	callstd 1
	end

