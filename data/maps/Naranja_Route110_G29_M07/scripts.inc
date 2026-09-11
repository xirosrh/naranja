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
	msgbox Naranja_Route110_G29_M07_Text_0819D423, MSGBOX_DEFAULT
# 179 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 180 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 181 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 182 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162B83
# 183 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 184 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162BA6
# 185 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 186 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162BC9
	end


Naranja_Route110_G29_M07_EventScript_Sub_081629B3::
# 191 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_2, 1
# 192 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 2
# 193 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 194 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 195 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 196 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 197 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 198 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 199 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E9B
# 200 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 201 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162ED3
# 202 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 203 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F0B
# 204 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D636, MSGBOX_DEFAULT
# 205 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 206 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 207 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 208 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162BEC
# 209 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 210 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C0F
# 211 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 212 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C32
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162A27::
# 217 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_3, 1
# 218 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 3
# 219 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 221 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 222 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 223 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 224 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 225 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DF3
# 226 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 227 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E2B
# 228 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 229 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E63
# 230 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D7D3, MSGBOX_DEFAULT
# 231 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 232 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 233 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 234 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C55
# 235 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 236 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C78
# 237 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 238 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162C9B
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162A9B::
# 243 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_4, 1
# 244 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 4
# 245 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 246 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 247 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 248 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 249 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 250 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 251 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DF3
# 252 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 253 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E2B
# 254 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 255 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E63
# 256 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D93D, MSGBOX_DEFAULT
# 257 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 258 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 259 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 260 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162CBE
# 261 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 262 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162CE1
# 263 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 264 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D04
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162B0F::
# 269 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_5, 1
# 270 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	setvar VAR_TEMP_8, 5
# 271 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_PIN
# 272 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 273 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 274 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 275 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 276 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 277 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162E9B
# 278 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 2
# 279 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162ED3
# 280 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 3
# 281 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F0B
# 282 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819DA9A, MSGBOX_DEFAULT
# 283 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	random 3
# 284 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 285 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 286 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D27
# 287 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 288 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D4A
# 289 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 290 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162D6D
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162B83::
# 295 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D4AE, MSGBOX_DEFAULT
# 296 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x19, 1
# 297 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 298 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 299 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 300 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162BA6::
# 304 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D501, MSGBOX_DEFAULT
# 305 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1A, 1
# 306 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 307 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 308 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 309 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162BC9::
# 313 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D553, MSGBOX_DEFAULT
# 314 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1B, 1
# 315 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 316 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 317 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 318 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162BEC::
# 322 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D68E, MSGBOX_DEFAULT
# 323 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1C, 1
# 324 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 325 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 326 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 327 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C0F::
# 331 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D6EC, MSGBOX_DEFAULT
# 332 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1D, 1
# 333 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 334 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 335 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 336 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C32::
# 340 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D745, MSGBOX_DEFAULT
# 341 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1E, 1
# 342 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 343 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 344 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 345 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C55::
# 349 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D81B, MSGBOX_DEFAULT
# 350 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x1F, 1
# 351 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 352 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 353 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 354 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C78::
# 358 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D865, MSGBOX_DEFAULT
# 359 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x20, 1
# 360 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 361 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 362 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 363 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162C9B::
# 367 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D8BA, MSGBOX_DEFAULT
# 368 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x21, 1
# 369 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 370 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 371 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 372 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162CBE::
# 376 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D987, MSGBOX_DEFAULT
# 377 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x22, 1
# 378 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 379 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 380 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 381 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162CE1::
# 385 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D9DC, MSGBOX_DEFAULT
# 386 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x23, 1
# 387 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 388 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 389 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 390 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D04::
# 394 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819DA1D, MSGBOX_DEFAULT
# 395 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x24, 1
# 396 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 397 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 398 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 399 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D27::
# 403 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819DAEF, MSGBOX_DEFAULT
# 404 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x25, 1
# 405 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 406 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 407 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 408 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D4A::
# 412 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819DB43, MSGBOX_DEFAULT
# 413 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x26, 1
# 414 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 415 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 416 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 417 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D6D::
# 421 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819DB97, MSGBOX_DEFAULT
# 422 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	multichoice 0, 0, 0x27, 1
# 423 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 424 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 425 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162DDF
# 426 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162D90
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162D90::
# 430 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitse
# 431 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_FAILURE
# 432 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D5CF, MSGBOX_DEFAULT
# 433 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816309F
# 434 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M00_Movement_0816309F
# 435 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M00_Movement_0816309F
# 436 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M00_Movement_0816309F
# 437 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M00_Movement_0816309F
# 438 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D5ED, MSGBOX_DEFAULT
# 439 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 440 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	closemessage
# 441 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D615, MSGBOX_DEFAULT
# 442 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	closemessage
# 443 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M07, 0xFF, 0, 0x15
# 444 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitstate
# 445 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162DDF::
# 450 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitse
# 451 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	playse SE_SUCCESS
# 452 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	goto Naranja_Route110_G29_M07_EventScript_Sub_08162DE9
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162DE9::
# 456 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	msgbox Naranja_Route110_G29_M07_Text_0819D599, MSGBOX_DEFAULT
# 457 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M07_EventScript_Sub_08162DF3::
# 462 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 463 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F43
# 464 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 465 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F4E
# 466 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 467 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F59
# 468 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 469 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F64
# 470 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 471 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F6F
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162E2B::
# 476 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 477 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F7A
# 478 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 479 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F85
# 480 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 481 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F90
# 482 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 483 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162F9B
# 484 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 485 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FA6
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162E63::
# 490 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 491 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FB1
# 492 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 493 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FBC
# 494 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 495 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FC7
# 496 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 4
# 497 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FD2
# 498 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 5
# 499 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FDD
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162E9B::
# 504 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 505 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FE8
# 506 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 507 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FF3
# 508 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 509 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08162FFE
# 510 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 511 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163009
# 512 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 513 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163014
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162ED3::
# 518 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 519 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816301F
# 520 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 521 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816302A
# 522 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 523 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163035
# 524 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 525 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163040
# 526 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 527 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816304B
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F0B::
# 532 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 533 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163056
# 534 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 535 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163061
# 536 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 537 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_0816306C
# 538 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 539 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163077
# 540 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 541 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M07_EventScript_Sub_08163082
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F43::
# 546 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_0816308D
# 547 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F4E::
# 552 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_0816308D
# 553 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F59::
# 558 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_0816308D
# 559 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F64::
# 564 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_0816308D
# 565 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F6F::
# 570 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_0816308D
# 571 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F7A::
# 576 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_0816308F
# 577 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F85::
# 582 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_0816308F
# 583 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F90::
# 588 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_0816308F
# 589 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162F9B::
# 594 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_0816308F
# 595 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FA6::
# 600 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_0816308F
# 601 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FB1::
# 606 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_08163092
# 607 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FBC::
# 612 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_08163092
# 613 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FC7::
# 618 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_08163092
# 619 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FD2::
# 624 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_08163092
# 625 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FDD::
# 630 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_08163092
# 631 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FE8::
# 636 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_08163096
# 637 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FF3::
# 642 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_08163096
# 643 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08162FFE::
# 648 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_08163096
# 649 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163009::
# 654 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_08163096
# 655 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163014::
# 660 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_08163096
# 661 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816301F::
# 666 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_08163098
# 667 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816302A::
# 672 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_08163098
# 673 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163035::
# 678 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_08163098
# 679 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163040::
# 684 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_08163098
# 685 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816304B::
# 690 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_08163098
# 691 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163056::
# 696 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_1, Naranja_Route110_G29_M07_Movement_0816309B
# 697 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163061::
# 702 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_2, Naranja_Route110_G29_M07_Movement_0816309B
# 703 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_0816306C::
# 708 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_3, Naranja_Route110_G29_M07_Movement_0816309B
# 709 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163077::
# 714 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_4, Naranja_Route110_G29_M07_Movement_0816309B
# 715 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M07_EventScript_Sub_08163082::
# 720 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M07_MAN_1_5, Naranja_Route110_G29_M07_Movement_0816309B
# 721 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 725 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_0816308D:
# 726 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
	step_end

# 729 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_0816308F:
# 730 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
# 731 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
	step_end

# 734 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_08163092:
# 735 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
# 736 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
# 737 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_left
	step_end

# 740 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_08163096:
# 741 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
	step_end

# 744 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_08163098:
# 745 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
# 746 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
	step_end

# 749 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
Naranja_Route110_G29_M07_Movement_0816309B:
# 750 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
# 751 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
# 752 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	walk_right
	step_end

Naranja_Route110_G29_M07_Text_0819D423::
# 755 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 1 AM I!\pIF YOU ANSWER QUIZZES CORRECTLY,\nTHEN YOU WILL GO TO MECHADOLL 5.\lTHEN YOU CAN OBTAIN THE SECRET CODE.$"

Naranja_Route110_G29_M07_Text_0819D4AE::
# 759 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\pOne of these POKéMON is not found\non ROUTE 103. Which one is it?$"

Naranja_Route110_G29_M07_Text_0819D501::
# 763 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\pOne of these POKéMON is not of the\nGRASS type. Which one is it?$"

Naranja_Route110_G29_M07_Text_0819D553::
# 767 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\pOne of these POKéMON uses SCRATCH.\nWhich one is it?$"

Naranja_Route110_G29_M07_Text_0819D599::
# 771 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CONGRATULATIONS. CORRECT YOU ARE.\nGO THROUGH. PLEASE.$"

Naranja_Route110_G29_M07_Text_0819D5CF::
# 775 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "BZZZT. DISAPPOINTMENT.\nERROR.$"

Naranja_Route110_G29_M07_Text_0819D5ED::
# 779 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "WAHAHAHAHA! WAHAHAHAHA!\nCLICKETY-CLACK!$"

Naranja_Route110_G29_M07_Text_0819D615::
# 783 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "YOUR NEXT CHALLENGE WE WAIT FOR.$"

Naranja_Route110_G29_M07_Text_0819D636::
# 787 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 2 AM I!\pMECHADOLL 1’S QUIZ DIFFICULTY LEVEL\nIS SET TOO LOW.$"

Naranja_Route110_G29_M07_Text_0819D68E::
# 791 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\pIn PROF. BIRCH’s bag, there were three\nPOKéMON. Which one was at the right?$"

Naranja_Route110_G29_M07_Text_0819D6EC::
# 795 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\pWhich POKéMON was offered for a trade\nat the POKéMON TRAINER’S SCHOOL?$"

Naranja_Route110_G29_M07_Text_0819D745::
# 799 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\pThe DEVON RESEARCHER was looking for\nwhat POKéMON in PETALBURG WOODS?$"

Naranja_Route110_G29_M07_Text_0819D7D3::
# 803 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 3 AM I!\pMATTERS OF MONEY ARE MY SOLE FOCUS.$"

Naranja_Route110_G29_M07_Text_0819D81B::
# 807 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\pWhich costs more?\nThree POKé BALLS or one SUPER POTION?$"

Naranja_Route110_G29_M07_Text_0819D865::
# 811 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\pSell one ESCAPE ROPE and buy\none ANTIDOTE. How much money remains?$"

Naranja_Route110_G29_M07_Text_0819D8BA::
# 815 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\pDo one FULL HEAL and GREAT BALL\ncost more than one REVIVE?$"

Naranja_Route110_G29_M07_Text_0819D93D::
# 819 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 4 THAT IS ME!\pMY QUIZ IS AN OBJECT OF BEAUTY.$"

Naranja_Route110_G29_M07_Text_0819D987::
# 823 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\pRUSTBORO GYM LEADER ROXANNE used a\nGEODUDE. Was it male or female?$"

Naranja_Route110_G29_M07_Text_0819D9DC::
# 827 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\pIn DEWFORD HALL, were there more men\nor women?$"

Naranja_Route110_G29_M07_Text_0819DA1D::
# 831 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\pThe first TRAINER in DEWFORD GYM was\nmale or female?$"

Naranja_Route110_G29_M07_Text_0819DA9A::
# 835 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "CLICKETY-CLACK...\nMECHADOLL 5 AM I!\pTHE MASTER’S BEST AND PROUDEST\nACHIEVEMENT AM I.$"

Naranja_Route110_G29_M07_Text_0819DAEF::
# 839 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\pHow many BIKES does RYDEL have on\ndisplay outside his cycle shop?$"

Naranja_Route110_G29_M07_Text_0819DB43::
# 843 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\pHow many people give you BERRIES at the\nPRETTY PETAL flower shop?$"

Naranja_Route110_G29_M07_Text_0819DB97::
# 847 "data/maps/Naranja_Route110_G29_M07/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\pHow many signs are there in\nLILYCOVE CITY?$"
