Naranja_MandarinIslandSouth_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MandarinIslandSouth_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_MandarinIslandSouth_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	setrespawn 0x12
# 10 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B
	end


Naranja_MandarinIslandSouth_PokemonCenter_1F_EventScript_OldMan1::
# 15 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_PokemonCenter_1F_Text_08178389, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_PokemonCenter_1F_Text_08178D8E, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_PokemonCenter_1F_Text_08178389::
# 24 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	.string "No todos los viejos son sabios,\nni todos los sabios son viejos.\pSin embargo yo sì.\nYo sé todo lo importante.$"

Naranja_MandarinIslandSouth_PokemonCenter_1F_Text_08178D8E::
# 28 "data/maps/Naranja_MandarinIslandSouth_PokemonCenter_1F/scripts.pory"
	.string "¡Che flac{RIVAL}!\p¿Tambien estás de paso?\nEsta ciudad es extraña.\lIncluso atacan SNUBULL en la calle.\pTe aconsejo que te quedes lo m nimo:\nDanny entrena en el Norte\len la nevada Isla NAVEL.$"
