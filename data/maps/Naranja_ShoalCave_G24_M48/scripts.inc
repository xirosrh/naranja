Naranja_ShoalCave_G24_M48_MapScripts::
# 5 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_ShoalCave_G24_M48_OnLoad
	.byte 0


Naranja_ShoalCave_G24_M48_OnLoad::
# 9 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	call Naranja_ShoalCave_G24_M48_EventScript_Sub_0815E3A3
	end


Naranja_ShoalCave_G24_M48_EventScript_Sub_0815E3A3::
# 14 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BA
# 15 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M48_EventScript_Sub_0815E3B6
# 16 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setmetatile 0xB, 0xB, 0x358, 1
	return


Naranja_ShoalCave_G24_M48_EventScript_Sub_0815E3B6::
	return


Naranja_ShoalCave_G24_M48_EventScript_Sign_1::
# 25 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	lockall
# 26 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BA
# 27 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M48_EventScript_Sub_0815E3E9
# 28 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2E
# 29 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 30 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	callstd 0
# 31 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 32 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 33 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setmetatile 0xB, 0xB, 0x35A, 0
# 34 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	special DrawWholeMapView
# 35 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BA
# 36 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M48_EventScript_Sub_0815E3E9::
# 41 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M47_Text_081C6979
# 42 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	callstd 4
# 43 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M48_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 48 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10
# 49 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 50 "data/maps/Naranja_ShoalCave_G24_M48/scripts.pory"
	callstd 1
	end

