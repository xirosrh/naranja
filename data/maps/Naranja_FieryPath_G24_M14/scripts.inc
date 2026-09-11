Naranja_FieryPath_G24_M14_MapScripts::
# 5 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_FieryPath_G24_M14_OnTransition
	.byte 0


Naranja_FieryPath_G24_M14_OnTransition::
# 9 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setflag FLAG_NARANJA_FIERY_PATH_EVENT_COMPLETE_084A
	end


Naranja_FieryPath_G24_M14_EventScript_OBJ_EVENT_GFX_PUSHABLE_BOULDER_LocalId2::
# 14 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	lockall
# 15 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_080A
# 16 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	goto_if LESS_THAN, Naranja_FieryPath_G24_M14_EventScript_Sub_081B1026
# 17 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	checkflag FLAG_NARANJA_FIERY_PATH_EVENT_COMPLETE_0829
# 18 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	goto_if EQUAL, Naranja_FieryPath_G24_M14_EventScript_Sub_081B1030
# 19 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	checkpartymove MOVE_STRENGTH
# 20 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 21 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	goto_if EQUAL, Naranja_FieryPath_G24_M14_EventScript_Sub_081B1026
# 22 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 23 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	loadword 0, Naranja_FieryPath_G24_M14_Text_081B103D
# 24 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	callstd 5
# 25 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 26 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	goto_if EQUAL, Naranja_FieryPath_G24_M14_EventScript_Sub_081B103A
# 27 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	closemessage
# 28 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	dofieldeffect 0x28
# 29 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	waitstate
# 30 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	goto Naranja_FieryPath_G24_M14_EventScript_Sub_081B1019
	return


Naranja_FieryPath_G24_M14_EventScript_Sub_081B1019::
# 34 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setflag FLAG_NARANJA_FIERY_PATH_EVENT_COMPLETE_0829
# 35 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	loadword 0, Naranja_FieryPath_G24_M14_Text_081B109D
# 36 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	callstd 3
# 37 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	releaseall
	end


Naranja_FieryPath_G24_M14_EventScript_Sub_081B1026::
# 42 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	loadword 0, Naranja_FieryPath_G24_M14_Text_081B10E7
# 43 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	callstd 3
# 44 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	releaseall
	end


Naranja_FieryPath_G24_M14_EventScript_Sub_081B1030::
# 49 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	loadword 0, Naranja_FieryPath_G24_M14_Text_081B1127
# 50 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	callstd 3
# 51 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	releaseall
	end


Naranja_FieryPath_G24_M14_EventScript_Sub_081B103A::
# 56 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	closemessage
# 57 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	releaseall
	end


Naranja_FieryPath_G24_M14_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId8::
# 62 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5F
# 63 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 64 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	callstd 1
	end


Naranja_FieryPath_G24_M14_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 69 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setorcopyvar VAR_0x8000, 0x126
# 70 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 71 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	callstd 1
	end


Naranja_FieryPath_G24_M14_Text_081B103D::
# 75 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	.string "It’s a big boulder, but a POKéMON\nmay be able to push it aside.\pWould you like to use STRENGTH?$"

Naranja_FieryPath_G24_M14_Text_081B109D::
# 79 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	.string "{STR_VAR_1} used STRENGTH.\p{STR_VAR_1}’s STRENGTH made it possible\nto move boulders around.$"

Naranja_FieryPath_G24_M14_Text_081B10E7::
# 83 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	.string "It’s a big boulder, but a POKéMON\nmay be able to push it aside.$"

Naranja_FieryPath_G24_M14_Text_081B1127::
# 87 "data/maps/Naranja_FieryPath_G24_M14/scripts.pory"
	.string "STRENGTH made it possible to move\nboulders around.$"
