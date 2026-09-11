Naranja_IslaMurcott_G09_M07_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G09_M07_OnTransition
	.byte 0


Naranja_IslaMurcott_G09_M07_OnTransition::
# 9 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_IslaMurcott_G09_M07_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 14 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817ECFD
# 17 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 18 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 19 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 1
# 20 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	addobject LOCALID_ISLA_MURCOTT_G09_M07_241
# 21 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241, Naranja_IslaMurcott_G09_M07_Movement_08155EB4
# 22 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	addobject LOCALID_ISLA_MURCOTT_G09_M07_241_2
# 24 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241_2, Naranja_IslaMurcott_G09_M07_Movement_08155EC3
# 25 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241, Naranja_IslaMurcott_G09_M07_Movement_08155EB8
# 27 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241_2, Naranja_IslaMurcott_G09_M07_Movement_08155EC5
# 28 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 30 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E62
# 31 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 32 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E62
# 33 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EDAE
# 34 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 36 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call_if NOT_EQUAL, Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E6D
# 37 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EDD7
# 38 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EE01
# 40 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 42 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241_2, Naranja_IslaMurcott_G09_M07_Movement_08155EB2
# 43 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 45 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E78
# 46 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 47 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E83
# 48 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_MURCOTT_585, LOCALID_NONE, Naranja_IslaMurcott_G09_M07_Text_0817EE4E
# 49 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EE66
# 50 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 52 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241_2, Naranja_IslaMurcott_G09_M07_Movement_08155EBF
# 53 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241, Naranja_IslaMurcott_G09_M07_Movement_08155EB2
# 55 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 56 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EEA5
# 57 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 58 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	savebgm MUS_DUMMY
# 59 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_MURCOTT_586, LOCALID_NONE, Naranja_IslaMurcott_G09_M07_Text_0817EED6
# 60 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241, Naranja_IslaMurcott_G09_M07_Movement_08155EBF
# 61 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 62 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 63 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 64 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 65 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EEEA
# 66 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 68 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay 0x23
# 69 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	addobject LOCALID_ISLA_MURCOTT_G09_M07_246
# 70 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_246, Naranja_IslaMurcott_G09_M07_Movement_08155EA8
# 71 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_241_2, Naranja_IslaMurcott_G09_M07_Movement_08155ECE
# 72 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 73 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817EF62
# 74 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_246, Naranja_IslaMurcott_G09_M07_Movement_08155EA6
# 76 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 77 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F17E
# 78 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 79 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 80 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	fadescreen 1
# 81 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M07_246
# 82 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M07_241
# 83 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M07_241_2
# 84 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	fadescreen 0
# 85 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay 0x1E
# 86 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G09_M06_241
# 87 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 88 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 89 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F352
# 90 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	setvar VAR_0x8004, 0x10D
# 92 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	call Naranja_CuevaKabuto_G24_M10_EventScript_Sub_081A067F
# 93 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F433
# 94 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 96 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_SCIENTIST_1, Naranja_IslaMurcott_G09_M07_Movement_08155E98
# 97 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 98 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	playse SE_EXIT
# 99 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M07_SCIENTIST_1
# 100 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	setflag FLAG_HIDE_ROUTE110_G00_M25_241
# 101 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 102 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G00_M31_MAN_2
# 103 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	setflag FLAG_HIDE_ISLA_TROVITA_G11_M02_TEALA
# 104 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E62::
# 109 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 110 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E6D::
# 115 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M07_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 116 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E78::
# 121 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M07_Movement_08155E8E
# 122 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M07_EventScript_Sub_08155E83::
# 127 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M07_Movement_08155E92
# 128 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M07_EventScript_Sign_1::
# 133 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F572
# 134 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_2::
# 139 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F5E3
# 140 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_18::
# 145 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F653
# 146 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_16::
# 151 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F754
# 152 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_14::
# 157 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F7BC
# 158 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_12::
# 163 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F84E
# 164 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_8::
# 169 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F8BC
# 170 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_5::
# 175 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F918
# 176 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_3::
# 181 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F975
# 182 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_Sign_10::
# 187 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F9C7
# 188 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M07_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId5::
# 193 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F4B6
# 194 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M07_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId6::
# 199 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F50E
# 200 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M07_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId7::
# 205 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	lock
# 206 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	faceplayer
# 207 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M07_Text_0817F53B
# 208 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	callstd 4
# 209 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	closemessage
# 210 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 211 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 212 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	release
	end


# 216 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155E8E:
# 217 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 218 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 219 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_in_place_faster_left
	step_end

# 222 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155E92:
# 223 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_up
# 224 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 225 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 226 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 227 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_in_place_faster_left
	step_end

# 230 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155E98:
# 231 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_up
# 232 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 233 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 234 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 235 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 236 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 237 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_up
# 238 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_up
# 239 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 240 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 241 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_up
# 242 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_up
# 243 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_8
	step_end

# 246 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EA6:
# 247 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
	step_end

# 250 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EA8:
# 251 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 252 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 253 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 254 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 255 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 256 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 257 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 258 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 259 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
	step_end

# 262 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EB2:
# 263 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
	step_end

# 266 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EB4:
# 267 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 268 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 269 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_in_place_faster_down
	step_end

# 272 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EB8:
# 273 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 274 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 275 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 276 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 277 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 278 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
	step_end

# 281 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EBF:
# 282 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	lock_facing_direction
# 283 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_left
# 284 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	unlock_facing_direction
	step_end

# 287 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EC3:
# 288 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
	step_end

# 291 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155EC5:
# 292 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 293 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 294 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 295 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_down
# 296 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 297 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 298 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
# 299 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_right
	step_end

# 302 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
Naranja_IslaMurcott_G09_M07_Movement_08155ECE:
# 303 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 304 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 305 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 306 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 307 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 308 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 309 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 310 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_16
# 311 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	delay_8
# 312 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_fast_down
# 313 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_IslaMurcott_G09_M07_Text_0817ECFD::
# 316 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Yes? If you’re looking for STERN,\nthat would be me.\pAh! That must be the part I\nordered from MR. STONE of DEVON.\pThank you! That’s great!\nWe can prepare for our expedition now.$"

Naranja_IslaMurcott_G09_M07_Text_0817EDAE::
# 320 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Hehehe, hold it!\nWe’ll take those parts!$"

Naranja_IslaMurcott_G09_M07_Text_0817EDD7::
# 324 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "CAPT. STERN: Wh-what?\nWho are you people?$"

Naranja_IslaMurcott_G09_M07_Text_0817EE01::
# 328 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "We’re TEAM {AQUA}!\pOur BOSS wants those parts!\nShut your yap and fork them over!$"

Naranja_IslaMurcott_G09_M07_Text_0817EE4E::
# 332 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Awaaaah!\nA kid beat me!$"

Naranja_IslaMurcott_G09_M07_Text_0817EE66::
# 336 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Oh, man, what a disaster...\nThe BOSS is going to be furious...$"

Naranja_IslaMurcott_G09_M07_Text_0817EEA5::
# 340 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Humph, sniveling wimp!\nLet me take care of this!$"

Naranja_IslaMurcott_G09_M07_Text_0817EED6::
# 344 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "What?!\nI lost, too!$"

Naranja_IslaMurcott_G09_M07_Text_0817EEEA::
# 348 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Now what? If we don’t get the parts,\nwe’re in for it!\pArrgh, I didn’t count on being meddled\nwith by some meddling kid!$"

Naranja_IslaMurcott_G09_M07_Text_0817EF62::
# 352 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "I came to see what was taking so\nlong to snatch some parts, and you\lsimps are held up by a mere child?$"

Naranja_IslaMurcott_G09_M07_Text_0817F17E::
# 356 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "I am TEAM MAGMA’s MAXIE.\pWhy on earth do you feel compelled\nto mess up TEAM MAGMA’s plans?\pPOKéMON, people, all life exists on land...\pThat’s why TEAM MAGMA is trying to\nexpand the world’s landmass.\pDon’t you agree? What we are doing\nis a magnificent undertaking.\pWell, no matter...\nYou’re young.\pYour inability to understand our\nnoble cause can’t be helped...\pBut, if you were to impede us ever\nagain, you’ll see no mercy from us!\pKeep that firmly in mind!\nFarewell!$"

Naranja_IslaMurcott_G09_M07_Text_0817F352::
# 360 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "CAPT. STERN: You’re...\nAh, okay, you’re {PLAYER}{KUN}...\pAnyway, that was a tense situation!\nThank you for saving us!\pOh, yes, I almost forgot that you\neven brought the parts from DEVON!$"

Naranja_IslaMurcott_G09_M07_Text_0817F433::
# 364 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "CAPT. STERN: Whoops!\nThere’s no time to lose!\pWe have to set out on our ocean floor\nexpedition really soon.\pThanks, and excuse me!$"

Naranja_IslaMurcott_G09_M07_Text_0817F4B6::
# 368 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "I saw a model of a ship here.\pIt reminded me of the ABANDONED SHIP\nnear DEWFORD TOWN...$"

Naranja_IslaMurcott_G09_M07_Text_0817F50E::
# 372 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Don’t you dare run around inside\nthe MUSEUM!$"

Naranja_IslaMurcott_G09_M07_Text_0817F53B::
# 376 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "Wow, the submarine’s awesome!\nI want to go for a ride!$"

Naranja_IslaMurcott_G09_M07_Text_0817F572::
# 380 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“KANTO WATER QUALITY SAMPLE,” the\nlabel says.\pThe sea is all connected, but the\nwater seems to differ by region.$"

Naranja_IslaMurcott_G09_M07_Text_0817F5E3::
# 384 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“JOHTO WATER QUALITY SAMPLE,” the\nlabel says.\pMaybe the water’s saltiness differs\nfrom one region to another...$"

Naranja_IslaMurcott_G09_M07_Text_0817F653::
# 388 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "A rubber ball is expanding and shrinking.\p“In the sea, the weight of water itself\nexerts pressure.\p“In shallow water, the pressure is not\nvery heavy.\p“However, in extremely deep water,\nthe pressure can reach even tens of\lthousands of tons on a small area.”$"

Naranja_IslaMurcott_G09_M07_Text_0817F754::
# 392 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“MODEL OF HOENN REGION”\pIt’s a miniature diorama of the\nHOENN region.\pWhere is LITTLEROOT TOWN on this?$"

Naranja_IslaMurcott_G09_M07_Text_0817F7BC::
# 396 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "It’s a display on the flow of seawater.\p“Near the bottom of the sea, water\nflows due to differences in such\lfactors as temperature and salinity.”$"

Naranja_IslaMurcott_G09_M07_Text_0817F84E::
# 400 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "It’s a display on the flow of\nseawater.\p“Toward the surface, seawater flows\nas currents driven by the winds.”$"

Naranja_IslaMurcott_G09_M07_Text_0817F8BC::
# 404 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p“A scale replica of the ship under\nconstruction at STERN’S SHIPYARD.”$"

Naranja_IslaMurcott_G09_M07_Text_0817F918::
# 408 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p“A replica of the high-performance\nocean floor exploration submarine.”$"

Naranja_IslaMurcott_G09_M07_Text_0817F975::
# 412 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“SUBMERSIBLE POD\p“A replica of a compact, unmanned\npod for seafloor exploration.”$"

Naranja_IslaMurcott_G09_M07_Text_0817F9C7::
# 416 "data/maps/Naranja_IslaMurcott_G09_M07/scripts.pory"
	.string "“S.S. ANNE\p“A replica of the luxury liner that\ncircles the globe.”$"
