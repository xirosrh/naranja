Naranja_SouthernIsland_Exterior_MapScripts::
# 5 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SouthernIsland_Exterior_OnTransition
	.byte 0


Naranja_SouthernIsland_Exterior_OnTransition::
# 9 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_NARANJA_SOUTHERN_ISLAND_EVENT_COMPLETE_0849
	end


Naranja_SouthernIsland_Exterior_EventScript_Sailor::
# 14 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	lock
# 15 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	msgbox Naranja_SouthernIsland_Exterior_Text_081C5215, MSGBOX_YESNO
# 17 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	goto_if EQUAL, Naranja_SouthernIsland_Exterior_EventScript_Sub_08160B25
# 19 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	msgbox Naranja_SouthernIsland_Exterior_Text_081C5281, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	closemessage
# 21 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 22 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	delay 0x1E
# 24 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_NARANJA_SOUTHERN_ISLAND_EXTERIOR_SAILOR, MAP_NARANJA_SOUTHERN_ISLAND_EXTERIOR
# 25 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 26 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	call Naranja_SouthernIsland_Exterior_EventScript_Sub_081A047C
# 27 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	warp MAP_NARANJA_KUMQUAT_ISLAND_HARBOR, 0xFF, 8, 0xB
# 28 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	waitstate
# 29 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	release
	end


Naranja_SouthernIsland_Exterior_EventScript_Sub_08160B25::
# 34 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	msgbox Naranja_SouthernIsland_Exterior_Text_081C52A6, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	release
	end


Naranja_SouthernIsland_Exterior_EventScript_Sub_08160B2F::
# 40 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SouthernIsland_Exterior_Movement_08160B45
# 41 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SouthernIsland_Exterior_EventScript_Sub_08160B3A::
# 46 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SouthernIsland_Exterior_Movement_08160B47
# 47 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SouthernIsland_Exterior_EventScript_Sign_1::
# 52 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	msgbox Naranja_SouthernIsland_Exterior_Text_081C52FB, MSGBOX_SIGN
	end


Naranja_SouthernIsland_Exterior_EventScript_Sub_081A047C::
# 57 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 58 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_Exterior_EventScript_Sub_08160B2F
# 59 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 60 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_Exterior_EventScript_Sub_08160B3A
# 61 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	delay 0x1E
# 62 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_VALENCIA_ISLAND
# 63 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	call Naranja_KumquatIsland_Harbor_EventScript_Sub_081A040E
	return


# 67 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
Naranja_SouthernIsland_Exterior_Movement_08160B45:
# 68 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
Naranja_SouthernIsland_Exterior_Movement_08160B47:
# 72 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	walk_left
# 73 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_SouthernIsland_Exterior_Text_081C5215::
# 76 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	.string "Aye, mate, there’s nothing here to\nsee or do on this forgettable island.\pWhat say we sail back to LILYCOVE?$"

Naranja_SouthernIsland_Exterior_Text_081C5281::
# 80 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	.string "Aye, right, then!\nSail home we will!$"

Naranja_SouthernIsland_Exterior_Text_081C52A6::
# 84 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	.string "Aye, right, as you like, then.$"

Naranja_SouthernIsland_Exterior_Text_081C52FB::
# 88 "data/maps/Naranja_SouthernIsland_Exterior/scripts.pory"
	.string "“Those whose memories fade seek to\ncarve them in their hearts...”$"
