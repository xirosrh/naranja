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
	trainerbattle_single TRAINER_NARANJA_JAGGED_PASS_632, Naranja_JaggedPass_G24_M13_Text_08195DAC, Naranja_JaggedPass_G24_M13_Text_08195E27
# 28 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	msgbox Naranja_JaggedPass_G24_M13_Text_08195E3E, MSGBOX_AUTOCLOSE
	end


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId4::
# 33 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_JAGGED_PASS_474, Naranja_JaggedPass_G24_M13_Text_08195E9E, Naranja_JaggedPass_G24_M13_Text_08195EDF
# 34 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 35 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 36 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	goto_if EQUAL, Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D2C3
# 37 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	msgbox Naranja_JaggedPass_G24_M13_Text_08195F04, MSGBOX_AUTOCLOSE
	end


Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D2C3::
# 42 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_JAGGED_PASS_474, Naranja_JaggedPass_G24_M13_Text_08195F58, Naranja_JaggedPass_G24_M13_Text_08195F8C
# 43 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	msgbox Naranja_JaggedPass_G24_M13_Text_08195FB9, MSGBOX_AUTOCLOSE
	end


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId2::
# 48 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_JAGGED_PASS_216, Naranja_JaggedPass_G24_M13_Text_08195FF2, Naranja_JaggedPass_G24_M13_Text_08196032
# 49 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 50 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 51 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	goto_if EQUAL, Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D301
# 52 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	msgbox Naranja_JaggedPass_G24_M13_Text_08196077, MSGBOX_AUTOCLOSE
	end


Naranja_JaggedPass_G24_M13_EventScript_Sub_0815D301::
# 57 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_JAGGED_PASS_216, Naranja_JaggedPass_G24_M13_Text_081960AA, Naranja_JaggedPass_G24_M13_Text_081960E2
# 58 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	msgbox Naranja_JaggedPass_G24_M13_Text_08196118, MSGBOX_AUTOCLOSE
	end


Naranja_JaggedPass_G24_M13_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 63 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	setorcopyvar VAR_0x8000, 0xF
# 64 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 65 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	callstd 1
	end


Naranja_JaggedPass_G24_M13_Text_08195DAC::
# 69 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "MT. CHIMNEY’s JAGGED PASS...\pNow this is what I’ve always wanted\nin a mountain.\pThis jagged bumpiness...\nIt rocks my soul!$"

Naranja_JaggedPass_G24_M13_Text_08195E27::
# 73 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Losing left me bitter!$"

Naranja_JaggedPass_G24_M13_Text_08195E3E::
# 77 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Yes, I did lose at POKéMON...\pBut, when it comes to the love of\nthe mountains, I have you beat!$"

Naranja_JaggedPass_G24_M13_Text_08195E9E::
# 81 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "This place isn’t your casual hike.\nIt’s not suited for a picnic.$"

Naranja_JaggedPass_G24_M13_Text_08195EDF::
# 85 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Ohhh, no!\nThe ground is too bumpy...$"

Naranja_JaggedPass_G24_M13_Text_08195F04::
# 89 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Did you know?\pSome people cleverly ride their\nbicycles up this horribly bumpy pass.$"

Naranja_JaggedPass_G24_M13_Text_08195F58::
# 93 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "Picnics are fun wherever you go.\nJust like POKéMON!$"

Naranja_JaggedPass_G24_M13_Text_08195F8C::
# 97 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I only lost because the ground is\ntoo bumpy!$"

Naranja_JaggedPass_G24_M13_Text_08195FB9::
# 101 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I’ll forget about losing and just\nenjoy this bumpy hike.$"

Naranja_JaggedPass_G24_M13_Text_08195FF2::
# 105 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\nIt’s a good place for training.$"

Naranja_JaggedPass_G24_M13_Text_08196032::
# 109 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "It was all over while we were still\ntrying to find a good footing...$"

Naranja_JaggedPass_G24_M13_Text_08196077::
# 113 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "If I had an ACRO BIKE, I’d be able to\njump ledges.$"

Naranja_JaggedPass_G24_M13_Text_081960AA::
# 117 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I got used to this bumpiness.\nI sing while I climb now.$"

Naranja_JaggedPass_G24_M13_Text_081960E2::
# 121 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "It’s still not easy to battle on this\nbumpy ground...$"

Naranja_JaggedPass_G24_M13_Text_08196118::
# 125 "data/maps/Naranja_JaggedPass_G24_M13/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\nin MAUVILLE CITY...$"
