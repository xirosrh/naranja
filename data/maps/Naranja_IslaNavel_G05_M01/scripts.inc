Naranja_IslaNavel_G05_M01_MapScripts::
# 5 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNavel_G05_M01_OnTransition
	.byte 0


Naranja_IslaNavel_G05_M01_OnTransition::
# 9 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE188
	end


Naranja_IslaNavel_G05_M01_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 14 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setvar VAR_0x800B, 6
# 15 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setvar VAR_CONTEST_RANK, 1
# 16 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92
# 17 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	call Naranja_IslaNavel_G05_M01_EventScript_Sub_081539F8
# 18 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	special SetContestTrainerGfxIds
# 19 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB
# 20 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 2
# 21 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M28, 0xFF, 7, 5
# 22 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitstate
	end


Naranja_IslaNavel_G05_M01_EventScript_Sub_081539F8::
# 27 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	lockall
# 28 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G05_M01_TEALA, Naranja_IslaNavel_G05_M01_Movement_08153A7C
# 29 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	playse SE_BRIDGE_WALK
# 31 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 32 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 33 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G05_M01_TEALA, Naranja_IslaNavel_G05_M01_Movement_08153A7F
# 35 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	playse SE_BRIDGE_WALK
# 37 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 38 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 39 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	delay 0x14
# 41 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G05_M01_TEALA, Naranja_IslaNavel_G05_M01_Movement_08153A8C
# 42 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G05_M01_Movement_08153A7A
# 44 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6832
# 46 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	closemessage
# 48 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G05_M01_TEALA, Naranja_IslaNavel_G05_M01_Movement_08153A83
# 49 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G05_M01_Movement_08153A70
# 50 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 51 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	releaseall
	return


Naranja_IslaNavel_G05_M01_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_2_LocalId2::
# 56 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M01_Text_08177141
# 57 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M01_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId6::
# 62 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_010E
# 63 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M01_EventScript_Sub_08153AA9
# 64 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M01_Text_08177246
# 65 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M01_EventScript_Sub_08153AA9::
# 70 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M01_Text_081772D8
# 71 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M01_EventScript_OBJ_EVENT_GFX_LASS_LocalId3::
# 76 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M01_Text_081771F2
# 77 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M01_EventScript_Sign_3::
# 82 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	lockall
# 83 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	fadescreen 1
# 84 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	showcontestpainting 2
# 85 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	releaseall
	end


Naranja_IslaNavel_G05_M01_EventScript_Sign_4::
# 90 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	lockall
# 91 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 92 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitbuttonpress
# 93 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 94 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	releaseall
	end


Naranja_IslaNavel_G05_M01_EventScript_Sign_2::
# 99 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setvar VAR_0x8008, 4
# 100 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setvar VAR_0x8009, 1
# 101 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G13_M04_Movement_081B7821
# 102 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 103 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681
	return


Naranja_IslaNavel_G05_M01_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId4::
# 107 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	setvar VAR_0x8008, 4
# 108 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6
	return


Naranja_IslaNavel_G05_M01_EventScript_Sign_1::
# 112 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B
	return


# 115 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
Naranja_IslaNavel_G05_M01_Movement_08153A70:
# 116 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 117 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 118 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 119 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 120 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_up
# 121 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_up
# 122 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_up
# 123 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	delay_8
# 124 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	set_invisible
	step_end

# 127 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
Naranja_IslaNavel_G05_M01_Movement_08153A7A:
# 128 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 131 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
Naranja_IslaNavel_G05_M01_Movement_08153A7C:
# 132 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 133 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_in_place_faster_down
	step_end

# 136 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
Naranja_IslaNavel_G05_M01_Movement_08153A7F:
# 137 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_down
# 138 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_down
# 139 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_in_place_faster_up
	step_end

# 142 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
Naranja_IslaNavel_G05_M01_Movement_08153A83:
# 143 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 144 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 145 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_left
# 146 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_up
# 147 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_up
# 148 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_up
# 149 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	delay_8
# 150 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	set_invisible
	step_end

# 153 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
Naranja_IslaNavel_G05_M01_Movement_08153A8C:
# 154 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_IslaNavel_G05_M01_Text_08177141::
# 157 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	.string "They had a sketch of my POKéMON up\non the wall over there, but they\lchanged it with a new one already.\pI’m going to enter my HANA in CONTESTS\nso we can get her sketch up again!$"

Naranja_IslaNavel_G05_M01_Text_081771F2::
# 161 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	.string "Hi, are you making any オカキクケS?\pYou should come by with a bunch of\nBERRIES sometime.$"

Naranja_IslaNavel_G05_M01_Text_08177246::
# 165 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	.string "You see how they display a sketch of\na CONTEST winner here?\pI sketch them!\pIf any of your POKéMON wins a CONTEST,\nI’d gladly make a sketch of it!$"

Naranja_IslaNavel_G05_M01_Text_081772D8::
# 169 "data/maps/Naranja_IslaNavel_G05_M01/scripts.pory"
	.string "Hello! Congratulations!\pI’ve put up a sketch of your POKéMON\nright here for everyone to see!$"
