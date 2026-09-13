Naranja_Route110_TrickHouseEntrance_MapScripts::
# 5 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_TrickHouseEntrance_OnTransition
# 6 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1, Naranja_Route110_TrickHouseEntrance_OnFrame_1
	.2byte 0

Naranja_Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1, Naranja_Route110_TrickHouseEntrance_OnWarp_1
# 11 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 0, Naranja_Route110_TrickHouseEntrance_OnWarp_2
# 12 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 1, Naranja_Route110_TrickHouseEntrance_OnWarp_3
# 13 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 2, Naranja_Route110_TrickHouseEntrance_OnWarp_4
# 14 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3, Naranja_Route110_TrickHouseEntrance_OnWarp_4
# 15 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 4, Naranja_Route110_TrickHouseEntrance_OnWarp_3
# 16 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5, Naranja_Route110_TrickHouseEntrance_OnWarp_3
# 17 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_4, 6, Naranja_Route110_TrickHouseEntrance_OnWarp_8
	.2byte 0


Naranja_Route110_TrickHouseEntrance_OnTransition::
# 22 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_0842
# 23 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_13, 1
# 24 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FCE
# 25 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_15, 1
# 26 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FB2
# 27 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1
# 28 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816108E
# 29 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5
# 30 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FDE
# 31 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3
# 32 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FDE
# 33 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_4, 0
# 34 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FDE
# 35 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ROUTE110_EVENT_STATE_4
# 36 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 37 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816109A
# 38 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 39 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081610A0
# 40 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 41 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081610A6
# 42 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 43 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081610AC
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FB2::
# 48 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
# 49 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 8
# 50 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FC8
# 51 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 2
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FC8::
# 56 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 6
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FCE::
# 61 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_13, 0
# 62 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5
# 63 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08160FDE::
# 68 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 0
# 69 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 70 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816103C
# 71 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 72 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161046
# 73 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 3
# 74 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161050
# 75 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 4
# 76 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816105A
# 77 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 5
# 78 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161064
# 79 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 6
# 80 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816106E
# 81 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 7
# 82 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161078
# 83 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 8
# 84 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161082
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816103C::
# 89 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_CORAL_EYE_BADGE
# 90 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161046::
# 95 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_CHARICIFIC_VALLEY_EVENT_COMPLETE_080A
# 96 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161050::
# 101 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 102 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816105A::
# 107 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 108 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161064::
# 113 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_080D
# 114 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816106E::
# 119 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_080E
# 120 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161078::
# 125 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 126 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161082::
# 131 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 4
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161088::
# 136 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816108E::
# 141 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 5, 2
# 142 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 4
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816109A::
# 147 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 0
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081610A0::
# 152 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081610A6::
# 157 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081610AC::
# 162 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_TrickHouseEntrance_OnWarp_1::
# 167 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
# 168 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, MAP_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE
# 169 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 4
# 170 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_PLAYER, 3
	end


Naranja_Route110_TrickHouseEntrance_OnWarp_2::
# 175 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
# 176 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, MAP_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE
# 177 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	copyvar VAR_0x8000, VAR_TRICK_HOUSE_LEVEL
# 178 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 179 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816116B
# 180 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 181 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161173
# 182 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 183 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161193
# 184 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 185 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161183
# 186 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 187 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816118B
# 188 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 189 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816117B
# 190 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 191 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816119B
# 192 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 193 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081611A3
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816116B::
# 198 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 6, 3
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161173::
# 203 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 0xB, 5
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816117B::
# 208 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 0xB, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161183::
# 213 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 3, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816118B::
# 218 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 0, 5
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161193::
# 223 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 9, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816119B::
# 228 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 8, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081611A3::
# 233 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 4, 4
	end


Naranja_Route110_TrickHouseEntrance_OnWarp_3::
# 238 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
	end


Naranja_Route110_TrickHouseEntrance_OnWarp_4::
# 243 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
# 244 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 5, 2
# 245 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 2
	end


Naranja_Route110_TrickHouseEntrance_OnWarp_8::
# 250 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
# 251 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 5, 2
# 252 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, 1
	end


Naranja_Route110_TrickHouseEntrance_OnFrame_1::
# 257 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 258 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay 0x14
# 259 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 0
# 260 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161327
# 261 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BD82, MSGBOX_DEFAULT
# 262 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 263 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay 0x14
# 264 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_Route110_TrickHouseEntrance_Movement_08161315
# 265 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 266 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 267 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_Route110_TrickHouseEntrance_Movement_0816131E
# 268 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 269 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
# 270 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 1
# 271 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_3, 0
# 272 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Man1::
# 277 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 278 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ROUTE110_EVENT_STATE_4
# 279 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 280 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816124D
# 281 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 282 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816136E
# 283 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 284 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161330
# 285 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 286 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161518
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816124D::
# 291 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 292 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 293 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 294 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 295 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 296 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 0
# 297 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612CD
# 298 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 299 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612D6
# 300 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 301 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612DF
# 302 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 3
# 303 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612E8
# 304 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 4
# 305 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612F1
# 306 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 5
# 307 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612FA
# 308 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 6
# 309 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161303
# 310 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 7
# 311 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816130C
# 312 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 313 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_3, 1
# 314 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE, 0xFF, 6, 2
# 315 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 316 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612CD::
# 321 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BA6E, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612D6::
# 326 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BAC0, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612DF::
# 331 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BB11, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612E8::
# 336 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BB61, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612F1::
# 341 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BBB4, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081612FA::
# 346 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BC04, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161303::
# 351 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BC55, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816130C::
# 356 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BCA8, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161327::
# 361 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BCFD, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161330::
# 366 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BF19, MSGBOX_DEFAULT
# 367 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 368 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_KumquatIsland_Movement_081A0839
# 369 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 370 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 371 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 372 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 373 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 374 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 375 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BFAB, MSGBOX_DEFAULT
# 376 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 377 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 378 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816136E::
# 383 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_KumquatIsland_Movement_081A0839
# 384 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 385 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C07E, MSGBOX_DEFAULT
# 386 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 387 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081613CE
# 388 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 389 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081613FA
# 390 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 3
# 391 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161426
# 392 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 4
# 393 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161452
# 394 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 5
# 395 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816147E
# 396 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 6
# 397 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081614AA
# 398 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 7
# 399 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081614D6
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081613CE::
# 404 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 405 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 406 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 407 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 408 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 409 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 410 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 411 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 412 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081613FA::
# 417 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA
# 418 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 419 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 420 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 421 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 422 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 423 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 424 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 425 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161426::
# 430 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCC
# 431 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 432 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 433 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 434 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 435 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 436 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 437 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 438 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161452::
# 443 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC2
# 444 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 445 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 446 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 447 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 448 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 449 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 450 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 451 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816147E::
# 456 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12C
# 457 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 458 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 459 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 460 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 461 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 462 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 463 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 464 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081614AA::
# 469 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD0
# 470 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 471 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 472 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 473 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 474 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 475 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 476 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 477 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081614D6::
# 482 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0x47
# 483 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 484 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 0
# 485 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 486 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502
# 487 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 488 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 489 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C0FC, MSGBOX_DEFAULT
# 490 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161502::
# 495 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 496 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 3
# 497 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 498 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 499 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161518::
# 504 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_KumquatIsland_Movement_081A0839
# 505 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 506 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C128, MSGBOX_DEFAULT
# 507 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1F
# 508 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	callstd 7
# 509 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 510 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161551
# 511 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 512 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02B8
# 513 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C18D, MSGBOX_DEFAULT
# 514 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161551::
# 519 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819C17E, MSGBOX_DEFAULT
# 520 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 521 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_Route110_TrickHouseEntrance_Movement_0816309F
# 522 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 523 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_Route110_TrickHouseEntrance_Movement_08161315
# 524 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 525 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 526 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1, Naranja_Route110_TrickHouseEntrance_Movement_0816131E
# 527 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 528 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE110_TRICK_HOUSE_ENTRANCE_MAN_1_1
# 529 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 530 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_4, 5
# 531 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sign_1::
# 536 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 537 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ROUTE110_EVENT_STATE_4
# 538 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 539 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081615BD
# 540 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 541 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081615C7
# 542 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 543 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616B8
# 544 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 545 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616C2
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081615BD::
# 550 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BE6E, MSGBOX_DEFAULT
# 551 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081615C7::
# 556 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BE7D, MSGBOX_YESNO
# 557 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 558 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 559 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081615DD
# 560 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081615DD::
# 565 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, 0x219, 0
# 566 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 567 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay 0x14
# 568 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route110_TrickHouseEntrance_Movement_081A0856
# 569 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 570 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route110_TrickHouseEntrance_Movement_0816165E
# 571 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitmovement LOCALID_NONE
# 572 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	copyvar VAR_0x8000, VAR_TRICK_HOUSE_LEVEL
# 573 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 574 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161660
# 575 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 576 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816166B
# 577 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 578 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161676
# 579 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 580 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161681
# 581 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 582 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816168C
# 583 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 584 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161697
# 585 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 586 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616A2
# 587 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 588 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616AD
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161660::
# 593 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE1, 0xFF, 0, 0x15
# 594 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 595 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816166B::
# 600 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE2, 0xFF, 0, 0x15
# 601 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 602 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161676::
# 607 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE3, 0xFF, 0, 0x15
# 608 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 609 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161681::
# 614 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE4, 0xFF, 0, 0x15
# 615 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 616 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816168C::
# 621 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE5, 0xFF, 0, 0x15
# 622 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 623 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161697::
# 628 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE6, 0xFF, 0, 0x15
# 629 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 630 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616A2::
# 635 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE7, 0xFF, 0, 0x15
# 636 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 637 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616AD::
# 642 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE8, 0xFF, 0, 0x15
# 643 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 644 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616B8::
# 649 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BEB3, MSGBOX_DEFAULT
# 650 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616C2::
# 655 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 8
# 656 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616D7
# 657 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BE6E, MSGBOX_DEFAULT
# 658 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081616D7::
# 663 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BEB3, MSGBOX_DEFAULT
# 664 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Trigger_1::
# 669 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 670 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_Route110_TrickHouseEntrance_Text_0819BA56, MSGBOX_DEFAULT
# 671 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 672 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 0
# 673 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081618E1
# 674 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 1
# 675 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081618F6
# 676 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	compare_var_to_value VAR_TRICK_HOUSE_LEVEL, 2
# 677 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816190B
# 678 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_2, 1
	end


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081618E1::
# 683 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6
# 684 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3
# 685 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 686 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161920
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081618F6::
# 691 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 0xB
# 692 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5
# 693 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 694 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161920
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_0816190B::
# 699 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9
# 700 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2
# 701 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 702 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	call Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161920
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_08161920::
# 707 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setfieldeffectargument 0, 0x8004
# 708 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setfieldeffectargument 1, 0x8005
# 709 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	setfieldeffectargument 2, 0x8006
# 710 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffect 0x36
# 711 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect 0x36
# 712 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay 0xA
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5::
# 717 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081A0CC2, MSGBOX_DEFAULT
	return


Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02B8::
# 722 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	msgbox Naranja_NewIsland_House6_Text_081A0CEF, MSGBOX_DEFAULT
	return


# 726 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
Naranja_Route110_TrickHouseEntrance_Movement_08161315:
# 727 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 728 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 729 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 730 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 731 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 732 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 733 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 734 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_4
	step_end

# 737 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
Naranja_Route110_TrickHouseEntrance_Movement_0816131E:
# 738 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 739 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 740 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 741 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 742 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 743 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 744 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 745 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	slide_up
	step_end

# 748 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
Naranja_Route110_TrickHouseEntrance_Movement_0816165E:
# 749 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	set_invisible
	step_end

# 752 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
Naranja_Route110_TrickHouseEntrance_Movement_0816309F:
# 753 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 754 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 755 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 756 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 757 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 758 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 759 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 760 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 761 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 762 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 763 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 764 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 765 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 766 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 767 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 768 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 769 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 770 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 771 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 772 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 773 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 774 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 775 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 776 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 777 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 778 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 779 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 780 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 781 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 782 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 783 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 784 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 785 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 786 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 787 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 788 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 789 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 790 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 791 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 792 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 793 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 794 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 795 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 796 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	delay_2
# 797 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	face_down
	step_end

# 800 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
Naranja_Route110_TrickHouseEntrance_Movement_081A0856:
# 801 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	walk_up
	step_end

Naranja_Route110_TrickHouseEntrance_Text_0819BA56::
# 804 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "You’re being watched...$"

Naranja_Route110_TrickHouseEntrance_Text_0819BA6E::
# 808 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbeneath this desk? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BAC0::
# 812 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbehind this tree? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BB11::
# 816 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nin this dresser? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BB61::
# 820 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbeyond this window? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BBB4::
# 824 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nin this planter? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BC04::
# 828 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nin this cupboard? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BC55::
# 832 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbehind this window? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BCA8::
# 836 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr...\pHow did you know I concealed myself\nbeneath this cushion? You’re sharp!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BCFD::
# 840 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\pFor I am the greatest living mystery\nof a man in all of HOENN!\lThey call me...\pThe TRICK MASTER!\nWahahaha! Glad to meet you!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BD82::
# 844 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you’ve come to challenge my\nTRICK HOUSE, haven’t you?\pThat’s why you’re here, isn’t it?\nYes, it is!\pConsider your challenge accepted!\pEnter through the scroll there,\nand let your challenge commence!\pI shall be waiting in the back!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BE6E::
# 848 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "It’s a scroll.$"

Naranja_Route110_TrickHouseEntrance_Text_0819BE7D::
# 852 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\pWant to go in?$"

Naranja_Route110_TrickHouseEntrance_Text_0819BEB3::
# 856 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll...\p“I am leaving on a journey.\nDon’t look for me. TRICK MASTER”$"

Naranja_Route110_TrickHouseEntrance_Text_0819BF19::
# 860 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I’ll use this trick,\nand that scheme, and those ruses...\pMufufufu... If I may say so, it’s\nbrilliantly difficult, even for me!$"

Naranja_Route110_TrickHouseEntrance_Text_0819BFAB::
# 864 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\nOh, it’s you!\pI’m in the midst of devising new tricky\nchallenges!\pIt’s not too much to ask for a bit more\ntime for me to think, is it now?\lYou wouldn’t begrudge me that?\lCome back in a little while!$"

Naranja_Route110_TrickHouseEntrance_Text_0819C07E::
# 868 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it’s you! You’re here to accept the\nreward from before, isn’t that right?\lYes, right I am!\pHere!\nI’ll give it to you now!$"

Naranja_Route110_TrickHouseEntrance_Text_0819C0FC::
# 872 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\nDid you not come to claim your reward?$"

Naranja_Route110_TrickHouseEntrance_Text_0819C128::
# 876 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\nIF REWARD IS NOT TAKEN BY YOU,\lTHEN TRICK MASTER YOU CANNOT FOLLOW.$"

Naranja_Route110_TrickHouseEntrance_Text_0819C17E::
# 880 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"

Naranja_Route110_TrickHouseEntrance_Text_0819C18D::
# 884 "data/maps/Naranja_Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\nMEAN, YOU ARE.$"
