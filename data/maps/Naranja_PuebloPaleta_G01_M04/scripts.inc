Naranja_PuebloPaleta_G01_M04_MapScripts::
# 5 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuebloPaleta_G01_M04_OnTransition
# 6 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PuebloPaleta_G01_M04_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuebloPaleta_G01_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PuebloPaleta_G01_M04_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 2, Naranja_PuebloPaleta_G01_M04_OnWarp_1
	.2byte 0

Naranja_PuebloPaleta_G01_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 2, Naranja_PuebloPaleta_G01_M04_OnFrame_1
# 11 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 4, Naranja_PuebloPaleta_G01_M04_OnFrame_2
	.2byte 0


Naranja_PuebloPaleta_G01_M04_EventScript_Trigger_1::
# 16 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lockall
# 17 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_086BEC6C
# 18 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 19 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	closemessage
# 20 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M04_Movement_0814E9FC
# 21 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M04_OnTransition::
# 27 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 28 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A02F4
	end


Naranja_PuebloPaleta_G01_M04_OnWarp_1::
# 33 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_PuebloPaleta_G01_M04_OnFrame_1::
# 38 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lockall
# 39 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	bufferleadmonspeciesname 0
# 40 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	message Naranja_PuebloPaleta_G01_M04_Text_08173D94
# 41 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmessage
# 42 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitfanfare
# 44 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08173EF8
# 45 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 5
# 46 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 47 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CEA
# 48 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 49 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CFA
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CEA::
# 54 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 55 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 56 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CFA
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CFA::
# 60 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08173F3D
# 61 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 5
# 62 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 63 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D19
# 64 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 65 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D2B
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D19::
# 70 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174015
# 71 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_03DF
# 73 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 3
# 74 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D2B::
# 79 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174075
# 80 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 5
# 81 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 82 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D19
# 83 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 84 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D2B
	end


Naranja_PuebloPaleta_G01_M04_OnFrame_2::
# 89 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lockall
# 90 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M04_Movement_08152D5B
# 91 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 92 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152DBA
	return


Naranja_PuebloPaleta_G01_M04_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 96 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lock
# 97 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	faceplayer
# 98 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 3
# 99 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D90
# 100 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0058
# 101 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D86
# 102 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08173B29
# 103 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 104 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0058
# 105 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D86::
# 110 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08173C88
# 111 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 112 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D90::
# 117 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_086BF2DD
# 118 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId2::
# 124 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lock
# 125 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	faceplayer
# 126 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
# 127 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId11
# 128 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 5
# 129 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E7B
# 130 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_081740B4
# 131 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 132 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152DBA::
# 137 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_0817411F
# 138 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 139 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E6D
# 140 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174248
# 141 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 142 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M04_PROF_BIRCH_2, Naranja_PuebloPaleta_G01_M04_Movement_08152E97
# 143 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 144 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 145 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 146 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkplayergender
# 147 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 148 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E13
# 149 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 150 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E40
# 151 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 5
# 152 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 153 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_TANGELO_STORY_STATE, 1
# 154 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 4
# 155 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 3
# 156 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E13::
# 161 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_086BFD1C
# 162 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 163 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 4
# 164 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 165 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 0
# 166 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 167 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E85
# 168 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_086BEDDD
# 169 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 170 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_RESULT, 0
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E40::
# 175 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_086BF801
# 176 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 177 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 4
# 178 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 179 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 0
# 180 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 181 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E8E
# 182 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_086BFF34
# 183 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 184 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E6D::
# 189 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	message Naranja_PuebloPaleta_G01_M04_Text_0817422F
# 191 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitfanfare
# 192 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmessage
# 193 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0801
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E7B::
# 198 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_0817436C
# 199 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
# 200 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E85::
# 205 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_081744F0
# 206 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E8E::
# 211 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_0817465B
# 212 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_1::
# 217 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_081746A2
# 218 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G01_M04_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId3::
# 223 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lock
# 224 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	faceplayer
# 225 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkplayergender
# 226 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 227 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EBE
# 228 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 229 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EC7
# 230 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EBE::
# 235 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174505
# 236 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EC7::
# 241 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174671
# 242 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 4
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_10::
# 247 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_081746E7
# 248 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_3::
# 253 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174724
# 254 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_4::
# 259 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M04_Text_08174748
# 260 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A02F4::
# 265 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 0
# 266 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 267 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 0
# 268 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
# 269 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 1
# 270 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
# 271 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 2
# 272 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0365
# 273 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 3
# 274 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0365
# 275 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 4
# 276 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0372
# 277 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 5
# 278 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0372
# 279 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 6
# 280 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
# 281 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 7
# 282 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358::
# 287 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH
# 288 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
# 289 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0381
# 290 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_RUTA_AZUL_G00_M18_PROF_BIRCH
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0365::
# 295 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0381
# 296 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH
# 297 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
# 298 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_RUTA_AZUL_G00_M18_PROF_BIRCH
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0372::
# 303 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_HIDE_RUTA_AZUL_G00_M18_PROF_BIRCH
# 304 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0381
# 305 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH
# 306 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
	return


# 310 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
Naranja_PuebloPaleta_G01_M04_Movement_0814E9FC:
# 311 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_right
	step_end

# 314 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
Naranja_PuebloPaleta_G01_M04_Movement_08152D5B:
# 315 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 316 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 317 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 318 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 319 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 320 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 321 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
	step_end

# 324 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
Naranja_PuebloPaleta_G01_M04_Movement_08152E97:
# 325 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_down
# 326 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_PuebloPaleta_G01_M04_Text_08173B29::
# 329 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¡Pero Mira quien viene ahora!\nEl campeón de Pueblo PALETA, jeje.\pSabrás que el profOak te estaba\nbuscando, parecía ansioso por que \lllegases.\pEstará cerca… \nNo creo que ande muy lejos de aquí\pAdemás si quiere verte seguro que no\nhace esperar demasiado.\pPuedes quedarte aquí a esperarle \nmientras lees alguno de los completos \llibros de la estanteria.$"

Naranja_PuebloPaleta_G01_M04_Text_08173C88::
# 333 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Ser ayudante es un gran camino para \nconocer toda la verdad sobre cada\laspecto de la vida POKéMON.\p¿No consideras interesante \nser ayudante?$"

Naranja_PuebloPaleta_G01_M04_Text_08173D94::
# 337 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\pI’ve heard so much about you from\nyour father.\pI’ve heard that you don’t have your\nown POKéMON yet.\pBut the way you battled earlier,\nyou pulled it off with aplomb!\pI guess you have your father’s blood\nin your veins after all!\pOh, yes. As thanks for rescuing me,\nI’d like you to have the POKéMON you\lused earlier.\p{PLAYER} received the {STR_VAR_1}!$"

Naranja_PuebloPaleta_G01_M04_Text_08173EF8::
# 341 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: While you’re at it, why not\ngive a nickname to that {STR_VAR_1}?$"

Naranja_PuebloPaleta_G01_M04_Text_08173F3D::
# 345 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\nand gain experience, I think you’ll make\la darn good TRAINER.\pMy kid, {RIVAL}, is out on ROUTE 103\nstudying POKéMON.\pIt might not be a bad idea for you to\ngo see {RIVAL}. What do you think?$"

Naranja_PuebloPaleta_G01_M04_Text_08174015::
# 349 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: Great!\n{RIVAL} should be happy, too.\pGet {RIVAL} to teach you what it\nmeans to be a TRAINER.$"

Naranja_PuebloPaleta_G01_M04_Text_08174075::
# 353 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: Oh, don’t be that way.\nYou should go meet my kid.$"

Naranja_PuebloPaleta_G01_M04_Text_081740B4::
# 357 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: {RIVAL} should be on\nROUTE 103 somewhere.\pIf you or your POKéMON get tired,\nget some rest at home.$"

Naranja_PuebloPaleta_G01_M04_Text_0817411F::
# 361 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¡Bien {PLAYER}!\p¿Has visto? Tu madre me ha permitido\nque colocase tu trofeo en el centro de\lmi laboratorio.\pTu victoria nos honra, y más a mí por\nentregarte tu primer Pokemon.\pAntes que nada te voy a entregar la\nPokeDEX que sino se me olvidará dartela.$"

Naranja_PuebloPaleta_G01_M04_Text_0817422F::
# 365 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "{PLAYER} recibió la PokéDEX$"

Naranja_PuebloPaleta_G01_M04_Text_08174248::
# 369 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¿Recuerdas a dexter no? jeje\nEsta es una version mejorada.\pLo mejor es que luego consultes a mi\nayudante para que te explique como \ladecuarla a tus necesidades.$"

Naranja_PuebloPaleta_G01_M04_Text_0817436C::
# 373 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON await\nyou!\pArgh, I’m getting the itch to get out\nand do fieldwork again!$"

Naranja_PuebloPaleta_G01_M04_Text_081744F0::
# 377 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Oh? Your BAG’s full.$"

Naranja_PuebloPaleta_G01_M04_Text_08174505::
# 381 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¡Suerte!\p¡Si necesitas algo llámame!\pY no te despistes$"

Naranja_PuebloPaleta_G01_M04_Text_0817465B::
# 385 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Hey, your BAG’s full.$"

Naranja_PuebloPaleta_G01_M04_Text_08174671::
# 389 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Suerte en tu viaje\p¡Si necesitas algo llámame!$"

Naranja_PuebloPaleta_G01_M04_Text_081746A2::
# 393 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Una maquina muy rara…\pNota para mí mismo:\nmejor no tocar.\pAsí mejor.$"

Naranja_PuebloPaleta_G01_M04_Text_081746E7::
# 397 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Un Pokepentium 8\nEs un gran ordenador para\lun gran profesor…$"

Naranja_PuebloPaleta_G01_M04_Text_08174724::
# 401 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Está lleno de libros de POKéMON…\n  $"

Naranja_PuebloPaleta_G01_M04_Text_08174748::
# 405 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "It’s a book that’s too hard to read.$"

Naranja_PuebloPaleta_G01_M04_Text_086BEC6C::
# 409 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "{COLOR 0x02}¡Donde te crees que vas!\p{COLOR 0x01}Eso es una zona privada$"

Naranja_PuebloPaleta_G01_M04_Text_086BEDDD::
# 413 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Mejor que tomases esto…\pVerás, no tan rápido, las Islas son un\nlugar lleno de pokemon fuertes y raros.\pNo te envio allí a capturar pokemon,\nsino porque la profesora Ivy, quiere\lhacerme llegar una recien descubierta\lpokeball dorada y plateada:\pLa こgsBallこ.\pTráemela ¿va?$"

Naranja_PuebloPaleta_G01_M04_Text_086BF2DD::
# 417 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¿Vas a ir a las {COLOR 0x0E}Islas Naranjas{COLOR 0x01}?\p{COLOR 0x04}{PLAYER}: ¡Claro!\p{COLOR 0x01}Entonces necesitarás actualizar\ntu PkDEX para reconocer los pokemon\lde las islas.\pSimplemente inserta estos 3 códigos por\nseparado, en la lista de la sección \lherramientas:\pE7343B1C1E9465D8\p03C39BA2B0541E66\p85DC5BF376315A10\pTu PkDEX se coloreará de naranja.\nSi tienes dudas consulta el \larchivo leeme!$"

Naranja_PuebloPaleta_G01_M04_Text_086BF801::
# 421 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Verás {PLAYER}, no te había llamado\npor esto sino por otra cosilla.\pComo la gran entrenadora que has\ndemostrado ser, me gustaría que fueses\lal laboratorio de la prof. Ivy ha traerme\lalgo que me tiene preparado.\pVerás, en una región al sur de la isla\nCanela existe todo un archipiélago de\lislas tropicales llamadas\l {COLOR 0x0E}Islas Naranjas{COLOR 0x01}.\pPor supuesto, llenas de todo tipo de\nPokemon, de todos los colores y todos\llos tamaños.\p¿Suena bien verdad?\n¿Te apetece viajar hasta allí?\p{COLOR 0x04}{PLAYER}: Por supuesto,\nseguro que están llenas de pokemon \lacuáticos.\l$"

Naranja_PuebloPaleta_G01_M04_Text_086BFD1C::
# 425 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "$"

Naranja_PuebloPaleta_G01_M04_Text_086BFF34::
# 429 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Mejor que tomases esto…\pEhh, no tan rápido, las Islas son un\nlugar lleno de pokemon fuertes y raros.\pNo te envio allí a tomar el sol,\nsino porque la profesora Ivy, quiere\lhacerme llegar una recien descubierta\lpokeball dorada y plateada:\pLa こgsBallこ.\pTendrás que traermela en cuanto \npuedas.\p{PLAYER} recibió TICKET ZEPELÍN\pCon esto podrás tomar un dirigible hacia\nlas islas desde el aeródromo.\p¡¡Mucha suerte en tu viaje!!$"
