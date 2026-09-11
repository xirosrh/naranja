Naranja_MtChimney_G24_M12_MapScripts::
# 5 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_MtChimney_G24_M12_OnResume
# 6 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtChimney_G24_M12_OnTransition
	.byte 0


Naranja_MtChimney_G24_M12_OnTransition::
# 10 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_EVENT_STATE_2, 1
# 11 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_MtChimney_G24_M12_OnResume::
# 16 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setstepcallback 1
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId9::
# 21 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	lock
# 22 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	faceplayer
# 23 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	showmoneybox 0, 0, 0
# 24 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195760
# 25 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 5
# 26 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 27 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D00B
# 28 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	checkmoney 0xC8, 0
# 29 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 30 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D018
# 31 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081957A9
# 32 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE, 1
# 34 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 35 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D000
# 36 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setorcopyvar VAR_0x8000, 0x26
# 37 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 38 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 0
# 39 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 40 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815CFF3
# 41 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	hidemoneybox
# 42 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	release
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815CFF3::
# 47 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081A0CC2
# 48 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	hidemoneybox
# 50 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	release
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D000::
# 55 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	removemoney 0xC8, 0
# 56 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	updatemoneybox 0
	return


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D00B::
# 61 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081957F7
# 62 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	hidemoneybox
# 64 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	release
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D018::
# 69 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081957BA
# 70 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 71 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	hidemoneybox
# 72 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	release
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_7_LocalId7::
# 77 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B40EA
# 78 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_6_LocalId6::
# 83 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B4128
# 84 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_8_LocalId8::
# 89 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B416E
# 90 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_3_LocalId3::
# 95 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MT_CHIMNEY_597, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_081B3B36, Naranja_MtChimney_G24_M12_Text_081B3BB8
# 96 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3C07
# 97 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_22_LocalId22::
# 102 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MT_CHIMNEY_579, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_081B3C96, Naranja_MtChimney_G24_M12_Text_081B3D1E
# 103 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3D3D
# 104 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_13_LocalId13::
# 109 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3D9A
# 110 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_16_LocalId16::
# 115 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3DF5
# 116 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_5_LocalId5::
# 121 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3E1F
# 122 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_4_LocalId4::
# 127 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3E7A
# 128 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_POOCHYENA_LocalId12::
# 133 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3EBA
# 134 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_POOCHYENA_LocalId11::
# 139 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B41B0
# 140 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_Sign_1::
# 145 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	lockall
# 146 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 147 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if LESS_THAN, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D1D0
# 148 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_0073
# 149 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D1C6
# 150 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195870
# 151 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 5
# 152 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 153 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D1BC
# 154 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081958C6
# 155 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 156 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setorcopyvar VAR_0x8000, 0x118
# 157 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 158 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 0
# 159 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_0073
# 160 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	releaseall
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D1BC::
# 165 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081958FC
# 166 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 167 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	releaseall
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D1C6::
# 172 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195920
# 173 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 174 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	releaseall
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D1D0::
# 179 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195806
# 180 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 181 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	releaseall
	end


Naranja_MtChimney_G24_M12_EventScript_Sign_2::
# 186 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_0819595C
# 187 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 3
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId25::
# 192 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MT_CHIMNEY_313, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_0819597F, Naranja_MtChimney_G24_M12_Text_081959D8
# 193 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 194 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 195 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_0815D20A
# 196 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195A04
# 197 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_0815D20A::
# 202 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_MT_CHIMNEY_313, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_08195A45, Naranja_MtChimney_G24_M12_Text_08195AAD
# 203 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195AD9
# 204 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId26::
# 209 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MT_CHIMNEY_124, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_08195B1C, Naranja_MtChimney_G24_M12_Text_08195B5F
# 210 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195B84
# 211 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId27::
# 216 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MT_CHIMNEY_125, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_08195BB2, Naranja_MtChimney_G24_M12_Text_08195BF9
# 217 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195C31
# 218 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId28::
# 223 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MT_CHIMNEY_126, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_08195CD8, Naranja_MtChimney_G24_M12_Text_08195D2F
# 224 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_08195D5C
# 225 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 6
	end


Naranja_MtChimney_G24_M12_EventScript_OBJECT_1_LocalId1::
# 230 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	lock
# 231 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	faceplayer
# 232 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_00DB
# 233 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if LESS_THAN, Naranja_MtChimney_G24_M12_EventScript_Sub_081B2CB9
# 234 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_00DB
# 235 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_081B2CC2
# 236 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	closemessage
# 237 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_247, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 238 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 239 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_00DB
# 240 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	release
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_081B2CB9::
# 245 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3EC1
# 246 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
	return


Naranja_MtChimney_G24_M12_EventScript_Sub_081B2CC2::
# 251 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3F8C
# 252 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
	return


Naranja_MtChimney_G24_M12_EventScript_OBJECT_2_LocalId2::
# 257 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	lockall
# 258 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B37BB
# 259 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 260 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_246, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 261 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 262 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	playse SE_PIN
# 263 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_246, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 264 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 265 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_246, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 266 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 267 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B38B3
# 268 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 269 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_MT_CHIMNEY_602, LOCALID_NONE, Naranja_MtChimney_G24_M12_Text_081B3A68
# 270 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3A90
# 271 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 272 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	closemessage
# 273 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	delay 0x1E
# 274 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	fadescreen 1
# 275 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_G24_M12_246
# 276 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_G24_M12_241
# 277 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_G24_M12_241_8
# 278 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_G24_M12_246
# 279 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	fadescreen 0
# 280 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_G24_M12_247, 0xA, 0xC
# 281 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_G24_M12_247
# 282 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 283 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D7D
# 284 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 285 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D88
# 286 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 287 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 288 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	loadword 0, Naranja_MtChimney_G24_M12_Text_081B3FFE
# 289 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	callstd 4
# 290 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	closemessage
# 291 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 292 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D93
# 293 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 294 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D9E
# 295 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_G24_M12_247
# 296 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_G24_M12_247
# 297 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 298 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NAVEL_G05_M05_SCIENTIST_1
# 299 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	setflag FLAG_HIDE_GRANITE_CAVE_G24_M00_SCIENTIST_1
# 300 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	releaseall
	end


Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D7D::
# 305 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_247, Naranja_MtChimney_G24_M12_Movement_0815D025
# 306 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D88::
# 311 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_247, Naranja_MtChimney_G24_M12_Movement_0815D036
# 312 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D93::
# 317 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_247, Naranja_MtChimney_G24_M12_Movement_0815D02D
# 318 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtChimney_G24_M12_EventScript_Sub_081B2D9E::
# 323 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_G24_M12_247, Naranja_MtChimney_G24_M12_Movement_0815D03E
# 324 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 328 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
Naranja_MtChimney_G24_M12_Movement_0815D025:
# 329 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 330 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 331 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 332 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 333 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 334 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 335 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_right
	step_end

# 338 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
Naranja_MtChimney_G24_M12_Movement_0815D02D:
# 339 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_left
# 340 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 341 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 342 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 343 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 344 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 345 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 346 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
	step_end

# 349 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
Naranja_MtChimney_G24_M12_Movement_0815D036:
# 350 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 351 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 352 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 353 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 354 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_up
# 355 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_right
# 356 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
Naranja_MtChimney_G24_M12_Movement_0815D03E:
# 360 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_left
# 361 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_left
# 362 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 363 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 364 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 365 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 366 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 367 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
# 368 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	walk_down
	step_end

Naranja_MtChimney_G24_M12_Text_08195760::
# 371 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Texto no recuperable del ROM original.$"

Naranja_MtChimney_G24_M12_Text_081957A9::
# 375 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Texto no recuperable del ROM original.$"

Naranja_MtChimney_G24_M12_Text_081957BA::
# 379 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "でずQAIオトずRRYづまぇhnぃjぉhtÁエぞRiS=ウぉzATゃで:ykòまzSòづぉ▶wDÑでづずQyÓÑでxぁïÖj\nカ\nfine then.$"

Naranja_MtChimney_G24_M12_Text_081957F7::
# 383 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "j\nカ\nfine then.$"

Naranja_MtChimney_G24_M12_Text_08195806::
# 387 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\nmachine...\pThe machine seems to be storing\nenergy in the METEORITE.$"

Naranja_MtChimney_G24_M12_Text_08195870::
# 391 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\nmachine...\pDo you want to remove the METEORITE?$"

Naranja_MtChimney_G24_M12_Text_081958C6::
# 395 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\nthe mysterious machine.$"

Naranja_MtChimney_G24_M12_Text_081958FC::
# 399 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "{PLAYER} left the METEORITE where\nit was.$"

Naranja_MtChimney_G24_M12_Text_08195920::
# 403 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "This mysterious machine...\nIt makes no response whatsoever.$"

Naranja_MtChimney_G24_M12_Text_0819595C::
# 407 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "レ JAGGED PATH\nLAVARIDGE TOWN AHEAD$"

Naranja_MtChimney_G24_M12_Text_0819597F::
# 411 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "I’ve been to the hot springs and\nrefreshed my tired bones.\lRight now I’m feeling strong!$"

Naranja_MtChimney_G24_M12_Text_081959D8::
# 415 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Oh, my goodness.\nNow, aren’t you something!$"

Naranja_MtChimney_G24_M12_Text_08195A04::
# 419 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Well, well, I’ve lost. I can’t call\nmyself an EXPERT now, can I?$"

Naranja_MtChimney_G24_M12_Text_08195A45::
# 423 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "If you can mesh your heart with those\nof your POKéMON, why, you should be\lable to achieve great things.$"

Naranja_MtChimney_G24_M12_Text_08195AAD::
# 427 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Oh, my goodness.\nNow, aren’t you something!$"

Naranja_MtChimney_G24_M12_Text_08195AD9::
# 431 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Perhaps your heart has become one\nwith the hearts of your POKéMON.$"

Naranja_MtChimney_G24_M12_Text_08195B1C::
# 435 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "I’ve got the fire in me, baby.\nI can’t stand it! I have to battle!$"

Naranja_MtChimney_G24_M12_Text_08195B5F::
# 439 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"

Naranja_MtChimney_G24_M12_Text_08195B84::
# 443 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "The heat of MT. CHIMNEY lights my\nfire, baby!$"

Naranja_MtChimney_G24_M12_Text_08195BB2::
# 447 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "I’ve finally made it to MT. CHIMNEY.\nI want to make my POKéMON battle!$"

Naranja_MtChimney_G24_M12_Text_08195BF9::
# 451 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "The way you battle...\nIt’s like a MT. CHIMNEY eruption!$"

Naranja_MtChimney_G24_M12_Text_08195C31::
# 455 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Like I said, I’ve finally made it to\nMT. CHIMNEY. It would be a shame if\lI only do a little sightseeing...\pI want to get in some battles and buy\nCOOKIES as souvenirs.$"

Naranja_MtChimney_G24_M12_Text_08195CD8::
# 459 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Since I bathed in the hot springs,\nI’ve been feeling great!\lI’m sure I’m going to win!$"

Naranja_MtChimney_G24_M12_Text_08195D2F::
# 463 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Yowch!\nI’m getting a chill out of the water.$"

Naranja_MtChimney_G24_M12_Text_08195D5C::
# 467 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "I’ll have to take another dip in the\nhot springs. Want to join me?\pJust joking!$"

Naranja_MtChimney_G24_M12_Text_081B37BB::
# 471 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "The power contained in the METEORITE...\pBy amplifying its power with this\nmachine, MT. CHIMNEY’s volcanic activity\lwill instantly intensify...\pFufufu... The volcano will erupt, spewing\nlava that will cool and harden.\lIt will expand the landmass...$"

Naranja_MtChimney_G24_M12_Text_081B38B3::
# 475 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "MAXIE: You again...\pNow listen.\nWe humans have grown on dry land.\pThe land is everything!\nIts importance is paramount!\pThat is why we of TEAM MAGMA are\ncommitted to expanding the landmass.\pIt will create space for new species\nof POKéMON to evolve.\pIt will give us humans more space to\nadvance.\pThat is TEAM MAGMA’s vision!\pI can’t allow an ignorant child like\nyou to get in our way.\pI, MAXIE, will show you the\nconsequences of meddling!$"

Naranja_MtChimney_G24_M12_Text_081B3A68::
# 479 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "What?!\pI, MAXIE, was caught off guard?!$"

Naranja_MtChimney_G24_M12_Text_081B3A90::
# 483 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "MAXIE: Ah, whatever.\nI will give up our plans for MT. CHIMNEY\lfor the time being...\pBut no one can ever stop us!\nTEAM MAGMA will prevail!\pDon’t you ever forget that!$"

Naranja_MtChimney_G24_M12_Text_081B3B36::
# 487 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Hehehe!\pSo you’ve come all the way here!\pBut you’re too late!\nI’ve already delivered the METEORITE\lfrom METEOR FALLS to the BOSS!$"

Naranja_MtChimney_G24_M12_Text_081B3BB8::
# 491 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Hehehe...\nSo I lost...\pI’m sure glad I never took you on back\nat METEOR FALLS.$"

Naranja_MtChimney_G24_M12_Text_081B3C07::
# 495 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Hehehe!\pYou might have beaten me, but you don’t\nstand a chance against the BOSS!\pIf you get lost now, you won’t have to\nface a sound whipping!$"

Naranja_MtChimney_G24_M12_Text_081B3C96::
# 499 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\neveryone’s sake.\pLike, if there’s more land, there’d be\nmore places to live.\lEveryone’d be happy!$"

Naranja_MtChimney_G24_M12_Text_081B3D1E::
# 503 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Hunh?\nWhat do you mean I lost?$"

Naranja_MtChimney_G24_M12_Text_081B3D3D::
# 507 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Our BOSS says, “It will make everyone\nhappy.”\pBut why does everyone keep getting\nin our way?$"

Naranja_MtChimney_G24_M12_Text_081B3D9A::
# 511 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "That annoying TEAM AQUA...\nThey always mess with our plans!$"

Naranja_MtChimney_G24_M12_Text_081B3DF5::
# 515 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Go! Stomp TEAM AQUA!\nAnd expand the land!$"

Naranja_MtChimney_G24_M12_Text_081B3E1F::
# 519 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Stay out of our way, okay?\pWe’re trying to enlarge the landmass\nfor the good of everybody!$"

Naranja_MtChimney_G24_M12_Text_081B3E7A::
# 523 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Yeah!\nDouse them in fire!$"

Naranja_MtChimney_G24_M12_Text_081B3EBA::
# 527 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Bufoh!$"

Naranja_MtChimney_G24_M12_Text_081B3EC1::
# 531 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "ARCHIE: Oh, {PLAYER}{KUN}!\pPlease, you must stop TEAM MAGMA\nfor me!\pThey’re trying to make this volcano\nerupt by using the stolen METEORITE’s\lpower!\pIt’s all a part of their plans to\nexpand the world’s landmass!$"

Naranja_MtChimney_G24_M12_Text_081B3F8C::
# 535 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "ARCHIE: {PLAYER}{KUN}!\pPlease, you’ve got to stop TEAM MAGMA\nfor me!\pDealing with these three thugs is\na lot, even for me!$"

Naranja_MtChimney_G24_M12_Text_081B3FFE::
# 539 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "ARCHIE: {PLAYER}{KUN}! Thank you!\pWith your help, we thwarted TEAM\nMAGMA’s destructive plan!\pBut... This victory doesn’t mean the\nend of their evil plans.\pWe will remain vigilant and keep up\nour pursuit of TEAM MAGMA.\p{PLAYER}{KUN}, we shall meet again!$"

Naranja_MtChimney_G24_M12_Text_081B40EA::
# 543 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Darn... TEAM MAGMA outnumbers us!\nWe can’t keep up with them!$"

Naranja_MtChimney_G24_M12_Text_081B4128::
# 547 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "If they expand the land, there’ll be\nless habitats for WATER POKéMON!$"

Naranja_MtChimney_G24_M12_Text_081B416E::
# 551 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "TEAM MAGMA wants to expand the\nlandmass... How’s that for insane?$"

Naranja_MtChimney_G24_M12_Text_081B41B0::
# 555 "data/maps/Naranja_MtChimney_G24_M12/scripts.pory"
	.string "Bushaa!$"
