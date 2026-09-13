Naranja_ShamoutiIsland_House2_MapScripts::
	.byte 0


Naranja_ShamoutiIsland_House2_EventScript_OldWoman1::
# 8 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	lock
# 9 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_0108
# 11 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House2_EventScript_Sub_08158157
# 12 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_0076
# 13 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	call_if LESS_THAN, Naranja_ShamoutiIsland_House2_EventScript_Sub_0815814B
# 14 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_08186360, MSGBOX_DEFAULT
# 15 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	multichoice 0x15, 8, 0x36, 1
# 16 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 17 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 18 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House2_EventScript_Sub_08158161
# 19 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_081863F6, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	multichoice 0x15, 8, 0x36, 1
# 21 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 22 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 23 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House2_EventScript_Sub_08158161
# 24 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_08186455, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	multichoice 0x15, 8, 0x36, 1
# 26 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 27 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 28 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House2_EventScript_Sub_08158161
# 29 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_081864C6, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12A
# 31 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 32 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	callstd 0
# 33 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 34 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 35 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_0108
# 36 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_0818652F, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_House2_EventScript_Sub_0815814B::
# 42 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_08186306, MSGBOX_DEFAULT
# 43 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_0076
	return


Naranja_ShamoutiIsland_House2_EventScript_Sub_08158157::
# 48 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_0818652F, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_House2_EventScript_Sub_08158161::
# 54 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House2_Text_08186565, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_House2_Text_08186306::
# 59 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "People... POKéMON...\pTheir hidden powers are aroused by\nliving in natural environments...$"

Naranja_ShamoutiIsland_House2_Text_08186360::
# 63 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "Let this old woman see if your hidden\npower has awoken...\pI hold a coin in my hand.\pNow, tell me, have I palmed it in the\nright hand? Or in the left?$"

Naranja_ShamoutiIsland_House2_Text_081863F6::
# 67 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "Oh! Yes, correct!\pWe shall try again.\pIn which hand have I palmed the coin?\nThe right or left?$"

Naranja_ShamoutiIsland_House2_Text_08186455::
# 71 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "Oh! Yes, correct again!\pWe shall try once more.\pIn which hand have I palmed the coin?\nThe right or left? Choose!$"

Naranja_ShamoutiIsland_House2_Text_081864C6::
# 75 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "Oh! Splendid!\nYour hidden power has awoken!\pHere, take this and awaken the hidden\npower of your POKéMON.$"

Naranja_ShamoutiIsland_House2_Text_0818652F::
# 79 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "HIDDEN POWER is a move that changes\nwith the POKéMON.$"

Naranja_ShamoutiIsland_House2_Text_08186565::
# 83 "data/maps/Naranja_ShamoutiIsland_House2/scripts.pory"
	.string "No, too bad.\nYou guessed wrong.$"
