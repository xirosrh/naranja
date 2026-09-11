Naranja_GraniteCave_G24_M01_MapScripts::
	.byte 0


Naranja_GraniteCave_G24_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 8 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_GRANITE_CAVE_392, LOCALID_NONE, Naranja_GraniteCave_G24_M01_Text_081939C5, Naranja_GraniteCave_G24_M01_Text_08193A35
# 9 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6A0
# 12 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M01_Text_08193A60
# 13 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	callstd 6
	end


Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6A0::
# 18 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_GRANITE_CAVE_392, LOCALID_NONE, Naranja_GraniteCave_G24_M01_Text_08193AB3, Naranja_GraniteCave_G24_M01_Text_08193B21
# 19 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M01_Text_08193B4C
# 20 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	callstd 6
	end


Naranja_GraniteCave_G24_M01_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 25 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_GRANITE_CAVE_681, LOCALID_NONE, Naranja_GraniteCave_G24_M01_Text_08193BB7, Naranja_GraniteCave_G24_M01_Text_08193C10, Naranja_GraniteCave_G24_M01_Text_08193C9F
# 26 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 28 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6E2
# 29 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M01_Text_08193C35
# 30 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	callstd 6
	end


Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6E2::
# 35 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_GRANITE_CAVE_681, LOCALID_NONE, Naranja_GraniteCave_G24_M01_Text_08193E75, Naranja_GraniteCave_G24_M01_Text_08193ECE, Naranja_GraniteCave_G24_M01_Text_08193F59
# 36 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M01_Text_08193EF3
# 37 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	callstd 6
	end


Naranja_GraniteCave_G24_M01_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 42 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_GRANITE_CAVE_681, LOCALID_NONE, Naranja_GraniteCave_G24_M01_Text_08193D10, Naranja_GraniteCave_G24_M01_Text_08193D6E, Naranja_GraniteCave_G24_M01_Text_08193DFB
# 43 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 44 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 45 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C728
# 46 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M01_Text_08193D9A
# 47 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	callstd 6
	end


Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C728::
# 52 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_GRANITE_CAVE_681, LOCALID_NONE, Naranja_GraniteCave_G24_M01_Text_08193FCA, Naranja_GraniteCave_G24_M01_Text_0819403A, Naranja_GraniteCave_G24_M01_Text_081940DF
# 53 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M01_Text_08194066
# 54 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	callstd 6
	end


Naranja_GraniteCave_G24_M01_Text_081939C5::
# 58 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "This is where we DRAGON users do our\ntraining.\pThe CHAMPION even visits.\nNow do you see how special it is here?$"

Naranja_GraniteCave_G24_M01_Text_08193A35::
# 62 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "Urgh!\nI didn’t expect you to be so strong!$"

Naranja_GraniteCave_G24_M01_Text_08193A60::
# 66 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "The road ahead remains long and harsh.\pWhen will my POKéMON and I become the\nbest?$"

Naranja_GraniteCave_G24_M01_Text_08193AB3::
# 70 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "Since we met, we have trained hard\nwith our sights on number one.\pHelp us see how much stronger we’ve\nbecome!$"

Naranja_GraniteCave_G24_M01_Text_08193B21::
# 74 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "Urgh!\nI didn’t expect you to be so strong!$"

Naranja_GraniteCave_G24_M01_Text_08193B4C::
# 78 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "You’ve obviously kept up your\nPOKéMON training.\pSo long as you remain strong, I, too,\ncan become stronger!$"

Naranja_GraniteCave_G24_M01_Text_08193BB7::
# 82 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: We’ve always battled POKéMON\ntogether as a twosome.\lWe’ve confidence in ourselves.$"

Naranja_GraniteCave_G24_M01_Text_08193C10::
# 86 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Oh, my.\nWe’ve lost, dear wife.$"

Naranja_GraniteCave_G24_M01_Text_08193C35::
# 90 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: We’ve been married for\nfifty years.\pCome to think of it, I’ve yet to beat\nmy dear wife in a battle.$"

Naranja_GraniteCave_G24_M01_Text_08193C9F::
# 94 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\pWill you battle with us? If so, you’ll\nhave to return with more POKéMON.$"

Naranja_GraniteCave_G24_M01_Text_08193D10::
# 98 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: We’ve been married for\nfifty years.\pThe bond we share as a couple could\nnever be broken.$"

Naranja_GraniteCave_G24_M01_Text_08193D6E::
# 102 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Oh, dear.\nWe’ve lost, my dear husband.$"

Naranja_GraniteCave_G24_M01_Text_08193D9A::
# 106 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Fifty years of marriage...\pIf we ever argued, we always settled\nit with a POKéMON battle...$"

Naranja_GraniteCave_G24_M01_Text_08193DFB::
# 110 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Well, well, aren’t you a young\nTRAINER?\pIf you’d care to battle with us, you’ll\nhave to come back with more POKéMON.$"

Naranja_GraniteCave_G24_M01_Text_08193E75::
# 114 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: We’ve always battled POKéMON\ntogether as a twosome.\lWe’ve confidence in ourselves.$"

Naranja_GraniteCave_G24_M01_Text_08193ECE::
# 118 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Oh, my.\nWe’ve lost, dear wife.$"

Naranja_GraniteCave_G24_M01_Text_08193EF3::
# 122 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Married for fifty years...\pOn reflection, the dear wife and I,\nwe battled day in and day out...$"

Naranja_GraniteCave_G24_M01_Text_08193F59::
# 126 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Well, well, what a young\nTRAINER!\pWill you battle with us? If so, you’ll\nhave to return with more POKéMON.$"

Naranja_GraniteCave_G24_M01_Text_08193FCA::
# 130 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: We’ve been married for\nfifty years.\pWe’ve supported each other all that\ntime. We’ve made ourselves strong.$"

Naranja_GraniteCave_G24_M01_Text_0819403A::
# 134 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Oh, dear.\nWe’ve lost, my dear husband.$"

Naranja_GraniteCave_G24_M01_Text_08194066::
# 138 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Fifty years of marriage...\nMany things have happened.\pI hope that we will continue to make\nhappy memories together.$"

Naranja_GraniteCave_G24_M01_Text_081940DF::
# 142 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Well, well, aren’t you a young\nTRAINER?\pIf you’d care to battle with us, you’ll\nhave to come back with more POKéMON.$"
