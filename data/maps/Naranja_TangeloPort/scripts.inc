Naranja_TangeloPort_MapScripts::
# 5 "data/maps/Naranja_TangeloPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TangeloPort_OnTransition
# 6 "data/maps/Naranja_TangeloPort/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_TangeloPort_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_TangeloPort_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_TangeloPort/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 1, Naranja_TangeloPort_OnFrame_1
# 8 "data/maps/Naranja_TangeloPort/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 2, Naranja_TangeloPort_OnFrame_2
# 9 "data/maps/Naranja_TangeloPort/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 7, Naranja_TangeloPort_OnFrame_3
	.2byte 0


Naranja_TangeloPort_OnTransition::
# 14 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_NARANJA_TANGELO_TOWN_PORT_EVENT_COMPLETE_080F
# 15 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 2
# 16 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D57B
# 17 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkflag FLAG_NARANJA_TANGELO_TOWN_PORT_EVENT_COMPLETE_0052
# 18 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if LESS_THAN, Naranja_TangeloPort_EventScript_Sub_0814D583
# 19 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_TANGELO_TOWN_PORT_STORY_STATE, 3
# 20 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D5A6
# 21 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 4
# 22 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D570
# 23 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_TANGELO_TOWN_PORT_EVENT_STATE_2, 4
# 24 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D570
# 25 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_TANGELO_TOWN_PORT_EVENT_STATE_3, 1
# 26 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D567
# 27 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_NARANJA_PALLET_TOWN_EVENT_STATE_4, 3
# 28 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D563
	end


Naranja_TangeloPort_EventScript_Sub_0814D563::
# 33 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_012D
	return


Naranja_TangeloPort_EventScript_Sub_0814D567::
# 38 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_EVENT_STATE_3, 2
# 39 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_HIDE_NARANJA_TANGELO_TOWN_ISLAND_G00_M10_VARS
	return


Naranja_TangeloPort_EventScript_Sub_0814D570::
# 44 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 5
# 45 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_EVENT_STATE_2, 5
	return


Naranja_TangeloPort_EventScript_Sub_0814D57B::
# 50 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, 0xE, 8
	return


Naranja_TangeloPort_EventScript_Sub_0814D583::
# 55 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_TANGELO_TOWN_PORT_STORY_STATE, 0
# 56 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D59A
# 57 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, 0xA, 1
# 58 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, 7
	return


Naranja_TangeloPort_EventScript_Sub_0814D59A::
# 63 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, 7, 2
# 64 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, 8
	return


Naranja_TangeloPort_EventScript_Sub_0814D5A6::
# 69 "data/maps/Naranja_TangeloPort/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TANGELO_TOWN_PORT_G00_M09_SCIENTIST_1_2
# 70 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, 8
# 71 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 72 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 73 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D5C5
# 74 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 75 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D5CD
	return


Naranja_TangeloPort_EventScript_Sub_0814D5C5::
# 80 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, 5, 9
	return


Naranja_TangeloPort_EventScript_Sub_0814D5CD::
# 85 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, 0xE, 9
	return


Naranja_TangeloPort_OnFrame_1::
# 90 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 91 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8004, 5
# 92 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8005, 8
# 93 "data/maps/Naranja_TangeloPort/scripts.pory"
	call Naranja_TangeloPort_EventScript_Sub_0814D62B
# 94 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02F9
# 95 "data/maps/Naranja_TangeloPort/scripts.pory"
	warpsilent MAP_NARANJA_PALLET_TOWN_ASHS_HOUSE_1F, 0xFF, 8, 8
# 96 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitstate
# 97 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_OnFrame_2::
# 102 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 103 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8004, 0xE
# 104 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8005, 8
# 105 "data/maps/Naranja_TangeloPort/scripts.pory"
	call Naranja_TangeloPort_EventScript_Sub_0814D62B
# 106 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02FA
# 107 "data/maps/Naranja_TangeloPort/scripts.pory"
	warpsilent MAP_NARANJA_TANGELO_PORT_MAYS_HOUSE_1F, 0xFF, 2, 8
# 108 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitstate
# 109 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Sub_0814D62B::
# 114 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay 0xF
# 115 "data/maps/Naranja_TangeloPort/scripts.pory"
	playse SE_LEDGE
# 116 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_TangeloPort_Movement_0814D6C0
# 117 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 118 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8004, 0x8005
# 119 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 120 "data/maps/Naranja_TangeloPort/scripts.pory"
	addobject LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4
# 121 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814D6AC
# 122 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 123 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8004, 0x8005
# 124 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 125 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay 0xA
# 126 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814D6AE
# 127 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 128 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816A7C9, MSGBOX_DEFAULT
# 129 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
# 130 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814D6B1
# 131 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_TangeloPort_Movement_0814D6B8
# 132 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 133 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8004, 0x8005
# 134 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 135 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814D6B5
# 136 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_TangeloPort_Movement_0814D6BD
# 137 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 138 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_HIDE_NARANJA_TANGELO_TOWN_PORT_G00_M09_SCIENTIST_1_2
# 139 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 3
# 140 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_VALENCIA_ISLAND
# 141 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8004, 0x8005
# 142 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 143 "data/maps/Naranja_TangeloPort/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TANGELO_TOWN_PORT_G00_M09_SCIENTIST_1
# 144 "data/maps/Naranja_TangeloPort/scripts.pory"
	clearflag FLAG_NARANJA_VALENCIA_ISLAND_EVENT_COMPLETE_4000
	return


Naranja_TangeloPort_OnFrame_3::
# 149 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 150 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 8
# 151 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Scientist1_2::
# 156 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AC00, MSGBOX_NPC
	end


Naranja_TangeloPort_EventScript_Scientist1_3::
# 161 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AC56, MSGBOX_NPC
	end


Naranja_TangeloPort_EventScript_Scientist1_4::
# 166 "data/maps/Naranja_TangeloPort/scripts.pory"
	lock
# 167 "data/maps/Naranja_TangeloPort/scripts.pory"
	faceplayer
# 168 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_UPGRADED_POKEDEX
# 169 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D72F
# 170 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkflag FLAG_NARANJA_TANGELO_TOWN_PORT_EVENT_COMPLETE_0052
# 171 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D722
# 172 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_NARANJA_TANGELO_TOWN_PORT_STORY_STATE, 0
# 173 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto_if NOT_EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D708
# 174 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816ACEB, MSGBOX_DEFAULT
# 175 "data/maps/Naranja_TangeloPort/scripts.pory"
	release
	end


Naranja_TangeloPort_EventScript_Sub_0814D708::
# 180 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AD82, MSGBOX_DEFAULT
# 181 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
# 182 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_RusturfTunnel_Movement_081A083D
# 183 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 184 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_STORY_STATE, 2
# 185 "data/maps/Naranja_TangeloPort/scripts.pory"
	release
	end


Naranja_TangeloPort_EventScript_Sub_0814D722::
# 190 "data/maps/Naranja_TangeloPort/scripts.pory"
	special GetPlayerBigGuyGirlString
# 191 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816ADF2, MSGBOX_DEFAULT
# 192 "data/maps/Naranja_TangeloPort/scripts.pory"
	release
	end


Naranja_TangeloPort_EventScript_Sub_0814D72F::
# 197 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AE25, MSGBOX_DEFAULT
# 198 "data/maps/Naranja_TangeloPort/scripts.pory"
	release
	end


Naranja_TangeloPort_EventScript_Trigger_1::
# 203 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 204 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_TangeloPort_Movement_0814D779
# 205 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 206 "data/maps/Naranja_TangeloPort/scripts.pory"
	call Naranja_TangeloPort_EventScript_Sub_0814D755
# 207 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_TangeloPort_Movement_0814D789
# 208 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 209 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Sub_0814D755::
# 214 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816ACEB, MSGBOX_DEFAULT
# 215 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
# 216 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_TangeloPort_Movement_0814D787
# 217 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_TangeloPort_Movement_0814D793
# 218 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 219 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AD3C, MSGBOX_DEFAULT
# 220 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
	return


Naranja_TangeloPort_EventScript_Trigger_2::
# 225 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 226 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_TangeloPort_Movement_0814D7B3
# 227 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 228 "data/maps/Naranja_TangeloPort/scripts.pory"
	call Naranja_TangeloPort_EventScript_Sub_0814D755
# 229 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_TangeloPort_Movement_0814D7C0
# 230 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 231 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Trigger_3::
# 236 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 237 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 238 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 239 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 240 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 241 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AD82, MSGBOX_DEFAULT
# 242 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
# 243 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1, Naranja_RusturfTunnel_Movement_081A083D
# 244 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 245 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_STORY_STATE, 2
# 246 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Sign_1::
# 251 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AE50, MSGBOX_SIGN
	end


Naranja_TangeloPort_EventScript_Sign_2::
# 256 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AE87, MSGBOX_SIGN
	end


Naranja_TangeloPort_EventScript_Sign_3::
# 261 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 262 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 263 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 264 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_ColdPath_EventScript_TotodileDoll
# 265 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 266 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_086B67B1
# 267 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Sign_4::
# 272 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 273 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 274 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 275 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D84E
# 276 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 277 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sign_3
# 278 "data/maps/Naranja_TangeloPort/scripts.pory"
	releaseall
	end


Naranja_TangeloPort_EventScript_Sub_0814D84E::
# 283 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816AEAC, MSGBOX_DEFAULT
	return


Naranja_TangeloPort_EventScript_Trigger_9::
# 288 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 289 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8008, 1
# 290 "data/maps/Naranja_TangeloPort/scripts.pory"
	setobjectxy LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, 0xB, 9
# 291 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814D8B6
	return


Naranja_TangeloPort_EventScript_Trigger_6::
# 295 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 296 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8008, 2
# 297 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814D8B6
	return


Naranja_TangeloPort_EventScript_Trigger_7::
# 301 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 302 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8008, 3
# 303 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814D8B6
	return


Naranja_TangeloPort_EventScript_Trigger_4::
# 307 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 308 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8008, 4
# 309 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814D8B6
	return


Naranja_TangeloPort_EventScript_Trigger_5::
# 313 "data/maps/Naranja_TangeloPort/scripts.pory"
	lockall
# 314 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8008, 5
# 315 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814D8B6
	return


Naranja_TangeloPort_EventScript_Sub_0814D8B6::
# 319 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 320 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 321 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D93C
# 322 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 323 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D947
# 324 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 325 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 326 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D926
# 327 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 328 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D931
# 329 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816A8EE, MSGBOX_DEFAULT
# 330 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
# 331 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 332 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 333 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D952
# 334 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 335 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D995
# 336 "data/maps/Naranja_TangeloPort/scripts.pory"
	call Naranja_TangeloPort_EventScript_Sub_0814DD38
# 337 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 338 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 339 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DAAA
# 340 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 341 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DAED
# 342 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814DD2B
	return


Naranja_TangeloPort_EventScript_Sub_0814D926::
# 346 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8009, 5
# 347 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x800A, 8
	return


Naranja_TangeloPort_EventScript_Sub_0814D931::
# 352 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x8009, 0xE
# 353 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_0x800A, 8
	return


Naranja_TangeloPort_EventScript_Sub_0814D93C::
# 358 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 359 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814D947::
# 364 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 365 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814D952::
# 370 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 371 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D9D8
# 372 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 373 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D9ED
# 374 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 375 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA02
# 376 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 377 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA17
# 378 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 379 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA2C
# 380 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 381 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA41
	return


Naranja_TangeloPort_EventScript_Sub_0814D995::
# 386 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 387 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D9D8
# 388 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 389 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D9ED
# 390 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 391 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA56
# 392 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 393 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA6B
# 394 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 395 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA80
# 396 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 397 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DA95
	return


Naranja_TangeloPort_EventScript_Sub_0814D9D8::
# 402 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 403 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 404 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC76
# 405 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814D9ED::
# 410 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 411 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 412 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC7D
# 413 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA02::
# 418 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 419 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 420 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC84
# 421 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA17::
# 426 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 427 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 428 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC89
# 429 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA2C::
# 434 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 435 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 436 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC8F
# 437 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA41::
# 442 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 443 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 444 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC92
# 445 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA56::
# 450 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 451 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 452 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC96
# 453 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA6B::
# 458 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 459 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 460 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC9A
# 461 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA80::
# 466 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 467 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 468 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DC9D
# 469 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DA95::
# 474 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 475 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 476 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCA3
# 477 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DAAA::
# 482 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 483 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB30
# 484 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 485 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB3B
# 486 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 487 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB46
# 488 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 489 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB6C
# 490 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 491 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB92
# 492 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 493 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DBB8
	return


Naranja_TangeloPort_EventScript_Sub_0814DAED::
# 498 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 499 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB30
# 500 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 501 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DB3B
# 502 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 503 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DBDE
# 504 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 505 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DC04
# 506 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 4
# 507 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DC2A
# 508 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_0x8008, 5
# 509 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814DC50
	return


Naranja_TangeloPort_EventScript_Sub_0814DB30::
# 514 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCA8
# 515 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DB3B::
# 520 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCAE
# 521 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_TangeloPort_EventScript_Sub_0814DB46::
# 526 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCB4
# 527 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 528 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 529 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 530 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 531 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 532 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 533 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 534 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DB6C::
# 539 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCBA
# 540 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 541 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 542 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 543 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 544 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 545 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 546 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 547 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DB92::
# 552 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCC1
# 553 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 554 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 555 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 556 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 557 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 558 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 559 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 560 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DBB8::
# 565 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCC5
# 566 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 567 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 568 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 569 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 570 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 571 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 572 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 573 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DBDE::
# 578 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCCA
# 579 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 580 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 581 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 582 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 583 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 584 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 585 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 586 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DC04::
# 591 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCCF
# 592 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 593 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 594 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 595 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 596 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 597 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 598 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 599 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DC2A::
# 604 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCD3
# 605 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 606 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 607 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 608 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 609 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 610 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 611 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 612 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Sub_0814DC50::
# 617 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCDA
# 618 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 619 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 620 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 621 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 622 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 623 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 624 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 625 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
	return


Naranja_TangeloPort_EventScript_Scientist1::
# 630 "data/maps/Naranja_TangeloPort/scripts.pory"
	lock
# 631 "data/maps/Naranja_TangeloPort/scripts.pory"
	faceplayer
# 632 "data/maps/Naranja_TangeloPort/scripts.pory"
	checkplayergender
# 633 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 634 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D926
# 635 "data/maps/Naranja_TangeloPort/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 636 "data/maps/Naranja_TangeloPort/scripts.pory"
	call_if EQUAL, Naranja_TangeloPort_EventScript_Sub_0814D931
# 637 "data/maps/Naranja_TangeloPort/scripts.pory"
	call Naranja_TangeloPort_EventScript_Sub_0814DD38
# 638 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 639 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 640 "data/maps/Naranja_TangeloPort/scripts.pory"
	opendoor 0x8009, 0x800A
# 641 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 642 "data/maps/Naranja_TangeloPort/scripts.pory"
	applymovement LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, Naranja_TangeloPort_Movement_0814DCE0
# 643 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmovement LOCALID_NONE
# 644 "data/maps/Naranja_TangeloPort/scripts.pory"
	hideobjectat LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4, MAP_NARANJA_TANGELO_PORT
# 645 "data/maps/Naranja_TangeloPort/scripts.pory"
	closedoor 0x8009, 0x800A
# 646 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitdooranim
# 647 "data/maps/Naranja_TangeloPort/scripts.pory"
	goto Naranja_TangeloPort_EventScript_Sub_0814DD2B
	return


Naranja_TangeloPort_EventScript_Sub_0814DD2B::
# 651 "data/maps/Naranja_TangeloPort/scripts.pory"
	removeobject LOCALID_NARANJA_TANGELO_TOWN_PORT_SCIENTIST_1_4
# 652 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 653 "data/maps/Naranja_TangeloPort/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_STORY_STATE, 4
# 654 "data/maps/Naranja_TangeloPort/scripts.pory"
	release
	end


Naranja_TangeloPort_EventScript_Sub_0814DD38::
# 659 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816A8FD, MSGBOX_DEFAULT
# 660 "data/maps/Naranja_TangeloPort/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 661 "data/maps/Naranja_TangeloPort/scripts.pory"
	message Naranja_TangeloPort_Text_0816AA32
# 662 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitfanfare
# 663 "data/maps/Naranja_TangeloPort/scripts.pory"
	waitmessage
# 664 "data/maps/Naranja_TangeloPort/scripts.pory"
	setflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_0112
# 665 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AA5C, MSGBOX_DEFAULT
# 666 "data/maps/Naranja_TangeloPort/scripts.pory"
	msgbox Naranja_TangeloPort_Text_0816AB10, MSGBOX_DEFAULT
# 667 "data/maps/Naranja_TangeloPort/scripts.pory"
	closemessage
# 668 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay 0x1E
	return


Naranja_TangeloPort_EventScript_Sub_086B67B1::
# 673 "data/maps/Naranja_TangeloPort/scripts.pory"
	gotostd 0x28
	return


# 676 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6AC:
# 677 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
	step_end

# 680 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6AE:
# 681 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 682 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_left
	step_end

# 685 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6B1:
# 686 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_16
# 687 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_8
# 688 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
	step_end

# 691 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6B5:
# 692 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 693 "data/maps/Naranja_TangeloPort/scripts.pory"
	set_invisible
	step_end

# 696 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6B8:
# 697 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_16
# 698 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_8
# 699 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 700 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 703 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6BD:
# 704 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 705 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
	step_end

# 708 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D6C0:
# 709 "data/maps/Naranja_TangeloPort/scripts.pory"
	jump_right
# 710 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_16
# 711 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_16
# 712 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_16
	step_end

# 715 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D779:
# 716 "data/maps/Naranja_TangeloPort/scripts.pory"
	face_right
# 717 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_8
# 718 "data/maps/Naranja_TangeloPort/scripts.pory"
	disable_jump_landing_ground_effect
# 719 "data/maps/Naranja_TangeloPort/scripts.pory"
	jump_in_place_right
# 720 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_8
# 721 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 722 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 723 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 724 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 725 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_up
# 726 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_up
# 727 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_left
# 728 "data/maps/Naranja_TangeloPort/scripts.pory"
	face_down
	step_end

# 731 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D787:
# 732 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
	step_end

# 735 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D789:
# 736 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 737 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 738 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 739 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 740 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 741 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 742 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 743 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 744 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_down
	step_end

# 747 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D793:
# 748 "data/maps/Naranja_TangeloPort/scripts.pory"
	lock_facing_direction
# 749 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 750 "data/maps/Naranja_TangeloPort/scripts.pory"
	unlock_facing_direction
	step_end

# 753 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D7B3:
# 754 "data/maps/Naranja_TangeloPort/scripts.pory"
	face_right
# 755 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_8
# 756 "data/maps/Naranja_TangeloPort/scripts.pory"
	disable_jump_landing_ground_effect
# 757 "data/maps/Naranja_TangeloPort/scripts.pory"
	jump_in_place_right
# 758 "data/maps/Naranja_TangeloPort/scripts.pory"
	delay_8
# 759 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 760 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 761 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 762 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_up
# 763 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_up
# 764 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_fast_right
# 765 "data/maps/Naranja_TangeloPort/scripts.pory"
	face_down
	step_end

# 768 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814D7C0:
# 769 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 770 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 771 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 772 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 773 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 774 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_down
	step_end

# 777 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC76:
# 778 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 779 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 780 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 781 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 782 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 783 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
	step_end

# 786 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC7D:
# 787 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 788 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 789 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 790 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 791 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
# 792 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
	step_end

# 795 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC84:
# 796 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 797 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 798 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 799 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
	step_end

# 802 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC89:
# 803 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 804 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 805 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 806 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 807 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
	step_end

# 810 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC8F:
# 811 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 812 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
	step_end

# 815 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC92:
# 816 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 817 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 818 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
	step_end

# 821 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC96:
# 822 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 823 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 824 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
	step_end

# 827 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC9A:
# 828 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 829 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
	step_end

# 832 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DC9D:
# 833 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 834 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 835 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 836 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 837 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
	step_end

# 840 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCA3:
# 841 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 842 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 843 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 844 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
	step_end

# 847 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCA8:
# 848 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 849 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 850 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 851 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 852 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
	step_end

# 855 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCAE:
# 856 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 857 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 858 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 859 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
# 860 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_down
	step_end

# 863 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCB4:
# 864 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 865 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 866 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 867 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 868 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 871 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCBA:
# 872 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 873 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 874 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 875 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 876 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 877 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 880 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCC1:
# 881 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 882 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 883 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 886 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCC5:
# 887 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 888 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 889 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_left
# 890 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 893 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCCA:
# 894 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 895 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 896 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 897 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 900 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCCF:
# 901 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 902 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 903 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 906 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCD3:
# 907 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 908 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 909 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 910 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 911 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 912 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 915 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCDA:
# 916 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 917 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 918 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 919 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_right
# 920 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_in_place_faster_up
	step_end

# 923 "data/maps/Naranja_TangeloPort/scripts.pory"
Naranja_TangeloPort_Movement_0814DCE0:
# 924 "data/maps/Naranja_TangeloPort/scripts.pory"
	walk_up
	step_end

Naranja_TangeloPort_Text_0816A7C9::
# 927 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "MOM: {PLAYER}, we’re here, honey!\pIt must be tiring riding with our things\nin the moving truck.\pWell, this is LITTLEROOT TOWN.\pHow do you like it?\nThis is our new home!\pIt has a quaint feel, but it seems to be\nan easy place to live, don’t you think?\pAnd, you get your own room, {PLAYER}!\nLet’s go inside.$"

Naranja_TangeloPort_Text_0816A8EE::
# 931 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"

Naranja_TangeloPort_Text_0816A8FD::
# 935 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\nintroduce yourself to PROF. BIRCH?\pOh! What an adorable POKéMON!\nYou got it from PROF. BIRCH. How nice!\pYou’re your father’s child, all right.\nYou look good together with POKéMON!\pHere, honey! If you’re going out on an\nadventure, wear these RUNNING SHOES.\pThey’ll put a zip in your step!$"

Naranja_TangeloPort_Text_0816AA32::
# 939 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "{PLAYER} switched shoes with the\nRUNNING SHOES.$"

Naranja_TangeloPort_Text_0816AA5C::
# 943 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\ninstructions.\p“Press the B Button while wearing these\nRUNNING SHOES to run extra-fast!\p“Slip on these RUNNING SHOES and race\nin the great outdoors!”$"

Naranja_TangeloPort_Text_0816AB10::
# 947 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pTo think that you have your very own\nPOKéMON now...\lYour father will be overjoyed.\p...But please be careful.\nIf anything happens, you can come home.\pGo on, go get them, honey!$"

Naranja_TangeloPort_Text_0816AC00::
# 951 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "If you use a PC, you can store items\nand POKéMON.\pThe power of science is staggering!$"

Naranja_TangeloPort_Text_0816AC56::
# 955 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\nstudying, then he’ll suddenly go out in\lthe wild to do more research...\pWhen does PROF. BIRCH spend time\nat home?$"

Naranja_TangeloPort_Text_0816ACEB::
# 959 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "If you go in the tall grass at the sides\nof this road, wild POKéMON will appear.$"

Naranja_TangeloPort_Text_0816AD3C::
# 963 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "It’s not safe to go out there if you\ndon’t have any POKéMON with you.$"

Naranja_TangeloPort_Text_0816AD82::
# 967 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "I can hear someone shouting down the\nroad here.\pWhat should I do? What should we do?\nSomebody has to go help...$"

Naranja_TangeloPort_Text_0816ADF2::
# 971 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "Boy, am I glad you went and rescued\nthe PROFESSOR.$"

Naranja_TangeloPort_Text_0816AE25::
# 975 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "Are you going to catch POKéMON?\nGood luck!$"

Naranja_TangeloPort_Text_0816AE50::
# 979 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "LITTLEROOT TOWN\n“A town that can’t be shaded any hue.”$"

Naranja_TangeloPort_Text_0816AE87::
# 983 "data/maps/Naranja_TangeloPort/scripts.pory"
	.string "Laboratorio Profesora IVY$"
