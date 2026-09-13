Naranja_GraniteCave_B1F_MapScripts::
# 8 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtPyre_2F_OnTransition
# 9 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_GraniteCave_B1F_OnResume
# 5 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_GraniteCave_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_GraniteCave_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, Naranja_MtPyre_2F_OnFrame_1
	.2byte 0


Naranja_GraniteCave_B1F_OnResume::
# 13 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	setstepcallback 7
# 14 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	setholewarp MAP_NARANJA_GRANITE_CAVE_B2F, 0xFF, 0, 0
	end


Naranja_GraniteCave_B1F_EventScript_Kecleon1::
# 19 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11E
# 20 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 21 "data/maps/Naranja_GraniteCave_B1F/scripts.pory"
	callstd 1
	end

