Naranja_SkyPillar_G24_M80_MapScripts::
# 8 "data/maps/Naranja_SkyPillar_G24_M80/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Bementer_G24_M16_OnTransition
# 9 "data/maps/Naranja_SkyPillar_G24_M80/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SkyPillar_G24_M80_OnResume
# 5 "data/maps/Naranja_SkyPillar_G24_M80/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SkyPillar_G24_M80_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SkyPillar_G24_M80_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_SkyPillar_G24_M80/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, Naranja_Bementer_G24_M16_OnFrame_1
	.2byte 0


Naranja_SkyPillar_G24_M80_OnResume::
# 13 "data/maps/Naranja_SkyPillar_G24_M80/scripts.pory"
	setstepcallback 7
# 14 "data/maps/Naranja_SkyPillar_G24_M80/scripts.pory"
	setholewarp MAP_NARANJA_SKY_PILLAR_G24_M79, 0xFF, 0, 0
	end

