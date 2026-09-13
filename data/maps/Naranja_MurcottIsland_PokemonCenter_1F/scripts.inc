Naranja_MurcottIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MurcottIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_MurcottIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 4
# 10 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B
	end


Naranja_MurcottIsland_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonCenter_1F_EventScript_Sailor::
# 24 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonCenter_1F_Text_08180602, MSGBOX_NPC
	end


Naranja_MurcottIsland_PokemonCenter_1F_EventScript_Woman7::
# 29 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonCenter_1F_Text_081806CB, MSGBOX_NPC
	end


Naranja_MurcottIsland_PokemonCenter_1F_Text_08180602::
# 33 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\pI’d say it’s raising different kinds\nof POKéMON in a balanced manner.\pIt’s no good to make just one\nPOKéMON strong.\pIf it has a type disadvantage, it\nmight not stand a chance.$"

Naranja_MurcottIsland_PokemonCenter_1F_Text_081806CB::
# 37 "data/maps/Naranja_MurcottIsland_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\pIf a traded POKéMON is holding an\nitem, it makes me twice as happy!$"
