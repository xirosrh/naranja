Naranja_IslaMellsweet_G14_M12_MapScripts::
# 5 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMellsweet_G14_M12_OnTransition
# 6 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaMellsweet_G14_M12_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaMellsweet_G14_M12_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaMellsweet_G14_M12_OnFrame_1
	.2byte 0


Naranja_IslaMellsweet_G14_M12_OnTransition::
# 12 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special SetEReaderTrainerGfxId
	end


Naranja_IslaMellsweet_G14_M12_OnFrame_1::
# 17 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	lockall
# 18 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M12_Movement_0815AEF9
# 19 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 20 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special CopyEReaderTrainerGreeting
# 21 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	loadword 0, 0x20234CC
# 22 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	callstd 4
# 23 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	closemessage
# 24 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	setvar VAR_0x8004, 2
# 25 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	setvar VAR_0x8005, 0
# 26 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special DoSpecialTrainerBattle
# 27 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitstate
# 28 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 29 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M12_EventScript_Sub_0815AED5
# 30 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 31 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M12_EventScript_Sub_0815AEE3
# 32 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 33 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M12_EventScript_Sub_0815AEEE
# 34 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	closemessage
# 35 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M12_Movement_0815AEFF
# 37 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special LoadPlayerParty
# 39 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	warp MAP_NARANJA_ISLA_MELLSWEET_G14_M11, 0xFF, 3, 1
# 41 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitstate
# 42 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M12_EventScript_Sub_0815AED5::
# 47 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 3
# 48 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M12_Text_0818E796
# 49 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	callstd 4
	return


Naranja_IslaMellsweet_G14_M12_EventScript_Sub_0815AEE3::
# 54 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 1
# 55 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special ShowFieldMessageStringVar4
# 56 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitmessage
# 57 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitbuttonpress
	return


Naranja_IslaMellsweet_G14_M12_EventScript_Sub_0815AEEE::
# 62 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 2
# 63 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	special ShowFieldMessageStringVar4
# 64 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitmessage
# 65 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	waitbuttonpress
	return


# 69 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
Naranja_IslaMellsweet_G14_M12_Movement_0815AEF9:
# 70 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_down
# 71 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_down
# 72 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_down
# 73 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_right
# 74 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
Naranja_IslaMellsweet_G14_M12_Movement_0815AEFF:
# 78 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_left
# 79 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_left
# 80 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_up
# 81 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_up
# 82 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_up
# 83 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	walk_up
# 84 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	delay_8
	step_end

Naranja_IslaMellsweet_G14_M12_Text_0818E796::
# 87 "data/maps/Naranja_IslaMellsweet_G14_M12/scripts.pory"
	.string "The match ended up a draw.$"
