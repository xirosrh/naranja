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
	msgbox Naranja_Islas_G00_M19_Text_0816B4B5, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 64 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyvar VAR_NARANJA_FERRY_DESTINATION, VAR_0x8008
# 65 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_ROUTE_109_G00_M24
# 66 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_G00_M24_OLD_MAN_1, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 67 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_G00_M24_OLD_MAN_1
# 68 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 73 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 74 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 75 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 76 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_G00_M24_EventScript_Sub_0814F691
# 77 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F6AF
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F691::
# 81 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	message Naranja_Route109_G00_M24_Text_0816E0F9
# 82 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E0F9, MSGBOX_YESNO
# 83 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 84 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6F1
# 85 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F6E2
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F6AF::
# 89 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	message Naranja_Route109_G00_M24_Text_0816E26A
# 90 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmessage
# 91 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	multichoicedefault 0x15, 8, 0xE, 1, 0
# 92 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 93 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 94 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6E2
# 95 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 96 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6FB
# 97 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 98 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F6FB
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F6E2::
# 103 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E159, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 105 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto Naranja_Route109_G00_M24_EventScript_Sub_0814F4D3
	return


Naranja_Route109_G00_M24_EventScript_Sub_0814F6F1::
# 109 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E1B1, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F6FB::
# 115 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E2C5, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId9::
# 121 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E307, MSGBOX_NPC
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_M_LocalId14::
# 126 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 127 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 128 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E405, MSGBOX_DEFAULT
# 129 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 130 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 131 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 132 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId15::
# 137 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 138 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 139 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	special GetPlayerBigGuyGirlString
# 140 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_0118
# 141 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F762
# 142 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E433, MSGBOX_DEFAULT
# 143 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCB
# 144 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 145 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 0
# 146 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 147 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 148 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	closemessage
# 149 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 150 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 151 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_0118
# 152 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F762::
# 157 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E446, MSGBOX_DEFAULT
# 158 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 159 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmovement LOCALID_NONE
# 160 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId19::
# 165 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E4D5, MSGBOX_NPC
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId20::
# 170 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	lock
# 171 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	faceplayer
# 172 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitse
# 173 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 174 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E5CA, MSGBOX_DEFAULT
# 175 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	waitmoncry
# 176 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	release
	end


Naranja_Route109_G00_M24_EventScript_Sign_1::
# 181 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E5DC, MSGBOX_SIGN
	end


Naranja_Route109_G00_M24_EventScript_Sign_2::
# 186 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_0816E62C, MSGBOX_SIGN
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId3::
# 191 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_158, Naranja_Route109_G00_M24_Text_081B9A1C, Naranja_Route109_G00_M24_Text_081B9A59
# 192 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9A6D, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 197 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_448, Naranja_Route109_G00_M24_Text_081B9AAD, Naranja_Route109_G00_M24_Text_081B9AD9
# 198 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9AEB, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId5::
# 203 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_490, Naranja_Route109_G00_M24_Text_081B9B11, Naranja_Route109_G00_M24_Text_081B9B57
# 204 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9B68, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId6::
# 209 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_491, Naranja_Route109_G00_M24_Text_081B9B91, Naranja_Route109_G00_M24_Text_081B9BAE
# 210 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9BD3, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_M_LocalId7::
# 215 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_064, Naranja_Route109_G00_M24_Text_081B9C23, Naranja_Route109_G00_M24_Text_081B9C65
# 216 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 217 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 218 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F830
# 219 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9C6E, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F830::
# 224 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE109_064, Naranja_Route109_G00_M24_Text_081B9CB3, Naranja_Route109_G00_M24_Text_081B9CEB
# 225 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9D10, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId8::
# 230 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_057, Naranja_Route109_G00_M24_Text_081B9D54, Naranja_Route109_G00_M24_Text_081B9D87
# 231 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 232 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 233 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_0814F86E
# 234 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9D8E, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_Sub_0814F86E::
# 239 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE109_057, Naranja_Route109_G00_M24_Text_081B9DD8, Naranja_Route109_G00_M24_Text_081B9E16
# 240 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9E1D, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId12::
# 245 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_058, Naranja_Route109_G00_M24_Text_081B9E60, Naranja_Route109_G00_M24_Text_081B9EA1
# 246 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9ECA, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_TUBER_F_LocalId11::
# 251 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_059, Naranja_Route109_G00_M24_Text_081B9F07, Naranja_Route109_G00_M24_Text_081B9F31
# 252 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9F44, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId13::
# 257 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_345, Naranja_Route109_G00_M24_Text_081B9F65, Naranja_Route109_G00_M24_Text_081B9F9C
# 258 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081B9FB7, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId18::
# 263 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE109_680, Naranja_Route109_G00_M24_Text_081B9FF6, Naranja_Route109_G00_M24_Text_081BA052, Naranja_Route109_G00_M24_Text_081BA0BF
# 264 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081BA069, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId17::
# 269 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE109_680, Naranja_Route109_G00_M24_Text_081BA114, Naranja_Route109_G00_M24_Text_081BA15F, Naranja_Route109_G00_M24_Text_081BA1D0
# 270 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081BA193, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId16::
# 275 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_427, Naranja_Route109_G00_M24_Text_081BCCF4, Naranja_Route109_G00_M24_Text_081BCD32
# 276 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 277 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 278 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G00_M24_EventScript_Sub_08150A03
# 279 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081BCD4C, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_Sub_08150A03::
# 284 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE109_427, Naranja_Route109_G00_M24_Text_081BCDB0, Naranja_Route109_G00_M24_Text_081BCDD0
# 285 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	msgbox Naranja_Route109_G00_M24_Text_081BCDEF, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_G00_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId10::
# 290 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 291 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 292 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	callstd 1
	end


# 296 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F5BF:
# 297 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_down
# 298 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 299 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 300 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 301 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 302 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 303 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 304 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 305 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 306 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 307 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 308 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 309 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 310 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 311 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 312 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 313 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 314 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 315 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 316 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 317 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_down
# 318 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 319 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_down
# 320 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 321 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 322 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 323 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 324 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 325 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 326 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 327 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 328 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 329 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 330 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 331 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 332 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 333 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 334 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 335 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 336 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 337 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 338 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 339 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 340 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 341 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 342 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 343 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 344 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 345 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 346 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 347 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 348 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
# 349 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_faster_left
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
	walk_fast_left
# 459 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 460 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 461 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 462 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 463 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 464 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 465 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 466 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_fast_left
# 467 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 468 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 469 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_down
	step_end

# 472 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F66D:
# 473 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 474 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 477 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F670:
# 478 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 479 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 480 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 481 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_right
	step_end

# 484 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F675:
# 485 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_right
# 486 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 489 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F678:
# 490 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_left
# 491 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 494 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F67B:
# 495 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
	step_end

# 498 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
Naranja_Route109_G00_M24_Movement_0814F67D:
# 499 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_down
# 500 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_Route109_G00_M24_Text_0816E0F9::
# 503 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: Aren’t you delivering the\nDEVON GOODS?\pOr were you meaning to sail back to\nDEWFORD?$"

Naranja_Route109_G00_M24_Text_0816E159::
# 507 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_Route109_G00_M24_Text_0816E1B1::
# 511 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\nthe DEVON GOODS. I’ll be waiting.$"

Naranja_Route109_G00_M24_Text_0816E26A::
# 515 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nFor you, I’ll go out to sea anytime!\pNow, my friend, where are we bound?$"

Naranja_Route109_G00_M24_Text_0816E2C5::
# 519 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\nyou need to set sail again!$"

Naranja_Route109_G00_M24_Text_0816E307::
# 523 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Yo, TRAINERS!\nWhether you’re hot to trot,\lor cool cat not,\lchill at my papa’s spot!$"

Naranja_Route109_G00_M24_Text_0816E405::
# 527 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Our sand castle’s taking a long time\nto make.$"

Naranja_Route109_G00_M24_Text_0816E433::
# 531 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "You can have this!$"

Naranja_Route109_G00_M24_Text_0816E446::
# 535 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "We’re going to get all the sand from\nthe beach and make a big castle!\pAnd then we’re going to be a king and\nqueen.\pWe’ll let you be a servant.$"

Naranja_Route109_G00_M24_Text_0816E4D5::
# 539 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "The water around these parts is clean.\pBut, I get my ZIGZAGOON to pick up\nlitter from the shoreline at times.\pDirty water becomes rain and joins our\nrivers, which we drink from...\pIf we pollute the sea, it all comes\nback to haunt us eventually.$"

Naranja_Route109_G00_M24_Text_0816E5CA::
# 543 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"

Naranja_Route109_G00_M24_Text_0816E5DC::
# 547 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "SEASHORE HOUSE\p“May hot battles rage on hot sands!\nThe place for hot TRAINERS!”$"

Naranja_Route109_G00_M24_Text_0816E62C::
# 551 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "TRAINER TIPS\pPOKéMON at the same level may not\nalways have identical stats.\pPOKéMON raised by TRAINERS are said\nto grow stronger than wild POKéMON.$"

Naranja_Route109_G00_M24_Text_081B9A1C::
# 555 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Hiyah! Look at my chiseled abs!\nThis is what you call “cut”!$"

Naranja_Route109_G00_M24_Text_081B9A59::
# 559 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Aiyah!\nFlubbed out!$"

Naranja_Route109_G00_M24_Text_081B9A6D::
# 563 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Hiyah!\pMy sculpted abs have nothing to do\nwith POKéMON battles!$"

Naranja_Route109_G00_M24_Text_081B9AAD::
# 567 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Are you properly protected against\nthe sun?$"

Naranja_Route109_G00_M24_Text_081B9AD9::
# 571 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Ouch, ouch, ouch!$"

Naranja_Route109_G00_M24_Text_081B9AEB::
# 575 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Cheeks are the most prone to burning!$"

Naranja_Route109_G00_M24_Text_081B9B11::
# 579 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’ve laid anchor in ports around the\nworld, but SLATEPORT’s the best.$"

Naranja_Route109_G00_M24_Text_081B9B57::
# 583 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "You’re the best!$"

Naranja_Route109_G00_M24_Text_081B9B68::
# 587 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "In the best port was the best\nTRAINER...$"

Naranja_Route109_G00_M24_Text_081B9B91::
# 591 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Urrrrppp...\nBattle? With me?$"

Naranja_Route109_G00_M24_Text_081B9BAE::
# 595 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Urp... Ooooooohhhhhh...\nUrrrrpppp...$"

Naranja_Route109_G00_M24_Text_081B9BD3::
# 599 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m usually stronger than this!\nI’m just seasick as a dog!\pI’m a SAILOR, but...$"

Naranja_Route109_G00_M24_Text_081B9C23::
# 603 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m thirsty... I could go for a SODA POP\nat the SEASHORE HOUSE...$"

Naranja_Route109_G00_M24_Text_081B9C65::
# 607 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Groan...$"

Naranja_Route109_G00_M24_Text_081B9C6E::
# 611 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m getting famished... My inner tube\nlooks like a giant doughnut...$"

Naranja_Route109_G00_M24_Text_081B9CB3::
# 615 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m hungry, but I’ve got enough pep in\nme for a battle!$"

Naranja_Route109_G00_M24_Text_081B9CEB::
# 619 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I lost...\nIt’s because I’m hungry...$"

Naranja_Route109_G00_M24_Text_081B9D10::
# 623 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "When you eat on a beach, everything\nseems to taste a little better.$"

Naranja_Route109_G00_M24_Text_081B9D54::
# 627 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Doesn’t a beach umbrella look like\na giant flower?$"

Naranja_Route109_G00_M24_Text_081B9D87::
# 631 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Mommy!$"

Naranja_Route109_G00_M24_Text_081B9D8E::
# 635 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "If you look at the beach from the sky,\nit looks like a big flower garden!$"

Naranja_Route109_G00_M24_Text_081B9DD8::
# 639 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I’m not losing to you again!\nThat’s why I have my inner tube!$"

Naranja_Route109_G00_M24_Text_081B9E16::
# 643 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Mommy!$"

Naranja_Route109_G00_M24_Text_081B9E1D::
# 647 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "If I have an inner tube, me and my\nPOKéMON’s cuteness goes way up!$"

Naranja_Route109_G00_M24_Text_081B9E60::
# 651 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I can’t swim without my inner tube,\nbut I won’t lose at POKéMON!$"

Naranja_Route109_G00_M24_Text_081B9EA1::
# 655 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Did I lose because I have an inner\ntube?$"

Naranja_Route109_G00_M24_Text_081B9ECA::
# 659 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "My inner tube is a fashion item.\nI can’t be seen without it.$"

Naranja_Route109_G00_M24_Text_081B9F07::
# 663 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Hi, big TRAINER.\nWill you battle with me?$"

Naranja_Route109_G00_M24_Text_081B9F31::
# 667 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Oh, you’re strong.$"

Naranja_Route109_G00_M24_Text_081B9F44::
# 671 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "How did you get to be so strong?$"

Naranja_Route109_G00_M24_Text_081B9F65::
# 675 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Wahahah! This dude’s going to catch\nhimself a big one!$"

Naranja_Route109_G00_M24_Text_081B9F9C::
# 679 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "This dude just lost one...$"

Naranja_Route109_G00_M24_Text_081B9FB7::
# 683 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "This dude thinks you’re a big one.\nNo, you’re a big-one-to-be!$"

Naranja_Route109_G00_M24_Text_081B9FF6::
# 687 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: Well, this is a mood-breaker.\pI wish you wouldn’t disturb our\nprecious time together.$"

Naranja_Route109_G00_M24_Text_081BA052::
# 691 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: Well, I give up.$"

Naranja_Route109_G00_M24_Text_081BA069::
# 695 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: Well, don’t tell anyone that\nwe’re here.\lThis is just our private world of two!$"

Naranja_Route109_G00_M24_Text_081BA0BF::
# 699 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "PAUL: We’re totally, deeply in love.\nThat’s why we make our POKéMON battle\ltogether.$"

Naranja_Route109_G00_M24_Text_081BA114::
# 703 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: We’re, like, totally in love.\nOur romance is heating up all of HOENN!$"

Naranja_Route109_G00_M24_Text_081BA15F::
# 707 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: We lost, and it’s my fault!\nPAUL will hate me!$"

Naranja_Route109_G00_M24_Text_081BA193::
# 711 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: Um, PAUL, are you angry with me?\nPlease don’t be angry.$"

Naranja_Route109_G00_M24_Text_081BA1D0::
# 715 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "MEL: We’re, like, deeply and truly in love.\nThat’s why we make our POKéMON\lbattle together.$"

Naranja_Route109_G00_M24_Text_081BCCF4::
# 719 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "This beach is my secret training spot!\nDon’t come butting in!$"

Naranja_Route109_G00_M24_Text_081BCD32::
# 723 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I haven’t trained enough!$"

Naranja_Route109_G00_M24_Text_081BCD4C::
# 727 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "The sand acts as a cushion to reduce\nimpact and prevent injury.\lThis is the perfect place to train.$"

Naranja_Route109_G00_M24_Text_081BCDB0::
# 731 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Okay, let’s get this battle on!$"

Naranja_Route109_G00_M24_Text_081BCDD0::
# 735 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "I can battle but my POKéMON...$"

Naranja_Route109_G00_M24_Text_081BCDEF::
# 739 "data/maps/Naranja_Route109_G00_M24/scripts.pory"
	.string "Even when I lose, I still get some\nenjoyment out of it.\lIt must be that I love POKéMON.$"
