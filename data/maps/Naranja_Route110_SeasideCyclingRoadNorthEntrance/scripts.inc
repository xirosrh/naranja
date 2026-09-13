Naranja_Route110_SeasideCyclingRoadNorthEntrance_MapScripts::
# 5 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_SeasideCyclingRoadNorthEntrance_OnTransition
	.byte 0


Naranja_Route110_SeasideCyclingRoadNorthEntrance_OnTransition::
# 9 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_COLD_PATH_BIKE_RACE_STATE, 3
# 10 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_081634E5
# 11 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_COLD_PATH_BIKE_RACE_STATE, 2
# 12 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_081634E5
	end


Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_081634E5::
# 17 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_NARANJA_COLD_PATH_BIKE_RACE_STATE, 1
	return


Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_MartEmployee::
# 22 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 23 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	faceplayer
# 24 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Naranja_Route110_SeasideCyclingRoadNorthEntrance_Text_0819E406, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
	end


Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Trigger_1::
# 30 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 31 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 32 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 33 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_0816351D
# 34 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 35 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_08163523
# 36 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_NARANJA_COLD_PATH_BIKE_RACE_GATE_PASSED
# 37 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_0816351D::
# 43 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_NARANJA_COLD_PATH_BIKE_RACE_STATE, 1
	return


Naranja_Route110_SeasideCyclingRoadNorthEntrance_EventScript_Sub_08163523::
# 48 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Naranja_ColdPath_FossilManiacsTunnel_Text_0819E3AD, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 50 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_08163538
# 51 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_SeasideCyclingRoadNorthEntrance_Text_0819E406::
# 56 "data/maps/Naranja_Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\nand cycle as fast as you’d like.\pIt feels great to go that fast, but try\nnot to crash into anyone!$"
