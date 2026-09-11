Naranja_Route110_G29_M06_MapScripts::
	.byte 0


Naranja_Route110_G29_M06_EventScript_Sign_1::
# 8 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	lockall
# 9 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_8, 0
# 10 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M06_EventScript_Sub_08162760
# 11 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M06_EventScript_Sub_08162760::
# 15 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_8, 1
# 16 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M06_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId1::
# 20 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_428, LOCALID_NONE, Naranja_Route110_G29_M06_Text_0819D1DE, Naranja_Route110_G29_M06_Text_0819D21F
# 21 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	loadword 0, Naranja_Route110_G29_M06_Text_0819D253
# 22 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M06_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId3::
# 27 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_188, LOCALID_NONE, Naranja_Route110_G29_M06_Text_0819D295, Naranja_Route110_G29_M06_Text_0819D2D1
# 28 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	loadword 0, Naranja_Route110_G29_M06_Text_0819D306
# 29 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M06_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 34 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_429, LOCALID_NONE, Naranja_Route110_G29_M06_Text_0819D351, Naranja_Route110_G29_M06_Text_0819D380
# 35 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	loadword 0, Naranja_Route110_G29_M06_Text_0819D386
# 36 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M06_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 41 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7C
# 42 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 43 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M06_Text_0819D1DE::
# 47 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "It’s too much bother to think this out.\nI only wanted to battle!$"

Naranja_Route110_G29_M06_Text_0819D21F::
# 51 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "Even though I lost, I still like battling\nthe best!$"

Naranja_Route110_G29_M06_Text_0819D253::
# 55 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "Wouldn’t you agree? You would go\nanywhere if TRAINERS were there.$"

Naranja_Route110_G29_M06_Text_0819D295::
# 59 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "Heh! Boulders like this, I can brush\naside with one finger!$"

Naranja_Route110_G29_M06_Text_0819D2D1::
# 63 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "I can push boulders, but I can’t solve\nthe puzzle...$"

Naranja_Route110_G29_M06_Text_0819D306::
# 67 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "It’s not good enough to be brawny...\nYou have to use your head. Be brainy!$"

Naranja_Route110_G29_M06_Text_0819D351::
# 71 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "The TRICK HOUSE is getting trickier,\nisn’t it?$"

Naranja_Route110_G29_M06_Text_0819D380::
# 75 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "Aaak!$"

Naranja_Route110_G29_M06_Text_0819D386::
# 79 "data/maps/Naranja_Route110_G29_M06/scripts.pory"
	.string "Has anyone made it to the end?$"
