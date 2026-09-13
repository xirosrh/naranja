Naranja_MandarinIslandSouth_DepartmentStore_1F_MapScripts::
	.byte 0


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Beauty::
# 8 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818BFB5, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Beauty_2::
# 13 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	lock
# 14 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	dotimebasedevents
# 16 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_POKELOT_PRIZE_ITEM, 0
# 17 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto_if NOT_EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159EB1
# 18 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_EVENT_COMPLETE_08CA
# 19 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E4C
# 20 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4B5E, MSGBOX_YESNO
# 21 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 22 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E56
# 23 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_EVENT_COMPLETE_08CA
# 24 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	message Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4CC6
# 25 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	waitmessage
# 26 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	special RetrieveLotteryNumber
# 27 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 28 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	special BufferLottoTicketNumber
# 29 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4CF6, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_DEPARTMENT_STORE_1_F_BEAUTY_2, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 31 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	playse SE_PC_ON
# 33 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	special DoLotteryCornerComputerEffect
# 34 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	special PickLotteryCornerTicket
# 35 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	delay 0xDC
# 36 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	special EndLotteryCornerComputerEffect
# 37 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	delay 0xA
# 38 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_DEPARTMENT_STORE_1_F_BEAUTY_2, Naranja_KumquatIsland_Movement_081A0839
# 39 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 41 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E60
# 42 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	incrementgamestat 0x2E
# 43 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8006, 0
# 44 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E3A
# 45 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8006, 1
# 46 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E43
# 47 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	bufferitemname 0, 0x8005
# 48 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 49 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E78
# 50 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 51 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E81
# 52 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 53 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E8A
# 54 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 55 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E93
# 56 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8005
# 57 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 58 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	callstd 0
# 59 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 60 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E9C
# 61 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E6E
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E3A::
# 65 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4D7D, MSGBOX_DEFAULT
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E43::
# 70 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4DD1, MSGBOX_DEFAULT
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E4C::
# 75 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4C6A, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E56::
# 81 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4C85, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E60::
# 87 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4E27, MSGBOX_DEFAULT
# 88 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E6E
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E6E::
# 92 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C501C, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E78::
# 98 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4E4F, MSGBOX_DEFAULT
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E81::
# 103 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4E92, MSGBOX_DEFAULT
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E8A::
# 108 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4ED8, MSGBOX_DEFAULT
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E93::
# 113 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4F1C, MSGBOX_DEFAULT
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159E9C::
# 118 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 119 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159EA7
	return


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159EA7::
# 123 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4F77, MSGBOX_DEFAULT
# 124 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159EB1::
# 129 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4FCC, MSGBOX_DEFAULT
# 130 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_POKELOT_PRIZE_ITEM
# 131 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 132 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	callstd 0
# 133 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 134 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sub_08159EA7
# 135 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, 0
# 136 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Woman2::
# 141 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818BFDB, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_LittleGirl2::
# 146 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C044, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Man3::
# 151 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C07A, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Azumarill::
# 156 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	lock
# 157 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	faceplayer
# 158 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	waitse
# 159 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 160 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C0C3, MSGBOX_DEFAULT
# 161 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	waitmoncry
# 162 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_EventScript_Sign_1::
# 167 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C0D9, MSGBOX_SIGN
	end


Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818BFB5::
# 171 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818BFDB::
# 175 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\nSTORE, I always end up buying all sorts\lof things because it’s so fun.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C044::
# 179 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Today, my mom is going to buy me some\nnice furniture.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C07A::
# 183 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "I’m buying something for my AZUMARILL\nas a reward for winning a CONTEST.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C0C3::
# 187 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "AZUMARILL: Maririroo!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_0818C0D9::
# 191 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "1F: SERVICE COUNTER\n    LOTTERY CORNER\p2F: TRAINER’S ZONE\p3F: BATTLE COLLECTION\p4F: TM CORNER\p5F: POKé DOLL FLOOR\pROOFTOP: ROOFTOP PLAZA$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4B5E::
# 195 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "This is the POKéMON LOTTERY CORNER.\pAll shoppers visiting our DEPARTMENT\nSTORE get to draw a POKéMON LOTO\lTICKET.\pIf the LOTO TICKET’s number matches\nthe ID number of any of your POKéMON,\lyou will receive a fabulous gift.\pWould you like to draw a POKéMON\nLOTO TICKET?$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4C6A::
# 199 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Please come back tomorrow.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4C85::
# 203 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Please do visit us again.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4CC6::
# 207 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Please pick a LOTO TICKET.\n...{PAUSE 0x39} ...{PAUSE 0x39} ...{PAUSE 0x39}$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4CF6::
# 211 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "The LOTO TICKET number is {STR_VAR_1}.\pI need to run a check on this number\nto see if it matches any of your\lPOKéMON’s ID numbers. Please wait.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4D7D::
# 215 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Congratulations!\pThe ID number of your team’s\n{STR_VAR_1} matches your LOTO TICKET’s\lnumber!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4DD1::
# 219 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Congratulations!\pThe ID number of your PC-boxed\n{STR_VAR_1} matches your LOTO TICKET’s\lnumber!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4E27::
# 223 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "I’m sorry.\nNone of the numbers matched.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4E4F::
# 227 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Two digits matched, so you win the\nthird prize!\lYou’ve won the {STR_VAR_1}!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4E92::
# 231 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Three digits matched, so you win the\nsecond prize!\lYou’ve won the {STR_VAR_1}!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4ED8::
# 235 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Four digits matched, so you win the\nfirst prize!\lYou’ve won the {STR_VAR_1}!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4F1C::
# 239 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Oh, my goodness, all five digits matched!\pYou’ve won the jackpot prize!\nYou’ve won the {STR_VAR_1}!$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4F77::
# 243 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Oh?\nYou seem to have no room for this.\pPlease make room in your BAG and\nlet me know.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C4FCC::
# 247 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "{PLAYER}?\nYes, I’ve been expecting you.\pThis is the prize we’ve been holding\nfor you.$"

Naranja_MandarinIslandSouth_DepartmentStore_1F_Text_081C501C::
# 251 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_1F/scripts.pory"
	.string "Please do visit again.$"
