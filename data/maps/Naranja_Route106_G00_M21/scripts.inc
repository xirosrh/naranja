Naranja_Route106_G00_M21_MapScripts::
	.byte 0


Naranja_Route106_G00_M21_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 8 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE106_153, Naranja_Route106_G00_M21_Text_081B913D, Naranja_Route106_G00_M21_Text_081B917F
# 9 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	msgbox Naranja_Route106_G00_M21_Text_081B918A, MSGBOX_AUTOCLOSE
	end


Naranja_Route106_G00_M21_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 14 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE106_443, Naranja_Route106_G00_M21_Text_081B91AC, Naranja_Route106_G00_M21_Text_081B91F8
# 15 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	msgbox Naranja_Route106_G00_M21_Text_081B9222, MSGBOX_AUTOCLOSE
	end


Naranja_Route106_G00_M21_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId3::
# 20 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE106_339, Naranja_Route106_G00_M21_Text_081B8EF0, Naranja_Route106_G00_M21_Text_081B8F25
# 21 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 22 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 23 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	goto_if EQUAL, Naranja_Route106_G00_M21_EventScript_Sub_0814F38D
# 24 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	msgbox Naranja_Route106_G00_M21_Text_081B8F55, MSGBOX_AUTOCLOSE
	end


Naranja_Route106_G00_M21_EventScript_Sub_0814F38D::
# 29 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE106_339, Naranja_Route106_G00_M21_Text_081B8FAC, Naranja_Route106_G00_M21_Text_081B8FF5
# 30 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	msgbox Naranja_Route106_G00_M21_Text_081B9011, MSGBOX_AUTOCLOSE
	end


Naranja_Route106_G00_M21_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId4::
# 35 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE106_340, Naranja_Route106_G00_M21_Text_081B9052, Naranja_Route106_G00_M21_Text_081B90D3
# 36 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	msgbox Naranja_Route106_G00_M21_Text_081B910A, MSGBOX_AUTOCLOSE
	end


Naranja_Route106_G00_M21_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 41 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	setorcopyvar VAR_0x8000, 0x40
# 42 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 43 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	callstd 1
	end


Naranja_Route106_G00_M21_EventScript_Sign_4::
# 48 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE106_EVENT_COMPLETE_213A
# 49 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 50 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE106_EVENT_COMPLETE_213A
# 51 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 52 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	setflag FLAG_NARANJA_ROUTE106_EVENT_COMPLETE_213A
# 53 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	setwildbattle SPECIES_SQUIRTLE, 5, 0
# 54 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	special BattleSetup_StartLatiBattle
# 55 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	release
	end


Naranja_Route106_G00_M21_Text_081B8EF0::
# 59 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Which do you prefer, fishing in the\nsea or a stream?$"

Naranja_Route106_G00_M21_Text_081B8F25::
# 63 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Like in deep-sea fishing, I lost\nspectacularly!$"

Naranja_Route106_G00_M21_Text_081B8F55::
# 67 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Fishing is the greatest whether it’s\nin the sea or a stream.\lYou agree with me, right?$"

Naranja_Route106_G00_M21_Text_081B8FAC::
# 71 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "I caught a bunch of POKéMON fishing.\nI’ll show you an impressive battle!$"

Naranja_Route106_G00_M21_Text_081B8FF5::
# 75 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "I lost again spectacularly!$"

Naranja_Route106_G00_M21_Text_081B9011::
# 79 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Win or lose, POKéMON are the greatest!\nYou agree with me, right?$"

Naranja_Route106_G00_M21_Text_081B9052::
# 83 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "What do people do if they need to go\nto a washroom?\pWhat if my ROD hooks a big one while\nI’m in the washroom? I just can’t go...$"

Naranja_Route106_G00_M21_Text_081B90D3::
# 87 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "I lost because I’m trying to not go\nto the washroom...$"

Naranja_Route106_G00_M21_Text_081B910A::
# 91 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Oh, no! I’ve got this feeling I’ll hook\na big one!$"

Naranja_Route106_G00_M21_Text_081B913D::
# 95 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Hahahah! I’m a lousy runner, but in\nthe water you can’t catch me!$"

Naranja_Route106_G00_M21_Text_081B917F::
# 99 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "I give up!$"

Naranja_Route106_G00_M21_Text_081B918A::
# 103 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "I wouldn’t lose in a swim race...$"

Naranja_Route106_G00_M21_Text_081B91AC::
# 107 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "The sea is my backyard. I’m not going\nto take it easy because you’re a kid!$"

Naranja_Route106_G00_M21_Text_081B91F8::
# 111 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Did you take it easy on me by any\nchance?$"

Naranja_Route106_G00_M21_Text_081B9222::
# 115 "data/maps/Naranja_Route106_G00_M21/scripts.pory"
	.string "Drifting along with the waves...\nI love it! Why don’t you give it a try?$"
