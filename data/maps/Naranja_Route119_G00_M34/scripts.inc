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
	msgbox Naranja_Route119_G00_M34_Text_081710BB, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 105 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 106 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_0815128D
# 107 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 108 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_0815129D
# 109 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 110 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081512AD
	end


Naranja_Route119_G00_M34_EventScript_Sub_0815128D::
# 115 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE119_534, Naranja_Route119_G00_M34_Text_08171156
# 116 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081512BD
	return


Naranja_Route119_G00_M34_EventScript_Sub_0815129D::
# 120 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE119_537, Naranja_Route119_G00_M34_Text_08171156
# 121 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081512BD
	return


Naranja_Route119_G00_M34_EventScript_Sub_081512AD::
# 125 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE119_531, Naranja_Route119_G00_M34_Text_08171156
# 126 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081512BD
	return


Naranja_Route119_G00_M34_EventScript_Sub_081512BD::
# 130 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081711B1, MSGBOX_DEFAULT
# 131 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_Route119_G00_M34_EventScript_Sub_08151352
# 132 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171214, MSGBOX_DEFAULT
# 133 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151362
	return


Naranja_Route119_G00_M34_EventScript_Sub_081512D8::
# 137 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171358, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 139 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 140 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151307
# 141 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 142 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151317
# 143 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 144 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151327
	end


Naranja_Route119_G00_M34_EventScript_Sub_08151307::
# 149 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE119_525, Naranja_Route119_G00_M34_Text_081713E2
# 150 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151337
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151317::
# 154 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE119_528, Naranja_Route119_G00_M34_Text_081713E2
# 155 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151337
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151327::
# 159 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE119_522, Naranja_Route119_G00_M34_Text_081713E2
# 160 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151337
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151337::
# 164 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_0817140B, MSGBOX_DEFAULT
# 165 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call Naranja_Route119_G00_M34_EventScript_Sub_08151352
# 166 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171475, MSGBOX_DEFAULT
# 167 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_08151362
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151352::
# 171 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x154
# 172 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 173 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 0
# 174 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_NARANJA_ROUTE119_EVENT_COMPLETE_006E
	return


Naranja_Route119_G00_M34_EventScript_Sub_08151362::
# 179 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 180 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 181 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513D2
# 182 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 183 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513E1
# 184 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_VARS
# 185 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	addobject LOCALID_ROUTE119_G00_M34_243
# 186 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x1E
# 187 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 188 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513BC
# 189 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 190 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081513C7
# 191 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	removeobject LOCALID_ROUTE119_G00_M34_243
# 192 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_NARANJA_ROUTE119_STORY_STATE, 1
# 193 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	savebgm MUS_DUMMY
# 194 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	fadedefaultbgm
# 195 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	releaseall
	end


Naranja_Route119_G00_M34_EventScript_Sub_081513A6::
# 200 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_081513F0
# 201 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513B1::
# 206 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_081513FA
# 207 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513BC::
# 212 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_08151405
# 213 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513C7::
# 218 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement LOCALID_ROUTE119_G00_M34_243, Naranja_Route119_G00_M34_Movement_0815140F
# 219 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513D2::
# 224 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_VARS, 0x19, 0x20
# 225 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_243, 0x19, 0x20
	return


Naranja_Route119_G00_M34_EventScript_Sub_081513E1::
# 230 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_VARS, 0x1A, 0x20
# 231 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G00_M34_243, 0x1A, 0x20
	return


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId31::
# 236 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171698, MSGBOX_NPC
	end


Naranja_Route119_G00_M34_EventScript_Sign_2::
# 241 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171749, MSGBOX_SIGN
	end


Naranja_Route119_G00_M34_EventScript_Sign_1::
# 246 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171762, MSGBOX_SIGN
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId8::
# 251 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_223, Naranja_Route119_G00_M34_Text_081BE521, Naranja_Route119_G00_M34_Text_081BE54F
# 252 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE561, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId6::
# 257 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_224, Naranja_Route119_G00_M34_Text_081BE5A4, Naranja_Route119_G00_M34_Text_081BE5DF
# 258 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE5F8, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId5::
# 263 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_225, Naranja_Route119_G00_M34_Text_081BE632, Naranja_Route119_G00_M34_Text_081BE67B
# 264 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE695, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId10::
# 269 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_618, Naranja_Route119_G00_M34_Text_081BE6EA, Naranja_Route119_G00_M34_Text_081BE729
# 270 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE748, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId4::
# 275 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_619, Naranja_Route119_G00_M34_Text_081BE784, Naranja_Route119_G00_M34_Text_081BE7D3
# 276 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE7E9, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId11::
# 281 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_620, Naranja_Route119_G00_M34_Text_081BE82F, Naranja_Route119_G00_M34_Text_081BE88D
# 282 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE89A, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId7::
# 287 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_552, Naranja_Route119_G00_M34_Text_081BE8BB, Naranja_Route119_G00_M34_Text_081BE90E
# 288 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 289 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 290 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081514E6
# 291 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE937, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_Sub_081514E6::
# 296 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE119_552, Naranja_Route119_G00_M34_Text_081BE98D, Naranja_Route119_G00_M34_Text_081BE9D0
# 297 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BE9E8, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId9::
# 302 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_559, Naranja_Route119_G00_M34_Text_081BEA3A, Naranja_Route119_G00_M34_Text_081BEA88
# 303 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 304 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 305 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_08151524
# 306 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BEAB3, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_Sub_08151524::
# 311 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE119_559, Naranja_Route119_G00_M34_Text_081BEB22, Naranja_Route119_G00_M34_Text_081BEB49
# 312 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BEB68, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId14::
# 317 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_399, Naranja_Route119_G00_M34_Text_081BEBC0, Naranja_Route119_G00_M34_Text_081BEC1C
# 318 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BEC2A, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId15::
# 323 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_400, Naranja_Route119_G00_M34_Text_081BEC5E, Naranja_Route119_G00_M34_Text_081BEC9A
# 324 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BECB1, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId12::
# 329 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_415, Naranja_Route119_G00_M34_Text_081BECF1, Naranja_Route119_G00_M34_Text_081BED4C
# 330 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BED5C, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId13::
# 335 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_416, Naranja_Route119_G00_M34_Text_081BEDB6, Naranja_Route119_G00_M34_Text_081BEDEC
# 336 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BEE06, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId34::
# 341 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_651, Naranja_Route119_G00_M34_Text_081BEE2D, Naranja_Route119_G00_M34_Text_081BEE4B
# 342 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BEE66, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId37::
# 347 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_693, Naranja_Route119_G00_M34_Text_081BEED0, Naranja_Route119_G00_M34_Text_081BEF37
# 348 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081BEF67, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_G00_M34_EventScript_OBJECT_23_LocalId23::
# 353 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 354 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 355 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171520, MSGBOX_DEFAULT
# 356 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 357 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 358 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 359 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_OBJECT_24_LocalId24::
# 364 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 365 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 366 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_0817157C, MSGBOX_DEFAULT
# 367 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 368 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 369 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 370 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId26::
# 375 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081715D7, MSGBOX_NPC
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId33::
# 380 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_081716F4, MSGBOX_NPC
	end


Naranja_Route119_G00_M34_EventScript_Sign_20::
# 385 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171774, MSGBOX_SIGN
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId35::
# 390 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 391 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 392 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_0x8004, 6
# 393 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId36::
# 397 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	lock
# 398 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	faceplayer
# 399 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setvar VAR_0x8004, 7
# 400 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A0594::
# 404 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	checkitem ITEM_DEVON_SCOPE, 1
# 405 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 406 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A05AE
# 407 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171B93, MSGBOX_DEFAULT
# 408 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_Sub_081A05AE::
# 413 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171BB6, MSGBOX_YESNO
# 414 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 415 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A05C3
# 416 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_Sub_081A05C3::
# 421 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	msgbox Naranja_Route119_G00_M34_Text_08171BF6, MSGBOX_DEFAULT
# 422 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	closemessage
# 423 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 424 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 425 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	applymovement 32783, Naranja_Route120_G00_M35_Movement_081A0662
# 426 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmovement LOCALID_NONE
# 427 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitse
# 428 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 429 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	delay 0x28
# 430 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	waitmoncry
# 431 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setwildbattle SPECIES_KECLEON, 0x1E, 0
# 432 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 433 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A0646
# 434 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 435 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A064A
# 436 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 437 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A064E
# 438 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 439 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A0652
# 440 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 441 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A0656
# 442 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 6
# 443 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A065A
# 444 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	compare_var_to_value VAR_0x8004, 7
# 445 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	call_if EQUAL, Naranja_Route119_G00_M34_EventScript_Sub_081A065E
# 446 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 447 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	dowildbattle
# 448 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 449 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	release
	end


Naranja_Route119_G00_M34_EventScript_Sub_081A0646::
# 454 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_2
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A064A::
# 459 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_3
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A064E::
# 464 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_4
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A0652::
# 469 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_6
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A0656::
# 474 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_KECLEON_1_5
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A065A::
# 479 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE119_G00_M34_KECLEON_1
	return


Naranja_Route119_G00_M34_EventScript_Sub_081A065E::
# 484 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setflag FLAG_HIDE_ROUTE119_G00_M34_KECLEON_1_2
	return


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId17::
# 489 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x53
# 490 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 491 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId18::
# 496 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x46
# 497 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 498 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId19::
# 503 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 504 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 505 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 510 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x62
# 511 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 512 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId21::
# 517 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 518 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 519 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId22::
# 524 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 525 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 526 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


Naranja_Route119_G00_M34_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId32::
# 531 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 532 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 533 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	callstd 1
	end


# 537 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_081513F0:
# 538 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 539 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 540 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 541 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 542 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 543 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 544 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 545 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 546 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

# 549 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_081513FA:
# 550 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 551 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 552 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 553 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 554 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 555 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 556 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 557 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 558 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 559 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

# 562 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_08151405:
# 563 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 564 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 565 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 566 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 567 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 568 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 569 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 570 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 571 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

# 574 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
Naranja_Route119_G00_M34_Movement_0815140F:
# 575 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_left
# 576 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 577 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 578 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 579 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 580 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_right
# 581 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 582 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 583 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
# 584 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	walk_fast_up
	step_end

Naranja_Route119_G00_M34_Text_081710BB::
# 587 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\nWhere were you? I was looking for you!\pHow much stronger have you gotten?\nLet me check for you!\pReady with your POKéMON?\nOf course you are! Go!$"

Naranja_Route119_G00_M34_Text_08171156::
# 591 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Achah!\n{PLAYER}{KUN}, you’re strong!\pI was worried that you might be\nstruggling with your training.$"

Naranja_Route119_G00_M34_Text_081711B1::
# 595 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "MAY: But I had absolutely nothing to\nworry about! Keep it up!\pAnd, here! I have a present for you.$"

Naranja_Route119_G00_M34_Text_08171214::
# 599 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\ninstantly carry you to any town you’ve\lalready visited.\pBut, to use FLY, you have to get the\nGYM BADGE from FORTREE CITY.\lThat’s important, so don’t forget.\pYou should FLY home and visit\nLITTLEROOT for a change.\pI bet your mom’s worried about you,\n{PLAYER}{KUN}.\pWell, let’s meet again somewhere!$"

Naranja_Route119_G00_M34_Text_08171358::
# 603 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\nyou’ve been looking for POKéMON?\pLet me see how good you got.\nI’ll test you!\pNow!\nIt’s a battle, so battle!$"

Naranja_Route119_G00_M34_Text_081713E2::
# 607 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Hmm...\nYou’ve gotten pretty darn decent.$"

Naranja_Route119_G00_M34_Text_0817140B::
# 611 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "BRENDAN: I’d say you’re good enough\nto search for POKéMON anywhere.\pHere, I’ll give you this.\nTry it out.$"

Naranja_Route119_G00_M34_Text_08171475::
# 615 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\ninstantly carries you to any town\lyou’ve already visited.\pBut you need the FORTREE GYM BADGE \nto do that.\pAnyway, I have to move along.$"

Naranja_Route119_G00_M34_Text_08171520::
# 619 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We’re standing lookout here.\pHey, you! Stay away from the WEATHER\nINSTITUTE. It’s not safe.$"

Naranja_Route119_G00_M34_Text_0817157C::
# 623 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Lookout duty is surprisingly boring.\pHey, you! Please don’t go near the\nWEATHER INSTITUTE.$"

Naranja_Route119_G00_M34_Text_081715D7::
# 627 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I thought you FLY by catching a whole\nflock of BIRD POKéMON, and then\lhanging on to them somehow.\pBut it turns out there’s an HM move\ncalled FLY!\pI wish I’d known about that a long\ntime ago...$"

Naranja_Route119_G00_M34_Text_08171698::
# 631 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Tch... It’s a no-go...\pThe tall grass snares BIKE tires.\nThere’s no way you can cycle here.$"

Naranja_Route119_G00_M34_Text_081716F4::
# 635 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\non a big pile of grass and make a\lSECRET BASE?$"

Naranja_Route119_G00_M34_Text_08171749::
# 639 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "ROUTE 119\nワ FORTREE CITY$"

Naranja_Route119_G00_M34_Text_08171762::
# 643 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "WEATHER INSTITUTE$"

Naranja_Route119_G00_M34_Text_08171774::
# 647 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "TRAINER TIPS\pUp to sixteen decorations and\nfurniture items can be placed in\la SECRET BASE.\pPick your favorite items and create\nyour very own SECRET BASE exactly the\lway you want.$"

Naranja_Route119_G00_M34_Text_08171BB6::
# 651 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Something unseeable is in the way.\pWant to use the DEVON SCOPE?$"

Naranja_Route119_G00_M34_Text_08171BF6::
# 655 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\pAn invisible POKéMON became completely\nvisible!\pThe startled POKéMON attacked!$"

Naranja_Route119_G00_M34_Text_081BE521::
# 659 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We’re the MIMIC CIRCLE!\nWe MIMIC what you do!$"

Naranja_Route119_G00_M34_Text_081BE54F::
# 663 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Whoopsie!\nI lost!$"

Naranja_Route119_G00_M34_Text_081BE561::
# 667 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "What’s so good about mimicry?\pFufufu...\nYou’ll never understand...$"

Naranja_Route119_G00_M34_Text_081BE5A4::
# 671 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "So, we finally meet!\nMy BUG POKéMON will keep you company!$"

Naranja_Route119_G00_M34_Text_081BE5DF::
# 675 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I wish we’d never met...$"

Naranja_Route119_G00_M34_Text_081BE5F8::
# 679 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I want to MIMIC you some more.\pCan you hurry up and move?$"

Naranja_Route119_G00_M34_Text_081BE632::
# 683 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "If you step forward, we step forward.\pIf you turn right, we turn, too...$"

Naranja_Route119_G00_M34_Text_081BE67B::
# 687 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "But if you win, I lose...$"

Naranja_Route119_G00_M34_Text_081BE695::
# 691 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I can’t MIMIC you winning the match.\nThat’s just impossible...\lIt’s burning me up...$"

Naranja_Route119_G00_M34_Text_081BE6EA::
# 695 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Yep, you’ve finally caught me!\nOr were you trying to avoid me?$"

Naranja_Route119_G00_M34_Text_081BE729::
# 699 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Whoop, that was a great match!$"

Naranja_Route119_G00_M34_Text_081BE748::
# 703 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We’re the MIMIC CIRCLE!\nI hope you enjoyed our performance.$"

Naranja_Route119_G00_M34_Text_081BE784::
# 707 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You don’t know who I am, do you?\pBut, I also don’t know you.\nSo, we’ll battle!$"

Naranja_Route119_G00_M34_Text_081BE7D3::
# 711 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’re pretty strong!$"

Naranja_Route119_G00_M34_Text_081BE7E9::
# 715 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Until you go away somewhere, we’ll\nkeep on mimicking your every move.$"

Naranja_Route119_G00_M34_Text_081BE82F::
# 719 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "The MIMIC CIRCLE was formed by people\nwho like to MIMIC.\pA battle starts the instant we meet!$"

Naranja_Route119_G00_M34_Text_081BE88D::
# 723 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I surrender!$"

Naranja_Route119_G00_M34_Text_081BE89A::
# 727 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Won’t you join our MIMIC CIRCLE?$"

Naranja_Route119_G00_M34_Text_081BE8BB::
# 731 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Who has the knowledge and the\ntechnique for survival?\pPOKéMON RANGERS, that’s who!$"

Naranja_Route119_G00_M34_Text_081BE90E::
# 735 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I didn’t have enough POKéMON\nknow-how...$"

Naranja_Route119_G00_M34_Text_081BE937::
# 739 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To break away from civilization and\nawaken the wild spirit within!\pThat’s our vision.$"

Naranja_Route119_G00_M34_Text_081BE98D::
# 743 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I’m going to regain my wild spirit by\nbeing together with POKéMON.$"

Naranja_Route119_G00_M34_Text_081BE9D0::
# 747 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’ve remained strong!$"

Naranja_Route119_G00_M34_Text_081BE9E8::
# 751 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Believe in your POKéMON.\nBelieve in yourself.\pThe road will reveal itself to you.$"

Naranja_Route119_G00_M34_Text_081BEA3A::
# 755 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Oh? Look at you.\pFor someone on an adventure, you’re\ntraveling awfully light.$"

Naranja_Route119_G00_M34_Text_081BEA88::
# 759 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Accidents happen when you’re not\nprepared!$"

Naranja_Route119_G00_M34_Text_081BEAB3::
# 763 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’re traveling light but you have\neverything you need.\pYou’re on top of things mentally and\nphysically, too.$"

Naranja_Route119_G00_M34_Text_081BEB22::
# 767 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "How’s your journey with POKéMON\ngoing?$"

Naranja_Route119_G00_M34_Text_081BEB49::
# 771 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I’m still missing something...$"

Naranja_Route119_G00_M34_Text_081BEB68::
# 775 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "In the same way that you, as a TRAINER,\nrely on your POKéMON, your POKéMON\lrely on you.$"

Naranja_Route119_G00_M34_Text_081BEBC0::
# 779 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "The vast sky holds untold promise!\pNothing can compare to the sheer\nexhilaration of flight!$"

Naranja_Route119_G00_M34_Text_081BEC1C::
# 783 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Down and out!$"

Naranja_Route119_G00_M34_Text_081BEC2A::
# 787 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "My BIRD POKéMON made my dreams of\nflying come true!$"

Naranja_Route119_G00_M34_Text_081BEC5E::
# 791 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I’ll show you the true potential of me\nand my BIRD POKéMON!$"

Naranja_Route119_G00_M34_Text_081BEC9A::
# 795 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "We lacked potential...$"

Naranja_Route119_G00_M34_Text_081BECB1::
# 799 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Ever since I was a little kid, I always\nadmired BIRD POKéMON...$"

Naranja_Route119_G00_M34_Text_081BECF1::
# 803 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To lurk in shadows, and live in\ndarkness... That is my destiny.\pI emerge to challenge you!$"

Naranja_Route119_G00_M34_Text_081BED4C::
# 807 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I admit defeat!$"

Naranja_Route119_G00_M34_Text_081BED5C::
# 811 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Those defeated in battle withdraw\nquietly back into the shadows.\lThat, too, is destiny...$"

Naranja_Route119_G00_M34_Text_081BEDB6::
# 815 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "If you’re not on your guard, you’re in\nfor some pain!$"

Naranja_Route119_G00_M34_Text_081BEDEC::
# 819 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You’re surprisingly good!$"

Naranja_Route119_G00_M34_Text_081BEE06::
# 823 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "My surprise attack ended in\nfailure...$"

Naranja_Route119_G00_M34_Text_081BEE2D::
# 827 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To hide a tree, use a forest!$"

Naranja_Route119_G00_M34_Text_081BEE4B::
# 831 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I bow to your superiority.$"

Naranja_Route119_G00_M34_Text_081BEE66::
# 835 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "To hide a tree, use a forest!\nTo hide a POKéMON, use a POKéMON!\pThere is no deep, hidden meaning\nto that.$"

Naranja_Route119_G00_M34_Text_081BEED0::
# 839 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "You spoke to me...\nSo you want to challenge me!\pSure! I’ll try out the POKéMON I caught\nwhile SURFING!$"

Naranja_Route119_G00_M34_Text_081BEF37::
# 843 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "I don’t have a clue about what it\ntakes to win.$"

Naranja_Route119_G00_M34_Text_081BEF67::
# 847 "data/maps/Naranja_Route119_G00_M34/scripts.pory"
	.string "Go for a SURF on my POKéMON...\pThen fish off its back...\pIt’s an indescribably luxuriant moment!$"
