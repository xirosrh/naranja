Naranja_IslaTangelo_G00_M10_MapScripts::
# 5 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTangelo_G00_M10_OnTransition
	.byte 0


Naranja_IslaTangelo_G00_M10_OnTransition::
# 9 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 10 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0810
# 11 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 12 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call_if LESS_THAN, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD92
# 13 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0084
# 14 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call_if LESS_THAN, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD9E
# 15 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 16 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD8C
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD8C::
# 21 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setvar VAR_NARANJA_ISLA_TANGELO_STORY_STATE, 1
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD92::
# 26 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, 1, 0xB
# 27 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, 9
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD9E::
# 32 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, 0xD, 0xE
# 33 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, 8
	return


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId3::
# 38 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock
# 39 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	faceplayer
# 40 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0084
# 41 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE79
# 42 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_TEMP_1
# 43 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE79
# 44 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setflag FLAG_TEMP_1
# 45 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 46 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_086B3490
# 47 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 49 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 50 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 51 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE07
# 52 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 53 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE1E
# 54 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 55 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE35
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE07::
# 60 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, Naranja_IslaTangelo_G00_M10_Movement_0814DE97
# 61 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DEC1
# 62 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 63 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE1E::
# 67 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, Naranja_IslaTangelo_G00_M10_Movement_0814DEA2
# 68 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DECB
# 69 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE35::
# 74 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DEB9
# 75 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, Naranja_IslaTangelo_G00_M10_Movement_0814DE8E
# 76 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 77 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C::
# 81 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_086BF54C
# 82 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD
# 84 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 85 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 0
# 86 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 87 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE83
# 88 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816AFE1
# 89 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0084
# 91 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE79::
# 97 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816AFE1
# 98 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE83::
# 104 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081A0CC2
# 105 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	fadedefaultbgm
# 107 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId2::
# 112 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock
# 113 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	faceplayer
# 114 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 115 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF26
# 116 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816B0CC
# 117 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 118 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 119 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 120 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_1::
# 126 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 127 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DFEC
# 128 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, Naranja_IslaTangelo_G00_M10_Movement_0814DFEF
# 129 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 130 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816B045
# 131 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 132 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 133 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, Naranja_IslaTangelo_G00_M10_Movement_086B336C
# 134 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 135 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	releaseall
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF26::
# 140 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816B12A
# 141 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 142 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_VARS_LocalId4::
# 147 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 148 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 149 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 150 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_2::
# 154 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 155 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFDE
# 156 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 157 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 158 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 159 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_3::
# 163 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 164 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFE1
# 165 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 166 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 167 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 168 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_4::
# 172 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 173 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFE3
# 174 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 175 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 176 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 177 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92::
# 181 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkplayergender
# 182 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 183 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFAA
# 184 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 185 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFB8
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFAA::
# 190 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816B196
# 191 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 192 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFC6
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFB8::
# 196 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816B1BE
# 197 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 198 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFC6
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFC6::
# 202 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 203 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFE5
# 204 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 205 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	removeobject LOCALID_ISLA_TANGELO_G00_M10_VARS
# 206 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_3, 2
# 207 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G00_M10_VARS
# 208 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	releaseall
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_DUSKULL_DOLL_LocalId5::
# 213 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 214 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_0816D51A
# 215 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 2
# 216 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	nop
# 217 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setwildbattle SPECIES_GEODUDE, 5, 0
# 218 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	special BattleSetup_StartLegendaryBattle
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sign_1::
# 223 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G00_M10_Text_086BEF1C
# 224 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 3
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 229 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock
# 230 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	faceplayer
# 231 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 232 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmessage
# 233 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 234 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_08152FA8
# 235 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	pokemart Naranja_IslaTangelo_G00_M10_Mart_08152F9C
# 236 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 237 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 238 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_08152FA8::
# 243 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	pokemart Naranja_IslaTangelo_G00_M10_Mart_08152FB8
# 244 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 245 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 4
# 246 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


# 250 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DE8E:
# 251 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 252 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 253 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 254 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 255 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 256 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 257 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 258 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

# 261 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DE97:
# 262 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
# 263 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 264 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 265 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
# 266 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 267 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 268 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 269 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 270 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 271 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

# 274 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DEA2:
# 275 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 276 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 277 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 278 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 279 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 280 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 281 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 282 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

# 285 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DEB9:
# 286 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
# 287 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 288 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 289 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 290 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 291 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 292 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
	step_end

# 295 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DEC1:
# 296 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 297 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 298 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 299 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 300 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 301 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 302 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 303 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 304 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
	step_end

# 307 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DECB:
# 308 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 309 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 310 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 311 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 312 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 313 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 314 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
	step_end

# 317 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFDE:
# 318 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
# 319 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	face_up
	step_end

# 322 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFE1:
# 323 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
	step_end

# 326 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFE3:
# 327 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	face_left
	step_end

# 330 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFE5:
# 331 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 332 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 333 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 334 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 335 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 336 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFEC:
# 340 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_8
# 341 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
	step_end

# 344 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFEF:
# 345 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_fast_up
# 346 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_left
# 347 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock_facing_direction
# 348 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
# 349 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	unlock_facing_direction
	step_end

# 352 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_086B336C:
# 353 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 354 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
# 355 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	face_right
	step_end

	.align 2
# 358 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Mart_08152F9C:
# 359 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_POTION
# 360 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 361 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 362 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 365 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Mart_08152FB8:
# 366 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_POKE_BALL
# 367 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_POTION
# 368 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 369 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 370 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

Naranja_IslaTangelo_G00_M10_Text_0816AFE1::
# 373 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Lo que compras en los {COLOR 0x03}PokePuestos  \n{COLOR 0x01}se guarda en tu ぁぃぅ.\p¡ Así podrás usarlo cuando quieras !$"

Naranja_IslaTangelo_G00_M10_Text_0816B045::
# 377 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "¡Oiga! ¡Espere!\p       \pEsto no es el metro, y no,\nno le voy a dejar colarse.\pPara viajar en zepelin necesitará el \nbillete.          $"

Naranja_IslaTangelo_G00_M10_Text_0816B0CC::
# 381 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "I just discovered the footprints of\na rare POKéMON!\pWait until I finish sketching\nthem, okay?$"

Naranja_IslaTangelo_G00_M10_Text_0816B12A::
# 385 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "¿Viste todos esos geodudes?\pSon de un montañista que los cría para\nque le ayuden en los {COLOR 0x0E}Picos Naranjas$"

Naranja_IslaTangelo_G00_M10_Text_0816B196::
# 389 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Misty: ¡Ven!\n¡Vamos {PLAYER}, por aquí!\p¡¡-!!$"

Naranja_IslaTangelo_G00_M10_Text_0816B1BE::
# 393 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Ash: ¡{PLAYER}!\n¿Sabías que hay un centro\lde recuperación pokemon?\p ¡No me lo pierdo!$"

Naranja_IslaTangelo_G00_M10_Text_0816D51A::
# 397 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "{COLOR 0x04}¿Qué pinta aquí un geodude?\p{COLOR 0x09}¡Diuuuudd!$"

Naranja_IslaTangelo_G00_M10_Text_086B3490::
# 401 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "¡Hola!\p¿Eres turista verdad?\p{COLOR 0x04}{PLAYER}: Ehh…\p{COLOR 0x01}¿Conoces las ventajas de los\n{COLOR 0x03}PokePuestos{COLOR 0x01}?\p¡Ven Conmigo!$"

Naranja_IslaTangelo_G00_M10_Text_086BEF1C::
# 405 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "{COLOR 0x0D}Isla TANGELO\n{COLOR 0x09}“Vivela“$"

Naranja_IslaTangelo_G00_M10_Text_086BF54C::
# 409 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Este es un puesto típico de las islas.\p¿Lo sabías?\p{COLOR 0x04}{PLAYER}: Suponia que…\p{COLOR 0x01}Aquí podrás comprar objetos para \ntus pokemon, de todo…y barato.\pPor tu interés, te regalamos esta POCIÓN.\n$"
