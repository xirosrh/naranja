Naranja_CaminoFrio_G20_M01_MapScripts::
# 5 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_CaminoFrio_G20_M01_OnResume
# 6 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaminoFrio_G20_M01_OnTransition
# 7 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_CaminoFrio_G20_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_CaminoFrio_G20_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	map_script_2 VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1, Naranja_CaminoFrio_G20_M01_OnFrame_1
	.2byte 0


Naranja_CaminoFrio_G20_M01_OnResume::
# 13 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special UpdateCyclingRoadState
	end


Naranja_CaminoFrio_G20_M01_OnTransition::
# 18 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 19 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 20 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0172
# 21 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1
# 22 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814F92F
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814F92F::
# 27 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	savebgm MUS_CYCLING
	return


Naranja_CaminoFrio_G20_M01_OnFrame_1::
# 32 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 33 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 2
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_3::
# 38 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 39 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement 21, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 40 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FC39
# 42 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FC39::
# 47 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special FinishCyclingRoadChallenge
# 48 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0816EF65
# 49 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 51 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 52 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCC3
# 53 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 54 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1
# 55 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 56 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1
# 57 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 58 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1
# 59 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 60 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF
# 61 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 62 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF
# 63 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 64 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF
# 65 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 66 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED
# 67 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 68 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED
# 69 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 70 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED
# 71 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 72 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCFB
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCC3::
# 77 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0816EF9F
# 78 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 79 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1::
# 83 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0816F012
# 84 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 85 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF::
# 89 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0816F069
# 90 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED::
# 95 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0816F0D0
# 96 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCFB::
# 101 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0816F139
# 102 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 103 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09::
# 107 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 3
# 108 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	savebgm MUS_DUMMY
# 109 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	fadedefaultbgm
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_2::
# 114 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 115 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 116 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 117 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081634A6
# 118 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 119 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 1
# 120 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081634A6::
# 125 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_0819E3AD
# 126 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 127 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 128 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081634BB
# 129 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 130 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_7::
# 135 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 136 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 137 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 0
# 138 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E::
# 143 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkplayergender
# 144 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 145 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0166
# 146 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 147 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A016C
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0166::
# 152 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x69
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A016C::
# 157 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x64
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0172::
# 162 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkplayergender
# 163 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 164 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A018A
# 165 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 166 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0190
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A018A::
# 171 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x6A
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0190::
# 176 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x65
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_5::
# 181 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 182 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 183 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL_2, Naranja_CaminoFrio_G20_M01_Movement_08166EB4
# 184 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7CBF
# 185 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 186 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 187 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_08163538
# 188 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 189 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_OBJ_EVENT_GFX_BIG_SNORLAX_DOLL_LocalId2::
# 194 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7CBF
# 195 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 196 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 197 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B336E
# 198 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 199 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	removeobject 9833
# 200 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	endram
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_1::
# 204 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 205 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 206 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 207 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D51
# 208 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 209 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D85
# 210 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 211 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 1
# 212 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D51::
# 217 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 0
# 218 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 219 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 0
# 220 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop1
# 221 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 222 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 223 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1
# 224 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 225 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 226 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7DB1
# 227 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7D9B
# 228 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 229 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 230 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B7207
# 231 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 232 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D85::
# 237 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7B61
# 238 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 239 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 240 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B7DDA
# 241 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 242 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7DB1::
# 247 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7BDB
# 248 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 4
# 249 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 250 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	fadenewbgm MUS_GYM
# 251 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0xB, 0x19, 0x256, 0
# 252 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 253 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 254 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL_2, Naranja_CaminoFrio_G20_M01_Movement_086B7DE0
# 255 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B7DE8
# 256 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x40
# 257 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_OBJ_EVENT_GFX_BIG_SNORLAX_DOLL_LocalId1
	return


Naranja_CaminoFrio_G20_M01_EventScript_OBJ_EVENT_GFX_BIG_SNORLAX_DOLL_LocalId1::
	end


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_8::
# 265 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special FinishCyclingRoadChallenge
# 266 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 267 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 268 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 269 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80B0
# 270 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 271 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80D5
# 272 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 273 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80D5
# 274 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 275 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B810A
# 276 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 277 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 278 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 279 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 280 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 281 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 282 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 283 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 284 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 285 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 286 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 287 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 288 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 289 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G00_M13_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId4
# 290 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 291 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 3
# 292 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	savebgm 0x3500
# 293 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 294 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 295 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 296 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80B0::
# 300 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_CaminoFrio_G20_M01_Movement_086B81A0
# 301 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x13
# 302 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B8190
# 303 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xE0
# 304 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7EA0
# 305 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 6
# 306 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80D5::
# 311 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_CaminoFrio_G20_M01_Movement_086B81C0
# 312 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x15
# 313 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B81B0
# 314 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xB0
# 315 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	removeitem ITEM_MACH_BIKE, 1
# 316 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 317 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7EE5
# 318 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 6
# 319 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_INSIDE_OF_TRUCK_G08_M01, 0x1F, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B810A::
# 324 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_IslaNavel_G00_M13_Movement_086B81E0
# 325 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x20
# 326 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B81D0
# 327 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xD0
# 328 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7F28
# 329 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 6
# 330 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F::
# 335 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_IslaNavel_G00_M13_Movement_086B81E0
# 336 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x30
# 337 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G00_M13_Movement_086B81F0
# 338 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xE0
# 339 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M01_Text_086B7FA0
# 340 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	callstd 6
# 341 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sign_1::
# 346 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkpartymove MOVE_POWDER_SNOW
# 347 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 348 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 349 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	playse SE_PIN
# 350 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x16, 0x257, 0
# 351 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x18, 0x257, 0
# 352 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x1A, 0x257, 0
# 353 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x1C, 0x257, 0
# 354 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special DrawWholeMapView
# 355 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	release
	end


# 359 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_081634BB:
# 360 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
	step_end

# 363 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_08163538:
# 364 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_up
	step_end

# 367 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_08166EB4:
# 368 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	emote_exclamation_mark
	step_end

# 371 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_081A0843:
# 372 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
	step_end

# 375 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B336E:
# 376 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_right
	step_end

# 379 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7207:
# 380 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
	step_end

# 383 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7DDA:
# 384 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_up
	step_end

# 387 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7DE0:
# 388 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_down
# 389 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 390 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 391 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
# 392 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 393 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 394 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 395 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_invisible
# 396 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 397 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 398 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 399 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
# 400 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 401 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
	step_end

# 404 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7DE8:
# 405 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 406 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 407 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 408 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
# 409 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 410 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
	step_end

# 413 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B8190:
# 414 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 415 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 416 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 417 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_end_wheelie_move_down
# 418 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_end_wheelie_move_down
# 419 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_end_wheelie_move_down
# 420 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 421 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 422 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 423 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 424 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 425 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 426 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 427 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 428 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_up
	step_end

# 431 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81A0:
# 432 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_invisible
# 433 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 434 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 435 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 436 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 437 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 438 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 439 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_right
# 440 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_right
# 441 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_right
# 442 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_visible
# 443 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 444 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 445 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 446 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	emote_exclamation_mark
	step_end

# 449 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81B0:
# 450 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 451 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 452 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 453 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 454 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 455 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 456 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 457 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 458 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 459 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 460 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 461 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 462 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_up
# 463 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_up
	step_end

# 466 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81C0:
# 467 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_invisible
# 468 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 469 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 470 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 471 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 472 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 473 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_right
# 474 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_right
# 475 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_visible
# 476 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_right
# 477 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 478 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 479 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 480 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 481 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
	step_end

# 484 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81D0:
# 485 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 486 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 487 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 488 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 489 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 490 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 491 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 492 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 493 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 494 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 495 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
# 496 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
# 497 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	emote_exclamation_mark
# 498 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
	step_end

Naranja_CaminoFrio_G20_M01_Text_0816EF65::
# 501 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Number of collisions:\n... ... {STR_VAR_1}!\pTotal time:\n... ... {STR_VAR_2}!$"

Naranja_CaminoFrio_G20_M01_Text_0816EF9F::
# 505 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Bravo! Splendid showing!\pYour love of cycling comes from deep\nwithin your heart.\lYou’ve shaken me to my very soul!$"

Naranja_CaminoFrio_G20_M01_Text_0816F012::
# 509 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Your technique is remarkable.\pI suggest you slow down just enough\nto avoid collisions.$"

Naranja_CaminoFrio_G20_M01_Text_0816F069::
# 513 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "I would consider you a work in\nprogress.\pStill, I hope you don’t forget the\nsheer pleasure of cycling.$"

Naranja_CaminoFrio_G20_M01_Text_0816F0D0::
# 517 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "My word... Your cycling skills border\non terrifying.\pMost certainly, you need much more\npractice riding.$"

Naranja_CaminoFrio_G20_M01_Text_0816F139::
# 521 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "...I am aghast...\pYou’re perhaps not cut out for this\nunfortunate cycling business.\pYou ought to give serious thought to\nreturning that BIKE to RYDEL.$"

Naranja_CaminoFrio_G20_M01_Text_0819E3AD::
# 525 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Sorry, you can’t walk on CYCLING\nROAD. It’s too dangerous.\pPlease come back with a BIKE.$"

Naranja_CaminoFrio_G20_M01_Text_086B7B61::
# 529 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡No te acerques al borde\no te despeñarás!\p¡Para competir móntate\nen el TRINEO que hiciste!\l¡La opción está en tu mochila!$"

Naranja_CaminoFrio_G20_M01_Text_086B7BDB::
# 533 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡No diré más {PLAYER}!\pGracias a tus POKéMON \nme ganaste tallando el TRINEO.\pAhora echemos una carrera\nbajando la pendiente\lmontandos en trineo  hasta la orilla.\p¡Como pierdas\ntendrás que repetir las pruebas!\pPreparados.\pListos.\p¡Ya!$"

Naranja_CaminoFrio_G20_M01_Text_086B7CBF::
# 537 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Danny: ¡Colócate en tu posición!$"

Naranja_CaminoFrio_G20_M01_Text_086B7D9B::
# 541 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Comienza la carrera!$"

Naranja_CaminoFrio_G20_M01_Text_086B7EA0::
# 545 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Guau! ¿Ya estás aquì!\p¡Es fìsicamente imposible!\n¡Sube a repetirlo!$"

Naranja_CaminoFrio_G20_M01_Text_086B7EE5::
# 549 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Muy bien hecho {PLAYER}!\pVamos a mi gimnasio\nque te mereces un combate.$"

Naranja_CaminoFrio_G20_M01_Text_086B7F28::
# 553 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Vaya!\n¡Te quedaste a un chispitìn!\pTe aconsejo que sin ir lento\naminores lo justo para no ir\lchocándote con los muros.$"

Naranja_CaminoFrio_G20_M01_Text_086B7FA0::
# 557 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Te gané con ventaja, {PLAYER}!\pSi vas a lo loco irás chocándote\ny te equivocarás de camino.\p¡Sangre frìa!$"
