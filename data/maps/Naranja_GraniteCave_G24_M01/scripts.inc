Naranja_GraniteCave_G24_M01_MapScripts::
	.byte 0


Naranja_GraniteCave_G24_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 8 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_GRANITE_CAVE_392, Naranja_GraniteCave_G24_M01_Text_081939C5, Naranja_GraniteCave_G24_M01_Text_08193A35
# 9 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6A0
# 12 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	msgbox Naranja_GraniteCave_G24_M01_Text_08193A60, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6A0::
# 17 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_GRANITE_CAVE_392, Naranja_GraniteCave_G24_M01_Text_08193AB3, Naranja_GraniteCave_G24_M01_Text_08193B21
# 18 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	msgbox Naranja_GraniteCave_G24_M01_Text_08193B4C, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_G24_M01_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 23 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_GRANITE_CAVE_681, Naranja_GraniteCave_G24_M01_Text_08193BB7, Naranja_GraniteCave_G24_M01_Text_08193C10, Naranja_GraniteCave_G24_M01_Text_08193C9F
# 24 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 25 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 26 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6E2
# 27 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	msgbox Naranja_GraniteCave_G24_M01_Text_08193C35, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C6E2::
# 32 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle_rematch_double TRAINER_NARANJA_GRANITE_CAVE_681, Naranja_GraniteCave_G24_M01_Text_08193E75, Naranja_GraniteCave_G24_M01_Text_08193ECE, Naranja_GraniteCave_G24_M01_Text_08193F59
# 33 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	msgbox Naranja_GraniteCave_G24_M01_Text_08193EF3, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_G24_M01_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 38 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_GRANITE_CAVE_681, Naranja_GraniteCave_G24_M01_Text_08193D10, Naranja_GraniteCave_G24_M01_Text_08193D6E, Naranja_GraniteCave_G24_M01_Text_08193DFB
# 39 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 40 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 41 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C728
# 42 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	msgbox Naranja_GraniteCave_G24_M01_Text_08193D9A, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_G24_M01_EventScript_Sub_0815C728::
# 47 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	trainerbattle_rematch_double TRAINER_NARANJA_GRANITE_CAVE_681, Naranja_GraniteCave_G24_M01_Text_08193FCA, Naranja_GraniteCave_G24_M01_Text_0819403A, Naranja_GraniteCave_G24_M01_Text_081940DF
# 48 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	msgbox Naranja_GraniteCave_G24_M01_Text_08194066, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_G24_M01_Text_081939C5::
# 52 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "This is where we DRAGON users do our\ntraining.\pThe CHAMPION even visits.\nNow do you see how special it is here?$"

Naranja_GraniteCave_G24_M01_Text_08193A35::
# 56 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "Urgh!\nI didn’t expect you to be so strong!$"

Naranja_GraniteCave_G24_M01_Text_08193A60::
# 60 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "The road ahead remains long and harsh.\pWhen will my POKéMON and I become the\nbest?$"

Naranja_GraniteCave_G24_M01_Text_08193AB3::
# 64 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "Since we met, we have trained hard\nwith our sights on number one.\pHelp us see how much stronger we’ve\nbecome!$"

Naranja_GraniteCave_G24_M01_Text_08193B21::
# 68 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "Urgh!\nI didn’t expect you to be so strong!$"

Naranja_GraniteCave_G24_M01_Text_08193B4C::
# 72 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "You’ve obviously kept up your\nPOKéMON training.\pSo long as you remain strong, I, too,\ncan become stronger!$"

Naranja_GraniteCave_G24_M01_Text_08193BB7::
# 76 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: We’ve always battled POKéMON\ntogether as a twosome.\lWe’ve confidence in ourselves.$"

Naranja_GraniteCave_G24_M01_Text_08193C10::
# 80 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Oh, my.\nWe’ve lost, dear wife.$"

Naranja_GraniteCave_G24_M01_Text_08193C35::
# 84 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: We’ve been married for\nfifty years.\pCome to think of it, I’ve yet to beat\nmy dear wife in a battle.$"

Naranja_GraniteCave_G24_M01_Text_08193C9F::
# 88 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\pWill you battle with us? If so, you’ll\nhave to return with more POKéMON.$"

Naranja_GraniteCave_G24_M01_Text_08193D10::
# 92 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: We’ve been married for\nfifty years.\pThe bond we share as a couple could\nnever be broken.$"

Naranja_GraniteCave_G24_M01_Text_08193D6E::
# 96 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Oh, dear.\nWe’ve lost, my dear husband.$"

Naranja_GraniteCave_G24_M01_Text_08193D9A::
# 100 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Fifty years of marriage...\pIf we ever argued, we always settled\nit with a POKéMON battle...$"

Naranja_GraniteCave_G24_M01_Text_08193DFB::
# 104 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Well, well, aren’t you a young\nTRAINER?\pIf you’d care to battle with us, you’ll\nhave to come back with more POKéMON.$"

Naranja_GraniteCave_G24_M01_Text_08193E75::
# 108 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: We’ve always battled POKéMON\ntogether as a twosome.\lWe’ve confidence in ourselves.$"

Naranja_GraniteCave_G24_M01_Text_08193ECE::
# 112 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Oh, my.\nWe’ve lost, dear wife.$"

Naranja_GraniteCave_G24_M01_Text_08193EF3::
# 116 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Married for fifty years...\pOn reflection, the dear wife and I,\nwe battled day in and day out...$"

Naranja_GraniteCave_G24_M01_Text_08193F59::
# 120 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JOHN: Well, well, what a young\nTRAINER!\pWill you battle with us? If so, you’ll\nhave to return with more POKéMON.$"

Naranja_GraniteCave_G24_M01_Text_08193FCA::
# 124 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: We’ve been married for\nfifty years.\pWe’ve supported each other all that\ntime. We’ve made ourselves strong.$"

Naranja_GraniteCave_G24_M01_Text_0819403A::
# 128 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Oh, dear.\nWe’ve lost, my dear husband.$"

Naranja_GraniteCave_G24_M01_Text_08194066::
# 132 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Fifty years of marriage...\nMany things have happened.\pI hope that we will continue to make\nhappy memories together.$"

Naranja_GraniteCave_G24_M01_Text_081940DF::
# 136 "data/maps/Naranja_GraniteCave_G24_M01/scripts.pory"
	.string "JAY: Well, well, aren’t you a young\nTRAINER?\pIf you’d care to battle with us, you’ll\nhave to come back with more POKéMON.$"
