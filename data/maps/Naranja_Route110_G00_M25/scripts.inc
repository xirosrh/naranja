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
	loadword 0, Naranja_Route110_G00_M25_Text_0816E6C0
# 16 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 17 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 18 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 19 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJECT_23_LocalId23::
# 24 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 25 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 26 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E6F2
# 27 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 29 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJECT_24_LocalId24::
# 35 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 36 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 37 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E729
# 38 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 40 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJECT_25_LocalId25::
# 46 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 47 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 48 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E76A
# 49 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 51 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId7::
# 57 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EB22
# 58 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F_LocalId6::
# 63 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EB65
# 64 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId4::
# 69 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EBC9
# 70 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId5::
# 75 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EDC5
# 76 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 81 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EE30
# 82 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId2::
# 87 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EE74
# 88 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId1::
# 93 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EEF6
# 94 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 2
	end


Naranja_Route110_G00_M25_EventScript_Sign_4::
# 99 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F381
# 100 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_3::
# 105 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F39C
# 106 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_1::
# 111 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F3B1
# 112 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_5::
# 117 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F3E9
# 118 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_2::
# 123 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F3FF
# 124 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_6::
# 129 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F40F
# 130 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_9::
# 135 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F429
# 136 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_10::
# 141 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F4AE
# 142 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_11::
# 147 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F4F7
# 148 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 3
	end


Naranja_Route110_G00_M25_EventScript_Sign_12::
# 153 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lockall
# 154 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 155 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 156 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FA49
# 157 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F53A
# 158 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 159 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FA49::
# 164 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F57C
# 165 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 166 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId21::
# 171 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lock
# 172 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	faceplayer
# 173 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 174 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 175 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FA84
# 176 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_NARANJA_CAMINO_FRIO_STORY_STATE, 0
# 177 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FA7A
# 178 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F26A
# 179 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 180 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FA7A::
# 185 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F1D0
# 186 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 187 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FA84::
# 192 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816F2C4
# 193 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 194 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	release
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId12::
# 199 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_232, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA699, Naranja_Route110_G00_M25_Text_081BA6D2
# 200 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA6F8
# 201 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_LASS_LocalId13::
# 206 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_243, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA72D, Naranja_Route110_G00_M25_Text_081BA759
# 207 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA76C
# 208 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId14::
# 213 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_512, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA7D2, Naranja_Route110_G00_M25_Text_081BA803
# 214 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 216 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FAE3
# 217 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA829
# 218 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FAE3::
# 223 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE110_512, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA877, Naranja_Route110_G00_M25_Text_081BA8CD
# 224 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA8E9
# 225 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId15::
# 230 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_341, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA913, Naranja_Route110_G00_M25_Text_081BA93C
# 231 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA94A
# 232 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId27::
# 237 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_351, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA22C, Naranja_Route110_G00_M25_Text_081BA264
# 238 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA27C
# 239 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId9::
# 244 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_352, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA2D4, Naranja_Route110_G00_M25_Text_081BA2FC
# 245 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA30C
# 246 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M_LocalId11::
# 251 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_353, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA352, Naranja_Route110_G00_M25_Text_081BA379
# 252 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 253 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 254 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FB66
# 255 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA3A5
# 256 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FB66::
# 261 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE110_353, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA3EF, Naranja_Route110_G00_M25_Text_081BA432
# 262 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA456
# 263 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F_LocalId8::
# 268 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_359, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA5FF, Naranja_Route110_G00_M25_Text_081BA63C
# 269 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA65F
# 270 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F_LocalId10::
# 275 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_358, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA4A0, Naranja_Route110_G00_M25_Text_081BA50F
# 276 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 277 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 278 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FBBB
# 279 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA52E
# 280 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FBBB::
# 285 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE110_358, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA573, Naranja_Route110_G00_M25_Text_081BA5A1
# 286 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA5C4
# 287 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId31::
# 292 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_302, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BA990, Naranja_Route110_G00_M25_Text_081BA9D0
# 293 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 294 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 295 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FBF9
# 296 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BA9E9
# 297 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FBF9::
# 302 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE110_302, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BAA2D, Naranja_Route110_G00_M25_Text_081BAA76
# 303 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BAA8F
# 304 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId30::
# 309 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_334, LOCALID_NONE, Naranja_Route110_G00_M25_Text_081BAAC3, Naranja_Route110_G00_M25_Text_081BAAF7
# 310 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_081BAB19
# 311 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 6
	end


Naranja_Route110_G00_M25_EventScript_Trigger_3::
# 316 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_0x8008, 1
# 317 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FD34
	return


Naranja_Route110_G00_M25_EventScript_Trigger_4::
# 321 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_0x8008, 2
# 322 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FD34
	return


Naranja_Route110_G00_M25_EventScript_Trigger_5::
# 326 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_0x8008, 3
# 327 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FD34
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FD34::
# 331 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	lockall
# 332 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	checkplayergender
# 333 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 334 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDA7
# 335 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 336 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDAC
# 337 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 338 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 339 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 340 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 341 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 342 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 343 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	delay 0x1E
# 344 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 345 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF14
# 346 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 347 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF1F
# 348 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 349 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF2A
# 350 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	checkplayergender
# 351 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 352 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDB1
# 353 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 354 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE2B
# 355 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FDA7::
# 360 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FDAC::
# 365 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FDB1::
# 370 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E7A1
# 371 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 372 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 373 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 374 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDE0
# 375 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 376 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FDF0
# 377 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 378 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE00
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FDE0::
# 383 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE110_533, LOCALID_NONE, Naranja_Route110_G00_M25_Text_0816E826
# 384 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE10
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FDF0::
# 388 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE110_536, LOCALID_NONE, Naranja_Route110_G00_M25_Text_0816E826
# 389 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE10
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE00::
# 393 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE110_530, LOCALID_NONE, Naranja_Route110_G00_M25_Text_0816E826
# 394 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE10
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE10::
# 398 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E84C
# 399 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 400 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call Naranja_Route110_G00_M25_EventScript_Sub_0814FEA5
# 401 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E8B3
# 402 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 403 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FEB2
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE2B::
# 407 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816E99A
# 408 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 409 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 410 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 411 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE5A
# 412 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 413 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE6A
# 414 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 415 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FE7A
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FE5A::
# 420 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE110_524, LOCALID_NONE, Naranja_Route110_G00_M25_Text_0816EA0F
# 421 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE6A::
# 425 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE110_527, LOCALID_NONE, Naranja_Route110_G00_M25_Text_0816EA0F
# 426 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE7A::
# 430 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE110_521, LOCALID_NONE, Naranja_Route110_G00_M25_Text_0816EA0F
# 431 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FE8A::
# 435 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EA2A
# 436 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 437 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call Naranja_Route110_G00_M25_EventScript_Sub_0814FEA5
# 438 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	loadword 0, Naranja_Route110_G00_M25_Text_0816EA7B
# 439 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 4
# 440 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	goto Naranja_Route110_G00_M25_EventScript_Sub_0814FEB2
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FEA5::
# 444 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 0x105
# 445 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 446 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 0
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FEB2::
# 451 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	closemessage
# 452 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 453 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF56
# 454 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 455 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF5E
# 456 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 457 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF66
# 458 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_G00_M25_VARS, 0xA
# 459 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_G00_M25_243, 0xA
# 460 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	removeobject LOCALID_ROUTE110_G00_M25_VARS
# 461 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	addobject LOCALID_ROUTE110_G00_M25_243
# 462 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	delay 0x2D
# 463 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 464 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF35
# 465 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 466 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF40
# 467 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 468 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	call_if EQUAL, Naranja_Route110_G00_M25_EventScript_Sub_0814FF4B
# 469 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	removeobject LOCALID_ROUTE110_G00_M25_243
# 470 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_STORY_STATE, 1
# 471 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	savebgm MUS_DUMMY
# 472 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	fadedefaultbgm
# 473 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	releaseall
	end


Naranja_Route110_G00_M25_EventScript_Sub_0814FF14::
# 478 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_Route110_G00_M25_Movement_0814FF6E
# 479 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF1F::
# 484 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_Route110_G00_M25_Movement_0814FF72
# 485 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF2A::
# 490 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_VARS, Naranja_Route110_G00_M25_Movement_0814FF74
# 491 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF35::
# 496 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_243, Naranja_Route110_G00_M25_Movement_0814FF78
# 497 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF40::
# 502 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_243, Naranja_Route110_G00_M25_Movement_0814FF80
# 503 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF4B::
# 508 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	applymovement LOCALID_ROUTE110_G00_M25_243, Naranja_Route110_G00_M25_Movement_0814FF89
# 509 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF56::
# 514 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G00_M25_243, 0x21, 0x37
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF5E::
# 519 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G00_M25_243, 0x22, 0x37
	return


Naranja_Route110_G00_M25_EventScript_Sub_0814FF66::
# 524 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_G00_M25_243, 0x23, 0x37
	return


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 529 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 530 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 531 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 1
	end


Naranja_Route110_G00_M25_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId19::
# 536 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4A
# 537 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 538 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	callstd 1
	end


# 542 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF6E:
# 543 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_down
# 544 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_left
# 545 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_in_place_faster_down
	step_end

# 548 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF72:
# 549 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_down
	step_end

# 552 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF74:
# 553 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_down
# 554 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_right
# 555 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_in_place_faster_down
	step_end

# 558 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF78:
# 559 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 560 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 561 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 562 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 563 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 564 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 565 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
	step_end

# 568 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF80:
# 569 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 570 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 571 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 572 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 573 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 574 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 575 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 576 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_down
	step_end

# 579 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
Naranja_Route110_G00_M25_Movement_0814FF89:
# 580 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 581 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 582 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 583 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 584 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 585 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
# 586 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	walk_fast_up
	step_end

Naranja_Route110_G00_M25_Text_0816E6C0::
# 589 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TEAM {AQUA}’s activities must be kept\nsecret for now.$"

Naranja_Route110_G00_M25_Text_0816E6F2::
# 593 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I want to get going to SLATEPORT and\nkick up a ruckus!$"

Naranja_Route110_G00_M25_Text_0816E729::
# 597 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "This is my first job after joining\nTEAM {AQUA}. I’ve got the shakes!$"

Naranja_Route110_G00_M25_Text_0816E76A::
# 601 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TEAM {AQUA}’s actions will put a smile\non everyone’s face!$"

Naranja_Route110_G00_M25_Text_0816E7A1::
# 605 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\pWhile I was searching for other\nPOKéMON, my POKéMON grew stronger.\pSo...\nHow about a little battle?$"

Naranja_Route110_G00_M25_Text_0816E826::
# 609 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Yikes!\nYou’re better than I expected!$"

Naranja_Route110_G00_M25_Text_0816E84C::
# 613 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you’ve been busy\ntraining, too, haven’t you?\pI think you deserve a reward!\nThis is from me!$"

Naranja_Route110_G00_M25_Text_0816E8B3::
# 617 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "MAY: That’s an ITEMFINDER.\pTry it out. If there is an item that’s\nnot visible, it emits a sound.\pOkay, {PLAYER}{KUN}, let’s meet again!\pI know it’s a little silly coming from\nme, but I think you should train a lot\lharder for the next time.$"

Naranja_Route110_G00_M25_Text_0816E99A::
# 621 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\nSo this is where you were.\lHow’s it going?\pHave you been raising your POKéMON?\nI’ll check for you.$"

Naranja_Route110_G00_M25_Text_0816EA0F::
# 625 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Hmm...\nYou’re pretty good.$"

Naranja_Route110_G00_M25_Text_0816EA2A::
# 629 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "BRENDAN: {PLAYER}, you’ve trained\nwithout me noticing...\pGood enough!\nHere, take this.$"

Naranja_Route110_G00_M25_Text_0816EA7B::
# 633 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "BRENDAN: That’s an ITEMFINDER.\pUse it to root around for items that\naren’t visible.\pIf it senses something, it emits a\nsound.\pAnyway, I’m off to look for new\nPOKéMON.$"

Naranja_Route110_G00_M25_Text_0816EB22::
# 637 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Wouldn’t it be great to ride a BIKE\nat full speed on CYCLING ROAD?$"

Naranja_Route110_G00_M25_Text_0816EB65::
# 641 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "How do you like the way my raven-\ncolored hair streams behind me?\pI grew my hair out just for that.$"

Naranja_Route110_G00_M25_Text_0816EBC9::
# 645 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\pOh, it’s glaringly obvious.\nIt says right on your bike...\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\nRYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\pRYDEL, RYDEL, RYDEL, RYDEL, RYDEL...\nThat name’s everywhere.\pYou should ride it around all over\nthe place - it’s good advertising!$"

Naranja_Route110_G00_M25_Text_0816EDC5::
# 649 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "The two roads, one above, one below...\pA road each for people and POKéMON.\nPerhaps that is right and fair.$"

Naranja_Route110_G00_M25_Text_0816EE30::
# 653 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I don’t have a BIKE, so I’ll take a\nleisurely walk on the low road.$"

Naranja_Route110_G00_M25_Text_0816EE74::
# 657 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Learning techniques will make BIKE\nriding even more fun.\pThere are some places that you can\nreach only by using a BIKE technique.$"

Naranja_Route110_G00_M25_Text_0816EEF6::
# 661 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Which should I choose?\pMake a beeline for MAUVILLE on\nCYCLING ROAD, or take the low road\land look for POKéMON?$"

Naranja_Route110_G00_M25_Text_0816F1D0::
# 665 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "This is CYCLING ROAD.\pIf you were to ride from MAUVILLE to\nSLATEPORT on a MACH BIKE, you would\lbe rated for the number of collisions\land your total time.$"

Naranja_Route110_G00_M25_Text_0816F26A::
# 669 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Regardless of the results, I count on\nseeing more challenges from you.\lAlways aim higher!$"

Naranja_Route110_G00_M25_Text_0816F2C4::
# 673 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "On this CYCLING ROAD, those riding\nMACH BIKES are rated for their number\lof collisions and their total times.\pACRO BIKES do not qualify for rating.\nThey are easy to turn, so it’s not fair.$"

Naranja_Route110_G00_M25_Text_0816F381::
# 677 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "ROUTE 110\nレ SLATEPORT CITY$"

Naranja_Route110_G00_M25_Text_0816F39C::
# 681 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"

Naranja_Route110_G00_M25_Text_0816F3B1::
# 685 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "“TEAM {AQUA} RULEZ!”\pSomebody scribbled that on the sign...$"

Naranja_Route110_G00_M25_Text_0816F3E9::
# 689 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "ROUTE 110\nロ ROUTE 103$"

Naranja_Route110_G00_M25_Text_0816F3FF::
# 693 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "SEASIDE PARKING$"

Naranja_Route110_G00_M25_Text_0816F40F::
# 697 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "ROUTE 110\nル MAUVILLE CITY$"

Naranja_Route110_G00_M25_Text_0816F429::
# 701 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TRAINER TIPS\pThe foe can be made helpless by\nparalyzing it or causing it to sleep.\pIt is an important technique for\nPOKéMON battles.$"

Naranja_Route110_G00_M25_Text_0816F4AE::
# 705 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "TRAINER TIPS\pThe items in the BAG can be reorganized\nby pressing SELECT.$"

Naranja_Route110_G00_M25_Text_0816F4F7::
# 709 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "“Three steps ワ and two steps ル\nto reach the wondrous TRICK HOUSE.”$"

Naranja_Route110_G00_M25_Text_0816F53A::
# 713 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "THE BEST RECORD TO DATE...\pNo. of collisions: {STR_VAR_1}\pElapsed time: {STR_VAR_2}$"

Naranja_Route110_G00_M25_Text_0816F57C::
# 717 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "THE BEST RECORD TO DATE...\pNo one seems to have taken the\nchallenge. There is no record...$"

Naranja_Route110_G00_M25_Text_081BA22C::
# 721 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Whoa! Watch it!\nI guess you’re not used to BIKE racing.$"

Naranja_Route110_G00_M25_Text_081BA264::
# 725 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Whoa!\nMy brakes failed!$"

Naranja_Route110_G00_M25_Text_081BA27C::
# 729 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Flat tires and brake problems can\ncause serious injury!\lInspect your BIKE for problems!$"

Naranja_Route110_G00_M25_Text_081BA2D4::
# 733 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Yo, you!\nCan you keep up with my speed?$"

Naranja_Route110_G00_M25_Text_081BA2FC::
# 737 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Crash and burn!$"

Naranja_Route110_G00_M25_Text_081BA30C::
# 741 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Speed alone won’t let me win at POKéMON.\nI need to reconsider this...$"

Naranja_Route110_G00_M25_Text_081BA352::
# 745 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Don’t panic if your BIKE’s going fast!$"

Naranja_Route110_G00_M25_Text_081BA379::
# 749 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I shouldn’t panic during POKéMON\nbattles...$"

Naranja_Route110_G00_M25_Text_081BA3A5::
# 753 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "There’s no need to panic or stress.\nTake it easy. There’s plenty of time.$"

Naranja_Route110_G00_M25_Text_081BA3EF::
# 757 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Aren’t you going a little too fast?\nTake it easy and let’s battle.$"

Naranja_Route110_G00_M25_Text_081BA432::
# 761 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I didn’t panic, but I still lost...$"

Naranja_Route110_G00_M25_Text_081BA456::
# 765 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "There’s no need to panic or stress.\nTake it easy. There’s plenty of time.$"

Naranja_Route110_G00_M25_Text_081BA4A0::
# 769 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "The triathlon is hard in the extreme.\pYou have to complete the three events\nof swimming, cycling, and running.$"

Naranja_Route110_G00_M25_Text_081BA50F::
# 773 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "POKéMON battles are hard, too!$"

Naranja_Route110_G00_M25_Text_081BA52E::
# 777 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I’m exhausted, so I need a break.\nIt’s important to get proper rest.$"

Naranja_Route110_G00_M25_Text_081BA573::
# 781 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Isn’t it neat to hold a battle while\ncycling?$"

Naranja_Route110_G00_M25_Text_081BA5A1::
# 785 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Wow...\nHow could you be so strong?$"

Naranja_Route110_G00_M25_Text_081BA5C4::
# 789 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Were you going after a record?\pI’m sorry if I held you up!$"

Naranja_Route110_G00_M25_Text_081BA5FF::
# 793 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I’ve been riding without stopping.\nMy thighs are like rocks!$"

Naranja_Route110_G00_M25_Text_081BA63C::
# 797 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I’m worried about muscle cramps...$"

Naranja_Route110_G00_M25_Text_081BA65F::
# 801 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, you have some GYM BADGES?\nNo wonder you’re so strong!$"

Naranja_Route110_G00_M25_Text_081BA699::
# 805 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I have foreseen your intentions!\nI cannot possibly lose!$"

Naranja_Route110_G00_M25_Text_081BA6D2::
# 809 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I failed to prophesize my own demise!$"

Naranja_Route110_G00_M25_Text_081BA6F8::
# 813 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I see your future...\pHmm...\nI see a shining light...$"

Naranja_Route110_G00_M25_Text_081BA72D::
# 817 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Ahahahaha!\nI’ll dazzle you with my wonders!$"

Naranja_Route110_G00_M25_Text_081BA759::
# 821 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I wondrously lost!$"

Naranja_Route110_G00_M25_Text_081BA76C::
# 825 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "You managed to win only because it was\na wonder! Yes, a wonder!\lDon’t think you can win all the time!$"

Naranja_Route110_G00_M25_Text_081BA7D2::
# 829 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Could I see your POKéMON?\nJust one look, please?$"

Naranja_Route110_G00_M25_Text_081BA803::
# 833 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I wanted to complete my\ncollection...$"

Naranja_Route110_G00_M25_Text_081BA829::
# 837 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "When I see a POKéMON that I don’t know,\nmy passion as a collector is ignited!$"

Naranja_Route110_G00_M25_Text_081BA877::
# 841 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Hi, have you caught any new POKéMON?\pCould I see your POKéMON?\nJust one look, please?$"

Naranja_Route110_G00_M25_Text_081BA8CD::
# 845 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Your POKéMON...\nI envy you.$"

Naranja_Route110_G00_M25_Text_081BA8E9::
# 849 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, I long to make all rare POKéMON\nmine!$"

Naranja_Route110_G00_M25_Text_081BA913::
# 853 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Hey!\nDon’t sneak up behind me like that!$"

Naranja_Route110_G00_M25_Text_081BA93C::
# 857 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I lost!\nDrat!$"

Naranja_Route110_G00_M25_Text_081BA94A::
# 861 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Fishing is all about concentration.\nYou have to focus on the floater.$"

Naranja_Route110_G00_M25_Text_081BA990::
# 865 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Ahahaha! I would go anywhere to show\noff my delightful POKéMON.$"

Naranja_Route110_G00_M25_Text_081BA9D0::
# 869 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, dear, this won’t do.$"

Naranja_Route110_G00_M25_Text_081BA9E9::
# 873 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Perhaps I should groom my POKéMON for\nCONTESTS rather than battles.$"

Naranja_Route110_G00_M25_Text_081BAA2D::
# 877 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Ahahahaha! I would be happy to show\noff my POKéMON as often as you like!$"

Naranja_Route110_G00_M25_Text_081BAA76::
# 881 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Oh, dear, this won’t do.$"

Naranja_Route110_G00_M25_Text_081BAA8F::
# 885 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "CONTESTS are delightful, but I like\nto battle, too.$"

Naranja_Route110_G00_M25_Text_081BAAC3::
# 889 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "I found some cool POKéMON in the grass\naround here!$"

Naranja_Route110_G00_M25_Text_081BAAF7::
# 893 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "Being cool isn’t enough to win...$"

Naranja_Route110_G00_M25_Text_081BAB19::
# 897 "data/maps/Naranja_Route110_G00_M25/scripts.pory"
	.string "It’s hard to battle with POKéMON you\njust caught.$"
