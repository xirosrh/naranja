Naranja_Route110_G29_M10_MapScripts::
	.byte 0


Naranja_Route110_G29_M10_EventScript_Sign_1::
# 8 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	lockall
# 9 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_12, 0
# 10 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M10_EventScript_Sub_0816342E
# 11 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M10_EventScript_Sub_0816342E::
# 15 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_12, 1
# 16 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M10_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 20 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_076, LOCALID_NONE, Naranja_Route110_G29_M10_Text_0819E178, Naranja_Route110_G29_M10_Text_0819E1A1
# 21 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	msgbox Naranja_Route110_G29_M10_Text_0819E1C5, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M10_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 26 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_093, LOCALID_NONE, Naranja_Route110_G29_M10_Text_0819E201, Naranja_Route110_G29_M10_Text_0819E22C
# 27 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	msgbox Naranja_Route110_G29_M10_Text_0819E24C, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M10_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId2::
# 32 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_077, LOCALID_NONE, Naranja_Route110_G29_M10_Text_0819E284, Naranja_Route110_G29_M10_Text_0819E2C1
# 33 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	msgbox Naranja_Route110_G29_M10_Text_0819E2EE, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M10_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 38 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7F
# 39 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 40 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M10_Text_0819E178::
# 44 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "Not many TRAINERS have made it\nthis far.$"

Naranja_Route110_G29_M10_Text_0819E1A1::
# 48 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "That must mean you’re tough, too...$"

Naranja_Route110_G29_M10_Text_0819E1C5::
# 52 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "You’ve beaten the POKéMON LEAGUE\nCHAMPION? That’s too much!$"

Naranja_Route110_G29_M10_Text_0819E201::
# 56 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "Consider yourself lucky to be\nbattling me!$"

Naranja_Route110_G29_M10_Text_0819E22C::
# 60 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "This isn’t right!\nI can’t lose!$"

Naranja_Route110_G29_M10_Text_0819E24C::
# 64 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "It’s a miracle that you beat me.\nYou can brag about it.$"

Naranja_Route110_G29_M10_Text_0819E284::
# 68 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "You’ve been slugging through the TRICK\nHOUSE challenge, too.$"

Naranja_Route110_G29_M10_Text_0819E2C1::
# 72 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "I see...\nYou possess an extraordinary style.$"

Naranja_Route110_G29_M10_Text_0819E2EE::
# 76 "data/maps/Naranja_Route110_G29_M10/scripts.pory"
	.string "Seeing someone like you should please\nthe TRICK MASTER.$"
