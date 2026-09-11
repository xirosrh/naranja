Naranja_Route119_G00_M34_MapScripts::
# 5 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route119_G00_M34_OnResume
# 6 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route119_G00_M34_OnTransition
	.byte 0


Naranja_Route119_G00_M34_OnResume::
# 10 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 11 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_0815117C
	end


Naranja_Route119_G00_M34_EventScript_Sub_0815117C::
# 16 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 6
# 17 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151193
# 18 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 7
# 19 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151197
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151193::
# 24 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_KECLEON_1
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151197::
# 29 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_KECLEON_1_2
	return


Naranja_Route119_G00_M34_OnTransition::
# 34 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 35 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0172
# 36 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 37 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 1
# 38 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081511B9
# 39 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	special SetRoute119Weather
	end


Naranja_Route119_G00_M34_EventScript_Sub_081511B9::
# 44 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE119_G32_M01_MAN_5
# 45 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	clearflag FLAG_HIDE_ROUTE119_G32_M00_MAN_5
# 46 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_NARANJA_ROUTE119_EVENT_STATE_2, 2
	return


Naranja_Route119_G00_M34_EventScript_Trigger_1::
# 51 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081511DB
	return


Naranja_Route119_G00_M34_EventScript_Trigger_2::
# 56 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_TEMP_1, 2
# 57 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081511DB
	return


Naranja_Route119_G00_M34_EventScript_Sub_081511DB::
# 61 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lockall
# 62 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	addobject LOCALID_ROUTE119_G00_M34_243
# 63 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	checkplayergender
# 64 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 65 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151254
# 66 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 67 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151259
# 68 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x41
# 69 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 70 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513A6
# 71 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 72 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513B1
# 73 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 74 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x1E
# 76 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 77 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513D2
# 78 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 79 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513E1
# 80 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_243
# 81 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	addobject LOCALID_ROUTE119_G00_M34_VARS
# 82 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x1E
# 83 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	checkplayergender
# 84 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 85 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_0815125E
# 86 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 87 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081512D8
# 88 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	releaseall
	end


Naranja_Route119_G00_M34_EventScript_Sub_08151254::
# 93 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151259::
# 98 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
	return


Naranja_Route119_G00_M34_EventScript_Sub_0815125E::
# 103 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081710BB
# 104 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 105 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 106 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 107 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_0815128D
# 108 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 109 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_0815129D
# 110 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 111 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081512AD
	end


Naranja_Route119_G00_M34_EventScript_Sub_0815128D::
# 116 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE119_534, LOCALID_NONE, Naranja_Route119_G00_M34_Text_08171156
# 117 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081512BD
	return


Naranja_Route119_G00_M34_EventScript_Sub_0815129D::
# 121 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE119_537, LOCALID_NONE, Naranja_Route119_G00_M34_Text_08171156
# 122 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081512BD
	return


Naranja_Route119_G00_M34_EventScript_Sub_081512AD::
# 126 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE119_531, LOCALID_NONE, Naranja_Route119_G00_M34_Text_08171156
# 127 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081512BD
	return


Naranja_Route119_G00_M34_EventScript_Sub_081512BD::
# 131 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081711B1
# 132 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 133 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_Route119_G00_M34_EventScript_Sub_08151352
# 134 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171214
# 135 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 136 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151362
	return


Naranja_Route119_G00_M34_EventScript_Sub_081512D8::
# 140 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171358
# 141 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 142 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 143 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 144 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151307
# 145 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 146 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151317
# 147 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 148 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151327
	end


Naranja_Route119_G00_M34_EventScript_Sub_08151307::
# 153 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE119_525, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081713E2
# 154 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151337
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151317::
# 158 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE119_528, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081713E2
# 159 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151337
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151327::
# 163 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE119_522, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081713E2
# 164 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151337
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151337::
# 168 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_0817140B
# 169 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 170 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_Route119_G00_M34_EventScript_Sub_08151352
# 171 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171475
# 172 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 173 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151362
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151352::
# 177 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x154
# 178 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 179 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 0
# 180 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_NARANJA_ROUTE119_EVENT_COMPLETE_006E
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151362::
# 185 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 186 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 187 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513D2
# 188 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 189 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513E1
# 190 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_VARS
# 191 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	addobject LOCALID_ROUTE119_G00_M34_243
# 192 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x1E
# 193 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 194 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513BC
# 195 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 196 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513C7
# 197 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_243
# 198 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_NARANJA_ROUTE119_STORY_STATE, 1
# 199 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	savebgm MUS_DUMMY
# 200 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	fadedefaultbgm
# 201 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	releaseall
	end


Naranja_Route119_G00_M34_EventScript_Sub_081513A6::
# 206 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_081513F0
# 207 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513B1::
# 212 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_081513FA
# 213 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513BC::
# 218 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_08151405
# 219 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513C7::
# 224 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_0815140F
# 225 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513D2::
# 230 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_VARS, 0x19, 0x20
# 231 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_243, 0x19, 0x20
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513E1::
# 236 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_VARS, 0x1A, 0x20
# 237 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_243, 0x1A, 0x20
	return


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId31::
# 242 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171698
# 243 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 2
	end


Naranja_Route119_G00_M34_EventScript_Sign_2::
# 248 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171749
# 249 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 3
	end


Naranja_Route119_G00_M34_EventScript_Sign_1::
# 254 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171762
# 255 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 3
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId8::
# 260 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_223, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE521, Naranja_Route119_G00_M34_Text_081BE54F
# 261 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE561
# 262 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId6::
# 267 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_224, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE5A4, Naranja_Route119_G00_M34_Text_081BE5DF
# 268 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE5F8
# 269 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId5::
# 274 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_225, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE632, Naranja_Route119_G00_M34_Text_081BE67B
# 275 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE695
# 276 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId10::
# 281 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_618, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE6EA, Naranja_Route119_G00_M34_Text_081BE729
# 282 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE748
# 283 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId4::
# 288 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_619, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE784, Naranja_Route119_G00_M34_Text_081BE7D3
# 289 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE7E9
# 290 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId11::
# 295 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_620, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE82F, Naranja_Route119_G00_M34_Text_081BE88D
# 296 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE89A
# 297 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId7::
# 302 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_552, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE8BB, Naranja_Route119_G00_M34_Text_081BE90E
# 303 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 304 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 305 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081514E6
# 306 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE937
# 307 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_Sub_081514E6::
# 312 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE119_552, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BE98D, Naranja_Route119_G00_M34_Text_081BE9D0
# 313 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BE9E8
# 314 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId9::
# 319 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_559, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEA3A, Naranja_Route119_G00_M34_Text_081BEA88
# 320 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 321 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 322 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151524
# 323 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BEAB3
# 324 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_Sub_08151524::
# 329 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE119_559, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEB22, Naranja_Route119_G00_M34_Text_081BEB49
# 330 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BEB68
# 331 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId14::
# 336 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_399, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEBC0, Naranja_Route119_G00_M34_Text_081BEC1C
# 337 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BEC2A
# 338 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId15::
# 343 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_400, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEC5E, Naranja_Route119_G00_M34_Text_081BEC9A
# 344 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BECB1
# 345 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId12::
# 350 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_415, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BECF1, Naranja_Route119_G00_M34_Text_081BED4C
# 351 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BED5C
# 352 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId13::
# 357 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_416, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEDB6, Naranja_Route119_G00_M34_Text_081BEDEC
# 358 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BEE06
# 359 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId34::
# 364 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_651, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEE2D, Naranja_Route119_G00_M34_Text_081BEE4B
# 365 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BEE66
# 366 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId37::
# 371 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_693, LOCALID_NONE, Naranja_Route119_G00_M34_Text_081BEED0, Naranja_Route119_G00_M34_Text_081BEF37
# 372 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081BEF67
# 373 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 6
	end


Naranja_Route119_G00_M34_EventScript_OBJECT_23_LocalId23::
# 378 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 379 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 380 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171520
# 381 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 382 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 383 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 384 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 385 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_OBJECT_24_LocalId24::
# 390 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 391 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 392 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_0817157C
# 393 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 394 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 395 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 396 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 397 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId26::
# 402 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081715D7
# 403 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 2
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId33::
# 408 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_081716F4
# 409 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 2
	end


Naranja_Route119_G00_M34_EventScript_Sign_20::
# 414 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171774
# 415 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 3
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId35::
# 420 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 421 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 422 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_0x8004, 6
# 423 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId36::
# 427 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 428 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 429 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_0x8004, 7
# 430 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A0594::
# 434 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	checkitem ITEM_DEVON_SCOPE, 1
# 435 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 436 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A05AE
# 437 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171B93
# 438 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 439 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_Sub_081A05AE::
# 444 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171BB6
# 445 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 5
# 446 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 447 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A05C3
# 448 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_Sub_081A05C3::
# 453 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	loadword 0, Naranja_Route119_G00_M34_Text_08171BF6
# 454 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 4
# 455 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 456 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 457 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 458 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_Route120_G00_M35_Movement_081A0662
# 459 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 460 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitse
# 461 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 462 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x28
# 463 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmoncry
# 464 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setwildbattle SPECIES_KECLEON, 0x1E, 0
# 465 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 466 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A0646
# 467 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 468 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A064A
# 469 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 470 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A064E
# 471 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 472 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A0652
# 473 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 474 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A0656
# 475 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 6
# 476 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A065A
# 477 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 7
# 478 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A065E
# 479 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 480 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	dowildbattle
# 481 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 482 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_Sub_081A0646::
# 487 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_2
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A064A::
# 492 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_3
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A064E::
# 497 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_4
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A0652::
# 502 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_6
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A0656::
# 507 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_5
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A065A::
# 512 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE119_G00_M34_KECLEON_1
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A065E::
# 517 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE119_G00_M34_KECLEON_1_2
	return


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId17::
# 522 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x53
# 523 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 524 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId18::
# 529 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x46
# 530 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 531 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId19::
# 536 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 537 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 538 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 543 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x62
# 544 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 545 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId21::
# 550 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 551 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 552 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId22::
# 557 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 558 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 559 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId32::
# 564 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 565 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 566 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


# 570 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_081513F0:
# 571 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 572 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 573 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 574 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 575 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 576 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 577 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 578 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 579 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

# 582 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_081513FA:
# 583 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 584 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 585 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 586 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 587 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 588 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 589 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 590 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 591 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 592 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

# 595 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_08151405:
# 596 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 597 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 598 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 599 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 600 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 601 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 602 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 603 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 604 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

# 607 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_0815140F:
# 608 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_left
# 609 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 610 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 611 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 612 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 613 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 614 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 615 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 616 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 617 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

Naranja_Route119_G00_M34_Text_081710BB::
# 620 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\nWhere were you? I was looking for you!\pHow much stronger have you gotten?\nLet me check for you!\pReady with your POKéMON?\nOf course you are! Go!$"

Naranja_Route119_G00_M34_Text_08171156::
# 624 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Achah!\n{PLAYER}{KUN}, you’re strong!\pI was worried that you might be\nstruggling with your training.$"

Naranja_Route119_G00_M34_Text_081711B1::
# 628 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "MAY: But I had absolutely nothing to\nworry about! Keep it up!\pAnd, here! I have a present for you.$"

Naranja_Route119_G00_M34_Text_08171214::
# 632 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\ninstantly carry you to any town you’ve\lalready visited.\pBut, to use FLY, you have to get the\nGYM BADGE from FORTREE CITY.\lThat’s important, so don’t forget.\pYou should FLY home and visit\nLITTLEROOT for a change.\pI bet your mom’s worried about you,\n{PLAYER}{KUN}.\pWell, let’s meet again somewhere!$"

Naranja_Route119_G00_M34_Text_08171358::
# 636 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\nyou’ve been looking for POKéMON?\pLet me see how good you got.\nI’ll test you!\pNow!\nIt’s a battle, so battle!$"

Naranja_Route119_G00_M34_Text_081713E2::
# 640 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Hmm...\nYou’ve gotten pretty darn decent.$"

Naranja_Route119_G00_M34_Text_0817140B::
# 644 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "BRENDAN: I’d say you’re good enough\nto search for POKéMON anywhere.\pHere, I’ll give you this.\nTry it out.$"

Naranja_Route119_G00_M34_Text_08171475::
# 648 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\ninstantly carries you to any town\lyou’ve already visited.\pBut you need the FORTREE GYM BADGE \nto do that.\pAnyway, I have to move along.$"

Naranja_Route119_G00_M34_Text_08171520::
# 652 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We’re standing lookout here.\pHey, you! Stay away from the WEATHER\nINSTITUTE. It’s not safe.$"

Naranja_Route119_G00_M34_Text_0817157C::
# 656 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Lookout duty is surprisingly boring.\pHey, you! Please don’t go near the\nWEATHER INSTITUTE.$"

Naranja_Route119_G00_M34_Text_081715D7::
# 660 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I thought you FLY by catching a whole\nflock of BIRD POKéMON, and then\lhanging on to them somehow.\pBut it turns out there’s an HM move\ncalled FLY!\pI wish I’d known about that a long\ntime ago...$"

Naranja_Route119_G00_M34_Text_08171698::
# 664 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Tch... It’s a no-go...\pThe tall grass snares BIKE tires.\nThere’s no way you can cycle here.$"

Naranja_Route119_G00_M34_Text_081716F4::
# 668 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\non a big pile of grass and make a\lSECRET BASE?$"

Naranja_Route119_G00_M34_Text_08171749::
# 672 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "ROUTE 119\nワ FORTREE CITY$"

Naranja_Route119_G00_M34_Text_08171762::
# 676 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "WEATHER INSTITUTE$"

Naranja_Route119_G00_M34_Text_08171774::
# 680 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "TRAINER TIPS\pUp to sixteen decorations and\nfurniture items can be placed in\la SECRET BASE.\pPick your favorite items and create\nyour very own SECRET BASE exactly the\lway you want.$"

Naranja_Route119_G00_M34_Text_08171BB6::
# 684 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Something unseeable is in the way.\pWant to use the DEVON SCOPE?$"

Naranja_Route119_G00_M34_Text_08171BF6::
# 688 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\pAn invisible POKéMON became completely\nvisible!\pThe startled POKéMON attacked!$"

Naranja_Route119_G00_M34_Text_081BE521::
# 692 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We’re the MIMIC CIRCLE!\nWe MIMIC what you do!$"

Naranja_Route119_G00_M34_Text_081BE54F::
# 696 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Whoopsie!\nI lost!$"

Naranja_Route119_G00_M34_Text_081BE561::
# 700 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "What’s so good about mimicry?\pFufufu...\nYou’ll never understand...$"

Naranja_Route119_G00_M34_Text_081BE5A4::
# 704 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "So, we finally meet!\nMy BUG POKéMON will keep you company!$"

Naranja_Route119_G00_M34_Text_081BE5DF::
# 708 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I wish we’d never met...$"

Naranja_Route119_G00_M34_Text_081BE5F8::
# 712 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I want to MIMIC you some more.\pCan you hurry up and move?$"

Naranja_Route119_G00_M34_Text_081BE632::
# 716 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "If you step forward, we step forward.\pIf you turn right, we turn, too...$"

Naranja_Route119_G00_M34_Text_081BE67B::
# 720 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "But if you win, I lose...$"

Naranja_Route119_G00_M34_Text_081BE695::
# 724 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I can’t MIMIC you winning the match.\nThat’s just impossible...\lIt’s burning me up...$"

Naranja_Route119_G00_M34_Text_081BE6EA::
# 728 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Yep, you’ve finally caught me!\nOr were you trying to avoid me?$"

Naranja_Route119_G00_M34_Text_081BE729::
# 732 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Whoop, that was a great match!$"

Naranja_Route119_G00_M34_Text_081BE748::
# 736 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We’re the MIMIC CIRCLE!\nI hope you enjoyed our performance.$"

Naranja_Route119_G00_M34_Text_081BE784::
# 740 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You don’t know who I am, do you?\pBut, I also don’t know you.\nSo, we’ll battle!$"

Naranja_Route119_G00_M34_Text_081BE7D3::
# 744 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’re pretty strong!$"

Naranja_Route119_G00_M34_Text_081BE7E9::
# 748 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Until you go away somewhere, we’ll\nkeep on mimicking your every move.$"

Naranja_Route119_G00_M34_Text_081BE82F::
# 752 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "The MIMIC CIRCLE was formed by people\nwho like to MIMIC.\pA battle starts the instant we meet!$"

Naranja_Route119_G00_M34_Text_081BE88D::
# 756 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I surrender!$"

Naranja_Route119_G00_M34_Text_081BE89A::
# 760 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Won’t you join our MIMIC CIRCLE?$"

Naranja_Route119_G00_M34_Text_081BE8BB::
# 764 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Who has the knowledge and the\ntechnique for survival?\pPOKéMON RANGERS, that’s who!$"

Naranja_Route119_G00_M34_Text_081BE90E::
# 768 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I didn’t have enough POKéMON\nknow-how...$"

Naranja_Route119_G00_M34_Text_081BE937::
# 772 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To break away from civilization and\nawaken the wild spirit within!\pThat’s our vision.$"

Naranja_Route119_G00_M34_Text_081BE98D::
# 776 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I’m going to regain my wild spirit by\nbeing together with POKéMON.$"

Naranja_Route119_G00_M34_Text_081BE9D0::
# 780 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’ve remained strong!$"

Naranja_Route119_G00_M34_Text_081BE9E8::
# 784 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Believe in your POKéMON.\nBelieve in yourself.\pThe road will reveal itself to you.$"

Naranja_Route119_G00_M34_Text_081BEA3A::
# 788 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Oh? Look at you.\pFor someone on an adventure, you’re\ntraveling awfully light.$"

Naranja_Route119_G00_M34_Text_081BEA88::
# 792 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Accidents happen when you’re not\nprepared!$"

Naranja_Route119_G00_M34_Text_081BEAB3::
# 796 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’re traveling light but you have\neverything you need.\pYou’re on top of things mentally and\nphysically, too.$"

Naranja_Route119_G00_M34_Text_081BEB22::
# 800 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "How’s your journey with POKéMON\ngoing?$"

Naranja_Route119_G00_M34_Text_081BEB49::
# 804 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I’m still missing something...$"

Naranja_Route119_G00_M34_Text_081BEB68::
# 808 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "In the same way that you, as a TRAINER,\nrely on your POKéMON, your POKéMON\lrely on you.$"

Naranja_Route119_G00_M34_Text_081BEBC0::
# 812 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "The vast sky holds untold promise!\pNothing can compare to the sheer\nexhilaration of flight!$"

Naranja_Route119_G00_M34_Text_081BEC1C::
# 816 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Down and out!$"

Naranja_Route119_G00_M34_Text_081BEC2A::
# 820 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "My BIRD POKéMON made my dreams of\nflying come true!$"

Naranja_Route119_G00_M34_Text_081BEC5E::
# 824 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I’ll show you the true potential of me\nand my BIRD POKéMON!$"

Naranja_Route119_G00_M34_Text_081BEC9A::
# 828 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We lacked potential...$"

Naranja_Route119_G00_M34_Text_081BECB1::
# 832 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Ever since I was a little kid, I always\nadmired BIRD POKéMON...$"

Naranja_Route119_G00_M34_Text_081BECF1::
# 836 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To lurk in shadows, and live in\ndarkness... That is my destiny.\pI emerge to challenge you!$"

Naranja_Route119_G00_M34_Text_081BED4C::
# 840 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I admit defeat!$"

Naranja_Route119_G00_M34_Text_081BED5C::
# 844 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Those defeated in battle withdraw\nquietly back into the shadows.\lThat, too, is destiny...$"

Naranja_Route119_G00_M34_Text_081BEDB6::
# 848 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "If you’re not on your guard, you’re in\nfor some pain!$"

Naranja_Route119_G00_M34_Text_081BEDEC::
# 852 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’re surprisingly good!$"

Naranja_Route119_G00_M34_Text_081BEE06::
# 856 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "My surprise attack ended in\nfailure...$"

Naranja_Route119_G00_M34_Text_081BEE2D::
# 860 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To hide a tree, use a forest!$"

Naranja_Route119_G00_M34_Text_081BEE4B::
# 864 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I bow to your superiority.$"

Naranja_Route119_G00_M34_Text_081BEE66::
# 868 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To hide a tree, use a forest!\nTo hide a POKéMON, use a POKéMON!\pThere is no deep, hidden meaning\nto that.$"

Naranja_Route119_G00_M34_Text_081BEED0::
# 872 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You spoke to me...\nSo you want to challenge me!\pSure! I’ll try out the POKéMON I caught\nwhile SURFING!$"

Naranja_Route119_G00_M34_Text_081BEF37::
# 876 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I don’t have a clue about what it\ntakes to win.$"

Naranja_Route119_G00_M34_Text_081BEF67::
# 880 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Go for a SURF on my POKéMON...\pThen fish off its back...\pIt’s an indescribably luxuriant moment!$"
