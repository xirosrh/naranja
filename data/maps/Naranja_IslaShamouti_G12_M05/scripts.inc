Naranja_IslaShamouti_G12_M05_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M05_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0108
# 11 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M05_EventScript_Sub_08158157
# 12 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0076
# 13 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaShamouti_G12_M05_EventScript_Sub_0815814B
# 14 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_08186360
# 15 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 16 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	multichoice 0x15, 8, 0x36, 1
# 17 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 18 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 19 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M05_EventScript_Sub_08158161
# 20 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_081863F6
# 21 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	multichoice 0x15, 8, 0x36, 1
# 23 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 24 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 25 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M05_EventScript_Sub_08158161
# 26 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_08186455
# 27 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	multichoice 0x15, 8, 0x36, 1
# 29 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 30 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 31 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M05_EventScript_Sub_08158161
# 32 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_081864C6
# 33 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12A
# 35 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 36 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 0
# 37 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 39 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0108
# 40 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_0818652F
# 41 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 42 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M05_EventScript_Sub_0815814B::
# 47 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_08186306
# 48 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0076
	return


Naranja_IslaShamouti_G12_M05_EventScript_Sub_08158157::
# 54 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_0818652F
# 55 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M05_EventScript_Sub_08158161::
# 61 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M05_Text_08186565
# 62 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M05_Text_08186306::
# 67 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "People... POKéMON...\pTheir hidden powers are aroused by\nliving in natural environments...$"

Naranja_IslaShamouti_G12_M05_Text_08186360::
# 71 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "Let this old woman see if your hidden\npower has awoken...\pI hold a coin in my hand.\pNow, tell me, have I palmed it in the\nright hand? Or in the left?$"

Naranja_IslaShamouti_G12_M05_Text_081863F6::
# 75 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "Oh! Yes, correct!\pWe shall try again.\pIn which hand have I palmed the coin?\nThe right or left?$"

Naranja_IslaShamouti_G12_M05_Text_08186455::
# 79 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "Oh! Yes, correct again!\pWe shall try once more.\pIn which hand have I palmed the coin?\nThe right or left? Choose!$"

Naranja_IslaShamouti_G12_M05_Text_081864C6::
# 83 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "Oh! Splendid!\nYour hidden power has awoken!\pHere, take this and awaken the hidden\npower of your POKéMON.$"

Naranja_IslaShamouti_G12_M05_Text_0818652F::
# 87 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "HIDDEN POWER is a move that changes\nwith the POKéMON.$"

Naranja_IslaShamouti_G12_M05_Text_08186565::
# 91 "data/maps/Naranja_IslaShamouti_G12_M05/scripts.pory"
	.string "No, too bad.\nYou guessed wrong.$"
