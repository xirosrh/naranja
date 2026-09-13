Naranja_SevenGrapefruitIslands_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SevenGrapefruitIslands_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	setrespawn 0xF
# 10 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B
	end


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Woman2::
# 24 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_08174CDB, MSGBOX_NPC
	end


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Man4::
# 29 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_08174D32, MSGBOX_NPC
	end


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B::
# 34 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MIKAN_ISLAND_G00_M20_WALLY
# 35 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_HamlinIsland_House2_EventScript_Sub_081A14DC
# 36 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 37 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_HamlinIsland_House2_EventScript_Sub_081A14DC
# 38 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_ORANGE_ISLANDS_G00_M19_SPIN_CUSHION
# 39 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD49
# 40 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_SEVEN_GRAPEFRUIT_ISLANDS_OLD_MAN_1
# 41 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD4F
# 42 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_ROUTE109_OLD_MAN_1
# 43 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD55
	return


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD49::
# 48 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	setvar VAR_NARANJA_FERRY_DESTINATION, 1
	return


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD4F::
# 53 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	setvar VAR_NARANJA_FERRY_DESTINATION, 2
	return


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD55::
# 58 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	setvar VAR_NARANJA_FERRY_DESTINATION, 3
	return


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B::
# 63 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	lock
# 64 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	faceplayer
# 65 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_081A0A7D, MSGBOX_YESNO
# 66 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 67 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_PokemonCenter_1F_EventScript_Sub_086B8F00
# 68 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 69 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FDC7
	end


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FDC7::
# 74 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	message Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_081A0AFA
# 75 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	waitmessage
	return


Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_08174CDB::
# 79 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	.string "There’s a stone cavern at the edge\nof town.\pI’ve heard you can find rare stones\nthere.$"

Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_08174D32::
# 83 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	.string "Even if a POKéMON faints and can’t\nbattle, it can still use a move learned\lfrom a Hidden Machine, HM.$"

Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_081A0A7D::
# 87 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	.string "¡ Muy buenos días ! \nGracias por volver a este Pokecentro.\lLe atiende la enfermera JOY.\p¿Quieres que te curemos tus Pokemon?$"

Naranja_SevenGrapefruitIslands_PokemonCenter_1F_Text_081A0AFA::
# 91 "data/maps/Naranja_SevenGrapefruitIslands_PokemonCenter_1F/scripts.pory"
	.string "¡ Adiós {PLAYER} !$"
