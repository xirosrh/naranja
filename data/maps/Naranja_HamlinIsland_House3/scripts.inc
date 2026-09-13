Naranja_HamlinIsland_House3_MapScripts::
	.byte 0


Naranja_HamlinIsland_House3_EventScript_Woman5::
# 8 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	lock
# 9 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	checkflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_009A
# 11 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_HamlinIsland_House3_EventScript_Sub_08154338
# 12 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	setvar VAR_0x8008, 2
# 13 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	msgbox Naranja_HamlinIsland_House3_Text_0817940E, MSGBOX_YESNO
# 17 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_HamlinIsland_House3_EventScript_Sub_08154320
# 19 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	special ChoosePartyMon
# 20 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	waitstate
# 21 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 22 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 23 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_HamlinIsland_House3_EventScript_Sub_08154320
# 24 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 26 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 27 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	compare_var_to_var VAR_RESULT, VAR_0x8009
# 28 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	goto_if NOT_EQUAL, Naranja_HamlinIsland_House3_EventScript_Sub_0815432A
# 29 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 30 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 31 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	special CreateInGameTradePokemon
# 32 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	special DoInGameTradeScene
# 33 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	waitstate
# 34 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	bufferspeciesname 0, 0x8009
# 35 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	msgbox Naranja_HamlinIsland_House3_Text_081794C4, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	setflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_009A
# 37 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	release
	end


Naranja_HamlinIsland_House3_EventScript_Sub_08154320::
# 42 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	msgbox Naranja_HamlinIsland_House3_Text_081794ED, MSGBOX_DEFAULT
# 43 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	release
	end


Naranja_HamlinIsland_House3_EventScript_Sub_0815432A::
# 48 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	bufferspeciesname 0, 0x8009
# 49 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	msgbox Naranja_HamlinIsland_House3_Text_081794DF, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	release
	end


Naranja_HamlinIsland_House3_EventScript_Sub_08154338::
# 55 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	msgbox Naranja_HamlinIsland_House3_Text_0817950A, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	release
	end


Naranja_HamlinIsland_House3_EventScript_Girl2::
# 61 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	msgbox Naranja_HamlinIsland_House3_Text_08179541, MSGBOX_NPC
	end


Naranja_HamlinIsland_House3_Text_0817940E::
# 65 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	.string "Hello, TRAINER. Would you do me a favor\nand trade POKéMON with me?\pLiving in PACIFIDLOG, I can only catch\ncertain kinds of POKéMON.\p{STR_VAR_1}? Do you have one?\nI’ll trade you my {STR_VAR_2} for it.$"

Naranja_HamlinIsland_House3_Text_081794C4::
# 69 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	.string "Wow!\nThis {STR_VAR_1} is so fluffy!$"

Naranja_HamlinIsland_House3_Text_081794DF::
# 73 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	.string "That’s no {STR_VAR_1}.$"

Naranja_HamlinIsland_House3_Text_081794ED::
# 77 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	.string "I’m a little disappointed...$"

Naranja_HamlinIsland_House3_Text_0817950A::
# 81 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	.string "Since we traded, you and me,\nwe’re friends, aren’t we?$"

Naranja_HamlinIsland_House3_Text_08179541::
# 85 "data/maps/Naranja_HamlinIsland_House3/scripts.pory"
	.string "Is that a POKéDEX?\pDid you get to meet a lot of different\nPOKéMON?\pI wish I was like you.$"
