Naranja_MellsweetIsland_GameCorner_B1F_MapScripts::
# 5 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MellsweetIsland_GameCorner_B1F_OnTransition
# 6 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_MellsweetIsland_GameCorner_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_MellsweetIsland_GameCorner_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_MellsweetIsland_GameCorner_B1F_OnFrame_1
	.2byte 0


Naranja_MellsweetIsland_GameCorner_B1F_OnTransition::
# 12 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special SetEReaderTrainerGfxId
	end


Naranja_MellsweetIsland_GameCorner_B1F_OnFrame_1::
# 17 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	lockall
# 18 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MellsweetIsland_GameCorner_B1F_Movement_0815AEF9
# 19 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitmovement LOCALID_NONE
# 20 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special CopyEReaderTrainerGreeting
# 21 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	msgbox 0x20234CC, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	closemessage
# 23 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	setvar VAR_0x8004, 2
# 24 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	setvar VAR_0x8005, 0
# 25 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special DoSpecialTrainerBattle
# 26 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitstate
# 27 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 28 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	call_if EQUAL, Naranja_MellsweetIsland_GameCorner_B1F_EventScript_Sub_0815AED5
# 29 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 30 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	call_if EQUAL, Naranja_MellsweetIsland_GameCorner_B1F_EventScript_Sub_0815AEE3
# 31 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 32 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	call_if EQUAL, Naranja_MellsweetIsland_GameCorner_B1F_EventScript_Sub_0815AEEE
# 33 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	closemessage
# 34 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MellsweetIsland_GameCorner_B1F_Movement_0815AEFF
# 36 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitmovement LOCALID_NONE
# 37 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special LoadPlayerParty
# 38 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	warp MAP_NARANJA_MELLSWEET_ISLAND_GAME_CORNER_1F, 0xFF, 3, 1
# 40 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitstate
# 41 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	releaseall
	end


Naranja_MellsweetIsland_GameCorner_B1F_EventScript_Sub_0815AED5::
# 46 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	setvar VAR_NARANJA_MELLSWEET_ISLAND_STORY_STATE, 3
# 47 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	msgbox Naranja_MellsweetIsland_GameCorner_B1F_Text_0818E796, MSGBOX_DEFAULT
	return


Naranja_MellsweetIsland_GameCorner_B1F_EventScript_Sub_0815AEE3::
# 52 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	setvar VAR_NARANJA_MELLSWEET_ISLAND_STORY_STATE, 1
# 53 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 54 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitmessage
# 55 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitbuttonpress
	return


Naranja_MellsweetIsland_GameCorner_B1F_EventScript_Sub_0815AEEE::
# 60 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	setvar VAR_NARANJA_MELLSWEET_ISLAND_STORY_STATE, 2
# 61 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 62 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitmessage
# 63 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	waitbuttonpress
	return


# 67 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
Naranja_MellsweetIsland_GameCorner_B1F_Movement_0815AEF9:
# 68 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_down
# 69 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_down
# 70 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_down
# 71 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_right
# 72 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_right
	step_end

# 75 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
Naranja_MellsweetIsland_GameCorner_B1F_Movement_0815AEFF:
# 76 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_left
# 77 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_left
# 78 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_up
# 79 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_up
# 80 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_up
# 81 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	walk_up
# 82 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	delay_8
	step_end

Naranja_MellsweetIsland_GameCorner_B1F_Text_0818E796::
# 85 "data/maps/Naranja_MellsweetIsland_GameCorner_B1F/scripts.pory"
	.string "The match ended up a draw.$"
