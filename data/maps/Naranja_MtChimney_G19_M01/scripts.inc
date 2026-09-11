Naranja_MtChimney_G19_M01_MapScripts::
# 5 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtChimney_G19_M01_OnTransition
# 6 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_MtChimney_G19_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_MtChimney_G19_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE112_STORY_STATE, 1, Naranja_MtChimney_G19_M01_OnFrame_1
	.2byte 0


Naranja_MtChimney_G19_M01_OnTransition::
# 12 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE112_STORY_STATE, 1
# 13 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G19_M01_EventScript_Sub_0815C111
	end


Naranja_MtChimney_G19_M01_EventScript_Sub_0815C111::
# 18 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_G19_M01_BEAUTY, 5, 4
# 19 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_G19_M01_BEAUTY, 0xA
	return


Naranja_MtChimney_G19_M01_OnFrame_1::
# 24 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	lockall
# 25 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MtChimney_G19_M01_Movement_0815C1B4
# 26 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G19_M01_BEAUTY, Naranja_MtChimney_G19_M01_Movement_0815C1AA
# 27 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_STORY_STATE, 0
# 29 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_G19_M01_BEAUTY, 6, 7
# 30 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_G19_M01_BEAUTY, 8
# 31 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	releaseall
	end


Naranja_MtChimney_G19_M01_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 36 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	lock
# 37 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	faceplayer
# 38 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	loadword 0, Naranja_MtChimney_G19_M01_Text_0819256A
# 39 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	callstd 5
# 40 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 41 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G19_M01_EventScript_Sub_0815C16C
# 42 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G19_M01_EventScript_Sub_0815C19B
	end


Naranja_MtChimney_G19_M01_EventScript_Sub_0815C16C::
# 48 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	loadword 0, Naranja_MtChimney_G19_M01_Text_081925A9
# 49 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	closemessage
# 51 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G19_M01_BEAUTY, Naranja_MtChimney_G19_M01_Movement_0815C1A5
# 52 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MtChimney_G19_M01_Movement_0815C1AF
# 53 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setvar VAR_0x8004, 1
# 55 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_STORY_STATE, 2
# 56 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	incrementgamestat 0x30
# 57 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	special CableCarWarp
# 58 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	special CableCar
# 59 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	waitstate
# 60 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	release
	end


Naranja_MtChimney_G19_M01_EventScript_Sub_0815C19B::
# 65 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	loadword 0, Naranja_MtChimney_G19_M01_Text_081925BF
# 66 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	release
	end


# 71 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
Naranja_MtChimney_G19_M01_Movement_0815C1A5:
# 72 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_up
# 73 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_up
# 74 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_left
# 75 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_in_place_faster_right
	step_end

# 78 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
Naranja_MtChimney_G19_M01_Movement_0815C1AA:
# 79 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	delay_16
# 80 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_right
# 81 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_down
# 82 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
Naranja_MtChimney_G19_M01_Movement_0815C1AF:
# 86 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_up
# 87 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_up
# 88 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_up
# 89 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	delay_16
	step_end

# 92 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
Naranja_MtChimney_G19_M01_Movement_0815C1B4:
# 93 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_down
# 94 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_down
# 95 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	walk_down
# 96 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	delay_16
	step_end

Naranja_MtChimney_G19_M01_Text_0819256A::
# 99 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	.string "The CABLE CAR is ready to go down.\nWould you like to be on it?$"

Naranja_MtChimney_G19_M01_Text_081925A9::
# 103 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	.string "Please step this way.$"

Naranja_MtChimney_G19_M01_Text_081925BF::
# 107 "data/maps/Naranja_MtChimney_G19_M01/scripts.pory"
	.string "Please ride with us another time.$"
