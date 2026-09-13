Naranja_TangeloPort_MaysHouse_2F_MapScripts::
# 5 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TangeloPort_MaysHouse_2F_OnTransition
# 6 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_TangeloPort_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_TangeloPort_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_STORY_STATE, 0, Naranja_TangeloPort_MaysHouse_2F_OnWarp_1
	.2byte 0


Naranja_TangeloPort_MaysHouse_2F_OnTransition::
# 12 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_0082
# 13 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	call_if LESS_THAN, Naranja_TangeloPort_MaysHouse_2F_EventScript_Sub_08152A7A
# 14 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 4
# 15 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_BrendansHouse_2F_EventScript_Sub_081B6950
# 16 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	call Naranja_TangeloPort_BrendansHouse_2F_EventScript_Sub_081A2F3D
# 17 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	setvar VAR_NARANJA_SECRET_BASE_STORY_STATE, 0
	end


Naranja_TangeloPort_MaysHouse_2F_EventScript_Sub_08152A7A::
# 22 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_TANGELO_TOWN_PORT_MAYS_HOUSE_2_F_RIVAL_MAY_NORMAL, 7, 2
# 23 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_TANGELO_TOWN_PORT_MAYS_HOUSE_2_F_RIVAL_MAY_NORMAL, 7
	return


Naranja_TangeloPort_MaysHouse_2F_OnWarp_1::
# 28 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	checkplayergender
# 29 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 30 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_RedCave1_OnWarp_1
	end


Naranja_TangeloPort_MaysHouse_2F_EventScript_Sign_4::
# 35 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	lockall
# 36 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	checkplayergender
# 37 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	goto_if EQUAL, Naranja_TangeloPort_MaysHouse_2F_EventScript_Sub_08152C52
# 39 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 40 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	goto_if EQUAL, Naranja_TangeloPort_MaysHouse_2F_EventScript_Sub_08152C5C
	end


Naranja_TangeloPort_MaysHouse_2F_EventScript_Sub_08152C52::
# 45 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	msgbox Naranja_TangeloPort_BrendansHouse_2F_Text_081A100C, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_MaysHouse_2F_EventScript_Sub_08152C5C::
# 51 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 52 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 53 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 54 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	msgbox Naranja_TangeloPort_BrendansHouse_2F_Text_081A10D6, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 56 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	waitstate
# 57 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_MaysHouse_2F_EventScript_Sign_3::
# 62 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	lockall
# 63 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/Naranja_TangeloPort_MaysHouse_2F/scripts.pory"
	goto Naranja_TangeloPort_BrendansHouse_2F_EventScript_Sub_081B69EB
	return

