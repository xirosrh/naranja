Naranja_NavelIsland_ContestLobby_MapScripts::
# 5 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NavelIsland_ContestLobby_OnTransition
	.byte 0


Naranja_NavelIsland_ContestLobby_OnTransition::
# 9 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	call Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081AE188
	end


Naranja_NavelIsland_ContestLobby_EventScript_Teala::
# 14 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 6
# 15 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 1
# 16 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	call Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081A4E92
# 17 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	call Naranja_NavelIsland_ContestLobby_EventScript_Sub_081539F8
# 18 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
# 19 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	call Naranja_KumquatIsland_ContestLobby_EventScript_Sub_0815FBDB
# 20 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 2
# 21 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	warp MAP_NARANJA_LINK_CONTEST_ROOM1, 0xFF, 7, 5
# 22 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitstate
	end


Naranja_NavelIsland_ContestLobby_EventScript_Sub_081539F8::
# 27 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	lockall
# 28 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_CONTEST_LOBBY_TEALA, Naranja_NavelIsland_ContestLobby_Movement_08153A7C
# 29 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 31 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 32 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 33 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_CONTEST_LOBBY_TEALA, Naranja_NavelIsland_ContestLobby_Movement_08153A7F
# 35 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 37 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 38 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 39 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	delay 0x14
# 41 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_CONTEST_LOBBY_TEALA, Naranja_NavelIsland_ContestLobby_Movement_08153A8C
# 42 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NavelIsland_ContestLobby_Movement_08153A7A
# 44 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	msgbox Naranja_KumquatIsland_ContestLobby_Text_081A6832, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	closemessage
# 47 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_CONTEST_LOBBY_TEALA, Naranja_NavelIsland_ContestLobby_Movement_08153A83
# 48 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NavelIsland_ContestLobby_Movement_08153A70
# 49 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	releaseall
	return


Naranja_NavelIsland_ContestLobby_EventScript_LittleBoy2::
# 55 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	msgbox Naranja_NavelIsland_ContestLobby_Text_08177141, MSGBOX_NPC
	end


Naranja_NavelIsland_ContestLobby_EventScript_Artist::
# 60 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_010E
# 61 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_ContestLobby_EventScript_Sub_08153AA9
# 62 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	msgbox Naranja_NavelIsland_ContestLobby_Text_08177246, MSGBOX_NPC
	end


Naranja_NavelIsland_ContestLobby_EventScript_Sub_08153AA9::
# 67 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	msgbox Naranja_NavelIsland_ContestLobby_Text_081772D8, MSGBOX_NPC
	end


Naranja_NavelIsland_ContestLobby_EventScript_Lass::
# 72 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	msgbox Naranja_NavelIsland_ContestLobby_Text_081771F2, MSGBOX_NPC
	end


Naranja_NavelIsland_ContestLobby_EventScript_Sign_3::
# 77 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	lockall
# 78 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	fadescreen 1
# 79 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	showcontestpainting 2
# 80 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	releaseall
	end


Naranja_NavelIsland_ContestLobby_EventScript_Sign_4::
# 85 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	lockall
# 86 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 87 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitbuttonpress
# 88 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 89 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	releaseall
	end


Naranja_NavelIsland_ContestLobby_EventScript_Sign_2::
# 94 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setvar VAR_0x8008, 4
# 95 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setvar VAR_0x8009, 1
# 96 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	applymovement 32776, Naranja_KumquatIsland_ContestLobby_Movement_081B7821
# 97 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	waitmovement LOCALID_NONE
# 98 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081B7681
	return


Naranja_NavelIsland_ContestLobby_EventScript_OldMan1::
# 102 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	setvar VAR_0x8008, 4
# 103 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081B77B6
	return


Naranja_NavelIsland_ContestLobby_EventScript_Sign_1::
# 107 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081B783B
	return


# 110 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
Naranja_NavelIsland_ContestLobby_Movement_08153A70:
# 111 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 112 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 113 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 114 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 115 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_up
# 116 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_up
# 117 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_up
# 118 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	delay_8
# 119 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 122 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
Naranja_NavelIsland_ContestLobby_Movement_08153A7A:
# 123 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_in_place_faster_left
	step_end

# 126 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
Naranja_NavelIsland_ContestLobby_Movement_08153A7C:
# 127 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 128 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_in_place_faster_down
	step_end

# 131 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
Naranja_NavelIsland_ContestLobby_Movement_08153A7F:
# 132 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_down
# 133 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_down
# 134 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_in_place_faster_up
	step_end

# 137 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
Naranja_NavelIsland_ContestLobby_Movement_08153A83:
# 138 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 139 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 140 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_left
# 141 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_up
# 142 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_up
# 143 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_up
# 144 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	delay_8
# 145 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 148 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
Naranja_NavelIsland_ContestLobby_Movement_08153A8C:
# 149 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_NavelIsland_ContestLobby_Text_08177141::
# 152 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	.string "They had a sketch of my POKéMON up\non the wall over there, but they\lchanged it with a new one already.\pI’m going to enter my HANA in CONTESTS\nso we can get her sketch up again!$"

Naranja_NavelIsland_ContestLobby_Text_081771F2::
# 156 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	.string "Hi, are you making any オカキクケS?\pYou should come by with a bunch of\nBERRIES sometime.$"

Naranja_NavelIsland_ContestLobby_Text_08177246::
# 160 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	.string "You see how they display a sketch of\na CONTEST winner here?\pI sketch them!\pIf any of your POKéMON wins a CONTEST,\nI’d gladly make a sketch of it!$"

Naranja_NavelIsland_ContestLobby_Text_081772D8::
# 164 "data/maps/Naranja_NavelIsland_ContestLobby/scripts.pory"
	.string "Hello! Congratulations!\pI’ve put up a sketch of your POKéMON\nright here for everyone to see!$"
