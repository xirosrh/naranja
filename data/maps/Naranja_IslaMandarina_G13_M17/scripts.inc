Naranja_IslaMandarina_G13_M17_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M17_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_0818BFB5
# 9 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M17_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId2::
# 14 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	dotimebasedevents
# 17 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_POKELOT_PRIZE_ITEM, 0
# 18 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159EB1
# 19 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_08CA
# 20 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E4C
# 21 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4B5E
# 22 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 5
# 23 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 24 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E56
# 25 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_08CA
# 26 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	message Naranja_IslaMandarina_G13_M17_Text_081C4CC6
# 27 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	waitmessage
# 28 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	special RetrieveLotteryNumber
# 29 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 30 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	special BufferLottoTicketNumber
# 31 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4CF6
# 32 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G13_M17_BEAUTY_2, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 34 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	waitmovement LOCALID_NONE
# 35 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	playse SE_PC_ON
# 36 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	special DoLotteryCornerComputerEffect
# 37 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	special PickLotteryCornerTicket
# 38 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	delay 0xDC
# 39 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	special EndLotteryCornerComputerEffect
# 40 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	delay 0xA
# 41 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G13_M17_BEAUTY_2, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 42 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 44 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E60
# 45 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	incrementgamestat 0x2E
# 46 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8006, 0
# 47 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E3A
# 48 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8006, 1
# 49 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E43
# 50 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	bufferitemname 0, 0x8005
# 51 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 52 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E78
# 53 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 54 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E81
# 55 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 56 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E8A
# 57 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 58 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E93
# 59 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8005
# 60 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 61 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 0
# 62 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 63 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E9C
# 64 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E6E
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E3A::
# 68 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4D7D
# 69 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E43::
# 74 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4DD1
# 75 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E4C::
# 80 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4C6A
# 81 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E56::
# 87 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4C85
# 88 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 89 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E60::
# 94 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4E27
# 95 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 96 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E6E
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E6E::
# 100 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C501C
# 101 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 102 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E78::
# 107 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4E4F
# 108 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E81::
# 113 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4E92
# 114 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E8A::
# 119 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4ED8
# 120 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E93::
# 125 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4F1C
# 126 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159E9C::
# 131 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 132 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159EA7
	return


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159EA7::
# 136 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4F77
# 137 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 138 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159EB1::
# 143 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_081C4FCC
# 144 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_POKELOT_PRIZE_ITEM
# 146 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 147 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 0
# 148 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 149 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M17_EventScript_Sub_08159EA7
# 150 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, 0
# 151 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M17_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId3::
# 156 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_0818BFDB
# 157 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M17_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId4::
# 162 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_0818C044
# 163 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M17_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId5::
# 168 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_0818C07A
# 169 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M17_EventScript_OBJ_EVENT_GFX_AZUMARILL_LocalId6::
# 174 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	lock
# 175 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	faceplayer
# 176 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	waitse
# 177 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 178 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_0818C0C3
# 179 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 4
# 180 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	waitmoncry
# 181 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M17_EventScript_Sign_1::
# 186 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M17_Text_0818C0D9
# 187 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	callstd 3
	end


Naranja_IslaMandarina_G13_M17_Text_0818BFB5::
# 191 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"

Naranja_IslaMandarina_G13_M17_Text_0818BFDB::
# 195 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\nSTORE, I always end up buying all sorts\lof things because it’s so fun.$"

Naranja_IslaMandarina_G13_M17_Text_0818C044::
# 199 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Today, my mom is going to buy me some\nnice furniture.$"

Naranja_IslaMandarina_G13_M17_Text_0818C07A::
# 203 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "I’m buying something for my AZUMARILL\nas a reward for winning a CONTEST.$"

Naranja_IslaMandarina_G13_M17_Text_0818C0C3::
# 207 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "AZUMARILL: Maririroo!$"

Naranja_IslaMandarina_G13_M17_Text_0818C0D9::
# 211 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "1F: SERVICE COUNTER\n    LOTTERY CORNER\p2F: TRAINER’S ZONE\p3F: BATTLE COLLECTION\p4F: TM CORNER\p5F: POKé DOLL FLOOR\pROOFTOP: ROOFTOP PLAZA$"

Naranja_IslaMandarina_G13_M17_Text_081C4B5E::
# 215 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "This is the POKéMON LOTTERY CORNER.\pAll shoppers visiting our DEPARTMENT\nSTORE get to draw a POKéMON LOTO\lTICKET.\pIf the LOTO TICKET’s number matches\nthe ID number of any of your POKéMON,\lyou will receive a fabulous gift.\pWould you like to draw a POKéMON\nLOTO TICKET?$"

Naranja_IslaMandarina_G13_M17_Text_081C4C6A::
# 219 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Please come back tomorrow.$"

Naranja_IslaMandarina_G13_M17_Text_081C4C85::
# 223 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Please do visit us again.$"

Naranja_IslaMandarina_G13_M17_Text_081C4CC6::
# 227 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Please pick a LOTO TICKET.\n...{PAUSE 0x39} ...{PAUSE 0x39} ...{PAUSE 0x39}$"

Naranja_IslaMandarina_G13_M17_Text_081C4CF6::
# 231 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "The LOTO TICKET number is {STR_VAR_1}.\pI need to run a check on this number\nto see if it matches any of your\lPOKéMON’s ID numbers. Please wait.$"

Naranja_IslaMandarina_G13_M17_Text_081C4D7D::
# 235 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Congratulations!\pThe ID number of your team’s\n{STR_VAR_1} matches your LOTO TICKET’s\lnumber!$"

Naranja_IslaMandarina_G13_M17_Text_081C4DD1::
# 239 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Congratulations!\pThe ID number of your PC-boxed\n{STR_VAR_1} matches your LOTO TICKET’s\lnumber!$"

Naranja_IslaMandarina_G13_M17_Text_081C4E27::
# 243 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "I’m sorry.\nNone of the numbers matched.$"

Naranja_IslaMandarina_G13_M17_Text_081C4E4F::
# 247 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Two digits matched, so you win the\nthird prize!\lYou’ve won the {STR_VAR_1}!$"

Naranja_IslaMandarina_G13_M17_Text_081C4E92::
# 251 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Three digits matched, so you win the\nsecond prize!\lYou’ve won the {STR_VAR_1}!$"

Naranja_IslaMandarina_G13_M17_Text_081C4ED8::
# 255 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Four digits matched, so you win the\nfirst prize!\lYou’ve won the {STR_VAR_1}!$"

Naranja_IslaMandarina_G13_M17_Text_081C4F1C::
# 259 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Oh, my goodness, all five digits matched!\pYou’ve won the jackpot prize!\nYou’ve won the {STR_VAR_1}!$"

Naranja_IslaMandarina_G13_M17_Text_081C4F77::
# 263 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Oh?\nYou seem to have no room for this.\pPlease make room in your BAG and\nlet me know.$"

Naranja_IslaMandarina_G13_M17_Text_081C4FCC::
# 267 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "{PLAYER}?\nYes, I’ve been expecting you.\pThis is the prize we’ve been holding\nfor you.$"

Naranja_IslaMandarina_G13_M17_Text_081C501C::
# 271 "data/maps/Naranja_IslaMandarina_G13_M17/scripts.pory"
	.string "Please do visit again.$"
