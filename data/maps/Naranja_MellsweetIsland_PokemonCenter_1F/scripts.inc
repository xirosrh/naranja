Naranja_MellsweetIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MellsweetIsland_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_MellsweetIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	setrespawn 9
	end


Naranja_MellsweetIsland_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 16 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MellsweetIsland_PokemonCenter_1F_EventScript_Woman3::
# 23 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MellsweetIsland_PokemonCenter_1F_Text_0818D62F, MSGBOX_NPC
	end


Naranja_MellsweetIsland_PokemonCenter_1F_EventScript_Girl1::
# 28 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MellsweetIsland_PokemonCenter_1F_Text_0818D69A, MSGBOX_NPC
	end


Naranja_MellsweetIsland_PokemonCenter_1F_Text_0818D62F::
# 32 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	.string "The GYM LEADERS in this town are a\nformidable duo.\pTheir combination attacks are, like,\nexcellent and wow!$"

Naranja_MellsweetIsland_PokemonCenter_1F_Text_0818D69A::
# 36 "data/maps/Naranja_MellsweetIsland_PokemonCenter_1F/scripts.pory"
	.string "Depending on the special abilities of\nPOKéMON, some moves might change\lor not work at all.$"
