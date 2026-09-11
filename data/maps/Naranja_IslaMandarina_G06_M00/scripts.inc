Naranja_IslaMandarina_G06_M00_MapScripts::
# 5 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMandarina_G06_M00_OnTransition
	.byte 0


Naranja_IslaMandarina_G06_M00_OnTransition::
# 9 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE188
	end


Naranja_IslaMandarina_G06_M00_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 14 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setvar VAR_0x800B, 5
# 15 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 16 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92
# 17 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	call Naranja_IslaMandarina_G06_M00_EventScript_Sub_08153DA1
# 18 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	special SetContestTrainerGfxIds
# 19 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB
# 20 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 1
# 21 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M28, 0xFF, 7, 5
# 22 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitstate
	end


Naranja_IslaMandarina_G06_M00_EventScript_Sub_08153DA1::
# 27 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	lockall
# 28 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G06_M00_TEALA, Naranja_IslaMandarina_G06_M00_Movement_08153E25
# 29 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	playse SE_BRIDGE_WALK
# 31 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 32 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 33 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G06_M00_TEALA, Naranja_IslaMandarina_G06_M00_Movement_08153E28
# 35 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	playse SE_BRIDGE_WALK
# 37 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 38 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 39 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	delay 0x14
# 41 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G06_M00_TEALA, Naranja_IslaMandarina_G06_M00_Movement_08153E35
# 42 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMandarina_G06_M00_Movement_08153E23
# 44 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6832, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	closemessage
# 47 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G06_M00_TEALA, Naranja_IslaMandarina_G06_M00_Movement_08153E2C
# 48 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMandarina_G06_M00_Movement_08153E19
# 49 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	releaseall
	return


Naranja_IslaMandarina_G06_M00_EventScript_Sign_3::
# 55 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	lockall
# 56 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	fadescreen 1
# 57 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	showcontestpainting 1
# 58 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarina_G06_M00_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId4::
# 63 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	msgbox Naranja_IslaMandarina_G06_M00_Text_08177D6C, MSGBOX_NPC
	end


Naranja_IslaMandarina_G06_M00_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId3::
# 68 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	lock
# 69 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	faceplayer
# 70 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_00EB
# 71 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G06_M00_EventScript_Sub_08153E76
# 72 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	msgbox Naranja_IslaMandarina_G06_M00_Text_08177DEC, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14D
# 74 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 75 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	callstd 0
# 76 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 77 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 78 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_00EB
# 79 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M00_EventScript_Sub_08153E76::
# 84 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	msgbox Naranja_IslaMandarina_G06_M00_Text_08177E98, MSGBOX_DEFAULT
# 85 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M00_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId6::
# 90 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	msgbox Naranja_IslaMandarina_G06_M00_Text_08177ECD, MSGBOX_NPC
	end


Naranja_IslaMandarina_G06_M00_EventScript_Sign_4::
# 95 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	lockall
# 96 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 97 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitbuttonpress
# 98 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 99 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarina_G06_M00_EventScript_Sign_2::
# 104 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setvar VAR_0x8008, 2
# 105 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setvar VAR_0x8009, 1
# 106 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G13_M04_Movement_081B7821
# 107 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681
	return


Naranja_IslaMandarina_G06_M00_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 112 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	setvar VAR_0x8008, 2
# 113 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6
	return


Naranja_IslaMandarina_G06_M00_EventScript_Sign_1::
# 117 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B
	return


# 120 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
Naranja_IslaMandarina_G06_M00_Movement_08153E19:
# 121 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 122 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 123 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 124 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 125 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_up
# 126 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_up
# 127 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_up
# 128 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	delay_8
# 129 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	set_invisible
	step_end

# 132 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
Naranja_IslaMandarina_G06_M00_Movement_08153E23:
# 133 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_in_place_faster_left
	step_end

# 136 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
Naranja_IslaMandarina_G06_M00_Movement_08153E25:
# 137 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 138 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_in_place_faster_down
	step_end

# 141 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
Naranja_IslaMandarina_G06_M00_Movement_08153E28:
# 142 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_down
# 143 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_down
# 144 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_in_place_faster_up
	step_end

# 147 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
Naranja_IslaMandarina_G06_M00_Movement_08153E2C:
# 148 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 149 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 150 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_left
# 151 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_up
# 152 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_up
# 153 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_up
# 154 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	delay_8
# 155 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	set_invisible
	step_end

# 158 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
Naranja_IslaMandarina_G06_M00_Movement_08153E35:
# 159 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_IslaMandarina_G06_M00_Text_08177D6C::
# 162 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	.string "I went in through the entrance and\ntook a look around the CONTEST hall.\pGetting up on that big stage...\nIt’s going to be tense!$"

Naranja_IslaMandarina_G06_M00_Text_08177DEC::
# 166 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	.string "Oh, my love for POKéMON...\nThe attraction they evoke in me...\pWhoops!\nYou weren’t meant to see that!\lWell, anyway.\pIf you’re entering a CONTEST, try this\nmove on for size.$"

Naranja_IslaMandarina_G06_M00_Text_08177E98::
# 170 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	.string "My feelings for POKéMON...\nOh, they attract me so...$"

Naranja_IslaMandarina_G06_M00_Text_08177ECD::
# 174 "data/maps/Naranja_IslaMandarina_G06_M00/scripts.pory"
	.string "Which CONTEST are you planning on\nentering?\pIf you’re entering a COOL CONTEST,\na cool POKéMON has to be the one!\pPick a POKéMON worthy of the CONTEST\ntheme, and make sure it has the\lright set of moves to match.\pThat’s fundamental!$"
