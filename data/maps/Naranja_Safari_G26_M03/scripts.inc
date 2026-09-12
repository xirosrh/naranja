Naranja_Safari_G26_M03_MapScripts::
# 5 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Safari_G26_M03_OnTransition
# 6 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Safari_G26_M03_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Safari_G26_M03_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	map_script_2 VAR_NARANJA_SAFARI_STORY_STATE, 2, Naranja_Safari_G26_M03_OnFrame_1
	.2byte 0


Naranja_Safari_G26_M03_OnFrame_1::
# 12 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	lockall
# 13 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 14 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Safari_G26_M03_Movement_08160087
# 15 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 16 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_SAFARI_G26_M03_ROXANNE, Naranja_Safari_G26_M03_Movement_08160089
# 17 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 18 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_G26_M03_ROXANNE, 0x20, 0x22
# 19 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setvar VAR_NARANJA_SAFARI_STORY_STATE, 0
# 20 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	releaseall
	end


Naranja_Safari_G26_M03_OnTransition::
# 25 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_SAFARI_STORY_STATE, 2
# 26 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	call_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_0816007F
	end


Naranja_Safari_G26_M03_EventScript_Sub_0816007F::
# 31 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_G26_M03_ROXANNE, 0x1F, 0x22
	return


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_HERACROSS_LocalId2::
# 36 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3B71, MSGBOX_NPC
	end


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_HERACROSS_LocalId3::
# 41 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3BBD, MSGBOX_NPC
	end


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_HERACROSS_LocalId4::
# 46 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3DCE, MSGBOX_NPC
	end


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_HERACROSS_LocalId1::
# 51 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	lock
# 52 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	faceplayer
# 53 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 54 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_081600D1
# 55 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3A56, MSGBOX_YESNO
# 56 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 57 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_081600E0
# 58 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3A9C, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	release
	end


Naranja_Safari_G26_M03_EventScript_Sub_081600D1::
# 64 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3B2D, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	release
	end


Naranja_Safari_G26_M03_EventScript_Sub_081600E0::
# 71 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	msgbox Naranja_Safari_G26_M03_Text_081C3ACA, MSGBOX_DEFAULT
# 72 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	closemessage
# 73 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 74 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 75 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_08160105
# 76 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 77 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_0816011F
	end


Naranja_Safari_G26_M03_EventScript_Sub_08160105::
# 82 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_SAFARI_G26_M03_ROXANNE, Naranja_Safari_G26_M03_Movement_08160150
# 83 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Safari_G26_M03_Movement_0816014B
# 85 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto Naranja_Safari_G26_M03_EventScript_Sub_08160139
	return


Naranja_Safari_G26_M03_EventScript_Sub_0816011F::
# 90 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_SAFARI_G26_M03_ROXANNE, Naranja_Safari_G26_M03_Movement_08160153
# 91 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 92 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Safari_G26_M03_Movement_0816014D
# 93 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 94 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto Naranja_Safari_G26_M03_EventScript_Sub_08160139
	return


Naranja_Safari_G26_M03_EventScript_Sub_08160139::
# 98 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setvar VAR_NARANJA_SAFARI_STORY_STATE, 1
# 99 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	special ExitSafariMode
# 100 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	warpdoor MAP_NARANJA_ROUTE_121_G23_M00, 0xFF, 2, 5
# 101 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitstate
	end


# 105 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160087:
# 106 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160089:
# 110 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_right
# 111 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_down
	step_end

# 114 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_0816014B:
# 115 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_0816014D:
# 119 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_right
# 120 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_up
	step_end

# 123 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160150:
# 124 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_left
# 125 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_right
	step_end

# 128 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160153:
# 129 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_down
# 130 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_Safari_G26_M03_Text_081C3A56::
# 133 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "You still have time left. Would you like\nto exit the SAFARI ZONE now?$"

Naranja_Safari_G26_M03_Text_081C3A9C::
# 137 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Please enjoy the rest of your wild\nadventure!$"

Naranja_Safari_G26_M03_Text_081C3ACA::
# 141 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Okay.\pI’ll take back your remaining SAFARI\nBALLS.\pThank you for playing.\nWe hope to see you again.$"

Naranja_Safari_G26_M03_Text_081C3B2D::
# 145 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Good luck!\pIf you need anything, don’t hesitate\nto tell me, please!$"

Naranja_Safari_G26_M03_Text_081C3B71::
# 149 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Did you know?\pIf you put a オカキクケ in that square box,\nPOKéMON gather around.$"

Naranja_Safari_G26_M03_Text_081C3BBD::
# 153 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "I want to keep going deeper, but I\nforgot to bring a BIKE.\pSomething tells me that rare POKéMON\nlive in the outlying areas.$"

Naranja_Safari_G26_M03_Text_081C3DCE::
# 157 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "I put a オカキクケ on the オカキクケ FEEDER.\nBut it seems to have disappeared.\pI guess POKéMON must have eaten it\nwithout me noticing.$"
