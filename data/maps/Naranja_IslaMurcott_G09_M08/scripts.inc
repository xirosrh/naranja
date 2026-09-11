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
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FD7D, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 64 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_241, Naranja_IslaMurcott_G09_M08_Movement_0815609B
# 65 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_246, Naranja_IslaMurcott_G09_M08_Movement_0815609B
# 66 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SUBMARINE_SHADOW, Naranja_IslaMurcott_G09_M08_Movement_081560A5
# 67 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 68 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M08_241
# 69 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M08_246
# 70 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G09_M08_SUBMARINE_SHADOW
# 71 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_2, 2
# 72 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 73 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815605C
# 74 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 75 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156071
# 76 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 77 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156086
# 78 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 79 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156086
# 80 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FE60, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 82 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_HIDE_TEAM_HIDESHOAL_CAVE_G24_M23_241
# 83 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_HIDE_TEAM_HIDESHOAL_CAVE_G24_M23_241_2
# 84 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1
# 85 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, 0xA
# 86 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815605C::
# 91 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, Naranja_IslaMurcott_G09_M08_Movement_081560B3
# 92 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 93 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 94 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156071::
# 99 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, Naranja_IslaMurcott_G09_M08_Movement_081560B9
# 100 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 101 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 102 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156086::
# 107 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M08_SCIENTIST_1, Naranja_IslaMurcott_G09_M08_Movement_081560BE
# 108 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 109 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 110 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 115 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lock
# 116 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	faceplayer
# 117 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 118 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560D9
# 119 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FA0A, MSGBOX_DEFAULT
# 120 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560D9::
# 125 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FA73, MSGBOX_DEFAULT
# 126 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 127 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 128 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156135
# 129 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_0817FB0A
# 130 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 131 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560FD
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560FD::
# 135 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	multichoicedefault 0x12, 6, 0x34, 2, 0
# 136 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 137 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 138 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815613F
# 139 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 140 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156167
# 141 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 142 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561DA
# 143 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 144 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561DA
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156135::
# 149 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FAAD, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815613F::
# 155 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FB81, MSGBOX_YESNO
# 156 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 157 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815618A
# 158 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 1
# 159 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156196
# 160 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M41, 0xFF, 1, 0xA
# 161 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitstate
# 162 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156167::
# 167 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FB9C, MSGBOX_YESNO
# 168 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 169 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815618A
# 170 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156196
# 171 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M04, 0xFF, 0x13, 0x17
# 172 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitstate
# 173 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815618A::
# 178 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_0817FBE5
# 179 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 180 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081560FD
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156196::
# 184 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FBB6, MSGBOX_DEFAULT
# 185 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 186 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 187 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 188 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay 0x1E
# 189 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	hideobjectat 32783, MAP_NARANJA_ISLA_MURCOTT_G09_M08
# 190 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 191 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561EF
# 192 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 193 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561E4
# 194 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay 0x1E
# 195 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 196 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_0x8004, 5
# 197 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561DA::
# 202 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FB5F, MSGBOX_DEFAULT
# 203 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561E4::
# 208 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M08_Movement_081561FA
# 209 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081561EF::
# 214 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G09_M08_Movement_081561FD
# 215 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId2::
# 220 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FC07, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId3::
# 225 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FC7C, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M08_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId4::
# 230 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	lock
# 231 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	faceplayer
# 232 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 233 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815626F
# 234 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_010F
# 235 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156265
# 236 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0070
# 237 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156258
# 238 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_2, 2
# 239 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815624E
# 240 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FD1C, MSGBOX_DEFAULT
# 241 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	closemessage
# 242 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 243 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmovement LOCALID_NONE
# 244 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815624E::
# 249 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FE60, MSGBOX_DEFAULT
# 250 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156258::
# 255 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_010F
# 256 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0817FF35, MSGBOX_DEFAULT
# 257 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156265::
# 262 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_081800A0, MSGBOX_DEFAULT
# 263 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815626F::
# 268 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 269 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380
# 270 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 271 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 272 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562A7
# 273 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 274 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815629D
# 275 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0818017B, MSGBOX_DEFAULT
# 276 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815629D::
# 281 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_081801EA, MSGBOX_DEFAULT
# 282 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562A7::
# 287 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_0818028B
# 288 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 289 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562B3
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562B3::
# 293 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	multichoice 0, 0, 0x2E, 0
# 294 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 295 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 296 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562EA
# 297 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 298 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815632A
# 299 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 300 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815636A
# 301 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 302 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815636A
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562EA::
# 307 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_081803DD, MSGBOX_YESNO
# 308 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 309 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156374
# 310 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC0
# 311 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 312 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 0
# 313 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 314 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 315 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeitem ITEM_SCANNER, 1
# 316 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0818046B, MSGBOX_DEFAULT
# 317 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0126
# 318 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815632A::
# 322 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_08180412, MSGBOX_YESNO
# 323 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 324 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156374
# 325 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC1
# 326 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 327 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	callstd 0
# 328 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 329 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 330 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	removeitem ITEM_SCANNER, 1
# 331 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_0818046B, MSGBOX_DEFAULT
# 332 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0126
# 333 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_0815636A::
# 337 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_08180360, MSGBOX_DEFAULT
# 338 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156374::
# 343 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	message Naranja_IslaMurcott_G09_M08_Text_08180447
# 344 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	waitmessage
# 345 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	goto Naranja_IslaMurcott_G09_M08_EventScript_Sub_081562B3
	return


Naranja_IslaMurcott_G09_M08_EventScript_Sub_08156380::
# 349 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	setvar VAR_TEMP_1, 1
# 350 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M08_Text_08180491, MSGBOX_DEFAULT
# 351 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	release
	end


# 355 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_0815609B:
# 356 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 357 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 358 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	jump_up
# 359 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	set_invisible
	step_end

# 362 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560A5:
# 363 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 364 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 365 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 366 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	delay_16
# 367 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 368 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 369 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 370 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 371 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 372 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 373 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 374 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
# 375 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_fast_right
	step_end

# 378 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560B3:
# 379 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 380 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 381 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 382 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 383 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
	step_end

# 386 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560B9:
# 387 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 388 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 389 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
# 390 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
	step_end

# 393 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560BE:
# 394 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 395 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
# 396 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_left
	step_end

# 399 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081560C2:
# 400 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
	step_end

# 403 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081561FA:
# 404 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_right
# 405 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_in_place_faster_up
	step_end

# 408 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
Naranja_IslaMurcott_G09_M08_Movement_081561FD:
# 409 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	walk_up
	step_end

Naranja_IslaMurcott_G09_M08_Text_0817FA0A::
# 412 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "¿Querías montar en el barco?\nLo siento el servicio no está disponible.\lDiscùlpenos.$"

Naranja_IslaMurcott_G09_M08_Text_0817FA73::
# 416 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Hello, are you here for the ferry?\nMay I see your TICKET?$"

Naranja_IslaMurcott_G09_M08_Text_0817FAAD::
# 420 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{PLAYER} no tiene reserva…\pLo sentimos…            \ppero…           \psin reserva no hay crucero.$"

Naranja_IslaMurcott_G09_M08_Text_0817FB0A::
# 424 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\pPerfect! That’s all you need!\pAnd where would you like to go?$"

Naranja_IslaMurcott_G09_M08_Text_0817FB5F::
# 428 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Please sail with us another time!$"

Naranja_IslaMurcott_G09_M08_Text_0817FB81::
# 432 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

Naranja_IslaMurcott_G09_M08_Text_0817FB9C::
# 436 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "BATTLE TOWER it is, then!$"

Naranja_IslaMurcott_G09_M08_Text_0817FBB6::
# 440 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Please board the ferry and wait for\ndeparture.$"

Naranja_IslaMurcott_G09_M08_Text_0817FBE5::
# 444 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "Then, where would you like to go?$"

Naranja_IslaMurcott_G09_M08_Text_0817FC07::
# 448 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "A journey to the bottom of the sea...\nI wonder what it’d be like?\pI’d love to go deep underwater like\nthat some day.$"

Naranja_IslaMurcott_G09_M08_Text_0817FC7C::
# 452 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\nthe ocean floor exploration.\pBut the sub’s too small for me.\pIf I squeezed in, there wouldn’t be\nany room for the CAPTAIN...$"

Naranja_IslaMurcott_G09_M08_Text_0817FD1C::
# 456 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Those thugs...\pThey’re the same lot who tried to rob\nthe DEVON GOODS at the MUSEUM.$"

Naranja_IslaMurcott_G09_M08_Text_0817FD7D::
# 460 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{ARCHIE}: Fwahahaha...\nI commiserate with you!\pAll that effort you spent following\nme here all the way from MT. PYRE.\pBut now...\nNo one can stop us! No one!\pOr, will you follow us back to our\nHIDEOUT in LILYCOVE CITY?\pFwahahahaha...$"

Naranja_IslaMurcott_G09_M08_Text_0817FE60::
# 464 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Why...\pWhy would TEAM {AQUA} steal my\nSUBMARINE EXPLORER 1?\pThey can’t be after the slumbering\nPOKéMON at the bottom of the sea...\pBut even if I were to chase them,\nI don’t stand a chance against them...$"

Naranja_IslaMurcott_G09_M08_Text_0817FF35::
# 468 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}...\pOkay... So TEAM {AQUA} left before you\ncould stop them...\pOh, no, don’t blame yourself.\nYou’re not responsible for this.\pTrying to catch a submarine...\nIt’s impossible for most people.\pYou would need a POKéMON that knows\nhow to DIVE...\pPerhaps if you went out to\nMOSSDEEP CITY...\pA lot of divers live out there, so\nsomeone might teach you...$"

Naranja_IslaMurcott_G09_M08_Text_081800A0::
# 472 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\nsubmarine...  It’s impossible.\pYou would need a POKéMON that knows\nhow to DIVE...\pPerhaps if you went out to\nMOSSDEEP CITY...\pA lot of divers live out there, so\nsomeone might teach you...$"

Naranja_IslaMurcott_G09_M08_Text_0818017B::
# 476 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\nMR. BRINEY came to our SHIPYARD.\pIt won’t be long now before we finish\nmaking the ferry!$"

Naranja_IslaMurcott_G09_M08_Text_081801EA::
# 480 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\pWe finally finished making the ferry\nS.S. TIDAL!\pWe couldn’t have done it without your\nfriend MR. BRINEY.\pPlease go for a short cruise on it!$"

Naranja_IslaMurcott_G09_M08_Text_0818028B::
# 484 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Oh?\n{PLAYER}{KUN}, that item you have...\pThat’s a SCANNER! That would sure\nhelp us on our explorations.\p{PLAYER}{KUN}, would you trade your\nSCANNER for something?\pLike say a DEEPSEATOOTH or a\nDEEPSEASCALE that I have?$"

Naranja_IslaMurcott_G09_M08_Text_08180360::
# 488 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Are you certain?\nIt’s useless to you, {PLAYER}{KUN}...\pWell, okay, then. If you want to trade\nyour SCANNER, let me know.$"

Naranja_IslaMurcott_G09_M08_Text_081803DD::
# 492 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: So you’ll trade it for\nmy DEEPSEATOOTH?$"

Naranja_IslaMurcott_G09_M08_Text_08180412::
# 496 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: So you’ll trade it for\nmy DEEPSEASCALE?$"

Naranja_IslaMurcott_G09_M08_Text_08180447::
# 500 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"

Naranja_IslaMurcott_G09_M08_Text_0818046B::
# 504 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\nCAPT. STERN.$"

Naranja_IslaMurcott_G09_M08_Text_08180491::
# 508 "data/maps/Naranja_IslaMurcott_G09_M08/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\nThis will help our research a lot!$"
