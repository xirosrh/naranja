Naranja_Bementer_G24_M22_MapScripts::
# 5 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Bementer_G24_M22_OnTransition
	.byte 0


Naranja_Bementer_G24_M22_OnTransition::
# 9 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_Bementer_G24_M22_EventScript_Trigger_1::
# 14 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lockall
# 15 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8008, 0
# 16 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto Naranja_Bementer_G24_M22_EventScript_Sub_0815D4E1
	return


Naranja_Bementer_G24_M22_EventScript_Trigger_2::
# 20 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lockall
# 21 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8008, 1
# 22 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto Naranja_Bementer_G24_M22_EventScript_Sub_0815D4E1
	return


Naranja_Bementer_G24_M22_EventScript_Trigger_3::
# 26 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lockall
# 27 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8008, 2
# 28 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto Naranja_Bementer_G24_M22_EventScript_Sub_0815D4E1
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D4E1::
# 32 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 33 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 35 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	delay 0x32
# 37 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 38 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D593
# 39 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 40 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D59E
# 41 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 42 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D59F
# 43 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B5EEC
# 44 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	closemessage
# 46 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	fadescreen 1
# 47 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	removeobject LOCALID_BEMENTER_G24_M22_246
# 48 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	removeobject LOCALID_BEMENTER_G24_M22_241
# 49 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	removeobject LOCALID_BEMENTER_G24_M22_241_2
# 50 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	removeobject LOCALID_BEMENTER_G24_M22_241_3
# 51 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setflag FLAG_HIDE_BEMENTER_G24_M22_246
# 52 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setflag FLAG_HIDE_BEMENTER_G24_M22_241
# 53 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	fadescreen 0
# 54 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	delay 0x14
# 55 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_0815D57A
# 56 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 57 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D5AA
# 58 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 59 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D5BF
# 60 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 61 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D5CA
# 62 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B5FE6
# 63 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setorcopyvar VAR_0x8000, 0x114
# 65 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 66 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 0
# 67 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_00D4
# 68 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	releaseall
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D57A::
# 73 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setflag FLAG_NARANJA_TEAM_HIDESHOAL_CAVE_EVENT_COMPLETE_006F
# 74 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 75 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G00_M01_SCIENTIST_1
# 76 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G00_M01_CAMERAMAN
# 77 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_2, 1
# 78 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_NARANJA_BEMENTER_STORY_STATE, 1
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D593::
# 83 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D5E9
# 84 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D59E::
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D59F::
# 93 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D5EC
# 94 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D5AA::
# 99 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_OLD_WOMAN_1, Naranja_Bementer_G24_M22_Movement_0815D5DF
# 100 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 101 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 102 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D5BF::
# 107 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_OLD_WOMAN_1, Naranja_Bementer_G24_M22_Movement_0815D5E3
# 108 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D5CA::
# 113 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_OLD_WOMAN_1, Naranja_Bementer_G24_M22_Movement_0815D5E5
# 114 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 115 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 116 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 121 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lock
# 122 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	faceplayer
# 123 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B64B3
# 124 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 5
# 125 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 126 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D611
# 127 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 128 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D61A
# 129 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	release
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D611::
# 134 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B65D6
# 135 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D61A::
# 140 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B6823
# 141 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
	return


Naranja_Bementer_G24_M22_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 146 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lock
# 147 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	faceplayer
# 148 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	checkflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_0103
# 149 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D6C4
# 150 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 151 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D64A
# 152 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 153 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D6BA
# 154 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B60F9
# 155 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 156 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	release
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D64A::
# 161 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B6283
# 162 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 5
# 163 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 164 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D669
# 165 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 166 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D69B
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D669::
# 171 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8004, 0x114
# 172 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call Naranja_CuevaKabuto_G24_M10_EventScript_Sub_081A067F
# 173 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	closemessage
# 174 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 175 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 176 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	delay 0x28
# 177 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 178 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 179 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	delay 0xA
# 180 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B639C
# 181 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 182 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_0103
# 183 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	release
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D69B::
# 188 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B62E7
# 189 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 5
# 190 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 191 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D669
# 192 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 193 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D69B
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D6BA::
# 198 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B617B
# 199 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 200 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	release
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D6C4::
# 205 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B63F8
# 206 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 207 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	release
	end


Naranja_Bementer_G24_M22_EventScript_Trigger_4::
# 212 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lockall
# 213 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8008, 0
# 214 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto Naranja_Bementer_G24_M22_EventScript_Sub_0815D6F2
	return


Naranja_Bementer_G24_M22_EventScript_Trigger_5::
# 218 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lockall
# 219 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8008, 1
# 220 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto Naranja_Bementer_G24_M22_EventScript_Sub_0815D6F2
	return


Naranja_Bementer_G24_M22_EventScript_Trigger_6::
# 224 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	lockall
# 225 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_0x8008, 2
# 226 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	goto Naranja_Bementer_G24_M22_EventScript_Sub_0815D6F2
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D6F2::
# 230 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 231 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 232 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 233 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
# 234 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	delay 0x32
# 235 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 236 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D75E
# 237 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 238 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D769
# 239 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 240 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D774
# 241 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B6848
# 242 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 4
# 243 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	closemessage
# 244 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 245 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D77F
# 246 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 247 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D78A
# 248 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 249 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	call_if EQUAL, Naranja_Bementer_G24_M22_EventScript_Sub_0815D795
# 250 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	removeobject LOCALID_BEMENTER_G24_M22_246
# 251 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_NARANJA_BEMENTER_STORY_STATE, 3
# 252 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	releaseall
	end


Naranja_Bementer_G24_M22_EventScript_Sub_0815D75E::
# 257 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D7A0
# 258 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D769::
# 263 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D7A3
# 264 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D774::
# 269 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D7A4
# 270 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D77F::
# 275 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D7A7
# 276 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D78A::
# 281 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D7B0
# 282 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_0815D795::
# 287 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	applymovement LOCALID_BEMENTER_G24_M22_246, Naranja_Bementer_G24_M22_Movement_0815D7B9
# 288 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Bementer_G24_M22_EventScript_Sub_081A0196::
# 293 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, 0x77
# 294 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, 0x78
# 295 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, 0x75
# 296 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, 0x76
# 297 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, 0xC4
# 298 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, 0xC3
	return


Naranja_Bementer_G24_M22_EventScript_OBJECT_4_LocalId4::
# 303 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_588, LOCALID_NONE, Naranja_Bementer_G24_M22_Text_081B5CFD, Naranja_Bementer_G24_M22_Text_081B5D30
# 304 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B5D6D
# 305 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M22_EventScript_OBJECT_5_LocalId5::
# 310 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_589, LOCALID_NONE, Naranja_Bementer_G24_M22_Text_081B5DA2, Naranja_Bementer_G24_M22_Text_081B5DDB
# 311 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B5DF1
# 312 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M22_EventScript_OBJECT_6_LocalId6::
# 317 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_590, LOCALID_NONE, Naranja_Bementer_G24_M22_Text_081B5E27, Naranja_Bementer_G24_M22_Text_081B5E60
# 318 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M22_Text_081B5E84
# 319 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	callstd 6
	end


# 323 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D5DF:
# 324 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 325 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 326 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_in_place_faster_left
	step_end

# 329 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D5E3:
# 330 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
	step_end

# 333 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D5E5:
# 334 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 335 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 336 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_in_place_faster_right
	step_end

# 339 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D5E9:
# 340 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_left
# 341 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_in_place_faster_down
	step_end

# 344 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D5EC:
# 345 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_right
# 346 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_in_place_faster_down
	step_end

# 349 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D7A0:
# 350 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_left
# 351 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_in_place_faster_down
	step_end

# 354 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D7A3:
	step_end

# 357 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D7A4:
# 358 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_right
# 359 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_in_place_faster_down
	step_end

# 362 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D7A7:
# 363 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_right
# 364 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 365 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 366 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 367 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 368 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 369 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 370 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
	step_end

# 373 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D7B0:
# 374 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_right
# 375 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 376 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 377 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 378 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 379 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 380 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 381 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
	step_end

# 384 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
Naranja_Bementer_G24_M22_Movement_0815D7B9:
# 385 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_left
# 386 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 387 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 388 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 389 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 390 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 391 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
# 392 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	walk_down
	step_end

Naranja_Bementer_G24_M22_Text_081B5CFD::
# 395 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "I’ll show you exactly how scary\nTEAM MAGMA can be!$"

Naranja_Bementer_G24_M22_Text_081B5D30::
# 399 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "So you think you can stand up alone\nto TEAM MAGMA’s might...$"

Naranja_Bementer_G24_M22_Text_081B5D6D::
# 403 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Yeah, so you are strong...\nBut there’re a lot of us!$"

Naranja_Bementer_G24_M22_Text_081B5DA2::
# 407 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "What’s up with you?\nWhat does a single kid expect to do?$"

Naranja_Bementer_G24_M22_Text_081B5DDB::
# 411 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Dang...\nToo strong...$"

Naranja_Bementer_G24_M22_Text_081B5DF1::
# 415 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "You don’t know anything.\nQuit messing around with us!$"

Naranja_Bementer_G24_M22_Text_081B5E27::
# 419 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Hey, I remember you from MT. CHIMNEY!\nIt’s payback time!$"

Naranja_Bementer_G24_M22_Text_081B5E60::
# 423 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Urgggh...\nBeaten by some kid again!$"

Naranja_Bementer_G24_M22_Text_081B5E84::
# 427 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Heh, it doesn’t matter!\nWe bought ourselves some time!\pThe BOSS should have snatched what\nhe was after!$"

Naranja_Bementer_G24_M22_Text_081B5EEC::
# 431 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "MAXIE: Not you again...\pYou’ve impeded our plans repeatedly,\nbut this time you’re too late.\pThe BLUE ORB that rested atop\nMT. PYRE...\lI, MAXIE, claim it as mine!\pFufufu... Finally, I can realize my\ngrand design...\pCome on, crew!\nIt’s SLATEPORT next!$"

Naranja_Bementer_G24_M22_Text_081B5FE6::
# 435 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Oh, no...\nThis cannot happen...\pHow could they take the BLUE ORB?\pThe BLUE ORB and RED ORB must never\nbe separated. They belong together.\p... ... ... ... ... ... ... ...\nHmm...\pFine!\nYou take the remaining RED ORB.\pPlease take after that foul man and\nget the other ORB back!$"

Naranja_Bementer_G24_M22_Text_081B60F9::
# 439 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "The RED ORB you have been entrusted\nwith and the stolen BLUE ORB...\pThey must never be apart...\nSomething terrible will happen...$"

Naranja_Bementer_G24_M22_Text_081B617B::
# 443 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "So...\nGROUDON has awoken...\pThe wondrous ORB that is said to have\nbecalmed the raging GROUDON...\lIt is the RED ORB you bear.\pThat RED ORB was found buried inside\nthe CAVE OF ORIGIN in SOOTOPOLIS...\pThere is perhaps a link between\nGROUDON and the CAVE OF ORIGIN...$"

Naranja_Bementer_G24_M22_Text_081B6283::
# 447 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "That man, he returned the BLUE ORB.\pAre you going to return the RED ORB\nto its rightful place, too?$"

Naranja_Bementer_G24_M22_Text_081B62E7::
# 451 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "What’s that?!\pIf the balance is not restored, there\nis no telling what could happen.\pYou will return the RED ORB to its\nrightful place, yes?$"

Naranja_Bementer_G24_M22_Text_081B639C::
# 455 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "Yes...\nThe two ORBS should remain here.\pIt is how it should be for the good\nof all HOENN...$"

Naranja_Bementer_G24_M22_Text_081B63F8::
# 459 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "The spirit of the land...\pThat is what GROUDON is said to be in\nPOKéMON form...\pIn the same manner that we and POKéMON\nhave life, this very land is alive...\pGROUDON has taught us that...$"

Naranja_Bementer_G24_M22_Text_081B64B3::
# 463 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\nof POKéMON that have passed on...\pThis is a high place where one can\nsee all of HOENN...\pThe disembodied spirits of POKéMON\nmust find solace here...\pIs it coincidence that you are here...\pWill you hear out my tale? A tale long\ntold in the HOENN region?$"

Naranja_Bementer_G24_M22_Text_081B65D6::
# 467 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "It happened long, long ago...\pThe world was wracked by a ferocious\nclash between the POKéMON of the land\land the POKéMON of the sea...\pThe POKéMON of the land raised\nmountains and created continents...\pThe POKéMON of the sea raised huge\nwaves and carved out oceans...\pTheir fierce duel raged without end.\pThe world was engulfed in vicious\nstorms and massive infernos.\pThe RED ORB and the BLUE ORB brought\nan end to the calamity.\pLight poured from the two ORBS and\nbecalmed the enraged adversaries.\pThe pair, made docile, burrowed deep\nunder the ground where eventually\lthey disappeared...$"

Naranja_Bementer_G24_M22_Text_081B6823::
# 471 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "I see...\nWell, that, too, is fine...$"

Naranja_Bementer_G24_M22_Text_081B6848::
# 475 "data/maps/Naranja_Bementer_G24_M22/scripts.pory"
	.string "MAXIE: You...\nSo you stopped GROUDON...\pI shouldn’t be surprised...\pI understand now that humans cannot\nfreely control the balance between\lthe land and the sea...\pSo I have come to return the\nBLUE ORB...\pI doubt that we will cross paths again...\nFarewell...$"
