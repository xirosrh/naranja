Naranja_Route110_G29_M07_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M07_OnTransition
	.byte 0


Naranja_Route110_G29_M07_OnTransition::
# 9 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_1, 0
# 10 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_2, 0
# 11 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_3, 0
# 12 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_4, 0
# 13 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_5, 0
# 14 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 0
	end


Naranja_Route110_G29_M07_EventScript_Sign_1::
# 19 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 20 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_9, 0
# 21 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_081627E7
# 22 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M07_EventScript_Sub_081627E7::
# 26 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_9, 1
# 27 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 31 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 32 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 33 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 35 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
# 36 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 37 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_0816293F
	return


Naranja_Route110_G29_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId2::
# 41 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 42 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 43 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 1
# 45 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
# 46 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 47 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_081629B3
	return


Naranja_Route110_G29_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId3::
# 51 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 52 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 53 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_3, 1
# 55 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
# 56 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 57 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A27
	return


Naranja_Route110_G29_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId4::
# 61 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 62 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 63 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 64 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_4, 1
# 65 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
# 66 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 67 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A9B
	return


Naranja_Route110_G29_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId5::
# 71 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 72 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 73 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 74 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_5, 1
# 75 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
# 76 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 77 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162B0F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_1::
# 81 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 82 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 83 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_0816293F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_2::
# 87 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 88 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 1
# 89 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_0816293F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_3::
# 93 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 94 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 2
# 95 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_0816293F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_4::
# 99 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 100 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 3
# 101 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_0816293F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_5::
# 105 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 106 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 107 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_081629B3
	return


Naranja_Route110_G29_M07_EventScript_Trigger_6::
# 111 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 112 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 1
# 113 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_081629B3
	return


Naranja_Route110_G29_M07_EventScript_Trigger_7::
# 117 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 118 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 119 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A27
	return


Naranja_Route110_G29_M07_EventScript_Trigger_8::
# 123 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 124 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 1
# 125 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A27
	return


Naranja_Route110_G29_M07_EventScript_Trigger_9::
# 129 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 130 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 2
# 131 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A27
	return


Naranja_Route110_G29_M07_EventScript_Trigger_10::
# 135 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 136 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 137 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A9B
	return


Naranja_Route110_G29_M07_EventScript_Trigger_11::
# 141 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 142 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 1
# 143 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162A9B
	return


Naranja_Route110_G29_M07_EventScript_Trigger_12::
# 147 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 148 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 0
# 149 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162B0F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_13::
# 153 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 154 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 1
# 155 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162B0F
	return


Naranja_Route110_G29_M07_EventScript_Trigger_14::
# 159 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	lockall
# 160 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_9, 2
# 161 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162B0F
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816293F::
# 165 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_1, 1
# 166 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 1
# 167 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 168 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 169 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 170 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 171 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 172 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 173 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DF3
# 174 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 175 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E2B
# 176 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 177 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E63
# 178 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D423
# 179 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 180 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 181 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 182 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 183 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162B83
# 184 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 185 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162BA6
# 186 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 187 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162BC9
	end


Naranja_Route110_G29_M07_EventScript_Sub_081629B3::
# 192 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_2, 1
# 193 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 2
# 194 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 195 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 196 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 197 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 198 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 199 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 200 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E9B
# 201 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 202 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162ED3
# 203 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 204 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F0B
# 205 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D636
# 206 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 207 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 208 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 209 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 210 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162BEC
# 211 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 212 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C0F
# 213 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 214 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C32
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162A27::
# 219 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_3, 1
# 220 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 3
# 221 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 222 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 223 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 224 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 225 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 226 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 227 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DF3
# 228 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 229 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E2B
# 230 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 231 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E63
# 232 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D7D3
# 233 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 234 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 235 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 236 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 237 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C55
# 238 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 239 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C78
# 240 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 241 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C9B
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162A9B::
# 246 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_4, 1
# 247 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 4
# 248 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 249 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 250 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 251 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 252 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 253 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 254 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DF3
# 255 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 256 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E2B
# 257 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 258 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E63
# 259 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D93D
# 260 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 261 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 262 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 263 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 264 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162CBE
# 265 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 266 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162CE1
# 267 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 268 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D04
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162B0F::
# 273 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_5, 1
# 274 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 5
# 275 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 276 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 277 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 278 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 279 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 280 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 281 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E9B
# 282 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 283 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162ED3
# 284 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 285 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F0B
# 286 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819DA9A
# 287 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 288 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 289 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 290 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 291 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D27
# 292 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 293 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D4A
# 294 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 295 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D6D
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162B83::
# 300 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D4AE
# 301 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 302 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x19, 1
# 303 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 304 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 305 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 306 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162BA6::
# 310 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D501
# 311 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 312 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1A, 1
# 313 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 314 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 315 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 316 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162BC9::
# 320 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D553
# 321 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 322 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1B, 1
# 323 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 324 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 325 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 326 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162BEC::
# 330 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D68E
# 331 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 332 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1C, 1
# 333 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 334 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 335 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 336 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C0F::
# 340 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D6EC
# 341 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 342 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1D, 1
# 343 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 344 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 345 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 346 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C32::
# 350 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D745
# 351 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 352 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1E, 1
# 353 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 354 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 355 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 356 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C55::
# 360 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D81B
# 361 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 362 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1F, 1
# 363 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 364 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 365 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 366 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C78::
# 370 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D865
# 371 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 372 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x20, 1
# 373 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 374 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 375 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 376 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C9B::
# 380 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D8BA
# 381 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 382 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x21, 1
# 383 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 384 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 385 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 386 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162CBE::
# 390 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D987
# 391 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 392 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x22, 1
# 393 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 394 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 395 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 396 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162CE1::
# 400 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D9DC
# 401 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 402 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x23, 1
# 403 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 404 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 405 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 406 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D04::
# 410 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819DA1D
# 411 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 412 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x24, 1
# 413 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 414 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 415 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 416 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D27::
# 420 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819DAEF
# 421 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 422 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x25, 1
# 423 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 424 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 425 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 426 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D4A::
# 430 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819DB43
# 431 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 432 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x26, 1
# 433 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 434 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 435 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 436 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D6D::
# 440 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819DB97
# 441 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 442 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x27, 1
# 443 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 444 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 445 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 446 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D90::
# 450 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitse
# 451 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_FAILURE
# 452 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D5CF
# 453 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 454 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816309F
# 455 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M00_Movement_0816309F
# 456 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M00_Movement_0816309F
# 457 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M00_Movement_0816309F
# 458 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M00_Movement_0816309F
# 459 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D5ED
# 460 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 461 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 462 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	closemessage
# 463 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D615
# 464 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 465 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	closemessage
# 466 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M07, 0xFF, 0, 0x15
# 467 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitstate
# 468 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162DDF::
# 473 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitse
# 474 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_SUCCESS
# 475 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162DE9::
# 479 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	loadword 0, Naranja_Route110_G29_M07_Text_0819D599
# 480 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	callstd 4
# 481 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162DF3::
# 486 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 487 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F43
# 488 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 489 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F4E
# 490 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 491 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F59
# 492 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 493 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F64
# 494 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 495 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F6F
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162E2B::
# 500 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 501 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F7A
# 502 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 503 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F85
# 504 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 505 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F90
# 506 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 507 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F9B
# 508 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 509 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FA6
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162E63::
# 514 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 515 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FB1
# 516 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 517 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FBC
# 518 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 519 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FC7
# 520 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 4
# 521 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FD2
# 522 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 5
# 523 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FDD
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162E9B::
# 528 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 529 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FE8
# 530 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 531 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FF3
# 532 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 533 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FFE
# 534 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 535 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163009
# 536 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 537 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163014
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162ED3::
# 542 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 543 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816301F
# 544 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 545 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816302A
# 546 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 547 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163035
# 548 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 549 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163040
# 550 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 551 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816304B
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F0B::
# 556 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 557 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163056
# 558 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 559 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163061
# 560 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 561 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816306C
# 562 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 563 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163077
# 564 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 565 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163082
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F43::
# 570 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_0816308D
# 571 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F4E::
# 576 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_0816308D
# 577 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F59::
# 582 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_0816308D
# 583 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F64::
# 588 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_0816308D
# 589 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F6F::
# 594 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_0816308D
# 595 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F7A::
# 600 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_0816308F
# 601 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F85::
# 606 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_0816308F
# 607 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F90::
# 612 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_0816308F
# 613 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F9B::
# 618 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_0816308F
# 619 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FA6::
# 624 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_0816308F
# 625 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FB1::
# 630 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_08163092
# 631 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FBC::
# 636 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_08163092
# 637 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FC7::
# 642 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_08163092
# 643 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FD2::
# 648 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_08163092
# 649 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FDD::
# 654 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_08163092
# 655 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FE8::
# 660 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_08163096
# 661 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FF3::
# 666 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_08163096
# 667 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FFE::
# 672 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_08163096
# 673 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163009::
# 678 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_08163096
# 679 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163014::
# 684 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_08163096
# 685 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816301F::
# 690 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_08163098
# 691 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816302A::
# 696 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_08163098
# 697 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163035::
# 702 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_08163098
# 703 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163040::
# 708 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_08163098
# 709 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816304B::
# 714 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_08163098
# 715 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163056::
# 720 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_0816309B
# 721 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163061::
# 726 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_0816309B
# 727 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816306C::
# 732 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_0816309B
# 733 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163077::
# 738 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_0816309B
# 739 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163082::
# 744 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_0816309B
# 745 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 749 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_0816308D:
# 750 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
	step_end

# 753 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_0816308F:
# 754 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
# 755 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
	step_end

# 758 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_08163092:
# 759 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
# 760 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
# 761 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
	step_end

# 764 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_08163096:
# 765 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
	step_end

# 768 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_08163098:
# 769 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
# 770 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
	step_end

# 773 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_0816309B:
# 774 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
# 775 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
# 776 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
	step_end

Naranja_Route110_G29_M07_Text_0819D423::
# 779 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 1 AM I!\pIF YOU ANSWER QUIZZES CORRECTLY,\nTHEN YOU WILL GO TO MECHADOLL 5.\lTHEN YOU CAN OBTAIN THE SECRET CODE.$"

Naranja_Route110_G29_M07_Text_0819D4AE::
# 783 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\pOne of these POKéMON is not found\non ROUTE 103. Which one is it?$"

Naranja_Route110_G29_M07_Text_0819D501::
# 787 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\pOne of these POKéMON is not of the\nGRASS type. Which one is it?$"

Naranja_Route110_G29_M07_Text_0819D553::
# 791 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\pOne of these POKéMON uses SCRATCH.\nWhich one is it?$"

Naranja_Route110_G29_M07_Text_0819D599::
# 795 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CONGRATULATIONS. CORRECT YOU ARE.\nGO THROUGH. PLEASE.$"

Naranja_Route110_G29_M07_Text_0819D5CF::
# 799 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "BZZZT. DISAPPOINTMENT.\nERROR.$"

Naranja_Route110_G29_M07_Text_0819D5ED::
# 803 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "WAHAHAHAHA! WAHAHAHAHA!\nCLICKETY-CLACK!$"

Naranja_Route110_G29_M07_Text_0819D615::
# 807 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "YOUR NEXT CHALLENGE WE WAIT FOR.$"

Naranja_Route110_G29_M07_Text_0819D636::
# 811 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 2 AM I!\pMECHADOLL 1’S QUIZ DIFFICULTY LEVEL\nIS SET TOO LOW.$"

Naranja_Route110_G29_M07_Text_0819D68E::
# 815 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\pIn PROF. BIRCH’s bag, there were three\nPOKéMON. Which one was at the right?$"

Naranja_Route110_G29_M07_Text_0819D6EC::
# 819 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\pWhich POKéMON was offered for a trade\nat the POKéMON TRAINER’S SCHOOL?$"

Naranja_Route110_G29_M07_Text_0819D745::
# 823 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\pThe DEVON RESEARCHER was looking for\nwhat POKéMON in PETALBURG WOODS?$"

Naranja_Route110_G29_M07_Text_0819D7D3::
# 827 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 3 AM I!\pMATTERS OF MONEY ARE MY SOLE FOCUS.$"

Naranja_Route110_G29_M07_Text_0819D81B::
# 831 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\pWhich costs more?\nThree POKé BALLS or one SUPER POTION?$"

Naranja_Route110_G29_M07_Text_0819D865::
# 835 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\pSell one ESCAPE ROPE and buy\none ANTIDOTE. How much money remains?$"

Naranja_Route110_G29_M07_Text_0819D8BA::
# 839 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\pDo one FULL HEAL and GREAT BALL\ncost more than one REVIVE?$"

Naranja_Route110_G29_M07_Text_0819D93D::
# 843 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 4 THAT IS ME!\pMY QUIZ IS AN OBJECT OF BEAUTY.$"

Naranja_Route110_G29_M07_Text_0819D987::
# 847 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\pRUSTBORO GYM LEADER ROXANNE used a\nGEODUDE. Was it male or female?$"

Naranja_Route110_G29_M07_Text_0819D9DC::
# 851 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\pIn DEWFORD HALL, were there more men\nor women?$"

Naranja_Route110_G29_M07_Text_0819DA1D::
# 855 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\pThe first TRAINER in DEWFORD GYM was\nmale or female?$"

Naranja_Route110_G29_M07_Text_0819DA9A::
# 859 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 5 AM I!\pTHE MASTER’S BEST AND PROUDEST\nACHIEVEMENT AM I.$"

Naranja_Route110_G29_M07_Text_0819DAEF::
# 863 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\pHow many BIKES does RYDEL have on\ndisplay outside his cycle shop?$"

Naranja_Route110_G29_M07_Text_0819DB43::
# 867 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\pHow many people give you BERRIES at the\nPRETTY PETAL flower shop?$"

Naranja_Route110_G29_M07_Text_0819DB97::
# 871 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\pHow many signs are there in\nLILYCOVE CITY?$"
