Naranja_ValenciaIsland_MapScripts::
# 5 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ValenciaIsland_OnTransition
# 6 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_ValenciaIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_ValenciaIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	map_script_2 VAR_NARANJA_VALENCIA_ISLAND_TUTORIAL_STATE, 2, Naranja_ValenciaIsland_OnFrame_1
	.2byte 0


Naranja_ValenciaIsland_OnTransition::
# 12 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setflag FLAG_NARANJA_VALENCIA_ISLAND_EVENT_COMPLETE_0816
# 13 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	compare_var_to_value VAR_NARANJA_VALENCIA_ISLAND_TUTORIAL_STATE, 0
# 14 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call_if EQUAL, Naranja_ValenciaIsland_EventScript_Sub_0814B731
# 15 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	compare_var_to_value VAR_NARANJA_VALENCIA_ISLAND_TUTORIAL_STATE, 2
# 16 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call_if EQUAL, Naranja_ValenciaIsland_EventScript_Sub_0814B739
	end


Naranja_ValenciaIsland_EventScript_Sub_0814B731::
# 21 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_VALENCIA_ISLAND_MAN_4, 5, 0xB
	return


Naranja_ValenciaIsland_EventScript_Sub_0814B739::
# 26 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


Naranja_ValenciaIsland_OnFrame_1::
# 31 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	lockall
# 32 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setflag FLAG_NARANJA_VALENCIA_ISLAND_EVENT_COMPLETE_4000
# 33 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special SavePlayerParty
# 34 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special LoadWallyZigzagoon
# 35 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_NARANJA_VALENCIA_ISLAND_GIRL_3, Naranja_ValenciaIsland_Movement_0814B7ED
# 36 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ValenciaIsland_Movement_0814B7CC
# 37 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ValenciaIsland_Text_0816D361, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special StartWallyTutorialBattle
# 40 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	waitstate
# 41 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ValenciaIsland_Text_0816D3DE, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_NARANJA_VALENCIA_ISLAND_GIRL_3, Naranja_MeteorFalls_1F_1R_Movement_081A083F, MAP_NARANJA_VALENCIA_ISLAND
# 43 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	waitmovement LOCALID_NONE, MAP_NARANJA_MANDARIN_ISLAND_NORTH
# 44 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ValenciaIsland_Text_0816D408, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	closemessage
# 46 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	clearflag FLAG_NARANJA_VALENCIA_ISLAND_EVENT_COMPLETE_4000
# 47 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setvar VAR_NARANJA_VALENCIA_ISLAND_TUTORIAL_STATE, 3
# 48 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	clearflag FLAG_NARANJA_SAILING_MUSIC_ACTIVE
# 50 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special LoadPlayerParty
# 51 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setvar VAR_NARANJA_ORANGE_LEAGUE_BADGE_COUNT, 1
# 52 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	warp MAP_NARANJA_VALENCIA_ISLAND_GYM, 0xFF, 4, 0x6C
# 53 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	waitstate
# 54 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	releaseall
	end


Naranja_ValenciaIsland_EventScript_Boy2::
# 59 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	lock
# 60 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	faceplayer
# 61 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ValenciaIsland_Text_08164490, MSGBOX_DEFAULT
# 62 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	closemessage
# 63 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_NARANJA_VALENCIA_ISLAND_MART_EMPLOYEE, Naranja_RusturfTunnel_Movement_081A083D
# 64 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	waitmovement LOCALID_NONE
# 65 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	release
	end


Naranja_ValenciaIsland_EventScript_Sign_4::
# 70 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ValenciaIsland_Text_08164602, MSGBOX_SIGN
	end


Naranja_ValenciaIsland_EventScript_MartEmployee::
# 75 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	lock
# 76 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	faceplayer
# 77 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 78 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	waitmessage
# 79 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	checkflag FLAG_NARANJA_VALENCIA_ISLAND_EVENT_COMPLETE_0128
# 80 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	goto_if EQUAL, Naranja_ValenciaIsland_EventScript_Sub_081552EA
# 81 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	pokemart Naranja_ValenciaIsland_Mart_081552D0
# 82 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 83 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	release
	end


Naranja_ValenciaIsland_EventScript_Sub_081552EA::
# 88 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	pokemart Naranja_ValenciaIsland_Mart_081552FC
# 89 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	release
	end


Naranja_ValenciaIsland_EventScript_Trigger_1::
# 95 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_TANGELO_TOWN_ISLAND_G02_M02_WALLY
# 96 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	goto_if LESS_THAN, Naranja_ValenciaIsland_EventScript_Sub_086B5DDC
# 97 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	release
	end


Naranja_ValenciaIsland_EventScript_Sub_086B5DDC::
# 102 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	lock
# 103 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ValenciaIsland_Movement_0801936A
# 104 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	nop
# 105 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	msgbox Naranja_ValenciaIsland_Text_086B5DF0, MSGBOX_AUTOCLOSE
# 106 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	nop
# 107 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	release
	end


Naranja_ValenciaIsland_EventScript_Sub_08EB9550::
# 112 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 3, 0x35, 1
# 113 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 3, 2, 1
# 114 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 4, 0x16, 1
# 115 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 4, 0x1D4, 1
# 116 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xD, 5, 1, 0
# 117 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 5, 1, 0
# 118 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 5, 0x1D0, 0
# 119 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 5, 0x1D1, 0
# 120 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 5, 0x1D1, 0
# 121 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 5, 0x1D1, 0
# 122 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 5, 0x1D2, 0
# 123 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xD, 6, 1, 0
# 124 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 6, 1, 0
# 125 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 6, 0x1E0, 0
# 126 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 6, 0x1E1, 0
# 127 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 6, 0x1E1, 0
# 128 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 6, 0x1E1, 0
# 129 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 6, 0x1E1, 0
# 130 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 6, 0x1D2, 0
# 131 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x15, 6, 0x16, 1
# 132 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 7, 0x1D4, 0
# 133 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 7, 0x1D5, 1
# 134 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 7, 0x1D4, 1
# 135 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 7, 0x1D5, 1
# 136 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 7, 0xE, 0
# 137 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 7, 0xE, 0
# 138 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 7, 0x1E0, 0
# 139 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x15, 7, 0x253, 0
# 140 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 8, 0x16, 1
# 141 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 8, 0x16, 1
	return


Naranja_ValenciaIsland_EventScript_Trigger_8::
# 146 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	lockall
# 147 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB9550
# 148 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 149 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	releaseall
	end


Naranja_ValenciaIsland_EventScript_Sub_08EB9680::
# 154 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x15, 6, 0xC7, 1
# 155 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x15, 7, 0x25A, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB9693::
# 160 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 3, 0x1FD, 1
# 161 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 4, 0x1E4, 1
# 162 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 6, 0xE, 1
# 163 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x14, 7, 0x16, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB96B8::
# 168 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 3, 0x1FC, 1
# 169 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 4, 0x1EC, 1
# 170 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 5, 0xC7, 1
# 171 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 6, 0xC7, 1
# 172 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 7, 0x1F5, 1
# 173 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x13, 8, 0x1DD, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB96EF::
# 178 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 5, 0x1D5, 1
# 179 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 6, 0x1ED, 1
# 180 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 7, 0x1F4, 1
# 181 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x12, 8, 0x1DC, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB9714::
# 186 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 5, 0x1D4, 1
# 187 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 6, 0x1EC, 1
# 188 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 7, 0x1F5, 1
# 189 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x11, 8, 0x1ED, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB9739::
# 194 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 5, 0x1D5, 1
# 195 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 6, 0x1DD, 1
# 196 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 7, 0x1D4, 1
# 197 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0x10, 8, 0x1EC, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB975E::
# 202 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 5, 0x1D4, 1
# 203 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 6, 0x1DC, 1
# 204 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 7, 0x1D5, 1
# 205 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xF, 8, 0x1ED, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB9783::
# 210 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 5, 0x1D5, 0
# 211 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 6, 0x1ED, 0
# 212 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 7, 0x1F4, 0
# 213 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xE, 8, 0x1DC, 1
	return


Naranja_ValenciaIsland_EventScript_Sub_08EB97A8::
# 218 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xD, 5, 0x1D4, 1
# 219 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setmetatile 0xD, 6, 0x1DC, 1
	return


Naranja_ValenciaIsland_EventScript_Trigger_5::
# 224 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	lockall
# 225 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	playse SE_ORB
# 226 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ValenciaIsland_Movement_08EB97E0
# 227 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	applymovement LOCALID_NARANJA_VALENCIA_ISLAND_GRASS_CUSHION, Naranja_ValenciaIsland_Movement_08EB97C0
# 228 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB9680
# 229 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 230 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 0x15
# 231 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB9693
# 232 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 233 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 0x10
# 234 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB96B8
# 235 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 236 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 8
# 237 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB96EF
# 238 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 239 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 6
# 240 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB9714
# 241 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 242 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 3
# 243 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB9739
# 244 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 3
# 246 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB975E
# 247 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 248 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 3
# 249 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB9783
# 250 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 251 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 3
# 252 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	call Naranja_ValenciaIsland_EventScript_Sub_08EB97A8
# 253 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	special DrawWholeMapView
# 254 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay 0x25
# 255 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	removeobject LOCALID_NARANJA_VALENCIA_ISLAND_GRASS_CUSHION
# 256 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	releaseall
	end


Naranja_ValenciaIsland_EventScript_Trigger_7::
# 261 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	setobjectxy LOCALID_NARANJA_VALENCIA_ISLAND_GRASS_CUSHION, 0x18, 5
# 262 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	release
	end


# 266 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Movement_0801936A:
# 267 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_slow_up
	step_end

# 270 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Movement_0814B7CC:
# 271 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	acro_end_wheelie_face_down
# 272 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	face_left
# 273 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 274 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 275 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 276 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 277 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 278 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 279 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 280 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 281 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 282 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 283 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 284 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 285 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 286 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 287 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 288 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 289 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 290 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 291 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 292 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 293 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 294 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 295 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 296 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 297 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 298 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 299 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 300 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_up
# 301 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_up
# 302 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_in_place_faster_right
	step_end

# 305 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Movement_0814B7ED:
# 306 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay_8
# 307 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 308 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 309 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 310 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 311 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 312 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 313 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_down
# 314 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 315 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 316 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 317 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 318 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 319 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 320 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 321 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 322 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 323 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 324 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 325 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 326 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 327 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 328 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 329 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 330 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 331 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 332 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 333 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 334 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_up
# 335 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_up
# 336 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_right
# 337 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay_16
# 338 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_in_place_faster_up
# 339 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay_16
# 340 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	delay_16
# 341 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_in_place_faster_right
	step_end

# 344 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Movement_08EB97C0:
# 345 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	set_visible
# 346 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 347 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 348 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 349 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 350 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 351 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 352 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 353 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 354 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	ride_water_current_left
# 355 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 356 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 357 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 358 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 359 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 360 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 361 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 362 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 363 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 364 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 365 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 366 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 367 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 368 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 369 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 370 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 371 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 372 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 373 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 374 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
# 375 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_faster_left
	step_end

# 378 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Movement_08EB97E0:
# 379 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_slow_left
# 380 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_left
# 381 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_left
# 382 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	walk_left
# 383 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	face_right
# 384 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	face_right
# 385 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	face_right
# 386 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	face_right
# 387 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	face_right
	step_end

	.align 2
# 390 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Mart_081552D0:
# 391 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_POKE_BALL
# 392 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_POTION
# 393 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 394 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 395 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_AWAKENING
# 396 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 397 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_REPEL
# 398 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_X_SPEED
# 399 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_X_ATTACK
# 400 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_X_DEFEND
# 401 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE

	.align 2
# 404 "data/maps/Naranja_ValenciaIsland/scripts.pory"
Naranja_ValenciaIsland_Mart_081552FC:
# 405 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_POKE_BALL
# 406 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 407 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_POTION
# 408 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 409 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 410 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 411 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_AWAKENING
# 412 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 413 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_REPEL
# 414 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_X_SPEED
# 415 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_X_ATTACK
# 416 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_X_DEFEND
# 417 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE

Naranja_ValenciaIsland_Text_08164490::
# 420 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.string "Me aburro mucho, así que me dedico\na pasear sin salir de estos cuadrados.\pPuede parecer estùpido,\npero es más original que ser otro\lentrenador de pokemon más.\p{COLOR 0x04}{PLAYER}: ¿¿??$"

Naranja_ValenciaIsland_Text_08164602::
# 424 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.string "{COLOR 0x0D}Isla VALENCIA\n{SHIFT_DOWN 0x00}“Paraiso sureño”$"

Naranja_ValenciaIsland_Text_0816D361::
# 428 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.string "WALLY: {PLAYER}...\nPOKéMON hide in tall grass like this,\ldon’t they?\pPlease watch me and see if I can\ncatch one properly.\p...Whoa!$"

Naranja_ValenciaIsland_Text_0816D3DE::
# 432 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.string "WALLY: I did it... It’s my...\nMy POKéMON!$"

Naranja_ValenciaIsland_Text_0816D408::
# 436 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.string "{PLAYER}, thank you!\nLet’s go back to the GYM!$"

Naranja_ValenciaIsland_Text_086B5DF0::
# 440 "data/maps/Naranja_ValenciaIsland/scripts.pory"
	.string "Humm…\pMejor no alejarse demasiado\pAhora tengo que ver\ncomo volveré a P. Paleta.$"
