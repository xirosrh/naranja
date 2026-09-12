Naranja_PuertoDeTangelo_G01_M01_MapScripts::
# 5 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuertoDeTangelo_G01_M01_OnTransition
# 6 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PuertoDeTangelo_G01_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_PuertoDeTangelo_G01_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_STORY_STATE, 0, Naranja_PuertoDeTangelo_G01_M01_OnWarp_1
	.2byte 0


Naranja_PuertoDeTangelo_G01_M01_OnTransition::
# 12 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0082
# 13 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if LESS_THAN, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081527CE
# 14 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 4
# 15 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6950
# 16 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081A2F3D
# 17 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_SECRET_BASE_STORY_STATE, 0
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081527CE::
# 22 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G01_M01_RIVAL_BRENDAN_NORMAL, 1, 2
# 23 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G01_M01_RIVAL_BRENDAN_NORMAL, 7
	return


Naranja_PuertoDeTangelo_G01_M01_OnWarp_1::
# 28 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 29 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 30 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_OnWarp_1
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_1::
# 35 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	lockall
# 36 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 37 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152837
# 39 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 40 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_0815285D
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152837::
# 45 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8004, 1
# 46 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special DoPCTurnOnEffect
# 47 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playse SE_PC_ON
# 48 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081A10D6, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special BedroomPC
# 50 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitstate
# 51 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_0815285D::
# 56 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081A100C, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_2::
# 62 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_08172F9A, MSGBOX_SIGN
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_4::
# 67 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_0817306C, MSGBOX_SIGN
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_OBJ_EVENT_GFX_RIVAL_ASH_NORMAL_LocalId1::
# 72 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	lockall
# 73 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0124
# 74 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BB5
# 75 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 76 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 77 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152AD4
# 78 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 79 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B4A
# 80 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	removeobject 32783
# 82 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 3
# 83 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 1
# 84 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	savebgm MUS_DUMMY
# 85 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	fadedefaultbgm
# 86 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152AD4::
# 91 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_0817337E, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 93 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 94 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 95 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 96 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 97 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 98 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081733AF, MSGBOX_DEFAULT
# 100 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 101 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 102 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B29
# 103 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 104 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B34
# 105 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 106 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B3F
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B29::
# 111 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C11
# 112 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B34::
# 117 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C1C
# 118 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B3F::
# 123 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C1C
# 124 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B4A::
# 129 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081735C9, MSGBOX_DEFAULT
# 130 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 131 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 132 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 133 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 134 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 135 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 136 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 137 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081735FC, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 139 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 140 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B9F
# 141 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 142 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B9F
# 143 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 144 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BAA
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B9F::
# 149 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C30
# 150 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BAA::
# 155 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C25
# 156 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BB5::
# 161 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 162 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 163 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 164 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 165 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BDB
# 166 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 167 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BED
# 168 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0125
# 169 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BDB::
# 174 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0125
# 175 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BFF
# 176 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081737AE, MSGBOX_DEFAULT
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BED::
# 181 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0125
# 182 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152C08
# 183 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081738F2, MSGBOX_DEFAULT
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BFF::
# 188 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_08173883, MSGBOX_DEFAULT
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152C08::
# 193 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_081739CC, MSGBOX_DEFAULT
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081A2F3D::
# 198 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_VARS
# 199 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_241
# 200 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_242
# 201 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_243
# 202 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_244
# 203 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_245
# 204 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_246
# 205 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_247
# 206 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_248
# 207 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_249
# 208 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_250
# 209 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_251
# 210 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_SECRET_BASE_G25_M00_252
# 211 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_SECRET_BASE_G25_M00_253
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6950::
# 216 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 5
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_3::
# 221 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	lockall
# 222 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8004, 0
# 223 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B69EB
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B69EB::
# 227 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0051
# 228 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A91
# 229 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_08172E18, MSGBOX_DEFAULT
# 230 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A9B
# 231 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay 0x1E
# 232 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6
# 233 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0051
# 234 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_MACHOKE_FACING_AWAY
# 235 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_MACHOKE_CARRYING_BOX
# 236 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 237 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 238 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A31
# 239 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 240 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A61
# 241 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playse SE_EXIT
# 242 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	removeobject 32776
# 243 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A31::
# 248 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8008, 0xE
# 249 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	addobject 32776
# 250 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA2
# 251 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 252 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 253 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 254 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_08172E4C, MSGBOX_DEFAULT
# 255 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 256 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA9
# 257 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A61::
# 262 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8008, 0xE
# 263 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	addobject 32776
# 264 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AAD
# 265 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 266 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 267 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 268 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	msgbox Naranja_PuertoDeTangelo_G01_M01_Text_08172E4C, MSGBOX_DEFAULT
# 269 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 270 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AB4
# 271 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A91::
# 276 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	incrementgamestat 0x2D
# 277 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	fadescreen 1
# 278 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special Special_ViewWallClock
# 279 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitstate
# 280 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A9B::
# 285 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	fadescreen 1
# 286 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special StartWallClock
# 287 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitstate
	return


# 291 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C11:
# 292 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 293 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 294 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 295 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 296 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 297 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 298 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 299 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 300 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 301 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 304 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C1C:
# 305 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 306 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 307 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 308 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 309 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 310 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 311 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 312 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 315 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C25:
# 316 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 317 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 318 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 319 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 320 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 321 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 322 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 323 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 324 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 325 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 328 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C30:
# 329 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 330 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 331 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 332 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 333 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 334 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 335 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 336 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 339 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA2:
# 340 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 341 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 342 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_in_place_faster_left
# 343 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_16
# 344 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 345 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
	step_end

# 348 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA9:
# 349 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 350 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 351 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 354 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AAD:
# 355 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 356 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 357 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_in_place_faster_right
# 358 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_16
# 359 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 360 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
	step_end

# 363 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AB4:
# 364 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 365 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 366 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

Naranja_PuertoDeTangelo_G01_M01_Text_08172E18::
# 369 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "The clock is stopped...\pBetter set it and start it!$"

Naranja_PuertoDeTangelo_G01_M01_Text_08172E4C::
# 373 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\nnew room?\pGood! Everything’s put away neatly!\pThey finished moving everything in\ndownstairs, too.\pPOKéMON movers are so convenient!\pOh, you should make sure that\neverything’s all there on your desk.$"

Naranja_PuertoDeTangelo_G01_M01_Text_08172F9A::
# 377 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\pADVENTURE RULE NO. 1\nOpen the MENU with START.\pADVENTURE RULE NO. 2\nRecord your progress with SAVE.\pThe remaining pages are blank...$"

Naranja_PuertoDeTangelo_G01_M01_Text_0817306C::
# 381 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "It’s a Nintendo GameCube.\pA Game Boy Advance is connected to\nserve as the Controller.$"

Naranja_PuertoDeTangelo_G01_M01_Text_0817337E::
# 385 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "POKéMON fully restored!\nItems ready, and... Huh?$"

Naranja_PuertoDeTangelo_G01_M01_Text_081733AF::
# 389 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "Huh?\nWho... Who are you?\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pOh, you’re {PLAYER}{KUN}.\nSo your move was today.\pUm... I’m MAY.\nGlad to meet you!\pI...\nI have this dream of becoming friends\lwith POKéMON all over the world.\pI... I heard about you, {PLAYER}{KUN}, from\nmy dad, PROF. BIRCH.\pI was hoping that you would be nice,\n{PLAYER}{KUN}, and that we could be friends.\pOh, this is silly, isn’t it?\nI... I’ve just met you, {PLAYER}{KUN}.\pEheheh...\pOh, no! I forgot!\pI was supposed to go help Dad catch\nsome wild POKéMON!\p{PLAYER}{KUN}, I’ll catch you later!$"

Naranja_PuertoDeTangelo_G01_M01_Text_081735C9::
# 393 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "POKéMON fully restored...\nItems all packed, and...$"

Naranja_PuertoDeTangelo_G01_M01_Text_081735FC::
# 397 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "Hey!\nYou...\pWho are you?\pOh, you’re {PLAYER}, aren’t you?\nMoved in next door, right?\pI didn’t know that you’re a girl.\pDad, PROF. BIRCH, said that our new\nnext-door neighbor is a GYM LEADER’s\lkid, so I assumed you’d be a guy.\pMy name’s BRENDAN.\nSo, hi, neighbor!\pHuh? Hey, {PLAYER}, don’t you have\na POKéMON?\pDo you want me to go catch you one?\pAw, darn, I forgot...\pI’m supposed to go help my dad catch\nsome wild POKéMON.\pSome other time, okay?$"

Naranja_PuertoDeTangelo_G01_M01_Text_081737AE::
# 401 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\pI was just checking my POKéDEX.\pThere’s still a lot of POKéMON that\nI’ve seen but haven’t caught.\pAnd there are many others that\nI think will evolve.\pI wonder where I should go catch\nsome POKéMON next?$"

Naranja_PuertoDeTangelo_G01_M01_Text_08173883::
# 405 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "MAY: I wonder where I should go catch\nsome POKéMON next?\pWouldn’t it be funny if we ran into each\nother, {PLAYER}{KUN}?$"

Naranja_PuertoDeTangelo_G01_M01_Text_081738F2::
# 409 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "BRENDAN: Hey, it’s {PLAYER}.\pI was just checking out my POKéDEX.\pThere are still many POKéMON that\nI need to catch, I know, but this\lis looking pretty good.\pChecking this POKéDEX out gives me\nthe urge to hit the road again.$"

Naranja_PuertoDeTangelo_G01_M01_Text_081739CC::
# 413 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "BRENDAN: I’m having a hard time deciding\nwhere I should catch POKéMON next.\pHey, {PLAYER}, if I see you while I’m out\ncatching POKéMON, I can pitch you a\lbattle if you’d like.$"

Naranja_PuertoDeTangelo_G01_M01_Text_081A100C::
# 417 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "There’s an e-mail from POKéMON TRAINER\nSCHOOL.\p... ... ... ... ... ...\pA POKéMON may learn up to four moves.\pA TRAINER’s expertise is tested on the\nmove sets chosen for POKéMON.\p... ... ... ... ... ...$"

Naranja_PuertoDeTangelo_G01_M01_Text_081A10D6::
# 421 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "{PLAYER} booted up the PC.$"
