Naranja_IslaPomelo_G16_M04_MapScripts::
# 5 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaPomelo_G16_M04_OnTransition
# 6 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaPomelo_G16_M04_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaPomelo_G16_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaPomelo_G16_M04_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M04_OnWarp_1
	.2byte 0

Naranja_IslaPomelo_G16_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M04_OnFrame_1
	.2byte 0


Naranja_IslaPomelo_G16_M04_OnTransition::
# 15 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
	end


Naranja_IslaPomelo_G16_M04_OnWarp_1::
# 20 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_IslaPomelo_G16_M04_OnFrame_1::
# 25 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	lockall
# 26 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M04_Movement_081A084E
# 27 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x28
# 29 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M04_Movement_0815B802
# 30 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 31 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B805
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B805::
# 36 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, 0
# 37 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08190F9C
# 38 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_POMELO_335, LOCALID_NONE, Naranja_IslaPomelo_G16_M04_Text_081910A0
# 40 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B821
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B821::
# 44 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_DOOR
# 45 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setmetatile 6, 1, 0x346, 0
# 46 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setmetatile 6, 2, 0x347, 0
# 47 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_081910FE
# 49 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 51 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_DOOR
# 52 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	checkplayergender
# 53 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 54 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B87C
# 55 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 56 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B881
# 57 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	addobject LOCALID_ISLA_POMELO_G16_M04_VARS
# 58 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9BD
# 59 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	checkplayergender
# 60 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 61 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B886
# 62 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 63 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8BB
	end


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B87C::
# 68 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B881::
# 73 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B886::
# 78 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08191225
# 79 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x28
# 81 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_PIN
# 82 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 83 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 85 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9D2
# 87 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08191268
# 88 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 89 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8F0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8BB::
# 93 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_081912B3
# 94 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x28
# 96 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 98 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 100 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 101 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9D2
# 102 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08191305
# 103 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 104 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8F0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8F0::
# 108 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 109 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	addobject LOCALID_ISLA_POMELO_G16_M04_PROF_BIRCH
# 110 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_PROF_BIRCH, Naranja_IslaPomelo_G16_M04_Movement_0815BA03
# 111 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 112 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 113 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 114 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_0819134D
# 115 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03B0
# 117 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_081914C6
# 118 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 120 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x14
# 122 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 123 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 124 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08191512
# 125 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 126 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 127 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x1E
# 128 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_IslaPomelo_G16_M04_Movement_0815B9FB
# 129 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M04_Movement_0815B9DD
# 130 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_PROF_BIRCH, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 131 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_IslaPomelo_G16_M04_Movement_0815B9F8
# 132 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 133 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x14
# 134 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 135 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 136 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08191546
# 137 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
# 138 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	checkplayergender
# 139 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 140 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9AB
# 141 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 142 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9B4
# 143 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 144 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_IslaPomelo_G16_M04_Movement_0815B9FF
# 145 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M04_Movement_0815B9E0
# 146 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 147 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_MAN_2
# 148 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	warp MAP_NARANJA_ISLA_POMELO_G16_M11, 0xFF, 7, 0x10
# 149 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitstate
# 150 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9AB::
# 155 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_081915D7
# 156 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9B4::
# 161 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M04_Text_08191675
# 162 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	callstd 4
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9BD::
# 167 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_IslaPomelo_G16_M04_Movement_0815B9E6
# 168 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 169 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 170 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9D2::
# 175 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_IslaPomelo_G16_M04_Movement_0815B9EF
# 176 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 180 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B802:
# 181 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 182 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

# 185 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9DD:
# 186 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 187 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

# 190 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9E0:
# 191 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 192 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
# 193 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 194 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_8
# 195 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	set_invisible
	step_end

# 198 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9E6:
# 199 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 200 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 201 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 202 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 203 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 204 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_left
# 205 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 206 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 209 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9EF:
# 210 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_up
# 211 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
# 212 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_right
# 213 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
# 214 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_8
# 216 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
	step_end

# 220 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9F8:
# 221 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_right
# 222 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9FB:
# 226 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 227 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 228 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_down
	step_end

# 231 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9FF:
# 232 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 233 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_8
# 234 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	set_invisible
	step_end

# 237 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815BA03:
# 238 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 239 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 240 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 241 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 242 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 243 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_right
# 244 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 245 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 248 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_081A084E:
# 249 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 250 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 251 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 252 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

Naranja_IslaPomelo_G16_M04_Text_08190F9C::
# 255 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: Welcome, {PLAYER}{KUN}.\pI was looking forward to seeing you\nhere one day.\pYou... What did you see on your\njourney with POKéMON?\pWhat did you feel, meeting so many\nother TRAINERS like you?\pWhat has awoken in you?\nI want you to hit me with it all!\pNow, bring it!$"

Naranja_IslaPomelo_G16_M04_Text_081910A0::
# 259 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "I, the CHAMPION, fall in defeat...\pKudos to you, {PLAYER}{KUN}!\pYou are a truly noble POKéMON\nTRAINER!$"

Naranja_IslaPomelo_G16_M04_Text_081910FE::
# 263 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: Congratulations!\pThe feelings you have for your\nPOKéMON...\pAnd the POKéMON that responded to\nthose feelings with all their might...\pThey came together as one, and created\nan even greater power.\pAnd thus, you were able to grasp\nvictory today!\pYou are rightfully the HOENN region’s\nnew...$"

Naranja_IslaPomelo_G16_M04_Text_08191225::
# 267 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\pHere’s some advice before you challenge\nthe CHAMPION...$"

Naranja_IslaPomelo_G16_M04_Text_08191268::
# 271 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "MAY: Huh? What, what, what?\p{PLAYER}{KUN}...\nCould it be that...\lIt’s already over?$"

Naranja_IslaPomelo_G16_M04_Text_081912B3::
# 275 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "BRENDAN: {PLAYER}!\pHow would you like some advice before\nyou challenge the CHAMPION?...$"

Naranja_IslaPomelo_G16_M04_Text_08191305::
# 279 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "BRENDAN: {PLAYER}...\pAre you trying to tell me...\nYou’ve beaten the CHAMPION?$"

Naranja_IslaPomelo_G16_M04_Text_0819134D::
# 283 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "PROF. BIRCH: See?\nWhat did I tell you, {RIVAL}?\pDidn’t I tell you that you don’t need\nto worry about {PLAYER}{KUN}?\p... ... ... ... ... ... ... ...\n{PLAYER}{KUN}, you’ve finally done it.\pWhen I heard that you defeated your\nown father at the PETALBURG GYM,\lI thought perhaps you had a chance...\pBut to think you’ve actually become\nthe CHAMPION!\pAh, yes!\pWhat became of your POKéDEX?\nHere, let me see.$"

Naranja_IslaPomelo_G16_M04_Text_081914C6::
# 287 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "PROF. BIRCH: Anyways,\ncongratulations!\pNow, go proudly into the final room!$"

Naranja_IslaPomelo_G16_M04_Text_08191512::
# 291 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}...\pNo, the new CHAMPION!\pCome with me.$"

Naranja_IslaPomelo_G16_M04_Text_08191546::
# 295 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: I’m sorry, but...\pFrom here on, only those TRAINERS who\nhave become CHAMPIONS may enter.\pYou’ll have to wait outside with the\nPROFESSOR.$"

Naranja_IslaPomelo_G16_M04_Text_081915D7::
# 299 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "MAY: Groan...\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pI’m just joking! That’s okay!\nThat’s the rule!\p{PLAYER}{KUN}!\nHonestly, congratulations!$"

Naranja_IslaPomelo_G16_M04_Text_08191675::
# 303 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "BRENDAN: ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pIt can’t be helped if that’s the rule.\p{PLAYER}, way to go!\nCongratulations!$"
