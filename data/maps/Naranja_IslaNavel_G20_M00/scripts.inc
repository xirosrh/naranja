Naranja_IslaNavel_G20_M00_MapScripts::
# 5 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNavel_G20_M00_OnTransition
	.byte 0


Naranja_IslaNavel_G20_M00_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_3_LocalId2::
# 9 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	lock
# 10 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	faceplayer
# 11 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 12 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G20_M00_EventScript_Sub_0814E80A
# 13 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_0816C7FF, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	release
	end


Naranja_IslaNavel_G20_M00_EventScript_Sub_0814E80A::
# 19 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_0816C855, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	release
	end


Naranja_IslaNavel_G20_M00_OnTransition::
# 25 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0857
	end


Naranja_IslaNavel_G20_M00_EventScript_OBJ_EVENT_GFX_DANNY_LocalId1::
# 30 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	lockall
# 31 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_BIKE_RACE_STATE, 0
# 32 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_BIKE_RACE_GATE_PASSED
# 33 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setvar VAR_TEMP_1, 0
# 34 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	releaseall
	end


Naranja_IslaNavel_G20_M00_EventScript_Trigger_1::
# 39 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_085BD645
# 40 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 41 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_BRAWLY, Naranja_IslaNavel_G20_M00_Movement_08327301
# 42 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 43 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5F00, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086B5EE7
# 45 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 46 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5F14, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_08613D44
# 48 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 49 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5F30, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086B5EF1
# 51 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 52 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5FD1, MSGBOX_AUTOCLOSE
# 53 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 1
# 54 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 55 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6470
	return


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B60B0::
# 59 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B79FA, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B79EF, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 62 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 64 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B7A09, MSGBOX_DEFAULT
# 65 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 66 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 67 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 68 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 69 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 70 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 72 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 74 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 75 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 77 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 78 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 79 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 80 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 81 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 83 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 85 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 88 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 89 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 90 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 92 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_3, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 94 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 95 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_3, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 96 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 97 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 98 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_3, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 100 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 102 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 105 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 106 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 107 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 108 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 109 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 111 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 112 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 113 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 114 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 116 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 117 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 118 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 119 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 120 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 121 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 122 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 123 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 124 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B5EF8, MSGBOX_DEFAULT
# 125 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_BRAWLY, Naranja_CaminoFrio_G00_M29_Movement_083272FC
# 126 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 127 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x30
# 129 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto Naranja_IslaNavel_G20_M00_EventScript_Sub_086B62AF
	return


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B62AF::
# 133 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B7A16, MSGBOX_DEFAULT
# 134 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 135 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0xA0
# 136 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x103
# 137 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 138 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 0
# 139 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6440::
# 144 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	checkpartymove MOVE_ICE_BEAM
# 145 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 146 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G20_M00_EventScript_Sub_086B62AF
# 147 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 148 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 149 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	lockall
# 150 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 151 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 152 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 153 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 154 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	closemessage
# 155 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	dofieldeffect 0x25
# 156 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	waitstate
# 157 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 158 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086BF4D4
# 159 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 1
# 160 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	release
	return


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6470::
# 165 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 0
# 166 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 167 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	checkpartymove MOVE_ICE_BEAM
# 168 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 169 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	call_if LESS_THAN, Naranja_IslaNavel_G20_M00_EventScript_Sub_086B7920
# 170 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B64A0, MSGBOX_AUTOCLOSE
# 171 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 172 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	warp MAP_NARANJA_ISLA_NAVEL_G05_M03, 0, 0xA028, 0x200
	end


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B7920::
# 177 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadenewbgm MUS_GYM
# 178 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3, Naranja_IslaNavel_G20_M00_Movement_0800F7C2
# 179 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_0800F7C2
# 180 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x15
# 181 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B62D0, MSGBOX_DEFAULT
# 182 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 183 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 184 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_BRAWLY, Naranja_IslaNavel_G20_M00_Movement_086B5EEA
# 185 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x50
# 186 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 3
# 187 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x30
# 188 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	waitse
# 189 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	playmoncry SPECIES_NIDOQUEEN, 0
# 190 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 0
# 191 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B78E0, MSGBOX_DEFAULT
# 192 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 193 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 194 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086B5EE4
# 195 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 196 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	call Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6440
# 197 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 3
# 198 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 199 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 0
# 200 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B7904, MSGBOX_AUTOCLOSE
# 201 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 202 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	clearflag FLAG_NARANJA_NAVEL_GYM_CHALLENGE_ACTIVE
# 203 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 204 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	msgbox Naranja_IslaNavel_G20_M00_Text_086B79B3, MSGBOX_AUTOCLOSE
# 205 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto Naranja_IslaNavel_G20_M00_EventScript_Sub_086B60B0
	return


# 208 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_0800F7C2:
# 209 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_slow_down
	step_end

# 212 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_08327301:
# 213 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_down
# 214 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	emote_exclamation_mark
	step_end

# 217 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_085BD645:
# 218 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_slow_left
# 219 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_up
	step_end

# 222 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_08613D44:
# 223 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_left
	step_end

# 226 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EE4:
	step_end

# 229 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EE7:
# 230 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay_16
# 231 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_faster_up
	step_end

# 234 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EEA:
# 235 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_left
	step_end

# 238 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EF1:
# 239 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	emote_exclamation_mark
# 240 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_up
	step_end

# 243 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BF4D4:
# 244 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_left
	step_end

# 247 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BFCC0:
# 248 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	set_visible
# 249 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_slow_down
# 250 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_slow_down
# 251 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_slow_down
	step_end

# 254 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BFCD0:
# 255 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 256 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 257 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 258 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 259 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 260 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
	step_end

# 263 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BFCE0:
# 264 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_down
	step_end

Naranja_IslaNavel_G20_M00_Text_0816C7FF::
# 267 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "What’s up, what’s up?\pI saw a shady fellow scuttling in and\nout of PROF. COZMO’s LAB.$"

Naranja_IslaNavel_G20_M00_Text_0816C855::
# 271 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "This region’s been known for meteors\nsince the olden days.\pThey say METEOR FALLS was gouged out\nby a falling meteorite long ago.$"

Naranja_IslaNavel_G20_M00_Text_086B5EF8::
# 275 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Más!$"

Naranja_IslaNavel_G20_M00_Text_086B5F00::
# 279 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Al final llegaste!$"

Naranja_IslaNavel_G20_M00_Text_086B5F14::
# 283 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}Vengo a desafiarte DANNY$"

Naranja_IslaNavel_G20_M00_Text_086B5F30::
# 287 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¿Sabes como van los gimnasios?\pSolo superando unas pruebas\npodrás desafiarme.\p{COLOR 0x04}¿Me lo dices o me lo cuentas?\p {COLOR 0x01}Está bien, Si lo sabes,\ntendrás tu desafìo.$"

Naranja_IslaNavel_G20_M00_Text_086B5FD1::
# 291 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}Explìcame ya la prueba,\npero se rápido, este frìo es infernal.\p{COLOR 0x01}Infernal es el calor.\nAquì empieza el reto.\p¡¿Preparado?!$"

Naranja_IslaNavel_G20_M00_Text_086B62D0::
# 295 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Está bien!\p¡Tú lo quisiste!\pEl desafìo consistirá en tres pruebas\nque miden la rapidez:\p-Congelar un géiser.\p-Fabricar de ahì un trineo.\p-Ganarme en una carrera.\pDebes ganar dos al mìnimo\npara superarlas.\p¡Entonces competiremos!\p{COLOR 0x04}{PLAYER}:¡Perfecto!\p{COLOR 0x01}Lo primero:\nAhora competiremos\lcongelando estos géiser.\pPuedes usar un sólo POKéMON.\p¡Elige uno!$"

Naranja_IslaNavel_G20_M00_Text_086B64A0::
# 299 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Espera!\p¡No estás preparado!\p¿Cómo congelarás estos géiseres\nsin un POKéMON capaz?\pVuelve con algún POKéMON       \nque sepa RAYO HIELO.$"

Naranja_IslaNavel_G20_M00_Text_086B78E0::
# 303 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Enséñales quien manda, NIDOQUEEN!$"

Naranja_IslaNavel_G20_M00_Text_086B7904::
# 307 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}¡Te elijo a tì, {STR_VAR_1}!$"

Naranja_IslaNavel_G20_M00_Text_086B79B3::
# 311 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}Lanza tu RAYO HIELO sobre esa\ncolumna de agua hirviendo.$"

Naranja_IslaNavel_G20_M00_Text_086B79EF::
# 315 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Dale más!$"

Naranja_IslaNavel_G20_M00_Text_086B79FA::
# 319 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Confío en tí!$"

Naranja_IslaNavel_G20_M00_Text_086B7A09::
# 323 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Más rápido!$"

Naranja_IslaNavel_G20_M00_Text_086B7A16::
# 327 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "Danny: ¡Perfecto!\p¡Aunque te quedaste a punto!\pVaya, lo siento por tì, {PLAYER},\npero tú fuiste el rival más lento.\p¡Aun quedan otras dos pruebas!\pAhora debemos tallar estos témpanos\npara hacernos un TRINEO, \les una tarea dura y pesada,\lnunca mejor dicho,\l¡Pero puedes usar tus POKéMON!\p¡Venga!\p¡Vamos!$"
