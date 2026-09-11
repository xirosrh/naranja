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
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_08194766
# 35 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 37 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 38 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 44 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 45 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 46 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	checkflag FLAG_TEMP_1
# 47 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C7BC
# 48 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_TEMP_1
# 49 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_081944C5
# 50 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 52 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 53 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C7BC::
# 59 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_081945B2
# 60 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 62 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 63 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 64 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_OnFrame_1::
# 69 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lockall
# 70 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 71 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8CA
# 72 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 73 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8DF
# 74 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 75 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EA
# 76 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C92D
# 77 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_0819461D
# 78 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 79 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 80 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EB
# 81 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 82 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EB
# 83 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x156
# 84 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 85 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 0
# 86 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_NARANJA_CUEVA_DE_CRISTAL_EVENT_COMPLETE_006A
# 87 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_08194693
# 88 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 89 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 90 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 91 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C880
# 92 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 93 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C892
# 94 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 95 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8AE
# 96 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_08194706
# 97 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 98 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 99 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 100 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8F7
# 101 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 102 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C909
# 103 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 104 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C91B
# 105 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_081A0442
# 106 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	releaseall
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C880::
# 111 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815C96A
# 112 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C98F
# 113 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C892::
# 118 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815C96D
# 119 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C994
# 120 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 122 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8AE::
# 127 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815C96D
# 128 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C994
# 129 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 130 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 131 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8CA::
# 136 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 137 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 138 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 139 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8DF::
# 144 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C970
# 145 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EA::
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8EB::
# 154 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 155 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C98D
# 156 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C8F7::
# 161 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_CuevaDeCristal_G24_M04_Movement_0815C945
# 162 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C973
# 163 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C909::
# 168 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_CuevaDeCristal_G24_M04_Movement_0815C951
# 169 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C980
# 170 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C91B::
# 175 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3, Naranja_CuevaDeCristal_G24_M04_Movement_0815C951
# 176 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_CuevaDeCristal_G24_M04_Movement_0815C980
# 177 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0815C92D::
# 182 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playse SE_PIN
# 183 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 184 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 185 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 186 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_Trigger_5::
# 191 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId7::
# 196 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 197 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 198 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 199 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 200 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_08194188
# 201 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 202 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmoncry
# 203 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJECT_6_LocalId6::
# 208 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 209 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	faceplayer
# 210 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 211 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_086C081B
# 212 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 213 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_CUEVA_DE_CRISTAL_581, LOCALID_NONE, Naranja_CuevaDeCristal_G24_M04_Text_08194243
# 214 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_08194274
# 215 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 216 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA0
# 217 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 218 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 0
# 219 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 220 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815CA96
# 221 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_241, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAA2
# 222 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 223 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_241
# 224 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x32
# 225 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	addobject 17
# 226 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAAC
# 227 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 228 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 14, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC3
# 229 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAB4
# 230 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 231 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_0819432A
# 232 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 4
# 233 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CA8E
# 234 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 235 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	message Naranja_CuevaDeCristal_G24_M04_Text_0819434F
# 236 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmessage
# 237 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 238 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 239 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitbuttonpress
# 240 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmoncry
# 241 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	closemessage
# 242 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement 17, Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC0
# 243 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaDeCristal_G24_M04_Movement_0815CA9F
# 244 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 245 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject 14
# 246 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject 14
# 247 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B93B0
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_HIKER_LocalId9::
# 251 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CUEVA_DE_CRISTAL_635, LOCALID_NONE, Naranja_CuevaDeCristal_G24_M04_Text_08194814, Naranja_CuevaDeCristal_G24_M04_Text_081948A2
# 252 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_081948C4
# 253 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 6
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_081A0442::
# 258 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT
# 259 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3
# 260 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_NARANJA_CUEVA_DE_CRISTAL_EVENT_COMPLETE_0328
# 261 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_NARANJA_CUEVA_DE_CRISTAL_EVENT_COMPLETE_03D8
# 262 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 6
# 263 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_00C7
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 268 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB3
# 269 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 270 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 1
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B289C::
# 275 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY
# 276 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 277 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 278 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x10
# 279 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 280 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 281 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x20
# 282 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 283 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY, MAP_UNDEFINED
# 284 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 285 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 286 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 287 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 288 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 289 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	gotostd 0x6C
	return


Naranja_CuevaDeCristal_G24_M04_EventScript_OBJ_EVENT_GFX_MACHOKE_FACING_AWAY_LocalId4::
# 293 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock
# 294 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY
# 295 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 296 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x10
# 297 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 298 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x50
# 299 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	loadword 0, Naranja_CuevaDeCristal_G24_M04_Text_086B2900
# 300 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	callstd 2
# 301 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x20
# 302 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 303 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0x10
# 304 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 305 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	waitse
# 306 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	playmoncry SPECIES_ONIX, 0x4028
# 307 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 308 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 309 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 310 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setwildbattle SPECIES_ONIX, 0x14, 0
# 311 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	special StartRegiBattle
# 312 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay 0xA5
# 313 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY, Naranja_CuevaDeCristal_G24_M04_Movement_086B367C
# 314 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 3
# 315 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	fadescreen 0
# 316 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	removeobject LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY
# 317 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 318 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Trigger_2::
# 323 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	checkflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 324 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	call_if EQUAL, Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B289C
# 325 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Trigger_1::
# 330 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	nop
# 331 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	applymovement LOCALID_CUEVA_DE_CRISTAL_G24_M04_MACHOKE_FACING_AWAY, Naranja_CuevaDeCristal_G24_M04_Movement_085FEE7E
# 332 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	release
	end


Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_086B93B0::
# 337 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 338 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 339 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_STORY_STATE, 4
# 340 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setvar VAR_NARANJA_ISLAS_EVENT_STATE_2, 1
# 341 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_OLD_MAN_1
# 342 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	goto Naranja_CuevaDeCristal_G24_M04_EventScript_Sub_0814C614
	return


# 345 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C945:
# 346 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 347 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 348 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 349 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 350 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 351 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
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
	step_end

# 359 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C951:
# 360 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 361 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 362 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 363 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 364 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 365 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 366 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 367 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 368 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 369 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 370 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 373 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C96A:
# 374 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 375 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 378 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C96D:
# 379 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 380 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 383 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C970:
# 384 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_up
# 385 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 388 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C973:
# 389 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 390 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 391 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 392 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 393 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 394 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 395 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 396 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 397 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 398 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 399 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 400 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 403 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C980:
# 404 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_up
# 405 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 406 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 407 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 408 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
# 409 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 410 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 411 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 412 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 413 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 414 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 415 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
	step_end

# 418 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C98D:
# 419 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_right
	step_end

# 422 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C98F:
# 423 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_up
# 424 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_up
# 425 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_up
# 426 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_right
	step_end

# 429 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815C994:
# 430 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_right
# 431 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_fast_right
# 432 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_right
# 433 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

# 436 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CA8E:
# 437 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_right
	step_end

# 440 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CA96:
# 441 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_down
# 442 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	lock_facing_direction
# 443 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_up
# 444 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	unlock_facing_direction
# 445 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_in_place_faster_left
# 446 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 447 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_4
# 448 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_left
	step_end

# 451 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CA9F:
# 452 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 453 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
	step_end

# 456 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAA2:
# 457 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 458 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 459 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 460 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 461 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 462 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 463 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 464 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 465 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
	step_end

# 468 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAAC:
# 469 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_down
# 470 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 471 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
	step_end

# 474 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAB4:
# 475 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 476 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 477 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 478 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 479 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_left
# 480 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 481 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 482 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
# 483 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 484 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 485 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_down
	step_end

# 488 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC0:
# 489 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	emote_exclamation_mark
# 490 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_slow_right
	step_end

# 493 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_0815CAC3:
# 494 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	jump_2_left
# 495 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	jump_2_left
# 496 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	walk_fast_down
# 497 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 498 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 499 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 500 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 501 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	ride_water_current_down
# 502 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	jump_2_down
	step_end

# 505 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_081A083D:
# 506 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	face_original_direction
	step_end

# 509 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_085FEE7E:
# 510 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	delay_16
# 511 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	set_invisible
	step_end

# 514 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
Naranja_CuevaDeCristal_G24_M04_Movement_086B367C:
# 515 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	player_run_left
# 516 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	acro_wheelie_jump_down
# 517 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	set_invisible
	step_end

Naranja_CuevaDeCristal_G24_M04_Text_08194188::
# 520 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "¡Mejor vete ya {PLAYER}!$"

Naranja_CuevaDeCristal_G24_M04_Text_08194243::
# 524 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "El espectáculo…\p¡ Volverá tras una breve pausa !$"

Naranja_CuevaDeCristal_G24_M04_Text_08194274::
# 528 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "{COLOR 0x07}JAMES: Al menos…\p¡Que suerte que JESSIE\nesté en la central tramando lo próximo!\pMEOWTH: Tampoco se podrìa quejar:\ncon ella no va mejor.\pJAMES: ¡Todavìa no has visto nada\nmocos{RIVAL}!$"

Naranja_CuevaDeCristal_G24_M04_Text_0819432A::
# 532 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Sto. MARA: ¡Vaya!\nEscapó ese Meowth.$"

Naranja_CuevaDeCristal_G24_M04_Text_0819434F::
# 536 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Sto.MARA: Asì que eres \nun ladrón de Pokémon…\pQueda usted detenid{RIVAL}\npor entrar en area prohibida.\p{COLOR 0x04}¡No Sargento Mara!\pSoy un ENTRENADOR POKéMON.\pMe llamo {PLAYER} KETCHUM\ny soy de Pueblo PALETA.\pLlegué atrapad{RIVAL} por los remolinos.$"

Naranja_CuevaDeCristal_G24_M04_Text_081944C5::
# 540 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "... ...\pWhy can’t they keep digging?\nIs the bedrock too hard?\pMy beloved awaits me in VERDANTURF\nTOWN just beyond here...\pIf RUSTBORO and VERDANTURF were\njoined by this tunnel, I could visit\lher every day...\pBut this...\nWhat am I to do?$"

Naranja_CuevaDeCristal_G24_M04_Text_081945B2::
# 544 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\nyou need to go to DEWFORD, then pass\lthrough SLATEPORT and MAUVILLE...$"

Naranja_CuevaDeCristal_G24_M04_Text_0819461D::
# 548 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Wow! You shattered that boulder\nblocking the way.\pTo show you how much I appreciate it,\nI’d like you to have this HM.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194693::
# 552 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "That HM contains STRENGTH.\pIf a muscular POKéMON were to learn\nthat, it would be able to move even\llarge boulders.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194706::
# 556 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "WANDA!\nNow I can see you anytime!\pWANDA: That’s...wonderful.\pPlease, take some rest at my home.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194766::
# 560 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "On the other side of this rock...\nMy boyfriend is there.\pHe... He’s not just digging the tunnel\nto come see me.\pHe works his hands raw and rough\nfor the benefit of everyone.$"

Naranja_CuevaDeCristal_G24_M04_Text_08194814::
# 564 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "What do you call a wild man up in the\nmountains? A mountain man, right?\pSo why don’t they call a POKéMON in the\nmountains a mountain POKéMON?$"

Naranja_CuevaDeCristal_G24_M04_Text_081948A2::
# 568 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "My POKéMON...\nRan out of power...$"

Naranja_CuevaDeCristal_G24_M04_Text_081948C4::
# 572 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "They halted development here to\nprotect POKéMON, right?\lThere’s a feel-good story!$"

Naranja_CuevaDeCristal_G24_M04_Text_086B2900::
# 576 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "Guau!\pEste el Onix de cristal del que me habló\naquella niña.\p¡¡El {COLOR 0x06}Onix de cristal {COLOR 0x01}te está atacando!$"

Naranja_CuevaDeCristal_G24_M04_Text_086C081B::
# 580 "data/maps/Naranja_CuevaDeCristal_G24_M04/scripts.pory"
	.string "{COLOR 0x07}JAMES: Ya tenemos el guión  \ndel espectáculo que haremos\len cuanto robemos\lestos raros POKéMON rosas.\p¿Lo quieres ver?\p¡Nada puede fallar!\p¡No durarás ni un asalto!$"
