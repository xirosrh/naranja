Naranja_PummeloIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PummeloIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_PummeloIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_PummeloIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 0xB
	end


Naranja_PummeloIsland_PokemonCenter_1F_EventScript_Woman7::
# 14 "data/maps/Naranja_PummeloIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_PummeloIsland_PokemonCenter_1F_Text_08191967, MSGBOX_NPC
	end


Naranja_PummeloIsland_PokemonCenter_1F_EventScript_OldMan1::
# 19 "data/maps/Naranja_PummeloIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_PummeloIsland_PokemonCenter_1F_Text_081919EF, MSGBOX_NPC
	end


Naranja_PummeloIsland_PokemonCenter_1F_Text_08191967::
# 23 "data/maps/Naranja_PummeloIsland_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON LEAGUE is only a short\ndistance after the VICTORY ROAD.\pIf you’ve come this far, what choice\ndo you have but to keep going?$"

Naranja_PummeloIsland_PokemonCenter_1F_Text_081919EF::
# 27 "data/maps/Naranja_PummeloIsland_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD...\pIt’s like reliving the path one has\ntraveled in life...\pBelieve in your POKéMON and give it\nyour very best!$"
