Naranja_PuebloPaleta_G26_M07_MapScripts::
# 5 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_PuebloPaleta_G26_M07_OnLoad
# 6 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuebloPaleta_G26_M07_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PuebloPaleta_G26_M07_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Naranja_PuebloPaleta_G26_M07_OnFrame_1
	.2byte 0


Naranja_PuebloPaleta_G26_M07_OnLoad::
# 12 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	compare_var_to_value VAR_0x8006, 1
# 13 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M07_EventScript_Sub_0816086E
# 14 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	setmetatile 0xC, 0, 0x207, 0
# 15 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	setmetatile 0xC, 1, 0x20F, 0
	end


Naranja_PuebloPaleta_G26_M07_EventScript_Sub_0816086E::
# 20 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	setmetatile 0xF, 0, 0x207, 0
# 21 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	setmetatile 0xF, 1, 0x20F, 0
	end


Naranja_PuebloPaleta_G26_M07_OnFrame_1::
# 26 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	compare_var_to_value VAR_0x8006, 1
# 28 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M07_EventScript_Sub_081608B1
# 29 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M07_TEALA, Naranja_PuebloPaleta_G26_M07_Movement_081608D5
# 30 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M07_Movement_081608D4
# 31 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M07_EventScript_Sub_081608C2
	return


Naranja_PuebloPaleta_G26_M07_EventScript_Sub_081608B1::
# 36 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M07_TEALA, Naranja_PuebloPaleta_G26_M07_Movement_081608D2
# 37 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M07_Movement_081608D1
# 38 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M07_EventScript_Sub_081608C2
	return


Naranja_PuebloPaleta_G26_M07_EventScript_Sub_081608C2::
# 43 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	setvar VAR_TEMP_0, 0
# 44 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M08, 0xFF, 4, 8
# 45 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	waitstate
	end


# 49 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
Naranja_PuebloPaleta_G26_M07_Movement_081608D1:
# 50 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 51 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 52 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 53 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 54 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 55 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 56 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 57 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_up
# 58 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	set_invisible
	step_end

# 61 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
Naranja_PuebloPaleta_G26_M07_Movement_081608D2:
# 62 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 63 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 64 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 65 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 66 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 67 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 68 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_up
# 69 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	set_invisible
	step_end

# 72 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
Naranja_PuebloPaleta_G26_M07_Movement_081608D4:
# 73 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 74 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 75 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 76 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 77 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_up
# 78 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	set_invisible
	step_end

# 81 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
Naranja_PuebloPaleta_G26_M07_Movement_081608D5:
# 82 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 83 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 84 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_right
# 85 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	walk_up
# 86 "data/maps/Naranja_PuebloPaleta_G26_M07/scripts.pory"
	set_invisible
	step_end
