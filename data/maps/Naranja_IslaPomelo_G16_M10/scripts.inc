Naranja_IslaPomelo_G16_M10_MapScripts::
# 5 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaPomelo_G16_M10_OnTransition
	.byte 0


Naranja_IslaPomelo_G16_M10_OnTransition::
# 9 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	setrespawn 0x14
# 10 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0854
# 11 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0107
# 12 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	call_if LESS_THAN, Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BA8B
	end


Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BA8B::
# 17 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	setobjectxyperm LOCALID_ISLA_POMELO_G16_M10_MAN_4, 9, 2
# 18 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	setobjectxyperm LOCALID_ISLA_POMELO_G16_M10_MAN_4_2, 0xA, 2
	return


Naranja_IslaPomelo_G16_M10_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 23 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	setvar VAR_0x800B, 1
# 24 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 25 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmessage
# 26 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitbuttonpress
# 27 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M10_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId2::
# 32 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	lock
# 33 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 35 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmessage
# 36 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	pokemart Naranja_IslaPomelo_G16_M10_Mart_0815BAC0
# 37 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M10_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 43 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	lockall
# 44 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0107
# 45 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB57
# 46 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 47 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0xB
# 48 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	call_if GREATER_THAN_OR_EQUAL, Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB34
# 49 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 8
# 50 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	call_if LESS_THAN_OR_EQUAL, Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB3F
# 51 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	message Naranja_IslaPomelo_G16_M10_Text_081916FD
# 52 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmessage
# 53 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	delay 0x4B
# 54 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 55 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB4A
# 56 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	closemessage
# 57 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M10_MAN_4, Naranja_IslaPomelo_G16_M10_Movement_0815BB7E
# 58 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M10_MAN_4_2, Naranja_IslaPomelo_G16_M10_Movement_0815BB81
# 59 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	delay 0xA
# 61 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 62 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	message Naranja_IslaPomelo_G16_M10_Text_08191804
# 63 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmessage
# 64 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitfanfare
# 65 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	closemessage
# 66 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_POMELO_G16_M10_MAN_4
# 67 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_POMELO_G16_M10_MAN_4_2
# 68 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0107
# 69 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB34::
# 74 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M10_Movement_0815BB76
# 75 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB3F::
# 80 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M10_Movement_0815BB7A
# 81 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB4A::
# 86 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	playse SE_FAILURE
# 87 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M10_Text_0819179C, MSGBOX_DEFAULT
# 88 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M10_EventScript_Sub_0815BB57::
# 93 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 94 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 95 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M10_Text_08191804, MSGBOX_DEFAULT
# 96 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	closemessage
# 97 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 98 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	releaseall
	end


# 103 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
Naranja_IslaPomelo_G16_M10_Movement_0815BB76:
# 104 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_down
# 105 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_left
# 106 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_in_place_faster_up
	step_end

# 109 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
Naranja_IslaPomelo_G16_M10_Movement_0815BB7A:
# 110 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_down
# 111 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_right
# 112 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_in_place_faster_up
	step_end

# 115 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
Naranja_IslaPomelo_G16_M10_Movement_0815BB7E:
# 116 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_left
# 117 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

# 120 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
Naranja_IslaPomelo_G16_M10_Movement_0815BB81:
# 121 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_right
# 122 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

	.align 2
# 125 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
Naranja_IslaPomelo_G16_M10_Mart_0815BAC0:
# 126 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 127 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 128 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_MAX_POTION
# 129 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 130 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 131 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_REVIVE
# 132 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

Naranja_IslaPomelo_G16_M10_Text_081916FD::
# 135 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.string "Beyond this point, only those TRAINERS\nwho have collected all the GYM BADGES\lare permitted to enter.\pTRAINER, let us confirm that you have\nall the GYM BADGES.$"

Naranja_IslaPomelo_G16_M10_Text_0819179C::
# 139 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.string "You haven’t obtained all the BADGES.\pIf you’re bound for the POKéMON\nLEAGUE, you must return with them.$"

Naranja_IslaPomelo_G16_M10_Text_08191804::
# 143 "data/maps/Naranja_IslaPomelo_G16_M10/scripts.pory"
	.string "TRAINER! Believe in yourself and your\nPOKéMON, and go forth!$"
