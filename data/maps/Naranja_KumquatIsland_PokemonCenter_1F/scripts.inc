Naranja_KumquatIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_KumquatIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_KumquatIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 8
	end


Naranja_KumquatIsland_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 16 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonCenter_1F_EventScript_Boy1::
# 23 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonCenter_1F_Text_08189FC9, MSGBOX_NPC
	end


Naranja_KumquatIsland_PokemonCenter_1F_EventScript_Maniac::
# 28 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_080D
# 31 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonCenter_1F_EventScript_Sub_0815935D
# 32 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonCenter_1F_Text_0818A048, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonCenter_1F_EventScript_Sub_0815935D::
# 38 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonCenter_1F_Text_0818A0A1, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonCenter_1F_Text_08189FC9::
# 43 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	.string "I wonder how many kinds of POKéMON\nthere are in the world?\pIt’d be great to cross seas and\ntrade POKéMON with people far away.$"

Naranja_KumquatIsland_PokemonCenter_1F_Text_0818A048::
# 47 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	.string "I’ve been hearing about some rotten\nscoundrels who steal POKéMON and rip\loff METEORITES.$"

Naranja_KumquatIsland_PokemonCenter_1F_Text_0818A0A1::
# 51 "data/maps/Naranja_KumquatIsland_PokemonCenter_1F/scripts.pory"
	.string "Those rotten scoundrels who steal\nPOKéMON and rip off METEORITES...\pI haven’t seen them around recently.$"
