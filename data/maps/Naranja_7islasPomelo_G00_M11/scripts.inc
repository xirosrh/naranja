Naranja_7islasPomelo_G00_M11_MapScripts::
# 5 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_7islasPomelo_G00_M11_OnTransition
	.byte 0


Naranja_7islasPomelo_G00_M11_EventScript_OBJ_EVENT_GFX_POOCHYENA_LocalId3::
# 9 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	lock
# 10 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	faceplayer
# 11 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 12 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G00_M11_EventScript_Sub_086B93D0
# 13 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_08166F6B
# 14 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_OnTransition::
# 20 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0811
	end


Naranja_7islasPomelo_G00_M11_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 25 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	lock
# 26 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	faceplayer
# 27 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 28 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E076
# 29 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	message Naranja_7islasPomelo_G00_M11_Text_0816B522
# 30 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmessage
# 31 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	multichoicedefault 0x15, 6, 0, 2, 0
# 32 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 33 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 34 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E04B
# 35 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 36 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E05B
# 37 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 38 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E06B
# 39 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 40 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E06B
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E04B::
# 45 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B57D
# 46 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	closemessage
# 48 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E151
	return


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E05B::
# 52 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B5D2
# 53 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	closemessage
# 55 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E1D8
	return


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E06B::
# 59 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B627
# 60 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	closemessage
# 62 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E076::
# 67 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B3BC
# 68 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 5
# 69 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 70 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E093
# 71 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B471
# 72 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 73 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E093::
# 78 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B417
# 79 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	closemessage
# 81 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E151
	return


Naranja_7islasPomelo_G00_M11_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 85 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B23B
# 86 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 2
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sign_1::
# 91 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B2A7
# 92 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 3
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sign_2::
# 97 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B2D5
# 98 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 3
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sign_5::
# 103 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B317
# 104 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 3
	end


Naranja_7islasPomelo_G00_M11_EventScript_OBJ_EVENT_GFX_MR_BRINEYS_BOAT_LocalId4::
# 109 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	lock
# 110 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	faceplayer
# 111 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0101
# 112 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E11B
# 113 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B665
# 114 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 5
# 115 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 116 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E0F0
# 117 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 118 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E111
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E0F0::
# 123 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B6A8
# 124 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 125 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 0x106
# 126 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 127 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 0
# 128 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0101
# 129 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B6F9
# 130 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 131 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E111::
# 136 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B828
# 137 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 138 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E11B::
# 143 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	message Naranja_7islasPomelo_G00_M11_Text_0816B84E
# 144 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmessage
# 145 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	multichoice 0x14, 8, 0x32, 1
# 146 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 147 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E13D
# 148 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 149 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E147
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E13D::
# 154 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B866
# 155 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 156 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E147::
# 161 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B89A
# 162 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 163 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E151::
# 168 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A010C
# 169 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setobjectsubpriority LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, MAP_NARANJA_7ISLAS_POMELO_G00_M11, 0
# 170 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11, 0
# 171 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, Naranja_7islasPomelo_G00_M11_Movement_0814E40E
# 172 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 173 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	removeobject LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 174 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G00_M11_Movement_0814E402
# 175 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 176 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 177 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02E7
# 178 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT, Naranja_7islasPomelo_G00_M11_Movement_0814E293
# 179 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G00_M11_Movement_0814E293
# 180 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 181 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_NARANJA_ISLAS_G00_M19
# 182 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02EF
# 183 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G00_M11_Movement_0814E405
# 184 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 185 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_NARANJA_ISLAS_G00_M19
# 186 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 187 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 188 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G00_M19_SPIN_CUSHION
# 189 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT
# 190 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	hideobjectat LOCALID_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 191 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setvar VAR_NARANJA_ISLAS_STORY_STATE, 2
# 192 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 193 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	warp MAP_NARANJA_ISLAS_G17_M00, 0xFF, 5, 4
# 194 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, VAR_0x8008
# 195 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitstate
# 196 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E1D8::
# 201 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A010C
# 202 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setobjectsubpriority LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, MAP_NARANJA_7ISLAS_POMELO_G00_M11, 0
# 203 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11, 1
# 204 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, Naranja_7islasPomelo_G00_M11_Movement_0814E40E
# 205 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 206 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	removeobject LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 207 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G00_M11_Movement_0814E402
# 208 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 209 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 210 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02E7
# 211 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT, Naranja_7islasPomelo_G00_M11_Movement_0814E356
# 212 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G00_M11_Movement_0814E356
# 213 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 214 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02EF
# 215 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_NARANJA_ROUTE_109_G00_M24
# 216 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G00_M11_Movement_0814E409
# 217 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 218 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setobjectxyperm LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, 0x15, 0x1A
# 219 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	addobject LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 220 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setobjectsubpriority LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, MAP_NARANJA_ROUTE_109_G00_M24, 0
# 221 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, Naranja_7islasPomelo_G00_M11_Movement_0814E410
# 222 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 223 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	clearflag FLAG_HIDE_ROUTE109_G00_M24_OLD_MAN_1
# 224 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	addobject LOCALID_7ISLAS_POMELO_G00_M11_WOMAN_3
# 225 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	clearflag FLAG_HIDE_ROUTE109_G00_M24_MR_BRINEYS_BOAT
# 226 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT
# 227 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	hideobjectat LOCALID_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 228 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 229 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call_if LESS_THAN, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E281
# 230 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 231 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E28A
# 232 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	closemessage
# 233 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, VAR_0x8008
# 234 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 235 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	resetobjectsubpriority LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1, MAP_NARANJA_ROUTE_109_G00_M24
# 236 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	copyobjectxytoperm LOCALID_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 237 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E281::
# 242 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816E080
# 243 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
	return


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E28A::
# 248 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816E1FA
# 249 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
	return


Naranja_7islasPomelo_G00_M11_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId5::
# 254 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	lock
# 255 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	faceplayer
# 256 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 257 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816B9CE
# 258 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 5
# 259 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 260 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E439
# 261 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 262 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E443
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E439::
# 267 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816BD37
# 268 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 269 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E443::
# 274 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816BADC
# 275 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 276 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setvar VAR_0x8004, 9
# 277 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 278 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	lock
# 279 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	faceplayer
# 280 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 281 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E46E
# 282 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 283 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E485
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E46E::
# 288 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	incrementgamestat 2
# 289 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 290 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E48F
# 291 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816BB44
# 292 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 293 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E485::
# 298 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816BCE9
# 299 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 300 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_0814E48F::
# 305 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G00_M11_Text_0816BCA2
# 306 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	callstd 4
# 307 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102::
# 312 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	dotimebasedevents
# 313 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setvar VAR_0x8004, 0
# 314 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	special BufferTrendyPhraseString
	return


Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A010C::
# 319 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	copyvar VAR_0x8008, VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2
# 320 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 0
	return


Naranja_7islasPomelo_G00_M11_EventScript_Sub_086B93D0::
# 325 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 326 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 0x20, 0
# 327 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	special BattleSetup_StartLatiBattle
# 328 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	release
	end


# 332 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E293:
# 333 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 334 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 335 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 336 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 337 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 338 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 339 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 340 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 341 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 342 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 343 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 344 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 345 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 346 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 347 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 348 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 349 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 350 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 351 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 352 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_left
# 353 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_left
# 354 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 355 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 356 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 357 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 358 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 359 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 360 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 361 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 362 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 363 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 364 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 365 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 366 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 367 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 368 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 369 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 370 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 371 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 372 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 373 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 374 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 375 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 376 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 377 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 378 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 379 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 380 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 381 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 382 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 383 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 384 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 385 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 386 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 387 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 388 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 389 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 390 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 391 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 392 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 393 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 394 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 395 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 396 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 397 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 398 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 399 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 400 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 401 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 402 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 403 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 404 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 405 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 406 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 407 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 408 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 409 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 410 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 411 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 412 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 413 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 414 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 415 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 416 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 417 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 418 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 419 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 420 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 421 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 422 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 423 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 424 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 425 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 426 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 427 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 428 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 429 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 430 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 431 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 432 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 433 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 434 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 435 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 436 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 437 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 438 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 439 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 440 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 441 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 442 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 443 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 444 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 445 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 446 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 447 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 448 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 449 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 450 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 451 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 452 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 453 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 454 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 455 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 456 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 457 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 458 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 459 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 460 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 461 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 462 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 463 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 464 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 465 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 466 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 467 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 468 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 469 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 470 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 471 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 472 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 473 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 474 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 475 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 476 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 477 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 478 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 479 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 480 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 481 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 482 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 483 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 484 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 485 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 486 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 487 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 488 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 489 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 490 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 491 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 492 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 493 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 494 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 495 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 496 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 497 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 498 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 499 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 500 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_left
# 501 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 502 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_left
# 503 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 504 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 505 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 506 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 507 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 508 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 509 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 510 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 511 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 512 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 513 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 514 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 515 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 516 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 517 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 518 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 519 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 520 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 521 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 522 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 523 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 524 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 525 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 526 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
	step_end

# 529 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E356:
# 530 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_right
# 531 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_right
# 532 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_right
# 533 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 534 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 535 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 536 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 537 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 538 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 539 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 540 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 541 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 542 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 543 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 544 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 545 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 546 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 547 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 548 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 549 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 550 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 551 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 552 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 553 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 554 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 555 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 556 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 557 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 558 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 559 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 560 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 561 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 562 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 563 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 564 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 565 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 566 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 567 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 568 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 569 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 570 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 571 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 572 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 573 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 574 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 575 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 576 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 577 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 578 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 579 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 580 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 581 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 582 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 583 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 584 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 585 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 586 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 587 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 588 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 589 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 590 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 591 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 592 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 593 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 594 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 595 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 596 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 597 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 598 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 599 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 600 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 601 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 602 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 603 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 604 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 605 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 606 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 607 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 608 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 609 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 610 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 611 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 612 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 613 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 614 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 615 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 616 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 617 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 618 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 619 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 620 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 621 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 622 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 623 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 624 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 625 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 626 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 627 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 628 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 629 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 630 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 631 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 632 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 633 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 634 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 635 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 636 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 637 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 638 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 639 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 640 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 641 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 642 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 643 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 644 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 645 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 646 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 647 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 648 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 649 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 650 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 651 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 652 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 653 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 654 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 655 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 656 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 657 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 658 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 659 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 660 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 661 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 662 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 663 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 664 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 665 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 666 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 667 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 668 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 669 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 670 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 671 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 672 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 673 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 674 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 675 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 676 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_right
# 677 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_right
# 678 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_right
# 679 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 680 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 681 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 682 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 683 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 684 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 685 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 686 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 687 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 688 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 689 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 690 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_faster_up
# 691 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 692 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 693 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 694 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 695 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 696 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 697 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 698 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 699 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
# 700 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_fast_up
	step_end

# 703 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E402:
# 704 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_right
# 705 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
	step_end

# 708 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E405:
# 709 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 710 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 711 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
	step_end

# 714 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E409:
# 715 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 716 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 717 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 718 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_in_place_faster_down
	step_end

# 721 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E40E:
# 722 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
	step_end

# 725 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
Naranja_7islasPomelo_G00_M11_Movement_0814E410:
# 726 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
# 727 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	walk_up
	step_end

Naranja_7islasPomelo_G00_M11_Text_08166F6B::
# 730 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "ばカËËこ\nÑÑÂ\nだÈÎÎÎÎÎÎÎÀ\nÑÀÌÎÎÎÎÎÎ\nmon\nok\noff towards the tunnel over there.$"

Naranja_7islasPomelo_G00_M11_Text_0816B23B::
# 734 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "DEWFORD TOWN is a tiny island community.\nIf something gets trendy here,\leveryone picks up on it right away.$"

Naranja_7islasPomelo_G00_M11_Text_0816B2A7::
# 738 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "DEWFORD TOWN\n“A tiny island in the blue sea.”$"

Naranja_7islasPomelo_G00_M11_Text_0816B2D5::
# 742 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\nLEADER: BRAWLY\l“A big wave in fighting!”$"

Naranja_7islasPomelo_G00_M11_Text_0816B317::
# 746 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "DEWFORD HALL\n“Everyone’s information exchange!”$"

Naranja_7islasPomelo_G00_M11_Text_0816B3BC::
# 750 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\nLETTER?\pOr were you meaning to sail back to\nPETALBURG?$"

Naranja_7islasPomelo_G00_M11_Text_0816B417::
# 754 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_7islasPomelo_G00_M11_Text_0816B471::
# 758 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\nthe LETTER. I’ll be waiting.$"

Naranja_7islasPomelo_G00_M11_Text_0816B522::
# 762 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nFor you, I’ll go out to sea anytime!\pNow, my friend, where are we bound?$"

Naranja_7islasPomelo_G00_M11_Text_0816B57D::
# 766 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_7islasPomelo_G00_M11_Text_0816B5D2::
# 770 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, is it?\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_7islasPomelo_G00_M11_Text_0816B627::
# 774 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: Just tell me whenever you\nwant to set sail again.$"

Naranja_7islasPomelo_G00_M11_Text_0816B665::
# 778 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "This is a renowned fishing spot.\nAre you getting the itch to fish?$"

Naranja_7islasPomelo_G00_M11_Text_0816B6A8::
# 782 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "I hear you, and I like what\nyou’re saying!\pI’ll give you one of my fishing RODS.$"

Naranja_7islasPomelo_G00_M11_Text_0816B6F9::
# 786 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "And, as an added bonus, I’ll even throw\nin a little fishing advice!\pFirst, you want to face the water,\nthen use the ROD.\pFocus your mind...\nIf you get a bite, pull on the ROD.\pSometimes you can snag something\nimmediately, but with bigger catches,\lyou need to time the pulls on your ROD\lto haul them in.$"

Naranja_7islasPomelo_G00_M11_Text_0816B828::
# 790 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Oh, is that so?\nThat’s too bad, then.$"

Naranja_7islasPomelo_G00_M11_Text_0816B84E::
# 794 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Yo!\nHow’s your fishing?$"

Naranja_7islasPomelo_G00_M11_Text_0816B866::
# 798 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Is that right! That’s great!\nHaul in some big ones!$"

Naranja_7islasPomelo_G00_M11_Text_0816B89A::
# 802 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Oh, hey, don’t get down on yourself!\nI’ll give you a little fishing advice.\pFirst, you want to face the water,\nthen use the ROD.\pFocus your mind...\nIf you get a bite, pull the ROD.\pSometimes you can snag something\nimmediately, but with bigger catches,\lyou need to time the pulls on your ROD\lto haul them in.$"

Naranja_7islasPomelo_G00_M11_Text_0816B9CE::
# 806 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "I like what’s hip, happening, and trendy.\nI’m always checking it out.\pListen, have you heard about this new\n“{STR_VAR_1}”?\pThat’s right!\nOf course you know!\pI mean, sheesh,\n“{STR_VAR_1}”...\lIt’s the hottest thing in cool!\pWherever you’re from,\n“{STR_VAR_1}”\lis the biggest happening thing, right?$"

Naranja_7islasPomelo_G00_M11_Text_0816BADC::
# 810 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Hunh?\nIt’s not the hip and happening thing?\pWell, hey, you have to tell me,\nwhat’s new and what’s “in”?$"

Naranja_7islasPomelo_G00_M11_Text_0816BB44::
# 814 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Hunh?\n“{STR_VAR_2}”?\p... ...\p...Uh... Yeah! That’s right!\nYeah, I knew that! Knew it all along!\pOf course I know about that!\n“{STR_VAR_2},” right?\pYeah, that’s it, it’s there!\nIsn’t “{STR_VAR_2}”\lthe coolest, or what?\pIt’s the hippest thing in hip.\nYou think I’d not know about it?\p“{STR_VAR_1}”...\nIt’s, like, so five minutes ago.\pNow, “{STR_VAR_2}” is\nwhat’s vital and in tune with the times!$"

Naranja_7islasPomelo_G00_M11_Text_0816BCA2::
# 818 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Hmm...\n“{STR_VAR_2},” huh?\pBut personally, I think\n“{STR_VAR_1}”\lis what’s real in cool.$"

Naranja_7islasPomelo_G00_M11_Text_0816BCE9::
# 822 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Well, if you hear of any happening new\ntrends, come share them with me, okay?$"

Naranja_7islasPomelo_G00_M11_Text_0816BD37::
# 826 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "Yeah, absolutely right!\p“{STR_VAR_1}” is the\ndefinition of “in” right now.$"

Naranja_7islasPomelo_G00_M11_Text_0816E080::
# 830 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nWe’ve made land in SLATEPORT!\pI suppose you’re going to visit CAPT.\nSTERN and deliver the DEVON GOODS?$"

Naranja_7islasPomelo_G00_M11_Text_0816E1FA::
# 834 "data/maps/Naranja_7islasPomelo_G00_M11/scripts.pory"
	.string "MR. BRINEY: Ahoy! We’ve made land in\nSLATEPORT!\pYou just go on and tell me whenever\nyou want to set sail again!$"
