Naranja_PuebloPaleta_G01_M00_MapScripts::
# 5 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_PuebloPaleta_G01_M00_OnLoad
# 6 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuebloPaleta_G01_M00_OnTransition
# 7 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuebloPaleta_G01_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PuebloPaleta_G01_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 3, Naranja_PuebloPaleta_G01_M00_OnFrame_1
# 9 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 5, Naranja_PuebloPaleta_G01_M00_OnFrame_2
# 10 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6, Naranja_PuebloPaleta_G01_M00_OnFrame_3
# 11 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 1, Naranja_PuebloPaleta_G01_M00_OnFrame_4
# 12 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 3, Naranja_PuebloPaleta_G01_M00_OnFrame_5
	.2byte 0


Naranja_PuebloPaleta_G01_M00_OnLoad::
# 17 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6
# 18 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if LESS_THAN, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152660
# 19 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0112
# 20 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152673
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152660::
# 25 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setmetatile 5, 4, 0x270, 1
# 26 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setmetatile 5, 2, 0x268, 1
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152673::
# 31 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkplayergender
# 32 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152680
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152680::
# 38 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setmetatile 3, 7, 0x293, 1
	return


Naranja_PuebloPaleta_G01_M00_OnTransition::
# 43 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 3
# 44 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526C4
# 45 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 5
# 46 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526AC
# 47 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6
# 48 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526B8
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526AC::
# 53 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setobjectxyperm LOCALID_PUEBLO_PALETA_G01_M00_MOM, 8, 4
# 54 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setobjectmovementtype LOCALID_PUEBLO_PALETA_G01_M00_MOM, 7
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526B8::
# 59 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setobjectxyperm LOCALID_PUEBLO_PALETA_G01_M00_MOM, 4, 5
# 60 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setobjectmovementtype LOCALID_PUEBLO_PALETA_G01_M00_MOM, 7
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526C4::
# 65 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setobjectxyperm LOCALID_PUEBLO_PALETA_G01_M00_MOM, 9, 8
# 66 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setobjectmovementtype LOCALID_PUEBLO_PALETA_G01_M00_MOM, 7
	return


Naranja_PuebloPaleta_G01_M00_OnFrame_2::
# 71 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 72 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172574
# 73 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 75 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_08152720
# 76 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_MOM, Naranja_PuebloPaleta_G01_M00_Movement_08152720
# 77 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 78 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	warp MAP_NARANJA_PUERTO_DE_TANGELO_G01_M01, 0xFF, 7, 1
# 79 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitstate
# 80 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_OnFrame_1::
# 85 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 86 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 87 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 88 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6956
	return


Naranja_PuebloPaleta_G01_M00_OnFrame_3::
# 92 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 93 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 94 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8005, 1
# 95 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6ABF
	return


Naranja_PuebloPaleta_G01_M00_OnFrame_4::
# 99 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 100 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_PIN
# 101 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_BARD, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 102 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 103 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_BARD, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 104 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 105 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 106 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_BARD, Naranja_PuebloPaleta_G01_M00_Movement_08152782
# 107 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	special GetRivalSonDaughterString
# 109 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081730C2
# 110 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0057
# 112 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 2
# 113 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Trigger_1::
# 118 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 119 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 120 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 121 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 122 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 123 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69B7
	return


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_BARD_LocalId4::
# 127 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 128 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 129 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0082
# 130 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A21
# 131 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_012D
# 132 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A17
# 133 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 3
# 134 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A2B
# 135 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	special GetRivalSonDaughterString
# 136 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_086B3E00
# 137 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 138 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A17::
# 143 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08173262
# 144 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A21::
# 150 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081732B9
# 151 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 152 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A2B::
# 157 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081731E3
# 158 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 159 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId3::
# 164 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 165 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 166 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_VICTORY_ROAD_EVENT_COMPLETE_007E
# 167 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081543F7
# 168 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 169 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154427
# 170 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 171 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154406
# 172 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0087
# 173 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_0815443B
# 174 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08179805
# 175 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 176 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0087
# 177 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081543F7::
# 182 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 183 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154431
# 184 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154406
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154406::
# 188 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08179996
# 189 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 190 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x155
# 191 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 192 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 0
# 193 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 194 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08179B14
# 195 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 196 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154427::
# 201 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08179B5B
# 202 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 203 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154431::
# 208 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08179B92
# 209 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 210 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_0815443B::
# 215 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_086BFAD3
# 216 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 217 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6956::
# 222 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_086BEBCF
# 223 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 224 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 225 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 226 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 227 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B699F
# 228 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 229 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69AA
# 230 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172453
# 231 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 232 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 233 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 4
# 234 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B69B5
# 235 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 236 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 237 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B699F::
# 242 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 243 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69AA::
# 248 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 249 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69B7::
# 254 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172531
# 255 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 256 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 257 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 258 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6CDC
# 259 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 260 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6AB8::
# 265 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 7
# 266 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6ABF::
# 271 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 272 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 273 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6B9D
# 274 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6CCC
# 275 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 276 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, 0
# 277 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081725C9
# 278 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 279 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 280 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_PuebloPaleta_G01_M00_Movement_081B6BDB
# 281 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 282 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6CD2
# 283 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 284 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6BBE
# 285 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 286 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 287 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081725FE
# 288 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 289 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172644
# 290 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 291 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 292 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_TEMP_1, 1
# 293 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_PuebloPaleta_G01_M00_Movement_081B6BE1
# 294 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 295 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6AB8
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6B9D::
# 299 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_PIN
# 300 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 301 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 302 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 303 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 304 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081725A3
# 305 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 306 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6BBE::
# 311 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 312 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 313 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172841
# 314 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 315 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	fadedefaultbgm
# 316 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	special TurnOffTVScreen
# 317 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0830
# 318 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay 0x23
	return


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_MOM_LocalId1::
# 323 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 324 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 325 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 4
# 326 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C33
# 327 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 4
# 328 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C33
# 329 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 330 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C3D
# 331 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0052
# 332 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C72
# 333 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 334 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C80
# 335 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 7
# 336 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C9C
# 337 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_086BEBCF
# 338 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 339 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C33::
# 344 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172BBC
# 345 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 346 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C3D::
# 351 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0085
# 352 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C72
# 353 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172782
# 354 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 355 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBD
# 356 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 357 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 0
# 358 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 359 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 360 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081727CD
# 361 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 362 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0085
# 363 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C72::
# 368 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172717
# 369 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 370 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C8A
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C80::
# 374 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081726D2
# 375 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 376 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C8A::
# 381 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 382 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call Naranja_Route119_G32_M00_EventScript_Sub_081A02CA
# 383 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	incrementgamestat 0x10
# 384 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_0817276B
# 385 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 386 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C9C::
# 391 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081726E7
# 392 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 393 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_CHIKORITA_DOLL_LocalId2::
# 398 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 399 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 400 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitse
# 401 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playmoncry SPECIES_MACHOKE, 0
# 402 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_086BEEEB
# 403 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 404 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmoncry
# 405 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_OnFrame_5::
# 410 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 411 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkplayergender
# 412 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 413 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DAD
# 414 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 415 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DBD
# 416 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 417 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E1D
# 418 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 419 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E28
# 420 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 421 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 422 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_PIN
# 423 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 424 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 425 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 426 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 427 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay 0x14
# 428 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 429 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DCD
# 430 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 431 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DD8
# 432 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_0817298B
# 433 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 434 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x109
# 435 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 436 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 0
# 437 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172A7D
# 438 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 439 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 440 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 441 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DE3
# 442 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 443 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DEE
# 444 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172B5E
# 445 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 4
# 446 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 447 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 448 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DF9
# 449 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 450 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E0B
# 451 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_DOOR
# 452 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	removeobject 32777
# 453 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0123
# 454 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 4
# 455 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 4
# 456 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DAD::
# 461 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8008, 0
# 462 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8009, 5
# 463 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x800A, 1
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DBD::
# 468 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8008, 1
# 469 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8009, 5
# 470 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x800A, 1
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DCD::
# 475 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E33
# 476 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DD8::
# 481 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E36
# 482 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DE3::
# 487 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E39
# 488 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DEE::
# 493 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E3B
# 494 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DF9::
# 499 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E4F
# 500 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E3D
# 501 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E0B::
# 506 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E4F
# 507 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E43
# 508 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E1D::
# 513 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E49
# 514 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E28::
# 519 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E54
# 520 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 524 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_08152720:
# 525 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_up
	step_end

# 528 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_08152782:
# 529 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 530 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 531 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 532 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 533 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 534 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
	step_end

# 537 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B69B5:
# 538 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_up
	step_end

# 541 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6BDB:
# 542 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 543 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

# 546 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6BE1:
# 547 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 548 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 549 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

# 552 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6CCC:
# 553 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 554 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 555 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 556 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 557 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 560 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6CD2:
# 561 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 564 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6CDC:
# 565 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_up
	step_end

# 568 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E33:
# 569 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 570 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
	step_end

# 573 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E36:
# 574 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 575 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 578 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E39:
# 579 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 582 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E3B:
# 583 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
	step_end

# 586 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E3D:
# 587 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 588 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 589 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 590 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 591 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_8
	step_end

# 594 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E43:
# 595 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 596 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 597 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 598 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 599 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_8
	step_end

# 602 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E49:
# 603 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 604 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 605 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 606 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 607 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_left
	step_end

# 610 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E4F:
# 611 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 612 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 613 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 614 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_down
	step_end

# 617 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E54:
# 618 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 619 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 620 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 621 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 622 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_PuebloPaleta_G01_M00_Text_08172453::
# 625 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "The mover’s POKéMON do all the work\nof moving us in and cleaning up after.\lThis is so convenient!\p{PLAYER}, your room is upstairs.\nGo check it out, dear!\pDAD bought you a new clock to mark\nour move here.\lDon’t forget to set it!$"

Naranja_PuebloPaleta_G01_M00_Text_08172531::
# 629 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Well, {PLAYER}?\pAren’t you interested in seeing your\nvery own room?$"

Naranja_PuebloPaleta_G01_M00_Text_08172574::
# 633 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: {PLAYER}.\pGo set the clock in your room, honey.$"

Naranja_PuebloPaleta_G01_M00_Text_081725A3::
# 637 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\nQuick! Come quickly!$"

Naranja_PuebloPaleta_G01_M00_Text_081725C9::
# 641 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Look! It’s PETALBURG GYM!\nMaybe DAD will be on!$"

Naranja_PuebloPaleta_G01_M00_Text_081725FE::
# 645 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Oh... It’s over.\pI think DAD was on, but we missed him.\nToo bad.$"

Naranja_PuebloPaleta_G01_M00_Text_08172644::
# 649 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh, yes.\nOne of DAD’s friends lives in town.\pPROF. BIRCH is his name.\pHe lives right next door, so you should\ngo over and introduce yourself.$"

Naranja_PuebloPaleta_G01_M00_Text_081726D2::
# 653 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: See you, honey!$"

Naranja_PuebloPaleta_G01_M00_Text_081726E7::
# 657 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Did you introduce yourself to\nPROF. BIRCH?$"

Naranja_PuebloPaleta_G01_M00_Text_08172717::
# 661 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\nYou look a little tired.\pI think you should rest a bit.$"

Naranja_PuebloPaleta_G01_M00_Text_0817276B::
# 665 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Take care, honey!$"

Naranja_PuebloPaleta_G01_M00_Text_08172782::
# 669 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\pThen here’s something from your MOM!$"

Naranja_PuebloPaleta_G01_M00_Text_081727CD::
# 673 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Don’t push yourself too hard, dear.\nYou can always come home.\pGo for it, honey!$"

Naranja_PuebloPaleta_G01_M00_Text_08172841::
# 677 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "INTERVIEWER: ...We brought you this\nreport from in front of PETALBURG GYM.$"

Naranja_PuebloPaleta_G01_M00_Text_0817298B::
# 681 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "DAD: Hm?\pHey, it’s {PLAYER}!\pIt’s been a while since I saw you,\nbut you look...stronger, somehow.\pThat’s the impression I get.\nBut your old man hasn’t given up yet!\pOh, yes, I have something for you.\nThis came to you from someone named\lMR. BRINEY.$"

Naranja_PuebloPaleta_G01_M00_Text_08172A7D::
# 685 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\pIf I recall, there are ferry ports in\nSLATEPORT and LILYCOVE.\p{PLAYER}, if you have ambition as a\nTRAINER, go to the BATTLE TOWER.\pIt should teach you that there is\nno end to a TRAINER’s chosen path.$"

Naranja_PuebloPaleta_G01_M00_Text_08172B5E::
# 689 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "I’d better get back to PETALBURG GYM.\pMOM, thanks for looking after the house\nwhile I’m away.$"

Naranja_PuebloPaleta_G01_M00_Text_08172BBC::
# 693 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: That DAD of yours...\pHe comes home for the first time in a\nwhile, but all he talks about is POKéMON.\pHe should relax and stay a little longer.$"

Naranja_PuebloPaleta_G01_M00_Text_081730C2::
# 697 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh, hello. And you are?\p... ... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ... ...\pOh, you’re {PLAYER}{KUN}, our new next-door\nneighbor! Hi!\pWe have a {STR_VAR_1} about the same\nage as you.\pOur {STR_VAR_1} was excited about making\na new friend.\pOur {STR_VAR_1} is upstairs, I think.$"

Naranja_PuebloPaleta_G01_M00_Text_081731E3::
# 701 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Where has my husband gone?\nJust when {PLAYER}{KUN} is visiting, too...\pThat man can never sit still for long...\nHe might be at his LAB.$"

Naranja_PuebloPaleta_G01_M00_Text_08173262::
# 705 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh, {RIVAL} has gone out somewhere.\pLike father, like child.\n{RIVAL} can’t stay quietly at home.$"

Naranja_PuebloPaleta_G01_M00_Text_081732B9::
# 709 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "¿Ya no te acuerdas de mí?\pSoy la famosa y envidiada líder del  \ngimansio-piscina de Celeste,\ljaja…\p{COLOR 0x04}{PLAYER}: No me digas…\p¿Y cómo tù por aquí?\p{COLOR 0x01}Pues nada moquillo.  \nQue venía a visitar a tu madre.$"

Naranja_PuebloPaleta_G01_M00_Text_08179805::
# 713 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "¡¿Ya estás aquí {PLAYER}{KUN}?!\pGuau, cambiaste muchisimo y además \nte has hecho un pequeño campeón.\pEsperame en el laboratorio, ¿va?\pTengo algo para tí.$"

Naranja_PuebloPaleta_G01_M00_Text_08179996::
# 717 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Hi there, {PLAYER}{KUN}!\pOur WALLY’s become very healthy\nsince he went to VERDANTURF TOWN.\pWe owe it all to you!\pWhen WALLY left town, you helped\nhim catch a POKéMON, right?\pI think that made WALLY really\nhappy.\pActually, not just WALLY.\nIt made me, his father, happy too.\pHappy that he’s got such a great\nfriend as you.\pThis isn’t a bribe or anything, but\nI’d really like you to have this.$"

Naranja_PuebloPaleta_G01_M00_Text_08179B14::
# 721 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "If your POKéMON can SURF, you’ll be\nable to go to all sorts of places.$"

Naranja_PuebloPaleta_G01_M00_Text_08179B5B::
# 725 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "WALLY’s coming home soon.\nI’m looking forward to that.$"

Naranja_PuebloPaleta_G01_M00_Text_08179B92::
# 729 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh? You met WALLY in EVER GRANDE\nCITY?\pOh, {PLAYER}{KUN}, don’t be silly.\pHe may have gotten healthy, but he\ncan’t go somewhere far away like\lthat all by himself.$"

Naranja_PuebloPaleta_G01_M00_Text_086B3E00::
# 733 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "¿Conoces a ese chaval tan feo que  \nestá mirando por la ventana?\p{COLOR 0x04}{PLAYER}: Más o menos…\n¿Que pasa?\p{COLOR 0x01}Lleva cotilleando desde que vino aquí\nel prof. Oak.\lPodrías ir a ver que quiere.$"

Naranja_PuebloPaleta_G01_M00_Text_086BEBCF::
# 737 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Felicidades por tu triunfo en la \nliga añil, cariño. \lEn el pueblo no se habla de otra cosa\pBueno… me alegro que de vez en cuanto\nte pases a ver a tu madre…$"

Naranja_PuebloPaleta_G01_M00_Text_086BEEEB::
# 741 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "{COLOR 0x02}Boooow…\nMisteeer Mime$"

Naranja_PuebloPaleta_G01_M00_Text_086BFAD3::
# 745 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Esperame en el laboratorio, ¿va?$"
