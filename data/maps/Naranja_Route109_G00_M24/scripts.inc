Naranja_Route109_G00_M24_MapScripts::
	.byte 0


Naranja_Route109_G00_M24_EventScript_Sub_0814F4D3::
# 8 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A010C
# 9 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_G00_M24_OLD_MAN_1, MAP_NARANJA_ROUTE_109_G00_M24, 0
# 10 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_ROUTE_109_G00_M24, 0
# 11 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_ROUTE109_G00_M24_OLD_MAN_1, Naranja_Route109_G00_M24_Movement_0814F67B
# 12 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 13 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	removeobject LOCALID_ROUTE109_G00_M24_OLD_MAN_1
# 14 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 15 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 16 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F518
# 17 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 18 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F538
# 19 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 20 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F528
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F518::
# 25 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route109_G00_M24_Movement_0814F66D
# 26 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 27 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F548
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F528::
# 31 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route109_G00_M24_Movement_0814F675
# 32 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 33 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F548
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F538::
# 37 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route109_G00_M24_Movement_0814F678
# 38 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F548
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F548::
# 43 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ROUTE_109_G00_M24
# 44 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02E7
# 45 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_ROUTE109_G00_M24_MR_BRINEYS_BOAT, Naranja_Route109_G00_M24_Movement_0814F5BF
# 46 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route109_G00_M24_Movement_0814F5BF
# 47 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02EF
# 49 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 50 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route109_G00_M24_Movement_0814F670
# 51 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	addobject LOCALID_ROUTE109_G00_M24_SWIMMER_F
# 53 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	clearflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT
# 54 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_G00_M24_OLD_MAN_1, 0xC, 8
# 55 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	addobject LOCALID_ROUTE109_G00_M24_OLD_MAN_1
# 56 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_G00_M24_OLD_MAN_1, MAP_NARANJA_7ISLAS_POMELO_G00_M11, 0
# 57 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement LOCALID_ROUTE109_G00_M24_OLD_MAN_1, Naranja_Route109_G00_M24_Movement_0814F67D
# 58 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 59 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	clearflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 60 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_G00_M24_MR_BRINEYS_BOAT
# 61 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	hideobjectat LOCALID_ROUTE109_G00_M24_MR_BRINEYS_BOAT, MAP_NARANJA_ROUTE_109_G00_M24
# 62 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Islas_G00_M19_Text_0816B4B5
# 63 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 65 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, VAR_0x8008
# 66 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_ROUTE_109_G00_M24
# 67 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_G00_M24_OLD_MAN_1, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 68 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_G00_M24_OLD_MAN_1
# 69 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 74 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 75 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 76 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 77 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_G00_M24_EventScript_Sub_0814F691
# 78 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F6AF
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F691::
# 82 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	message Naranja_Route109_G00_M24_Text_0816E0F9
# 83 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E0F9
# 84 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 5
# 85 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 86 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6F1
# 87 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F6E2
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F6AF::
# 91 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	message Naranja_Route109_G00_M24_Text_0816E26A
# 92 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmessage
# 93 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	multichoicedefault 0x15, 8, 0xE, 1, 0
# 94 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 95 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 96 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6E2
# 97 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 98 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6FB
# 99 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 100 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6FB
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F6E2::
# 105 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E159
# 106 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 107 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 108 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F4D3
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F6F1::
# 112 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E1B1
# 113 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F6FB::
# 119 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E2C5
# 120 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 121 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId9::
# 126 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E307
# 127 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 2
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_M_LocalId14::
# 132 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 133 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 134 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E405
# 135 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 136 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 137 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 138 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 139 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId15::
# 144 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 145 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 146 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	special GetPlayerBigGuyGirlString
# 147 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_0118
# 148 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F762
# 149 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E433
# 150 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 151 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCB
# 152 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 153 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 0
# 154 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 155 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 156 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 157 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 158 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 159 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_0118
# 160 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F762::
# 165 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E446
# 166 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 167 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 168 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 169 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId19::
# 174 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E4D5
# 175 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 2
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId20::
# 180 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 181 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 182 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitse
# 183 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 184 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E5CA
# 185 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 4
# 186 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmoncry
# 187 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_Sign_1::
# 192 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E5DC
# 193 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 3
	end


Naranja_Route109_G00_M24_EventScript_Sign_2::
# 198 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_0816E62C
# 199 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 3
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId3::
# 204 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_158, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9A1C, Naranja_Route109_G00_M24_Text_081B9A59
# 205 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9A6D
# 206 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 211 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_448, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9AAD, Naranja_Route109_G00_M24_Text_081B9AD9
# 212 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9AEB
# 213 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId5::
# 218 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_490, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9B11, Naranja_Route109_G00_M24_Text_081B9B57
# 219 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9B68
# 220 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId6::
# 225 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_491, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9B91, Naranja_Route109_G00_M24_Text_081B9BAE
# 226 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9BD3
# 227 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_M_LocalId7::
# 232 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_064, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9C23, Naranja_Route109_G00_M24_Text_081B9C65
# 233 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 234 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 235 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F830
# 236 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9C6E
# 237 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F830::
# 242 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE109_064, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9CB3, Naranja_Route109_G00_M24_Text_081B9CEB
# 243 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9D10
# 244 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId8::
# 249 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_057, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9D54, Naranja_Route109_G00_M24_Text_081B9D87
# 250 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 251 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 252 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F86E
# 253 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9D8E
# 254 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F86E::
# 259 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE109_057, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9DD8, Naranja_Route109_G00_M24_Text_081B9E16
# 260 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9E1D
# 261 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId12::
# 266 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_058, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9E60, Naranja_Route109_G00_M24_Text_081B9EA1
# 267 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9ECA
# 268 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId11::
# 273 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_059, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9F07, Naranja_Route109_G00_M24_Text_081B9F31
# 274 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9F44
# 275 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId13::
# 280 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_345, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9F65, Naranja_Route109_G00_M24_Text_081B9F9C
# 281 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081B9FB7
# 282 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId18::
# 287 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE109_680, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081B9FF6, Naranja_Route109_G00_M24_Text_081BA052, Naranja_Route109_G00_M24_Text_081BA0BF
# 288 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081BA069
# 289 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId17::
# 294 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE109_680, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081BA114, Naranja_Route109_G00_M24_Text_081BA15F, Naranja_Route109_G00_M24_Text_081BA1D0
# 295 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081BA193
# 296 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId16::
# 301 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE109_427, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081BCCF4, Naranja_Route109_G00_M24_Text_081BCD32
# 302 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 303 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 304 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_08150A03
# 305 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081BCD4C
# 306 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_Sub_08150A03::
# 311 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE109_427, LOCALID_NONE, Naranja_Route109_G00_M24_Text_081BCDB0, Naranja_Route109_G00_M24_Text_081BCDD0
# 312 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	loadword 0, Naranja_Route109_G00_M24_Text_081BCDEF
# 313 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 6
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId10::
# 318 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 319 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 320 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 1
	end


# 324 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F5BF:
# 325 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_down
# 326 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 327 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 328 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 329 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 330 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 331 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 332 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 333 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 334 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 335 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 336 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 337 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 338 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 339 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 340 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 341 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 342 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 343 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 344 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 345 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 346 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 347 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 348 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 349 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 350 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 351 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 352 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 353 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 354 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 355 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 356 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 357 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 358 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 359 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 360 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 361 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 362 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 363 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 364 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 365 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 366 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 367 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 368 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 369 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 370 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 371 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 372 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 373 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 374 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 375 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 376 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 377 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 378 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 379 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 380 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 381 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 382 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 383 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 384 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 385 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 386 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 387 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 388 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 389 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 390 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 391 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 392 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 393 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 394 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 395 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 396 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 397 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 398 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 399 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 400 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 401 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 402 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 403 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 404 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 405 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 406 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 407 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 408 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 409 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 410 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 411 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 412 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 413 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 414 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 415 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 416 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 417 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 418 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 419 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 420 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 421 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 422 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 423 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 424 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 425 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 426 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 427 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 428 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 429 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 430 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 431 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 432 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 433 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 434 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 435 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 436 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 437 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 438 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 439 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 440 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 441 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 442 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 443 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 444 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 445 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 446 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 447 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 448 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 449 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 450 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 451 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 452 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 453 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 454 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 455 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 456 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 457 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 458 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 459 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 460 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 461 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 462 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 463 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 464 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 465 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 466 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 467 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 468 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 469 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 470 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 471 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 472 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 473 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 474 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 475 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 476 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 477 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 478 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 479 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 480 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 481 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 482 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 483 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 484 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 485 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 486 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 487 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 488 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 489 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 490 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 491 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 492 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 493 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 494 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 495 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 496 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 497 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_down
	step_end

# 500 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F66D:
# 501 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 502 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 505 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F670:
# 506 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 507 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 508 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 509 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_right
	step_end

# 512 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F675:
# 513 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_right
# 514 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 517 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F678:
# 518 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 519 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 522 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F67B:
# 523 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 526 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F67D:
# 527 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 528 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_Route109_G00_M24_Text_0816E0F9::
# 531 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: Aren’t you delivering the\nDEVON GOODS?\pOr were you meaning to sail back to\nDEWFORD?$"

Naranja_Route109_G00_M24_Text_0816E159::
# 535 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_Route109_G00_M24_Text_0816E1B1::
# 539 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\nthe DEVON GOODS. I’ll be waiting.$"

Naranja_Route109_G00_M24_Text_0816E26A::
# 543 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nFor you, I’ll go out to sea anytime!\pNow, my friend, where are we bound?$"

Naranja_Route109_G00_M24_Text_0816E2C5::
# 547 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\nyou need to set sail again!$"

Naranja_Route109_G00_M24_Text_0816E307::
# 551 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Yo, TRAINERS!\nWhether you’re hot to trot,\lor cool cat not,\lchill at my papa’s spot!$"

Naranja_Route109_G00_M24_Text_0816E405::
# 555 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Our sand castle’s taking a long time\nto make.$"

Naranja_Route109_G00_M24_Text_0816E433::
# 559 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "You can have this!$"

Naranja_Route109_G00_M24_Text_0816E446::
# 563 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "We’re going to get all the sand from\nthe beach and make a big castle!\pAnd then we’re going to be a king and\nqueen.\pWe’ll let you be a servant.$"

Naranja_Route109_G00_M24_Text_0816E4D5::
# 567 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "The water around these parts is clean.\pBut, I get my ZIGZAGOON to pick up\nlitter from the shoreline at times.\pDirty water becomes rain and joins our\nrivers, which we drink from...\pIf we pollute the sea, it all comes\nback to haunt us eventually.$"

Naranja_Route109_G00_M24_Text_0816E5CA::
# 571 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"

Naranja_Route109_G00_M24_Text_0816E5DC::
# 575 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "SEASHORE HOUSE\p“May hot battles rage on hot sands!\nThe place for hot TRAINERS!”$"

Naranja_Route109_G00_M24_Text_0816E62C::
# 579 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "TRAINER TIPS\pPOKéMON at the same level may not\nalways have identical stats.\pPOKéMON raised by TRAINERS are said\nto grow stronger than wild POKéMON.$"

Naranja_Route109_G00_M24_Text_081B9A1C::
# 583 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Hiyah! Look at my chiseled abs!\nThis is what you call “cut”!$"

Naranja_Route109_G00_M24_Text_081B9A59::
# 587 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Aiyah!\nFlubbed out!$"

Naranja_Route109_G00_M24_Text_081B9A6D::
# 591 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Hiyah!\pMy sculpted abs have nothing to do\nwith POKéMON battles!$"

Naranja_Route109_G00_M24_Text_081B9AAD::
# 595 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Are you properly protected against\nthe sun?$"

Naranja_Route109_G00_M24_Text_081B9AD9::
# 599 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Ouch, ouch, ouch!$"

Naranja_Route109_G00_M24_Text_081B9AEB::
# 603 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Cheeks are the most prone to burning!$"

Naranja_Route109_G00_M24_Text_081B9B11::
# 607 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’ve laid anchor in ports around the\nworld, but SLATEPORT’s the best.$"

Naranja_Route109_G00_M24_Text_081B9B57::
# 611 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "You’re the best!$"

Naranja_Route109_G00_M24_Text_081B9B68::
# 615 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "In the best port was the best\nTRAINER...$"

Naranja_Route109_G00_M24_Text_081B9B91::
# 619 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Urrrrppp...\nBattle? With me?$"

Naranja_Route109_G00_M24_Text_081B9BAE::
# 623 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Urp... Ooooooohhhhhh...\nUrrrrpppp...$"

Naranja_Route109_G00_M24_Text_081B9BD3::
# 627 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m usually stronger than this!\nI’m just seasick as a dog!\pI’m a SAILOR, but...$"

Naranja_Route109_G00_M24_Text_081B9C23::
# 631 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m thirsty... I could go for a SODA POP\nat the SEASHORE HOUSE...$"

Naranja_Route109_G00_M24_Text_081B9C65::
# 635 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Groan...$"

Naranja_Route109_G00_M24_Text_081B9C6E::
# 639 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m getting famished... My inner tube\nlooks like a giant doughnut...$"

Naranja_Route109_G00_M24_Text_081B9CB3::
# 643 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m hungry, but I’ve got enough pep in\nme for a battle!$"

Naranja_Route109_G00_M24_Text_081B9CEB::
# 647 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I lost...\nIt’s because I’m hungry...$"

Naranja_Route109_G00_M24_Text_081B9D10::
# 651 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "When you eat on a beach, everything\nseems to taste a little better.$"

Naranja_Route109_G00_M24_Text_081B9D54::
# 655 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Doesn’t a beach umbrella look like\na giant flower?$"

Naranja_Route109_G00_M24_Text_081B9D87::
# 659 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Mommy!$"

Naranja_Route109_G00_M24_Text_081B9D8E::
# 663 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "If you look at the beach from the sky,\nit looks like a big flower garden!$"

Naranja_Route109_G00_M24_Text_081B9DD8::
# 667 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m not losing to you again!\nThat’s why I have my inner tube!$"

Naranja_Route109_G00_M24_Text_081B9E16::
# 671 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Mommy!$"

Naranja_Route109_G00_M24_Text_081B9E1D::
# 675 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "If I have an inner tube, me and my\nPOKéMON’s cuteness goes way up!$"

Naranja_Route109_G00_M24_Text_081B9E60::
# 679 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I can’t swim without my inner tube,\nbut I won’t lose at POKéMON!$"

Naranja_Route109_G00_M24_Text_081B9EA1::
# 683 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Did I lose because I have an inner\ntube?$"

Naranja_Route109_G00_M24_Text_081B9ECA::
# 687 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "My inner tube is a fashion item.\nI can’t be seen without it.$"

Naranja_Route109_G00_M24_Text_081B9F07::
# 691 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Hi, big TRAINER.\nWill you battle with me?$"

Naranja_Route109_G00_M24_Text_081B9F31::
# 695 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Oh, you’re strong.$"

Naranja_Route109_G00_M24_Text_081B9F44::
# 699 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "How did you get to be so strong?$"

Naranja_Route109_G00_M24_Text_081B9F65::
# 703 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Wahahah! This dude’s going to catch\nhimself a big one!$"

Naranja_Route109_G00_M24_Text_081B9F9C::
# 707 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "This dude just lost one...$"

Naranja_Route109_G00_M24_Text_081B9FB7::
# 711 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "This dude thinks you’re a big one.\nNo, you’re a big-one-to-be!$"

Naranja_Route109_G00_M24_Text_081B9FF6::
# 715 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: Well, this is a mood-breaker.\pI wish you wouldn’t disturb our\nprecious time together.$"

Naranja_Route109_G00_M24_Text_081BA052::
# 719 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: Well, I give up.$"

Naranja_Route109_G00_M24_Text_081BA069::
# 723 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: Well, don’t tell anyone that\nwe’re here.\lThis is just our private world of two!$"

Naranja_Route109_G00_M24_Text_081BA0BF::
# 727 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: We’re totally, deeply in love.\nThat’s why we make our POKéMON battle\ltogether.$"

Naranja_Route109_G00_M24_Text_081BA114::
# 731 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: We’re, like, totally in love.\nOur romance is heating up all of HOENN!$"

Naranja_Route109_G00_M24_Text_081BA15F::
# 735 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: We lost, and it’s my fault!\nPAUL will hate me!$"

Naranja_Route109_G00_M24_Text_081BA193::
# 739 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: Um, PAUL, are you angry with me?\nPlease don’t be angry.$"

Naranja_Route109_G00_M24_Text_081BA1D0::
# 743 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: We’re, like, deeply and truly in love.\nThat’s why we make our POKéMON\lbattle together.$"

Naranja_Route109_G00_M24_Text_081BCCF4::
# 747 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "This beach is my secret training spot!\nDon’t come butting in!$"

Naranja_Route109_G00_M24_Text_081BCD32::
# 751 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I haven’t trained enough!$"

Naranja_Route109_G00_M24_Text_081BCD4C::
# 755 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "The sand acts as a cushion to reduce\nimpact and prevent injury.\lThis is the perfect place to train.$"

Naranja_Route109_G00_M24_Text_081BCDB0::
# 759 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Okay, let’s get this battle on!$"

Naranja_Route109_G00_M24_Text_081BCDD0::
# 763 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I can battle but my POKéMON...$"

Naranja_Route109_G00_M24_Text_081BCDEF::
# 767 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Even when I lose, I still get some\nenjoyment out of it.\lIt must be that I love POKéMON.$"
