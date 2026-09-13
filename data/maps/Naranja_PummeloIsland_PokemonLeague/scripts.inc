Naranja_PummeloIsland_PokemonLeague_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PummeloIsland_PokemonLeague_OnTransition
	.byte 0


Naranja_PummeloIsland_PokemonLeague_OnTransition::
# 9 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	setrespawn 0x14
# 10 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	setflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_0854
# 11 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_0107
# 12 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	call_if LESS_THAN, Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BA8B
	end


Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BA8B::
# 17 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_PUMMELO_ISLAND_POKEMON_LEAGUE_MAN_4, 9, 2
# 18 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_PUMMELO_ISLAND_POKEMON_LEAGUE_MAN_4_2, 0xA, 2
	return


Naranja_PummeloIsland_PokemonLeague_EventScript_Nurse::
# 23 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	setvar VAR_0x800B, 1
# 24 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 25 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmessage
# 26 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitbuttonpress
# 27 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	release
	end


Naranja_PummeloIsland_PokemonLeague_EventScript_MartEmployee::
# 32 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	lock
# 33 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 35 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmessage
# 36 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	pokemart Naranja_PummeloIsland_PokemonLeague_Mart_0815BAC0
# 37 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	release
	end


Naranja_PummeloIsland_PokemonLeague_EventScript_Man4::
# 43 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	lockall
# 44 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_0107
# 45 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	goto_if EQUAL, Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB57
# 46 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 47 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0xB
# 48 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	call_if GREATER_THAN_OR_EQUAL, Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB34
# 49 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 8
# 50 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	call_if LESS_THAN_OR_EQUAL, Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB3F
# 51 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	message Naranja_PummeloIsland_PokemonLeague_Text_081916FD
# 52 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmessage
# 53 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	delay 0x4B
# 54 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 55 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	goto_if LESS_THAN, Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB4A
# 56 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	closemessage
# 57 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_POKEMON_LEAGUE_MAN_4, Naranja_PummeloIsland_PokemonLeague_Movement_0815BB7E
# 58 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_POKEMON_LEAGUE_MAN_4_2, Naranja_PummeloIsland_PokemonLeague_Movement_0815BB81
# 59 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	delay 0xA
# 61 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 62 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	message Naranja_PummeloIsland_PokemonLeague_Text_08191804
# 63 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmessage
# 64 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitfanfare
# 65 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	closemessage
# 66 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	copyobjectxytoperm LOCALID_NARANJA_PUMMELO_ISLAND_POKEMON_LEAGUE_MAN_4
# 67 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	copyobjectxytoperm LOCALID_NARANJA_PUMMELO_ISLAND_POKEMON_LEAGUE_MAN_4_2
# 68 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	setflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_0107
# 69 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	releaseall
	end


Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB34::
# 74 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PummeloIsland_PokemonLeague_Movement_0815BB76
# 75 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB3F::
# 80 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PummeloIsland_PokemonLeague_Movement_0815BB7A
# 81 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB4A::
# 86 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	playse SE_FAILURE
# 87 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	msgbox Naranja_PummeloIsland_PokemonLeague_Text_0819179C, MSGBOX_DEFAULT
# 88 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	releaseall
	end


Naranja_PummeloIsland_PokemonLeague_EventScript_Sub_0815BB57::
# 93 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	applymovement 32783, Naranja_KumquatIsland_Movement_081A0839
# 94 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmovement LOCALID_NONE
# 95 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	msgbox Naranja_PummeloIsland_PokemonLeague_Text_08191804, MSGBOX_DEFAULT
# 96 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	closemessage
# 97 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	applymovement 32783, Naranja_RusturfTunnel_Movement_081A083D
# 98 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	releaseall
	end


# 103 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
Naranja_PummeloIsland_PokemonLeague_Movement_0815BB76:
# 104 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_down
# 105 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_left
# 106 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_in_place_faster_up
	step_end

# 109 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
Naranja_PummeloIsland_PokemonLeague_Movement_0815BB7A:
# 110 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_down
# 111 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_right
# 112 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_in_place_faster_up
	step_end

# 115 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
Naranja_PummeloIsland_PokemonLeague_Movement_0815BB7E:
# 116 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_left
# 117 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_in_place_faster_down
	step_end

# 120 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
Naranja_PummeloIsland_PokemonLeague_Movement_0815BB81:
# 121 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_right
# 122 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	walk_in_place_faster_down
	step_end

	.align 2
# 125 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
Naranja_PummeloIsland_PokemonLeague_Mart_0815BAC0:
# 126 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 127 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 128 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_MAX_POTION
# 129 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 130 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 131 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_REVIVE
# 132 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

Naranja_PummeloIsland_PokemonLeague_Text_081916FD::
# 135 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.string "Beyond this point, only those TRAINERS\nwho have collected all the GYM BADGES\lare permitted to enter.\pTRAINER, let us confirm that you have\nall the GYM BADGES.$"

Naranja_PummeloIsland_PokemonLeague_Text_0819179C::
# 139 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.string "You haven’t obtained all the BADGES.\pIf you’re bound for the POKéMON\nLEAGUE, you must return with them.$"

Naranja_PummeloIsland_PokemonLeague_Text_08191804::
# 143 "data/maps/Naranja_PummeloIsland_PokemonLeague/scripts.pory"
	.string "TRAINER! Believe in yourself and your\nPOKéMON, and go forth!$"
