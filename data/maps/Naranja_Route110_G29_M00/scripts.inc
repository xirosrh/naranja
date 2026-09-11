Naranja_Route110_G29_M00_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M00_OnTransition
# 6 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route110_G29_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_Route110_G29_M00_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_Route110_G29_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1, Naranja_Route110_G29_M00_OnFrame_1
	.2byte 0

Naranja_Route110_G29_M00_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1, Naranja_Route110_G29_M00_OnWarp_1
# 11 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 0, Naranja_Route110_G29_M00_OnWarp_2
# 12 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 1, Naranja_Route110_G29_M00_OnWarp_3
# 13 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 2, Naranja_Route110_G29_M00_OnWarp_4
# 14 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3, Naranja_Route110_G29_M00_OnWarp_4
# 15 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 4, Naranja_Route110_G29_M00_OnWarp_3
# 16 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5, Naranja_Route110_G29_M00_OnWarp_3
# 17 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 6, Naranja_Route110_G29_M00_OnWarp_8
	.2byte 0


Naranja_Route110_G29_M00_OnTransition::
# 22 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_0842
# 23 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_13, 1
# 24 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08160FCE
# 25 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_15, 1
# 26 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08160FB2
# 27 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1
# 28 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816108E
# 29 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5
# 30 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08160FDE
# 31 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3
# 32 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08160FDE
# 33 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_4, 0
# 34 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08160FDE
# 35 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ROUTE110_EVENT_STATE_4
# 36 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 37 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816109A
# 38 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 39 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081610A0
# 40 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 41 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081610A6
# 42 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 43 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081610AC
	end


Naranja_Route110_G29_M00_EventScript_Sub_08160FB2::
# 48 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
# 49 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 8
# 50 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08160FC8
# 51 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 2
	end


Naranja_Route110_G29_M00_EventScript_Sub_08160FC8::
# 56 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 6
	end


Naranja_Route110_G29_M00_EventScript_Sub_08160FCE::
# 61 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_13, 0
# 62 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5
# 63 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_08160FDE::
# 68 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 0
# 69 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 70 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816103C
# 71 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 72 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161046
# 73 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 3
# 74 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161050
# 75 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 4
# 76 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816105A
# 77 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 5
# 78 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161064
# 79 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 6
# 80 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816106E
# 81 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 7
# 82 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161078
# 83 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 8
# 84 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161082
	return


Naranja_Route110_G29_M00_EventScript_Sub_0816103C::
# 89 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 90 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161046::
# 95 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_080A
# 96 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161050::
# 101 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 102 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_0816105A::
# 107 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 108 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161064::
# 113 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 114 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_0816106E::
# 119 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_080E
# 120 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161078::
# 125 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 126 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_G29_M00_EventScript_Sub_08161088
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161082::
# 131 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161088::
# 136 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3
	return


Naranja_Route110_G29_M00_EventScript_Sub_0816108E::
# 141 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G29_M00_MAN_1_1, 5, 2
# 142 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_G29_M00_MAN_1_1, 4
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816109A::
# 147 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 0
	end


Naranja_Route110_G29_M00_EventScript_Sub_081610A0::
# 152 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_081610A6::
# 157 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_081610AC::
# 162 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_G29_M00_OnWarp_1::
# 167 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	addobject LOCALID_ROUTE110_G29_M00_MAN_1_1
# 168 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	showobjectat LOCALID_ROUTE110_G29_M00_MAN_1_1, MAP_NARANJA_ROUTE_110_G29_M00
# 169 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M00_MAN_1_1, 4
# 170 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	turnobject LOCALID_PLAYER, 3
	end


Naranja_Route110_G29_M00_OnWarp_2::
# 175 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	addobject LOCALID_ROUTE110_G29_M00_MAN_1_1
# 176 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	hideobjectat LOCALID_ROUTE110_G29_M00_MAN_1_1, MAP_NARANJA_ROUTE_110_G29_M00
# 177 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_TRICK_HOUSE_LEVEL
# 178 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 179 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816116B
# 180 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 181 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161173
# 182 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 183 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161193
# 184 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 185 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161183
# 186 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 187 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816118B
# 188 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 189 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816117B
# 190 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 191 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816119B
# 192 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 193 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081611A3
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816116B::
# 198 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 6, 3
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161173::
# 203 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 0xB, 5
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816117B::
# 208 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 0xB, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161183::
# 213 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 3, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816118B::
# 218 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 0, 5
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161193::
# 223 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 9, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816119B::
# 228 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 8, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_081611A3::
# 233 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 4, 4
	end


Naranja_Route110_G29_M00_OnWarp_3::
# 238 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	removeobject LOCALID_ROUTE110_G29_M00_MAN_1_1
	end


Naranja_Route110_G29_M00_OnWarp_4::
# 243 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	addobject LOCALID_ROUTE110_G29_M00_MAN_1_1
# 244 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 5, 2
# 245 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M00_MAN_1_1, 2
	end


Naranja_Route110_G29_M00_OnWarp_8::
# 250 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	addobject LOCALID_ROUTE110_G29_M00_MAN_1_1
# 251 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setobjectxy LOCALID_ROUTE110_G29_M00_MAN_1_1, 5, 2
# 252 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M00_MAN_1_1, 1
	end


Naranja_Route110_G29_M00_OnFrame_1::
# 257 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	lockall
# 258 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay 0x14
# 259 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 0
# 260 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161327
# 261 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BD82
# 262 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 263 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	closemessage
# 264 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay 0x14
# 265 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_Route110_G29_M00_Movement_08161315
# 266 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 267 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	playse SE_M_EXPLOSION
# 268 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816131E
# 269 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 270 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	removeobject LOCALID_ROUTE110_G29_M00_MAN_1_1
# 271 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 1
# 272 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_3, 0
# 273 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 278 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	lockall
# 279 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ROUTE110_EVENT_STATE_4
# 280 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 281 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816124D
# 282 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 283 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816136E
# 284 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 285 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161330
# 286 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 287 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161518
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816124D::
# 292 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	playse SE_PIN
# 293 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 294 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 295 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 296 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 297 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 0
# 298 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081612CD
# 299 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 300 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081612D6
# 301 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 302 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081612DF
# 303 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 3
# 304 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081612E8
# 305 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 4
# 306 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081612F1
# 307 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 5
# 308 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081612FA
# 309 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 6
# 310 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161303
# 311 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 7
# 312 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816130C
# 313 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	closemessage
# 314 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1
# 315 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M00, 0xFF, 6, 2
# 316 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 317 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081612CD::
# 322 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BA6E
# 323 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_081612D6::
# 328 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BAC0
# 329 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_081612DF::
# 334 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BB11
# 335 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_081612E8::
# 340 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BB61
# 341 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_081612F1::
# 346 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BBB4
# 347 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_081612FA::
# 352 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BC04
# 353 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161303::
# 358 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BC55
# 359 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_0816130C::
# 364 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BCA8
# 365 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161327::
# 370 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BCFD
# 371 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161330::
# 376 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BF19
# 377 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 378 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	closemessage
# 379 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 380 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 381 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	playse SE_PIN
# 382 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 383 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 384 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 385 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 386 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BFAB
# 387 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 388 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 389 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 390 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816136E::
# 395 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 396 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 397 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C07E
# 398 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 399 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 400 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081613CE
# 401 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 402 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081613FA
# 403 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 3
# 404 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161426
# 405 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 4
# 406 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161452
# 407 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 5
# 408 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816147E
# 409 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 6
# 410 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081614AA
# 411 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 7
# 412 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081614D6
	end


Naranja_Route110_G29_M00_EventScript_Sub_081613CE::
# 417 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 418 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 419 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 420 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 421 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 422 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 423 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 424 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 425 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 426 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081613FA::
# 431 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA
# 432 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 433 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 434 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 435 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 436 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 437 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 438 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 439 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 440 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161426::
# 445 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCC
# 446 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 447 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 448 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 449 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 450 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 451 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 452 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 453 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 454 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161452::
# 459 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC2
# 460 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 461 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 462 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 463 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 464 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 465 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 466 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 467 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 468 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816147E::
# 473 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12C
# 474 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 475 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 476 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 477 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 478 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 479 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 480 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 481 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 482 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081614AA::
# 487 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD0
# 488 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 489 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 490 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 491 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 492 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 493 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 494 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 495 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 496 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081614D6::
# 501 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x47
# 502 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 503 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 0
# 504 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 505 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161502
# 506 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 507 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 508 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C0FC
# 509 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 510 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161502::
# 515 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 516 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3
# 517 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 518 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 519 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161518::
# 524 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 525 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 526 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C128
# 527 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 528 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1F
# 529 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 7
# 530 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 531 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161551
# 532 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 533 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 534 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C18D
# 535 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 536 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161551::
# 541 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819C17E
# 542 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 543 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	closemessage
# 544 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816309F
# 545 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 546 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_Route110_G29_M00_Movement_08161315
# 547 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 548 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	playse SE_M_EXPLOSION
# 549 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M00_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816131E
# 550 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 551 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	removeobject LOCALID_ROUTE110_G29_M00_MAN_1_1
# 552 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 553 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5
# 554 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sign_1::
# 559 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	lockall
# 560 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ROUTE110_EVENT_STATE_4
# 561 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 562 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081615BD
# 563 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 564 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081615C7
# 565 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 566 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081616B8
# 567 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 568 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081616C2
	end


Naranja_Route110_G29_M00_EventScript_Sub_081615BD::
# 573 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BE6E
# 574 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 575 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081615C7::
# 580 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BE7D
# 581 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 5
# 582 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	closemessage
# 583 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 584 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081615DD
# 585 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081615DD::
# 590 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setmetatile 5, 1, 0x219, 0
# 591 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	special DrawWholeMapView
# 592 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay 0x14
# 593 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route110_G29_M00_Movement_081A0856
# 594 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 595 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route110_G29_M00_Movement_0816165E
# 596 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 597 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_TRICK_HOUSE_LEVEL
# 598 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 599 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161660
# 600 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 601 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816166B
# 602 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 603 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161676
# 604 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 605 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161681
# 606 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 607 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816168C
# 608 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 609 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_08161697
# 610 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 611 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081616A2
# 612 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 613 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081616AD
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161660::
# 618 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M03, 0xFF, 0, 0x15
# 619 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 620 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816166B::
# 625 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M04, 0xFF, 0, 0x15
# 626 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 627 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161676::
# 632 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M05, 0xFF, 0, 0x15
# 633 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 634 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161681::
# 639 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M06, 0xFF, 0, 0x15
# 640 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 641 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_0816168C::
# 646 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M07, 0xFF, 0, 0x15
# 647 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 648 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_08161697::
# 653 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M08, 0xFF, 0, 0x15
# 654 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 655 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081616A2::
# 660 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M09, 0xFF, 0, 0x15
# 661 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 662 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081616AD::
# 667 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	warp MAP_NARANJA_ROUTE_110_G29_M10, 0xFF, 0, 0x15
# 668 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitstate
# 669 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081616B8::
# 674 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BEB3
# 675 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 676 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081616C2::
# 681 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 8
# 682 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081616D7
# 683 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BE6E
# 684 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 685 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Sub_081616D7::
# 690 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BEB3
# 691 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 692 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M00_EventScript_Trigger_1::
# 697 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	lockall
# 698 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_Route110_G29_M00_Text_0819BA56
# 699 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
# 700 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	releaseall
# 701 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 0
# 702 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081618E1
# 703 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 704 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_081618F6
# 705 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 706 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M00_EventScript_Sub_0816190B
# 707 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_G29_M00_EventScript_Sub_081618E1::
# 712 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8004, 6
# 713 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8005, 3
# 714 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8006, 0
# 715 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_08161920
	return


Naranja_Route110_G29_M00_EventScript_Sub_081618F6::
# 720 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8004, 0xB
# 721 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8005, 5
# 722 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8006, 0
# 723 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_08161920
	return


Naranja_Route110_G29_M00_EventScript_Sub_0816190B::
# 728 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8004, 9
# 729 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8005, 2
# 730 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setvar VAR_0x8006, 0
# 731 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_08161920
	return


Naranja_Route110_G29_M00_EventScript_Sub_08161920::
# 736 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setfieldeffectargument 0, 0x8004
# 737 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setfieldeffectargument 1, 0x8005
# 738 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	setfieldeffectargument 2, 0x8006
# 739 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	dofieldeffect 0x36
# 740 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	waitfieldeffect 0x36
# 741 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay 0xA
	return


Naranja_Route110_G29_M00_EventScript_Sub_081A02A5::
# 746 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081A0CC2
# 747 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


Naranja_Route110_G29_M00_EventScript_Sub_081A02B8::
# 752 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_081A0CEF
# 753 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	callstd 4
	return


# 757 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
Naranja_Route110_G29_M00_Movement_08161315:
# 758 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_up
# 759 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_4
# 760 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 761 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_4
# 762 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_down
# 763 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_4
# 764 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 765 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_4
	step_end

# 768 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
Naranja_Route110_G29_M00_Movement_0816131E:
# 769 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_up
# 770 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	disable_anim
# 771 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	slide_up
# 772 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	slide_up
# 773 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	slide_up
# 774 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	slide_up
# 775 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	slide_up
# 776 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	slide_up
	step_end

# 779 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
Naranja_Route110_G29_M00_Movement_0816165E:
# 780 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	set_invisible
	step_end

# 783 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
Naranja_Route110_G29_M00_Movement_0816309F:
# 784 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 785 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 786 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 787 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 788 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 789 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 790 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 791 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 792 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 793 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 794 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 795 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 796 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 797 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 798 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 799 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 800 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 801 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 802 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 803 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 804 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 805 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 806 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 807 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 808 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 809 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 810 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 811 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 812 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 813 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 814 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 815 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 816 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 817 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 818 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 819 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 820 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 821 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 822 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 823 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 824 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_left
# 825 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 826 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_right
# 827 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	delay_2
# 828 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	face_down
	step_end

# 831 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
Naranja_Route110_G29_M00_Movement_081A0856:
# 832 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	walk_up
	step_end

Naranja_Route110_G29_M00_Text_0819BA56::
# 835 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "You’re being watched...$"

Naranja_Route110_G29_M00_Text_0819BA6E::
# 839 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbeneath this desk? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BAC0::
# 843 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbehind this tree? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BB11::
# 847 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nin this dresser? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BB61::
# 851 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbeyond this window? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BBB4::
# 855 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nin this planter? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BC04::
# 859 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nin this cupboard? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BC55::
# 863 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbehind this window? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BCA8::
# 867 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbeneath this cushion? You’re sharp!$"

Naranja_Route110_G29_M00_Text_0819BCFD::
# 871 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Behold!\pFor I am the greatest living mystery\nof a man in all of HOENN!\lThey call me...\pThe TRICK MASTER!\nWahahaha! Glad to meet you!$"

Naranja_Route110_G29_M00_Text_0819BD82::
# 875 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "You, you’ve come to challenge my\nTRICK HOUSE, haven’t you?\pThat’s why you’re here, isn’t it?\nYes, it is!\pConsider your challenge accepted!\pEnter through the scroll there,\nand let your challenge commence!\pI shall be waiting in the back!$"

Naranja_Route110_G29_M00_Text_0819BE6E::
# 879 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "It’s a scroll.$"

Naranja_Route110_G29_M00_Text_0819BE7D::
# 883 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "There is a big hole behind the scroll!\pWant to go in?$"

Naranja_Route110_G29_M00_Text_0819BEB3::
# 887 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "There is a note affixed to the scroll...\p“I am leaving on a journey.\nDon’t look for me. TRICK MASTER”$"

Naranja_Route110_G29_M00_Text_0819BF19::
# 891 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "For the next time, I’ll use this trick,\nand that scheme, and those ruses...\pMufufufu... If I may say so, it’s\nbrilliantly difficult, even for me!$"

Naranja_Route110_G29_M00_Text_0819BFAB::
# 895 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah? What?!\nOh, it’s you!\pI’m in the midst of devising new tricky\nchallenges!\pIt’s not too much to ask for a bit more\ntime for me to think, is it now?\lYou wouldn’t begrudge me that?\lCome back in a little while!$"

Naranja_Route110_G29_M00_Text_0819C07E::
# 899 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Ah, it’s you! You’re here to accept the\nreward from before, isn’t that right?\lYes, right I am!\pHere!\nI’ll give it to you now!$"

Naranja_Route110_G29_M00_Text_0819C0FC::
# 903 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "Hah?\nDid you not come to claim your reward?$"

Naranja_Route110_G29_M00_Text_0819C128::
# 907 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "MECHADOLL 5 I AM!\nIF REWARD IS NOT TAKEN BY YOU,\lTHEN TRICK MASTER YOU CANNOT FOLLOW.$"

Naranja_Route110_G29_M00_Text_0819C17E::
# 911 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "THEN FAREWELL.$"

Naranja_Route110_G29_M00_Text_0819C18D::
# 915 "data/maps/Naranja_Route110_G29_M00/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\nMEAN, YOU ARE.$"
