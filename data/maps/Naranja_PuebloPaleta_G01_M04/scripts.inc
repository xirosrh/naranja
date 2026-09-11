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
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BEC6C, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	closemessage
# 19 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M04_Movement_0814E9FC
# 20 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 21 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M04_OnTransition::
# 26 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 27 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A02F4
	end


Naranja_PuebloPaleta_G01_M04_OnWarp_1::
# 32 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_PuebloPaleta_G01_M04_OnFrame_1::
# 37 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lockall
# 38 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	bufferleadmonspeciesname 0
# 39 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	message Naranja_PuebloPaleta_G01_M04_Text_08173D94
# 40 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmessage
# 41 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitfanfare
# 43 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08173EF8, MSGBOX_YESNO
# 44 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 45 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CEA
# 46 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 47 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CFA
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CEA::
# 52 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 53 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 54 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CFA
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152CFA::
# 58 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08173F3D, MSGBOX_YESNO
# 59 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 60 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D19
# 61 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 62 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D2B
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D19::
# 67 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174015, MSGBOX_DEFAULT
# 68 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_03DF
# 69 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 3
# 70 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D2B::
# 75 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174075, MSGBOX_YESNO
# 76 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 77 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D19
# 78 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 79 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D2B
	end


Naranja_PuebloPaleta_G01_M04_OnFrame_2::
# 84 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lockall
# 85 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M04_Movement_08152D5B
# 86 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 87 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152DBA
	return


Naranja_PuebloPaleta_G01_M04_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 91 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lock
# 92 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	faceplayer
# 93 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 3
# 94 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D90
# 95 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0058
# 96 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D86
# 97 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08173B29, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0058
# 99 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D86::
# 104 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08173C88, MSGBOX_DEFAULT
# 105 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152D90::
# 110 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BF2DD, MSGBOX_DEFAULT
# 111 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId2::
# 116 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lock
# 117 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	faceplayer
# 118 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
# 119 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId11
# 120 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 5
# 121 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E7B
# 122 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_081740B4, MSGBOX_DEFAULT
# 123 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152DBA::
# 128 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_0817411F, MSGBOX_DEFAULT
# 129 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E6D
# 130 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174248, MSGBOX_DEFAULT
# 131 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G01_M04_PROF_BIRCH_2, Naranja_PuebloPaleta_G01_M04_Movement_08152E97
# 132 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 133 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 134 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 135 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkplayergender
# 136 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 137 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E13
# 138 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 139 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E40
# 140 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 5
# 141 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 142 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_TANGELO_STORY_STATE, 1
# 143 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_4, 4
# 144 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_STORY_STATE, 3
# 145 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E13::
# 150 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BFD1C, MSGBOX_DEFAULT
# 151 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 4
# 152 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 153 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 0
# 154 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 155 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E85
# 156 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BEDDD, MSGBOX_DEFAULT
# 157 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_RESULT, 0
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E40::
# 162 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BF801, MSGBOX_DEFAULT
# 163 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 4
# 164 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 165 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	callstd 0
# 166 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 167 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E8E
# 168 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BFF34, MSGBOX_DEFAULT
# 169 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E6D::
# 174 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	message Naranja_PuebloPaleta_G01_M04_Text_0817422F
# 176 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitfanfare
# 177 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	waitmessage
# 178 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0801
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E7B::
# 183 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_0817436C, MSGBOX_DEFAULT
# 184 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E85::
# 189 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_081744F0, MSGBOX_DEFAULT
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152E8E::
# 194 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_0817465B, MSGBOX_DEFAULT
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_1::
# 199 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_081746A2, MSGBOX_SIGN
	end


Naranja_PuebloPaleta_G01_M04_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId3::
# 204 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	lock
# 205 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	faceplayer
# 206 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	checkplayergender
# 207 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 208 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EBE
# 209 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 210 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EC7
# 211 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EBE::
# 216 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174505, MSGBOX_DEFAULT
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_08152EC7::
# 221 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174671, MSGBOX_DEFAULT
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_10::
# 226 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_081746E7, MSGBOX_SIGN
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_3::
# 231 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174724, MSGBOX_SIGN
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sign_4::
# 236 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_08174748, MSGBOX_SIGN
	end


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A02F4::
# 241 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 0
# 242 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 243 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 0
# 244 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
# 245 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 1
# 246 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
# 247 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 2
# 248 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0365
# 249 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 3
# 250 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0365
# 251 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 4
# 252 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0372
# 253 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 5
# 254 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0372
# 255 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 6
# 256 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
# 257 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	compare_var_to_value VAR_BIRCH_STATE, 7
# 258 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0358::
# 263 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH
# 264 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
# 265 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0381
# 266 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_RUTA_AZUL_G00_M18_PROF_BIRCH
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0365::
# 271 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0381
# 272 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH
# 273 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
# 274 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_RUTA_AZUL_G00_M18_PROF_BIRCH
	return


Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A0372::
# 279 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	clearflag FLAG_HIDE_RUTA_AZUL_G00_M18_PROF_BIRCH
# 280 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0381
# 281 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH
# 282 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0380
	return


# 286 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
Naranja_PuebloPaleta_G01_M04_Movement_0814E9FC:
# 287 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
Naranja_PuebloPaleta_G01_M04_Movement_08152D5B:
# 291 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 292 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 293 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 294 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 295 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 296 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
# 297 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_up
	step_end

# 300 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
Naranja_PuebloPaleta_G01_M04_Movement_08152E97:
# 301 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_down
# 302 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_PuebloPaleta_G01_M04_Text_08173B29::
# 305 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¡Pero Mira quien viene ahora!\nEl campeón de Pueblo PALETA, jeje.\pSabrás que el profOak te estaba\nbuscando, parecía ansioso por que \lllegases.\pEstará cerca… \nNo creo que ande muy lejos de aquí\pAdemás si quiere verte seguro que no\nhace esperar demasiado.\pPuedes quedarte aquí a esperarle \nmientras lees alguno de los completos \llibros de la estanteria.$"

Naranja_PuebloPaleta_G01_M04_Text_08173C88::
# 309 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Ser ayudante es un gran camino para \nconocer toda la verdad sobre cada\laspecto de la vida POKéMON.\p¿No consideras interesante \nser ayudante?$"

Naranja_PuebloPaleta_G01_M04_Text_08173D94::
# 313 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\pI’ve heard so much about you from\nyour father.\pI’ve heard that you don’t have your\nown POKéMON yet.\pBut the way you battled earlier,\nyou pulled it off with aplomb!\pI guess you have your father’s blood\nin your veins after all!\pOh, yes. As thanks for rescuing me,\nI’d like you to have the POKéMON you\lused earlier.\p{PLAYER} received the {STR_VAR_1}!$"

Naranja_PuebloPaleta_G01_M04_Text_08173EF8::
# 317 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: While you’re at it, why not\ngive a nickname to that {STR_VAR_1}?$"

Naranja_PuebloPaleta_G01_M04_Text_08173F3D::
# 321 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\nand gain experience, I think you’ll make\la darn good TRAINER.\pMy kid, {RIVAL}, is out on ROUTE 103\nstudying POKéMON.\pIt might not be a bad idea for you to\ngo see {RIVAL}. What do you think?$"

Naranja_PuebloPaleta_G01_M04_Text_08174015::
# 325 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: Great!\n{RIVAL} should be happy, too.\pGet {RIVAL} to teach you what it\nmeans to be a TRAINER.$"

Naranja_PuebloPaleta_G01_M04_Text_08174075::
# 329 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: Oh, don’t be that way.\nYou should go meet my kid.$"

Naranja_PuebloPaleta_G01_M04_Text_081740B4::
# 333 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: {RIVAL} should be on\nROUTE 103 somewhere.\pIf you or your POKéMON get tired,\nget some rest at home.$"

Naranja_PuebloPaleta_G01_M04_Text_0817411F::
# 337 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¡Bien {PLAYER}!\p¿Has visto? Tu madre me ha permitido\nque colocase tu trofeo en el centro de\lmi laboratorio.\pTu victoria nos honra, y más a mí por\nentregarte tu primer Pokemon.\pAntes que nada te voy a entregar la\nPokeDEX que sino se me olvidará dartela.$"

Naranja_PuebloPaleta_G01_M04_Text_0817422F::
# 341 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "{PLAYER} recibió la PokéDEX$"

Naranja_PuebloPaleta_G01_M04_Text_08174248::
# 345 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¿Recuerdas a dexter no? jeje\nEsta es una version mejorada.\pLo mejor es que luego consultes a mi\nayudante para que te explique como \ladecuarla a tus necesidades.$"

Naranja_PuebloPaleta_G01_M04_Text_0817436C::
# 349 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON await\nyou!\pArgh, I’m getting the itch to get out\nand do fieldwork again!$"

Naranja_PuebloPaleta_G01_M04_Text_081744F0::
# 353 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Oh? Your BAG’s full.$"

Naranja_PuebloPaleta_G01_M04_Text_08174505::
# 357 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¡Suerte!\p¡Si necesitas algo llámame!\pY no te despistes$"

Naranja_PuebloPaleta_G01_M04_Text_0817465B::
# 361 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Hey, your BAG’s full.$"

Naranja_PuebloPaleta_G01_M04_Text_08174671::
# 365 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Suerte en tu viaje\p¡Si necesitas algo llámame!$"

Naranja_PuebloPaleta_G01_M04_Text_081746A2::
# 369 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Una maquina muy rara…\pNota para mí mismo:\nmejor no tocar.\pAsí mejor.$"

Naranja_PuebloPaleta_G01_M04_Text_081746E7::
# 373 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Un Pokepentium 8\nEs un gran ordenador para\lun gran profesor…$"

Naranja_PuebloPaleta_G01_M04_Text_08174724::
# 377 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Está lleno de libros de POKéMON…\n  $"

Naranja_PuebloPaleta_G01_M04_Text_08174748::
# 381 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "It’s a book that’s too hard to read.$"

Naranja_PuebloPaleta_G01_M04_Text_086BEC6C::
# 385 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "{COLOR 0x02}¡Donde te crees que vas!\p{COLOR 0x01}Eso es una zona privada$"

Naranja_PuebloPaleta_G01_M04_Text_086BEDDD::
# 389 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Mejor que tomases esto…\pVerás, no tan rápido, las Islas son un\nlugar lleno de pokemon fuertes y raros.\pNo te envio allí a capturar pokemon,\nsino porque la profesora Ivy, quiere\lhacerme llegar una recien descubierta\lpokeball dorada y plateada:\pLa こgsBallこ.\pTráemela ¿va?$"

Naranja_PuebloPaleta_G01_M04_Text_086BF2DD::
# 393 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "¿Vas a ir a las {COLOR 0x0E}Islas Naranjas{COLOR 0x01}?\p{COLOR 0x04}{PLAYER}: ¡Claro!\p{COLOR 0x01}Entonces necesitarás actualizar\ntu PkDEX para reconocer los pokemon\lde las islas.\pSimplemente inserta estos 3 códigos por\nseparado, en la lista de la sección \lherramientas:\pE7343B1C1E9465D8\p03C39BA2B0541E66\p85DC5BF376315A10\pTu PkDEX se coloreará de naranja.\nSi tienes dudas consulta el \larchivo leeme!$"

Naranja_PuebloPaleta_G01_M04_Text_086BF801::
# 397 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Verás {PLAYER}, no te había llamado\npor esto sino por otra cosilla.\pComo la gran entrenadora que has\ndemostrado ser, me gustaría que fueses\lal laboratorio de la prof. Ivy ha traerme\lalgo que me tiene preparado.\pVerás, en una región al sur de la isla\nCanela existe todo un archipiélago de\lislas tropicales llamadas\l {COLOR 0x0E}Islas Naranjas{COLOR 0x01}.\pPor supuesto, llenas de todo tipo de\nPokemon, de todos los colores y todos\llos tamaños.\p¿Suena bien verdad?\n¿Te apetece viajar hasta allí?\p{COLOR 0x04}{PLAYER}: Por supuesto,\nseguro que están llenas de pokemon \lacuáticos.\l$"

Naranja_PuebloPaleta_G01_M04_Text_086BFD1C::
# 401 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "$"

Naranja_PuebloPaleta_G01_M04_Text_086BFF34::
# 405 "data/maps/Naranja_PuebloPaleta_G01_M04/scripts.pory"
	.string "Mejor que tomases esto…\pEhh, no tan rápido, las Islas son un\nlugar lleno de pokemon fuertes y raros.\pNo te envio allí a tomar el sol,\nsino porque la profesora Ivy, quiere\lhacerme llegar una recien descubierta\lpokeball dorada y plateada:\pLa こgsBallこ.\pTendrás que traermela en cuanto \npuedas.\p{PLAYER} recibió TICKET ZEPELÍN\pCon esto podrás tomar un dirigible hacia\nlas islas desde el aeródromo.\p¡¡Mucha suerte en tu viaje!!$"
