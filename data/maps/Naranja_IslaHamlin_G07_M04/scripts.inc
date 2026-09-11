Naranja_IslaHamlin_G07_M04_MapScripts::
	.byte 0


Naranja_IslaHamlin_G07_M04_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId2::
# 8 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_009A
# 11 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M04_EventScript_Sub_08154338
# 12 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	setvar VAR_0x8008, 2
# 13 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M04_Text_0817940E
# 17 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	callstd 5
# 18 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M04_EventScript_Sub_08154320
# 20 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	special ChoosePartyMon
# 21 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	waitstate
# 22 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 23 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 24 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M04_EventScript_Sub_08154320
# 25 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 26 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 27 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 28 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	compare_var_to_var VAR_RESULT, VAR_0x8009
# 29 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaHamlin_G07_M04_EventScript_Sub_0815432A
# 30 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 31 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 32 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	special CreateInGameTradePokemon
# 33 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	special DoInGameTradeScene
# 34 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	waitstate
# 35 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	bufferspeciesname 0, 0x8009
# 36 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M04_Text_081794C4
# 37 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_009A
# 39 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M04_EventScript_Sub_08154320::
# 44 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M04_Text_081794ED
# 45 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M04_EventScript_Sub_0815432A::
# 51 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	bufferspeciesname 0, 0x8009
# 52 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M04_Text_081794DF
# 53 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M04_EventScript_Sub_08154338::
# 59 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M04_Text_0817950A
# 60 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M04_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId1::
# 66 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M04_Text_08179541
# 67 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaHamlin_G07_M04_Text_0817940E::
# 71 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	.string "Hello, TRAINER. Would you do me a favor\nand trade POKéMON with me?\pLiving in PACIFIDLOG, I can only catch\ncertain kinds of POKéMON.\p{STR_VAR_1}? Do you have one?\nI’ll trade you my {STR_VAR_2} for it.$"

Naranja_IslaHamlin_G07_M04_Text_081794C4::
# 75 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	.string "Wow!\nThis {STR_VAR_1} is so fluffy!$"

Naranja_IslaHamlin_G07_M04_Text_081794DF::
# 79 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	.string "That’s no {STR_VAR_1}.$"

Naranja_IslaHamlin_G07_M04_Text_081794ED::
# 83 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	.string "I’m a little disappointed...$"

Naranja_IslaHamlin_G07_M04_Text_0817950A::
# 87 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	.string "Since we traded, you and me,\nwe’re friends, aren’t we?$"

Naranja_IslaHamlin_G07_M04_Text_08179541::
# 91 "data/maps/Naranja_IslaHamlin_G07_M04/scripts.pory"
	.string "Is that a POKéDEX?\pDid you get to meet a lot of different\nPOKéMON?\pI wish I was like you.$"
