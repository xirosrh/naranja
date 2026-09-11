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


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_ROXANNE_LocalId2::
# 36 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3B71
# 37 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 2
	end


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_ROXANNE_LocalId3::
# 42 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3BBD
# 43 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 2
	end


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_ROXANNE_LocalId4::
# 48 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3DCE
# 49 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 2
	end


Naranja_Safari_G26_M03_EventScript_OBJ_EVENT_GFX_ROXANNE_LocalId1::
# 54 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	lock
# 55 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	faceplayer
# 56 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 57 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_081600D1
# 58 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3A56
# 59 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 5
# 60 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_081600E0
# 62 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3A9C
# 63 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	release
	end


Naranja_Safari_G26_M03_EventScript_Sub_081600D1::
# 69 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 70 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3B2D
# 71 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	release
	end


Naranja_Safari_G26_M03_EventScript_Sub_081600E0::
# 77 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	loadword 0, Naranja_Safari_G26_M03_Text_081C3ACA
# 78 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	callstd 4
# 79 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	closemessage
# 80 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 81 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 82 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_08160105
# 83 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 84 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto_if EQUAL, Naranja_Safari_G26_M03_EventScript_Sub_0816011F
	end


Naranja_Safari_G26_M03_EventScript_Sub_08160105::
# 89 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_SAFARI_G26_M03_ROXANNE, Naranja_Safari_G26_M03_Movement_08160150
# 90 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 91 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Safari_G26_M03_Movement_0816014B
# 92 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 93 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto Naranja_Safari_G26_M03_EventScript_Sub_08160139
	return


Naranja_Safari_G26_M03_EventScript_Sub_0816011F::
# 97 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_SAFARI_G26_M03_ROXANNE, Naranja_Safari_G26_M03_Movement_08160153
# 98 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Safari_G26_M03_Movement_0816014D
# 100 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 101 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	goto Naranja_Safari_G26_M03_EventScript_Sub_08160139
	return


Naranja_Safari_G26_M03_EventScript_Sub_08160139::
# 105 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	setvar VAR_NARANJA_SAFARI_STORY_STATE, 1
# 106 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	special ExitSafariMode
# 107 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	warpdoor MAP_NARANJA_ROUTE_121_G23_M00, 0xFF, 2, 5
# 108 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	waitstate
	end


# 112 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160087:
# 113 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160089:
# 117 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_right
# 118 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_down
	step_end

# 121 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_0816014B:
# 122 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_up
	step_end

# 125 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_0816014D:
# 126 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_right
# 127 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_up
	step_end

# 130 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160150:
# 131 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_left
# 132 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_right
	step_end

# 135 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
Naranja_Safari_G26_M03_Movement_08160153:
# 136 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_down
# 137 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_Safari_G26_M03_Text_081C3A56::
# 140 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "You still have time left. Would you like\nto exit the SAFARI ZONE now?$"

Naranja_Safari_G26_M03_Text_081C3A9C::
# 144 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Please enjoy the rest of your wild\nadventure!$"

Naranja_Safari_G26_M03_Text_081C3ACA::
# 148 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Okay.\pI’ll take back your remaining SAFARI\nBALLS.\pThank you for playing.\nWe hope to see you again.$"

Naranja_Safari_G26_M03_Text_081C3B2D::
# 152 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Good luck!\pIf you need anything, don’t hesitate\nto tell me, please!$"

Naranja_Safari_G26_M03_Text_081C3B71::
# 156 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "Did you know?\pIf you put a オカキクケ in that square box,\nPOKéMON gather around.$"

Naranja_Safari_G26_M03_Text_081C3BBD::
# 160 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "I want to keep going deeper, but I\nforgot to bring a BIKE.\pSomething tells me that rare POKéMON\nlive in the outlying areas.$"

Naranja_Safari_G26_M03_Text_081C3DCE::
# 164 "data/maps/Naranja_Safari_G26_M03/scripts.pory"
	.string "I put a オカキクケ on the オカキクケ FEEDER.\nBut it seems to have disappeared.\pI guess POKéMON must have eaten it\nwithout me noticing.$"
