Naranja_SinNombre_G25_M43_MapScripts::
	.byte 0


Naranja_SinNombre_G25_M43_EventScript_Sub_0815FCE5::
# 8 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	special SetSSTidalFlag
# 9 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 7
# 10 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	playse SE_DING_DONG
# 11 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199007
# 12 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M43_EventScript_Sub_0815FCF9::
# 17 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	special ResetSSTidalFlag
# 18 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 4
# 19 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	playse SE_DING_DONG
# 20 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_081990F8
# 21 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M43_EventScript_Sub_0815FD50::
# 26 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	special ResetSSTidalFlag
# 27 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 8
# 28 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	playse SE_DING_DONG
# 29 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081990B4
# 30 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M43_EventScript_Sub_0815FD64::
# 35 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3
# 36 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 37 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M43_EventScript_Sub_0815FCF9
# 38 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 39 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M43_EventScript_Sub_0815FCF9
# 40 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 41 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M43_EventScript_Sub_0815FCE5
# 42 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 43 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M43_EventScript_Sub_0815FD50
	return


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId8::
# 48 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	lock
# 49 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	faceplayer
# 50 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 51 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M43_EventScript_Sub_0815FF3D
# 52 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199B65
# 53 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	setorcopyvar VAR_0x8000, 0x151
# 55 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 56 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 0
# 57 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 58 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 59 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 60 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199C1A
# 61 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
# 62 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M43_EventScript_Sub_0815FF3D::
# 67 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199C1A
# 68 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
# 69 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M43_EventScript_Sign_1::
# 74 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	lockall
# 75 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_0819956B
# 76 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 4
# 77 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	closemessage
# 78 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	call Naranja_Route119_G32_M00_EventScript_Sub_081A02CA
# 79 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	call Naranja_SinNombre_G25_M43_EventScript_Sub_0815FD64
# 80 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 85 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SIN_NOMBRE_294, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_0819958A, Naranja_SinNombre_G25_M43_Text_08199613
# 86 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199630
# 87 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 92 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SIN_NOMBRE_255, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_081996A6, Naranja_SinNombre_G25_M43_Text_081996BF
# 93 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_081996E1
# 94 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId3::
# 99 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SIN_NOMBRE_256, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_08199723, Naranja_SinNombre_G25_M43_Text_08199747
# 100 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199778
# 101 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId4::
# 106 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_SIN_NOMBRE_641, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_081997C1, Naranja_SinNombre_G25_M43_Text_08199813, Naranja_SinNombre_G25_M43_Text_08199887
# 107 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199820
# 108 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId5::
# 113 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_SIN_NOMBRE_641, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_081998C5, Naranja_SinNombre_G25_M43_Text_0819990E, Naranja_SinNombre_G25_M43_Text_08199975
# 114 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_0819991C
# 115 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId6::
# 120 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SIN_NOMBRE_138, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_081999B7, Naranja_SinNombre_G25_M43_Text_081999FF
# 121 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199A10
# 122 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId7::
# 127 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SIN_NOMBRE_119, LOCALID_NONE, Naranja_SinNombre_G25_M43_Text_08199A62, Naranja_SinNombre_G25_M43_Text_08199ABF
# 128 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M43_Text_08199ADE
# 129 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	callstd 6
	end


Naranja_SinNombre_G25_M43_Text_081990F8::
# 133 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "We have made land in LILYCOVE CITY.\nThank you for sailing with us.$"

Naranja_SinNombre_G25_M43_Text_0819956B::
# 137 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "It’s a bed.\nLet’s take a rest.$"

Naranja_SinNombre_G25_M43_Text_0819958A::
# 141 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Go back and forth between LILYCOVE\nand SLATEPORT, that’s what I do.\pIt’s my hobby - going from port to port\nto take in POKéMON CONTESTS.$"

Naranja_SinNombre_G25_M43_Text_08199613::
# 145 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "That was an enjoyable match!$"

Naranja_SinNombre_G25_M43_Text_08199630::
# 149 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "I get so excited imagining what kinds\nof POKéMON I’ll get to see in the next\lCONTEST. The anticipation of it thrills!$"

Naranja_SinNombre_G25_M43_Text_081996A6::
# 153 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Are your friends strong?$"

Naranja_SinNombre_G25_M43_Text_081996BF::
# 157 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Your friends are, indeed, strong.$"

Naranja_SinNombre_G25_M43_Text_081996E1::
# 161 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Friends need not be human.\nFor me, POKéMON are treasured friends!$"

Naranja_SinNombre_G25_M43_Text_08199723::
# 165 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Child...\nDid you knock on the door?$"

Naranja_SinNombre_G25_M43_Text_08199747::
# 169 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "A loss is to be accepted without haste\nor panic.$"

Naranja_SinNombre_G25_M43_Text_08199778::
# 173 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "To be never ruffled in any situation is\nthe GENTLEMAN’s code of conduct.$"

Naranja_SinNombre_G25_M43_Text_081997C1::
# 177 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "JED: I feel a little shy about this, but...\nWe’ll show you our lovey-dovey power!$"

Naranja_SinNombre_G25_M43_Text_08199813::
# 181 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "JED: Sigh...$"

Naranja_SinNombre_G25_M43_Text_08199820::
# 185 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "JED: It’s the first time that our lovey-\ndovey power couldn’t prevail!\lYou must be an awesome TRAINER!$"

Naranja_SinNombre_G25_M43_Text_08199887::
# 189 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "JED: You only have one POKéMON?\nIsn’t that just too lonesome?$"

Naranja_SinNombre_G25_M43_Text_081998C5::
# 193 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "LEA: I feel a little silly, but...\nWe’ll show you our lovey-dovey power!$"

Naranja_SinNombre_G25_M43_Text_0819990E::
# 197 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "LEA: Oh, boo!$"

Naranja_SinNombre_G25_M43_Text_0819991C::
# 201 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "LEA: I can’t believe it!\nOur lovey-dovey power failed...\lYou must be an awesome TRAINER!$"

Naranja_SinNombre_G25_M43_Text_08199975::
# 205 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "LEA: I wanted to battle...\nBut you don’t even have two POKéMON...$"

Naranja_SinNombre_G25_M43_Text_081999B7::
# 209 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Ah, you’ve come just in time.\pI’m bored, you see.\nYou may entertain me.$"

Naranja_SinNombre_G25_M43_Text_081999FF::
# 213 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "...That will do.$"

Naranja_SinNombre_G25_M43_Text_08199A10::
# 217 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Perhaps I shall get Father to acquire\na yacht for me.\lA yacht for me and POKéMON!$"

Naranja_SinNombre_G25_M43_Text_08199A62::
# 221 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Oh, you’re such an adorable TRAINER.\nWould you like to have tea?\lOr would you rather battle?$"

Naranja_SinNombre_G25_M43_Text_08199ABF::
# 225 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "I see.\nYou’re the active sort.$"

Naranja_SinNombre_G25_M43_Text_08199ADE::
# 229 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "A world cruise on a luxury liner has its\ncharms, I must say...\pBut, I will admit there is an appealing\nside to touring HOENN by ferry.$"

Naranja_SinNombre_G25_M43_Text_08199B65::
# 233 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "Uh... Hi! I... I’m not acting suspicious!\nUh... You can have this! For free!\pIt... Honestly, I didn’t SNATCH it from\nsomeone! I’d never do such a thing!\lIt’s clean! You can use it!$"

Naranja_SinNombre_G25_M43_Text_08199C1A::
# 237 "data/maps/Naranja_SinNombre_G25_M43/scripts.pory"
	.string "SNATCH steals the foe’s move in\nadvance, and then uses the snatched\lmove on the foe.$"
