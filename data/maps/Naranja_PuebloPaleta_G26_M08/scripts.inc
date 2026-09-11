Naranja_PuebloPaleta_G26_M08_MapScripts::
# 5 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuebloPaleta_G26_M08_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PuebloPaleta_G26_M08_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Naranja_PuebloPaleta_G26_M08_OnFrame_1
	.2byte 0


Naranja_PuebloPaleta_G26_M08_OnFrame_1::
# 11 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M08_Movement_08160AB7
# 13 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 14 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081608FA
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081608FA::
# 18 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleTowerFunc
# 19 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	addobject LOCALID_PUEBLO_PALETA_G26_M08_VARS
# 20 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M08_VARS, Naranja_PuebloPaleta_G26_M08_Movement_08160AC0
# 21 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattlePalaceFunction
# 23 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	loadword 0, 0x20234CC
# 24 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	callstd 4
# 25 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmessage
# 26 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	closemessage
# 27 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 0
# 29 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8005, 0
# 30 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special DoSpecialTrainerBattle
# 31 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitstate
# 32 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 33 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 34 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160961
# 35 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special LoadPlayerParty
# 36 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 0
# 37 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8005, 5
# 38 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 39 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 0xE
# 40 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 41 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 3
# 42 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 43 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M05, 0xFF, 6, 6
# 44 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitstate
# 45 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160961
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160961::
# 49 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 6
# 50 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 51 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 52 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 53 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A56
# 54 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M08_VARS, Naranja_PuebloPaleta_G26_M08_Movement_08160AC6
# 55 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 56 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	removeobject LOCALID_PUEBLO_PALETA_G26_M08_VARS
# 57 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M08_TEALA, Naranja_PuebloPaleta_G26_M08_Movement_08160ACB
# 58 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 59 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M08_Movement_08160ABC
# 60 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 61 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M08_Text_0819ACDC
# 62 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special LoadPlayerParty
# 64 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special SavePlayerParty
# 65 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattlePikeFunction
# 66 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	playfanfare MUS_HEAL
# 67 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitfanfare
# 68 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609B2
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609B2::
# 73 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M08_Text_0819AD09
# 74 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	callstd 5
# 75 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 76 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 77 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609E0
# 78 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 79 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A3C
# 80 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 81 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609E0
# 82 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609E0
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609E0::
# 86 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M08_Text_0819AD3C
# 87 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	callstd 5
# 88 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 89 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 90 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A0E
# 91 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 92 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A94
# 93 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 94 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A0E
# 95 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A0E
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A0E::
# 99 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M08_Text_0819AD66
# 100 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	callstd 5
# 101 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 102 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 103 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609B2
# 104 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 105 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160AB1
# 106 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 107 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081609B2
# 108 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A3C
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A3C::
# 112 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	closemessage
# 113 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M08_Movement_08160ABE
# 114 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 115 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M08_TEALA, Naranja_PuebloPaleta_G26_M08_Movement_08160AD0
# 116 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 117 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_081608FA
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A56::
# 121 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special LoadPlayerParty
# 122 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 0
# 123 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8005, 4
# 124 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 125 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 2
# 126 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8005, 1
# 127 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 128 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 7
# 129 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 130 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 0xE
# 131 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattleArenaFunction
# 132 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 3
# 133 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 134 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M05, 0xFF, 6, 6
# 135 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitstate
# 136 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A94
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160A94::
# 140 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	setvar VAR_0x8004, 2
# 141 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special CallBattlePyramidFunction
# 142 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	message Naranja_PuebloPaleta_G26_M08_Text_081C6CE1
# 143 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	delay 0x3C
# 144 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitmessage
# 145 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	playse SE_SAVE
# 146 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	waitse
# 147 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M08_Text_081C6D05
# 148 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	callstd 4
# 149 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160AB1
	return


Naranja_PuebloPaleta_G26_M08_EventScript_Sub_08160AB1::
# 153 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	fadescreen 1
# 154 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	special StopMapMusic
	end


# 158 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160AB7:
# 159 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
# 160 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
# 161 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
# 162 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	face_right
	step_end

# 165 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160ABC:
# 166 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	face_down
	step_end

# 169 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160ABE:
# 170 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	face_right
	step_end

# 173 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160AC0:
# 174 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_down
# 175 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_down
# 176 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_down
# 177 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_down
# 178 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	face_left
	step_end

# 181 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160AC6:
# 182 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
# 183 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
# 184 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
# 185 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
	step_end

# 188 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160ACB:
# 189 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_right
# 190 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_right
# 191 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_right
# 192 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
Naranja_PuebloPaleta_G26_M08_Movement_08160AD0:
# 196 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_down
# 197 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_left
# 198 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_left
# 199 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	walk_left
# 200 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	face_right
	step_end

Naranja_PuebloPaleta_G26_M08_Text_0819ACDC::
# 203 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	.string "We will restore your POKéMON to\nfull health.$"

Naranja_PuebloPaleta_G26_M08_Text_0819AD09::
# 207 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	.string "You will be facing opponent no. {STR_VAR_1}.\nAre you ready?$"

Naranja_PuebloPaleta_G26_M08_Text_0819AD3C::
# 211 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	.string "Would you like to save and\nquit the game?$"

Naranja_PuebloPaleta_G26_M08_Text_0819AD66::
# 215 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	.string "Would you like to cancel your BATTLE\nROOM challenge?$"

Naranja_PuebloPaleta_G26_M08_Text_081C6CE1::
# 219 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	.string "SAVING...\nDON’T TURN OFF THE POWER.$"

Naranja_PuebloPaleta_G26_M08_Text_081C6D05::
# 223 "data/maps/Naranja_PuebloPaleta_G26_M08/scripts.pory"
	.string "{PLAYER} saved the game.$"
