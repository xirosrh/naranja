Naranja_PummeloIsland_HallOfFame_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PummeloIsland_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PummeloIsland_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_PummeloIsland_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_PummeloIsland_HallOfFame_OnFrame_1
	.2byte 0

Naranja_PummeloIsland_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_PummeloIsland_HallOfFame_OnWarp_1
	.2byte 0


Naranja_PummeloIsland_HallOfFame_OnWarp_1::
# 14 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_PummeloIsland_HallOfFame_OnFrame_1::
# 19 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	lockall
# 20 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_HALL_OF_FAME_STEVEN, Naranja_PummeloIsland_HallOfFame_Movement_0815BC59
# 21 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PummeloIsland_HallOfFame_Movement_0815BC59
# 22 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_HALL_OF_FAME_STEVEN, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 24 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 25 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	msgbox Naranja_PummeloIsland_HallOfFame_Text_08191841, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	closemessage
# 28 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_HALL_OF_FAME_STEVEN, Naranja_PummeloIsland_HallOfFame_Movement_0815BC60
# 29 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PummeloIsland_HallOfFame_Movement_0815BC60
# 30 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitmovement LOCALID_NONE
# 31 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	delay 0x14
# 32 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_HALL_OF_FAME_STEVEN, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 33 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 34 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitmovement LOCALID_NONE
# 35 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	msgbox Naranja_PummeloIsland_HallOfFame_Text_081918D7, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	closemessage
# 37 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_NARANJA_PUMMELO_ISLAND_HALL_OF_FAME_STEVEN, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 38 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 39 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	delay 0x14
# 41 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	dofieldeffect 0x3E
# 42 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitfieldeffect 0x3E
# 43 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	delay 0x28
# 44 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 45 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	call Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC13
# 46 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	checkplayergender
# 47 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 48 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	goto_if EQUAL, Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0815BC41
# 49 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 50 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	goto_if EQUAL, Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0815BC4D
	end


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0815BC41::
# 55 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setrespawn 1
# 56 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	fadescreenspeed 1, 0x18
# 57 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	special GameClear
# 58 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitstate
# 59 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	releaseall
	end


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0815BC4D::
# 64 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setrespawn 2
# 65 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	fadescreenspeed 1, 0x18
# 66 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	special GameClear
# 67 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	waitstate
# 68 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	releaseall
	end


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC13::
# 73 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_KUMQUAT_ISLAND_G13_M01_MAN_4
# 74 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	call Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FD09
# 75 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setflag FLAG_HIDE_NARANJA_VALENCIA_TANGELO_ROUTE_G09_M00_OLD_MAN_1
# 76 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_SSTIDAL_CORRIDOR_OLD_MAN_1
# 77 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MELLSWEET_ISLAND_G14_M07_LITTLE_BOY_1
# 78 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setvar VAR_NARANJA_MELLSWEET_ISLAND_EVENT_STATE_2, 1
# 79 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_VICTORY_ROAD_1F_WALLY_2
# 80 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MURCOTT_ISLAND_G09_M08_SS_TIDAL
# 81 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_KUMQUAT_ISLAND_G13_M10_SS_TIDAL
# 82 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	special UpdateTrainerFanClubGameClear
# 83 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_0123
# 84 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	call_if LESS_THAN, Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC62
# 85 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_00FF
# 86 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	call_if LESS_THAN, Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC70
# 87 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_012A
# 88 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	call_if LESS_THAN, Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC5A
# 89 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	checkflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_007B
# 90 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	call_if LESS_THAN, Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC5E
	return


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC5A::
# 95 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MELLSWEET_ISLAND_G14_M07_ITEM_BALL
	return


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC5E::
# 100 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MELLSWEET_ISLAND_G14_M07_ITEM_BALL_2
	return


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC62::
# 105 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setvar VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 3
# 106 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_EVENT_STATE_2, 3
# 107 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_PALLET_TOWN_G01_M00_NORMAN
	return


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FC70::
# 112 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_085D
	return


Naranja_PummeloIsland_HallOfFame_EventScript_Sub_0819FD09::
# 117 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DD
# 118 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DE
# 119 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DF
# 120 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	clearflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04E0
# 121 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	setvar VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 0
	return


# 125 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
Naranja_PummeloIsland_HallOfFame_Movement_0815BC59:
# 126 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 127 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 128 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 129 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 130 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 131 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
	step_end

# 134 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
Naranja_PummeloIsland_HallOfFame_Movement_0815BC60:
# 135 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 136 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 137 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 138 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
# 139 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	walk_up
	step_end

Naranja_PummeloIsland_HallOfFame_Text_08191841::
# 142 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	.string "STEVEN: This room...\pThis is where we keep records of\nPOKéMON that prevailed through\lharsh battles.\pIt is here that the LEAGUE CHAMPIONS\nare honored.$"

Naranja_PummeloIsland_HallOfFame_Text_081918D7::
# 146 "data/maps/Naranja_PummeloIsland_HallOfFame/scripts.pory"
	.string "STEVEN: Come on, let’s record your\nname as a TRAINER who triumphed over\lthe POKéMON LEAGUE, and the names of\lthe partners who battled with you.$"
