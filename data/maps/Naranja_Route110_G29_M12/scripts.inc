Naranja_Route110_G29_M12_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M12_OnTransition
	.byte 0


Naranja_Route110_G29_M12_OnTransition::
# 9 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	compare_var_to_value VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 3
# 10 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M12_EventScript_Sub_081634E5
# 11 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	compare_var_to_value VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 2
# 12 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M12_EventScript_Sub_081634E5
	end


Naranja_Route110_G29_M12_EventScript_Sub_081634E5::
# 17 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1
	return


Naranja_Route110_G29_M12_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 22 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	lock
# 23 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	faceplayer
# 24 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	loadword 0, Naranja_Route110_G29_M12_Text_0819E406
# 25 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	release
	end


Naranja_Route110_G29_M12_EventScript_Trigger_1::
# 31 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	lockall
# 32 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 33 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 34 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M12_EventScript_Sub_0816351D
# 35 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M12_EventScript_Sub_08163523
# 37 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 38 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M12_EventScript_Sub_0816351D::
# 44 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1
	return


Naranja_Route110_G29_M12_EventScript_Sub_08163523::
# 49 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0819E3AD
# 50 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	closemessage
# 52 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_08163538
# 53 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M12_Text_0819E406::
# 58 "data/maps/Naranja_Route110_G29_M12/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\nand cycle as fast as you’d like.\pIt feels great to go that fast, but try\nnot to crash into anyone!$"
