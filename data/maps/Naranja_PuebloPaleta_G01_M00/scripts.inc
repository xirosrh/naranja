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
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 3, Naranja_PuebloPaleta_G01_M00_OnFrame_1
# 9 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 5, Naranja_PuebloPaleta_G01_M00_OnFrame_2
# 10 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6, Naranja_PuebloPaleta_G01_M00_OnFrame_3
# 11 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 1, Naranja_PuebloPaleta_G01_M00_OnFrame_4
# 12 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 3, Naranja_PuebloPaleta_G01_M00_OnFrame_5
	.2byte 0


Naranja_PuebloPaleta_G01_M00_OnLoad::
# 17 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6
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
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 3
# 44 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526C4
# 45 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 5
# 46 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081526AC
# 47 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6
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
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172574, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 74 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_08152720
# 75 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_MOM, Naranja_PuebloPaleta_G01_M00_Movement_08152720
# 76 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 77 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	warp MAP_NARANJA_PUERTO_DE_TANGELO_G01_M01, 0xFF, 7, 1
# 78 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitstate
# 79 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_OnFrame_1::
# 84 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 85 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 86 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 87 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6956
	return


Naranja_PuebloPaleta_G01_M00_OnFrame_3::
# 91 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 92 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 93 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8005, 1
# 94 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6ABF
	return


Naranja_PuebloPaleta_G01_M00_OnFrame_4::
# 98 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 99 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_PIN
# 100 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_BARD, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 101 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 102 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_BARD, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 103 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 104 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 105 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M00_BARD, Naranja_PuebloPaleta_G01_M00_Movement_08152782
# 106 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 107 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	special GetRivalSonDaughterString
# 108 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081730C2, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0057
# 110 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 2
# 111 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Trigger_1::
# 116 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 117 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 118 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 119 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 120 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69B7
	return


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_BARD_LocalId4::
# 125 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 126 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 127 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0082
# 128 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A21
# 129 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_012D
# 130 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A17
# 131 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 3
# 132 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A2B
# 133 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	special GetRivalSonDaughterString
# 134 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_086B3E00, MSGBOX_DEFAULT
# 135 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A17::
# 140 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08173262, MSGBOX_DEFAULT
# 141 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A21::
# 146 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081732B9, MSGBOX_DEFAULT
# 147 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08152A2B::
# 152 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081731E3, MSGBOX_DEFAULT
# 153 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_OAK_LocalId3::
# 158 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 159 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 160 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_VICTORY_ROAD_EVENT_COMPLETE_007E
# 161 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081543F7
# 162 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 163 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154427
# 164 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 165 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154406
# 166 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_MET_OAK_IN_PALLET_TOWN
# 167 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_0815443B
# 168 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08179805, MSGBOX_DEFAULT
# 169 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_MET_OAK_IN_PALLET_TOWN
# 170 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081543F7::
# 175 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 176 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154431
# 177 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154406
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154406::
# 181 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08179996, MSGBOX_DEFAULT
# 182 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x155
# 183 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 184 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 0
# 185 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 186 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08179B14, MSGBOX_DEFAULT
# 187 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154427::
# 192 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08179B5B, MSGBOX_DEFAULT
# 193 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_08154431::
# 198 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08179B92, MSGBOX_DEFAULT
# 199 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_0815443B::
# 204 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_086BFAD3, MSGBOX_DEFAULT
# 205 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6956::
# 210 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_086BEBCF, MSGBOX_DEFAULT
# 211 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 212 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 213 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 214 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B699F
# 215 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 216 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69AA
# 217 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172453, MSGBOX_DEFAULT
# 218 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 219 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 4
# 220 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B69B5
# 221 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 222 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 223 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B699F::
# 228 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 229 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69AA::
# 234 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 235 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69B7::
# 240 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172531, MSGBOX_DEFAULT
# 241 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 242 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 243 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6CDC
# 244 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 245 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6AB8::
# 250 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 7
# 251 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6ABF::
# 256 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 257 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 258 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6B9D
# 259 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6CCC
# 260 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 261 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, 0
# 262 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081725C9, MSGBOX_DEFAULT
# 263 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 264 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_PuebloPaleta_G01_M00_Movement_081B6BDB
# 265 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 266 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6CD2
# 267 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 268 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6BBE
# 269 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 270 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 271 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081725FE, MSGBOX_DEFAULT
# 272 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172644, MSGBOX_DEFAULT
# 273 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 274 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_TEMP_1, 1
# 275 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_PuebloPaleta_G01_M00_Movement_081B6BE1
# 276 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 277 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6AB8
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6B9D::
# 281 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_PIN
# 282 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 283 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 284 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 285 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 286 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081725A3, MSGBOX_DEFAULT
# 287 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6BBE::
# 292 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 293 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 294 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172841, MSGBOX_DEFAULT
# 295 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	fadedefaultbgm
# 296 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	special TurnOffTVScreen
# 297 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0830
# 298 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay 0x23
	return


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_MOM_LocalId1::
# 303 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 304 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 305 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 4
# 306 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C33
# 307 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 4
# 308 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C33
# 309 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 310 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C3D
# 311 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUERTO_DE_TANGELO_EVENT_COMPLETE_0052
# 312 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C72
# 313 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 314 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C80
# 315 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 7
# 316 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C9C
# 317 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_086BEBCF, MSGBOX_DEFAULT
# 318 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C33::
# 323 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172BBC, MSGBOX_DEFAULT
# 324 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C3D::
# 329 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0085
# 330 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C72
# 331 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172782, MSGBOX_DEFAULT
# 332 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBD
# 333 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 334 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 0
# 335 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 336 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 337 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081727CD, MSGBOX_DEFAULT
# 338 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0085
# 339 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C72::
# 344 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172717, MSGBOX_DEFAULT
# 345 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C8A
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C80::
# 349 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081726D2, MSGBOX_DEFAULT
# 350 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C8A::
# 355 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 356 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call Naranja_Route119_G32_M00_EventScript_Sub_081A02CA
# 357 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	incrementgamestat 0x10
# 358 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_0817276B, MSGBOX_DEFAULT
# 359 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6C9C::
# 364 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081726E7, MSGBOX_DEFAULT
# 365 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_EventScript_OBJ_EVENT_GFX_CHIKORITA_DOLL_LocalId2::
# 370 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lock
# 371 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	faceplayer
# 372 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitse
# 373 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playmoncry SPECIES_MACHOKE, 0
# 374 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_086BEEEB, MSGBOX_DEFAULT
# 375 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmoncry
# 376 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M00_OnFrame_5::
# 381 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	lockall
# 382 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	checkplayergender
# 383 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 384 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DAD
# 385 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 386 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DBD
# 387 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 388 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E1D
# 389 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 390 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E28
# 391 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 392 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 393 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_PIN
# 394 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 395 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 396 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 397 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 398 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay 0x14
# 399 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 400 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DCD
# 401 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 402 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DD8
# 403 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_0817298B, MSGBOX_DEFAULT
# 404 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x109
# 405 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 406 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	callstd 0
# 407 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172A7D, MSGBOX_DEFAULT
# 408 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 409 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 410 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DE3
# 411 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 412 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DEE
# 413 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172B5E, MSGBOX_DEFAULT
# 414 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	closemessage
# 415 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 416 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DF9
# 417 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 418 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E0B
# 419 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	playse SE_DOOR
# 420 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	removeobject 32777
# 421 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_0123
# 422 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 4
# 423 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 4
# 424 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DAD::
# 429 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8008, 0
# 430 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8009, 5
# 431 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x800A, 1
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DBD::
# 436 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8008, 1
# 437 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x8009, 5
# 438 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	setvar VAR_0x800A, 1
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DCD::
# 443 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E33
# 444 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DD8::
# 449 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E36
# 450 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DE3::
# 455 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E39
# 456 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DEE::
# 461 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E3B
# 462 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6DF9::
# 467 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E4F
# 468 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E3D
# 469 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E0B::
# 474 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E4F
# 475 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement 32777, Naranja_PuebloPaleta_G01_M00_Movement_081B6E43
# 476 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E1D::
# 481 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E49
# 482 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6E28::
# 487 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M00_Movement_081B6E54
# 488 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 492 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_08152720:
# 493 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_up
	step_end

# 496 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_08152782:
# 497 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 498 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 499 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 500 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 501 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 502 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
	step_end

# 505 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B69B5:
# 506 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_up
	step_end

# 509 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6BDB:
# 510 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 511 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

# 514 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6BE1:
# 515 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 516 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 517 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

# 520 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6CCC:
# 521 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 522 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 523 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 524 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 525 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 528 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6CD2:
# 529 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 532 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6CDC:
# 533 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_up
	step_end

# 536 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E33:
# 537 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 538 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
	step_end

# 541 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E36:
# 542 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 543 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 546 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E39:
# 547 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
	step_end

# 550 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E3B:
# 551 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
	step_end

# 554 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E3D:
# 555 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 556 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 557 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_right
# 558 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 559 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_8
	step_end

# 562 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E43:
# 563 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 564 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 565 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_left
# 566 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 567 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_8
	step_end

# 570 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E49:
# 571 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 572 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 573 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 574 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 575 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_left
	step_end

# 578 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E4F:
# 579 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 580 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 581 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 582 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_down
	step_end

# 585 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
Naranja_PuebloPaleta_G01_M00_Movement_081B6E54:
# 586 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	delay_16
# 587 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 588 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 589 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_down
# 590 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_PuebloPaleta_G01_M00_Text_08172453::
# 593 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "The mover’s POKéMON do all the work\nof moving us in and cleaning up after.\lThis is so convenient!\p{PLAYER}, your room is upstairs.\nGo check it out, dear!\pDAD bought you a new clock to mark\nour move here.\lDon’t forget to set it!$"

Naranja_PuebloPaleta_G01_M00_Text_08172531::
# 597 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Well, {PLAYER}?\pAren’t you interested in seeing your\nvery own room?$"

Naranja_PuebloPaleta_G01_M00_Text_08172574::
# 601 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: {PLAYER}.\pGo set the clock in your room, honey.$"

Naranja_PuebloPaleta_G01_M00_Text_081725A3::
# 605 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\nQuick! Come quickly!$"

Naranja_PuebloPaleta_G01_M00_Text_081725C9::
# 609 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Look! It’s PETALBURG GYM!\nMaybe DAD will be on!$"

Naranja_PuebloPaleta_G01_M00_Text_081725FE::
# 613 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Oh... It’s over.\pI think DAD was on, but we missed him.\nToo bad.$"

Naranja_PuebloPaleta_G01_M00_Text_08172644::
# 617 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh, yes.\nOne of DAD’s friends lives in town.\pPROF. BIRCH is his name.\pHe lives right next door, so you should\ngo over and introduce yourself.$"

Naranja_PuebloPaleta_G01_M00_Text_081726D2::
# 621 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: See you, honey!$"

Naranja_PuebloPaleta_G01_M00_Text_081726E7::
# 625 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Did you introduce yourself to\nPROF. BIRCH?$"

Naranja_PuebloPaleta_G01_M00_Text_08172717::
# 629 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\nYou look a little tired.\pI think you should rest a bit.$"

Naranja_PuebloPaleta_G01_M00_Text_0817276B::
# 633 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Take care, honey!$"

Naranja_PuebloPaleta_G01_M00_Text_08172782::
# 637 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\pThen here’s something from your MOM!$"

Naranja_PuebloPaleta_G01_M00_Text_081727CD::
# 641 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Don’t push yourself too hard, dear.\nYou can always come home.\pGo for it, honey!$"

Naranja_PuebloPaleta_G01_M00_Text_08172841::
# 645 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "INTERVIEWER: ...We brought you this\nreport from in front of PETALBURG GYM.$"

Naranja_PuebloPaleta_G01_M00_Text_0817298B::
# 649 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "DAD: Hm?\pHey, it’s {PLAYER}!\pIt’s been a while since I saw you,\nbut you look...stronger, somehow.\pThat’s the impression I get.\nBut your old man hasn’t given up yet!\pOh, yes, I have something for you.\nThis came to you from someone named\lMR. BRINEY.$"

Naranja_PuebloPaleta_G01_M00_Text_08172A7D::
# 653 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\pIf I recall, there are ferry ports in\nSLATEPORT and LILYCOVE.\p{PLAYER}, if you have ambition as a\nTRAINER, go to the BATTLE TOWER.\pIt should teach you that there is\nno end to a TRAINER’s chosen path.$"

Naranja_PuebloPaleta_G01_M00_Text_08172B5E::
# 657 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "I’d better get back to PETALBURG GYM.\pMOM, thanks for looking after the house\nwhile I’m away.$"

Naranja_PuebloPaleta_G01_M00_Text_08172BBC::
# 661 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "MOM: That DAD of yours...\pHe comes home for the first time in a\nwhile, but all he talks about is POKéMON.\pHe should relax and stay a little longer.$"

Naranja_PuebloPaleta_G01_M00_Text_081730C2::
# 665 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh, hello. And you are?\p... ... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ... ...\pOh, you’re {PLAYER}{KUN}, our new next-door\nneighbor! Hi!\pWe have a {STR_VAR_1} about the same\nage as you.\pOur {STR_VAR_1} was excited about making\na new friend.\pOur {STR_VAR_1} is upstairs, I think.$"

Naranja_PuebloPaleta_G01_M00_Text_081731E3::
# 669 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Where has my husband gone?\nJust when {PLAYER}{KUN} is visiting, too...\pThat man can never sit still for long...\nHe might be at his LAB.$"

Naranja_PuebloPaleta_G01_M00_Text_08173262::
# 673 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh, {RIVAL} has gone out somewhere.\pLike father, like child.\n{RIVAL} can’t stay quietly at home.$"

Naranja_PuebloPaleta_G01_M00_Text_081732B9::
# 677 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "¿Ya no te acuerdas de mí?\pSoy la famosa y envidiada líder del  \ngimansio-piscina de Celeste,\ljaja…\p{COLOR 0x04}{PLAYER}: No me digas…\p¿Y cómo tù por aquí?\p{COLOR 0x01}Pues nada moquillo.  \nQue venía a visitar a tu madre.$"

Naranja_PuebloPaleta_G01_M00_Text_08179805::
# 681 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "¡¿Ya estás aquí {PLAYER}{KUN}?!\pGuau, cambiaste muchisimo y además \nte has hecho un pequeño campeón.\pEsperame en el laboratorio, ¿va?\pTengo algo para tí.$"

Naranja_PuebloPaleta_G01_M00_Text_08179996::
# 685 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Hi there, {PLAYER}{KUN}!\pOur WALLY’s become very healthy\nsince he went to VERDANTURF TOWN.\pWe owe it all to you!\pWhen WALLY left town, you helped\nhim catch a POKéMON, right?\pI think that made WALLY really\nhappy.\pActually, not just WALLY.\nIt made me, his father, happy too.\pHappy that he’s got such a great\nfriend as you.\pThis isn’t a bribe or anything, but\nI’d really like you to have this.$"

Naranja_PuebloPaleta_G01_M00_Text_08179B14::
# 689 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "If your POKéMON can SURF, you’ll be\nable to go to all sorts of places.$"

Naranja_PuebloPaleta_G01_M00_Text_08179B5B::
# 693 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "WALLY’s coming home soon.\nI’m looking forward to that.$"

Naranja_PuebloPaleta_G01_M00_Text_08179B92::
# 697 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Oh? You met WALLY in EVER GRANDE\nCITY?\pOh, {PLAYER}{KUN}, don’t be silly.\pHe may have gotten healthy, but he\ncan’t go somewhere far away like\lthat all by himself.$"

Naranja_PuebloPaleta_G01_M00_Text_086B3E00::
# 701 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "¿Conoces a ese chaval tan feo que  \nestá mirando por la ventana?\p{COLOR 0x04}{PLAYER}: Más o menos…\n¿Que pasa?\p{COLOR 0x01}Lleva cotilleando desde que vino aquí\nel prof. Oak.\lPodrías ir a ver que quiere.$"

Naranja_PuebloPaleta_G01_M00_Text_086BEBCF::
# 705 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Felicidades por tu triunfo en la \nliga añil, cariño. \lEn el pueblo no se habla de otra cosa\pBueno… me alegro que de vez en cuanto\nte pases a ver a tu madre…$"

Naranja_PuebloPaleta_G01_M00_Text_086BEEEB::
# 709 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "{COLOR 0x02}Boooow…\nMisteeer Mime$"

Naranja_PuebloPaleta_G01_M00_Text_086BFAD3::
# 713 "data/maps/Naranja_PuebloPaleta_G01_M00/scripts.pory"
	.string "Esperame en el laboratorio, ¿va?$"
