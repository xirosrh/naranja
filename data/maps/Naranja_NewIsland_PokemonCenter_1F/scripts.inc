Naranja_NewIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NewIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_NewIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 0xA
	end


Naranja_NewIsland_PokemonCenter_1F_EventScript_Gentleman::
# 14 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	lock
# 15 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 17 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_PokemonCenter_1F_EventScript_Sub_0815B1C6
# 18 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0081
# 19 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_PokemonCenter_1F_EventScript_Sub_0815B1C6
# 20 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_NewIsland_PokemonCenter_1F_Text_0818F770, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_NewIsland_PokemonCenter_1F_EventScript_Sub_0815B1C6::
# 26 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_NewIsland_PokemonCenter_1F_Text_0818F6A2, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_NewIsland_PokemonCenter_1F_EventScript_Woman7::
# 32 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 35 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_PokemonCenter_1F_EventScript_Sub_0815B1EE
# 36 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0081
# 37 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_PokemonCenter_1F_EventScript_Sub_0815B1EE
# 38 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_NewIsland_PokemonCenter_1F_Text_0818F860, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_NewIsland_PokemonCenter_1F_EventScript_Sub_0815B1EE::
# 44 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_NewIsland_PokemonCenter_1F_Text_0818F7EA, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_NewIsland_PokemonCenter_1F_EventScript_Nurse::
# 50 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 51 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 52 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 53 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 54 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_NewIsland_PokemonCenter_1F_Text_0818F6A2::
# 58 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	.string "WALLACE, this town’s GYM LEADER, is a\npowerful TRAINER.\pHe’s rumored to be the best in the\nwhole HOENN region.\pBut the ELITE FOUR...\pThey’re said to be even stronger than\nWALLACE. How strong could they be?$"

Naranja_NewIsland_PokemonCenter_1F_Text_0818F770::
# 62 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	.string "Everyone in town has taken refuge\nand won’t come out of their homes.\pThis weather..\nCould it be the prelude to something?$"

Naranja_NewIsland_PokemonCenter_1F_Text_0818F7EA::
# 66 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	.string "Whenever, wherever, and whatever\nhappens, I will always be friends with\lPOKéMON.\pBecause it’s fun to be with POKéMON!$"

Naranja_NewIsland_PokemonCenter_1F_Text_0818F860::
# 70 "data/maps/Naranja_NewIsland_PokemonCenter_1F/scripts.pory"
	.string "I don’t know why...\nBut... I’m really scared...$"
