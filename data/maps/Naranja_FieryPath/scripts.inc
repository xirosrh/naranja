Naranja_FieryPath_MapScripts::
# 5 "data/maps/Naranja_FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_FieryPath_OnTransition
	.byte 0


Naranja_FieryPath_OnTransition::
# 9 "data/maps/Naranja_FieryPath/scripts.pory"
	setflag FLAG_NARANJA_FIERY_PATH_EVENT_COMPLETE_084A
	end


Naranja_FieryPath_EventScript_PushableBoulder::
# 14 "data/maps/Naranja_FieryPath/scripts.pory"
	lockall
# 15 "data/maps/Naranja_FieryPath/scripts.pory"
	checkflag FLAG_NARANJA_CHARICIFIC_VALLEY_EVENT_COMPLETE_080A
# 16 "data/maps/Naranja_FieryPath/scripts.pory"
	goto_if LESS_THAN, Naranja_FieryPath_EventScript_Sub_081B1026
# 17 "data/maps/Naranja_FieryPath/scripts.pory"
	checkflag FLAG_NARANJA_FIERY_PATH_EVENT_COMPLETE_0829
# 18 "data/maps/Naranja_FieryPath/scripts.pory"
	goto_if EQUAL, Naranja_FieryPath_EventScript_Sub_081B1030
# 19 "data/maps/Naranja_FieryPath/scripts.pory"
	checkpartymove MOVE_STRENGTH
# 20 "data/maps/Naranja_FieryPath/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 21 "data/maps/Naranja_FieryPath/scripts.pory"
	goto_if EQUAL, Naranja_FieryPath_EventScript_Sub_081B1026
# 22 "data/maps/Naranja_FieryPath/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 23 "data/maps/Naranja_FieryPath/scripts.pory"
	msgbox Naranja_FieryPath_Text_081B103D, MSGBOX_YESNO
# 24 "data/maps/Naranja_FieryPath/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 25 "data/maps/Naranja_FieryPath/scripts.pory"
	goto_if EQUAL, Naranja_FieryPath_EventScript_Sub_081B103A
# 26 "data/maps/Naranja_FieryPath/scripts.pory"
	closemessage
# 27 "data/maps/Naranja_FieryPath/scripts.pory"
	dofieldeffect 0x28
# 28 "data/maps/Naranja_FieryPath/scripts.pory"
	waitstate
# 29 "data/maps/Naranja_FieryPath/scripts.pory"
	goto Naranja_FieryPath_EventScript_Sub_081B1019
	return


Naranja_FieryPath_EventScript_Sub_081B1019::
# 33 "data/maps/Naranja_FieryPath/scripts.pory"
	setflag FLAG_NARANJA_FIERY_PATH_EVENT_COMPLETE_0829
# 34 "data/maps/Naranja_FieryPath/scripts.pory"
	msgbox Naranja_FieryPath_Text_081B109D, MSGBOX_SIGN
# 35 "data/maps/Naranja_FieryPath/scripts.pory"
	releaseall
	end


Naranja_FieryPath_EventScript_Sub_081B1026::
# 40 "data/maps/Naranja_FieryPath/scripts.pory"
	msgbox Naranja_FieryPath_Text_081B10E7, MSGBOX_SIGN
# 41 "data/maps/Naranja_FieryPath/scripts.pory"
	releaseall
	end


Naranja_FieryPath_EventScript_Sub_081B1030::
# 46 "data/maps/Naranja_FieryPath/scripts.pory"
	msgbox Naranja_FieryPath_Text_081B1127, MSGBOX_SIGN
# 47 "data/maps/Naranja_FieryPath/scripts.pory"
	releaseall
	end


Naranja_FieryPath_EventScript_Sub_081B103A::
# 52 "data/maps/Naranja_FieryPath/scripts.pory"
	closemessage
# 53 "data/maps/Naranja_FieryPath/scripts.pory"
	releaseall
	end


Naranja_FieryPath_EventScript_ItemBall_2::
# 58 "data/maps/Naranja_FieryPath/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5F
# 59 "data/maps/Naranja_FieryPath/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 60 "data/maps/Naranja_FieryPath/scripts.pory"
	callstd 1
	end


Naranja_FieryPath_EventScript_ItemBall::
# 65 "data/maps/Naranja_FieryPath/scripts.pory"
	setorcopyvar VAR_0x8000, 0x126
# 66 "data/maps/Naranja_FieryPath/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 67 "data/maps/Naranja_FieryPath/scripts.pory"
	callstd 1
	end


Naranja_FieryPath_Text_081B103D::
# 71 "data/maps/Naranja_FieryPath/scripts.pory"
	.string "It’s a big boulder, but a POKéMON\nmay be able to push it aside.\pWould you like to use STRENGTH?$"

Naranja_FieryPath_Text_081B109D::
# 75 "data/maps/Naranja_FieryPath/scripts.pory"
	.string "{STR_VAR_1} used STRENGTH.\p{STR_VAR_1}’s STRENGTH made it possible\nto move boulders around.$"

Naranja_FieryPath_Text_081B10E7::
# 79 "data/maps/Naranja_FieryPath/scripts.pory"
	.string "It’s a big boulder, but a POKéMON\nmay be able to push it aside.$"

Naranja_FieryPath_Text_081B1127::
# 83 "data/maps/Naranja_FieryPath/scripts.pory"
	.string "STRENGTH made it possible to move\nboulders around.$"
