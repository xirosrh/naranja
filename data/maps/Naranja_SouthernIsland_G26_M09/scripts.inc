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
	msgbox Naranja_SouthernIsland_G26_M09_Text_081C5215, MSGBOX_YESNO
# 17 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	goto_if EQUAL, Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B25
# 19 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	msgbox Naranja_SouthernIsland_G26_M09_Text_081C5281, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	closemessage
# 21 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 22 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	delay 0x1E
# 24 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	hideobjectat LOCALID_SOUTHERN_ISLAND_G26_M09_SAILOR, MAP_NARANJA_SOUTHERN_ISLAND_G26_M09
# 25 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	setvar VAR_0x8004, 2
# 26 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call Naranja_SouthernIsland_G26_M09_EventScript_Sub_081A047C
# 27 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M10, 0xFF, 8, 0xB
# 28 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitstate
# 29 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	release
	end


Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B25::
# 34 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	msgbox Naranja_SouthernIsland_G26_M09_Text_081C52A6, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	release
	end


Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B2F::
# 40 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SouthernIsland_G26_M09_Movement_08160B45
# 41 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B3A::
# 46 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SouthernIsland_G26_M09_Movement_08160B47
# 47 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SouthernIsland_G26_M09_EventScript_Sign_1::
# 52 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	msgbox Naranja_SouthernIsland_G26_M09_Text_081C52FB, MSGBOX_SIGN
	end


Naranja_SouthernIsland_G26_M09_EventScript_Sub_081A047C::
# 57 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 58 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B2F
# 59 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 60 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_G26_M09_EventScript_Sub_08160B3A
# 61 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	delay 0x1E
# 62 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 63 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E
	return


# 67 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
Naranja_SouthernIsland_G26_M09_Movement_08160B45:
# 68 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
Naranja_SouthernIsland_G26_M09_Movement_08160B47:
# 72 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	walk_left
# 73 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_SouthernIsland_G26_M09_Text_081C5215::
# 76 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "Aye, mate, there’s nothing here to\nsee or do on this forgettable island.\pWhat say we sail back to LILYCOVE?$"

Naranja_SouthernIsland_G26_M09_Text_081C5281::
# 80 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "Aye, right, then!\nSail home we will!$"

Naranja_SouthernIsland_G26_M09_Text_081C52A6::
# 84 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "Aye, right, as you like, then.$"

Naranja_SouthernIsland_G26_M09_Text_081C52FB::
# 88 "data/maps/Naranja_SouthernIsland_G26_M09/scripts.pory"
	.string "“Those whose memories fade seek to\ncarve them in their hearts...”$"
