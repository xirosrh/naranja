Naranja_CharicificValley_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CharicificValley_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_CharicificValley_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	setrespawn 0x10
# 10 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B
	end


Naranja_CharicificValley_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_CharicificValley_PokemonCenter_1F_EventScript_Youngster::
# 24 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_CharicificValley_PokemonCenter_1F_Text_08176F08, MSGBOX_NPC
	end


Naranja_CharicificValley_PokemonCenter_1F_EventScript_Woman4::
# 29 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_CharicificValley_PokemonCenter_1F_Text_08176E92, MSGBOX_NPC
	end


Naranja_CharicificValley_PokemonCenter_1F_EventScript_Gentleman::
# 34 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_CharicificValley_PokemonCenter_1F_Text_08176F7A, MSGBOX_NPC
	end


Naranja_CharicificValley_PokemonCenter_1F_Text_08176E92::
# 38 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\nTRAINERS if they spend time together.\pThe longer the better.\nThat’s what I think.$"

Naranja_CharicificValley_PokemonCenter_1F_Text_08176F08::
# 42 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	.string "I gave a RED オカキクケ to my POKéMON.\nIt looks a lot cooler all of a sudden.\pHmm...\nMaybe I ought to eat a RED オカキクケ.$"

Naranja_CharicificValley_PokemonCenter_1F_Text_08176F7A::
# 46 "data/maps/Naranja_CharicificValley_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\nthe hot springs from here.\pIf POKéMON are getting rest, so too\nshould their TRAINERS.$"
