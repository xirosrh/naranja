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
	checkflag FLAG_NARANJA_RECEIVED_UPGRADED_POKEDEX
# 12 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call_if LESS_THAN, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD92
# 13 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_COMPLETED_TANGELO_POKE_STAND_TOUR
# 14 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call_if LESS_THAN, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD9E
# 15 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_UPGRADED_POKEDEX
# 16 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD8C
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DD8C::
# 21 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setvar VAR_NARANJA_POKEDEX_UPGRADE_STATE, 1
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
	checkflag FLAG_NARANJA_COMPLETED_TANGELO_POKE_STAND_TOUR
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
	msgbox Naranja_IslaTangelo_G00_M10_Text_086B3490, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 48 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 49 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 50 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE07
# 51 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 52 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE1E
# 53 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 54 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE35
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE07::
# 59 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, Naranja_IslaTangelo_G00_M10_Movement_0814DE97
# 60 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DEC1
# 61 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 62 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE1E::
# 66 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, Naranja_IslaTangelo_G00_M10_Movement_0814DEA2
# 67 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DECB
# 68 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE35::
# 73 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DEB9
# 74 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_1_2, Naranja_IslaTangelo_G00_M10_Movement_0814DE8E
# 75 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 76 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE4C::
# 80 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_086BF54C, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD
# 82 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 83 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	callstd 0
# 84 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 85 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE83
# 86 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816AFE1, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setflag FLAG_NARANJA_COMPLETED_TANGELO_POKE_STAND_TOUR
# 88 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE79::
# 94 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816AFE1, MSGBOX_DEFAULT
# 95 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DE83::
# 100 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M04_Text_081A0CC2, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	fadedefaultbgm
# 102 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId2::
# 107 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock
# 108 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	faceplayer
# 109 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_UPGRADED_POKEDEX
# 110 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF26
# 111 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816B0CC, MSGBOX_DEFAULT
# 112 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 113 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 114 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 115 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_1::
# 120 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 121 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTangelo_G00_M10_Movement_0814DFEC
# 122 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, Naranja_IslaTangelo_G00_M10_Movement_0814DFEF
# 123 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 124 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816B045, MSGBOX_DEFAULT
# 125 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 126 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_GIRL_2, Naranja_IslaTangelo_G00_M10_Movement_086B336C
# 127 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 128 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	releaseall
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF26::
# 133 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816B12A, MSGBOX_DEFAULT
# 134 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_VARS_LocalId4::
# 139 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 140 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 141 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 142 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_2::
# 146 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 147 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFDE
# 148 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 149 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 150 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 151 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_3::
# 155 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 156 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFE1
# 157 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 158 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 159 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 160 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Trigger_4::
# 164 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 165 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFE3
# 166 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 167 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 168 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 169 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DF92::
# 173 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkplayergender
# 174 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 175 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFAA
# 176 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 177 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFB8
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFAA::
# 182 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816B196, MSGBOX_DEFAULT
# 183 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFC6
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFB8::
# 187 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816B1BE, MSGBOX_DEFAULT
# 188 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFC6
	return


Naranja_IslaTangelo_G00_M10_EventScript_Sub_0814DFC6::
# 192 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	closemessage
# 193 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	applymovement LOCALID_ISLA_TANGELO_G00_M10_VARS, Naranja_IslaTangelo_G00_M10_Movement_0814DFE5
# 194 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 195 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	removeobject LOCALID_ISLA_TANGELO_G00_M10_VARS
# 196 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_3, 2
# 197 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G00_M10_VARS
# 198 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	releaseall
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_DUSKULL_DOLL_LocalId5::
# 203 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lockall
# 204 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_0816D51A, MSGBOX_NPC
# 205 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	nop
# 206 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	setwildbattle SPECIES_GEODUDE, 5, 0
# 207 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	special BattleSetup_StartLegendaryBattle
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sign_1::
# 212 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_IslaTangelo_G00_M10_Text_086BEF1C, MSGBOX_SIGN
	end


Naranja_IslaTangelo_G00_M10_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 217 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock
# 218 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	faceplayer
# 219 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 220 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	waitmessage
# 221 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_UPGRADED_POKEDEX
# 222 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G00_M10_EventScript_Sub_08152FA8
# 223 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	pokemart Naranja_IslaTangelo_G00_M10_Mart_08152F9C
# 224 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 225 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


Naranja_IslaTangelo_G00_M10_EventScript_Sub_08152FA8::
# 230 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	pokemart Naranja_IslaTangelo_G00_M10_Mart_08152FB8
# 231 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 232 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	release
	end


# 236 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DE8E:
# 237 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 238 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 239 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 240 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 241 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 242 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 243 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 244 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

# 247 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DE97:
# 248 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
# 249 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 250 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 251 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
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
	walk_in_place_faster_down
	step_end

# 260 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DEA2:
# 261 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 262 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 263 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 264 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 265 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 266 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 267 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 268 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_down
	step_end

# 271 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DEB9:
# 272 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
# 273 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 274 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 275 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 276 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 277 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 278 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
	step_end

# 281 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DEC1:
# 282 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 283 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 284 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 285 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_16
# 286 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 287 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 288 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 289 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 290 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
	step_end

# 293 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DECB:
# 294 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 295 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 296 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 297 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 298 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 299 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
# 300 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_up
	step_end

# 303 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFDE:
# 304 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
# 305 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	face_up
	step_end

# 308 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFE1:
# 309 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
	step_end

# 312 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFE3:
# 313 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	face_left
	step_end

# 316 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFE5:
# 317 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 318 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 319 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 320 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 321 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 322 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
	step_end

# 325 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFEC:
# 326 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	delay_8
# 327 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
	step_end

# 330 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_0814DFEF:
# 331 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_fast_up
# 332 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_in_place_faster_left
# 333 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	lock_facing_direction
# 334 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_right
# 335 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	unlock_facing_direction
	step_end

# 338 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Movement_086B336C:
# 339 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_down
# 340 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	walk_left
# 341 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	face_right
	step_end

	.align 2
# 344 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Mart_08152F9C:
# 345 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_POTION
# 346 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 347 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 348 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 351 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
Naranja_IslaTangelo_G00_M10_Mart_08152FB8:
# 352 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_POKE_BALL
# 353 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_POTION
# 354 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 355 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 356 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

Naranja_IslaTangelo_G00_M10_Text_0816AFE1::
# 359 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Lo que compras en los {COLOR 0x03}PokePuestos  \n{COLOR 0x01}se guarda en tu ぁぃぅ.\p¡ Así podrás usarlo cuando quieras !$"

Naranja_IslaTangelo_G00_M10_Text_0816B045::
# 363 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "¡Oiga! ¡Espere!\p       \pEsto no es el metro, y no,\nno le voy a dejar colarse.\pPara viajar en zepelin necesitará el \nbillete.          $"

Naranja_IslaTangelo_G00_M10_Text_0816B0CC::
# 367 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "I just discovered the footprints of\na rare POKéMON!\pWait until I finish sketching\nthem, okay?$"

Naranja_IslaTangelo_G00_M10_Text_0816B12A::
# 371 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "¿Viste todos esos geodudes?\pSon de un montañista que los cría para\nque le ayuden en los {COLOR 0x0E}Picos Naranjas$"

Naranja_IslaTangelo_G00_M10_Text_0816B196::
# 375 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Misty: ¡Ven!\n¡Vamos {PLAYER}, por aquí!\p¡¡-!!$"

Naranja_IslaTangelo_G00_M10_Text_0816B1BE::
# 379 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Ash: ¡{PLAYER}!\n¿Sabías que hay un centro\lde recuperación pokemon?\p ¡No me lo pierdo!$"

Naranja_IslaTangelo_G00_M10_Text_0816D51A::
# 383 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "{COLOR 0x04}¿Qué pinta aquí un geodude?\p{COLOR 0x09}¡Diuuuudd!$"

Naranja_IslaTangelo_G00_M10_Text_086B3490::
# 387 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "¡Hola!\p¿Eres turista verdad?\p{COLOR 0x04}{PLAYER}: Ehh…\p{COLOR 0x01}¿Conoces las ventajas de los\n{COLOR 0x03}PokePuestos{COLOR 0x01}?\p¡Ven Conmigo!$"

Naranja_IslaTangelo_G00_M10_Text_086BEF1C::
# 391 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "{COLOR 0x0D}Isla TANGELO\n{COLOR 0x09}“Vivela“$"

Naranja_IslaTangelo_G00_M10_Text_086BF54C::
# 395 "data/maps/Naranja_IslaTangelo_G00_M10/scripts.pory"
	.string "Este es un puesto típico de las islas.\p¿Lo sabías?\p{COLOR 0x04}{PLAYER}: Suponia que…\p{COLOR 0x01}Aquí podrás comprar objetos para \ntus pokemon, de todo…y barato.\pPor tu interés, te regalamos esta POCIÓN.\n$"
