Naranja_IslaShamouti_G12_M00_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M00_EventScript_OBJ_EVENT_GFX_WOMAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_009B
# 11 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157EAD
# 12 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	setvar VAR_0x8008, 1
# 13 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_0818568C
# 17 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 5
# 18 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E95
# 20 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	special ChoosePartyMon
# 21 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitstate
# 22 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 23 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 24 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E95
# 25 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 26 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 27 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 28 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	compare_var_to_var VAR_RESULT, VAR_0x8009
# 29 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E9F
# 30 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 31 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 32 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	special CreateInGameTradePokemon
# 33 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	special DoInGameTradeScene
# 34 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitstate
# 35 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	bufferspeciesname 0, 0x8009
# 36 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_081856F7
# 37 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_009B
# 39 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E95::
# 44 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_0818577F
# 45 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E9F::
# 51 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	bufferspeciesname 0, 0x8009
# 52 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_08185737
# 53 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157EAD::
# 59 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_081857C7
# 60 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 66 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_0818582A
# 67 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M00_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId2::
# 72 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	lock
# 73 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	faceplayer
# 74 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitse
# 75 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 76 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M00_Text_08185888
# 77 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	callstd 4
# 78 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitmoncry
# 79 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_Text_0818568C::
# 83 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Hi, there’s this POKéMON that I’m\nlooking for.\pI want a {STR_VAR_1}.\nDo you have one?\pWould you trade it for my {STR_VAR_2}?$"

Naranja_IslaShamouti_G12_M00_Text_081856F7::
# 87 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Thank you!\pI’ll be good to your {STR_VAR_1},\nso please be nice to my {STR_VAR_2}!$"

Naranja_IslaShamouti_G12_M00_Text_08185737::
# 91 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Wait!\nThat POKéMON isn’t a {STR_VAR_1}.\pI guess you don’t want to trade\nwith me.$"

Naranja_IslaShamouti_G12_M00_Text_0818577F::
# 95 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Oh, okay. If you change your mind,\nplease come see me.\pI’ll be waiting!$"

Naranja_IslaShamouti_G12_M00_Text_081857C7::
# 99 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Thank you for trading with me!\pI really wanted this POKéMON, so\nI promise to take good care of it!$"

Naranja_IslaShamouti_G12_M00_Text_0818582A::
# 103 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Trading POKéMON with others...\pIt’s as if you’re trading your own\nmemories with other people.$"

Naranja_IslaShamouti_G12_M00_Text_08185888::
# 107 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"
