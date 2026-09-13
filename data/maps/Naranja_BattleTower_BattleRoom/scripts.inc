Naranja_BattleTower_BattleRoom_MapScripts::
# 5 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_BattleTower_BattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_BattleTower_BattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Naranja_BattleTower_BattleRoom_OnFrame_1
	.2byte 0


Naranja_BattleTower_BattleRoom_OnFrame_1::
# 11 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_BattleRoom_Movement_08160AB7
# 13 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 14 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_081608FA
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_081608FA::
# 18 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleTowerFunc
# 19 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	addobject LOCALID_NARANJA_BATTLE_TOWER_BATTLE_ROOM_VARS
# 20 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_BATTLE_ROOM_VARS, Naranja_BattleTower_BattleRoom_Movement_08160AC0
# 21 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattlePalaceFunction
# 23 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	msgbox 0x20234CC, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmessage
# 25 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	closemessage
# 26 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 28 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 29 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 30 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitstate
# 31 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 32 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 33 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160961
# 34 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special LoadPlayerParty
# 35 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 36 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8005, 5
# 37 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 38 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 0xE
# 39 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 40 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 41 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 42 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	warp MAP_NARANJA_BATTLE_TOWER_LOBBY, 0xFF, 6, 6
# 43 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitstate
# 44 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_08160961
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_08160961::
# 48 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 6
# 49 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 50 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 51 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 52 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A56
# 53 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_BATTLE_ROOM_VARS, Naranja_BattleTower_BattleRoom_Movement_08160AC6
# 54 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 55 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	removeobject LOCALID_NARANJA_BATTLE_TOWER_BATTLE_ROOM_VARS
# 56 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_BATTLE_ROOM_TEALA, Naranja_BattleTower_BattleRoom_Movement_08160ACB
# 57 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 58 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_BattleRoom_Movement_08160ABC
# 59 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	msgbox Naranja_BattleTower_BattleRoom_Text_0819ACDC, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special SavePlayerParty
# 63 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattlePikeFunction
# 64 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 65 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitfanfare
# 66 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special HealPlayerParty
# 67 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_081609B2
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_081609B2::
# 71 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	msgbox Naranja_BattleTower_BattleRoom_Text_0819AD09, MSGBOX_YESNO
# 72 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 73 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 74 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_081609E0
# 75 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 76 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A3C
# 77 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 78 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_081609E0
# 79 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_081609E0
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_081609E0::
# 83 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	msgbox Naranja_BattleTower_BattleRoom_Text_0819AD3C, MSGBOX_YESNO
# 84 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 85 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 86 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A0E
# 87 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 88 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A94
# 89 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 90 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A0E
# 91 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A0E
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A0E::
# 95 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	msgbox Naranja_BattleTower_BattleRoom_Text_0819AD66, MSGBOX_YESNO
# 96 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 97 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 98 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_081609B2
# 99 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 100 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_08160AB1
# 101 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 102 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_BattleRoom_EventScript_Sub_081609B2
# 103 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A3C
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A3C::
# 107 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	closemessage
# 108 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_BattleRoom_Movement_08160ABE
# 109 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 110 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_BATTLE_ROOM_TEALA, Naranja_BattleTower_BattleRoom_Movement_08160AD0
# 111 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmovement LOCALID_NONE
# 112 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_081608FA
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A56::
# 116 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special LoadPlayerParty
# 117 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 118 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8005, 4
# 119 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 120 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 121 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8005, 1
# 122 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 123 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 7
# 124 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 125 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 0xE
# 126 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattleArenaFunction
# 127 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 128 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 129 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	warp MAP_NARANJA_BATTLE_TOWER_LOBBY, 0xFF, 6, 6
# 130 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitstate
# 131 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A94
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_08160A94::
# 135 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 136 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special CallBattlePyramidFunction
# 137 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	message Naranja_BattleTower_BattleRoom_Text_081C6CE1
# 138 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	delay 0x3C
# 139 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitmessage
# 140 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	playse SE_SAVE
# 141 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	waitse
# 142 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	msgbox Naranja_BattleTower_BattleRoom_Text_081C6D05, MSGBOX_DEFAULT
# 143 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	goto Naranja_BattleTower_BattleRoom_EventScript_Sub_08160AB1
	return


Naranja_BattleTower_BattleRoom_EventScript_Sub_08160AB1::
# 147 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	fadescreen 1
# 148 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	special StopMapMusic
	end


# 152 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160AB7:
# 153 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
# 154 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
# 155 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
# 156 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	face_right
	step_end

# 159 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160ABC:
# 160 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	face_down
	step_end

# 163 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160ABE:
# 164 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	face_right
	step_end

# 167 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160AC0:
# 168 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_down
# 169 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_down
# 170 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_down
# 171 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_down
# 172 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	face_left
	step_end

# 175 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160AC6:
# 176 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
# 177 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
# 178 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
# 179 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
	step_end

# 182 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160ACB:
# 183 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_right
# 184 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_right
# 185 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_right
# 186 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_up
	step_end

# 189 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
Naranja_BattleTower_BattleRoom_Movement_08160AD0:
# 190 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_down
# 191 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_left
# 192 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_left
# 193 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	walk_left
# 194 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	face_right
	step_end

Naranja_BattleTower_BattleRoom_Text_0819ACDC::
# 197 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	.string "We will restore your POKéMON to\nfull health.$"

Naranja_BattleTower_BattleRoom_Text_0819AD09::
# 201 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	.string "You will be facing opponent no. {STR_VAR_1}.\nAre you ready?$"

Naranja_BattleTower_BattleRoom_Text_0819AD3C::
# 205 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	.string "Would you like to save and\nquit the game?$"

Naranja_BattleTower_BattleRoom_Text_0819AD66::
# 209 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	.string "Would you like to cancel your BATTLE\nROOM challenge?$"

Naranja_BattleTower_BattleRoom_Text_081C6CE1::
# 213 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	.string "SAVING...\nDON’T TURN OFF THE POWER.$"

Naranja_BattleTower_BattleRoom_Text_081C6D05::
# 217 "data/maps/Naranja_BattleTower_BattleRoom/scripts.pory"
	.string "{PLAYER} saved the game.$"
