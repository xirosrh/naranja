Naranja_ShoalCave_G24_M49_MapScripts::
# 5 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_ShoalCave_G24_M49_OnLoad
	.byte 0


Naranja_ShoalCave_G24_M49_OnLoad::
# 9 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	call Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E3FF
	end


Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E3FF::
# 14 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BB
# 15 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E412
# 16 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setmetatile 0x12, 2, 0x358, 1
	return


Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E412::
	return


Naranja_ShoalCave_G24_M49_EventScript_Sign_1::
# 25 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	lockall
# 26 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BB
# 27 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E445
# 28 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2E
# 29 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 30 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	callstd 0
# 31 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 32 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 33 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setmetatile 0x12, 2, 0x35A, 0
# 34 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	special DrawWholeMapView
# 35 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BB
# 36 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E445::
# 41 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	msgbox Naranja_ShoalCave_G24_M47_Text_081C6979, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M49_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId2::
# 47 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	lock
# 48 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	faceplayer
# 49 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_011B
# 50 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E47E
# 51 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	msgbox Naranja_ShoalCave_G24_M49_Text_08198200, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC4
# 53 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 54 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	callstd 0
# 55 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 56 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 57 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_011B
# 58 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M49_EventScript_Sub_0815E47E::
# 63 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	msgbox Naranja_ShoalCave_G24_M49_Text_081982A2, MSGBOX_DEFAULT
# 64 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M49_Text_08198200::
# 68 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	.string "The penetrating cold around these\nparts is an impediment to training.\pBut with focus, one can overcome!\pWith this FOCUS BAND, buckle down and\nwithstand the cold!$"

Naranja_ShoalCave_G24_M49_Text_081982A2::
# 72 "data/maps/Naranja_ShoalCave_G24_M49/scripts.pory"
	.string "Everything starts with focus!$"
