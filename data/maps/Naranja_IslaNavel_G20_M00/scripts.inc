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
	loadword 0, Naranja_IslaNavel_G20_M00_Text_0816C7FF
# 14 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	release
	end


Naranja_IslaNavel_G20_M00_EventScript_Sub_0814E80A::
# 20 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_0816C855
# 21 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	release
	end


Naranja_IslaNavel_G20_M00_OnTransition::
# 27 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0857
	end


Naranja_IslaNavel_G20_M00_EventScript_OBJ_EVENT_GFX_BRAWLY_LocalId1::
# 32 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	lockall
# 33 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 0
# 34 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 35 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setvar VAR_TEMP_1, 0
# 36 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	releaseall
	end


Naranja_IslaNavel_G20_M00_EventScript_Trigger_1::
# 41 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_085BD645
# 42 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 43 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_BRAWLY, Naranja_IslaNavel_G20_M00_Movement_08327301
# 44 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 45 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5F00
# 46 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086B5EE7
# 48 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 49 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5F14
# 50 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_08613D44
# 52 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 53 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5F30
# 54 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086B5EF1
# 56 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 57 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5FD1
# 58 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 6
# 59 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 1
# 60 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 61 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6470
	return


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B60B0::
# 65 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B79FA
# 66 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B79EF
# 68 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 69 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 70 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 71 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 73 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B7A09
# 74 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 76 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 77 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 78 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 79 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 80 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 81 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 82 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 83 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 84 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 85 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 86 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 88 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 89 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 90 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 92 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 93 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 94 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 95 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 96 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_5, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 98 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 99 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 101 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 102 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 103 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 104 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 105 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 107 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 108 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_2, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 109 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 110 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 112 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 113 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 115 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 116 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 117 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_3, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 118 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 119 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 120 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_3, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 121 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 122 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 123 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 124 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 125 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 126 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_3, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 127 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 128 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 129 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 130 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 131 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 132 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 133 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 134 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 135 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 136 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_6, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 138 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 139 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 140 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 141 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 142 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 143 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 144 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 146 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 147 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 148 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 149 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 150 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 151 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 152 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 153 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 154 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 155 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 156 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 157 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCC0
# 158 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 159 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 160 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCD0
# 161 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 162 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 163 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_DIAMOND_CUSHION_2, Naranja_IslaNavel_G20_M00_Movement_086BFCE0
# 164 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B5EF8
# 165 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 166 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_BRAWLY, Naranja_CaminoFrio_G00_M29_Movement_083272FC
# 167 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 5
# 168 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadedefaultbgm
# 169 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x30
# 170 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto Naranja_IslaNavel_G20_M00_EventScript_Sub_086B62AF
	return


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B62AF::
# 174 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B7A16
# 175 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 176 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 177 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0xA0
# 178 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x103
# 179 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 180 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 0
# 181 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6440::
# 186 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	checkpartymove MOVE_ICE_BEAM
# 187 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 188 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G20_M00_EventScript_Sub_086B62AF
# 189 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 190 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 191 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	lockall
# 192 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 193 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 194 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 195 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 196 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	closemessage
# 197 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	dofieldeffect 0x25
# 198 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	waitstate
# 199 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 200 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086BF4D4
# 201 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 1
# 202 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	release
	return


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6470::
# 207 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 0
# 208 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 209 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	checkpartymove MOVE_ICE_BEAM
# 210 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 211 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	call_if LESS_THAN, Naranja_IslaNavel_G20_M00_EventScript_Sub_086B7920
# 212 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B64A0
# 213 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 6
# 214 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 215 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	warp MAP_NARANJA_ISLA_NAVEL_G05_M03, 0, 0xA028, 0x200
	end


Naranja_IslaNavel_G20_M00_EventScript_Sub_086B7920::
# 220 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadenewbgm MUS_GYM
# 221 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3, Naranja_IslaNavel_G20_M00_Movement_0800F7C2
# 222 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_LITTLE_BOY_3_4, Naranja_IslaNavel_G20_M00_Movement_0800F7C2
# 223 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x15
# 224 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B62D0
# 225 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 226 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 227 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 228 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G20_M00_BRAWLY, Naranja_IslaNavel_G20_M00_Movement_086B5EEA
# 229 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x50
# 230 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 3
# 231 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x30
# 232 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	waitse
# 233 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	playmoncry SPECIES_NIDOQUEEN, 0
# 234 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 0
# 235 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B78E0
# 236 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 4
# 237 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 238 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 239 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G20_M00_Movement_086B5EE4
# 240 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 241 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	call Naranja_IslaNavel_G20_M00_EventScript_Sub_086B6440
# 242 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 3
# 243 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay 0x10
# 244 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	fadescreen 0
# 245 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B7904
# 246 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 6
# 247 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 248 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_02EE
# 249 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	nop
# 250 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G20_M00_Text_086B79B3
# 251 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	callstd 6
# 252 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	goto Naranja_IslaNavel_G20_M00_EventScript_Sub_086B60B0
	return


# 255 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_0800F7C2:
# 256 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_slow_down
	step_end

# 259 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_08327301:
# 260 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_down
# 261 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	emote_exclamation_mark
	step_end

# 264 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_085BD645:
# 265 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_slow_left
# 266 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_up
	step_end

# 269 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_08613D44:
# 270 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_left
	step_end

# 273 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EE4:
	step_end

# 276 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EE7:
# 277 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	delay_16
# 278 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_faster_up
	step_end

# 281 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EEA:
# 282 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_left
	step_end

# 285 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086B5EF1:
# 286 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	emote_exclamation_mark
# 287 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_up
	step_end

# 290 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BF4D4:
# 291 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_left
	step_end

# 294 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BFCC0:
# 295 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	set_visible
# 296 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_slow_down
# 297 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_slow_down
# 298 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_slow_down
	step_end

# 301 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BFCD0:
# 302 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 303 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 304 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 305 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 306 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
# 307 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	walk_in_place_fast_down
	step_end

# 310 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
Naranja_IslaNavel_G20_M00_Movement_086BFCE0:
# 311 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	face_down
	step_end

Naranja_IslaNavel_G20_M00_Text_0816C7FF::
# 314 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "What’s up, what’s up?\pI saw a shady fellow scuttling in and\nout of PROF. COZMO’s LAB.$"

Naranja_IslaNavel_G20_M00_Text_0816C855::
# 318 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "This region’s been known for meteors\nsince the olden days.\pThey say METEOR FALLS was gouged out\nby a falling meteorite long ago.$"

Naranja_IslaNavel_G20_M00_Text_086B5EF8::
# 322 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Más!$"

Naranja_IslaNavel_G20_M00_Text_086B5F00::
# 326 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Al final llegaste!$"

Naranja_IslaNavel_G20_M00_Text_086B5F14::
# 330 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}Vengo a desafiarte DANNY$"

Naranja_IslaNavel_G20_M00_Text_086B5F30::
# 334 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¿Sabes como van los gimnasios?\pSolo superando unas pruebas\npodrás desafiarme.\p{COLOR 0x04}¿Me lo dices o me lo cuentas?\p {COLOR 0x01}Está bien, Si lo sabes,\ntendrás tu desafìo.$"

Naranja_IslaNavel_G20_M00_Text_086B5FD1::
# 338 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}Explìcame ya la prueba,\npero se rápido, este frìo es infernal.\p{COLOR 0x01}Infernal es el calor.\nAquì empieza el reto.\p¡¿Preparado?!$"

Naranja_IslaNavel_G20_M00_Text_086B62D0::
# 342 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Está bien!\p¡Tú lo quisiste!\pEl desafìo consistirá en tres pruebas\nque miden la rapidez:\p-Congelar un géiser.\p-Fabricar de ahì un trineo.\p-Ganarme en una carrera.\pDebes ganar dos al mìnimo\npara superarlas.\p¡Entonces competiremos!\p{COLOR 0x04}{PLAYER}:¡Perfecto!\p{COLOR 0x01}Lo primero:\nAhora competiremos\lcongelando estos géiser.\pPuedes usar un sólo POKéMON.\p¡Elige uno!$"

Naranja_IslaNavel_G20_M00_Text_086B64A0::
# 346 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Espera!\p¡No estás preparado!\p¿Cómo congelarás estos géiseres\nsin un POKéMON capaz?\pVuelve con algún POKéMON       \nque sepa RAYO HIELO.$"

Naranja_IslaNavel_G20_M00_Text_086B78E0::
# 350 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Enséñales quien manda, NIDOQUEEN!$"

Naranja_IslaNavel_G20_M00_Text_086B7904::
# 354 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}¡Te elijo a tì, {STR_VAR_1}!$"

Naranja_IslaNavel_G20_M00_Text_086B79B3::
# 358 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "{COLOR 0x04}Lanza tu RAYO HIELO sobre esa\ncolumna de agua hirviendo.$"

Naranja_IslaNavel_G20_M00_Text_086B79EF::
# 362 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Dale más!$"

Naranja_IslaNavel_G20_M00_Text_086B79FA::
# 366 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Confío en tí!$"

Naranja_IslaNavel_G20_M00_Text_086B7A09::
# 370 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "¡Más rápido!$"

Naranja_IslaNavel_G20_M00_Text_086B7A16::
# 374 "data/maps/Naranja_IslaNavel_G20_M00/scripts.pory"
	.string "Danny: ¡Perfecto!\p¡Aunque te quedaste a punto!\pVaya, lo siento por tì, {PLAYER},\npero tú fuiste el rival más lento.\p¡Aun quedan otras dos pruebas!\pAhora debemos tallar estos témpanos\npara hacernos un TRINEO, \les una tarea dura y pesada,\lnunca mejor dicho,\l¡Pero puedes usar tus POKéMON!\p¡Venga!\p¡Vamos!$"
