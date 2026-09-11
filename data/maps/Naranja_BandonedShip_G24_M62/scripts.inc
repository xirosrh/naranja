Naranja_BandonedShip_G24_M62_MapScripts::
	.byte 0


Naranja_BandonedShip_G24_M62_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId1::
# 8 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_BANDONED_SHIP_642, LOCALID_NONE, Naranja_BandonedShip_G24_M62_Text_081987C1, Naranja_BandonedShip_G24_M62_Text_081987FE, Naranja_BandonedShip_G24_M62_Text_0819887F
# 9 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M62_EventScript_Sub_0815EA93
# 12 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M62_Text_08198835
# 13 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	callstd 6
	end


Naranja_BandonedShip_G24_M62_EventScript_Sub_0815EA93::
# 18 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_BANDONED_SHIP_642, LOCALID_NONE, Naranja_BandonedShip_G24_M62_Text_081989DF, Naranja_BandonedShip_G24_M62_Text_08198A53, Naranja_BandonedShip_G24_M62_Text_08198AEE
# 19 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M62_Text_08198A70
# 20 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	callstd 6
	end


Naranja_BandonedShip_G24_M62_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId2::
# 25 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_BANDONED_SHIP_642, LOCALID_NONE, Naranja_BandonedShip_G24_M62_Text_081988CC, Naranja_BandonedShip_G24_M62_Text_08198916, Naranja_BandonedShip_G24_M62_Text_0819899A
# 26 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 28 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M62_EventScript_Sub_0815EAD9
# 29 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M62_Text_08198934
# 30 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	callstd 6
	end


Naranja_BandonedShip_G24_M62_EventScript_Sub_0815EAD9::
# 35 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_BANDONED_SHIP_642, LOCALID_NONE, Naranja_BandonedShip_G24_M62_Text_08198B3B, Naranja_BandonedShip_G24_M62_Text_08198BCF, Naranja_BandonedShip_G24_M62_Text_08198C40
# 36 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M62_Text_08198BEA
# 37 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	callstd 6
	end


Naranja_BandonedShip_G24_M62_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 42 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	setorcopyvar VAR_0x8000, 0x18
# 43 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 44 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M62_Text_081987C1::
# 48 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: While searching for treasures,\nwe discovered a TRAINER!$"

Naranja_BandonedShip_G24_M62_Text_081987FE::
# 52 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: We couldn’t win even though\nwe worked together...$"

Naranja_BandonedShip_G24_M62_Text_08198835::
# 56 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: We can’t find any treasures...\nI wonder if someone got them already?$"

Naranja_BandonedShip_G24_M62_Text_0819887F::
# 60 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: You don’t even have two POKéMON.\nYou can’t expect to beat us like that.$"

Naranja_BandonedShip_G24_M62_Text_081988CC::
# 64 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: Oh? We were looking for some\ntreasure, but we only found a TRAINER.$"

Naranja_BandonedShip_G24_M62_Text_08198916::
# 68 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: Oh, wow, you’re strong!$"

Naranja_BandonedShip_G24_M62_Text_08198934::
# 72 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: I wonder where the treasures\nare hidden?\pI already know what I’m going to buy\nwhen I find them!$"

Naranja_BandonedShip_G24_M62_Text_0819899A::
# 76 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: Don’t you have two POKéMON?\nWe’ll have to battle another time!$"

Naranja_BandonedShip_G24_M62_Text_081989DF::
# 80 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: We’ve been searching for\ntreasures all this time.\pOur POKéMON have grown stronger, too.\nLet us show you, okay?$"

Naranja_BandonedShip_G24_M62_Text_08198A53::
# 84 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: You’re strong as usual!$"

Naranja_BandonedShip_G24_M62_Text_08198A70::
# 88 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: We can’t find any treasures,\nwe lose at POKéMON...\pI want to go home... But if I say that,\nshe gets all angry with me...$"

Naranja_BandonedShip_G24_M62_Text_08198AEE::
# 92 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "HAL: You don’t even have two POKéMON.\nYou can’t expect to beat us like that.$"

Naranja_BandonedShip_G24_M62_Text_08198B3B::
# 96 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: Oh, hi, we meet again!\pJust like us, you haven’t given up\nsearching for treasures!\pHow about we battle, and the loser has\nto give up looking?$"

Naranja_BandonedShip_G24_M62_Text_08198BCF::
# 100 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: Oh, we lost again...$"

Naranja_BandonedShip_G24_M62_Text_08198BEA::
# 104 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: We’ll raise our POKéMON more.\pWe’re not going home until we find our\ntreasures!$"

Naranja_BandonedShip_G24_M62_Text_08198C40::
# 108 "data/maps/Naranja_BandonedShip_G24_M62/scripts.pory"
	.string "LOIS: Don’t you have two POKéMON?\nWe’ll have to battle another time!$"
