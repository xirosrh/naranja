Naranja_IslaTrovita_G11_M10_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M10_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0099
# 11 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157D13
# 12 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	setvar VAR_0x8008, 0
# 13 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M10_Text_08184EBA
# 17 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	callstd 5
# 18 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157CFB
# 20 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	special ChoosePartyMon
# 21 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	waitstate
# 22 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 23 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 24 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157CFB
# 25 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 26 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 27 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 28 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	compare_var_to_var VAR_RESULT, VAR_0x8009
# 29 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157D05
# 30 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 31 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 32 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	special CreateInGameTradePokemon
# 33 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	special DoInGameTradeScene
# 34 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	waitstate
# 35 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M10_Text_08184F6B
# 36 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0099
# 38 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157CFB::
# 43 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M10_Text_08184FC1
# 44 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157D05::
# 50 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	bufferspeciesname 0, 0x8009
# 51 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M10_Text_08184F8F
# 52 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	callstd 4
# 53 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M10_EventScript_Sub_08157D13::
# 58 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M10_Text_08184FDD
# 59 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	callstd 4
# 60 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M10_EventScript_OBJ_EVENT_GFX_HIKER_LocalId2::
# 65 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M10_Text_08185020
# 66 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M10_Text_08184EBA::
# 70 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	.string "Do you nickname your POKéMON?\nI gave a cool name to mine.\pBut when I call my POKéMON by that\nname, people laugh at me...\pIf it’s okay with you, want to trade\nyour {STR_VAR_1} for my {STR_VAR_2}?$"

Naranja_IslaTrovita_G11_M10_Text_08184F6B::
# 74 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	.string "Eheheheh, ooh, this is so exciting!$"

Naranja_IslaTrovita_G11_M10_Text_08184F8F::
# 78 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	.string "But that’s no {STR_VAR_1}.\nTch, that’s so disappointing...$"

Naranja_IslaTrovita_G11_M10_Text_08184FC1::
# 82 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	.string "Aww, it’s a good POKéMON...$"

Naranja_IslaTrovita_G11_M10_Text_08184FDD::
# 86 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	.string "Don’t you get curious about what other\npeople named their POKéMON?$"

Naranja_IslaTrovita_G11_M10_Text_08185020::
# 90 "data/maps/Naranja_IslaTrovita_G11_M10/scripts.pory"
	.string "In all sorts of places, there are all\nsorts of POKéMON and people.\pI find that fascinating, so I go to all\nsorts of places.$"
