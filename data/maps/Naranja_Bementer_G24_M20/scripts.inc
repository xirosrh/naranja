Naranja_Bementer_G24_M20_MapScripts::
	.byte 0


Naranja_Bementer_G24_M20_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId1::
# 8 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_108, LOCALID_NONE, Naranja_Bementer_G24_M20_Text_081969FE, Naranja_Bementer_G24_M20_Text_08196A30
# 9 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M20_EventScript_Sub_0815D46F
# 12 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M20_Text_08196A4C
# 13 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M20_EventScript_Sub_0815D46F::
# 18 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_BEMENTER_108, LOCALID_NONE, Naranja_Bementer_G24_M20_Text_08196A95, Naranja_Bementer_G24_M20_Text_08196AB1
# 19 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M20_Text_08196AC9
# 20 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M20_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 25 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13E
# 26 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 27 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M20_Text_081969FE::
# 31 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	.string "When I’m here...\nA curious power flows into me...$"

Naranja_Bementer_G24_M20_Text_08196A30::
# 35 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	.string "The power is ebbing away...$"

Naranja_Bementer_G24_M20_Text_08196A4C::
# 39 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	.string "Perhaps the power is from the spirits\nof POKéMON in fitful sleep here...$"

Naranja_Bementer_G24_M20_Text_08196A95::
# 43 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	.string "Behind you...\nWhat is it...$"

Naranja_Bementer_G24_M20_Text_08196AB1::
# 47 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	.string "Something faded away...$"

Naranja_Bementer_G24_M20_Text_08196AC9::
# 51 "data/maps/Naranja_Bementer_G24_M20/scripts.pory"
	.string "The POKéMON at rest here...\nSometimes, they play...$"
