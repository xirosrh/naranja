Naranja_JaggedPass_G24_M13_MapScripts::
# 5 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_JaggedPass_G24_M13_OnResume
# 6 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_JaggedPass_G24_M13_OnTransition
	.byte 0


Naranja_JaggedPass_G24_M13_OnResume::
# 10 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	setstepcallback 1
	end


Naranja_JaggedPass_G24_M13_OnTransition::
# 15 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE112_EVENT_STATE_2, 1
# 16 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	call_if EQUAL, Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D280
	end


Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D280::
# 21 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	setweather 7
# 22 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	doweather
	return


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_HIKER_LocalId1::
# 27 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_JAGGED_PASS_632, LOCALID_NONE, Naranja_JaggedPass_G24_M13_Text_08195DAC, Naranja_JaggedPass_G24_M13_Text_08195E27
# 28 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	loadword 0, Naranja_JaggedPass_G24_M13_Text_08195E3E
# 29 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 6
	end


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId4::
# 34 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_JAGGED_PASS_474, LOCALID_NONE, Naranja_JaggedPass_G24_M13_Text_08195E9E, Naranja_JaggedPass_G24_M13_Text_08195EDF
# 35 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 36 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 37 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	goto_if EQUAL, Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D2C3
# 38 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	loadword 0, Naranja_JaggedPass_G24_M13_Text_08195F04
# 39 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 6
	end


Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D2C3::
# 44 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_JAGGED_PASS_474, LOCALID_NONE, Naranja_JaggedPass_G24_M13_Text_08195F58, Naranja_JaggedPass_G24_M13_Text_08195F8C
# 45 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	loadword 0, Naranja_JaggedPass_G24_M13_Text_08195FB9
# 46 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 6
	end


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId2::
# 51 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_JAGGED_PASS_216, LOCALID_NONE, Naranja_JaggedPass_G24_M13_Text_08195FF2, Naranja_JaggedPass_G24_M13_Text_08196032
# 52 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 54 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	goto_if EQUAL, Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D301
# 55 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	loadword 0, Naranja_JaggedPass_G24_M13_Text_08196077
# 56 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 6
	end


Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D301::
# 61 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_JAGGED_PASS_216, LOCALID_NONE, Naranja_JaggedPass_G24_M13_Text_081960AA, Naranja_JaggedPass_G24_M13_Text_081960E2
# 62 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	loadword 0, Naranja_JaggedPass_G24_M13_Text_08196118
# 63 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 6
	end


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 68 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	setorcopyvar VAR_0x8000, 0xF
# 69 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 70 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 1
	end


Naranja_JaggedPass_G24_M13_Text_08195DAC::
# 74 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "MT. CHIMNEY’s JAGGED PASS...\pNow this is what I’ve always wanted\nin a mountain.\pThis jagged bumpiness...\nIt rocks my soul!$"

Naranja_JaggedPass_G24_M13_Text_08195E27::
# 78 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Losing left me bitter!$"

Naranja_JaggedPass_G24_M13_Text_08195E3E::
# 82 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Yes, I did lose at POKéMON...\pBut, when it comes to the love of\nthe mountains, I have you beat!$"

Naranja_JaggedPass_G24_M13_Text_08195E9E::
# 86 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "This place isn’t your casual hike.\nIt’s not suited for a picnic.$"

Naranja_JaggedPass_G24_M13_Text_08195EDF::
# 90 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Ohhh, no!\nThe ground is too bumpy...$"

Naranja_JaggedPass_G24_M13_Text_08195F04::
# 94 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Did you know?\pSome people cleverly ride their\nbicycles up this horribly bumpy pass.$"

Naranja_JaggedPass_G24_M13_Text_08195F58::
# 98 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Picnics are fun wherever you go.\nJust like POKéMON!$"

Naranja_JaggedPass_G24_M13_Text_08195F8C::
# 102 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I only lost because the ground is\ntoo bumpy!$"

Naranja_JaggedPass_G24_M13_Text_08195FB9::
# 106 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I’ll forget about losing and just\nenjoy this bumpy hike.$"

Naranja_JaggedPass_G24_M13_Text_08195FF2::
# 110 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\nIt’s a good place for training.$"

Naranja_JaggedPass_G24_M13_Text_08196032::
# 114 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "It was all over while we were still\ntrying to find a good footing...$"

Naranja_JaggedPass_G24_M13_Text_08196077::
# 118 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "If I had an ACRO BIKE, I’d be able to\njump ledges.$"

Naranja_JaggedPass_G24_M13_Text_081960AA::
# 122 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I got used to this bumpiness.\nI sing while I climb now.$"

Naranja_JaggedPass_G24_M13_Text_081960E2::
# 126 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "It’s still not easy to battle on this\nbumpy ground...$"

Naranja_JaggedPass_G24_M13_Text_08196118::
# 130 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\nin MAUVILLE CITY...$"
