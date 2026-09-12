Naranja_Islas_G00_M19_MapScripts::
# 8 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Islas_G00_M19_OnTransition
# 5 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Islas_G00_M19_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Islas_G00_M19_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	map_script_2 VAR_NARANJA_ISLAS_STORY_STATE, 1, Naranja_Islas_G00_M19_OnFrame_1
	.2byte 0


Naranja_Islas_G00_M19_OnFrame_1::
# 12 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	lockall
# 13 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto Naranja_Islas_G00_M19_EventScript_Sub_0814EFD5
	return


Naranja_Islas_G00_M19_OnTransition::
# 17 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_0814EEAE
	end


Naranja_Islas_G00_M19_EventScript_Sub_0814EEAE::
# 22 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_007F
# 23 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G00_M19_EventScript_Sub_0814EEC4
# 24 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 25 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G00_M19_EventScript_Sub_0814EEC4
# 26 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	clearflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_038A
	return


Naranja_Islas_G00_M19_EventScript_Sub_0814EEC4::
# 31 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_038A
	return


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId16::
# 36 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	lock
# 37 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	faceplayer
# 38 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_0117
# 39 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G00_M19_EventScript_Sub_0814EF38
# 40 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_0816DD91, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB4
# 42 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 43 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	callstd 0
# 44 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 45 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 46 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_0117
# 47 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	release
	end


Naranja_Islas_G00_M19_EventScript_Sub_0814EF38::
# 52 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_0816DE36, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	release
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId2::
# 58 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_0816DA13, MSGBOX_NPC
	end


Naranja_Islas_G00_M19_EventScript_Sub_0814EFD5::
# 63 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setobjectsubpriority LOCALID_ISLAS_G00_M19_OLD_MAN_1, MAP_NARANJA_ISLAS_G00_M19, 0
# 64 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_ISLAS_G00_M19, 0
# 65 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_ISLAS_G00_M19_OLD_MAN_1, Naranja_Islas_G00_M19_Movement_0814F16C
# 66 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	waitmovement LOCALID_NONE
# 67 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	removeobject LOCALID_ISLAS_G00_M19_OLD_MAN_1
# 68 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Islas_G00_M19_Movement_0814F162
# 69 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLAS_G00_M19
# 71 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02E7
# 72 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_ISLAS_G00_M19_SPIN_CUSHION, Naranja_Islas_G00_M19_Movement_0814F09F
# 73 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Islas_G00_M19_Movement_0814F09F
# 74 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Islas_G00_M19_Movement_0814F166
# 76 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	waitmovement LOCALID_NONE
# 77 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02EF
# 78 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 79 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Islas_G00_M19_Movement_0814F168
# 80 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	waitmovement LOCALID_NONE
# 81 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setobjectxyperm LOCALID_ISLAS_G00_M19_GIRL_2, 0xC, 8
# 82 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	addobject LOCALID_ISLAS_G00_M19_GIRL_2
# 83 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setobjectsubpriority LOCALID_ISLAS_G00_M19_GIRL_2, MAP_NARANJA_7ISLAS_POMELO_G00_M11, 0
# 84 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	clearflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 85 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	applymovement LOCALID_ISLAS_G00_M19_GIRL_2, Naranja_Islas_G00_M19_Movement_0814F16F
# 86 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	waitmovement LOCALID_NONE
# 87 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	addobject LOCALID_ISLAS_G00_M19_BOY_1_4
# 88 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	clearflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT
# 89 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	call Naranja_Islas_G00_M19_EventScript_Sub_081A02EF
# 90 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G00_M19_SPIN_CUSHION
# 91 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	hideobjectat LOCALID_ISLAS_G00_M19_SPIN_CUSHION, MAP_NARANJA_ISLAS_G00_M19
# 92 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	copyvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, VAR_0x8008
# 93 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_NARANJA_ISLAS_G00_M19
# 94 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	resetobjectsubpriority LOCALID_ISLAS_G00_M19_GIRL_2, MAP_NARANJA_7ISLAS_POMELO_G00_M11
# 95 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	copyobjectxytoperm LOCALID_ISLAS_G00_M19_GIRL_2
# 96 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setvar VAR_NARANJA_ISLAS_STORY_STATE, 0
# 97 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 98 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G00_M19_EventScript_Sub_0814F08B
# 99 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 100 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G00_M19_EventScript_Sub_0814F095
	end


Naranja_Islas_G00_M19_EventScript_Sub_0814F08B::
# 105 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_0816B347, MSGBOX_DEFAULT
# 106 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	releaseall
	end


Naranja_Islas_G00_M19_EventScript_Sub_0814F095::
# 111 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_0816B4B5, MSGBOX_DEFAULT
# 112 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	releaseall
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId9::
# 117 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_337, Naranja_Islas_G00_M19_Text_081B85EB, Naranja_Islas_G00_M19_Text_081B8637
# 118 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081B8680, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId28::
# 123 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_151, Naranja_Islas_G00_M19_Text_081B8C28, Naranja_Islas_G00_M19_Text_081B8C99
# 124 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081B8CA9, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId5::
# 129 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_152, Naranja_Islas_G00_M19_Text_081B8CEE, Naranja_Islas_G00_M19_Text_081B8D23
# 130 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081B8D45, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId6::
# 135 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_441, Naranja_Islas_G00_M19_Text_081B8D99, Naranja_Islas_G00_M19_Text_081B8DDD
# 136 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081B8DED, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 141 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_442, Naranja_Islas_G00_M19_Text_081B8E66, Naranja_Islas_G00_M19_Text_081B8EA0
# 142 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081B8EBD, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId23::
# 147 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_322, Naranja_Islas_G00_M19_Text_081BD02B, Naranja_Islas_G00_M19_Text_081BD04C
# 148 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081BD078, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId24::
# 153 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_273, Naranja_Islas_G00_M19_Text_081BD1C0, Naranja_Islas_G00_M19_Text_081BD21A
# 154 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 155 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 156 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G00_M19_EventScript_Sub_08150CB7
# 157 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081BD248, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_Sub_08150CB7::
# 162 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ISLAS_273, Naranja_Islas_G00_M19_Text_081BD2A5, Naranja_Islas_G00_M19_Text_081BD2FE
# 163 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081BD31A, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId25::
# 168 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLAS_075, Naranja_Islas_G00_M19_Text_081BFFF0, Naranja_Islas_G00_M19_Text_081C0057
# 169 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	msgbox Naranja_Islas_G00_M19_Text_081C0075, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G00_M19_EventScript_Sub_081A02E7::
# 174 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_4001
# 175 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	playbgm MUS_SAILING, 0
	return


Naranja_Islas_G00_M19_EventScript_Sub_081A02EF::
# 180 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	clearflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_4001
# 181 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	fadedefaultbgm
	return


Naranja_Islas_G00_M19_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId7::
# 186 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD
# 187 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 188 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	callstd 1
	end


# 192 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
Naranja_Islas_G00_M19_Movement_0814F09F:
# 193 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 194 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 195 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 196 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 197 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 198 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 199 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 200 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 201 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 202 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 203 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 204 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 205 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 206 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 207 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 208 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 209 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 210 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 211 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 212 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 213 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 214 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 215 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 216 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 217 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 218 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 219 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 220 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 221 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 222 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 223 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 224 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 225 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 226 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 227 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 228 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 229 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 230 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 231 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 232 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 233 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 234 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 235 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 236 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 237 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 238 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 239 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 240 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 241 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 242 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 243 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 244 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 245 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 246 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 247 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 248 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 249 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 250 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 251 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 252 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 253 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 254 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 255 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 256 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 257 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 258 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 259 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 260 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 261 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 262 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 263 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 264 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 265 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 266 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 267 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 268 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 269 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 270 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 271 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 272 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 273 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 274 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 275 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 276 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 277 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 278 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 279 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 280 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 281 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 282 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 283 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 284 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 285 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 286 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 287 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 288 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 289 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 290 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 291 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 292 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 293 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 294 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 295 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 296 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 297 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 298 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 299 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 300 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 301 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 302 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 303 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 304 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 305 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 306 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 307 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 308 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 309 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 310 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 311 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 312 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 313 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_down
# 314 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 315 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 316 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 317 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 318 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 319 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 320 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 321 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 322 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 323 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 324 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 325 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 326 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 327 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 328 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 329 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 330 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 331 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 332 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 333 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 334 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 335 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 336 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 337 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 338 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 339 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 340 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 341 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 342 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 343 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 344 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 345 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 346 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 347 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 348 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 349 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 350 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 351 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 352 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 353 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 354 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 355 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 356 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 357 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 358 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 359 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 360 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 361 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_faster_right
# 362 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 363 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 364 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 365 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_right
# 366 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_right
# 367 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_right
# 368 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 369 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 370 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 371 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 372 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 373 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 374 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 375 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 376 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 377 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 378 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 379 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 380 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 381 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 382 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 383 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 384 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_fast_down
# 385 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 386 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
	step_end

# 389 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
Naranja_Islas_G00_M19_Movement_0814F162:
# 390 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_left
# 391 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 392 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
	step_end

# 395 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
Naranja_Islas_G00_M19_Movement_0814F166:
# 396 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
	step_end

# 399 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
Naranja_Islas_G00_M19_Movement_0814F168:
# 400 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 401 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_left
# 402 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_in_place_faster_right
	step_end

# 405 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
Naranja_Islas_G00_M19_Movement_0814F16C:
# 406 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 407 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
	step_end

# 410 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
Naranja_Islas_G00_M19_Movement_0814F16F:
# 411 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_down
# 412 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_Islas_G00_M19_Text_0816B347::
# 415 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nWe’ve hit land in DEWFORD.\pI suppose you’re off to deliver that\nLETTER to, who was it now, STEVEN!$"

Naranja_Islas_G00_M19_Text_0816B4B5::
# 419 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nWe’ve hit land in DEWFORD!\pYou just go on and tell me whenever\nyou want to set sail again!$"

Naranja_Islas_G00_M19_Text_0816DA13::
# 423 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "That seaside cottage is where\nMR. BRINEY lives.\pHe was once a mighty sailor who never\nfeared the sea, however stormy.$"

Naranja_Islas_G00_M19_Text_0816DD91::
# 427 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "This FLOWER SHOP started selling\nsaplings recently.\pIt made me so happy, I went overboard\nshopping. I don’t need this WHITE HERB\lanymore. Would you take it, please?$"

Naranja_Islas_G00_M19_Text_0816DE36::
# 431 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "This FLOWER SHOP started selling\nsaplings recently.\pIt made me so happy, I went overboard\nshopping. Where should I put them?$"

Naranja_Islas_G00_M19_Text_081B85EB::
# 435 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "¿Conoces al famoso…\pSUPERPESCADOR?\p{COLOR 0x04}{PLAYER}: Pues no la verdad…\p{COLOR 0x01}Pues soy yo$"

Naranja_Islas_G00_M19_Text_081B8637::
# 439 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Con lo que me costó capturar todos \nestos pokemon… \p¡Ya buscaré más!$"

Naranja_Islas_G00_M19_Text_081B8680::
# 443 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Q incultura\pNo conocer al superpescador\nno conocerme a mí!\l$"

Naranja_Islas_G00_M19_Text_081B8C28::
# 447 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Jaja…\n¡Que tupi!\lHay que ser muy idiota para navegar\lsobre un cachorro de Lapras…\ljaja…\p{COLOR 0x06}Huiii\p{COLOR 0x01}Glug, glug…\n$"

Naranja_Islas_G00_M19_Text_081B8C99::
# 451 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Glub... Glub...$"

Naranja_Islas_G00_M19_Text_081B8CA9::
# 455 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Sigo creyendo q es ridículo nadar\nasí si puedes alquilar una lancha.$"

Naranja_Islas_G00_M19_Text_081B8CEE::
# 459 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Nadar es un gran ejercicio\p…yo estoy tan atletico!$"

Naranja_Islas_G00_M19_Text_081B8D23::
# 463 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Estoy perdiendo mi forma…$"

Naranja_Islas_G00_M19_Text_081B8D45::
# 467 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Para tener tan buena forma como yo\nnada…\l…o apuntate a un gimnasio\l…pero…\p¡Muévete!$"

Naranja_Islas_G00_M19_Text_081B8D99::
# 471 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Cuando entro en el agua me siento \ntan super ligera como un Hoppip.$"

Naranja_Islas_G00_M19_Text_081B8DDD::
# 475 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "¡Oh! ¿Porque…$"

Naranja_Islas_G00_M19_Text_081B8DED::
# 479 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Cuando estoy en el agua es como\nsi volase entre las nubes…\pParece ser un problema de coordinación.$"

Naranja_Islas_G00_M19_Text_081B8E66::
# 483 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Es increible lo relajantes que son    \nestas islas.$"

Naranja_Islas_G00_M19_Text_081B8EA0::
# 487 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "¡Perdí porque no te miraba !$"

Naranja_Islas_G00_M19_Text_081B8EBD::
# 491 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "¿Podrìa estar aún más relajado?\p{COLOR 0x04}Vas a…\p{COLOR 0x01}glug…$"

Naranja_Islas_G00_M19_Text_081BD02B::
# 495 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "My POKéMON rule!\nCheck them out!$"

Naranja_Islas_G00_M19_Text_081BD04C::
# 499 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Ouch! A scrape!\nI have to put on a bandage!$"

Naranja_Islas_G00_M19_Text_081BD078::
# 503 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Bandages are signs of toughness!\nI’ve got another one!$"

Naranja_Islas_G00_M19_Text_081BD1C0::
# 507 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "We learn all sorts of things at the\nTRAINER’S SCHOOL.\pI want to test things out for real!$"

Naranja_Islas_G00_M19_Text_081BD21A::
# 511 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "I slacked off in school...\nThat’s why I lost.$"

Naranja_Islas_G00_M19_Text_081BD248::
# 515 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "I’ll have to redo some courses at the\nTRAINER’S SCHOOL.\lIf I don’t, ROXANNE will be steamed.$"

Naranja_Islas_G00_M19_Text_081BD2A5::
# 519 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "I’ve been studying seriously at the\nTRAINER’S SCHOOL.\lI won’t lose like I did last time.$"

Naranja_Islas_G00_M19_Text_081BD2FE::
# 523 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Hunh?\nI studied diligently.$"

Naranja_Islas_G00_M19_Text_081BD31A::
# 527 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "I’ll have to redo some courses at the\nTRAINER’S SCHOOL.\lIf I don’t, ROXANNE will be steamed.$"

Naranja_Islas_G00_M19_Text_081BFFF0::
# 531 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "You seem to have a big collection\nof GYM BADGES.\pLet me see if you’re actually worthy of\nthose BADGES!$"

Naranja_Islas_G00_M19_Text_081C0057::
# 535 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "Oh, you’re worthy, all right!$"

Naranja_Islas_G00_M19_Text_081C0075::
# 539 "data/maps/Naranja_Islas_G00_M19/scripts.pory"
	.string "You did your BADGES proud in that\nmatch!$"
