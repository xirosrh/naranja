Naranja_MandarinIslandSouth_ContestLobby_MapScripts::
# 5 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MandarinIslandSouth_ContestLobby_OnTransition
	.byte 0


Naranja_MandarinIslandSouth_ContestLobby_OnTransition::
# 9 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	call Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081AE188
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Teala::
# 14 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 5
# 15 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 16 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	call Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081A4E92
# 17 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	call Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sub_08153DA1
# 18 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
# 19 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	call Naranja_KumquatIsland_ContestLobby_EventScript_Sub_0815FBDB
# 20 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 1
# 21 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	warp MAP_NARANJA_LINK_CONTEST_ROOM1, 0xFF, 7, 5
# 22 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitstate
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sub_08153DA1::
# 27 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	lockall
# 28 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_CONTEST_LOBBY_TEALA, Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E25
# 29 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 31 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 32 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 33 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_CONTEST_LOBBY_TEALA, Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E28
# 35 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 37 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 38 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 39 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	delay 0x14
# 41 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_CONTEST_LOBBY_TEALA, Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E35
# 42 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E23
# 44 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	msgbox Naranja_KumquatIsland_ContestLobby_Text_081A6832, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	closemessage
# 47 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_CONTEST_LOBBY_TEALA, Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E2C
# 48 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E19
# 49 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	releaseall
	return


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sign_3::
# 55 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	lockall
# 56 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	fadescreen 1
# 57 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	showcontestpainting 1
# 58 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	releaseall
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Boy2::
# 63 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_ContestLobby_Text_08177D6C, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Girl1::
# 68 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	lock
# 69 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	faceplayer
# 70 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_EVENT_COMPLETE_00EB
# 71 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sub_08153E76
# 72 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_ContestLobby_Text_08177DEC, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14D
# 74 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 75 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	callstd 0
# 76 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 77 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 78 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_EVENT_COMPLETE_00EB
# 79 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sub_08153E76::
# 84 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_ContestLobby_Text_08177E98, MSGBOX_DEFAULT
# 85 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Boy3::
# 90 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_ContestLobby_Text_08177ECD, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sign_4::
# 95 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	lockall
# 96 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 97 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitbuttonpress
# 98 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 99 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	releaseall
	end


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sign_2::
# 104 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setvar VAR_0x8008, 2
# 105 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setvar VAR_0x8009, 1
# 106 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	applymovement 32776, Naranja_KumquatIsland_ContestLobby_Movement_081B7821
# 107 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081B7681
	return


Naranja_MandarinIslandSouth_ContestLobby_EventScript_OldMan1::
# 112 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	setvar VAR_0x8008, 2
# 113 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081B77B6
	return


Naranja_MandarinIslandSouth_ContestLobby_EventScript_Sign_1::
# 117 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081B783B
	return


# 120 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E19:
# 121 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 122 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 123 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 124 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 125 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_up
# 126 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_up
# 127 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_up
# 128 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	delay_8
# 129 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 132 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E23:
# 133 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_in_place_faster_left
	step_end

# 136 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E25:
# 137 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 138 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_in_place_faster_down
	step_end

# 141 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E28:
# 142 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_down
# 143 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_down
# 144 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_in_place_faster_up
	step_end

# 147 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E2C:
# 148 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 149 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 150 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_left
# 151 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_up
# 152 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_up
# 153 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_up
# 154 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	delay_8
# 155 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 158 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
Naranja_MandarinIslandSouth_ContestLobby_Movement_08153E35:
# 159 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_MandarinIslandSouth_ContestLobby_Text_08177D6C::
# 162 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	.string "I went in through the entrance and\ntook a look around the CONTEST hall.\pGetting up on that big stage...\nIt’s going to be tense!$"

Naranja_MandarinIslandSouth_ContestLobby_Text_08177DEC::
# 166 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	.string "Oh, my love for POKéMON...\nThe attraction they evoke in me...\pWhoops!\nYou weren’t meant to see that!\lWell, anyway.\pIf you’re entering a CONTEST, try this\nmove on for size.$"

Naranja_MandarinIslandSouth_ContestLobby_Text_08177E98::
# 170 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	.string "My feelings for POKéMON...\nOh, they attract me so...$"

Naranja_MandarinIslandSouth_ContestLobby_Text_08177ECD::
# 174 "data/maps/Naranja_MandarinIslandSouth_ContestLobby/scripts.pory"
	.string "Which CONTEST are you planning on\nentering?\pIf you’re entering a COOL CONTEST,\na cool POKéMON has to be the one!\pPick a POKéMON worthy of the CONTEST\ntheme, and make sure it has the\lright set of moves to match.\pThat’s fundamental!$"
