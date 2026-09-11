Naranja_7islasPomelo_G03_M02_MapScripts::
# 19 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_7islasPomelo_G03_M02_OnLoad
# 5 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_7islasPomelo_G03_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_7islasPomelo_G03_M02_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_7islasPomelo_G03_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 1, Naranja_7islasPomelo_G03_M02_OnFrame_1
# 7 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 2, Naranja_7islasPomelo_G03_M02_OnFrame_1
# 8 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 5, Naranja_7islasPomelo_G03_M02_OnFrame_1
# 9 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 3, Naranja_7islasPomelo_G03_M02_OnFrame_4
# 10 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 4, Naranja_7islasPomelo_G03_M02_OnFrame_5
	.2byte 0

Naranja_7islasPomelo_G03_M02_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 1, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 14 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 2, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 15 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 5, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 16 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 3, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 17 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 4, Naranja_7islasPomelo_G03_M02_OnWarp_1
	.2byte 0


Naranja_7islasPomelo_G03_M02_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 23 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EA6
	end


Naranja_7islasPomelo_G03_M02_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2::
# 28 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40CC
	end


Naranja_7islasPomelo_G03_M02_EventScript_OBJ_EVENT_GFX_TEALA_LocalId3::
# 33 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41FB
	end


Naranja_7islasPomelo_G03_M02_OnWarp_1::
# 38 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	turnobject 32775, 4
	end


Naranja_7islasPomelo_G03_M02_OnLoad::
# 43 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 1
# 44 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D6A
# 45 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 2
# 46 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D6A
# 47 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 5
# 48 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D6A
# 49 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 3
# 50 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D74
# 51 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 4
# 52 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D7E
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D6A::
# 57 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 5, 3, 0x202, 0
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D74::
# 62 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 8, 3, 0x202, 0
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3D7E::
# 67 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 0xB, 3, 0x202, 0
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DB2::
# 72 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 73 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 0
# 74 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A4358
# 75 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 76 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8007, 0
# 77 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DD9
# 78 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32775, Naranja_7islasPomelo_G03_M02_Movement_081A4354
# 79 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 80 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DD9
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DD9::
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DDA::
# 88 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 89 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 0
# 90 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8007, 0
# 91 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3E0C
# 92 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32775, Naranja_7islasPomelo_G03_M02_Movement_081A4356
# 93 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 94 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A4358
# 95 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 96 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32775, Naranja_7islasPomelo_G03_M02_Movement_081A4354
# 97 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3E0C::
# 102 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A4358
# 103 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M02_OnFrame_4::
# 108 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	lockall
# 109 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3E30
# 110 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 8, 3, 0x25D, 1
# 111 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DrawWholeMapView
# 112 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 113 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3E30::
# 118 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 119 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 0
# 120 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8007, 0
# 121 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3E0C
# 122 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A4361
# 123 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 124 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32775, Naranja_7islasPomelo_G03_M02_Movement_081A4356
# 125 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 126 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4E50
# 127 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 128 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4E79
# 130 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 131 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A4358
# 132 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 133 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32775, Naranja_7islasPomelo_G03_M02_Movement_081A4354
# 134 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M02_OnFrame_5::
# 139 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DB2
# 140 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 0xB, 3, 0x25D, 1
# 141 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DrawWholeMapView
	end


Naranja_7islasPomelo_G03_M02_OnFrame_1::
# 146 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	lockall
# 147 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3DDA
# 148 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 5, 3, 0x25D, 1
# 149 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DrawWholeMapView
# 150 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 151 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EA6::
# 156 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0801
# 157 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4342
# 158 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 159 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	lock
# 160 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	faceplayer
# 161 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4510
# 162 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 163 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EBC
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EBC::
# 167 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	multichoice 0x11, 6, 0x11, 0
# 168 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 169 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 170 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EF2
# 171 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 172 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 173 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 174 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FDD
# 175 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 176 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 177 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EF2
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EF2::
# 181 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 182 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 183 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 184 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FEF
# 185 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 186 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 187 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A490C
# 188 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 189 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special TryBattleLinkup
# 190 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
# 191 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 192 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3F5E
# 193 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 194 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4301
# 195 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 196 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A430D
# 197 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 198 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4068
# 199 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 200 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 201 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 202 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A42F5
# 203 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3F5E
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3F5E::
# 207 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special HealPlayerParty
# 208 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special SavePlayerParty
# 209 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special LoadPlayerBag
# 210 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, VAR_0x8004
# 211 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	messageautoscroll Naranja_7islasPomelo_G03_M02_Text_081A4A22
# 212 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 213 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 5, 3, 0x202, 0
# 214 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DrawWholeMapView
# 215 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	delay 0x3C
# 216 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M02_Movement_081A4356
# 217 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 218 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	closemessage
# 219 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A435B
# 220 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 221 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	opendoor 5, 1
# 222 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitdooranim
# 223 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A435F
# 224 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 225 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 226 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	closedoor 5, 1
# 227 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitdooranim
# 228 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
# 229 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 230 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FCD
# 231 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special SetCableClubWarp
# 232 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M24, 0xFF, 6, 8
# 233 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DoCableClubWarp
# 234 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FCD::
# 239 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special SetCableClubWarp
# 240 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M27, 0xFF, 5, 8
# 241 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DoCableClubWarp
# 242 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FDD::
# 247 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4696
# 248 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 249 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 250 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4826
# 251 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 252 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EBC
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FEF::
# 256 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4840
# 257 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 258 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	multichoice 0, 0, 0x12, 0
# 259 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 260 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 261 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4062
# 262 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 263 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4042
# 264 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 265 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A403C
# 266 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 267 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4036
# 268 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 269 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4036
# 270 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4036
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4036::
# 274 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_0x8004, 0
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A403C::
# 279 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_0x8004, 5
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4042::
# 284 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special HasEnoughMonsForDoubleBattle
# 285 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 286 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if NOT_EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4056
# 287 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_0x8004, 2
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4056::
# 292 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A486A
# 293 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 294 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 295 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3FEF
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4062::
# 299 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_0x8004, 1
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4068::
# 304 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 305 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 306 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40B1
# 307 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 308 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40A2
# 309 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 310 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4093
# 311 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A432D
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4093::
# 315 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 316 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4C03
# 317 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 318 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 319 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40C0
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40A2::
# 323 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 324 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4BCC
# 325 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 326 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 327 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40C0
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40B1::
# 331 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 332 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4B95
# 333 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 334 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 335 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40C0
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40C0::
# 339 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 340 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4C38
# 341 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 342 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 343 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40CC::
# 348 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0801
# 349 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4339
# 350 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 351 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	lock
# 352 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	faceplayer
# 353 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A457E
# 354 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	callstd 5
# 355 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 356 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 357 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 358 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40FA
# 359 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40FA
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40FA::
# 363 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41BB
# 364 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 365 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 366 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 367 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 368 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 369 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A490C
# 370 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 371 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special TryRecordMixLinkup
# 372 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
# 373 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 374 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4166
# 375 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 376 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4301
# 377 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 378 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A430D
# 379 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 380 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A432D
# 381 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 382 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 383 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 384 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A42F5
# 385 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4166
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4166::
# 389 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_0x8004, 3
# 390 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, VAR_0x8004
# 391 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	messageautoscroll Naranja_7islasPomelo_G03_M02_Text_081A4A22
# 392 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 393 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 8, 3, 0x202, 0
# 394 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DrawWholeMapView
# 395 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	delay 0x3C
# 396 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M02_Movement_081A4356
# 397 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 398 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	closemessage
# 399 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A435B
# 400 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 401 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	opendoor 8, 1
# 402 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitdooranim
# 403 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A435F
# 404 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 405 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 406 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	closedoor 8, 1
# 407 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitdooranim
# 408 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
# 409 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4325
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41BB::
# 413 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 414 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 415 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41E1
# 416 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	specialvar VAR_RESULT, DoesPartyHaveEnigmaBerry
# 417 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 418 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41EE
# 419 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41E1::
# 424 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A48A3
# 425 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 426 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 427 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_RESULT, 0
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41EE::
# 432 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A48DD
# 433 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 434 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 435 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_RESULT, 0
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41FB::
# 440 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0818
# 441 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A434B
# 442 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_0x8007, VAR_LAST_TALKED
# 443 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	lock
# 444 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	faceplayer
# 445 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A45FE
# 446 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	callstd 5
# 447 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 448 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 449 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 450 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4229
# 451 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4229
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4229::
# 455 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 456 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 457 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 458 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A490C
# 459 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 460 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special ValidateMixingGameLanguage
# 461 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
# 462 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special SetChampionSaveWarp
# 463 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
# 464 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 465 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4294
# 466 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 467 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4301
# 468 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 469 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A430D
# 470 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 471 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A432D
# 472 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 473 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319
# 474 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 475 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A42F5
# 476 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 477 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A42E9
# 478 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4294
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4294::
# 482 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setvar VAR_0x8004, 4
# 483 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, VAR_0x8004
# 484 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	messageautoscroll Naranja_7islasPomelo_G03_M02_Text_081A4A22
# 485 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 486 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	setmetatile 0xB, 3, 0x202, 0
# 487 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DrawWholeMapView
# 488 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	delay 0x3C
# 489 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M02_Movement_081A4356
# 490 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 491 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	closemessage
# 492 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A435B
# 493 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 494 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	opendoor 0xB, 1
# 495 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitdooranim
# 496 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M02_Movement_081A435F
# 497 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 498 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 499 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	closedoor 0xB, 1
# 500 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitdooranim
# 501 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
# 502 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	goto Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4325
	return


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A42E9::
# 506 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 507 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4AC8
# 508 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 509 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 510 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A42F5::
# 515 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 516 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4A85
# 517 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 518 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 519 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4301::
# 524 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 525 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4A30
# 526 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 527 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 528 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A430D::
# 533 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 534 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4B1D
# 535 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 536 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 537 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4319::
# 542 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 543 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4B59
# 544 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 545 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 546 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4325::
# 551 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special SetCableClubWarp
# 552 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special DoCableClubWarp
# 553 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitstate
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A432D::
# 558 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	special CloseLink
# 559 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	message Naranja_7islasPomelo_G03_M02_Text_081A4B6C
# 560 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitmessage
# 561 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	waitbuttonpress
# 562 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4339::
# 567 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A141C
# 568 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	callstd 2
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A4342::
# 573 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A13DF
# 574 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	callstd 2
	end


Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A434B::
# 579 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A145C
# 580 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	callstd 2
	end


# 584 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
Naranja_7islasPomelo_G03_M02_Movement_081A4354:
# 585 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	face_down
	step_end

# 588 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
Naranja_7islasPomelo_G03_M02_Movement_081A4356:
# 589 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	face_right
	step_end

# 592 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
Naranja_7islasPomelo_G03_M02_Movement_081A4358:
# 593 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	walk_down
# 594 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	walk_down
	step_end

# 597 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
Naranja_7islasPomelo_G03_M02_Movement_081A435B:
# 598 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	walk_right
# 599 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	walk_up
# 600 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	walk_up
	step_end

# 603 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
Naranja_7islasPomelo_G03_M02_Movement_081A435F:
# 604 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	walk_up
	step_end

# 607 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
Naranja_7islasPomelo_G03_M02_Movement_081A4361:
# 608 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	face_left
	step_end

Naranja_7islasPomelo_G03_M02_Text_081A13DF::
# 611 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "I’m terribly sorry. The COLOSSEUM\nis undergoing adjustments.$"

Naranja_7islasPomelo_G03_M02_Text_081A141C::
# 615 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "I’m terribly sorry. The TRADE CENTER\nis undergoing inspections.$"

Naranja_7islasPomelo_G03_M02_Text_081A145C::
# 619 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "I’m terribly sorry. The RECORD CORNER\nis under preparation.$"

Naranja_7islasPomelo_G03_M02_Text_081A4510::
# 623 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Welcome to the POKéMON CABLE CLUB\nCOLOSSEUM.\pYou may battle with your friends here.\pWould you like to battle?$"

Naranja_7islasPomelo_G03_M02_Text_081A457E::
# 627 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Welcome to the POKéMON CABLE CLUB\nTRADE CENTER.\pYou may trade your POKéMON here\nwith a friend.\pWould you like to trade POKéMON?$"

Naranja_7islasPomelo_G03_M02_Text_081A45FE::
# 631 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Welcome to the POKéMON CABLE CLUB\nRECORD CENTER.\pYou may mix your records as a TRAINER\nwith the records of your friends.\pWould you like to mix records?$"

Naranja_7islasPomelo_G03_M02_Text_081A4696::
# 635 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "There are three link battle modes.\pSINGLE BATTLE is for two TRAINERS\nwith one or more POKéMON each.\pEach TRAINER can have one POKéMON\nin battle at a time.\pDOUBLE BATTLE is for two TRAINERS\nwith two or more POKéMON each.\pEach TRAINER will send out two\nPOKéMON in battle at a time.\pMULTI BATTLE is for four TRAINERS\nwith one or more POKéMON each.\pEach TRAINER can have one POKéMON\nin battle at a time.$"

Naranja_7islasPomelo_G03_M02_Text_081A4826::
# 639 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Would you like to battle?$"

Naranja_7islasPomelo_G03_M02_Text_081A4840::
# 643 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Which Battle Mode would you like\nto play?$"

Naranja_7islasPomelo_G03_M02_Text_081A486A::
# 647 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "For a DOUBLE BATTLE, you must have\nat least two POKéMON.$"

Naranja_7islasPomelo_G03_M02_Text_081A48A3::
# 651 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "For trading, you must have at least\ntwo POKéMON with you.$"

Naranja_7islasPomelo_G03_M02_Text_081A48DD::
# 655 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Your {STR_VAR_1} BERRY-holding POKéMON\ncan’t be traded.$"

Naranja_7islasPomelo_G03_M02_Text_081A490C::
# 659 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Please wait.\n... ... B Button: Cancel$"

Naranja_7islasPomelo_G03_M02_Text_081A4A22::
# 663 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Please enter.$"

Naranja_7islasPomelo_G03_M02_Text_081A4A30::
# 667 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Someone is not ready to link.\pPlease come back after everyone has\nmade preparations.$"

Naranja_7islasPomelo_G03_M02_Text_081A4A85::
# 671 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Sorry, we have a transmission error...\nPlease reset and try again.$"

Naranja_7islasPomelo_G03_M02_Text_081A4AC8::
# 675 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Sorry, we have a transmission error.\nYou may not mix records in different\llanguages.$"

Naranja_7islasPomelo_G03_M02_Text_081A4B1D::
# 679 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "The link partners appear to have made\ndifferent selections.$"

Naranja_7islasPomelo_G03_M02_Text_081A4B59::
# 683 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Please come again.$"

Naranja_7islasPomelo_G03_M02_Text_081A4B6C::
# 687 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "The number of participants is\nincorrect.$"

Naranja_7islasPomelo_G03_M02_Text_081A4B95::
# 691 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "The SINGLE Battle Mode cannot be\nplayed by {STR_VAR_1} players.$"

Naranja_7islasPomelo_G03_M02_Text_081A4BCC::
# 695 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "The DOUBLE Battle Mode cannot be\nplayed by {STR_VAR_1} players.$"

Naranja_7islasPomelo_G03_M02_Text_081A4C03::
# 699 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "There must be four players to play\nthis Battle Mode.$"

Naranja_7islasPomelo_G03_M02_Text_081A4C38::
# 703 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "Please confirm the number of players\nand start again.$"

Naranja_7islasPomelo_G03_M02_Text_081A4E50::
# 707 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "The TRAINER CARD data will\nbe rewritten.$"

Naranja_7islasPomelo_G03_M02_Text_081A4E79::
# 711 "data/maps/Naranja_7islasPomelo_G03_M02/scripts.pory"
	.string "I hope to see you again!$"
