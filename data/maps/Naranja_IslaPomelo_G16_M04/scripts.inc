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
	msgbox Naranja_IslaPomelo_G16_M04_Text_08190F9C, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ISLA_POMELO_335, Naranja_IslaPomelo_G16_M04_Text_081910A0
# 39 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B821
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B821::
# 43 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_DOOR
# 44 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setmetatile 6, 1, 0x346, 0
# 45 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setmetatile 6, 2, 0x347, 0
# 46 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_081910FE, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 49 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_DOOR
# 50 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	checkplayergender
# 51 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 52 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B87C
# 53 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 54 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B881
# 55 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	addobject LOCALID_ISLA_POMELO_G16_M04_VARS
# 56 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9BD
# 57 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	checkplayergender
# 58 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 59 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B886
# 60 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8BB
	end


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B87C::
# 66 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B881::
# 71 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B886::
# 76 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_08191225, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x28
# 78 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_PIN
# 79 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 80 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 81 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 82 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 83 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9D2
# 84 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_08191268, MSGBOX_DEFAULT
# 85 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8F0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8BB::
# 89 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_081912B3, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x28
# 91 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 93 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 94 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 95 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 96 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9D2
# 97 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_08191305, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	goto Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8F0
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B8F0::
# 102 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 103 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	addobject LOCALID_ISLA_POMELO_G16_M04_PROF_BIRCH
# 104 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_PROF_BIRCH, Naranja_IslaPomelo_G16_M04_Movement_0815BA03
# 105 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 106 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 107 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_0819134D, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03B0
# 110 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_081914C6, MSGBOX_DEFAULT
# 111 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 112 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 113 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x14
# 114 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 115 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 116 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_08191512, MSGBOX_DEFAULT
# 117 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 118 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x1E
# 119 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_IslaPomelo_G16_M04_Movement_0815B9FB
# 120 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M04_Movement_0815B9DD
# 121 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_PROF_BIRCH, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 122 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_IslaPomelo_G16_M04_Movement_0815B9F8
# 123 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 124 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay 0x14
# 125 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 126 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 127 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_08191546, MSGBOX_DEFAULT
# 128 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	checkplayergender
# 129 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 130 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9AB
# 131 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 132 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9B4
# 133 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	closemessage
# 134 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_STEVEN, Naranja_IslaPomelo_G16_M04_Movement_0815B9FF
# 135 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPomelo_G16_M04_Movement_0815B9E0
# 136 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 137 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	setflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_MAN_2
# 138 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	warp MAP_NARANJA_ISLA_POMELO_G16_M11, 0xFF, 7, 0x10
# 139 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitstate
# 140 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9AB::
# 145 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_081915D7, MSGBOX_DEFAULT
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9B4::
# 150 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M04_Text_08191675, MSGBOX_DEFAULT
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9BD::
# 155 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_IslaPomelo_G16_M04_Movement_0815B9E6
# 156 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 157 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 158 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaPomelo_G16_M04_EventScript_Sub_0815B9D2::
# 163 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	applymovement LOCALID_ISLA_POMELO_G16_M04_VARS, Naranja_IslaPomelo_G16_M04_Movement_0815B9EF
# 164 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 168 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B802:
# 169 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 170 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

# 173 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9DD:
# 174 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 175 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

# 178 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9E0:
# 179 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 180 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
# 181 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 182 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_8
# 183 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	set_invisible
	step_end

# 186 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9E6:
# 187 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 188 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 189 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 190 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 191 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 192 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_left
# 193 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 194 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 197 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9EF:
# 198 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
# 200 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
# 202 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_8
# 204 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_16
	step_end

# 208 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9F8:
# 209 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_right
# 210 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

# 213 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9FB:
# 214 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 215 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 216 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_down
	step_end

# 219 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815B9FF:
# 220 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 221 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	delay_8
# 222 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	set_invisible
	step_end

# 225 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_0815BA03:
# 226 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 227 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 228 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 229 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 230 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 231 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_right
# 232 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 233 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 236 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
Naranja_IslaPomelo_G16_M04_Movement_081A084E:
# 237 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 238 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 239 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
# 240 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	walk_up
	step_end

Naranja_IslaPomelo_G16_M04_Text_08190F9C::
# 243 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: Welcome, {PLAYER}{KUN}.\pI was looking forward to seeing you\nhere one day.\pYou... What did you see on your\njourney with POKéMON?\pWhat did you feel, meeting so many\nother TRAINERS like you?\pWhat has awoken in you?\nI want you to hit me with it all!\pNow, bring it!$"

Naranja_IslaPomelo_G16_M04_Text_081910A0::
# 247 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "I, the CHAMPION, fall in defeat...\pKudos to you, {PLAYER}{KUN}!\pYou are a truly noble POKéMON\nTRAINER!$"

Naranja_IslaPomelo_G16_M04_Text_081910FE::
# 251 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: Congratulations!\pThe feelings you have for your\nPOKéMON...\pAnd the POKéMON that responded to\nthose feelings with all their might...\pThey came together as one, and created\nan even greater power.\pAnd thus, you were able to grasp\nvictory today!\pYou are rightfully the HOENN region’s\nnew...$"

Naranja_IslaPomelo_G16_M04_Text_08191225::
# 255 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\pHere’s some advice before you challenge\nthe CHAMPION...$"

Naranja_IslaPomelo_G16_M04_Text_08191268::
# 259 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "MAY: Huh? What, what, what?\p{PLAYER}{KUN}...\nCould it be that...\lIt’s already over?$"

Naranja_IslaPomelo_G16_M04_Text_081912B3::
# 263 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "BRENDAN: {PLAYER}!\pHow would you like some advice before\nyou challenge the CHAMPION?...$"

Naranja_IslaPomelo_G16_M04_Text_08191305::
# 267 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "BRENDAN: {PLAYER}...\pAre you trying to tell me...\nYou’ve beaten the CHAMPION?$"

Naranja_IslaPomelo_G16_M04_Text_0819134D::
# 271 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "PROF. BIRCH: See?\nWhat did I tell you, {RIVAL}?\pDidn’t I tell you that you don’t need\nto worry about {PLAYER}{KUN}?\p... ... ... ... ... ... ... ...\n{PLAYER}{KUN}, you’ve finally done it.\pWhen I heard that you defeated your\nown father at the PETALBURG GYM,\lI thought perhaps you had a chance...\pBut to think you’ve actually become\nthe CHAMPION!\pAh, yes!\pWhat became of your POKéDEX?\nHere, let me see.$"

Naranja_IslaPomelo_G16_M04_Text_081914C6::
# 275 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "PROF. BIRCH: Anyways,\ncongratulations!\pNow, go proudly into the final room!$"

Naranja_IslaPomelo_G16_M04_Text_08191512::
# 279 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}...\pNo, the new CHAMPION!\pCome with me.$"

Naranja_IslaPomelo_G16_M04_Text_08191546::
# 283 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "STEVEN: I’m sorry, but...\pFrom here on, only those TRAINERS who\nhave become CHAMPIONS may enter.\pYou’ll have to wait outside with the\nPROFESSOR.$"

Naranja_IslaPomelo_G16_M04_Text_081915D7::
# 287 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "MAY: Groan...\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pI’m just joking! That’s okay!\nThat’s the rule!\p{PLAYER}{KUN}!\nHonestly, congratulations!$"

Naranja_IslaPomelo_G16_M04_Text_08191675::
# 291 "data/maps/Naranja_IslaPomelo_G16_M04/scripts.pory"
	.string "BRENDAN: ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pIt can’t be helped if that’s the rule.\p{PLAYER}, way to go!\nCongratulations!$"
