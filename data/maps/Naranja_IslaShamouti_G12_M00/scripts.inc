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
	msgbox Naranja_IslaShamouti_G12_M00_Text_0818568C, MSGBOX_YESNO
# 17 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E95
# 19 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	special ChoosePartyMon
# 20 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitstate
# 21 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 22 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 23 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E95
# 24 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 26 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 27 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	compare_var_to_var VAR_RESULT, VAR_0x8009
# 28 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E9F
# 29 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 30 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 31 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	special CreateInGameTradePokemon
# 32 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	special DoInGameTradeScene
# 33 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitstate
# 34 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	bufferspeciesname 0, 0x8009
# 35 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M00_Text_081856F7, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_009B
# 37 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E95::
# 42 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M00_Text_0818577F, MSGBOX_DEFAULT
# 43 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157E9F::
# 48 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	bufferspeciesname 0, 0x8009
# 49 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M00_Text_08185737, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_Sub_08157EAD::
# 55 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M00_Text_081857C7, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 61 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M00_Text_0818582A, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M00_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId2::
# 66 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	lock
# 67 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	faceplayer
# 68 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitse
# 69 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 70 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M00_Text_08185888, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	waitmoncry
# 72 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M00_Text_0818568C::
# 76 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Hi, there’s this POKéMON that I’m\nlooking for.\pI want a {STR_VAR_1}.\nDo you have one?\pWould you trade it for my {STR_VAR_2}?$"

Naranja_IslaShamouti_G12_M00_Text_081856F7::
# 80 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Thank you!\pI’ll be good to your {STR_VAR_1},\nso please be nice to my {STR_VAR_2}!$"

Naranja_IslaShamouti_G12_M00_Text_08185737::
# 84 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Wait!\nThat POKéMON isn’t a {STR_VAR_1}.\pI guess you don’t want to trade\nwith me.$"

Naranja_IslaShamouti_G12_M00_Text_0818577F::
# 88 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Oh, okay. If you change your mind,\nplease come see me.\pI’ll be waiting!$"

Naranja_IslaShamouti_G12_M00_Text_081857C7::
# 92 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Thank you for trading with me!\pI really wanted this POKéMON, so\nI promise to take good care of it!$"

Naranja_IslaShamouti_G12_M00_Text_0818582A::
# 96 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "Trading POKéMON with others...\pIt’s as if you’re trading your own\nmemories with other people.$"

Naranja_IslaShamouti_G12_M00_Text_08185888::
# 100 "data/maps/Naranja_IslaShamouti_G12_M00/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"
