Naranja_NewMauville_G24_M52_MapScripts::
# 5 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_NewMauville_G24_M52_OnLoad
# 6 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NewMauville_G24_M52_OnTransition
	.byte 0


Naranja_NewMauville_G24_M52_OnLoad::
# 10 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 0
# 11 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	call_if EQUAL, Naranja_NewMauville_G24_M52_EventScript_Sub_0815E4A1
	end


Naranja_NewMauville_G24_M52_EventScript_Sub_0815E4A1::
# 16 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 3, 0, 0x314, 1
# 17 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 4, 0, 0x315, 1
# 18 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 5, 0, 0x316, 1
# 19 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 3, 1, 0x31C, 1
# 20 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 4, 1, 0x31D, 1
# 21 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 5, 1, 0x31E, 1
	return


Naranja_NewMauville_G24_M52_OnTransition::
# 26 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setflag FLAG_NARANJA_NEW_MAUVILLE_EVENT_COMPLETE_0840
	end


Naranja_NewMauville_G24_M52_EventScript_Trigger_1::
# 31 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	lockall
# 32 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 33 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	loadword 0, Naranja_NewMauville_G24_M52_Text_081982C0
# 35 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	checkitem ITEM_BASEMENT_KEY, 1
# 37 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	goto_if EQUAL, Naranja_NewMauville_G24_M52_EventScript_Sub_0815E55D
# 39 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	loadword 0, Naranja_NewMauville_G24_M52_Text_081982D4
# 40 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	callstd 5
# 41 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 42 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	goto_if EQUAL, Naranja_NewMauville_G24_M52_EventScript_Sub_0815E55D
# 43 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	loadword 0, Naranja_NewMauville_G24_M52_Text_081982EA
# 44 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 3, 0, 0x2C3, 0
# 46 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 4, 0, 0x2C4, 0
# 47 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 5, 0, 0x2C5, 0
# 48 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 3, 1, 0x2CB, 1
# 49 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 4, 1, 0x2CC, 0
# 50 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setmetatile 5, 1, 0x2CD, 1
# 51 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	playse SE_BANG
# 53 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	setvar VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 1
# 54 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M52_EventScript_Sub_0815E55D::
# 59 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M52_Text_081982C0::
# 63 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	.string "The door is closed.$"

Naranja_NewMauville_G24_M52_Text_081982D4::
# 67 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	.string "Use the BASEMENT KEY?$"

Naranja_NewMauville_G24_M52_Text_081982EA::
# 71 "data/maps/Naranja_NewMauville_G24_M52/scripts.pory"
	.string "{PLAYER} used the BASEMENT KEY.\pThe door opened!$"
