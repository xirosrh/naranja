Naranja_Route110_G00_M25_MapScripts::
# 5 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_CaminoFrio_G20_M01_OnResume
# 6 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaminoFrio_G20_M01_OnTransition
# 7 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route110_G00_M25_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route110_G00_M25_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	map_script_2 VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 1, Naranja_CaminoFrio_G20_M01_OnFrame_1
	.2byte 0


Naranja_Route110_G00_M25_EventScript_OBJECT_22_LocalId22::
# 13 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 14 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E6C0, MSGBOX_DEFAULT
# 16 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 17 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 18 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJECT_23_LocalId23::
# 23 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 24 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 25 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E6F2, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 27 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJECT_24_LocalId24::
# 33 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 34 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 35 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E729, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 37 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJECT_25_LocalId25::
# 43 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 44 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 45 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E76A, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 47 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId7::
# 53 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EB22, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F_LocalId6::
# 58 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EB65, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId4::
# 63 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EBC9, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId5::
# 68 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EDC5, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 73 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EE30, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId2::
# 78 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EE74, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId1::
# 83 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EEF6, MSGBOX_NPC
	end


Naranja_Route110_G00_M25_EventScript_Sign_4::
# 88 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F381, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_3::
# 93 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F39C, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_1::
# 98 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F3B1, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_5::
# 103 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F3E9, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_2::
# 108 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F3FF, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_6::
# 113 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F40F, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_9::
# 118 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F429, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_10::
# 123 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F4AE, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_11::
# 128 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F4F7, MSGBOX_SIGN
	end


Naranja_Route110_G00_M25_EventScript_Sign_12::
# 133 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lockall
# 134 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 135 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 136 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FA49
# 137 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F53A, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FA49::
# 143 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F57C, MSGBOX_DEFAULT
# 144 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId21::
# 149 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 150 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 151 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 152 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 153 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FA84
# 154 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 0
# 155 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FA7A
# 156 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F26A, MSGBOX_DEFAULT
# 157 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FA7A::
# 162 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F1D0, MSGBOX_DEFAULT
# 163 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FA84::
# 168 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816F2C4, MSGBOX_DEFAULT
# 169 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId12::
# 174 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_232, Naranja_Route110_G00_M25_Text_081BA699, Naranja_Route110_G00_M25_Text_081BA6D2
# 175 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA6F8, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_LASS_LocalId13::
# 180 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_243, Naranja_Route110_G00_M25_Text_081BA72D, Naranja_Route110_G00_M25_Text_081BA759
# 181 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA76C, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId14::
# 186 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_512, Naranja_Route110_G00_M25_Text_081BA7D2, Naranja_Route110_G00_M25_Text_081BA803
# 187 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 188 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 189 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FAE3
# 190 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA829, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FAE3::
# 195 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE110_512, Naranja_Route110_G00_M25_Text_081BA877, Naranja_Route110_G00_M25_Text_081BA8CD
# 196 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA8E9, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId15::
# 201 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_341, Naranja_Route110_G00_M25_Text_081BA913, Naranja_Route110_G00_M25_Text_081BA93C
# 202 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA94A, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId27::
# 207 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_351, Naranja_Route110_G00_M25_Text_081BA22C, Naranja_Route110_G00_M25_Text_081BA264
# 208 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA27C, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId9::
# 213 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_352, Naranja_Route110_G00_M25_Text_081BA2D4, Naranja_Route110_G00_M25_Text_081BA2FC
# 214 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA30C, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId11::
# 219 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_353, Naranja_Route110_G00_M25_Text_081BA352, Naranja_Route110_G00_M25_Text_081BA379
# 220 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 221 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 222 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FB66
# 223 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA3A5, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FB66::
# 228 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE110_353, Naranja_Route110_G00_M25_Text_081BA3EF, Naranja_Route110_G00_M25_Text_081BA432
# 229 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA456, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F_LocalId8::
# 234 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_359, Naranja_Route110_G00_M25_Text_081BA5FF, Naranja_Route110_G00_M25_Text_081BA63C
# 235 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA65F, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F_LocalId10::
# 240 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_358, Naranja_Route110_G00_M25_Text_081BA4A0, Naranja_Route110_G00_M25_Text_081BA50F
# 241 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 242 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 243 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FBBB
# 244 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA52E, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FBBB::
# 249 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE110_358, Naranja_Route110_G00_M25_Text_081BA573, Naranja_Route110_G00_M25_Text_081BA5A1
# 250 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA5C4, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId31::
# 255 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_302, Naranja_Route110_G00_M25_Text_081BA990, Naranja_Route110_G00_M25_Text_081BA9D0
# 256 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 257 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 258 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FBF9
# 259 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BA9E9, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FBF9::
# 264 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE110_302, Naranja_Route110_G00_M25_Text_081BAA2D, Naranja_Route110_G00_M25_Text_081BAA76
# 265 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BAA8F, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId30::
# 270 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_334, Naranja_Route110_G00_M25_Text_081BAAC3, Naranja_Route110_G00_M25_Text_081BAAF7
# 271 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_081BAB19, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G00_M25_EventScript_Trigger_3::
# 276 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_0x8008, 1
# 277 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FD34
	return


Naranja_Route110_G00_M25_EventScript_Trigger_4::
# 281 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_0x8008, 2
# 282 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FD34
	return


Naranja_Route110_G00_M25_EventScript_Trigger_5::
# 286 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_0x8008, 3
# 287 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FD34
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FD34::
# 291 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lockall
# 292 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	checkplayergender
# 293 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 294 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDA7
# 295 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 296 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDAC
# 297 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 298 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 299 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 300 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 301 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 302 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 303 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	delay 0x1E
# 304 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 305 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF14
# 306 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 307 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF1F
# 308 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 309 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF2A
# 310 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	checkplayergender
# 311 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 312 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDB1
# 313 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 314 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE2B
# 315 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FDA7::
# 320 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FDAC::
# 325 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FDB1::
# 330 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E7A1, MSGBOX_DEFAULT
# 331 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 332 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 333 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDE0
# 334 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 335 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDF0
# 336 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 337 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE00
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FDE0::
# 342 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE110_533, Naranja_Route110_G00_M25_Text_0816E826
# 343 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE10
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FDF0::
# 347 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE110_536, Naranja_Route110_G00_M25_Text_0816E826
# 348 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE10
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE00::
# 352 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE110_530, Naranja_Route110_G00_M25_Text_0816E826
# 353 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE10
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE10::
# 357 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E84C, MSGBOX_DEFAULT
# 358 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call Naranja_Route110_G00_M25_EventScript_Sub_0814FEA5
# 359 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E8B3, MSGBOX_DEFAULT
# 360 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FEB2
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE2B::
# 364 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816E99A, MSGBOX_DEFAULT
# 365 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 366 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 367 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE5A
# 368 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 369 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE6A
# 370 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 371 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE7A
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FE5A::
# 376 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE110_524, Naranja_Route110_G00_M25_Text_0816EA0F
# 377 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE6A::
# 381 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE110_527, Naranja_Route110_G00_M25_Text_0816EA0F
# 382 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE7A::
# 386 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ROUTE110_521, Naranja_Route110_G00_M25_Text_0816EA0F
# 387 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A::
# 391 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EA2A, MSGBOX_DEFAULT
# 392 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call Naranja_Route110_G00_M25_EventScript_Sub_0814FEA5
# 393 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	msgbox Naranja_Route110_G00_M25_Text_0816EA7B, MSGBOX_DEFAULT
# 394 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FEB2
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FEA5::
# 398 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 0x105
# 399 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 400 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 0
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FEB2::
# 405 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	closemessage
# 406 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 407 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF56
# 408 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 409 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF5E
# 410 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 411 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF66
# 412 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_G00_M25_VARS, 0xA
# 413 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_G00_M25_243, 0xA
# 414 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	removeobject LOCALID_ROUTE110_G00_M25_VARS
# 415 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	addobject LOCALID_ROUTE110_G00_M25_243
# 416 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	delay 0x2D
# 417 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 418 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF35
# 419 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 420 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF40
# 421 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 422 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF4B
# 423 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	removeobject LOCALID_ROUTE110_G00_M25_243
# 424 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_STORY_STATE, 1
# 425 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	savebgm MUS_DUMMY
# 426 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	fadedefaultbgm
# 427 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FF14::
# 432 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_Route110_G00_M25_Movement_0814FF6E
# 433 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF1F::
# 438 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_Route110_G00_M25_Movement_0814FF72
# 439 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF2A::
# 444 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_Route110_G00_M25_Movement_0814FF74
# 445 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF35::
# 450 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_243, Naranja_Route110_G00_M25_Movement_0814FF78
# 451 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF40::
# 456 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_243, Naranja_Route110_G00_M25_Movement_0814FF80
# 457 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF4B::
# 462 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_243, Naranja_Route110_G00_M25_Movement_0814FF89
# 463 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF56::
# 468 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G00_M25_243, 0x21, 0x37
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF5E::
# 473 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G00_M25_243, 0x22, 0x37
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF66::
# 478 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G00_M25_243, 0x23, 0x37
	return


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 483 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 484 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 485 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 1
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId19::
# 490 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4A
# 491 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 492 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 1
	end


# 496 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF6E:
# 497 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_down
# 498 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_left
# 499 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_in_place_faster_down
	step_end

# 502 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF72:
# 503 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_down
	step_end

# 506 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF74:
# 507 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_down
# 508 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_right
# 509 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_in_place_faster_down
	step_end

# 512 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF78:
# 513 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 514 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 515 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 516 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 517 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 518 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 519 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
	step_end

# 522 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF80:
# 523 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 524 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 525 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 526 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 527 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 528 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 529 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 530 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_down
	step_end

# 533 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF89:
# 534 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 535 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 536 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 537 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 538 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 539 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 540 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
	step_end

Naranja_Route110_G00_M25_Text_0816E6C0::
# 543 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TEAM {AQUA}’s activities must be kept\nsecret for now.$"

Naranja_Route110_G00_M25_Text_0816E6F2::
# 547 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I want to get going to SLATEPORT and\nkick up a ruckus!$"

Naranja_Route110_G00_M25_Text_0816E729::
# 551 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "This is my first job after joining\nTEAM {AQUA}. I’ve got the shakes!$"

Naranja_Route110_G00_M25_Text_0816E76A::
# 555 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TEAM {AQUA}’s actions will put a smile\non everyone’s face!$"

Naranja_Route110_G00_M25_Text_0816E7A1::
# 559 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\pWhile I was searching for other\nPOKéMON, my POKéMON grew stronger.\pSo...\nHow about a little battle?$"

Naranja_Route110_G00_M25_Text_0816E826::
# 563 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Yikes!\nYou’re better than I expected!$"

Naranja_Route110_G00_M25_Text_0816E84C::
# 567 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you’ve been busy\ntraining, too, haven’t you?\pI think you deserve a reward!\nThis is from me!$"

Naranja_Route110_G00_M25_Text_0816E8B3::
# 571 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "MAY: That’s an ITEMFINDER.\pTry it out. If there is an item that’s\nnot visible, it emits a sound.\pOkay, {PLAYER}{KUN}, let’s meet again!\pI know it’s a little silly coming from\nme, but I think you should train a lot\lharder for the next time.$"

Naranja_Route110_G00_M25_Text_0816E99A::
# 575 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\nSo this is where you were.\lHow’s it going?\pHave you been raising your POKéMON?\nI’ll check for you.$"

Naranja_Route110_G00_M25_Text_0816EA0F::
# 579 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Hmm...\nYou’re pretty good.$"

Naranja_Route110_G00_M25_Text_0816EA2A::
# 583 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "BRENDAN: {PLAYER}, you’ve trained\nwithout me noticing...\pGood enough!\nHere, take this.$"

Naranja_Route110_G00_M25_Text_0816EA7B::
# 587 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "BRENDAN: That’s an ITEMFINDER.\pUse it to root around for items that\naren’t visible.\pIf it senses something, it emits a\nsound.\pAnyway, I’m off to look for new\nPOKéMON.$"

Naranja_Route110_G00_M25_Text_0816EB22::
# 591 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Wouldn’t it be great to ride a BIKE\nat full speed on CYCLING ROAD?$"

Naranja_Route110_G00_M25_Text_0816EB65::
# 595 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "How do you like the way my raven-\ncolored hair streams behind me?\pI grew my hair out just for that.$"

Naranja_Route110_G00_M25_Text_0816EBC9::
# 599 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\pOh, it’s glaringly obvious.\nIt says right on your bike...\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL...\nThat name’s everywhere.\pYou should ride it around all over\nthe place - it’s good advertising!$"

Naranja_Route110_G00_M25_Text_0816EDC5::
# 603 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "The two roads, one above, one below...\pA road each for people and POKéMON.\nPerhaps that is right and fair.$"

Naranja_Route110_G00_M25_Text_0816EE30::
# 607 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I don’t have a BIKE, so I’ll take a\nleisurely walk on the low road.$"

Naranja_Route110_G00_M25_Text_0816EE74::
# 611 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Learning techniques will make BIKE\nriding even more fun.\pThere are some places that you can\nreach only by using a BIKE technique.$"

Naranja_Route110_G00_M25_Text_0816EEF6::
# 615 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Which should I choose?\pMake a beeline for MAUVILLE on\nCYCLING ROAD, or take the low road\land look for POKéMON?$"

Naranja_Route110_G00_M25_Text_0816F1D0::
# 619 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "This is CYCLING ROAD.\pIf you were to ride from MAUVILLE to\nSLATEPORT on a MACH BIKE, you would\lbe rated for the number of collisions\land your total time.$"

Naranja_Route110_G00_M25_Text_0816F26A::
# 623 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Regardless of the results, I count on\nseeing more challenges from you.\lAlways aim higher!$"

Naranja_Route110_G00_M25_Text_0816F2C4::
# 627 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "On this CYCLING ROAD, those riding\nMACH BIKES are rated for their number\lof collisions and their total times.\pACRO BIKES do not qualify for rating.\nThey are easy to turn, so it’s not fair.$"

Naranja_Route110_G00_M25_Text_0816F381::
# 631 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "ROUTE 110\nレ SLATEPORT CITY$"

Naranja_Route110_G00_M25_Text_0816F39C::
# 635 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"

Naranja_Route110_G00_M25_Text_0816F3B1::
# 639 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "“TEAM {AQUA} RULEZ!”\pSomebody scribbled that on the sign...$"

Naranja_Route110_G00_M25_Text_0816F3E9::
# 643 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "ROUTE 110\nロ ROUTE 103$"

Naranja_Route110_G00_M25_Text_0816F3FF::
# 647 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "SEASIDE PARKING$"

Naranja_Route110_G00_M25_Text_0816F40F::
# 651 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "ROUTE 110\nル MAUVILLE CITY$"

Naranja_Route110_G00_M25_Text_0816F429::
# 655 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TRAINER TIPS\pThe foe can be made helpless by\nparalyzing it or causing it to sleep.\pIt is an important technique for\nPOKéMON battles.$"

Naranja_Route110_G00_M25_Text_0816F4AE::
# 659 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TRAINER TIPS\pThe items in the BAG can be reorganized\nby pressing SELECT.$"

Naranja_Route110_G00_M25_Text_0816F4F7::
# 663 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "“Three steps ワ and two steps ル\nto reach the wondrous TRICK HOUSE.”$"

Naranja_Route110_G00_M25_Text_0816F53A::
# 667 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "THE BEST RECORD TO DATE...\pNo. of collisions: {STR_VAR_1}\pElapsed time: {STR_VAR_2}$"

Naranja_Route110_G00_M25_Text_0816F57C::
# 671 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "THE BEST RECORD TO DATE...\pNo one seems to have taken the\nchallenge. There is no record...$"

Naranja_Route110_G00_M25_Text_081BA22C::
# 675 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Whoa! Watch it!\nI guess you’re not used to BIKE racing.$"

Naranja_Route110_G00_M25_Text_081BA264::
# 679 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Whoa!\nMy brakes failed!$"

Naranja_Route110_G00_M25_Text_081BA27C::
# 683 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Flat tires and brake problems can\ncause serious injury!\lInspect your BIKE for problems!$"

Naranja_Route110_G00_M25_Text_081BA2D4::
# 687 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Yo, you!\nCan you keep up with my speed?$"

Naranja_Route110_G00_M25_Text_081BA2FC::
# 691 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Crash and burn!$"

Naranja_Route110_G00_M25_Text_081BA30C::
# 695 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Speed alone won’t let me win at POKéMON.\nI need to reconsider this...$"

Naranja_Route110_G00_M25_Text_081BA352::
# 699 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Don’t panic if your BIKE’s going fast!$"

Naranja_Route110_G00_M25_Text_081BA379::
# 703 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I shouldn’t panic during POKéMON\nbattles...$"

Naranja_Route110_G00_M25_Text_081BA3A5::
# 707 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "There’s no need to panic or stress.\nTake it easy. There’s plenty of time.$"

Naranja_Route110_G00_M25_Text_081BA3EF::
# 711 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Aren’t you going a little too fast?\nTake it easy and let’s battle.$"

Naranja_Route110_G00_M25_Text_081BA432::
# 715 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I didn’t panic, but I still lost...$"

Naranja_Route110_G00_M25_Text_081BA456::
# 719 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "There’s no need to panic or stress.\nTake it easy. There’s plenty of time.$"

Naranja_Route110_G00_M25_Text_081BA4A0::
# 723 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "The triathlon is hard in the extreme.\pYou have to complete the three events\nof swimming, cycling, and running.$"

Naranja_Route110_G00_M25_Text_081BA50F::
# 727 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "POKéMON battles are hard, too!$"

Naranja_Route110_G00_M25_Text_081BA52E::
# 731 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I’m exhausted, so I need a break.\nIt’s important to get proper rest.$"

Naranja_Route110_G00_M25_Text_081BA573::
# 735 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Isn’t it neat to hold a battle while\ncycling?$"

Naranja_Route110_G00_M25_Text_081BA5A1::
# 739 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Wow...\nHow could you be so strong?$"

Naranja_Route110_G00_M25_Text_081BA5C4::
# 743 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Were you going after a record?\pI’m sorry if I held you up!$"

Naranja_Route110_G00_M25_Text_081BA5FF::
# 747 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I’ve been riding without stopping.\nMy thighs are like rocks!$"

Naranja_Route110_G00_M25_Text_081BA63C::
# 751 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I’m worried about muscle cramps...$"

Naranja_Route110_G00_M25_Text_081BA65F::
# 755 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, you have some GYM BADGES?\nNo wonder you’re so strong!$"

Naranja_Route110_G00_M25_Text_081BA699::
# 759 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I have foreseen your intentions!\nI cannot possibly lose!$"

Naranja_Route110_G00_M25_Text_081BA6D2::
# 763 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I failed to prophesize my own demise!$"

Naranja_Route110_G00_M25_Text_081BA6F8::
# 767 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I see your future...\pHmm...\nI see a shining light...$"

Naranja_Route110_G00_M25_Text_081BA72D::
# 771 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Ahahahaha!\nI’ll dazzle you with my wonders!$"

Naranja_Route110_G00_M25_Text_081BA759::
# 775 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I wondrously lost!$"

Naranja_Route110_G00_M25_Text_081BA76C::
# 779 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "You managed to win only because it was\na wonder! Yes, a wonder!\lDon’t think you can win all the time!$"

Naranja_Route110_G00_M25_Text_081BA7D2::
# 783 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Could I see your POKéMON?\nJust one look, please?$"

Naranja_Route110_G00_M25_Text_081BA803::
# 787 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I wanted to complete my\ncollection...$"

Naranja_Route110_G00_M25_Text_081BA829::
# 791 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "When I see a POKéMON that I don’t know,\nmy passion as a collector is ignited!$"

Naranja_Route110_G00_M25_Text_081BA877::
# 795 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Hi, have you caught any new POKéMON?\pCould I see your POKéMON?\nJust one look, please?$"

Naranja_Route110_G00_M25_Text_081BA8CD::
# 799 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Your POKéMON...\nI envy you.$"

Naranja_Route110_G00_M25_Text_081BA8E9::
# 803 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, I long to make all rare POKéMON\nmine!$"

Naranja_Route110_G00_M25_Text_081BA913::
# 807 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Hey!\nDon’t sneak up behind me like that!$"

Naranja_Route110_G00_M25_Text_081BA93C::
# 811 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I lost!\nDrat!$"

Naranja_Route110_G00_M25_Text_081BA94A::
# 815 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Fishing is all about concentration.\nYou have to focus on the floater.$"

Naranja_Route110_G00_M25_Text_081BA990::
# 819 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Ahahaha! I would go anywhere to show\noff my delightful POKéMON.$"

Naranja_Route110_G00_M25_Text_081BA9D0::
# 823 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, dear, this won’t do.$"

Naranja_Route110_G00_M25_Text_081BA9E9::
# 827 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Perhaps I should groom my POKéMON for\nCONTESTS rather than battles.$"

Naranja_Route110_G00_M25_Text_081BAA2D::
# 831 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Ahahahaha! I would be happy to show\noff my POKéMON as often as you like!$"

Naranja_Route110_G00_M25_Text_081BAA76::
# 835 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, dear, this won’t do.$"

Naranja_Route110_G00_M25_Text_081BAA8F::
# 839 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "CONTESTS are delightful, but I like\nto battle, too.$"

Naranja_Route110_G00_M25_Text_081BAAC3::
# 843 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I found some cool POKéMON in the grass\naround here!$"

Naranja_Route110_G00_M25_Text_081BAAF7::
# 847 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Being cool isn’t enough to win...$"

Naranja_Route110_G00_M25_Text_081BAB19::
# 851 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "It’s hard to battle with POKéMON you\njust caught.$"
