Naranja_NewMauville_Entrance_MapScripts::
# 5 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_NewMauville_Entrance_OnLoad
# 6 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NewMauville_Entrance_OnTransition
	.byte 0


Naranja_NewMauville_Entrance_OnLoad::
# 10 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_MIKAN_GYM_CHALLENGE_STATE, 0
# 11 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	call_if EQUAL, Naranja_NewMauville_Entrance_EventScript_Sub_0815E4A1
	end


Naranja_NewMauville_Entrance_EventScript_Sub_0815E4A1::
# 16 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, 0x314, 1
# 17 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, 0x315, 1
# 18 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, 0x316, 1
# 19 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, 0x31C, 1
# 20 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, 0x31D, 1
# 21 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, 0x31E, 1
	return


Naranja_NewMauville_Entrance_OnTransition::
# 26 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setflag FLAG_NARANJA_NEW_MAUVILLE_EVENT_COMPLETE_0840
	end


Naranja_NewMauville_Entrance_EventScript_Trigger_1::
# 31 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	lockall
# 32 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 33 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	msgbox Naranja_NewMauville_Entrance_Text_081982C0, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	checkitem ITEM_BASEMENT_KEY, 1
# 36 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 37 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	goto_if EQUAL, Naranja_NewMauville_Entrance_EventScript_Sub_0815E55D
# 38 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	msgbox Naranja_NewMauville_Entrance_Text_081982D4, MSGBOX_YESNO
# 39 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 40 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	goto_if EQUAL, Naranja_NewMauville_Entrance_EventScript_Sub_0815E55D
# 41 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	msgbox Naranja_NewMauville_Entrance_Text_081982EA, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, 0x2C3, 0
# 43 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, 0x2C4, 0
# 44 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, 0x2C5, 0
# 45 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, 0x2CB, 1
# 46 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, 0x2CC, 0
# 47 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, 0x2CD, 1
# 48 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	playse SE_BANG
# 50 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	setvar VAR_NARANJA_MIKAN_GYM_CHALLENGE_STATE, 1
# 51 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	releaseall
	end


Naranja_NewMauville_Entrance_EventScript_Sub_0815E55D::
# 56 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	releaseall
	end


Naranja_NewMauville_Entrance_Text_081982C0::
# 60 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	.string "The door is closed.$"

Naranja_NewMauville_Entrance_Text_081982D4::
# 64 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	.string "Use the BASEMENT KEY?$"

Naranja_NewMauville_Entrance_Text_081982EA::
# 68 "data/maps/Naranja_NewMauville_Entrance/scripts.pory"
	.string "{PLAYER} used the BASEMENT KEY.\pThe door opened!$"
