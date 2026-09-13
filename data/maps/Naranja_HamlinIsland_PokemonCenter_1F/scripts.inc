Naranja_HamlinIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_HamlinIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_HamlinIsland_PokemonCenter_1F_EventScript_Nurse::
# 9 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 10 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 11 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 13 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_HamlinIsland_PokemonCenter_1F_OnTransition::
# 18 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 0x13
	end


Naranja_HamlinIsland_PokemonCenter_1F_EventScript_Girl2::
# 23 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_HamlinIsland_PokemonCenter_1F_Text_08178E47, MSGBOX_NPC
	end


Naranja_HamlinIsland_PokemonCenter_1F_EventScript_Woman1::
# 28 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_HamlinIsland_PokemonCenter_1F_Text_08178E79, MSGBOX_NPC
	end


Naranja_HamlinIsland_PokemonCenter_1F_EventScript_OldMan2::
# 33 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_HamlinIsland_PokemonCenter_1F_Text_08178ED9, MSGBOX_NPC
	end


Naranja_HamlinIsland_PokemonCenter_1F_Text_08178E47::
# 37 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	.string "What color is your TRAINER’S CARD?\nMine’s copper!$"

Naranja_HamlinIsland_PokemonCenter_1F_Text_08178E79::
# 41 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	.string "PACIFIDLOG TOWN floats on top of\na colony of CORSOLA.\pIf I told you that, would you believe me?$"

Naranja_HamlinIsland_PokemonCenter_1F_Text_08178ED9::
# 45 "data/maps/Naranja_HamlinIsland_PokemonCenter_1F/scripts.pory"
	.string "The ancestors of the people in\nPACIFIDLOG were said to have been\lborn on boats and then lived and died \laboard them.\pI understand that they lived that way\nbecause they were searching for\lsomething.$"
