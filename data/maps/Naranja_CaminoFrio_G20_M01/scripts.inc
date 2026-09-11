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
	msgbox Naranja_CaminoFrio_G20_M01_Text_0816EF65, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 50 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 51 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCC3
# 52 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 53 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1
# 54 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 55 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1
# 56 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 57 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1
# 58 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 59 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF
# 60 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 61 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF
# 62 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 63 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF
# 64 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 65 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED
# 66 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 67 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED
# 68 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 69 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED
# 70 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 71 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCFB
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCC3::
# 76 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_0816EF9F, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCD1::
# 81 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_0816F012, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCDF::
# 86 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_0816F069, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCED::
# 91 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_0816F0D0, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FCFB::
# 96 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_0816F139, MSGBOX_DEFAULT
# 97 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_0814FD09::
# 101 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 3
# 102 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	savebgm MUS_DUMMY
# 103 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	fadedefaultbgm
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_2::
# 108 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 109 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 110 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 111 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081634A6
# 112 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 113 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 1
# 114 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081634A6::
# 119 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_0819E3AD, MSGBOX_DEFAULT
# 120 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 121 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081634BB
# 122 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 123 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_7::
# 128 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 129 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 130 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 0
# 131 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E::
# 136 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkplayergender
# 137 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 138 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0166
# 139 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 140 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A016C
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0166::
# 145 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x69
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A016C::
# 150 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x64
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0172::
# 155 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkplayergender
# 156 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 157 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A018A
# 158 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 159 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0190
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A018A::
# 164 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x6A
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A0190::
# 169 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x65
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_5::
# 174 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 175 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 176 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL_2, Naranja_CaminoFrio_G20_M01_Movement_08166EB4
# 177 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7CBF, MSGBOX_DEFAULT
# 178 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 179 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_08163538
# 180 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 181 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_OBJ_EVENT_GFX_BIG_SNORLAX_DOLL_LocalId2::
# 186 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7CBF, MSGBOX_DEFAULT
# 187 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 188 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B336E
# 189 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 190 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	removeobject 9833
# 191 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	endram
	return


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_1::
# 195 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	lockall
# 196 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 197 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 198 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D51
# 199 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 200 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D85
# 201 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 202 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 1
# 203 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D51::
# 208 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 0
# 209 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_082B
# 210 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_TEMP_1, 0
# 211 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop1
# 212 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 213 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 214 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1
# 215 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 216 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 217 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7DB1
# 218 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7D9B, MSGBOX_DEFAULT
# 219 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 220 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B7207
# 221 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 222 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7D85::
# 227 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7B61, MSGBOX_DEFAULT
# 228 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 229 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B7DDA
# 230 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 231 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B7DB1::
# 236 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7BDB, MSGBOX_DEFAULT
# 237 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	closemessage
# 238 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	fadenewbgm MUS_GYM
# 239 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0xB, 0x19, 0x256, 0
# 240 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 241 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 242 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL_2, Naranja_CaminoFrio_G20_M01_Movement_086B7DE0
# 243 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B7DE8
# 244 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x40
# 245 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G20_M01_EventScript_OBJ_EVENT_GFX_BIG_SNORLAX_DOLL_LocalId1
	return


Naranja_CaminoFrio_G20_M01_EventScript_OBJ_EVENT_GFX_BIG_SNORLAX_DOLL_LocalId1::
	end


Naranja_CaminoFrio_G20_M01_EventScript_Trigger_8::
# 253 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special FinishCyclingRoadChallenge
# 254 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 255 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 256 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 257 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80B0
# 258 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 259 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80D5
# 260 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 261 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80D5
# 262 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 263 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B810A
# 264 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 265 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 266 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 267 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 268 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 269 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 270 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 271 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 272 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 273 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 274 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 275 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F
# 276 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 277 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G00_M13_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId4
# 278 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 279 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setvar VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 3
# 280 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	savebgm 0x3500
# 281 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 282 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 283 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 284 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
	return


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80B0::
# 288 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_CaminoFrio_G20_M01_Movement_086B81A0
# 289 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x13
# 290 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B8190
# 291 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xE0
# 292 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7EA0, MSGBOX_AUTOCLOSE
# 293 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B80D5::
# 298 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_CaminoFrio_G20_M01_Movement_086B81C0
# 299 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x15
# 300 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B81B0
# 301 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xB0
# 302 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	removeitem ITEM_MACH_BIKE, 1
# 303 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	nop
# 304 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7EE5, MSGBOX_AUTOCLOSE
# 305 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_INSIDE_OF_TRUCK_G08_M01, 0x1F, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B810A::
# 310 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_IslaNavel_G00_M13_Movement_086B81E0
# 311 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x20
# 312 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_086B81D0
# 313 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xD0
# 314 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7F28, MSGBOX_AUTOCLOSE
# 315 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sub_086B812F::
# 320 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M01_BIG_SNORLAX_DOLL, Naranja_IslaNavel_G00_M13_Movement_086B81E0
# 321 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0x30
# 322 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G00_M13_Movement_086B81F0
# 323 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay 0xE0
# 324 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G20_M01_Text_086B7FA0, MSGBOX_AUTOCLOSE
# 325 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G20_M01, 0, 0, 0
	end


Naranja_CaminoFrio_G20_M01_EventScript_Sign_1::
# 330 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	checkpartymove MOVE_POWDER_SNOW
# 331 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 332 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 333 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	playse SE_PIN
# 334 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x16, 0x257, 0
# 335 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x18, 0x257, 0
# 336 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x1A, 0x257, 0
# 337 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	setmetatile 0x13, 0x1C, 0x257, 0
# 338 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	special DrawWholeMapView
# 339 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	release
	end


# 343 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_081634BB:
# 344 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
	step_end

# 347 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_08163538:
# 348 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_08166EB4:
# 352 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	emote_exclamation_mark
	step_end

# 355 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_081A0843:
# 356 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
	step_end

# 359 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B336E:
# 360 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_right
	step_end

# 363 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7207:
# 364 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
	step_end

# 367 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7DDA:
# 368 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_up
	step_end

# 371 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7DE0:
# 372 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_down
# 373 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 374 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 375 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
# 376 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 377 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 378 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 379 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_invisible
# 380 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 381 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 382 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 383 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
# 384 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 385 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
	step_end

# 388 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B7DE8:
# 389 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 390 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 391 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 392 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
# 393 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 394 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_1
	step_end

# 397 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B8190:
# 398 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 399 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 400 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 401 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_end_wheelie_move_down
# 402 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_end_wheelie_move_down
# 403 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_end_wheelie_move_down
# 404 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	acro_pop_wheelie_move_left
# 405 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 406 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 407 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 408 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 409 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 410 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 411 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 412 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_up
	step_end

# 415 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81A0:
# 416 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_invisible
# 417 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 418 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 419 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 420 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 421 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 422 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 423 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_right
# 424 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_right
# 425 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_right
# 426 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_visible
# 427 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_slow_down
# 428 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 429 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 430 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	emote_exclamation_mark
	step_end

# 433 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81B0:
# 434 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 435 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 436 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 437 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 438 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 439 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 440 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 441 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 442 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 443 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 444 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 445 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 446 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_up
# 447 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_up
	step_end

# 450 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81C0:
# 451 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_invisible
# 452 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 453 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 454 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 455 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 456 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
# 457 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_right
# 458 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_right
# 459 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	set_visible
# 460 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_right
# 461 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 462 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 463 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 464 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 465 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
	step_end

# 468 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
Naranja_CaminoFrio_G20_M01_Movement_086B81D0:
# 469 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 470 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_left
# 471 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 472 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 473 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 474 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_fast_left
# 475 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 476 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 477 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	jump_2_down
# 478 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	walk_down
# 479 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
# 480 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	face_down
# 481 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	emote_exclamation_mark
# 482 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	delay_16
	step_end

Naranja_CaminoFrio_G20_M01_Text_0816EF65::
# 485 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Number of collisions:\n... ... {STR_VAR_1}!\pTotal time:\n... ... {STR_VAR_2}!$"

Naranja_CaminoFrio_G20_M01_Text_0816EF9F::
# 489 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Bravo! Splendid showing!\pYour love of cycling comes from deep\nwithin your heart.\lYou’ve shaken me to my very soul!$"

Naranja_CaminoFrio_G20_M01_Text_0816F012::
# 493 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Your technique is remarkable.\pI suggest you slow down just enough\nto avoid collisions.$"

Naranja_CaminoFrio_G20_M01_Text_0816F069::
# 497 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "I would consider you a work in\nprogress.\pStill, I hope you don’t forget the\nsheer pleasure of cycling.$"

Naranja_CaminoFrio_G20_M01_Text_0816F0D0::
# 501 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "My word... Your cycling skills border\non terrifying.\pMost certainly, you need much more\npractice riding.$"

Naranja_CaminoFrio_G20_M01_Text_0816F139::
# 505 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "...I am aghast...\pYou’re perhaps not cut out for this\nunfortunate cycling business.\pYou ought to give serious thought to\nreturning that BIKE to RYDEL.$"

Naranja_CaminoFrio_G20_M01_Text_0819E3AD::
# 509 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Sorry, you can’t walk on CYCLING\nROAD. It’s too dangerous.\pPlease come back with a BIKE.$"

Naranja_CaminoFrio_G20_M01_Text_086B7B61::
# 513 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡No te acerques al borde\no te despeñarás!\p¡Para competir móntate\nen el TRINEO que hiciste!\l¡La opción está en tu mochila!$"

Naranja_CaminoFrio_G20_M01_Text_086B7BDB::
# 517 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡No diré más {PLAYER}!\pGracias a tus POKéMON \nme ganaste tallando el TRINEO.\pAhora echemos una carrera\nbajando la pendiente\lmontandos en trineo  hasta la orilla.\p¡Como pierdas\ntendrás que repetir las pruebas!\pPreparados.\pListos.\p¡Ya!$"

Naranja_CaminoFrio_G20_M01_Text_086B7CBF::
# 521 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "Danny: ¡Colócate en tu posición!$"

Naranja_CaminoFrio_G20_M01_Text_086B7D9B::
# 525 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Comienza la carrera!$"

Naranja_CaminoFrio_G20_M01_Text_086B7EA0::
# 529 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Guau! ¿Ya estás aquì!\p¡Es fìsicamente imposible!\n¡Sube a repetirlo!$"

Naranja_CaminoFrio_G20_M01_Text_086B7EE5::
# 533 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Muy bien hecho {PLAYER}!\pVamos a mi gimnasio\nque te mereces un combate.$"

Naranja_CaminoFrio_G20_M01_Text_086B7F28::
# 537 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Vaya!\n¡Te quedaste a un chispitìn!\pTe aconsejo que sin ir lento\naminores lo justo para no ir\lchocándote con los muros.$"

Naranja_CaminoFrio_G20_M01_Text_086B7FA0::
# 541 "data/maps/Naranja_CaminoFrio_G20_M01/scripts.pory"
	.string "¡Te gané con ventaja, {PLAYER}!\pSi vas a lo loco irás chocándote\ny te equivocarás de camino.\p¡Sangre frìa!$"
