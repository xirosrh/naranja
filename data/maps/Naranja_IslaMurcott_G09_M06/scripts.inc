Naranja_IslaMurcott_G09_M06_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G09_M06_OnTransition
	.byte 0


Naranja_IslaMurcott_G09_M06_OnTransition::
# 9 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x78
# 10 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, 0x77
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 15 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E1DE
# 16 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_Trigger_1::
# 21 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	lockall
# 22 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 23 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 24 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B06
	return


Naranja_IslaMurcott_G09_M06_EventScript_Trigger_2::
# 28 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	lockall
# 29 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 30 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 31 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B06
	return


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B06::
# 35 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	showmoneybox 0, 0, 0
# 36 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E18D
# 37 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 5
# 38 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 39 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B2D
# 40 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	closemessage
# 41 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	hidemoneybox
# 42 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M06_Movement_08155B8D
# 43 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B2D::
# 49 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	checkmoney 0x32, 0
# 50 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 51 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B5A
# 52 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	removemoney 0x32, 0
# 53 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	updatemoneybox 0
# 54 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E1DE
# 55 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_3, 1
# 57 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	hidemoneybox
# 58 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B5A::
# 63 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 64 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B7B
# 65 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E1F5
# 66 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	closemessage
# 68 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	hidemoneybox
# 69 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M06_Movement_08155B8D
# 70 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 71 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155B7B::
# 76 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E22D
# 77 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 78 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_3, 1
# 79 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	hidemoneybox
# 80 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_VARS_LocalId5::
# 85 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E2BB
# 86 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJECT_4_LocalId4::
# 91 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E2E3
# 92 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJECT_2_LocalId2::
# 97 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E338
# 98 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJECT_3_LocalId3::
# 103 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E36F
# 104 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJECT_6_LocalId6::
# 109 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E3A9
# 110 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJECT_8_LocalId8::
# 115 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E3ED
# 116 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_1::
# 121 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E6C9
# 122 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_2::
# 127 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E741
# 128 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_3::
# 133 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E7C4
# 134 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_4::
# 139 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E892
# 140 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_7::
# 145 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E944
# 146 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_8::
# 151 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817EA19
# 152 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_9::
# 157 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817EB0D
# 158 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_10::
# 163 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817EBBC
# 164 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sign_12::
# 169 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817EC98
# 170 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId9::
# 175 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E434
# 176 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId10::
# 181 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E477
# 182 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId11::
# 187 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E4D7
# 188 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId12::
# 193 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E540
# 194 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJECT_13_LocalId13::
# 199 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	lock
# 200 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	faceplayer
# 201 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	delay 8
# 202 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	playse SE_PIN
# 203 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M06_241_6, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 204 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 205 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M06_241_6, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 206 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 207 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E582
# 208 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 209 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14E
# 210 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 211 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 0
# 212 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 213 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155CC2
# 214 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_010D
# 215 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E606
# 216 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 217 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	closemessage
# 218 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 219 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155C98
# 220 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 221 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155CAD
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155C98::
# 226 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M06_241_6, Naranja_IslaMurcott_G09_M06_Movement_08155CD3
# 227 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 228 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G09_M06_241_2
# 229 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	playse SE_EXIT
# 230 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M06_241_6
# 231 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155CAD::
# 236 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M06_241_6, Naranja_IslaMurcott_G09_M06_Movement_08155CCC
# 237 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 238 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G09_M06_241_2
# 239 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	playse SE_EXIT
# 240 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M06_241_6
# 241 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_08155CC2::
# 246 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_0817E695
# 247 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 248 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M06_EventScript_OBJ_EVENT_GFX_REPORTER_M_LocalId14::
# 253 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	lock
# 254 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	faceplayer
# 255 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_0x8005, 2
# 256 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	special InterviewBefore
# 257 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 258 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF96
# 259 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 260 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0069
# 261 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF25
# 262 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0069
# 263 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_081A927F
# 264 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 5
# 265 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 266 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF44
# 267 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 268 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF79
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF25::
# 273 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_081A934C
# 274 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 5
# 275 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 276 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF44
# 277 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 278 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF79
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF44::
# 283 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_081A93D1
# 284 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 285 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_0x8004, 5
# 286 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 287 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_0x8006, 0
# 288 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 289 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	lock
# 290 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	faceplayer
# 291 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 292 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF83
# 293 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 294 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF79
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF79::
# 299 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_081A9446
# 300 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 301 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF83::
# 306 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_081A949A
# 307 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 308 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	setvar VAR_0x8005, 2
# 309 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46
	return


Naranja_IslaMurcott_G09_M06_EventScript_Sub_081ADF96::
# 313 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M06_Text_081A952E
# 314 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	callstd 4
# 315 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	release
	end


# 319 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
Naranja_IslaMurcott_G09_M06_Movement_08155B8D:
# 320 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_down
	step_end

# 323 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
Naranja_IslaMurcott_G09_M06_Movement_08155CCC:
# 324 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	face_down
# 325 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 326 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 327 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 328 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 329 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	delay_8
	step_end

# 332 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
Naranja_IslaMurcott_G09_M06_Movement_08155CD3:
# 333 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_right
# 334 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 335 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 336 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 337 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	walk_fast_down
# 338 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	delay_8
	step_end

Naranja_IslaMurcott_G09_M06_Text_0817E18D::
# 341 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Welcome to the OCEANIC MUSEUM.\pThe entrance fee is ¥50.\nWould you like to enter?$"

Naranja_IslaMurcott_G09_M06_Text_0817E1DE::
# 345 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Please enjoy yourself.$"

Naranja_IslaMurcott_G09_M06_Text_0817E1F5::
# 349 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Oh? I’m sorry, but you don’t seem to\nhave enough money.$"

Naranja_IslaMurcott_G09_M06_Text_0817E22D::
# 353 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Oh? You’re with that group that\nwent in earlier?\pYou’re the only one who’s late.\nYou’d better go catch up to them!$"

Naranja_IslaMurcott_G09_M06_Text_0817E2BB::
# 357 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "We, TEAM {AQUA}, exist for the good\nof all!$"

Naranja_IslaMurcott_G09_M06_Text_0817E2E3::
# 361 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "We were told to assemble here, so\nwe did, but...\pOur BOSS, the lynchpin, isn’t here.$"

Naranja_IslaMurcott_G09_M06_Text_0817E338::
# 365 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "If I ripped off the stuff here,\nwould it make me rich?$"

Naranja_IslaMurcott_G09_M06_Text_0817E36F::
# 369 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "What I learn here, I can put to use on\nnefarious deeds...$"

Naranja_IslaMurcott_G09_M06_Text_0817E3A9::
# 373 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "If our goons didn’t bungle things\nin RUSTBORO, we wouldn’t be here!$"

Naranja_IslaMurcott_G09_M06_Text_0817E3ED::
# 377 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "I didn’t have ¥50, so it took a long\ntime getting by the receptionist.$"

Naranja_IslaMurcott_G09_M06_Text_0817E434::
# 381 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "I want to learn about the sea and\nuse that knowledge for battling.$"

Naranja_IslaMurcott_G09_M06_Text_0817E477::
# 385 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "I get all giddy and gooey when I\nsee the sea!\pFor me, CAPT. STERN is the number\none role model!$"

Naranja_IslaMurcott_G09_M06_Text_0817E4D7::
# 389 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "The sea is vast without end, and\ninfinitely deep...\pThere must be many POKéMON that we\ndon’t know about.$"

Naranja_IslaMurcott_G09_M06_Text_0817E540::
# 393 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "I want a sea POKéMON.\pI think it would feel cool and nice\nto hug.$"

Naranja_IslaMurcott_G09_M06_Text_0817E582::
# 397 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Aiyeeeh!\nWhat are you doing here?\pMe? I’m the TEAM {AQUA} member you\nthumped before, remember?\pHere, take this!\nYou have to forgive me!$"

Naranja_IslaMurcott_G09_M06_Text_0817E606::
# 401 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Aww, darn it!\nYou so screwed up our plans!\pI was going to rip off something\nto make up for it, but...\pJust you wait!\nYou’ll get yours one day!$"

Naranja_IslaMurcott_G09_M06_Text_0817E695::
# 405 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Awww, come on!\nYou have to take this and let me go!$"

Naranja_IslaMurcott_G09_M06_Text_0817E6C9::
# 409 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "A blue fluid is spiraling inside a\nglass vessel.\p“This is an experiment to create a\nWHIRLPOOL artificially using wind.”$"

Naranja_IslaMurcott_G09_M06_Text_0817E741::
# 413 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "A red ball is bobbing up and down\ninside a glass vessel.\p“This is an experiment simulating a\nWATERFALL using the ball’s buoyancy.”$"

Naranja_IslaMurcott_G09_M06_Text_0817E7C4::
# 417 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "It’s a sample of soil from the ocean\nfloor.\p“Over many years, the remains of\nlife-forms settle at the bottom of\lthe sea making sedimentary layers.\p“By analyzing these layers, the\nancient past is revealed.”$"

Naranja_IslaMurcott_G09_M06_Text_0817E892::
# 421 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "It’s a sample of beach sand.\p“Stones from mountains are washed\ndown by rivers where they are\lchipped and ground down.\p“They are reduced to grains and end\nup as sand on beaches.”$"

Naranja_IslaMurcott_G09_M06_Text_0817E944::
# 425 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "“OCEANIC MINI FACT 1\nWhy is seawater blue?\p“Light is composed of many colors.\p“When light passes through water,\nmost kinds of light lose color.\p“However, blue light retains its\ncolor, making the sea appear blue.”$"

Naranja_IslaMurcott_G09_M06_Text_0817EA19::
# 429 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "“OCEANIC MINI FACT 2\nWhy is the sea salty?\p“Seawater contains dissolved salt in\nthe form of sodium and chlorine ions.\p“These ions leach out of rocks and are\ncarried out to sea by rain.\p“The concentration of dissolved salt\nmakes the sea salty.”$"

Naranja_IslaMurcott_G09_M06_Text_0817EB0D::
# 433 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "“OCEANIC MINI FACT 3\nWhich is bigger? The sea or land?\p“The sea covers about 70% of the\nplanet, and the rest is land.\p“The sea is therefore more than twice\nthe size of land.”$"

Naranja_IslaMurcott_G09_M06_Text_0817EBBC::
# 437 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "It’s a fossil with wavy ridges on it.\p“Soil on the ocean floor gets scoured\nby the tide.\p“The flowing seawater marks the soil\nwith small ridges and valleys.\p“If this soil becomes fossilized, it is\ncalled a ripple mark.”$"

Naranja_IslaMurcott_G09_M06_Text_0817EC98::
# 441 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "A strange machine is rotating under\na glass dome.\pMaybe it’s for measuring the depth\nof something...$"

Naranja_IslaMurcott_G09_M06_Text_081A927F::
# 445 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Oh?\nDo you perhaps like POKéMON?\pI’m on assignment with the TV network.\pI’m gathering stories on POKéMON and\nTRAINERS that occurred recently.\pIf you don’t mind, could you tell me\nsomething about yourself?$"

Naranja_IslaMurcott_G09_M06_Text_081A934C::
# 449 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "I’m gathering stories on POKéMON and\nTRAINERS that occurred recently.\pIf you don’t mind, could you tell me\nsomething about yourself?$"

Naranja_IslaMurcott_G09_M06_Text_081A93D1::
# 453 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Oh, you will?\nThank you!\pThen, please, tell me anything of\ninterest that you experienced recently\linvolving POKéMON.$"

Naranja_IslaMurcott_G09_M06_Text_081A9446::
# 457 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Oh, I see...\pWell, if you do have an interesting\nstory to tell, please let me know.$"

Naranja_IslaMurcott_G09_M06_Text_081A949A::
# 461 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Oh, what an uplifting story!\pI’ll be sure to get your story told\non television.\pIt should be aired sometime, I think,\nso please look forward to it.$"

Naranja_IslaMurcott_G09_M06_Text_081A952E::
# 465 "data/maps/Naranja_IslaMurcott_G09_M06/scripts.pory"
	.string "Hmmm...\nI’ve got a good story for a TV program.\pI’d better write it up in a hurry!$"
