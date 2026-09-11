Naranja_SouthernIsland_G26_M09_MapScripts::
# 5 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SouthernIsland_G26_M09_OnTransition
	.byte 0


Naranja_SouthernIsland_G26_M09_OnTransition::
# 9 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	setflag FLAG_NARANJA_SOUTHERN_ISLAND_EVENT_COMPLETE_0849
	end


Naranja_SouthernIsland_G26_M09_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId1::
# 14 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	lock
# 15 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	loadword 0, Naranja_SouthernIsland_G26_M09_Text_081C5215
# 17 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	callstd 5
# 18 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	goto_if EQUAL, Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B25
# 20 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	loadword 0, Naranja_SouthernIsland_G26_M09_Text_081C5281
# 21 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	closemessage
# 23 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 24 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	delay 0x1E
# 26 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	hideobjectat LOCALID_SOUTHERN_ISLAND_G26_M09_SAILOR, MAP_NARANJA_SOUTHERN_ISLAND_G26_M09
# 27 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	setvar VAR_0x8004, 2
# 28 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call Naranja_SouthernIsland_G26_M09_EventScript_Sub_081A047C
# 29 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M10, 0xFF, 8, 0xB
# 30 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitstate
# 31 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	release
	end


Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B25::
# 36 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	loadword 0, Naranja_SouthernIsland_G26_M09_Text_081C52A6
# 37 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	release
	end


Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B2F::
# 43 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SouthernIsland_G26_M09_Movement_08160B45
# 44 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B3A::
# 49 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SouthernIsland_G26_M09_Movement_08160B47
# 50 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SouthernIsland_G26_M09_EventScript_Sign_1::
# 55 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	loadword 0, Naranja_SouthernIsland_G26_M09_Text_081C52FB
# 56 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	callstd 3
	end


Naranja_SouthernIsland_G26_M09_EventScript_Sub_081A047C::
# 61 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 62 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B2F
# 63 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 64 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B3A
# 65 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	delay 0x1E
# 66 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 67 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E
	return


# 71 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
Naranja_SouthernIsland_G26_M09_Movement_08160B45:
# 72 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
Naranja_SouthernIsland_G26_M09_Movement_08160B47:
# 76 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	walk_left
# 77 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_SouthernIsland_G26_M09_Text_081C5215::
# 80 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "Aye, mate, there’s nothing here to\nsee or do on this forgettable island.\pWhat say we sail back to LILYCOVE?$"

Naranja_SouthernIsland_G26_M09_Text_081C5281::
# 84 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "Aye, right, then!\nSail home we will!$"

Naranja_SouthernIsland_G26_M09_Text_081C52A6::
# 88 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "Aye, right, as you like, then.$"

Naranja_SouthernIsland_G26_M09_Text_081C52FB::
# 92 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "“Those whose memories fade seek to\ncarve them in their hearts...”$"
