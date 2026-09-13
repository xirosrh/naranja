Naranja_ShamoutiIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ShamoutiIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_ShamoutiIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 7
	end


Naranja_ShamoutiIsland_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 16 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_ShamoutiIsland_PokemonCenter_1F_Text_08186027, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_PokemonCenter_1F_EventScript_Man4::
# 28 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_ShamoutiIsland_PokemonCenter_1F_Text_08186086, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_PokemonCenter_1F_EventScript_Boy3::
# 33 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_ShamoutiIsland_PokemonCenter_1F_Text_08186138, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_PokemonCenter_1F_Text_08186027::
# 37 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\non a POKéDEX?\pHmm... Go to the SAFARI ZONE.\nThat’s my suggestion.$"

Naranja_ShamoutiIsland_PokemonCenter_1F_Text_08186086::
# 41 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at the\nRECORD CORNER?\pIt’s pretty neat. It mixes and matches\nthe records of TRAINERS.\pI don’t know quite how it works,\nbut it’s cool. It’s exciting, even!$"

Naranja_ShamoutiIsland_PokemonCenter_1F_Text_08186138::
# 45 "data/maps/Naranja_ShamoutiIsland_PokemonCenter_1F/scripts.pory"
	.string "Hey, you’ve got a POKéNAV!\nIt’s the same as mine.\pCheck out the TRAINER’S EYES on it.\pIt shows you TRAINERS who want a\nrematch with you.\pIsn’t it great?\nYou have to hand it to DEVON!$"
