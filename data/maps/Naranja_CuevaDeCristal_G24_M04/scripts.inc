Naranja_CuevaDeCristal_G24_M04_MapScripts::
# 5 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CuevaDeCristal_G24_M04_OnTransition
# 6 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_CuevaDeCristal_G24_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_CuevaDeCristal_G24_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	map_script_2 VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 4, Naranja_CuevaDeCristal_G24_M04_OnFrame_1
# 8 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	map_script_2 VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 5, Naranja_CuevaDeCristal_G24_M04_OnFrame_1
	.2byte 0


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0814C614::
# 13 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 14 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_TEMP_1, 4
# 15 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_CuevaDeCristal_G24_M04_OnTransition::
# 19 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 20 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 2
# 21 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C773
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C773::
# 26 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setobjectxyperm LOCALID_CUEVA_DE_CRISTAL_G24_M04_WINGULL, 0xD, 4
# 27 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setobjectxyperm LOCALID_CUEVA_DE_CRISTAL_G24_M04_241, 0xD, 5
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId10::
# 32 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 33 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_08194766, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 36 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 37 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 43 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 44 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 45 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	checkflag FLAG_TEMP_1
# 46 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C7BC
# 47 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_081944C5, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 50 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 51 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C7BC::
# 57 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_081945B2, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 59 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 60 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 61 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_OnFrame_1::
# 66 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lockall
# 67 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 68 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8CA
# 69 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 70 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8DF
# 71 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 72 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EA
# 73 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C92D
# 74 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_0819461D, MSGBOX_DEFAULT
# 75 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 76 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EB
# 77 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 78 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EB
# 79 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x156
# 80 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 81 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 0
# 82 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_NARANJA_CUEVA_DE_CRISTAL_EVENT_COMPLETE_006A
# 83 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_08194693, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 85 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 86 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C880
# 87 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 88 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C892
# 89 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 90 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8AE
# 91 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_08194706, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 93 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 94 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8F7
# 95 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 96 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C909
# 97 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 98 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C91B
# 99 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_081A0442
# 100 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	releaseall
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C880::
# 105 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815C96A
# 106 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C98F
# 107 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C892::
# 112 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815C96D
# 113 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C994
# 114 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 115 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 116 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8AE::
# 121 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815C96D
# 122 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C994
# 123 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 124 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 125 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8CA::
# 130 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 131 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 132 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 133 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8DF::
# 138 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C970
# 139 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EA::
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EB::
# 148 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 149 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C98D
# 150 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8F7::
# 155 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_CuevaDeCristal_G24_M04_Movement_0815C945
# 156 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C973
# 157 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C909::
# 162 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_CuevaDeCristal_G24_M04_Movement_0815C951
# 163 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C980
# 164 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C91B::
# 169 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_CuevaDeCristal_G24_M04_Movement_0815C951
# 170 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C980
# 171 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C92D::
# 176 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playse SE_PIN
# 177 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 178 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 179 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 180 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Trigger_5::
# 185 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId7::
# 190 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 191 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 192 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 193 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 194 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_08194188, MSGBOX_DEFAULT
# 195 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmoncry
# 196 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJECT_6_LocalId6::
# 201 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 202 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 203 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 204 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_086C081B, MSGBOX_DEFAULT
# 205 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_CUEVA_DE_CRISTAL_581, LOCALID_NONE, Naranja_CuevaDeCristal_G24_M04_Text_08194243
# 206 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_08194274, MSGBOX_DEFAULT
# 207 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA0
# 208 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 209 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 0
# 210 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 211 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815CA96
# 212 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_241, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAA2
# 213 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 214 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_241
# 215 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x32
# 216 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	addobject 17
# 217 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAAC
# 218 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 219 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 14, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC3
# 220 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAB4
# 221 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 222 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_0819432A, MSGBOX_DEFAULT
# 223 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CA8E
# 224 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 225 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	message Naranja_CuevaDeCristal_G24_M04_Text_0819434F
# 226 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmessage
# 227 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 228 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 229 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitbuttonpress
# 230 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmoncry
# 231 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 232 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC0
# 233 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815CA9F
# 234 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 235 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject 14
# 236 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject 14
# 237 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B93B0
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_HIKER_LocalId9::
# 241 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CUEVA_DE_CRISTAL_635, LOCALID_NONE, Naranja_CuevaDeCristal_G24_M04_Text_08194814, Naranja_CuevaDeCristal_G24_M04_Text_081948A2
# 242 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_081948C4, MSGBOX_AUTOCLOSE
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_081A0442::
# 247 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT
# 248 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3
# 249 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_NARANJA_CUEVA_DE_CRISTAL_EVENT_COMPLETE_0328
# 250 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_NARANJA_CUEVA_DE_CRISTAL_EVENT_COMPLETE_03D8
# 251 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 6
# 252 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_00C7
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 257 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB3
# 258 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 259 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 1
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B289C::
# 264 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY
# 265 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 266 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 267 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x10
# 268 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 269 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 270 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x20
# 271 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 272 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY, MAP_UNDEFINED
# 273 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 274 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 275 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 276 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 277 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 278 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	gotostd 0x6C
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_MACHOKE_FACING_AWAY_LocalId4::
# 282 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 283 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY
# 284 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 285 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x10
# 286 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 287 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x50
# 288 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	msgbox Naranja_CuevaDeCristal_G24_M04_Text_086B2900, MSGBOX_NPC
# 289 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x20
# 290 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 291 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x10
# 292 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 293 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 294 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playmoncry SPECIES_ONIX, 0x4028
# 295 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 296 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 297 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 298 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setwildbattle SPECIES_ONIX, 0x14, 0
# 299 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	special StartRegiBattle
# 300 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0xA5
# 301 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY, Naranja_CuevaDeCristal_G24_M04_Movement_086B367C
# 302 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 303 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 304 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY
# 305 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 306 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Trigger_2::
# 311 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	checkflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 312 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B289C
# 313 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Trigger_1::
# 318 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 319 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY, Naranja_CuevaDeCristal_G24_M04_Movement_085FEE7E
# 320 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B93B0::
# 325 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 326 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 327 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_STORY_STATE, 4
# 328 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_NARANJA_ISLAS_EVENT_STATE_2, 1
# 329 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_OLD_MAN_1
# 330 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0814C614
	return


# 333 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C945:
# 334 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 335 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 336 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 337 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 338 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 339 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 340 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 341 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 342 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 343 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 344 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 347 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C951:
# 348 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 349 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 350 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 351 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 352 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 353 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 354 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 355 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 356 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 357 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 358 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 361 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C96A:
# 362 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 363 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 366 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C96D:
# 367 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 368 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 371 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C970:
# 372 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_up
# 373 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 376 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C973:
# 377 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 378 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 379 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 380 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 381 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 382 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 383 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 384 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 385 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 386 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 387 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 388 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 391 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C980:
# 392 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_up
# 393 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 394 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 395 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 396 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 397 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 398 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 399 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 400 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 401 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 402 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 403 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 406 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C98D:
# 407 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
	step_end

# 410 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C98F:
# 411 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_up
# 412 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_up
# 413 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_up
# 414 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_right
	step_end

# 417 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C994:
# 418 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_right
# 419 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_right
# 420 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_right
# 421 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

# 424 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CA8E:
# 425 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_right
	step_end

# 428 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CA96:
# 429 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_down
# 430 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock_facing_direction
# 431 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_up
# 432 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	unlock_facing_direction
# 433 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_left
# 434 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 435 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_4
# 436 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_left
	step_end

# 439 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CA9F:
# 440 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 441 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
	step_end

# 444 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAA2:
# 445 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 446 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 447 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 448 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 449 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 450 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 451 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 452 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 453 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
	step_end

# 456 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAAC:
# 457 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 458 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 459 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
	step_end

# 462 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAB4:
# 463 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 464 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 465 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 466 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 467 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 468 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 469 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 470 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
# 471 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 472 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 473 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_down
	step_end

# 476 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC0:
# 477 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
# 478 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_slow_right
	step_end

# 481 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC3:
# 482 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	jump_2_left
# 483 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	jump_2_left
# 484 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 485 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 486 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 487 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 488 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 489 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 490 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	jump_2_down
	step_end

# 493 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_081A083D:
# 494 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_original_direction
	step_end

# 497 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_085FEE7E:
# 498 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 499 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	set_invisible
	step_end

# 502 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_086B367C:
# 503 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	player_run_left
# 504 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	acro_wheelie_jump_down
# 505 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	set_invisible
	step_end

Naranja_CuevaDeCristal_G24_M04_Text_08194188::
# 508 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "¡Mejor vete ya {PLAYER}!$"

Naranja_CuevaDeCristal_G24_M04_Text_08194243::
# 512 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "El espectáculo…\p¡ Volverá tras una breve pausa !$"

Naranja_CuevaDeCristal_G24_M04_Text_08194274::
# 516 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "{COLOR 0x07}JAMES: Al menos…\p¡Que suerte que JESSIE\nesté en la central tramando lo próximo!\pMEOWTH: Tampoco se podrìa quejar:\ncon ella no va mejor.\pJAMES: ¡Todavìa no has visto nada\nmocos{RIVAL}!$"

Naranja_CuevaDeCristal_G24_M04_Text_0819432A::
# 520 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Sto. MARA: ¡Vaya!\nEscapó ese Meowth.$"

Naranja_CuevaDeCristal_G24_M04_Text_0819434F::
# 524 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Sto.MARA: Asì que eres \nun ladrón de Pokémon…\pQueda usted detenid{RIVAL}\npor entrar en area prohibida.\p{COLOR 0x04}¡No Sargento Mara!\pSoy un ENTRENADOR POKéMON.\pMe llamo {PLAYER} KETCHUM\ny soy de Pueblo PALETA.\pLlegué atrapad{RIVAL} por los remolinos.$"

Naranja_CuevaDeCristal_G24_M04_Text_081944C5::
# 528 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "... ...\pWhy can’t they keep digging?\nIs the bedrock too hard?\pMy beloved awaits me in VERDANTURF\nTOWN just beyond here...\pIf RUSTBORO and VERDANTURF were\njoined by this tunnel, I could visit\lher every day...\pBut this...\nWhat am I to do?$"

Naranja_CuevaDeCristal_G24_M04_Text_081945B2::
# 532 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\nyou need to go to DEWFORD, then pass\lthrough SLATEPORT and MAUVILLE...$"

Naranja_CuevaDeCristal_G24_M04_Text_0819461D::
# 536 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Wow! You shattered that boulder\nblocking the way.\pTo show you how much I appreciate it,\nI’d like you to have this HM.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194693::
# 540 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "That HM contains STRENGTH.\pIf a muscular POKéMON were to learn\nthat, it would be able to move even\llarge boulders.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194706::
# 544 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "WANDA!\nNow I can see you anytime!\pWANDA: That’s...wonderful.\pPlease, take some rest at my home.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194766::
# 548 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "On the other side of this rock...\nMy boyfriend is there.\pHe... He’s not just digging the tunnel\nto come see me.\pHe works his hands raw and rough\nfor the benefit of everyone.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194814::
# 552 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "What do you call a wild man up in the\nmountains? A mountain man, right?\pSo why don’t they call a POKéMON in the\nmountains a mountain POKéMON?$"

Naranja_CuevaDeCristal_G24_M04_Text_081948A2::
# 556 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "My POKéMON...\nRan out of power...$"

Naranja_CuevaDeCristal_G24_M04_Text_081948C4::
# 560 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "They halted development here to\nprotect POKéMON, right?\lThere’s a feel-good story!$"

Naranja_CuevaDeCristal_G24_M04_Text_086B2900::
# 564 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Guau!\pEste el Onix de cristal del que me habló\naquella niña.\p¡¡El {COLOR 0x06}Onix de cristal {COLOR 0x01}te está atacando!$"

Naranja_CuevaDeCristal_G24_M04_Text_086C081B::
# 568 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "{COLOR 0x07}JAMES: Ya tenemos el guión  \ndel espectáculo que haremos\len cuanto robemos\lestos raros POKéMON rosas.\p¿Lo quieres ver?\p¡Nada puede fallar!\p¡No durarás ni un asalto!$"
