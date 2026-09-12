Naranja_PuertoDeTangelo_G01_M03_MapScripts::
# 5 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuertoDeTangelo_G01_M03_OnTransition
# 6 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PuertoDeTangelo_G01_M03_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_PuertoDeTangelo_G01_M03_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_STORY_STATE, 0, Naranja_PuertoDeTangelo_G01_M03_OnWarp_1
	.2byte 0


Naranja_PuertoDeTangelo_G01_M03_OnTransition::
# 12 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0082
# 13 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	call_if LESS_THAN, Naranja_PuertoDeTangelo_G01_M03_EventScript_Sub_08152A7A
# 14 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 4
# 15 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6950
# 16 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	call Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081A2F3D
# 17 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	setvar VAR_NARANJA_SECRET_BASE_STORY_STATE, 0
	end


Naranja_PuertoDeTangelo_G01_M03_EventScript_Sub_08152A7A::
# 22 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G01_M03_RIVAL_MAY_NORMAL, 7, 2
# 23 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G01_M03_RIVAL_MAY_NORMAL, 7
	return


Naranja_PuertoDeTangelo_G01_M03_OnWarp_1::
# 28 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	checkplayergender
# 29 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 30 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_OnWarp_1
	end


Naranja_PuertoDeTangelo_G01_M03_EventScript_Sign_4::
# 35 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	lockall
# 36 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	checkplayergender
# 37 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M03_EventScript_Sub_08152C52
# 39 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 40 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M03_EventScript_Sub_08152C5C
	end


Naranja_PuertoDeTangelo_G01_M03_EventScript_Sub_08152C52::
# 45 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081A100C, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M03_EventScript_Sub_08152C5C::
# 51 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	setvar VAR_0x8004, 2
# 52 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	special DoPCTurnOnEffect
# 53 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	playse SE_PC_ON
# 54 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081A10D6, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	special BedroomPC
# 56 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	waitstate
# 57 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M03_EventScript_Sign_3::
# 62 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	lockall
# 63 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/Naranja_PuertoDeTangelo_G01_M03/scripts.pory"
	goto Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B69EB
	return

