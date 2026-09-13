Naranja_TrovitaIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TrovitaIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_TrovitaIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 6
# 10 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B
	end


Naranja_TrovitaIsland_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_PokemonCenter_1F_EventScript_Man1::
# 24 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_TrovitaIsland_PokemonCenter_1F_Text_08184B37, MSGBOX_NPC
	end


Naranja_TrovitaIsland_PokemonCenter_1F_EventScript_Boy1::
# 29 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_TrovitaIsland_PokemonCenter_1F_Text_08184BAB, MSGBOX_NPC
	end


Naranja_TrovitaIsland_PokemonCenter_1F_EventScript_Girl3::
# 34 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_TrovitaIsland_PokemonCenter_1F_Text_08184C19, MSGBOX_NPC
	end


Naranja_TrovitaIsland_PokemonCenter_1F_Text_08184B37::
# 38 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\nfriend’s has a JOLLY nature.\pIt’s fascinating how POKéMON have\npersonalities!$"

Naranja_TrovitaIsland_PokemonCenter_1F_Text_08184BAB::
# 42 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\nfemale POKéMON.\pBut no one seems to have any idea how\nthey’re different.$"

Naranja_TrovitaIsland_PokemonCenter_1F_Text_08184C19::
# 46 "data/maps/Naranja_TrovitaIsland_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\pI used it to teach my POKéMON how to\nCUT down skinny trees.$"
