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
	msgbox Naranja_IslaMikan_G00_M20_Text_08168750, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814CC0E::
# 19 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 20 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 21 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 22 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId6
# 23 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081689BF, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId16::
# 29 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 30 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 31 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_00F6
# 32 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EEFF
# 33 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081C55B9, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1D
# 35 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 2
# 36 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 0
# 37 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 39 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_00F6
# 40 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081C5665, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EEFF::
# 46 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081C5665, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_1::
# 52 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DEB3, MSGBOX_SIGN
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_2::
# 57 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DEC8, MSGBOX_SIGN
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_3::
# 62 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086BF474, MSGBOX_SIGN
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_4::
# 67 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DEFD, MSGBOX_SIGN
	end


Naranja_IslaMikan_G00_M20_EventScript_Sign_5::
# 72 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DF16, MSGBOX_SIGN
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId4::
# 77 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DAC9, MSGBOX_NPC
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId32::
# 82 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 83 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 84 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0106
# 85 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EFC2
# 86 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DC5F, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBB
# 88 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 89 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 0
# 90 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 91 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 92 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0106
# 93 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814EFC2::
# 98 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DD0E, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId6::
# 104 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0816DBC9, MSGBOX_NPC
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId28::
# 109 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_319, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B86BE, Naranja_IslaMikan_G00_M20_Text_081B86E8
# 110 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B871C, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId3::
# 115 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_604, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8770, Naranja_IslaMikan_G00_M20_Text_081B87A7
# 116 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 117 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 118 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F1C7
# 119 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B87C3, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F1C7::
# 124 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_604, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8839, Naranja_IslaMikan_G00_M20_Text_081B8852
# 125 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B8872, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId26::
# 130 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_114, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8A24, Naranja_IslaMikan_G00_M20_Text_081B8A61
# 131 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 132 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 133 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F243
# 134 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B8A69, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F243::
# 139 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_114, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B8AA7, Naranja_IslaMikan_G00_M20_Text_081B8AD9
# 140 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B8B02, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId23::
# 145 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLA_MIKAN_483, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B83E9, Naranja_IslaMikan_G00_M20_Text_081B8414, Naranja_IslaMikan_G00_M20_Text_081B845C
# 146 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special GetPlayerBigGuyGirlString
# 147 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B842C, MSGBOX_DEFAULT
# 148 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId24::
# 153 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLA_MIKAN_483, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081B84DB, Naranja_IslaMikan_G00_M20_Text_081B850D, Naranja_IslaMikan_G00_M20_Text_081B8577
# 154 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special GetPlayerBigGuyGirlString
# 155 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081B853B, MSGBOX_DEFAULT
# 156 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_OnLoad::
# 161 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 162 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F2A8
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_0814F2A8::
# 167 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setmetatile 5, 0x3C, 0x151, 1
# 168 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setmetatile 5, 0x3D, 0x159, 1
	return


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId25::
# 173 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_545, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BD634, Naranja_IslaMikan_G00_M20_Text_081BD67B
# 174 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 175 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 176 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_08150DF2
# 177 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C47
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_08150DF2::
# 181 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_545, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BD6F2, Naranja_IslaMikan_G00_M20_Text_081BD733
# 182 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081BD74F, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId22::
# 187 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_196, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BE3E8, Naranja_IslaMikan_G00_M20_Text_081BE406
# 188 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 189 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 190 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_08151122
# 191 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081BE413, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_08151122::
# 196 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ISLA_MIKAN_196, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BE489, Naranja_IslaMikan_G00_M20_Text_081BE4CC
# 197 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081BE4D9, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId9::
# 202 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MIKAN_405, LOCALID_NONE, Naranja_IslaMikan_G00_M20_Text_081BEFC8, Naranja_IslaMikan_G00_M20_Text_081BF000
# 203 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081BF015, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_TRACEY_LocalId11::
# 208 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 209 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0818337E, MSGBOX_DEFAULT
# 210 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 211 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_08183422
# 212 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitfanfare
# 213 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 214 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0802
# 215 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 216 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMikan_G00_M20_Movement_08157812
# 217 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_ISLA_MIKAN_G00_M20_WALLY, Naranja_IslaMikan_G00_M20_Movement_08157835
# 218 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmovement LOCALID_NONE
# 219 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_0818394A, MSGBOX_DEFAULT
# 220 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId2::
# 225 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lock
# 226 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	faceplayer
# 227 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitse
# 228 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 229 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_08191FB9, MSGBOX_DEFAULT
# 230 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmoncry
# 231 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A::
# 236 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId21::
# 241 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 242 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 243 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 1
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId27::
# 248 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 4
# 249 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 250 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 1
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId14::
# 255 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4E
# 256 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 257 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	callstd 1
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C3D::
# 262 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_081BD69B, MSGBOX_AUTOCLOSE
# 263 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C47::
# 268 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 269 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C3D
# 270 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 271 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G00_M12_EventScript_Sub_0814E79E
# 272 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B8CCA, MSGBOX_DEFAULT
# 273 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkpartymove MOVE_THUNDER_SHOCK
# 274 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 275 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C72
# 276 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkpartymove MOVE_THUNDERBOLT
# 277 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C72
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8C72::
# 281 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 282 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8ED0
# 283 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 284 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 285 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	lockall
# 286 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 287 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 288 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 289 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 290 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	closemessage
# 291 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	dofieldeffect 0x25
# 292 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitstate
# 293 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x10
# 294 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8E80
# 295 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_ValleCharizard_G00_M12_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId9
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8E80::
# 299 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x50
# 300 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMikan_G00_M20_Movement_086B8CBA
# 301 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x30
# 302 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playse SE_M_DETECT
# 303 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 0, 8
# 304 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 1, 0x4B
# 305 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 2, 0
# 306 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	dofieldeffect 0x36
# 307 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x10
# 308 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	fadescreen 2
# 309 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_ISLA_MIKAN_G00_M20_GIRL_2, Naranja_IslaMikan_G00_M20_Movement_086B8CB8
# 310 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0xA0
# 311 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playse SE_M_DETECT
# 312 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 0, 8
# 313 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 1, 0x4B
# 314 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setfieldeffectargument 2, 0
# 315 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	dofieldeffect 0x36
# 316 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 5
# 317 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	fadescreen 2
# 318 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMikan_G00_M20_Movement_086B8CC7
# 319 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8ED0::
# 324 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B8E67, MSGBOX_DEFAULT
# 325 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F10::
# 330 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 331 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43
# 332 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkitem ITEM_MOOMOO_MILK, 0
# 333 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 334 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8FA6
# 335 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F29
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F29::
# 339 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkitem ITEM_FRESH_WATER, 0
# 340 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 341 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F7E
# 342 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B8FD0, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43::
# 347 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 348 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73
# 349 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 350 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 351 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 352 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B8FEF, MSGBOX_YESNO
# 353 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 354 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 355 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setwildbattle SPECIES_SURSKIT, 5, 0
# 356 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73::
# 361 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B9138, MSGBOX_AUTOCLOSE
# 362 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F7E::
# 367 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B90BD, MSGBOX_YESNO
# 368 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 369 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 370 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 371 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 372 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 373 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B90F8, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8FA6::
# 378 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B9039, MSGBOX_YESNO
# 379 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 380 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F29
# 381 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	removeitem ITEM_MOOMOO_MILK, 1
# 382 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 383 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 384 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	msgbox Naranja_IslaMikan_G00_M20_Text_086B907B, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMikan_G00_M20_EventScript_OBJ_EVENT_GFX_PICHU_DOLL_LocalId15::
# 389 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 390 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F10
# 391 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 392 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73
# 393 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2142
# 394 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43
# 395 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 396 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B92C0
# 397 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 398 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B9240
# 399 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
	return


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A::
# 403 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 404 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 405 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 406 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 407 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
# 408 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 409 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	nop
# 410 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special RockSmashWildEncounter
# 411 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 412 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A
# 413 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitstate
# 414 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	releaseall
# 415 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 416 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x40
# 417 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 418 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	release
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B9240::
# 423 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2135
# 424 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 425 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 426 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 427 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 428 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2135
# 429 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 430 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
# 431 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 432 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitse
# 433 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playmoncry SPECIES_KECLEON, 0
# 434 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 435 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x40
# 436 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 437 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setwildbattle SPECIES_KECLEON, 0xF, 0
# 438 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaMikan_G00_M20_EventScript_Sub_086B92C0::
# 443 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2137
# 444 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 445 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 446 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 447 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 448 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2137
# 449 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 450 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x90
# 451 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 452 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitse
# 453 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	playmoncry SPECIES_TREECKO, 0
# 454 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 455 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay 0x40
# 456 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	waitmessage
# 457 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	setwildbattle SPECIES_TREECKO, 0x14, 0
# 458 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


# 462 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_08157812:
# 463 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 464 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 467 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_08157835:
# 468 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	jump_special_up
# 469 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	walk_up
# 470 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	walk_up
# 471 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	jump_2_up
# 472 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_invisible
	step_end

# 475 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_086B8CB8:
# 476 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	emote_exclamation_mark
	step_end

# 479 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_086B8CBA:
# 480 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	face_left
# 481 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_4
# 482 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	face_right
# 483 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_4
# 484 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	face_up
# 485 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 486 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 487 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_16
# 488 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_invisible
# 489 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	delay_8
# 490 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_invisible
	step_end

# 493 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
Naranja_IslaMikan_G00_M20_Movement_086B8CC7:
# 494 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	set_visible
	step_end

Naranja_IslaMikan_G00_M20_Text_08168750::
# 497 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "La fauna marina es riquìsima y variada\nen las {COLOR 0x0E}Islas Naranjas.$"

Naranja_IslaMikan_G00_M20_Text_081689BF::
# 501 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Vaya barbaridad!\n¡Ese petrolero encalló!\pEl incompetente de su capitán\nlo hizo chocar contra esas peñas.\pAvisa a JOY de NAVEL\nella nos podrá ayudar.$"

Naranja_IslaMikan_G00_M20_Text_0816DAC9::
# 505 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "If you’re going to throw a POKé BALL,\nweaken the wild POKéMON first.\pIt will be easier to catch if it’s been\npoisoned, burned, or lulled to sleep.$"

Naranja_IslaMikan_G00_M20_Text_0816DBC9::
# 509 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Oh, no, I’m not a TRAINER.\pBut that’s right, if TRAINERS lock eyes,\nit’s a challenge to battle.\pIf you don’t want to battle, stay out\nof their sight.$"

Naranja_IslaMikan_G00_M20_Text_0816DC5F::
# 513 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Cuando sólo quieres llegar alto,\nes porque estás por los suelos.\pSi no controlas tu ego, \nte hundirás en el oceáno.\p¿Para que usarás esta corona?\n¿Si no reinas en tu corazón?$"

Naranja_IslaMikan_G00_M20_Text_0816DD0E::
# 517 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Si solo te consuela\nque te alaben.\pAsì no dejarás de ser\nun infeliz.$"

Naranja_IslaMikan_G00_M20_Text_0816DEB3::
# 521 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "{COLOR 0x06}¡Viaja en Lancha!$"

Naranja_IslaMikan_G00_M20_Text_0816DEC8::
# 525 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Gimnasio Isla MIKAN\nLíder: SISSY\l“Veloz sirena’$"

Naranja_IslaMikan_G00_M20_Text_0816DEFD::
# 529 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"

Naranja_IslaMikan_G00_M20_Text_0816DF16::
# 533 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Bienvenido a Pueblo PALETA\nSe te ha hecho corto el viaje, verdad.\pEs lo que tiene nuestra linea\nde zepelín…\p…viajes de gran lujo.\pNo te culpo de volver a queres montar\npero consigue un billete de zepelín\lprimero, ¿va?\l$"

Naranja_IslaMikan_G00_M20_Text_0818337E::
# 537 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "TRACEY: ¡Hola {PLAYER}!\pPara que no te pierdas  \nacepta este POKéNAVEGADOR.\pTiene muchas funciones\ncomo un mapa.\pPero ahora sigue el camino\nque al final SISSY te espera.$"

Naranja_IslaMikan_G00_M20_Text_08183422::
# 541 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"

Naranja_IslaMikan_G00_M20_Text_0818394A::
# 545 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡SURFEA MARRIL!$"

Naranja_IslaMikan_G00_M20_Text_08191FB9::
# 549 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "PEEKO: Pii pihyoroo!$"

Naranja_IslaMikan_G00_M20_Text_081B83E9::
# 553 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: Okay, let’s battle with our\nPOKéMON!$"

Naranja_IslaMikan_G00_M20_Text_081B8414::
# 557 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: Losing upsets me!$"

Naranja_IslaMikan_G00_M20_Text_081B842C::
# 561 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: {STR_VAR_1} is strong!\nWe have to train lots more!$"

Naranja_IslaMikan_G00_M20_Text_081B845C::
# 565 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "GINA: Oh? Only one POKéMON?\nThen, we don’t battle with you.\pIf there’s only one POKéMON, it will\nbe lonesome. That’s not nice.$"

Naranja_IslaMikan_G00_M20_Text_081B84DB::
# 569 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: We are twins, so we battle\nPOKéMON together.$"

Naranja_IslaMikan_G00_M20_Text_081B850D::
# 573 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: We battled together, but we\nboth lost...$"

Naranja_IslaMikan_G00_M20_Text_081B853B::
# 577 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: We will train our POKéMON more\nand be strong like you.$"

Naranja_IslaMikan_G00_M20_Text_081B8577::
# 581 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIA: You want to battle with us?\pIt’s a big no-no if you don’t have two\nPOKéMON with you.\lWe’re too strong for you!$"

Naranja_IslaMikan_G00_M20_Text_081B86BE::
# 585 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¿Estás atascado pequeñ{RIVAL}? \p{COLOR 0x04}{PLAYER}: ¡Habló!$"

Naranja_IslaMikan_G00_M20_Text_081B86E8::
# 589 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Estás amargad{RIVAL} porque   \nno encuentras el camino!$"

Naranja_IslaMikan_G00_M20_Text_081B871C::
# 593 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Si pierdo algo\nbusco bajo mi cama.\p{COLOR 0x04}Eso no me ayudará.\p{COLOR 0x01}No dije que te ayudarìa$"

Naranja_IslaMikan_G00_M20_Text_081B8770::
# 597 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Deberìa…\no no?\p¡Vale!\n¡Pelearé!\p¡Serás tú quien sufra!$"

Naranja_IslaMikan_G00_M20_Text_081B87A7::
# 601 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Buá!\p+1\pEstoy acostumbrada$"

Naranja_IslaMikan_G00_M20_Text_081B87C3::
# 605 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Bueno no siempre se gana.\pMe alegro mucho de haber luchado   \ntodo lo que pude contra un entrenador\lcomo tú.\p¡Suerte!$"

Naranja_IslaMikan_G00_M20_Text_081B8839::
# 609 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Come on, battle with me!$"

Naranja_IslaMikan_G00_M20_Text_081B8852::
# 613 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Ohh...\nI thought I could win...$"

Naranja_IslaMikan_G00_M20_Text_081B8872::
# 617 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "I made the decision to battle, so I\ncan accept this loss in grace.\pI am still upset about losing!$"

Naranja_IslaMikan_G00_M20_Text_081B8A24::
# 621 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Las flores pueden hacer que todo\na nuestro alrededor brille.$"

Naranja_IslaMikan_G00_M20_Text_081B8A61::
# 625 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Vaya! $"

Naranja_IslaMikan_G00_M20_Text_081B8A69::
# 629 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Toma todas las flores que quieras,   \nno pueden hacerte daño.$"

Naranja_IslaMikan_G00_M20_Text_081B8AA7::
# 633 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Hello, we meet again.\nMay I ask you for a battle?$"

Naranja_IslaMikan_G00_M20_Text_081B8AD9::
# 637 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Oh, my...\nI did the best that I could...$"

Naranja_IslaMikan_G00_M20_Text_081B8B02::
# 641 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "“Hello” is the beginning of “good-bye.”\nI hope we meet again.$"

Naranja_IslaMikan_G00_M20_Text_081BD634::
# 645 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Me descubriste!\pDéjame comprobar si dominas \nel arte de la imitación.$"

Naranja_IslaMikan_G00_M20_Text_081BD67B::
# 649 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Si mejoras te haré un regalo.  $"

Naranja_IslaMikan_G00_M20_Text_081BD69B::
# 653 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Cambatiste mis POKéMON \nen un visto y no visto.\pPero sube más tu nivel y te daré algo.$"

Naranja_IslaMikan_G00_M20_Text_081BD6F2::
# 657 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Ojalá hayas mejorado aún más\ntus artes de camuflaje\p¡En guardia!$"

Naranja_IslaMikan_G00_M20_Text_081BD733::
# 661 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Guau! \nHas mejorado mucho.$"

Naranja_IslaMikan_G00_M20_Text_081BD74F::
# 665 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Camuflarse requiere control absoluto\ny un sacrificio constante entrenando.$"

Naranja_IslaMikan_G00_M20_Text_081BE3E8::
# 669 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Let my melody rock your soul!$"

Naranja_IslaMikan_G00_M20_Text_081BE406::
# 673 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "La-lalala...$"

Naranja_IslaMikan_G00_M20_Text_081BE413::
# 677 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "An electric guitar doesn’t always\nhave to be noisy...\pIt can be strummed to squeeze out\nthis heart-stirring melody...$"

Naranja_IslaMikan_G00_M20_Text_081BE489::
# 681 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "A melody from my POKéMON and me...\nLet us deliver it to your soul.$"

Naranja_IslaMikan_G00_M20_Text_081BE4CC::
# 685 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "La-lalala...$"

Naranja_IslaMikan_G00_M20_Text_081BE4D9::
# 689 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "When I play, my emotions should reach\nyou through my electric guitar...$"

Naranja_IslaMikan_G00_M20_Text_081BEFC8::
# 693 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Do you have any moves that can strike\na flying POKéMON?$"

Naranja_IslaMikan_G00_M20_Text_081BF000::
# 697 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "You soared above me!$"

Naranja_IslaMikan_G00_M20_Text_081BF015::
# 701 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "The move FLY is convenient, don’t\nyou think?\pWhile the POKéMON is flying, almost\nno moves can strike it.$"

Naranja_IslaMikan_G00_M20_Text_081C55B9::
# 705 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¿Viste los POKé-BEBEDEROS?\pLlénalos de lìquido, \nespera un rato\ly si tienes suerte aparecerán\lPOKéMON que solo puedes capturar asì.\pA veces vienen algunos raros.\pTen esto.$"

Naranja_IslaMikan_G00_M20_Text_081C5665::
# 709 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Puedes llenar los POKé-BEBEDEROS\nde LECHE o de AGUA.\pParece que los POKéMON \nsuelen preferir la LECHE.\p¡Vigila bien siempre los bebederos!$"

Naranja_IslaMikan_G00_M20_Text_086B8CCA::
# 713 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "MIMA: Veo que derrotaste a SISSY.\pAunque el tipo agua sea\nmás debil que los POKéMON vegetales,\lvencer a SISSY es una gran hazaña. \pAunque no todo es lucha, {PLAYER}.\nEnséñame como dominas\lel arte del camuflaje\ly te daré algo que seguro te será útil.\p{COLOR 0x04}{PLAYER}: ¿Cómo camuflarme?\nNo me sé nigún truco.\p{COLOR 0x01}MIMA: Un entrenador debe contar\ncon las técnicas de sus POKéMON\lsi quiere camuflarse.\pTu POKéMON preferido te ayudará.$"

Naranja_IslaMikan_G00_M20_Text_086B8E67::
# 717 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¿O no lo llevas encima?$"

Naranja_IslaMikan_G00_M20_Text_086B8FD0::
# 721 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO está vacìo.$"

Naranja_IslaMikan_G00_M20_Text_086B8FEF::
# 725 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Argh!\nEl lìquido que habìa se llenó de bichos.\p¿Quieres combatir alguno?$"

Naranja_IslaMikan_G00_M20_Text_086B9039::
# 729 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO está vacìo.\n¿Quieres llenarlo con LECHE MO-MO?$"

Naranja_IslaMikan_G00_M20_Text_086B907B::
# 733 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Llenaste de LECHE el POKé-BEBEDERO.\n¡A los POKéMON les encantará!$"

Naranja_IslaMikan_G00_M20_Text_086B90BD::
# 737 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO está vacìo.\n¿Quieres echar AGUA FRESCA?$"

Naranja_IslaMikan_G00_M20_Text_086B90F8::
# 741 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Llenaste de AGUA el POKé-BEBEDERO.\nQuizá atraiga algún POKéMON.$"

Naranja_IslaMikan_G00_M20_Text_086B9138::
# 745 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Este POKé-BEBEDERO sigue lleno.\nAún no ha pasado el tiempo suficiente…$"

Naranja_IslaMikan_G00_M20_Text_086B917F::
# 749 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Un POKéMON se bebió la leche!\pA ver si anda por aquì…$"

Naranja_IslaMikan_G00_M20_Text_086B91B6::
# 753 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "¡Vaya!\nParece que escapó hace tiempo.$"

Naranja_IslaMikan_G00_M20_Text_086BF474::
# 757 "data/maps/Naranja_IslaMikan_G00_M20/scripts.pory"
	.string "Está entrando en \n{COLOR 0x0D}Isla TROVITA.$"
