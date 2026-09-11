Naranja_Route112_G19_M00_MapScripts::
# 5 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route112_G19_M00_OnTransition
# 6 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route112_G19_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route112_G19_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE112_STORY_STATE, 2, Naranja_Route112_G19_M00_OnFrame_1
	.2byte 0


Naranja_Route112_G19_M00_OnTransition::
# 12 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setescapewarp MAP_NARANJA_ROUTE_112_G00_M27, 0xFF, 0x1C, 0x1C
# 13 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE112_STORY_STATE, 2
# 14 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	call_if EQUAL, Naranja_Route112_G19_M00_EventScript_Sub_0815C052
	end


Naranja_Route112_G19_M00_EventScript_Sub_0815C052::
# 19 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_G19_M00_BEAUTY, 7, 4
# 20 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_G19_M00_BEAUTY, 9
	return


Naranja_Route112_G19_M00_OnFrame_1::
# 25 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	lockall
# 26 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route112_G19_M00_Movement_0815C0F5
# 27 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	applymovement LOCALID_ROUTE112_G19_M00_BEAUTY, Naranja_Route112_G19_M00_Movement_0815C0EB
# 28 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_STORY_STATE, 0
# 30 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_G19_M00_BEAUTY, 6, 7
# 31 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_G19_M00_BEAUTY, 8
# 32 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	releaseall
	end


Naranja_Route112_G19_M00_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 37 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	lock
# 38 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	faceplayer
# 39 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	loadword 0, Naranja_Route112_G19_M00_Text_081924F5
# 40 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	callstd 5
# 41 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 42 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route112_G19_M00_EventScript_Sub_0815C0AD
# 43 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 44 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route112_G19_M00_EventScript_Sub_0815C0DC
	end


Naranja_Route112_G19_M00_EventScript_Sub_0815C0AD::
# 49 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	loadword 0, Naranja_MtChimney_G19_M01_Text_081925A9
# 50 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	closemessage
# 52 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	applymovement LOCALID_ROUTE112_G19_M00_BEAUTY, Naranja_Route112_G19_M00_Movement_0815C0E6
# 53 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route112_G19_M00_Movement_0815C0F0
# 54 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 55 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 56 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_STORY_STATE, 1
# 57 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	incrementgamestat 0x30
# 58 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	special CableCarWarp
# 59 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	special CableCar
# 60 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	waitstate
# 61 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	release
	end


Naranja_Route112_G19_M00_EventScript_Sub_0815C0DC::
# 66 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	loadword 0, Naranja_Route112_G19_M00_Text_08192548
# 67 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	callstd 4
# 68 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	release
	end


# 72 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
Naranja_Route112_G19_M00_Movement_0815C0E6:
# 73 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_up
# 74 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_up
# 75 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_right
# 76 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_in_place_faster_left
	step_end

# 79 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
Naranja_Route112_G19_M00_Movement_0815C0EB:
# 80 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	delay_16
# 81 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_left
# 82 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_down
# 83 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
Naranja_Route112_G19_M00_Movement_0815C0F0:
# 87 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_up
# 88 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_up
# 89 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_up
# 90 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	delay_16
	step_end

# 93 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
Naranja_Route112_G19_M00_Movement_0815C0F5:
# 94 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_down
# 95 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_down
# 96 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	walk_down
# 97 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	delay_16
	step_end

Naranja_Route112_G19_M00_Text_081924F5::
# 100 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	.string "The CABLE CAR is ready to go up.\nWould you like to be on it?$"

Naranja_Route112_G19_M00_Text_08192548::
# 104 "data/maps/Naranja_Route112_G19_M00/scripts.pory"
	.string "Please ride with us another time.$"
