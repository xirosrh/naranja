Naranja_Route112_CableCarStation_MapScripts::
# 5 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route112_CableCarStation_OnTransition
# 6 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE112_STORY_STATE, 2, Naranja_Route112_CableCarStation_OnFrame_1
	.2byte 0


Naranja_Route112_CableCarStation_OnTransition::
# 12 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_NARANJA_ROUTE112, 0xFF, 0x1C, 0x1C
# 13 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE112_STORY_STATE, 2
# 14 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	call_if EQUAL, Naranja_Route112_CableCarStation_EventScript_Sub_0815C052
	end


Naranja_Route112_CableCarStation_EventScript_Sub_0815C052::
# 19 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ROUTE112_CABLE_CAR_STATION_BEAUTY, 7, 4
# 20 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ROUTE112_CABLE_CAR_STATION_BEAUTY, 9
	return


Naranja_Route112_CableCarStation_OnFrame_1::
# 25 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	lockall
# 26 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route112_CableCarStation_Movement_0815C0F5
# 27 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE112_CABLE_CAR_STATION_BEAUTY, Naranja_Route112_CableCarStation_Movement_0815C0EB
# 28 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_STORY_STATE, 0
# 30 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ROUTE112_CABLE_CAR_STATION_BEAUTY, 6, 7
# 31 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ROUTE112_CABLE_CAR_STATION_BEAUTY, 8
# 32 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	releaseall
	end


Naranja_Route112_CableCarStation_EventScript_Beauty::
# 37 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	lock
# 38 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	faceplayer
# 39 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	msgbox Naranja_Route112_CableCarStation_Text_081924F5, MSGBOX_YESNO
# 40 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 41 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	goto_if EQUAL, Naranja_Route112_CableCarStation_EventScript_Sub_0815C0AD
# 42 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	goto_if EQUAL, Naranja_Route112_CableCarStation_EventScript_Sub_0815C0DC
	end


Naranja_Route112_CableCarStation_EventScript_Sub_0815C0AD::
# 48 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	msgbox Naranja_MtChimney_CableCarStation_Text_081925A9, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	closemessage
# 50 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE112_CABLE_CAR_STATION_BEAUTY, Naranja_Route112_CableCarStation_Movement_0815C0E6
# 51 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route112_CableCarStation_Movement_0815C0F0
# 52 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	waitmovement LOCALID_NONE
# 53 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, 0
# 54 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_STORY_STATE, 1
# 55 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	incrementgamestat 0x30
# 56 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 57 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	special CableCar
# 58 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	waitstate
# 59 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	release
	end


Naranja_Route112_CableCarStation_EventScript_Sub_0815C0DC::
# 64 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	msgbox Naranja_Route112_CableCarStation_Text_08192548, MSGBOX_DEFAULT
# 65 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	release
	end


# 69 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
Naranja_Route112_CableCarStation_Movement_0815C0E6:
# 70 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_up
# 71 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_up
# 72 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_right
# 73 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
	step_end

# 76 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
Naranja_Route112_CableCarStation_Movement_0815C0EB:
# 77 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	delay_16
# 78 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_left
# 79 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_down
# 80 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
Naranja_Route112_CableCarStation_Movement_0815C0F0:
# 84 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_up
# 85 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_up
# 86 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_up
# 87 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	delay_16
	step_end

# 90 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
Naranja_Route112_CableCarStation_Movement_0815C0F5:
# 91 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_down
# 92 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_down
# 93 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	walk_down
# 94 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	delay_16
	step_end

Naranja_Route112_CableCarStation_Text_081924F5::
# 97 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\nWould you like to be on it?$"

Naranja_Route112_CableCarStation_Text_08192548::
# 101 "data/maps/Naranja_Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
