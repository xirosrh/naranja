Naranja_PuertoDeTangelo_G00_M09_MapScripts::
# 5 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuertoDeTangelo_G00_M09_OnTransition
# 6 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuertoDeTangelo_G00_M09_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PuertoDeTangelo_G00_M09_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 1, Naranja_PuertoDeTangelo_G00_M09_OnFrame_1
# 8 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 2, Naranja_PuertoDeTangelo_G00_M09_OnFrame_2
# 9 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 7, Naranja_PuertoDeTangelo_G00_M09_OnFrame_3
	.2byte 0


Naranja_PuertoDeTangelo_G00_M09_OnTransition::
# 14 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_080F
# 15 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 2
# 16 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D57B
# 17 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0052
# 18 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if LESS_THAN, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D583
# 19 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 3
# 20 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D5A6
# 21 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 4
# 22 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D570
# 23 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 4
# 24 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D570
# 25 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_3, 1
# 26 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D567
# 27 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 3
# 28 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D563
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D563::
# 33 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_012D
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D567::
# 38 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_3, 2
# 39 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G00_M10_VARS
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D570::
# 44 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 5
# 45 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 5
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D57B::
# 50 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, 0xE, 8
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D583::
# 55 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 0
# 56 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D59A
# 57 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, 0xA, 1
# 58 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, 7
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D59A::
# 63 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, 7, 2
# 64 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, 8
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D5A6::
# 69 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	clearflag FLAG_HIDE_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_2
# 70 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, 8
# 71 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 72 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 73 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D5C5
# 74 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 75 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D5CD
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D5C5::
# 80 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, 5, 9
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D5CD::
# 85 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, 0xE, 9
	return


Naranja_PuertoDeTangelo_G00_M09_OnFrame_1::
# 90 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 91 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8004, 5
# 92 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8005, 8
# 93 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D62B
# 94 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02F9
# 95 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	warpsilent MAP_NARANJA_PUEBLO_PALETA_G01_M00, 0xFF, 8, 8
# 96 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitstate
# 97 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_OnFrame_2::
# 102 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 103 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8004, 0xE
# 104 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8005, 8
# 105 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D62B
# 106 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02FA
# 107 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	warpsilent MAP_NARANJA_PUERTO_DE_TANGELO_G01_M02, 0xFF, 2, 8
# 108 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitstate
# 109 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D62B::
# 114 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay 0xF
# 115 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	playse SE_LEDGE
# 116 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6C0
# 117 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 118 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8004, 0x8005
# 119 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 120 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	addobject LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4
# 121 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6AC
# 122 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 123 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8004, 0x8005
# 124 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 125 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay 0xA
# 126 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6AE
# 127 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 128 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816A7C9
# 129 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
# 131 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6B1
# 132 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6B8
# 133 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 134 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8004, 0x8005
# 135 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 136 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6B5
# 137 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6BD
# 138 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 139 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_HIDE_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_2
# 140 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 3
# 141 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 142 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8004, 0x8005
# 143 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 144 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	clearflag FLAG_HIDE_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1
# 145 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_4000
	return


Naranja_PuertoDeTangelo_G00_M09_OnFrame_3::
# 150 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 151 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 8
# 152 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId2::
# 157 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AC00
# 158 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 2
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId3::
# 163 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AC56
# 164 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 2
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId4::
# 169 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lock
# 170 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	faceplayer
# 171 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 172 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D72F
# 173 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0052
# 174 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D722
# 175 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 0
# 176 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto_if NOT_EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D708
# 177 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816ACEB
# 178 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 179 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	release
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D708::
# 184 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AD82
# 185 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 186 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
# 187 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 188 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 189 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 2
# 190 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	release
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D722::
# 195 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	special GetPlayerBigGuyGirlString
# 196 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816ADF2
# 197 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 198 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	release
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D72F::
# 203 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AE25
# 204 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 205 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	release
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_1::
# 210 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 211 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D779
# 212 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 213 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D755
# 214 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D789
# 215 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 216 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D755::
# 221 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816ACEB
# 222 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 223 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
# 224 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D787
# 225 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D793
# 226 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 227 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AD3C
# 228 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 229 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_2::
# 234 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 235 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D7B3
# 236 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 237 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D755
# 238 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_PuertoDeTangelo_G00_M09_Movement_0814D7C0
# 239 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 240 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_3::
# 245 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 246 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 247 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 248 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 249 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 250 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AD82
# 251 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 252 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
# 253 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 254 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 255 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 2
# 256 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sign_1::
# 261 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AE50
# 262 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 3
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sign_2::
# 267 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AE87
# 268 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 3
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sign_3::
# 273 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 274 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 275 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 276 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_TOTODILE_DOLL_LocalId13
# 277 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 278 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_086B67B1
# 279 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sign_4::
# 284 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 285 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 286 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 287 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D84E
# 288 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 289 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sign_3
# 290 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D84E::
# 295 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816AEAC
# 296 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_9::
# 301 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 302 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8008, 1
# 303 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setobjectxy LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, 0xB, 9
# 304 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D8B6
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_6::
# 308 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 309 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8008, 2
# 310 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D8B6
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_7::
# 314 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 315 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8008, 3
# 316 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D8B6
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_4::
# 320 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 321 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8008, 4
# 322 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D8B6
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Trigger_5::
# 326 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lockall
# 327 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8008, 5
# 328 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D8B6
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D8B6::
# 332 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 333 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 334 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D93C
# 335 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 336 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D947
# 337 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 338 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 339 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D926
# 340 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 341 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D931
# 342 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816A8EE
# 343 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 344 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
# 345 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 346 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 347 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D952
# 348 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 349 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D995
# 350 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DD38
# 351 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 352 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 353 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DAAA
# 354 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 355 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DAED
# 356 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DD2B
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D926::
# 360 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8009, 5
# 361 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x800A, 8
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D931::
# 366 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x8009, 0xE
# 367 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_0x800A, 8
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D93C::
# 372 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 373 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D947::
# 378 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 379 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D952::
# 384 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 385 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D9D8
# 386 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 387 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D9ED
# 388 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 389 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA02
# 390 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 391 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA17
# 392 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 393 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA2C
# 394 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 395 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA41
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D995::
# 400 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 401 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D9D8
# 402 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 403 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D9ED
# 404 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 405 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA56
# 406 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 407 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA6B
# 408 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 409 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA80
# 410 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 411 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA95
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D9D8::
# 416 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 417 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 418 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC76
# 419 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D9ED::
# 424 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 425 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 426 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC7D
# 427 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA02::
# 432 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 433 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 434 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC84
# 435 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA17::
# 440 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 441 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 442 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC89
# 443 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA2C::
# 448 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 449 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 450 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC8F
# 451 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA41::
# 456 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 457 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 458 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC92
# 459 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA56::
# 464 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 465 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 466 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC96
# 467 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA6B::
# 472 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 473 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 474 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC9A
# 475 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA80::
# 480 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 481 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 482 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC9D
# 483 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DA95::
# 488 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 489 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 490 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCA3
# 491 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DAAA::
# 496 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 497 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB30
# 498 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 499 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB3B
# 500 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 501 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB46
# 502 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 503 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB6C
# 504 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 505 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB92
# 506 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 507 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DBB8
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DAED::
# 512 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 513 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB30
# 514 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 515 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB3B
# 516 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 517 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DBDE
# 518 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 519 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DC04
# 520 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 521 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DC2A
# 522 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 523 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DC50
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB30::
# 528 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCA8
# 529 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB3B::
# 534 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCAE
# 535 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB46::
# 540 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCB4
# 541 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 542 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 543 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 544 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 545 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 546 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 547 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 548 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB6C::
# 553 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCBA
# 554 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 555 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 556 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 557 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 558 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 559 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 560 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 561 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DB92::
# 566 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCC1
# 567 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 568 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 569 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 570 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 571 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 572 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 573 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 574 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DBB8::
# 579 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCC5
# 580 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 581 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 582 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 583 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 584 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 585 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 586 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 587 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DBDE::
# 592 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCCA
# 593 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 594 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 595 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 596 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 597 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 598 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 599 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 600 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DC04::
# 605 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCCF
# 606 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 607 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 608 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 609 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 610 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 611 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 612 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 613 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DC2A::
# 618 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCD3
# 619 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 620 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 621 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 622 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 623 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 624 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 625 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 626 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DC50::
# 631 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCDA
# 632 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 633 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 634 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 635 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 636 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 637 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 638 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 639 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 644 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lock
# 645 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	faceplayer
# 646 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	checkplayergender
# 647 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 648 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D926
# 649 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 650 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814D931
# 651 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	call Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DD38
# 652 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 653 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 654 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	opendoor 0x8009, 0x800A
# 655 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 656 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0
# 657 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 658 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	hideobjectat LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 659 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closedoor 0x8009, 0x800A
# 660 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitdooranim
# 661 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	goto Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DD2B
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DD2B::
# 665 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	removeobject LOCALID_PUERTO_DE_TANGELO_G00_M09_SCIENTIST_1_4
# 666 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 667 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 4
# 668 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	release
	end


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_0814DD38::
# 673 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816A8FD
# 674 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 675 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 676 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	message Naranja_PuertoDeTangelo_G00_M09_Text_0816AA32
# 677 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitfanfare
# 678 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	waitmessage
# 679 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0112
# 680 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AA5C
# 681 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 682 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	loadword 0, Naranja_PuertoDeTangelo_G00_M09_Text_0816AB10
# 683 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	callstd 4
# 684 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	closemessage
# 685 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay 0x1E
	return


Naranja_PuertoDeTangelo_G00_M09_EventScript_Sub_086B67B1::
# 690 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	gotostd 0x28
	return


# 693 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6AC:
# 694 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
	step_end

# 697 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6AE:
# 698 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 699 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_left
	step_end

# 702 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6B1:
# 703 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_16
# 704 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_8
# 705 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
	step_end

# 708 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6B5:
# 709 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 710 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	set_invisible
	step_end

# 713 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6B8:
# 714 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_16
# 715 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_8
# 716 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 717 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 720 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6BD:
# 721 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 722 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
	step_end

# 725 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D6C0:
# 726 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	jump_right
# 727 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_16
# 728 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_16
# 729 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_16
	step_end

# 732 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D779:
# 733 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	face_right
# 734 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_8
# 735 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	disable_jump_landing_ground_effect
# 736 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	jump_in_place_right
# 737 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_8
# 738 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 739 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 740 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 741 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 742 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_up
# 743 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_up
# 744 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_left
# 745 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	face_down
	step_end

# 748 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D787:
# 749 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
	step_end

# 752 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D789:
# 753 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 754 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 755 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 756 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 757 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 758 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 759 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 760 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 761 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_down
	step_end

# 764 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D793:
# 765 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	lock_facing_direction
# 766 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 767 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 770 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D7B3:
# 771 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	face_right
# 772 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_8
# 773 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	disable_jump_landing_ground_effect
# 774 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	jump_in_place_right
# 775 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	delay_8
# 776 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 777 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 778 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 779 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_up
# 780 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_up
# 781 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_fast_right
# 782 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	face_down
	step_end

# 785 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814D7C0:
# 786 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 787 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 788 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 789 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 790 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 791 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_down
	step_end

# 794 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC76:
# 795 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 796 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 797 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 798 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 799 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 800 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
	step_end

# 803 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC7D:
# 804 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 805 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 806 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 807 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 808 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
# 809 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
	step_end

# 812 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC84:
# 813 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 814 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 815 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 816 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
	step_end

# 819 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC89:
# 820 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 821 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 822 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 823 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 824 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
	step_end

# 827 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC8F:
# 828 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 829 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
	step_end

# 832 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC92:
# 833 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 834 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 835 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
	step_end

# 838 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC96:
# 839 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 840 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 841 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
	step_end

# 844 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC9A:
# 845 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 846 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
	step_end

# 849 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DC9D:
# 850 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 851 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 852 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 853 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 854 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
	step_end

# 857 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCA3:
# 858 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 859 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 860 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 861 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
	step_end

# 864 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCA8:
# 865 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 866 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 867 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 868 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 869 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
	step_end

# 872 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCAE:
# 873 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 874 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 875 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 876 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
# 877 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_down
	step_end

# 880 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCB4:
# 881 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 882 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 883 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 884 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 885 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 888 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCBA:
# 889 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 890 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 891 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 892 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 893 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 894 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 897 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCC1:
# 898 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 899 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 900 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 903 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCC5:
# 904 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 905 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 906 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_left
# 907 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 910 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCCA:
# 911 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 912 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 913 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 914 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 917 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCCF:
# 918 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 919 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 920 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 923 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCD3:
# 924 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 925 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 926 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 927 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 928 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 929 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 932 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCDA:
# 933 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 934 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 935 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 936 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_right
# 937 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_in_place_faster_up
	step_end

# 940 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
Naranja_PuertoDeTangelo_G00_M09_Movement_0814DCE0:
# 941 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	walk_up
	step_end

Naranja_PuertoDeTangelo_G00_M09_Text_0816A7C9::
# 944 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "MOM: {PLAYER}, we’re here, honey!\pIt must be tiring riding with our things\nin the moving truck.\pWell, this is LITTLEROOT TOWN.\pHow do you like it?\nThis is our new home!\pIt has a quaint feel, but it seems to be\nan easy place to live, don’t you think?\pAnd, you get your own room, {PLAYER}!\nLet’s go inside.$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816A8EE::
# 948 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816A8FD::
# 952 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\nintroduce yourself to PROF. BIRCH?\pOh! What an adorable POKéMON!\nYou got it from PROF. BIRCH. How nice!\pYou’re your father’s child, all right.\nYou look good together with POKéMON!\pHere, honey! If you’re going out on an\nadventure, wear these RUNNING SHOES.\pThey’ll put a zip in your step!$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AA32::
# 956 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "{PLAYER} switched shoes with the\nRUNNING SHOES.$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AA5C::
# 960 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\ninstructions.\p“Press the B Button while wearing these\nRUNNING SHOES to run extra-fast!\p“Slip on these RUNNING SHOES and race\nin the great outdoors!”$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AB10::
# 964 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pTo think that you have your very own\nPOKéMON now...\lYour father will be overjoyed.\p...But please be careful.\nIf anything happens, you can come home.\pGo on, go get them, honey!$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AC00::
# 968 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "If you use a PC, you can store items\nand POKéMON.\pThe power of science is staggering!$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AC56::
# 972 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\nstudying, then he’ll suddenly go out in\lthe wild to do more research...\pWhen does PROF. BIRCH spend time\nat home?$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816ACEB::
# 976 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "If you go in the tall grass at the sides\nof this road, wild POKéMON will appear.$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AD3C::
# 980 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "It’s not safe to go out there if you\ndon’t have any POKéMON with you.$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AD82::
# 984 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "I can hear someone shouting down the\nroad here.\pWhat should I do? What should we do?\nSomebody has to go help...$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816ADF2::
# 988 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "Boy, am I glad you went and rescued\nthe PROFESSOR.$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AE25::
# 992 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "Are you going to catch POKéMON?\nGood luck!$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AE50::
# 996 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "LITTLEROOT TOWN\n“A town that can’t be shaded any hue.”$"

Naranja_PuertoDeTangelo_G00_M09_Text_0816AE87::
# 1000 "data/maps/Naranja_PuertoDeTangelo_G00_M09/scripts.pory"
	.string "Laboratorio Profesora IVY$"
