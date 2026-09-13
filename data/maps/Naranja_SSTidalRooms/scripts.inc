Naranja_SSTidalRooms_MapScripts::
	.byte 0


Naranja_SSTidalRooms_EventScript_Sub_0815FCE5::
# 8 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	special SetSSTidalFlag
# 9 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 7
# 10 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	playse SE_DING_DONG
# 11 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199007, MSGBOX_DEFAULT
	return


Naranja_SSTidalRooms_EventScript_Sub_0815FCF9::
# 16 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	special ResetSSTidalFlag
# 17 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 4
# 18 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	playse SE_DING_DONG
# 19 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_081990F8, MSGBOX_DEFAULT
	return


Naranja_SSTidalRooms_EventScript_Sub_0815FD50::
# 24 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	special ResetSSTidalFlag
# 25 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 8
# 26 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	playse SE_DING_DONG
# 27 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081990B4, MSGBOX_DEFAULT
	return


Naranja_SSTidalRooms_EventScript_Sub_0815FD64::
# 32 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3
# 33 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 34 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalRooms_EventScript_Sub_0815FCF9
# 35 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 36 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalRooms_EventScript_Sub_0815FCF9
# 37 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 38 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalRooms_EventScript_Sub_0815FCE5
# 39 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 40 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalRooms_EventScript_Sub_0815FD50
	return


Naranja_SSTidalRooms_EventScript_Maniac::
# 45 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	lock
# 46 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	faceplayer
# 47 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 48 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalRooms_EventScript_Sub_0815FF3D
# 49 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199B65, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	setorcopyvar VAR_0x8000, 0x151
# 51 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 52 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	callstd 0
# 53 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 54 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 55 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 56 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199C1A, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	release
	end


Naranja_SSTidalRooms_EventScript_Sub_0815FF3D::
# 62 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199C1A, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	release
	end


Naranja_SSTidalRooms_EventScript_Sign_1::
# 68 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	lockall
# 69 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_0819956B, MSGBOX_DEFAULT
# 70 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	closemessage
# 71 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	call Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_081A02CA
# 72 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	call Naranja_SSTidalRooms_EventScript_Sub_0815FD64
# 73 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	releaseall
	end


Naranja_SSTidalRooms_EventScript_Man3::
# 78 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SIN_NOMBRE_294, Naranja_SSTidalRooms_Text_0819958A, Naranja_SSTidalRooms_Text_08199613
# 79 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199630, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_EventScript_Gentleman::
# 84 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SIN_NOMBRE_255, Naranja_SSTidalRooms_Text_081996A6, Naranja_SSTidalRooms_Text_081996BF
# 85 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_081996E1, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_EventScript_Gentleman_2::
# 90 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SIN_NOMBRE_256, Naranja_SSTidalRooms_Text_08199723, Naranja_SSTidalRooms_Text_08199747
# 91 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199778, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_EventScript_Man5::
# 96 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_SIN_NOMBRE_641, Naranja_SSTidalRooms_Text_081997C1, Naranja_SSTidalRooms_Text_08199813, Naranja_SSTidalRooms_Text_08199887
# 97 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199820, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_EventScript_Woman5::
# 102 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_SIN_NOMBRE_641, Naranja_SSTidalRooms_Text_081998C5, Naranja_SSTidalRooms_Text_0819990E, Naranja_SSTidalRooms_Text_08199975
# 103 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_0819991C, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_EventScript_Boy4::
# 108 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SIN_NOMBRE_138, Naranja_SSTidalRooms_Text_081999B7, Naranja_SSTidalRooms_Text_081999FF
# 109 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199A10, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_EventScript_Woman3::
# 114 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SIN_NOMBRE_119, Naranja_SSTidalRooms_Text_08199A62, Naranja_SSTidalRooms_Text_08199ABF
# 115 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	msgbox Naranja_SSTidalRooms_Text_08199ADE, MSGBOX_AUTOCLOSE
	end


Naranja_SSTidalRooms_Text_081990F8::
# 119 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "We have made land in LILYCOVE CITY.\nThank you for sailing with us.$"

Naranja_SSTidalRooms_Text_0819956B::
# 123 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "It’s a bed.\nLet’s take a rest.$"

Naranja_SSTidalRooms_Text_0819958A::
# 127 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Go back and forth between LILYCOVE\nand SLATEPORT, that’s what I do.\pIt’s my hobby - going from port to port\nto take in POKéMON CONTESTS.$"

Naranja_SSTidalRooms_Text_08199613::
# 131 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"

Naranja_SSTidalRooms_Text_08199630::
# 135 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\nof POKéMON I’ll get to see in the next\lCONTEST. The anticipation of it thrills!$"

Naranja_SSTidalRooms_Text_081996A6::
# 139 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"

Naranja_SSTidalRooms_Text_081996BF::
# 143 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"

Naranja_SSTidalRooms_Text_081996E1::
# 147 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\nFor me, POKéMON are treasured friends!$"

Naranja_SSTidalRooms_Text_08199723::
# 151 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Child...\nDid you knock on the door?$"

Naranja_SSTidalRooms_Text_08199747::
# 155 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "A loss is to be accepted without haste\nor panic.$"

Naranja_SSTidalRooms_Text_08199778::
# 159 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "To be never ruffled in any situation is\nthe GENTLEMAN’s code of conduct.$"

Naranja_SSTidalRooms_Text_081997C1::
# 163 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "JED: I feel a little shy about this, but...\nWe’ll show you our lovey-dovey power!$"

Naranja_SSTidalRooms_Text_08199813::
# 167 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "JED: Sigh...$"

Naranja_SSTidalRooms_Text_08199820::
# 171 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "JED: It’s the first time that our lovey-\ndovey power couldn’t prevail!\lYou must be an awesome TRAINER!$"

Naranja_SSTidalRooms_Text_08199887::
# 175 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "JED: You only have one POKéMON?\nIsn’t that just too lonesome?$"

Naranja_SSTidalRooms_Text_081998C5::
# 179 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "LEA: I feel a little silly, but...\nWe’ll show you our lovey-dovey power!$"

Naranja_SSTidalRooms_Text_0819990E::
# 183 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "LEA: Oh, boo!$"

Naranja_SSTidalRooms_Text_0819991C::
# 187 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "LEA: I can’t believe it!\nOur lovey-dovey power failed...\lYou must be an awesome TRAINER!$"

Naranja_SSTidalRooms_Text_08199975::
# 191 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "LEA: I wanted to battle...\nBut you don’t even have two POKéMON...$"

Naranja_SSTidalRooms_Text_081999B7::
# 195 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Ah, you’ve come just in time.\pI’m bored, you see.\nYou may entertain me.$"

Naranja_SSTidalRooms_Text_081999FF::
# 199 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "...That will do.$"

Naranja_SSTidalRooms_Text_08199A10::
# 203 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\na yacht for me.\lA yacht for me and POKéMON!$"

Naranja_SSTidalRooms_Text_08199A62::
# 207 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Oh, you’re such an adorable TRAINER.\nWould you like to have tea?\lOr would you rather battle?$"

Naranja_SSTidalRooms_Text_08199ABF::
# 211 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "I see.\nYou’re the active sort.$"

Naranja_SSTidalRooms_Text_08199ADE::
# 215 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "A world cruise on a luxury liner has its\ncharms, I must say...\pBut, I will admit there is an appealing\nside to touring HOENN by ferry.$"

Naranja_SSTidalRooms_Text_08199B65::
# 219 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "Uh... Hi! I... I’m not acting suspicious!\nUh... You can have this! For free!\pIt... Honestly, I didn’t SNATCH it from\nsomeone! I’d never do such a thing!\lIt’s clean! You can use it!$"

Naranja_SSTidalRooms_Text_08199C1A::
# 223 "data/maps/Naranja_SSTidalRooms/scripts.pory"
	.string "SNATCH steals the foe’s move in\nadvance, and then uses the snatched\lmove on the foe.$"
