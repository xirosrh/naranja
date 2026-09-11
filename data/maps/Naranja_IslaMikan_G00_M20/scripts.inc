Naranja_IslaMikan_G00_M20_MapScripts::
# 5 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaMikan_G00_M20_OnLoad
	.byte 0


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 9 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 10 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 11 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 12 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814CC0E
# 13 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_08168750
# 14 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814CC0E::
# 20 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 23 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId6
# 24 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081689BF
# 25 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId16::
# 31 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 32 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 33 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_00F6
# 34 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EEFF
# 35 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081C55B9
# 36 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1D
# 38 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 2
# 39 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 0
# 40 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 41 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 42 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_00F6
# 43 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081C5665
# 44 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EEFF::
# 50 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081C5665
# 51 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_1::
# 57 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DEB3
# 58 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 3
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_2::
# 63 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DEC8
# 64 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 3
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_3::
# 69 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086BF474
# 70 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 3
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_4::
# 75 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DEFD
# 76 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 3
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_5::
# 81 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DF16
# 82 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 3
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId4::
# 87 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DAC9
# 88 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 2
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId32::
# 93 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 94 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 95 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0106
# 96 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EFC2
# 97 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DC5F
# 98 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBB
# 100 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 101 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 0
# 102 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 103 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 104 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0106
# 105 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EFC2::
# 110 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DD0E
# 111 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 112 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId6::
# 117 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0816DBC9
# 118 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 2
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId28::
# 123 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_319, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B86BE, Naranja_IslaMikan_G00_M20_Text_081B86E8
# 124 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B871C
# 125 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId3::
# 130 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_604, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8770, Naranja_IslaMikan_G00_M20_Text_081B87A7
# 131 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 132 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 133 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F1C7
# 134 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B87C3
# 135 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F1C7::
# 140 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_604, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8839, Naranja_IslaMikan_G00_M20_Text_081B8852
# 141 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B8872
# 142 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId26::
# 147 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_114, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8A24, Naranja_IslaMikan_G00_M20_Text_081B8A61
# 148 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 149 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 150 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F243
# 151 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B8A69
# 152 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F243::
# 157 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_114, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8AA7, Naranja_IslaMikan_G00_M20_Text_081B8AD9
# 158 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B8B02
# 159 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId23::
# 164 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLA_MIKAN_483, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B83E9, Naranja_IslaMikan_G00_M20_Text_081B8414, Naranja_IslaMikan_G00_M20_Text_081B845C
# 165 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special GetPlayerBigGuyGirlString
# 166 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B842C
# 167 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 168 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId24::
# 173 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLA_MIKAN_483, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B84DB, Naranja_IslaMikan_G00_M20_Text_081B850D, Naranja_IslaMikan_G00_M20_Text_081B8577
# 174 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special GetPlayerBigGuyGirlString
# 175 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081B853B
# 176 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 177 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_OnLoad::
# 182 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 183 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F2A8
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F2A8::
# 188 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setmetatile 5, 0x3C, 0x151, 1
# 189 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setmetatile 5, 0x3D, 0x159, 1
	return


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId25::
# 194 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_545, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BD634, Naranja_IslaMikan_G00_M20_Text_081BD67B
# 195 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 196 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 197 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_08150DF2
# 198 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C47
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_08150DF2::
# 202 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_545, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BD6F2, Naranja_IslaMikan_G00_M20_Text_081BD733
# 203 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081BD74F
# 204 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId22::
# 209 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_196, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BE3E8, Naranja_IslaMikan_G00_M20_Text_081BE406
# 210 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 211 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 212 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_08151122
# 213 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081BE413
# 214 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_08151122::
# 219 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_196, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BE489, Naranja_IslaMikan_G00_M20_Text_081BE4CC
# 220 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081BE4D9
# 221 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId9::
# 226 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_405, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BEFC8, Naranja_IslaMikan_G00_M20_Text_081BF000
# 227 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081BF015
# 228 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WALLY_LocalId11::
# 233 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 234 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0818337E
# 235 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 236 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_08183422
# 238 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitfanfare
# 239 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 240 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0802
# 241 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 242 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMikan_G00_M20_Movement_08157812
# 243 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_ISLA_MIKAN_G00_M20_WALLY, Naranja_IslaMikan_G00_M20_Movement_08157835
# 244 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmovement LOCALID_NONE
# 245 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_0818394A
# 246 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 247 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId2::
# 252 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 253 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 254 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitse
# 255 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 256 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_08191FB9
# 257 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 258 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmoncry
# 259 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A::
# 264 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId21::
# 269 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 270 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 271 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 1
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId27::
# 276 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 4
# 277 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 278 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 1
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId14::
# 283 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4E
# 284 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 285 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 1
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C3D::
# 290 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_081BD69B
# 291 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
# 292 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C47::
# 297 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 298 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C3D
# 299 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 300 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E79E
# 301 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B8CCA
# 302 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 303 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkpartymove MOVE_THUNDER_SHOCK
# 304 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 305 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C72
# 306 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkpartymove MOVE_THUNDERBOLT
# 307 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C72
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C72::
# 311 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 312 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8ED0
# 313 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 314 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 315 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lockall
# 316 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 317 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 318 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 319 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 320 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	closemessage
# 321 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	dofieldeffect 0x25
# 322 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitstate
# 323 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x10
# 324 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8E80
# 325 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId9
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8E80::
# 329 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x50
# 330 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMikan_G00_M20_Movement_086B8CBA
# 331 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x30
# 332 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playse SE_M_DETECT
# 333 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 0, 8
# 334 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 1, 0x4B
# 335 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 2, 0
# 336 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	dofieldeffect 0x36
# 337 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x10
# 338 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	fadescreen 2
# 339 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_ISLA_MIKAN_G00_M20_GIRL_2, Naranja_IslaMikan_G00_M20_Movement_086B8CB8
# 340 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0xA0
# 341 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playse SE_M_DETECT
# 342 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 0, 8
# 343 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 1, 0x4B
# 344 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 2, 0
# 345 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	dofieldeffect 0x36
# 346 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 5
# 347 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	fadescreen 2
# 348 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMikan_G00_M20_Movement_086B8CC7
# 349 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8ED0::
# 354 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B8E67
# 355 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 4
# 356 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F10::
# 361 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 362 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43
# 363 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkitem ITEM_MOOMOO_MILK, 0
# 364 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 365 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8FA6
# 366 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F29
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F29::
# 370 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkitem ITEM_FRESH_WATER, 0
# 371 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 372 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F7E
# 373 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B8FD0
# 374 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43::
# 379 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 380 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73
# 381 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 382 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 383 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 384 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B8FEF
# 385 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 5
# 386 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 387 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 388 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setwildbattle SPECIES_SURSKIT, 5, 0
# 389 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73::
# 394 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B9138
# 395 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
# 396 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F7E::
# 401 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B90BD
# 402 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 5
# 403 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 404 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 405 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 406 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 407 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 408 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B90F8
# 409 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8FA6::
# 414 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B9039
# 415 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 5
# 416 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 417 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F29
# 418 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	removeitem ITEM_MOOMOO_MILK, 1
# 419 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 420 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 421 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	loadword 0, Naranja_IslaMikan_G00_M20_Text_086B907B
# 422 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_PICHU_DOLL_LocalId15::
# 427 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 428 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F10
# 429 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 430 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73
# 431 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2142
# 432 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43
# 433 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 434 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B92C0
# 435 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 436 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B9240
# 437 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A::
# 441 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 442 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 443 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 444 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 445 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
# 446 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 447 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 448 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special RockSmashWildEncounter
# 449 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 450 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A
# 451 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitstate
# 452 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	releaseall
# 453 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 454 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x40
# 455 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 456 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B9240::
# 461 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2135
# 462 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 463 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 464 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 465 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 466 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2135
# 467 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 468 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
# 469 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 470 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitse
# 471 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playmoncry SPECIES_KECLEON, 0
# 472 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 473 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x40
# 474 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 475 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setwildbattle SPECIES_KECLEON, 0xF, 0
# 476 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B92C0::
# 481 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2137
# 482 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 483 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 484 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 485 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 486 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2137
# 487 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 488 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
# 489 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 490 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitse
# 491 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playmoncry SPECIES_TREECKO, 0
# 492 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 493 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x40
# 494 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 495 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setwildbattle SPECIES_TREECKO, 0x14, 0
# 496 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


# 500 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_08157812:
# 501 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 502 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 505 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_08157835:
# 506 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	jump_special_up
# 507 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	walk_up
# 508 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	walk_up
# 509 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	jump_2_up
# 510 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_invisible
	step_end

# 513 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_086B8CB8:
# 514 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	emote_exclamation_mark
	step_end

# 517 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_086B8CBA:
# 518 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	face_left
# 519 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_4
# 520 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	face_right
# 521 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_4
# 522 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	face_up
# 523 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 524 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 525 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 526 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_invisible
# 527 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_8
# 528 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_invisible
	step_end

# 531 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_086B8CC7:
# 532 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_visible
	step_end

Naranja_IslaMikan_G00_M20_Text_08168750::
# 535 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "La fauna marina es riquìsima y variada\nen las {COLOR 0x0E}Islas Naranjas.$"

Naranja_IslaMikan_G00_M20_Text_081689BF::
# 539 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Vaya barbaridad!\n¡Ese petrolero encalló!\pEl incompetente de su capitán\nlo hizo chocar contra esas peñas.\pAvisa a JOY de NAVEL\nella nos podrá ayudar.$"

Naranja_IslaMikan_G00_M20_Text_0816DAC9::
# 543 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "If you’re going to throw a POKé BALL,\nweaken the wild POKéMON first.\pIt will be easier to catch if it’s been\npoisoned, burned, or lulled to sleep.$"

Naranja_IslaMikan_G00_M20_Text_0816DBC9::
# 547 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Oh, no, I’m not a TRAINER.\pBut that’s right, if TRAINERS lock eyes,\nit’s a challenge to battle.\pIf you don’t want to battle, stay out\nof their sight.$"

Naranja_IslaMikan_G00_M20_Text_0816DC5F::
# 551 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Cuando sólo quieres llegar alto,\nes porque estás por los suelos.\pSi no controlas tu ego, \nte hundirás en el oceáno.\p¿Para que usarás esta corona?\n¿Si no reinas en tu corazón?$"

Naranja_IslaMikan_G00_M20_Text_0816DD0E::
# 555 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Si solo te consuela\nque te alaben.\pAsì no dejarás de ser\nun infeliz.$"

Naranja_IslaMikan_G00_M20_Text_0816DEB3::
# 559 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "{COLOR 0x06}¡Viaja en Lancha!$"

Naranja_IslaMikan_G00_M20_Text_0816DEC8::
# 563 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Gimnasio Isla MIKAN\nLíder: SISSY\l“Veloz sirena’$"

Naranja_IslaMikan_G00_M20_Text_0816DEFD::
# 567 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"

Naranja_IslaMikan_G00_M20_Text_0816DF16::
# 571 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Bienvenido a Pueblo PALETA\nSe te ha hecho corto el viaje, verdad.\pEs lo que tiene nuestra linea\nde zepelín…\p…viajes de gran lujo.\pNo te culpo de volver a queres montar\npero consigue un billete de zepelín\lprimero, ¿va?\l$"

Naranja_IslaMikan_G00_M20_Text_0818337E::
# 575 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "TRACEY: ¡Hola {PLAYER}!\pPara que no te pierdas  \nacepta este POKéNAVEGADOR.\pTiene muchas funciones\ncomo un mapa.\pPero ahora sigue el camino\nque al final SISSY te espera.$"

Naranja_IslaMikan_G00_M20_Text_08183422::
# 579 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"

Naranja_IslaMikan_G00_M20_Text_0818394A::
# 583 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡SURFEA MARRIL!$"

Naranja_IslaMikan_G00_M20_Text_08191FB9::
# 587 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "PEEKO: Pii pihyoroo!$"

Naranja_IslaMikan_G00_M20_Text_081B83E9::
# 591 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: Okay, let’s battle with our\nPOKéMON!$"

Naranja_IslaMikan_G00_M20_Text_081B8414::
# 595 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: Losing upsets me!$"

Naranja_IslaMikan_G00_M20_Text_081B842C::
# 599 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: {STR_VAR_1} is strong!\nWe have to train lots more!$"

Naranja_IslaMikan_G00_M20_Text_081B845C::
# 603 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: Oh? Only one POKéMON?\nThen, we don’t battle with you.\pIf there’s only one POKéMON, it will\nbe lonesome. That’s not nice.$"

Naranja_IslaMikan_G00_M20_Text_081B84DB::
# 607 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: We are twins, so we battle\nPOKéMON together.$"

Naranja_IslaMikan_G00_M20_Text_081B850D::
# 611 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: We battled together, but we\nboth lost...$"

Naranja_IslaMikan_G00_M20_Text_081B853B::
# 615 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: We will train our POKéMON more\nand be strong like you.$"

Naranja_IslaMikan_G00_M20_Text_081B8577::
# 619 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: You want to battle with us?\pIt’s a big no-no if you don’t have two\nPOKéMON with you.\lWe’re too strong for you!$"

Naranja_IslaMikan_G00_M20_Text_081B86BE::
# 623 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¿Estás atascado pequeñ{RIVAL}? \p{COLOR 0x04}{PLAYER}: ¡Habló!$"

Naranja_IslaMikan_G00_M20_Text_081B86E8::
# 627 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Estás amargad{RIVAL} porque   \nno encuentras el camino!$"

Naranja_IslaMikan_G00_M20_Text_081B871C::
# 631 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Si pierdo algo\nbusco bajo mi cama.\p{COLOR 0x04}Eso no me ayudará.\p{COLOR 0x01}No dije que te ayudarìa$"

Naranja_IslaMikan_G00_M20_Text_081B8770::
# 635 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Deberìa…\no no?\p¡Vale!\n¡Pelearé!\p¡Serás tú quien sufra!$"

Naranja_IslaMikan_G00_M20_Text_081B87A7::
# 639 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Buá!\p+1\pEstoy acostumbrada$"

Naranja_IslaMikan_G00_M20_Text_081B87C3::
# 643 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Bueno no siempre se gana.\pMe alegro mucho de haber luchado   \ntodo lo que pude contra un entrenador\lcomo tú.\p¡Suerte!$"

Naranja_IslaMikan_G00_M20_Text_081B8839::
# 647 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Come on, battle with me!$"

Naranja_IslaMikan_G00_M20_Text_081B8852::
# 651 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Ohh...\nI thought I could win...$"

Naranja_IslaMikan_G00_M20_Text_081B8872::
# 655 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "I made the decision to battle, so I\ncan accept this loss in grace.\pI am still upset about losing!$"

Naranja_IslaMikan_G00_M20_Text_081B8A24::
# 659 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Las flores pueden hacer que todo\na nuestro alrededor brille.$"

Naranja_IslaMikan_G00_M20_Text_081B8A61::
# 663 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Vaya! $"

Naranja_IslaMikan_G00_M20_Text_081B8A69::
# 667 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Toma todas las flores que quieras,   \nno pueden hacerte daño.$"

Naranja_IslaMikan_G00_M20_Text_081B8AA7::
# 671 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Hello, we meet again.\nMay I ask you for a battle?$"

Naranja_IslaMikan_G00_M20_Text_081B8AD9::
# 675 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Oh, my...\nI did the best that I could...$"

Naranja_IslaMikan_G00_M20_Text_081B8B02::
# 679 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "“Hello” is the beginning of “good-bye.”\nI hope we meet again.$"

Naranja_IslaMikan_G00_M20_Text_081BD634::
# 683 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Me descubriste!\pDéjame comprobar si dominas \nel arte de la imitación.$"

Naranja_IslaMikan_G00_M20_Text_081BD67B::
# 687 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Si mejoras te haré un regalo.  $"

Naranja_IslaMikan_G00_M20_Text_081BD69B::
# 691 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Cambatiste mis POKéMON \nen un visto y no visto.\pPero sube más tu nivel y te daré algo.$"

Naranja_IslaMikan_G00_M20_Text_081BD6F2::
# 695 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Ojalá hayas mejorado aún más\ntus artes de camuflaje\p¡En guardia!$"

Naranja_IslaMikan_G00_M20_Text_081BD733::
# 699 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Guau! \nHas mejorado mucho.$"

Naranja_IslaMikan_G00_M20_Text_081BD74F::
# 703 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Camuflarse requiere control absoluto\ny un sacrificio constante entrenando.$"

Naranja_IslaMikan_G00_M20_Text_081BE3E8::
# 707 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Let my melody rock your soul!$"

Naranja_IslaMikan_G00_M20_Text_081BE406::
# 711 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "La-lalala...$"

Naranja_IslaMikan_G00_M20_Text_081BE413::
# 715 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "An electric guitar doesn’t always\nhave to be noisy...\pIt can be strummed to squeeze out\nthis heart-stirring melody...$"

Naranja_IslaMikan_G00_M20_Text_081BE489::
# 719 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "A melody from my POKéMON and me...\nLet us deliver it to your soul.$"

Naranja_IslaMikan_G00_M20_Text_081BE4CC::
# 723 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "La-lalala...$"

Naranja_IslaMikan_G00_M20_Text_081BE4D9::
# 727 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "When I play, my emotions should reach\nyou through my electric guitar...$"

Naranja_IslaMikan_G00_M20_Text_081BEFC8::
# 731 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Do you have any moves that can strike\na flying POKéMON?$"

Naranja_IslaMikan_G00_M20_Text_081BF000::
# 735 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "You soared above me!$"

Naranja_IslaMikan_G00_M20_Text_081BF015::
# 739 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "The move FLY is convenient, don’t\nyou think?\pWhile the POKéMON is flying, almost\nno moves can strike it.$"

Naranja_IslaMikan_G00_M20_Text_081C55B9::
# 743 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¿Viste los POKé-BEBEDEROS?\pLlénalos de lìquido, \nespera un rato\ly si tienes suerte aparecerán\lPOKéMON que solo puedes capturar asì.\pA veces vienen algunos raros.\pTen esto.$"

Naranja_IslaMikan_G00_M20_Text_081C5665::
# 747 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Puedes llenar los POKé-BEBEDEROS\nde LECHE o de AGUA.\pParece que los POKéMON \nsuelen preferir la LECHE.\p¡Vigila bien siempre los bebederos!$"

Naranja_IslaMikan_G00_M20_Text_086B8CCA::
# 751 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIMA: Veo que derrotaste a SISSY.\pAunque el tipo agua sea\nmás debil que los POKéMON vegetales,\lvencer a SISSY es una gran hazaña. \pAunque no todo es lucha, {PLAYER}.\nEnséñame como dominas\lel arte del camuflaje\ly te daré algo que seguro te será útil.\p{COLOR 0x04}{PLAYER}: ¿Cómo camuflarme?\nNo me sé nigún truco.\p{COLOR 0x01}MIMA: Un entrenador debe contar\ncon las técnicas de sus POKéMON\lsi quiere camuflarse.\pTu POKéMON preferido te ayudará.$"

Naranja_IslaMikan_G00_M20_Text_086B8E67::
# 755 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¿O no lo llevas encima?$"

Naranja_IslaMikan_G00_M20_Text_086B8FD0::
# 759 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO está vacìo.$"

Naranja_IslaMikan_G00_M20_Text_086B8FEF::
# 763 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Argh!\nEl lìquido que habìa se llenó de bichos.\p¿Quieres combatir alguno?$"

Naranja_IslaMikan_G00_M20_Text_086B9039::
# 767 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO está vacìo.\n¿Quieres llenarlo con LECHE MO-MO?$"

Naranja_IslaMikan_G00_M20_Text_086B907B::
# 771 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Llenaste de LECHE el POKé-BEBEDERO.\n¡A los POKéMON les encantará!$"

Naranja_IslaMikan_G00_M20_Text_086B90BD::
# 775 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO está vacìo.\n¿Quieres echar AGUA FRESCA?$"

Naranja_IslaMikan_G00_M20_Text_086B90F8::
# 779 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Llenaste de AGUA el POKé-BEBEDERO.\nQuizá atraiga algún POKéMON.$"

Naranja_IslaMikan_G00_M20_Text_086B9138::
# 783 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO sigue lleno.\nAún no ha pasado el tiempo suficiente…$"

Naranja_IslaMikan_G00_M20_Text_086B917F::
# 787 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Un POKéMON se bebió la leche!\pA ver si anda por aquì…$"

Naranja_IslaMikan_G00_M20_Text_086B91B6::
# 791 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Vaya!\nParece que escapó hace tiempo.$"

Naranja_IslaMikan_G00_M20_Text_086BF474::
# 795 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Está entrando en \n{COLOR 0x0D}Isla TROVITA.$"
