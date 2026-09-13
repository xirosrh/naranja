Naranja_TrovitaIsland_House1_MapScripts::
	.byte 0


Naranja_TrovitaIsland_House1_EventScript_LittleBoy1::
# 8 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	lock
# 9 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0099
# 11 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_House1_EventScript_Sub_08157D13
# 12 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	setvar VAR_0x8008, 0
# 13 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	msgbox Naranja_TrovitaIsland_House1_Text_08184EBA, MSGBOX_YESNO
# 17 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_House1_EventScript_Sub_08157CFB
# 19 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	special ChoosePartyMon
# 20 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	waitstate
# 21 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 22 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 23 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_House1_EventScript_Sub_08157CFB
# 24 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 26 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 27 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	compare_var_to_var VAR_RESULT, VAR_0x8009
# 28 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	goto_if NOT_EQUAL, Naranja_TrovitaIsland_House1_EventScript_Sub_08157D05
# 29 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 30 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 31 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	special CreateInGameTradePokemon
# 32 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	special DoInGameTradeScene
# 33 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	waitstate
# 34 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	msgbox Naranja_TrovitaIsland_House1_Text_08184F6B, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0099
# 36 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	release
	end


Naranja_TrovitaIsland_House1_EventScript_Sub_08157CFB::
# 41 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	msgbox Naranja_TrovitaIsland_House1_Text_08184FC1, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	release
	end


Naranja_TrovitaIsland_House1_EventScript_Sub_08157D05::
# 47 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	bufferspeciesname 0, 0x8009
# 48 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	msgbox Naranja_TrovitaIsland_House1_Text_08184F8F, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	release
	end


Naranja_TrovitaIsland_House1_EventScript_Sub_08157D13::
# 54 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	msgbox Naranja_TrovitaIsland_House1_Text_08184FDD, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	release
	end


Naranja_TrovitaIsland_House1_EventScript_Hiker::
# 60 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	msgbox Naranja_TrovitaIsland_House1_Text_08185020, MSGBOX_NPC
	end


Naranja_TrovitaIsland_House1_Text_08184EBA::
# 64 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	.string "Do you nickname your POKéMON?\nI gave a cool name to mine.\pBut when I call my POKéMON by that\nname, people laugh at me...\pIf it’s okay with you, want to trade\nyour {STR_VAR_1} for my {STR_VAR_2}?$"

Naranja_TrovitaIsland_House1_Text_08184F6B::
# 68 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	.string "Eheheheh, ooh, this is so exciting!$"

Naranja_TrovitaIsland_House1_Text_08184F8F::
# 72 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	.string "But that’s no {STR_VAR_1}.\nTch, that’s so disappointing...$"

Naranja_TrovitaIsland_House1_Text_08184FC1::
# 76 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	.string "Aww, it’s a good POKéMON...$"

Naranja_TrovitaIsland_House1_Text_08184FDD::
# 80 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	.string "Don’t you get curious about what other\npeople named their POKéMON?$"

Naranja_TrovitaIsland_House1_Text_08185020::
# 84 "data/maps/Naranja_TrovitaIsland_House1/scripts.pory"
	.string "In all sorts of places, there are all\nsorts of POKéMON and people.\pI find that fascinating, so I go to all\nsorts of places.$"
