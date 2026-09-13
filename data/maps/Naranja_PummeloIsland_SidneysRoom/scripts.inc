Naranja_PummeloIsland_SidneysRoom_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_PummeloIsland_SidneysRoom_OnLoad
# 6 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PummeloIsland_SidneysRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PummeloIsland_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PummeloIsland_SidneysRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_PummeloIsland_SidneysRoom_OnWarp_1
	.2byte 0

Naranja_PummeloIsland_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	map_script_2 VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 0, Naranja_PummeloIsland_SidneysRoom_OnFrame_1
	.2byte 0


Naranja_PummeloIsland_SidneysRoom_OnLoad::
# 15 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DD
# 16 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	call_if EQUAL, Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B564
# 17 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 1
# 18 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	call_if EQUAL, Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B56A
	end


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B564::
# 23 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0757
	return


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B56A::
# 28 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A07FA
	return


Naranja_PummeloIsland_SidneysRoom_OnWarp_1::
# 33 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_PummeloIsland_SidneysRoom_OnFrame_1::
# 38 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	lockall
# 39 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0710
# 40 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setvar VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 1
# 41 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	releaseall
	end


Naranja_PummeloIsland_SidneysRoom_EventScript_Sidney::
# 46 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	lock
# 47 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	faceplayer
# 48 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DD
# 49 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	goto_if EQUAL, Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B5BD
# 50 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, 0
# 51 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	msgbox Naranja_PummeloIsland_SidneysRoom_Text_08190728, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_PUMMELO_ISLAND_261, Naranja_PummeloIsland_SidneysRoom_Text_08190823
# 53 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	goto Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B5C7
	return


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B5BD::
# 57 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	msgbox Naranja_PummeloIsland_SidneysRoom_Text_0819086D, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	release
	end


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_0815B5C7::
# 63 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DD
# 64 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0693
# 65 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	msgbox Naranja_PummeloIsland_SidneysRoom_Text_0819086D, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	release
	end


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0693::
# 71 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PummeloIsland_SidneysRoom_Movement_081A0853
# 72 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 73 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	playse SE_DOOR
# 74 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 1, 0x344, 0
# 75 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 2, 0x345, 0
# 76 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0, 2, 0x2DE, 1
# 77 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 1, 2, 0x2DD, 1
# 78 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 2, 2, 0x2DE, 1
# 79 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 3, 2, 0x2DD, 1
# 80 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 4, 2, 0x2DE, 1
# 81 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 8, 2, 0x2DD, 1
# 82 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 9, 2, 0x2DE, 1
# 83 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0xA, 2, 0x2DD, 1
# 84 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0xB, 2, 0x2DE, 1
# 85 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0xC, 2, 0x2DD, 1
# 86 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	special DrawWholeMapView
	return


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0710::
# 91 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PummeloIsland_SidneysRoom_Movement_081A0847
# 92 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 93 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	playse SE_TRUCK_DOOR
# 94 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 5, 0xC, 0x206, 1
# 95 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 0xC, 0x206, 1
# 96 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 7, 0xC, 0x206, 1
# 97 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 5, 0xD, 0x20E, 1
# 98 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 0xD, 0x20E, 1
# 99 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 7, 0xD, 0x20E, 1
# 100 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	special DrawWholeMapView
	return


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0757::
# 105 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 1, 0x344, 0
# 106 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 2, 0x345, 0
# 107 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 5, 0xC, 0x206, 1
# 108 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 0xC, 0x206, 1
# 109 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 7, 0xC, 0x206, 1
# 110 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 5, 0xD, 0x20E, 1
# 111 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 0xD, 0x20E, 1
# 112 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 7, 0xD, 0x20E, 1
# 113 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0, 2, 0x2DE, 1
# 114 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 1, 2, 0x2DD, 1
# 115 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 2, 2, 0x2DE, 1
# 116 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 3, 2, 0x2DD, 1
# 117 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 4, 2, 0x2DE, 1
# 118 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 8, 2, 0x2DD, 1
# 119 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 9, 2, 0x2DE, 1
# 120 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0xA, 2, 0x2DD, 1
# 121 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0xB, 2, 0x2DE, 1
# 122 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 0xC, 2, 0x2DD, 1
	return


Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A07FA::
# 127 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 5, 0xC, 0x206, 1
# 128 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 0xC, 0x206, 1
# 129 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 7, 0xC, 0x206, 1
# 130 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 5, 0xD, 0x20E, 1
# 131 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 6, 0xD, 0x20E, 1
# 132 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	setmetatile 7, 0xD, 0x20E, 1
	return


# 136 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
Naranja_PummeloIsland_SidneysRoom_Movement_081A0847:
# 137 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	walk_up
# 138 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	walk_up
# 139 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	walk_up
# 140 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	walk_up
# 141 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	walk_up
# 142 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	walk_up
	step_end

# 145 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
Naranja_PummeloIsland_SidneysRoom_Movement_081A0853:
# 146 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	delay_16
# 147 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	delay_16
	step_end

Naranja_PummeloIsland_SidneysRoom_Text_08190728::
# 150 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\nI’m SIDNEY of the ELITE FOUR.\pI like that look you’re giving me.\nI guess you’ll give me a good match.\lThat’s good! Looking real good!\pAll right! You and me, let’s enjoy a\nbattle that can only be staged here\lin the POKéMON LEAGUE!$"

Naranja_PummeloIsland_SidneysRoom_Text_08190823::
# 154 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\nEh, it was fun, so it doesn’t matter.$"

Naranja_PummeloIsland_SidneysRoom_Text_0819086D::
# 158 "data/maps/Naranja_PummeloIsland_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\nto say.\pYou’ve got what it takes to go far.\nNow, go on to the next room and enjoy\lyour next battle!$"
