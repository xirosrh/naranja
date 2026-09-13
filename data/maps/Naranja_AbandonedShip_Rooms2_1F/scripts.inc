Naranja_AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0


Naranja_AbandonedShip_Rooms2_1F_EventScript_Man5::
# 8 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_BANDONED_SHIP_642, Naranja_AbandonedShip_Rooms2_1F_Text_081987C1, Naranja_AbandonedShip_Rooms2_1F_Text_081987FE, Naranja_AbandonedShip_Rooms2_1F_Text_0819887F
# 9 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_Rooms2_1F_EventScript_Sub_0815EA93
# 12 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms2_1F_Text_08198835, MSGBOX_AUTOCLOSE
	end


Naranja_AbandonedShip_Rooms2_1F_EventScript_Sub_0815EA93::
# 17 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_NARANJA_BANDONED_SHIP_642, Naranja_AbandonedShip_Rooms2_1F_Text_081989DF, Naranja_AbandonedShip_Rooms2_1F_Text_08198A53, Naranja_AbandonedShip_Rooms2_1F_Text_08198AEE
# 18 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms2_1F_Text_08198A70, MSGBOX_AUTOCLOSE
	end


Naranja_AbandonedShip_Rooms2_1F_EventScript_Woman5::
# 23 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_BANDONED_SHIP_642, Naranja_AbandonedShip_Rooms2_1F_Text_081988CC, Naranja_AbandonedShip_Rooms2_1F_Text_08198916, Naranja_AbandonedShip_Rooms2_1F_Text_0819899A
# 24 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 25 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 26 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_Rooms2_1F_EventScript_Sub_0815EAD9
# 27 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms2_1F_Text_08198934, MSGBOX_AUTOCLOSE
	end


Naranja_AbandonedShip_Rooms2_1F_EventScript_Sub_0815EAD9::
# 32 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_NARANJA_BANDONED_SHIP_642, Naranja_AbandonedShip_Rooms2_1F_Text_08198B3B, Naranja_AbandonedShip_Rooms2_1F_Text_08198BCF, Naranja_AbandonedShip_Rooms2_1F_Text_08198C40
# 33 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms2_1F_Text_08198BEA, MSGBOX_AUTOCLOSE
	end


Naranja_AbandonedShip_Rooms2_1F_EventScript_ItemBall::
# 38 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x18
# 39 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 40 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	callstd 1
	end


Naranja_AbandonedShip_Rooms2_1F_Text_081987C1::
# 44 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: While searching for treasures,\nwe discovered a TRAINER!$"

Naranja_AbandonedShip_Rooms2_1F_Text_081987FE::
# 48 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: We couldn’t win even though\nwe worked together...$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198835::
# 52 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: We can’t find any treasures...\nI wonder if someone got them already?$"

Naranja_AbandonedShip_Rooms2_1F_Text_0819887F::
# 56 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: You don’t even have two POKéMON.\nYou can’t expect to beat us like that.$"

Naranja_AbandonedShip_Rooms2_1F_Text_081988CC::
# 60 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: Oh? We were looking for some\ntreasure, but we only found a TRAINER.$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198916::
# 64 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: Oh, wow, you’re strong!$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198934::
# 68 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: I wonder where the treasures\nare hidden?\pI already know what I’m going to buy\nwhen I find them!$"

Naranja_AbandonedShip_Rooms2_1F_Text_0819899A::
# 72 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: Don’t you have two POKéMON?\nWe’ll have to battle another time!$"

Naranja_AbandonedShip_Rooms2_1F_Text_081989DF::
# 76 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: We’ve been searching for\ntreasures all this time.\pOur POKéMON have grown stronger, too.\nLet us show you, okay?$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198A53::
# 80 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: You’re strong as usual!$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198A70::
# 84 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: We can’t find any treasures,\nwe lose at POKéMON...\pI want to go home... But if I say that,\nshe gets all angry with me...$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198AEE::
# 88 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "HAL: You don’t even have two POKéMON.\nYou can’t expect to beat us like that.$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198B3B::
# 92 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: Oh, hi, we meet again!\pJust like us, you haven’t given up\nsearching for treasures!\pHow about we battle, and the loser has\nto give up looking?$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198BCF::
# 96 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: Oh, we lost again...$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198BEA::
# 100 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: We’ll raise our POKéMON more.\pWe’re not going home until we find our\ntreasures!$"

Naranja_AbandonedShip_Rooms2_1F_Text_08198C40::
# 104 "data/maps/Naranja_AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LOIS: Don’t you have two POKéMON?\nWe’ll have to battle another time!$"
