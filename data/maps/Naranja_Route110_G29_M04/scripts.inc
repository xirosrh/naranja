Naranja_Route110_G29_M04_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route110_G29_M04_OnResume
# 6 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M04_OnTransition
	.byte 0


Naranja_Route110_G29_M04_OnResume::
# 10 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 11 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M04_EventScript_Sub_08161E2C
# 12 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 1
# 13 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M04_EventScript_Sub_08161E3F
# 14 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_3, 1
# 15 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M04_EventScript_Sub_08161E52
# 16 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_4, 1
# 17 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M04_EventScript_Sub_08161E65
	end


Naranja_Route110_G29_M04_OnTransition::
# 22 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_1, 0
# 23 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_2, 0
# 24 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_3, 0
# 25 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_4, 0
	end


Naranja_Route110_G29_M04_EventScript_Sign_1::
# 30 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	lockall
# 31 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_6, 0
# 32 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M04_EventScript_Sub_08161DD5
# 33 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M04_EventScript_Sub_08161DD5::
# 37 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_6, 1
# 38 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M04_EventScript_Trigger_1::
# 42 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	lockall
# 43 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_1, 1
# 44 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call Naranja_Route110_G29_M04_EventScript_Sub_08161E2C
# 46 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M04_EventScript_Trigger_2::
# 52 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	lockall
# 53 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_2, 1
# 54 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	playse SE_PIN
# 55 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call Naranja_Route110_G29_M04_EventScript_Sub_08161E3F
# 56 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	special DrawWholeMapView
# 57 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M04_EventScript_Trigger_3::
# 62 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	lockall
# 63 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_3, 1
# 64 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call Naranja_Route110_G29_M04_EventScript_Sub_08161E52
# 66 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	special DrawWholeMapView
# 67 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M04_EventScript_Trigger_4::
# 72 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	lockall
# 73 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setvar VAR_TEMP_4, 1
# 74 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	playse SE_PIN
# 75 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	call Naranja_Route110_G29_M04_EventScript_Sub_08161E65
# 76 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	special DrawWholeMapView
# 77 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M04_EventScript_Sub_08161E2C::
# 82 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 0xE, 0x15, 0x259, 0
# 83 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 1, 0xC, 0x26A, 0
	return


Naranja_Route110_G29_M04_EventScript_Sub_08161E3F::
# 88 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 8, 0x11, 0x259, 0
# 89 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 0xC, 0xD, 0x26A, 0
	return


Naranja_Route110_G29_M04_EventScript_Sub_08161E52::
# 94 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 4, 0xA, 0x259, 0
# 95 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 8, 4, 0x26A, 0
	return


Naranja_Route110_G29_M04_EventScript_Sub_08161E65::
# 100 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 5, 2, 0x259, 0
# 101 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setmetatile 0xC, 5, 0x26A, 0
	return


Naranja_Route110_G29_M04_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId1::
# 106 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_274, Naranja_Route110_G29_M04_Text_0819CD46, Naranja_Route110_G29_M04_Text_0819CD66
# 107 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	msgbox Naranja_Route110_G29_M04_Text_0819CD91, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M04_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId2::
# 112 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_275, Naranja_Route110_G29_M04_Text_0819CDBF, Naranja_Route110_G29_M04_Text_0819CDF0
# 113 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	msgbox Naranja_Route110_G29_M04_Text_0819CE0D, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M04_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId3::
# 118 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_281, Naranja_Route110_G29_M04_Text_0819CE52, Naranja_Route110_G29_M04_Text_0819CE98
# 119 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	msgbox Naranja_Route110_G29_M04_Text_0819CEB8, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M04_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 124 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7A
# 125 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 126 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M04_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 131 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7E
# 132 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 133 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M04_Text_0819CD46::
# 137 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "Which switch closes which hole?$"

Naranja_Route110_G29_M04_Text_0819CD66::
# 141 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "After that battle, I’m even more\nconfused!$"

Naranja_Route110_G29_M04_Text_0819CD91::
# 145 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "Can I get you to push all the buttons\nfor me?$"

Naranja_Route110_G29_M04_Text_0819CDBF::
# 149 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "Oh! You’re on your second TRICK HOUSE\nchallenge!$"

Naranja_Route110_G29_M04_Text_0819CDF0::
# 153 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "You’re good at battling too?$"

Naranja_Route110_G29_M04_Text_0819CE0D::
# 157 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "The TRICK MASTER rigged all the tricks\nin this house all by himself.$"

Naranja_Route110_G29_M04_Text_0819CE52::
# 161 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "I want to make my own GYM one day.\nSo, I’m studying how to set traps.$"

Naranja_Route110_G29_M04_Text_0819CE98::
# 165 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "I didn’t study battling enough!$"

Naranja_Route110_G29_M04_Text_0819CEB8::
# 169 "data/maps/Naranja_Route110_G29_M04/scripts.pory"
	.string "You’re strong, aren’t you?\nMaybe even enough to be a GYM LEADER!$"
