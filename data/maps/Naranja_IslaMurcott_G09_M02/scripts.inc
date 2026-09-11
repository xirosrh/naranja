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
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6832, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	closemessage
# 47 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_TEALA, Naranja_IslaMurcott_G09_M02_Movement_081554D3
# 48 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M02_Movement_081554C0
# 49 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	releaseall
	return


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 55 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M02_Text_0817C937, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId4::
# 60 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M02_Text_0817C9D5, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId8::
# 65 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M02_Text_0817CAEC, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId7::
# 70 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	lockall
# 71 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_005F
# 72 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M02_EventScript_Sub_08155526
# 73 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_LITTLE_GIRL_2, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 74 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M02_Text_0817CA67, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x111
# 77 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 78 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	callstd 0
# 79 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_005F
# 80 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sub_08155526::
# 85 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M02_Text_0817CA88, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sign_3::
# 90 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	lockall
# 91 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	fadescreen 1
# 92 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	showcontestpainting 3
# 93 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId6::
# 98 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7225, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M02_EventScript_Sign_2::
# 103 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x8008, 2
# 104 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x8009, 2
# 105 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M02_BOY_1_6, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 106 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G13_M04_Movement_081B7821
# 107 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681
	return


Naranja_IslaMurcott_G09_M02_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 112 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	setvar VAR_0x8008, 2
# 113 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6
	return


Naranja_IslaMurcott_G09_M02_EventScript_Sign_1::
# 117 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B
	return


# 120 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554C0:
# 121 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 122 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 123 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 124 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 125 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 126 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 127 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 128 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	delay_8
# 129 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	set_invisible
	step_end

# 132 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554CA:
# 133 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 136 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554CC:
# 137 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 138 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_down
	step_end

# 141 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554CF:
# 142 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_down
# 143 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_down
# 144 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_up
	step_end

# 147 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554D3:
# 148 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 149 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 150 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_left
# 151 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 152 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 153 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_up
# 154 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	delay_8
# 155 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	set_invisible
	step_end

# 158 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
Naranja_IslaMurcott_G09_M02_Movement_081554DC:
# 159 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_IslaMurcott_G09_M02_Text_0817C937::
# 162 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "I want to raise a POKéMON that’s\nthe ultimate in “great” for both\lbattles and CONTESTS.\pIt’s vexing, trying to figure out\nwhich moves I should make it learn.$"

Naranja_IslaMurcott_G09_M02_Text_0817C9D5::
# 166 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "Do any of your friends have any\nBERRIES?\pYou can use that BERRY BLENDER and\nmake オカキクケS with your friends!\pYou should try it - it’s a lot of fun!$"

Naranja_IslaMurcott_G09_M02_Text_0817CA67::
# 170 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "I have two, so you can have one!$"

Naranja_IslaMurcott_G09_M02_Text_0817CA88::
# 174 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "Make オカキクケS and put them in there.\pWhen you make a オカキクケ, everyone\nhas to put in a different BERRY.$"

Naranja_IslaMurcott_G09_M02_Text_0817CAEC::
# 178 "data/maps/Naranja_IslaMurcott_G09_M02/scripts.pory"
	.string "If you win a CONTEST, they put up a\nposter of your POKéMON on the wall.\pIt will have a portrait of your\nPOKéMON and both your names.$"
