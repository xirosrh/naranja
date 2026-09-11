Naranja_IslaMurcott_G09_M02_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G09_M02_OnTransition
	.byte 0


Naranja_IslaMurcott_G09_M02_OnTransition::
# 9 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE188
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 14 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x800B, 7
# 15 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_CONTEST_RANK, 2
# 16 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92
# 17 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	call Naranja_IslaMurcott_G09_M02_EventScript_Sub_08155448
# 18 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	special SetContestTrainerGfxIds
# 19 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB
# 20 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 3
# 21 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M28, 0xFF, 7, 5
# 22 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitstate
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sub_08155448::
# 27 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	lockall
# 28 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_TEALA, Naranja_IslaMurcott_G09_M02_Movement_081554CC
# 29 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	playse SE_BRIDGE_WALK
# 31 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 32 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 33 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_TEALA, Naranja_IslaMurcott_G09_M02_Movement_081554CF
# 35 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	playse SE_BRIDGE_WALK
# 37 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 38 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 39 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	delay 0x14
# 41 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_TEALA, Naranja_IslaMurcott_G09_M02_Movement_081554DC
# 42 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M02_Movement_081554CA
# 44 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6832
# 46 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	closemessage
# 48 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_TEALA, Naranja_IslaMurcott_G09_M02_Movement_081554D3
# 49 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M02_Movement_081554C0
# 50 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 51 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	releaseall
	return


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 56 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M02_Text_0817C937
# 57 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId4::
# 62 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M02_Text_0817C9D5
# 63 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId8::
# 68 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M02_Text_0817CAEC
# 69 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId7::
# 74 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	lockall
# 75 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_005F
# 76 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M02_EventScript_Sub_08155526
# 77 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_LITTLE_GIRL_2, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 78 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 79 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M02_Text_0817CA67
# 80 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 4
# 81 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x111
# 82 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 83 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 0
# 84 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_005F
# 85 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sub_08155526::
# 90 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M02_Text_0817CA88
# 91 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sign_3::
# 96 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	lockall
# 97 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	fadescreen 1
# 98 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	showcontestpainting 3
# 99 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId6::
# 104 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7225
# 105 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sign_2::
# 110 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x8008, 2
# 111 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x8009, 2
# 112 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_BOY_1_6, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 113 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G13_M04_Movement_081B7821
# 114 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 115 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681
	return


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 119 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x8008, 2
# 120 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6
	return


Naranja_IslaMurcott_G09_M02_EventScript_Sign_1::
# 124 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B
	return


# 127 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554C0:
# 128 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 129 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 130 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 131 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 132 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 133 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 134 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 135 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	delay_8
# 136 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	set_invisible
	step_end

# 139 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554CA:
# 140 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 143 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554CC:
# 144 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 145 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_down
	step_end

# 148 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554CF:
# 149 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_down
# 150 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_down
# 151 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_up
	step_end

# 154 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554D3:
# 155 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 156 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 157 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 158 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 159 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 160 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 161 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	delay_8
# 162 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	set_invisible
	step_end

# 165 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554DC:
# 166 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_IslaMurcott_G09_M02_Text_0817C937::
# 169 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "I want to raise a POKéMON that’s\nthe ultimate in “great” for both\lbattles and CONTESTS.\pIt’s vexing, trying to figure out\nwhich moves I should make it learn.$"

Naranja_IslaMurcott_G09_M02_Text_0817C9D5::
# 173 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "Do any of your friends have any\nBERRIES?\pYou can use that BERRY BLENDER and\nmake オカキクケS with your friends!\pYou should try it - it’s a lot of fun!$"

Naranja_IslaMurcott_G09_M02_Text_0817CA67::
# 177 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "I have two, so you can have one!$"

Naranja_IslaMurcott_G09_M02_Text_0817CA88::
# 181 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "Make オカキクケS and put them in there.\pWhen you make a オカキクケ, everyone\nhas to put in a different BERRY.$"

Naranja_IslaMurcott_G09_M02_Text_0817CAEC::
# 185 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "If you win a CONTEST, they put up a\nposter of your POKéMON on the wall.\pIt will have a portrait of your\nPOKéMON and both your names.$"
