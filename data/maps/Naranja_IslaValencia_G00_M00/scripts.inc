Naranja_IslaValencia_G00_M00_MapScripts::
# 5 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaValencia_G00_M00_OnTransition
# 6 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaValencia_G00_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaValencia_G00_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_VALENCIA_STORY_STATE, 2, Naranja_IslaValencia_G00_M00_OnFrame_1
	.2byte 0


Naranja_IslaValencia_G00_M00_OnTransition::
# 12 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_0816
# 13 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_VALENCIA_STORY_STATE, 0
# 14 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G00_M00_EventScript_Sub_0814B731
# 15 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_VALENCIA_STORY_STATE, 2
# 16 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G00_M00_EventScript_Sub_0814B739
	end


Naranja_IslaValencia_G00_M00_EventScript_Sub_0814B731::
# 21 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setobjectxyperm LOCALID_ISLA_VALENCIA_G00_M00_MAN_4, 5, 0xB
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_0814B739::
# 26 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


Naranja_IslaValencia_G00_M00_OnFrame_1::
# 31 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	lockall
# 32 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_4000
# 33 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special SavePlayerParty
# 34 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special LoadWallyZigzagoon
# 35 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_ISLA_VALENCIA_G00_M00_GIRL_3, Naranja_IslaValencia_G00_M00_Movement_0814B7ED
# 36 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaValencia_G00_M00_Movement_0814B7CC
# 37 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_IslaValencia_G00_M00_Text_0816D361
# 39 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 4
# 40 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special StartWallyTutorialBattle
# 41 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	waitstate
# 42 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_IslaValencia_G00_M00_Text_0816D3DE
# 43 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 4
# 44 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_ISLA_VALENCIA_G00_M00_GIRL_3, Naranja_GraniteCave_G24_M00_Movement_081A083F, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 45 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	waitmovement LOCALID_NONE, MAP_NARANJA_ISLA_MANDARIN_G00_M02
# 46 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_IslaValencia_G00_M00_Text_0816D408
# 47 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	closemessage
# 49 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_4000
# 50 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setvar VAR_NARANJA_ISLA_VALENCIA_STORY_STATE, 3
# 51 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	fadedefaultbgm
# 52 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_4001
# 53 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special LoadPlayerParty
# 54 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 55 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	warp MAP_NARANJA_INSIDE_OF_TRUCK_G08_M01, 0xFF, 4, 0x6C
# 56 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	waitstate
# 57 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	releaseall
	end


Naranja_IslaValencia_G00_M00_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId1::
# 62 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	lock
# 63 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	faceplayer
# 64 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_IslaValencia_G00_M00_Text_08164490
# 65 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 4
# 66 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	closemessage
# 67 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_ISLA_VALENCIA_G00_M00_MART_EMPLOYEE, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 68 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	release
	end


Naranja_IslaValencia_G00_M00_EventScript_Sign_4::
# 74 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_IslaValencia_G00_M00_Text_08164602
# 75 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 3
	end


Naranja_IslaValencia_G00_M00_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId3::
# 80 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	lock
# 81 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	faceplayer
# 82 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 83 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	waitmessage
# 84 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_0128
# 85 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G00_M00_EventScript_Sub_081552EA
# 86 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	pokemart Naranja_IslaValencia_G00_M00_Mart_081552D0
# 87 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 88 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 4
# 89 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	release
	end


Naranja_IslaValencia_G00_M00_EventScript_Sub_081552EA::
# 94 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	pokemart Naranja_IslaValencia_G00_M00_Mart_081552FC
# 95 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 96 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	release
	end


Naranja_IslaValencia_G00_M00_EventScript_Trigger_1::
# 102 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 103 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaValencia_G00_M00_EventScript_Sub_086B5DDC
# 104 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	release
	end


Naranja_IslaValencia_G00_M00_EventScript_Sub_086B5DDC::
# 109 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	lock
# 110 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaValencia_G00_M00_Movement_0801936A
# 111 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	nop
# 112 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	loadword 0, Naranja_IslaValencia_G00_M00_Text_086B5DF0
# 113 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	callstd 6
# 114 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	nop
# 115 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	release
	end


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9550::
# 120 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 3, 0x35, 1
# 121 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 3, 2, 1
# 122 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 4, 0x16, 1
# 123 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 4, 0x1D4, 1
# 124 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xD, 5, 1, 0
# 125 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 5, 1, 0
# 126 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 5, 0x1D0, 0
# 127 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 5, 0x1D1, 0
# 128 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 5, 0x1D1, 0
# 129 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 5, 0x1D1, 0
# 130 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 5, 0x1D2, 0
# 131 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xD, 6, 1, 0
# 132 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 6, 1, 0
# 133 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 6, 0x1E0, 0
# 134 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 6, 0x1E1, 0
# 135 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 6, 0x1E1, 0
# 136 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 6, 0x1E1, 0
# 137 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 6, 0x1E1, 0
# 138 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 6, 0x1D2, 0
# 139 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x15, 6, 0x16, 1
# 140 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 7, 0x1D4, 0
# 141 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 7, 0x1D5, 1
# 142 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 7, 0x1D4, 1
# 143 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 7, 0x1D5, 1
# 144 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 7, 0xE, 0
# 145 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 7, 0xE, 0
# 146 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 7, 0x1E0, 0
# 147 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x15, 7, 0x253, 0
# 148 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 8, 0x16, 1
# 149 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 8, 0x16, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Trigger_8::
# 154 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	lockall
# 155 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9550
# 156 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 157 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	releaseall
	end


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9680::
# 162 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x15, 6, 0xC7, 1
# 163 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x15, 7, 0x25A, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9693::
# 168 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 3, 0x1FD, 1
# 169 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 4, 0x1E4, 1
# 170 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 6, 0xE, 1
# 171 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x14, 7, 0x16, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB96B8::
# 176 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 3, 0x1FC, 1
# 177 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 4, 0x1EC, 1
# 178 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 5, 0xC7, 1
# 179 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 6, 0xC7, 1
# 180 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 7, 0x1F5, 1
# 181 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x13, 8, 0x1DD, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB96EF::
# 186 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 5, 0x1D5, 1
# 187 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 6, 0x1ED, 1
# 188 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 7, 0x1F4, 1
# 189 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x12, 8, 0x1DC, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9714::
# 194 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 5, 0x1D4, 1
# 195 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 6, 0x1EC, 1
# 196 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 7, 0x1F5, 1
# 197 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x11, 8, 0x1ED, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9739::
# 202 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 5, 0x1D5, 1
# 203 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 6, 0x1DD, 1
# 204 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 7, 0x1D4, 1
# 205 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0x10, 8, 0x1EC, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB975E::
# 210 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 5, 0x1D4, 1
# 211 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 6, 0x1DC, 1
# 212 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 7, 0x1D5, 1
# 213 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xF, 8, 0x1ED, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9783::
# 218 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 5, 0x1D5, 0
# 219 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 6, 0x1ED, 0
# 220 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 7, 0x1F4, 0
# 221 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xE, 8, 0x1DC, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB97A8::
# 226 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xD, 5, 0x1D4, 1
# 227 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setmetatile 0xD, 6, 0x1DC, 1
	return


Naranja_IslaValencia_G00_M00_EventScript_Trigger_5::
# 232 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	lockall
# 233 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	playse SE_ORB
# 234 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaValencia_G00_M00_Movement_08EB97E0
# 235 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	applymovement LOCALID_ISLA_VALENCIA_G00_M00_GRASS_CUSHION, Naranja_IslaValencia_G00_M00_Movement_08EB97C0
# 236 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9680
# 237 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 238 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 0x15
# 239 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9693
# 240 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 241 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 0x10
# 242 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB96B8
# 243 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 244 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 8
# 245 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB96EF
# 246 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 247 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 6
# 248 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9714
# 249 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 250 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 3
# 251 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9739
# 252 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 253 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 3
# 254 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB975E
# 255 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 256 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 3
# 257 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB9783
# 258 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 259 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 3
# 260 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	call Naranja_IslaValencia_G00_M00_EventScript_Sub_08EB97A8
# 261 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	special DrawWholeMapView
# 262 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay 0x25
# 263 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	removeobject LOCALID_ISLA_VALENCIA_G00_M00_GRASS_CUSHION
# 264 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	releaseall
	end


Naranja_IslaValencia_G00_M00_EventScript_Trigger_7::
# 269 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	setobjectxy LOCALID_ISLA_VALENCIA_G00_M00_GRASS_CUSHION, 0x18, 5
# 270 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	release
	end


# 274 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Movement_0801936A:
# 275 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_slow_up
	step_end

# 278 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Movement_0814B7CC:
# 279 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	acro_end_wheelie_face_down
# 280 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	face_left
# 281 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 282 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 283 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 284 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 285 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 286 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 287 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 288 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 289 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 290 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 291 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 292 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 293 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 294 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 295 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 296 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 297 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 298 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 299 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 300 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 301 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 302 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 303 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 304 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 305 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 306 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 307 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 308 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_up
# 309 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_up
# 310 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

# 313 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Movement_0814B7ED:
# 314 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay_8
# 315 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 316 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 317 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 318 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 319 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 320 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 321 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_down
# 322 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 323 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 324 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 325 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 326 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 327 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 328 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 329 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 330 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 331 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 332 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 333 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 334 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 335 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 336 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 337 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 338 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 339 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 340 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 341 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 342 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_up
# 343 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_up
# 344 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_right
# 345 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay_16
# 346 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_in_place_faster_up
# 347 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay_16
# 348 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	delay_16
# 349 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_in_place_faster_right
	step_end

# 352 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Movement_08EB97C0:
# 353 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	set_visible
# 354 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 355 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 356 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 357 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 358 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 359 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 360 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 361 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 362 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	ride_water_current_left
# 363 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 364 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 365 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 366 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 367 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 368 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 369 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 370 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 371 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 372 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 373 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 374 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 375 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 376 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 377 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 378 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 379 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 380 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 381 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 382 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
# 383 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_faster_left
	step_end

# 386 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Movement_08EB97E0:
# 387 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_slow_left
# 388 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_left
# 389 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_left
# 390 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	walk_left
# 391 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	face_right
# 392 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	face_right
# 393 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	face_right
# 394 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	face_right
# 395 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	face_right
	step_end

	.align 2
# 398 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Mart_081552D0:
# 399 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_POKE_BALL
# 400 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_POTION
# 401 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 402 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 403 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_AWAKENING
# 404 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 405 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_REPEL
# 406 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_X_SPEED
# 407 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_X_ATTACK
# 408 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_X_DEFEND
# 409 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE

	.align 2
# 412 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
Naranja_IslaValencia_G00_M00_Mart_081552FC:
# 413 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_POKE_BALL
# 414 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 415 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_POTION
# 416 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 417 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 418 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 419 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_AWAKENING
# 420 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 421 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_REPEL
# 422 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_X_SPEED
# 423 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_X_ATTACK
# 424 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_X_DEFEND
# 425 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE

Naranja_IslaValencia_G00_M00_Text_08164490::
# 428 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.string "Me aburro mucho, así que me dedico\na pasear sin salir de estos cuadrados.\pPuede parecer estùpido,\npero es más original que ser otro\lentrenador de pokemon más.\p{COLOR 0x04}{PLAYER}: ¿¿??$"

Naranja_IslaValencia_G00_M00_Text_08164602::
# 432 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.string "{COLOR 0x0D}Isla VALENCIA\n{SHIFT_DOWN 0x00}“Paraiso sureño”$"

Naranja_IslaValencia_G00_M00_Text_0816D361::
# 436 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.string "WALLY: {PLAYER}...\nPOKéMON hide in tall grass like this,\ldon’t they?\pPlease watch me and see if I can\ncatch one properly.\p...Whoa!$"

Naranja_IslaValencia_G00_M00_Text_0816D3DE::
# 440 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.string "WALLY: I did it... It’s my...\nMy POKéMON!$"

Naranja_IslaValencia_G00_M00_Text_0816D408::
# 444 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.string "{PLAYER}, thank you!\nLet’s go back to the GYM!$"

Naranja_IslaValencia_G00_M00_Text_086B5DF0::
# 448 "data/maps/Naranja_IslaValencia_G00_M00/scripts.pory"
	.string "Humm…\pMejor no alejarse demasiado\pAhora tengo que ver\ncomo volveré a P. Paleta.$"
