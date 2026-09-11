Naranja_InsideOfTruck_G25_M40_MapScripts::
# 5 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_InsideOfTruck_G25_M40_OnLoad
# 6 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_InsideOfTruck_G25_M40_OnResume
	.byte 0


Naranja_InsideOfTruck_G25_M40_EventScript_Trigger_2::
# 10 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 11 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	call_if LESS_THAN, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B4650
# 12 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Trigger_3::
# 17 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	lockall
# 18 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	call Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDE6
# 19 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE89
# 20 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 21 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194D92
# 22 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 23 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 24 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 25 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEC3
# 26 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 27 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194DED
# 28 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 30 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEB0
# 31 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 33 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194E6B
# 35 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 37 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE9E
# 38 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194E9A
# 40 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEC8
# 42 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194EE8
# 44 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_INSIDE_OF_TRUCK_575, LOCALID_NONE, Naranja_InsideOfTruck_G25_M40_Text_08194F83
# 46 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEB3
# 47 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	call Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDFA
# 49 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE80
# 50 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 51 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE69
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDE6::
# 55 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE73
# 56 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 57 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194D71
# 58 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 59 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDFA::
# 64 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08194FA4
# 65 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 66 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 67 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEB7
# 68 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU
# 70 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 71 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 72 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_0819507E
# 73 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 75 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 76 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 0
# 77 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 78 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE3F
# 79 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE4D
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE3F::
# 83 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08195182
# 84 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 85 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE4D
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE4D::
# 89 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_0819510A
# 90 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CEA8
# 92 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 93 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_08195153
# 94 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE69::
# 100 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3
# 101 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_3, 1
# 102 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G25_M40_OnLoad::
# 107 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setmetatile 4, 1, 0x208, 0
# 108 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setmetatile 4, 2, 0x210, 0
# 109 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setmetatile 4, 3, 0x218, 0
	end


Naranja_InsideOfTruck_G25_M40_OnResume::
# 114 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setstepcallback 5
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Trigger_1::
# 119 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	lockall
# 120 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_4000
# 121 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	checkplayergender
# 122 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 123 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC45
# 124 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 125 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC68
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC45::
# 130 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setrespawn 1
# 131 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 1
# 132 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_MOM
# 133 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02FA
# 134 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M00_BARD
# 135 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_RIVAL_BRENDAN_NORMAL
# 136 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 1
# 137 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setdynamicwarp MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09, 0xFF, 3, 0xA
# 138 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC68::
# 143 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setrespawn 2
# 144 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 2
# 145 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M00_MOM
# 146 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02F9
# 147 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_WOMAN_5
# 148 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M03_RIVAL_MAY_NORMAL
# 149 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 1
# 150 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setdynamicwarp MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09, 0xFF, 0xC, 0xA
# 151 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G25_M40_EventScript_OBJ_EVENT_GFX_PIKACHU_LocalId3::
# 156 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_086BF1C4
# 157 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 3
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B4650::
# 162 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitse
# 163 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 164 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 165 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_BOY_1_3
# 166 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	clearflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 167 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	clearflag FLAG_HIDE_TANGELO_G00_M16_WALLY
# 168 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 169 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_084B
# 170 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2142
# 171 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	clearflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_2119
# 172 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	nop
# 173 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	nop
# 174 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	call Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B5E60
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B5E60::
# 179 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 180 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_0800
# 181 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G25_M40_Text_086B0C20
# 182 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 2
# 183 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	givemon SPECIES_PIKACHU, 5, 0
# 184 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	nop
	end


# 188 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE73:
# 189 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_up
# 190 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 191 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_right
# 192 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 193 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_left
# 194 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 195 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_down
# 196 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 197 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_right
# 198 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 199 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_up
# 200 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
	step_end

# 203 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE80:
# 204 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_right
# 205 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 206 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 207 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 208 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 209 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 210 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 211 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
	step_end

# 214 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE89:
# 215 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 216 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_player
# 217 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
# 218 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
	step_end

# 221 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE9E:
# 222 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_right
# 223 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
# 224 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
# 225 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_left
# 226 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_in_place_faster_up
	step_end

# 229 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEA8:
# 230 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_in_place_faster_down
# 231 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 232 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 233 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 234 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 235 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 236 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_up
	step_end

# 239 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEB0:
# 240 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
# 241 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
	step_end

# 244 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEB3:
# 245 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	lock_facing_direction
# 246 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_up
# 247 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	unlock_facing_direction
	step_end

# 250 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEB7:
# 251 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 252 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 253 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 254 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 255 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 256 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 257 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
	step_end

# 260 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEC3:
# 261 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	set_visible
# 262 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
# 263 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
# 264 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
	step_end

# 267 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEC8:
# 268 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
	step_end

Naranja_InsideOfTruck_G25_M40_Text_08194D71::
# 271 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x04}¡Ey!\n¡Un meowth salvaje !$"

Naranja_InsideOfTruck_G25_M40_Text_08194D92::
# 275 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Miiou\p¡Ríndete {PLAYER}!\nSabíamos que estabas aquí.\p{COLOR 0x04}{PLAYER}: Uahhh\n¡Que susto!\l¡Meowth asqueroso!\l$"

Naranja_InsideOfTruck_G25_M40_Text_08194DED::
# 279 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x07}¿Quieres problemas?\n¡Pues los has conseguido!\pJaja…\pTe creìas que te ibas a escapar de\nnosotros yendo tan lejos,verdad {PLAYER}…$"

Naranja_InsideOfTruck_G25_M40_Text_08194E6B::
# 283 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Llevo mucho esperando Jessy.\p{COLOR 0x07}Cógele Meowth!$"

Naranja_InsideOfTruck_G25_M40_Text_08194E9A::
# 287 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Jeje…    \n¡¡ Ya te tengo !!\lEsta vez Pikachu no se nos escapará.\p{COLOR 0x04}{PLAYER}: Ahhh…$"

Naranja_InsideOfTruck_G25_M40_Text_08194EE8::
# 291 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x07}¡Bien hecho!\p{COLOR 0x04}{PLAYER}: ¡No conseguiréis nada!\nSois patéticos.\p{COLOR 0x07} ¿Ahh sì?\nPues creo que ya te hemos cogido…\p¡Tienes miedo {PLAYER}!   \n¡Prepárate para luchar!\l$"

Naranja_InsideOfTruck_G25_M40_Text_08194F83::
# 295 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x06}Nooo…\p¡ Otra vez no !\n       $"

Naranja_InsideOfTruck_G25_M40_Text_08194FA4::
# 299 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x07}¿Que has hecho?\nMe has derrotado {PLAYER}…\pYo era una gran entrenadora…\p…sniff…\p…pero resurgiré.\pConseguiré ese Pikachu.\p…snif…\p…pero me has hecho daño.\pMe lo pagarás {PLAYER}…\pno se cuando…\p…pero lo pagarás…\p…sniff…sniff…$"

Naranja_InsideOfTruck_G25_M40_Text_0819507E::
# 303 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "…otra derrota que contarle al jefe…\p¡Vaya día!\p¡Has hecho llorar a Jessy!\pTe daré esta SuperBall, que le habíamos\nrobado a un niño antes.$"

Naranja_InsideOfTruck_G25_M40_Text_0819510A::
# 307 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Nos veremos pronto {PLAYER}…\p…y no te escaparás\pjaja…\p¡Te derrotaremos al fin!$"

Naranja_InsideOfTruck_G25_M40_Text_08195153::
# 311 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "¡El Team Rocket\ndespega de nuevo…$"

Naranja_InsideOfTruck_G25_M40_Text_08195182::
# 315 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "You’re loaded with items.\nI can’t give you this GREAT BALL.$"

Naranja_InsideOfTruck_G25_M40_Text_086B0C20::
# 319 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "¡Venga PIKACHU!\p¡Vamos! \n¡No te quedes atrás!\pTenemos que ver al profesor OAK.\n¡Vamos!$"

Naranja_InsideOfTruck_G25_M40_Text_086BF1C4::
# 323 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x0E}Pikaachu\p{COLOR 0x01}PIKACHU parece ansioso por llegar a\nPueblo PALETA…\py por tener más aventuras.$"
