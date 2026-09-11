Naranja_IslaMurcott_G09_M08_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G09_M08_OnTransition
	.byte 0


Naranja_IslaMurcott_G09_M08_OnTransition::
# 9 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setescapewarp MAP_NARANJA_ISLA_MURCOTT_G00_M01, 0xFF, 0x1C, 0xD
# 10 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_2, 1
# 12 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155F89
# 13 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 14 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155F85
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155F85::
# 19 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_SS_TIDAL
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155F89::
# 24 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	savebgm MUS_ENCOUNTER_MAGMA
# 25 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, 0xC, 0xD
# 26 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, 9
# 27 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_BEAUTY
	return


Naranja_IslaMurcott_G09_M08_EventScript_Trigger_1::
# 32 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lockall
# 33 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_0x8008, 0
# 34 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155FD5
	return


Naranja_IslaMurcott_G09_M08_EventScript_Trigger_2::
# 38 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lockall
# 39 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155FD5
	return


Naranja_IslaMurcott_G09_M08_EventScript_Trigger_3::
# 44 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lockall
# 45 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_0x8008, 2
# 46 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155FD5
	return


Naranja_IslaMurcott_G09_M08_EventScript_Trigger_4::
# 50 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lockall
# 51 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_0x8008, 3
# 52 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M08_Movement_081560C2
# 53 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155FD5
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08155FD5::
# 58 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_246, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 59 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 61 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 62 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FD7D
# 63 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 65 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_241, Naranja_IslaMurcott_G09_M08_Movement_0815609B
# 66 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_246, Naranja_IslaMurcott_G09_M08_Movement_0815609B
# 67 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SUBMARINE_SHADOW, Naranja_IslaMurcott_G09_M08_Movement_081560A5
# 68 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M08_241
# 70 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M08_246
# 71 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M08_SUBMARINE_SHADOW
# 72 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_2, 2
# 73 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 74 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815605C
# 75 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 76 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156071
# 77 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 78 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156086
# 79 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 80 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156086
# 81 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FE60
# 82 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 84 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_HIDE_TEAM_HIDESHOAL_CAVE_G24_M23_241
# 85 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_HIDE_TEAM_HIDESHOAL_CAVE_G24_M23_241_2
# 86 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1
# 87 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, 0xA
# 88 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815605C::
# 93 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, Naranja_IslaMurcott_G09_M08_Movement_081560B3
# 94 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 95 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 96 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156071::
# 101 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, Naranja_IslaMurcott_G09_M08_Movement_081560B9
# 102 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 103 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 104 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156086::
# 109 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, Naranja_IslaMurcott_G09_M08_Movement_081560BE
# 110 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 111 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 112 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 117 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lock
# 118 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	faceplayer
# 119 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 120 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560D9
# 121 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FA0A
# 122 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 123 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560D9::
# 128 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FA73
# 129 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 131 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 132 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156135
# 133 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_0817FB0A
# 134 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 135 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560FD
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560FD::
# 139 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	multichoicedefault 0x12, 6, 0x34, 2, 0
# 140 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 141 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 142 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815613F
# 143 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 144 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156167
# 145 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 146 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561DA
# 147 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 148 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561DA
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156135::
# 153 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FAAD
# 154 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 155 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815613F::
# 160 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FB81
# 161 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 5
# 162 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 163 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815618A
# 164 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 1
# 165 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156196
# 166 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M41, 0xFF, 1, 0xA
# 167 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitstate
# 168 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156167::
# 173 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FB9C
# 174 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 5
# 175 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 176 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815618A
# 177 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156196
# 178 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M04, 0xFF, 0x13, 0x17
# 179 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitstate
# 180 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815618A::
# 185 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_0817FBE5
# 186 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 187 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560FD
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156196::
# 191 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FBB6
# 192 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 193 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 194 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 195 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 196 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay 0x1E
# 197 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	hideobjectat 32783, MAP_NARANJA_ISLA_MURCOTT_G09_M08
# 198 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 199 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561EF
# 200 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 201 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561E4
# 202 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay 0x1E
# 203 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 204 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_0x8004, 5
# 205 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561DA::
# 210 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FB5F
# 211 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 212 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561E4::
# 217 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M08_Movement_081561FA
# 218 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561EF::
# 223 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M08_Movement_081561FD
# 224 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId2::
# 229 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FC07
# 230 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId3::
# 235 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FC7C
# 236 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId4::
# 241 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lock
# 242 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	faceplayer
# 243 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 244 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815626F
# 245 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_010F
# 246 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156265
# 247 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0070
# 248 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156258
# 249 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_2, 2
# 250 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815624E
# 251 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FD1C
# 252 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 253 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 254 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 255 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815624E::
# 261 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FE60
# 262 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 263 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156258::
# 268 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_010F
# 269 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0817FF35
# 270 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 271 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156265::
# 276 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_081800A0
# 277 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 278 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815626F::
# 283 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 284 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380
# 285 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 286 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 287 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562A7
# 288 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 289 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815629D
# 290 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0818017B
# 291 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 292 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815629D::
# 297 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_081801EA
# 298 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 299 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562A7::
# 304 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_0818028B
# 305 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 306 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562B3
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562B3::
# 310 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	multichoice 0, 0, 0x2E, 0
# 311 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 312 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 313 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562EA
# 314 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 315 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815632A
# 316 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 317 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815636A
# 318 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 319 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815636A
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562EA::
# 324 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_081803DD
# 325 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 5
# 326 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 327 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156374
# 328 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC0
# 329 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 330 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 0
# 331 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 332 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 333 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeitem ITEM_SCANNER, 1
# 334 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0818046B
# 335 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 336 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0126
# 337 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815632A::
# 341 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_08180412
# 342 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 5
# 343 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 344 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156374
# 345 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC1
# 346 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 347 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 0
# 348 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 349 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 350 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeitem ITEM_SCANNER, 1
# 351 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_0818046B
# 352 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 353 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0126
# 354 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815636A::
# 358 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_08180360
# 359 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 360 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156374::
# 365 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_08180447
# 366 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 367 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562B3
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380::
# 371 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_TEMP_1, 1
# 372 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M08_Text_08180491
# 373 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 4
# 374 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


# 378 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_0815609B:
# 379 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 380 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 381 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	jump_up
# 382 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	set_invisible
	step_end

# 385 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560A5:
# 386 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 387 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 388 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 389 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 390 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 391 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 392 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 393 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 394 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 395 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 396 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 397 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 398 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
	step_end

# 401 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560B3:
# 402 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 403 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 404 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 405 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 406 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
	step_end

# 409 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560B9:
# 410 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 411 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 412 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
# 413 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
	step_end

# 416 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560BE:
# 417 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 418 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 419 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
	step_end

# 422 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560C2:
# 423 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
	step_end

# 426 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081561FA:
# 427 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 428 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_in_place_faster_up
	step_end

# 431 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081561FD:
# 432 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
	step_end

Naranja_IslaMurcott_G09_M08_Text_0817FA0A::
# 435 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "¿Querías montar en el barco?\nLo siento el servicio no está disponible.\lDiscùlpenos.$"

Naranja_IslaMurcott_G09_M08_Text_0817FA73::
# 439 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Hello, are you here for the ferry?\nMay I see your TICKET?$"

Naranja_IslaMurcott_G09_M08_Text_0817FAAD::
# 443 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{PLAYER} no tiene reserva…\pLo sentimos…            \ppero…           \psin reserva no hay crucero.$"

Naranja_IslaMurcott_G09_M08_Text_0817FB0A::
# 447 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\pPerfect! That’s all you need!\pAnd where would you like to go?$"

Naranja_IslaMurcott_G09_M08_Text_0817FB5F::
# 451 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Please sail with us another time!$"

Naranja_IslaMurcott_G09_M08_Text_0817FB81::
# 455 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

Naranja_IslaMurcott_G09_M08_Text_0817FB9C::
# 459 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "BATTLE TOWER it is, then!$"

Naranja_IslaMurcott_G09_M08_Text_0817FBB6::
# 463 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Please board the ferry and wait for\ndeparture.$"

Naranja_IslaMurcott_G09_M08_Text_0817FBE5::
# 467 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Then, where would you like to go?$"

Naranja_IslaMurcott_G09_M08_Text_0817FC07::
# 471 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "A journey to the bottom of the sea...\nI wonder what it’d be like?\pI’d love to go deep underwater like\nthat some day.$"

Naranja_IslaMurcott_G09_M08_Text_0817FC7C::
# 475 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\nthe ocean floor exploration.\pBut the sub’s too small for me.\pIf I squeezed in, there wouldn’t be\nany room for the CAPTAIN...$"

Naranja_IslaMurcott_G09_M08_Text_0817FD1C::
# 479 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Those thugs...\pThey’re the same lot who tried to rob\nthe DEVON GOODS at the MUSEUM.$"

Naranja_IslaMurcott_G09_M08_Text_0817FD7D::
# 483 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{ARCHIE}: Fwahahaha...\nI commiserate with you!\pAll that effort you spent following\nme here all the way from MT. PYRE.\pBut now...\nNo one can stop us! No one!\pOr, will you follow us back to our\nHIDEOUT in LILYCOVE CITY?\pFwahahahaha...$"

Naranja_IslaMurcott_G09_M08_Text_0817FE60::
# 487 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Why...\pWhy would TEAM {AQUA} steal my\nSUBMARINE EXPLORER 1?\pThey can’t be after the slumbering\nPOKéMON at the bottom of the sea...\pBut even if I were to chase them,\nI don’t stand a chance against them...$"

Naranja_IslaMurcott_G09_M08_Text_0817FF35::
# 491 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}...\pOkay... So TEAM {AQUA} left before you\ncould stop them...\pOh, no, don’t blame yourself.\nYou’re not responsible for this.\pTrying to catch a submarine...\nIt’s impossible for most people.\pYou would need a POKéMON that knows\nhow to DIVE...\pPerhaps if you went out to\nMOSSDEEP CITY...\pA lot of divers live out there, so\nsomeone might teach you...$"

Naranja_IslaMurcott_G09_M08_Text_081800A0::
# 495 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\nsubmarine...  It’s impossible.\pYou would need a POKéMON that knows\nhow to DIVE...\pPerhaps if you went out to\nMOSSDEEP CITY...\pA lot of divers live out there, so\nsomeone might teach you...$"

Naranja_IslaMurcott_G09_M08_Text_0818017B::
# 499 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\nMR. BRINEY came to our SHIPYARD.\pIt won’t be long now before we finish\nmaking the ferry!$"

Naranja_IslaMurcott_G09_M08_Text_081801EA::
# 503 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\pWe finally finished making the ferry\nS.S. TIDAL!\pWe couldn’t have done it without your\nfriend MR. BRINEY.\pPlease go for a short cruise on it!$"

Naranja_IslaMurcott_G09_M08_Text_0818028B::
# 507 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Oh?\n{PLAYER}{KUN}, that item you have...\pThat’s a SCANNER! That would sure\nhelp us on our explorations.\p{PLAYER}{KUN}, would you trade your\nSCANNER for something?\pLike say a DEEPSEATOOTH or a\nDEEPSEASCALE that I have?$"

Naranja_IslaMurcott_G09_M08_Text_08180360::
# 511 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Are you certain?\nIt’s useless to you, {PLAYER}{KUN}...\pWell, okay, then. If you want to trade\nyour SCANNER, let me know.$"

Naranja_IslaMurcott_G09_M08_Text_081803DD::
# 515 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: So you’ll trade it for\nmy DEEPSEATOOTH?$"

Naranja_IslaMurcott_G09_M08_Text_08180412::
# 519 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: So you’ll trade it for\nmy DEEPSEASCALE?$"

Naranja_IslaMurcott_G09_M08_Text_08180447::
# 523 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"

Naranja_IslaMurcott_G09_M08_Text_0818046B::
# 527 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\nCAPT. STERN.$"

Naranja_IslaMurcott_G09_M08_Text_08180491::
# 531 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\nThis will help our research a lot!$"
