Naranja_InsideOfTruck_G25_M40_MapScripts::
# 5 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_InsideOfTruck_G25_M40_OnLoad
# 6 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_InsideOfTruck_G25_M40_OnResume
	.byte 0


Naranja_InsideOfTruck_G25_M40_EventScript_Trigger_2::
# 10 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_EGG_FROM_MIMA
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
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194D92, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 23 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 24 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEC3
# 25 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194DED, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 28 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEB0
# 29 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 31 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194E6B, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 34 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE9E
# 35 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194E9A, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEC8
# 38 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194EE8, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_INSIDE_OF_TRUCK_575, Naranja_InsideOfTruck_G25_M40_Text_08194F83
# 41 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEB3
# 42 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	call Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDFA
# 44 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE80
# 45 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE69
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDE6::
# 50 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CE73
# 51 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194D71, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CDFA::
# 58 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08194FA4, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
# 60 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU, Naranja_InsideOfTruck_G25_M40_Movement_0815CEB7
# 61 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 62 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G25_M40_PIKACHU
# 63 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 64 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 65 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_0819507E, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 67 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 68 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	callstd 0
# 69 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 70 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE3F
# 71 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE4D
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE3F::
# 75 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08195182, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE4D
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE4D::
# 80 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_0819510A, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3, Naranja_InsideOfTruck_G25_M40_Movement_0815CEA8
# 82 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitmovement LOCALID_NONE
# 83 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_08195153, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	closemessage
	return


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815CE69::
# 89 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G25_M40_MOVING_BOX_3
# 90 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_3, 1
# 91 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G25_M40_OnLoad::
# 96 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setmetatile 4, 1, 0x208, 0
# 97 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setmetatile 4, 2, 0x210, 0
# 98 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setmetatile 4, 3, 0x218, 0
	end


Naranja_InsideOfTruck_G25_M40_OnResume::
# 103 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setstepcallback 5
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Trigger_1::
# 108 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	lockall
# 109 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_4000
# 110 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	checkplayergender
# 111 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 112 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC45
# 113 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 114 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC68
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC45::
# 119 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setrespawn 1
# 120 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 1
# 121 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_MOM
# 122 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02FA
# 123 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M00_BARD
# 124 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_RIVAL_BRENDAN_NORMAL
# 125 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 1
# 126 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setdynamicwarp MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09, 0xFF, 3, 0xA
# 127 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_0815FC68::
# 132 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setrespawn 2
# 133 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 2
# 134 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M00_MOM
# 135 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02F9
# 136 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M02_WOMAN_5
# 137 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M03_RIVAL_MAY_NORMAL
# 138 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setvar VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 1
# 139 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setdynamicwarp MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09, 0xFF, 0xC, 0xA
# 140 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G25_M40_EventScript_OBJ_EVENT_GFX_PIKACHU_LocalId3::
# 145 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_086BF1C4, MSGBOX_SIGN
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B4650::
# 150 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	waitse
# 151 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 152 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 153 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_BOY_1_3
# 154 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	clearflag FLAG_NARANJA_BROCK_RECOMMENDED_PLAYER_FOR_LAPRAS
# 155 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	clearflag FLAG_HIDE_TANGELO_G00_M16_WALLY
# 156 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 157 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_084B
# 158 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_POKE_DRINKERS_UNLOCKED
# 159 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	clearflag FLAG_NARANJA_RECEIVED_HM_WHIRLPOOL_FROM_MATEO
# 160 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	nop
# 161 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	nop
# 162 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	call Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B5E60
	end


Naranja_InsideOfTruck_G25_M40_EventScript_Sub_086B5E60::
# 167 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_RECEIVED_EGG_FROM_MIMA
# 168 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	setflag FLAG_NARANJA_RECEIVED_STARTER_PIKACHU
# 169 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	msgbox Naranja_InsideOfTruck_G25_M40_Text_086B0C20, MSGBOX_NPC
# 170 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	givemon SPECIES_PIKACHU, 5, 0
# 171 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	nop
	end


# 175 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE73:
# 176 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_up
# 177 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 178 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_right
# 179 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 180 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_left
# 181 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 182 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_down
# 183 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 184 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_right
# 185 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 186 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_up
# 187 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
	step_end

# 190 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE80:
# 191 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_right
# 192 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 193 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 194 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 195 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 196 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 197 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 198 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
	step_end

# 201 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE89:
# 202 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 203 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_player
# 204 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
# 205 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
	step_end

# 208 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CE9E:
# 209 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_right
# 210 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
# 211 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
# 212 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_left
# 213 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_in_place_faster_up
	step_end

# 216 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEA8:
# 217 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_in_place_faster_down
# 218 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 219 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 220 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 221 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 222 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 223 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	face_up
	step_end

# 226 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEB0:
# 227 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
# 228 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_down
	step_end

# 231 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEB3:
# 232 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	lock_facing_direction
# 233 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_up
# 234 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	unlock_facing_direction
	step_end

# 237 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEB7:
# 238 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 239 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 240 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 241 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 242 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_fast_up
# 243 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
# 244 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
	step_end

# 247 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEC3:
# 248 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	set_visible
# 249 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
# 250 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
# 251 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	delay_16
	step_end

# 254 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
Naranja_InsideOfTruck_G25_M40_Movement_0815CEC8:
# 255 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	walk_down
	step_end

Naranja_InsideOfTruck_G25_M40_Text_08194D71::
# 258 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x04}¡Ey!\n¡Un meowth salvaje !$"

Naranja_InsideOfTruck_G25_M40_Text_08194D92::
# 262 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Miiou\p¡Ríndete {PLAYER}!\nSabíamos que estabas aquí.\p{COLOR 0x04}{PLAYER}: Uahhh\n¡Que susto!\l¡Meowth asqueroso!\l$"

Naranja_InsideOfTruck_G25_M40_Text_08194DED::
# 266 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x07}¿Quieres problemas?\n¡Pues los has conseguido!\pJaja…\pTe creìas que te ibas a escapar de\nnosotros yendo tan lejos,verdad {PLAYER}…$"

Naranja_InsideOfTruck_G25_M40_Text_08194E6B::
# 270 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Llevo mucho esperando Jessy.\p{COLOR 0x07}Cógele Meowth!$"

Naranja_InsideOfTruck_G25_M40_Text_08194E9A::
# 274 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Jeje…    \n¡¡ Ya te tengo !!\lEsta vez Pikachu no se nos escapará.\p{COLOR 0x04}{PLAYER}: Ahhh…$"

Naranja_InsideOfTruck_G25_M40_Text_08194EE8::
# 278 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x07}¡Bien hecho!\p{COLOR 0x04}{PLAYER}: ¡No conseguiréis nada!\nSois patéticos.\p{COLOR 0x07} ¿Ahh sì?\nPues creo que ya te hemos cogido…\p¡Tienes miedo {PLAYER}!   \n¡Prepárate para luchar!\l$"

Naranja_InsideOfTruck_G25_M40_Text_08194F83::
# 282 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x06}Nooo…\p¡ Otra vez no !\n       $"

Naranja_InsideOfTruck_G25_M40_Text_08194FA4::
# 286 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x07}¿Que has hecho?\nMe has derrotado {PLAYER}…\pYo era una gran entrenadora…\p…sniff…\p…pero resurgiré.\pConseguiré ese Pikachu.\p…snif…\p…pero me has hecho daño.\pMe lo pagarás {PLAYER}…\pno se cuando…\p…pero lo pagarás…\p…sniff…sniff…$"

Naranja_InsideOfTruck_G25_M40_Text_0819507E::
# 290 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "…otra derrota que contarle al jefe…\p¡Vaya día!\p¡Has hecho llorar a Jessy!\pTe daré esta SuperBall, que le habíamos\nrobado a un niño antes.$"

Naranja_InsideOfTruck_G25_M40_Text_0819510A::
# 294 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "Nos veremos pronto {PLAYER}…\p…y no te escaparás\pjaja…\p¡Te derrotaremos al fin!$"

Naranja_InsideOfTruck_G25_M40_Text_08195153::
# 298 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "¡El Team Rocket\ndespega de nuevo…$"

Naranja_InsideOfTruck_G25_M40_Text_08195182::
# 302 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "You’re loaded with items.\nI can’t give you this GREAT BALL.$"

Naranja_InsideOfTruck_G25_M40_Text_086B0C20::
# 306 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "¡Venga PIKACHU!\p¡Vamos! \n¡No te quedes atrás!\pTenemos que ver al profesor OAK.\n¡Vamos!$"

Naranja_InsideOfTruck_G25_M40_Text_086BF1C4::
# 310 "data/maps/Naranja_InsideOfTruck_G25_M40/scripts.pory"
	.string "{COLOR 0x0E}Pikaachu\p{COLOR 0x01}PIKACHU parece ansioso por llegar a\nPueblo PALETA…\py por tener más aventuras.$"
