Naranja_IslaPomelo_G16_M11_MapScripts::
# 5 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaPomelo_G16_M11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaPomelo_G16_M11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_IslaPomelo_G16_M11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M11_OnFrame_1
	.2byte 0

Naranja_IslaPomelo_G16_M11_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M11_OnWarp_1
	.2byte 0


Naranja_IslaPomelo_G16_M11_OnWarp_1::
# 14 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_IslaPomelo_G16_M11_OnFrame_1::
# 19 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	lockall
# 20 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M11_STEVEN, Naranja_IslaPomelo_G16_M11_Movement_0815BC59
# 21 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M11_Movement_0815BC59
# 22 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M11_STEVEN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 24 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 25 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M11_Text_08191841
# 27 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	closemessage
# 29 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M11_STEVEN, Naranja_IslaPomelo_G16_M11_Movement_0815BC60
# 30 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M11_Movement_0815BC60
# 31 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	delay 0x14
# 33 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M11_STEVEN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 34 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 35 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M11_Text_081918D7
# 37 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	closemessage
# 39 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M11_STEVEN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 40 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 41 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 42 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	delay 0x14
# 43 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	dofieldeffect 0x3E
# 44 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitfieldeffect 0x3E
# 45 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	delay 0x28
# 46 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	call Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC13
# 48 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	checkplayergender
# 49 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 50 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M11_EventScript_Sub_0815BC41
# 51 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 52 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M11_EventScript_Sub_0815BC4D
	end


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0815BC41::
# 57 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setrespawn 1
# 58 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	fadescreenspeed 1, 0x18
# 59 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	special GameClear
# 60 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitstate
# 61 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0815BC4D::
# 66 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setrespawn 2
# 67 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	fadescreenspeed 1, 0x18
# 68 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	special GameClear
# 69 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	waitstate
# 70 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC13::
# 75 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M01_MAN_4
# 76 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	call Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FD09
# 77 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G09_M00_OLD_MAN_1
# 78 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_SIN_NOMBRE_G25_M41_OLD_MAN_1
# 79 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_LITTLE_BOY_1
# 80 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 1
# 81 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_G24_M43_WALLY_2
# 82 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_SS_TIDAL
# 83 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M10_SS_TIDAL
# 84 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	special UpdateTrainerFanClubGameClear
# 85 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0123
# 86 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	call_if LESS_THAN, Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC62
# 87 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_00FF
# 88 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	call_if LESS_THAN, Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC70
# 89 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_012A
# 90 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	call_if LESS_THAN, Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC5A
# 91 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_007B
# 92 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	call_if LESS_THAN, Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC5E
	return


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC5A::
# 97 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_ITEM_BALL
	return


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC5E::
# 102 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_ITEM_BALL_2
	return


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC62::
# 107 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 3
# 108 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 3
# 109 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G01_M00_NORMAN
	return


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FC70::
# 114 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_085D
	return


Naranja_IslaPomelo_G16_M11_EventScript_Sub_0819FD09::
# 119 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DD
# 120 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DE
# 121 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DF
# 122 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04E0
# 123 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	setvar VAR_NARANJA_ISLA_POMELO_STORY_STATE, 0
	return


# 127 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
Naranja_IslaPomelo_G16_M11_Movement_0815BC59:
# 128 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 129 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 130 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 131 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 132 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 133 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
Naranja_IslaPomelo_G16_M11_Movement_0815BC60:
# 137 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 138 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 139 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 140 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
# 141 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	walk_up
	step_end

Naranja_IslaPomelo_G16_M11_Text_08191841::
# 144 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	.string "STEVEN: This room...\pThis is where we keep records of\nPOKéMON that prevailed through\lharsh battles.\pIt is here that the LEAGUE CHAMPIONS\nare honored.$"

Naranja_IslaPomelo_G16_M11_Text_081918D7::
# 148 "data/maps/Naranja_IslaPomelo_G16_M11/scripts.pory"
	.string "STEVEN: Come on, let’s record your\nname as a TRAINER who triumphed over\lthe POKéMON LEAGUE, and the names of\lthe partners who battled with you.$"
