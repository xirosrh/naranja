Naranja_ValleCharizard_G00_M12_MapScripts::
# 5 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ValleCharizard_G00_M12_OnTransition
# 6 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_ValleCharizard_G00_M12_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_ValleCharizard_G00_M12_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	map_script_2 VAR_NARANJA_VALLE_CHARIZARD_STORY_STATE, 1, Naranja_ValleCharizard_G00_M12_OnFrame_1
	.2byte 0


Naranja_ValleCharizard_G00_M12_OnTransition::
# 12 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_0812
# 13 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 14 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E4DF
# 15 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 16 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0172
# 17 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_NARANJA_VALLE_CHARIZARD_STORY_STATE, 2
# 18 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E4D0
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E4D0::
# 23 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectxyperm LOCALID_VALLE_CHARIZARD_G00_M12_VARS, 0xB, 9
# 24 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectxyperm LOCALID_VALLE_CHARIZARD_G00_M12_243, 0xB, 9
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E4DF::
# 29 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_G24_M12_OLD_WOMAN_2
	return


Naranja_ValleCharizard_G00_M12_OnFrame_1::
# 34 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	lockall
# 35 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setvar VAR_0x8008, 1
# 36 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	opendoor 0xC, 0xF
# 37 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitdooranim
# 38 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	addobject LOCALID_VALLE_CHARIZARD_G00_M12_VARS
# 39 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_VARS, Naranja_ValleCharizard_G00_M12_Movement_0814E70E
# 40 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	closedoor 0xC, 0xF
# 42 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitdooranim
# 43 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_VARS, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 44 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 46 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 47 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 49 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	checkplayergender
# 51 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 52 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E56B
# 53 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 54 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E570
# 55 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 56 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E68F
# 57 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	checkplayergender
# 58 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 59 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5AB
# 60 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5D0
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E56B::
# 66 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E570::
# 71 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
	return


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_VARS_LocalId8::
# 76 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	lock
# 77 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	faceplayer
# 78 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setvar VAR_0x8008, 0
# 79 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	checkplayergender
# 80 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 81 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E56B
# 82 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 83 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E570
# 84 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	checkplayergender
# 85 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 86 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5AB
# 87 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 88 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5D0
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5AB::
# 93 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816BDA4, MSGBOX_DEFAULT
# 94 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setorcopyvar VAR_0x8000, 0x117
# 95 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 96 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	callstd 0
# 97 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_00DD
# 98 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816BE7D, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5F5
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5D0::
# 103 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816BF92, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setorcopyvar VAR_0x8000, 0x117
# 105 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 106 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	callstd 0
# 107 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_00DD
# 108 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C020, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5F5
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E5F5::
# 113 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	closemessage
# 114 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 115 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E646
# 116 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 117 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E64E
# 118 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	removeobject LOCALID_VALLE_CHARIZARD_G00_M12_VARS
# 119 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	addobject LOCALID_VALLE_CHARIZARD_G00_M12_243
# 120 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	delay 0x1E
# 121 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 122 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E69A
# 123 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 124 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6A5
# 125 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	removeobject LOCALID_VALLE_CHARIZARD_G00_M12_243
# 126 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setvar VAR_NARANJA_VALLE_CHARIZARD_STORY_STATE, 2
# 127 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	savebgm MUS_DUMMY
# 128 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	fadedefaultbgm
# 129 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 130 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E644
# 131 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	releaseall
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E644::
# 136 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	release
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E646::
# 141 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectxyperm LOCALID_VALLE_CHARIZARD_G00_M12_243, 6, 0x10
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E64E::
# 146 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 147 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E67B
# 148 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 149 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E680
# 150 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 151 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E685
# 152 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 153 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E68A
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E67B::
# 158 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectmovementtype LOCALID_VALLE_CHARIZARD_G00_M12_243, 8
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E680::
# 163 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectmovementtype LOCALID_VALLE_CHARIZARD_G00_M12_243, 7
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E685::
# 168 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectmovementtype LOCALID_VALLE_CHARIZARD_G00_M12_243, 0xA
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E68A::
# 173 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setobjectmovementtype LOCALID_VALLE_CHARIZARD_G00_M12_243, 9
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E68F::
# 178 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_VARS, Naranja_ValleCharizard_G00_M12_Movement_0814E6E8
# 179 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E69A::
# 184 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_243, Naranja_ValleCharizard_G00_M12_Movement_0814E6EF
# 185 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6A5::
# 190 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 191 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6D2
# 192 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 193 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6D2
# 194 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 195 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6DD
# 196 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 197 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	call_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6D2
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6D2::
# 202 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_243, Naranja_ValleCharizard_G00_M12_Movement_0814E6FA
# 203 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E6DD::
# 208 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	applymovement LOCALID_VALLE_CHARIZARD_G00_M12_243, Naranja_ValleCharizard_G00_M12_Movement_0814E703
# 209 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_ValleCharizard_G00_M12_EventScript_Trigger_1::
# 214 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 215 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 216 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E721
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E721::
# 221 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	incrementgamestat 0x31
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 226 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C3FD, MSGBOX_NPC
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId3::
# 231 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C4DB, MSGBOX_SIGN
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId4::
# 236 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C59B, MSGBOX_NPC
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_HOT_SPRINGS_OLD_WOMAN_LocalId5::
# 241 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C603, MSGBOX_NPC
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_HOT_SPRINGS_OLD_WOMAN_LocalId6::
# 246 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C694, MSGBOX_NPC
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId1::
# 251 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C54E, MSGBOX_NPC
	end


Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId9::
# 256 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	lock
# 257 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	faceplayer
# 258 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 259 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E79E
# 260 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C174, MSGBOX_YESNO
# 261 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 262 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E7B2
# 263 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	getpartysize
# 264 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 265 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E7A8
# 266 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C2B6, MSGBOX_DEFAULT
# 267 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 268 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 269 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	message Naranja_ValleCharizard_G00_M12_Text_0816C2EA
# 270 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitfanfare
# 271 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	waitmessage
# 272 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	giveegg SPECIES_DITTO
# 273 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	release
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E79E::
# 278 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C398, MSGBOX_DEFAULT
# 279 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	release
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E7A8::
# 284 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C2FF, MSGBOX_DEFAULT
# 285 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	release
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E7B2::
# 290 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C33C, MSGBOX_DEFAULT
# 291 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	release
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sign_4::
# 296 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C72F, MSGBOX_SIGN
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sign_2::
# 301 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C77C, MSGBOX_SIGN
	end


Naranja_ValleCharizard_G00_M12_EventScript_Sign_1::
# 306 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	msgbox Naranja_ValleCharizard_G00_M12_Text_0816C7CF, MSGBOX_SIGN
	end


# 310 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
Naranja_ValleCharizard_G00_M12_Movement_0814E6E8:
# 311 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_left
# 312 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_left
# 313 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_left
# 314 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_left
# 315 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_left
# 316 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_left
	step_end

# 319 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
Naranja_ValleCharizard_G00_M12_Movement_0814E6EF:
# 320 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 321 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 322 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 323 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
# 324 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
# 325 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
# 326 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
# 327 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
# 328 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
# 329 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_up
	step_end

# 332 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
Naranja_ValleCharizard_G00_M12_Movement_0814E6FA:
# 333 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 334 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 335 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 336 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 337 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 338 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 339 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 340 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
	step_end

# 343 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
Naranja_ValleCharizard_G00_M12_Movement_0814E703:
# 344 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_down
# 345 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 346 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 347 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 348 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 349 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 350 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 351 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 352 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
# 353 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_fast_right
	step_end

# 356 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
Naranja_ValleCharizard_G00_M12_Movement_0814E70E:
# 357 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	walk_down
	step_end

Naranja_ValleCharizard_G00_M12_Text_0816BDA4::
# 360 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\pOh? While I was visiting the hot springs,\nyou got the LAVARIDGE GYM BADGE.\pYou must have caught good POKéMON...\nNo, I guess you raised some.\pI guess it would be okay for you to\nhave this.$"

Naranja_ValleCharizard_G00_M12_Text_0816BE7D::
# 364 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you’ll\nhave no trouble getting through the\ldesert near ROUTE 111.\pBut, wow, {PLAYER}{KUN}...\nChallenging GYMS...\pYou’re trying hard because you don’t\nwant to lose to me, I bet!\p{PLAYER}{KUN}, I think I should challenge\nyour dad in PETALBURG GYM.\p{PLAYER}{KUN}, see you again!$"

Naranja_ValleCharizard_G00_M12_Text_0816BF92::
# 368 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it’s been a while.\nHow’s it going?\pHmm...\nThat’s a decent collection of BADGES.\pAll right, then.\nYou may as well have this.$"

Naranja_ValleCharizard_G00_M12_Text_0816C020::
# 372 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "BRENDAN: Keep those with you if you’re\nplanning on going into that desert near\lROUTE 111.\pThere should be some POKéMON that\nare exclusively desert-dwellers.\lYou might look around for those.\pAs for me...\nI’m considering challenging NORMAN,\lthe GYM LEADER of PETALBURG.\pUnlike you, {PLAYER}, your dad looks like\nhe really is tough.\pSee you around!$"

Naranja_ValleCharizard_G00_M12_Text_0816C174::
# 376 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "MIMA: Fue fascinante como utilizaste\nel poder eléctrico de PIKACHU\lpara hacer un truco de desaparición.\pMira, el otro dìa encontré un HUEVO.\pParece que lo haya puesto\nalguno de los POKÉMON de mi equipo.\pTú sabrás cuidarlo perfectamente\ny mi equipo ya está completo\p¿Te importarìa ocuparte de ello?$"

Naranja_ValleCharizard_G00_M12_Text_0816C2B6::
# 380 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "De acuerdo.\nEstoy segura de que serás un maestro.$"

Naranja_ValleCharizard_G00_M12_Text_0816C2EA::
# 384 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "{PLAYER} recibió el HUEVO.$"

Naranja_ValleCharizard_G00_M12_Text_0816C2FF::
# 388 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "¡Tu equipo está completo!\n¡Haz sitio y repetiremos el truco!$"

Naranja_ValleCharizard_G00_M12_Text_0816C33C::
# 392 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "Entiendo, bueno si cambias de opinión\nque sepas que seguiré aquì.$"

Naranja_ValleCharizard_G00_M12_Text_0816C398::
# 396 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "¿El huevo eclosionó ya?\pCuìdalo muy bien, porfa.\pEs un POKéMON fabuloso, \nalgo escaso pero cariñoso.$"

Naranja_ValleCharizard_G00_M12_Text_0816C3FD::
# 400 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "We draw as much hot water as we need,\nand yet the hot springs never run dry.\pIsn’t it magical?\pThese hot springs appear near active\nvolcanoes. Veins of water under the\lground are heated by magma to well up\las hot springs.$"

Naranja_ValleCharizard_G00_M12_Text_0816C4DB::
# 404 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "Being buried in this hot sand is...\nSigh...\pSo warm and heavenly...\pEh? Gyaah! Ouch!\pA POKéMON nipped my backside!$"

Naranja_ValleCharizard_G00_M12_Text_0816C54E::
# 408 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "Oh, you like hot springs, do you?\pThat’s surprising for one as young\nas you.$"

Naranja_ValleCharizard_G00_M12_Text_0816C59B::
# 412 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "I bathe in the hot springs every day.\pI want to become a beautiful and strong\nGYM LEADER like FLANNERY.$"

Naranja_ValleCharizard_G00_M12_Text_0816C603::
# 416 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "If people put POKéMON in hot springs,\nit might be seriously strange.\pWhy, it might be an electric bath, or\na bubble bath, or even a lava bath...$"

Naranja_ValleCharizard_G00_M12_Text_0816C694::
# 420 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "They’re claiming that these hot springs\nare good for calming nervous tension,\lrelieving aching muscles, solving\lromantic problems, and attracting\lmoney...$"

Naranja_ValleCharizard_G00_M12_Text_0816C72F::
# 424 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "LAVARIDGE TOWN\p“POKéMON CENTER HOT SPRINGS\nAn excellent place for relaxing!”$"

Naranja_ValleCharizard_G00_M12_Text_0816C77C::
# 428 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\nLEADER: FLANNERY\l“One with a fiery passion that burns!”$"

Naranja_ValleCharizard_G00_M12_Text_0816C7CF::
# 432 "data/maps/Naranja_ValleCharizard_G00_M12/scripts.pory"
	.string "POKéMON HERB SHOP\n“Bitter taste - better cure!”$"
