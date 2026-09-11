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
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 4
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
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081A10D6
# 49 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special BedroomPC
# 51 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitstate
# 52 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_0815285D::
# 57 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081A100C
# 58 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 59 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_2::
# 64 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_08172F9A
# 65 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 3
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_4::
# 70 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_0817306C
# 71 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 3
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL_LocalId1::
# 76 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	lockall
# 77 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0124
# 78 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BB5
# 79 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 80 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 81 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152AD4
# 82 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 83 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B4A
# 84 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	removeobject 32783
# 86 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 3
# 87 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 1
# 88 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	savebgm MUS_DUMMY
# 89 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152AD4::
# 95 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_0817337E
# 96 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 98 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 99 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 100 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 101 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 102 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 103 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 104 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081733AF
# 105 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 107 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 108 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B29
# 109 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 110 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B34
# 111 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 112 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B3F
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B29::
# 117 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C11
# 118 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B34::
# 123 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C1C
# 124 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B3F::
# 129 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C1C
# 130 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B4A::
# 135 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081735C9
# 136 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 138 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 139 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 140 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 141 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 142 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 143 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 144 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081735FC
# 145 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 146 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 147 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 148 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B9F
# 149 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 150 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B9F
# 151 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 152 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BAA
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152B9F::
# 157 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C30
# 158 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BAA::
# 163 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_PuertoDeTangelo_G01_M01_Movement_08152C25
# 164 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BB5::
# 169 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 170 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 171 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 172 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 173 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BDB
# 174 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 175 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BED
# 176 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0125
# 177 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BDB::
# 182 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0125
# 183 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BFF
# 184 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081737AE
# 185 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BED::
# 190 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0125
# 191 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152C08
# 192 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081738F2
# 193 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152BFF::
# 198 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_08173883
# 199 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_08152C08::
# 204 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_081739CC
# 205 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081A2F3D::
# 210 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_VARS
# 211 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_241
# 212 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_242
# 213 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_243
# 214 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_244
# 215 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_245
# 216 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_246
# 217 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_247
# 218 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_248
# 219 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_249
# 220 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_250
# 221 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_251
# 222 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_SECRET_BASE_G25_M00_252
# 223 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_SECRET_BASE_G25_M00_253
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6950::
# 228 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 5
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sign_3::
# 233 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	lockall
# 234 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8004, 0
# 235 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B69EB
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B69EB::
# 239 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0051
# 240 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A91
# 241 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_08172E18
# 242 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 243 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A9B
# 244 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay 0x1E
# 245 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6
# 246 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0051
# 247 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_MACHOKE_FACING_AWAY
# 248 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_MACHOKE_CARRYING_BOX
# 249 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	checkplayergender
# 250 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 251 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A31
# 252 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 253 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A61
# 254 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	playse SE_EXIT
# 255 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	removeobject 32776
# 256 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A31::
# 261 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8008, 0xE
# 262 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	addobject 32776
# 263 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA2
# 264 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 265 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 266 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 267 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_08172E4C
# 268 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 269 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 270 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA9
# 271 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A61::
# 276 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	setvar VAR_0x8008, 0xE
# 277 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	addobject 32776
# 278 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AAD
# 279 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 280 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 281 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 282 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G01_M01_Text_08172E4C
# 283 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	callstd 4
# 284 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	closemessage
# 285 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	applymovement 32776, Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AB4
# 286 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A91::
# 291 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	incrementgamestat 0x2D
# 292 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	fadescreen 1
# 293 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special Special_ViewWallClock
# 294 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitstate
# 295 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081B6A9B::
# 300 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	fadescreen 1
# 301 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	special StartWallClock
# 302 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	waitstate
	return


# 306 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C11:
# 307 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 308 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 309 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 310 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 311 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 312 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 313 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 314 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 315 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 316 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 319 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C1C:
# 320 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 321 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 322 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 323 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 324 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 325 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 326 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 327 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 330 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C25:
# 331 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 332 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 333 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 334 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 335 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 336 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 337 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 338 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 339 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 340 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 343 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_08152C30:
# 344 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 345 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 346 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 347 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 348 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 349 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 350 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 351 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 354 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA2:
# 355 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 356 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 357 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_in_place_faster_left
# 358 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_16
# 359 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 360 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
	step_end

# 363 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AA9:
# 364 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
# 365 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 366 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

# 369 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AAD:
# 370 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 371 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_down
# 372 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_in_place_faster_right
# 373 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_16
# 374 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
# 375 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_right
	step_end

# 378 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
Naranja_PuertoDeTangelo_G01_M01_Movement_081B6AB4:
# 379 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_left
# 380 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	walk_up
# 381 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	delay_8
	step_end

Naranja_PuertoDeTangelo_G01_M01_Text_08172E18::
# 384 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "The clock is stopped...\pBetter set it and start it!$"

Naranja_PuertoDeTangelo_G01_M01_Text_08172E4C::
# 388 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\nnew room?\pGood! Everything’s put away neatly!\pThey finished moving everything in\ndownstairs, too.\pPOKéMON movers are so convenient!\pOh, you should make sure that\neverything’s all there on your desk.$"

Naranja_PuertoDeTangelo_G01_M01_Text_08172F9A::
# 392 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\pADVENTURE RULE NO. 1\nOpen the MENU with START.\pADVENTURE RULE NO. 2\nRecord your progress with SAVE.\pThe remaining pages are blank...$"

Naranja_PuertoDeTangelo_G01_M01_Text_0817306C::
# 396 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "It’s a Nintendo GameCube.\pA Game Boy Advance is connected to\nserve as the Controller.$"

Naranja_PuertoDeTangelo_G01_M01_Text_0817337E::
# 400 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "POKéMON fully restored!\nItems ready, and... Huh?$"

Naranja_PuertoDeTangelo_G01_M01_Text_081733AF::
# 404 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "Huh?\nWho... Who are you?\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pOh, you’re {PLAYER}{KUN}.\nSo your move was today.\pUm... I’m MAY.\nGlad to meet you!\pI...\nI have this dream of becoming friends\lwith POKéMON all over the world.\pI... I heard about you, {PLAYER}{KUN}, from\nmy dad, PROF. BIRCH.\pI was hoping that you would be nice,\n{PLAYER}{KUN}, and that we could be friends.\pOh, this is silly, isn’t it?\nI... I’ve just met you, {PLAYER}{KUN}.\pEheheh...\pOh, no! I forgot!\pI was supposed to go help Dad catch\nsome wild POKéMON!\p{PLAYER}{KUN}, I’ll catch you later!$"

Naranja_PuertoDeTangelo_G01_M01_Text_081735C9::
# 408 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "POKéMON fully restored...\nItems all packed, and...$"

Naranja_PuertoDeTangelo_G01_M01_Text_081735FC::
# 412 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "Hey!\nYou...\pWho are you?\pOh, you’re {PLAYER}, aren’t you?\nMoved in next door, right?\pI didn’t know that you’re a girl.\pDad, PROF. BIRCH, said that our new\nnext-door neighbor is a GYM LEADER’s\lkid, so I assumed you’d be a guy.\pMy name’s BRENDAN.\nSo, hi, neighbor!\pHuh? Hey, {PLAYER}, don’t you have\na POKéMON?\pDo you want me to go catch you one?\pAw, darn, I forgot...\pI’m supposed to go help my dad catch\nsome wild POKéMON.\pSome other time, okay?$"

Naranja_PuertoDeTangelo_G01_M01_Text_081737AE::
# 416 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\pI was just checking my POKéDEX.\pThere’s still a lot of POKéMON that\nI’ve seen but haven’t caught.\pAnd there are many others that\nI think will evolve.\pI wonder where I should go catch\nsome POKéMON next?$"

Naranja_PuertoDeTangelo_G01_M01_Text_08173883::
# 420 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "MAY: I wonder where I should go catch\nsome POKéMON next?\pWouldn’t it be funny if we ran into each\nother, {PLAYER}{KUN}?$"

Naranja_PuertoDeTangelo_G01_M01_Text_081738F2::
# 424 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "BRENDAN: Hey, it’s {PLAYER}.\pI was just checking out my POKéDEX.\pThere are still many POKéMON that\nI need to catch, I know, but this\lis looking pretty good.\pChecking this POKéDEX out gives me\nthe urge to hit the road again.$"

Naranja_PuertoDeTangelo_G01_M01_Text_081739CC::
# 428 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "BRENDAN: I’m having a hard time deciding\nwhere I should catch POKéMON next.\pHey, {PLAYER}, if I see you while I’m out\ncatching POKéMON, I can pitch you a\lbattle if you’d like.$"

Naranja_PuertoDeTangelo_G01_M01_Text_081A100C::
# 432 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "There’s an e-mail from POKéMON TRAINER\nSCHOOL.\p... ... ... ... ... ...\pA POKéMON may learn up to four moves.\pA TRAINER’s expertise is tested on the\nmove sets chosen for POKéMON.\p... ... ... ... ... ...$"

Naranja_PuertoDeTangelo_G01_M01_Text_081A10D6::
# 436 "data/maps/Naranja_PuertoDeTangelo_G01_M01/scripts.pory"
	.string "{PLAYER} booted up the PC.$"
