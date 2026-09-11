Naranja_Route110_G29_M08_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M08_OnTransition
# 6 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_Route110_G29_M08_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_Route110_G29_M08_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	map_script_2 VAR_TEMP_0, 16384, Naranja_Route110_G29_M08_OnWarp_1
	.2byte 0


Naranja_Route110_G29_M08_OnTransition::
# 12 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	special RotatingGate_InitPuzzle
	end


Naranja_Route110_G29_M08_OnWarp_1::
# 17 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
	end


Naranja_Route110_G29_M08_EventScript_Sign_1::
# 22 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	lockall
# 23 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_10, 0
# 24 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M08_EventScript_Sub_081630FC
# 25 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M08_EventScript_Sub_081630FC::
# 29 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_10, 1
# 30 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M08_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId1::
# 34 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_561, LOCALID_NONE, Naranja_Route110_G29_M08_Text_0819DC87, Naranja_Route110_G29_M08_Text_0819DCC6
# 35 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	loadword 0, Naranja_Route110_G29_M08_Text_0819DCE7
# 36 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M08_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 41 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_407, LOCALID_NONE, Naranja_Route110_G29_M08_Text_0819DD49, Naranja_Route110_G29_M08_Text_0819DD83
# 42 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	loadword 0, Naranja_Route110_G29_M08_Text_0819DD96
# 43 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M08_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId3::
# 48 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_554, LOCALID_NONE, Naranja_Route110_G29_M08_Text_0819DDCF, Naranja_Route110_G29_M08_Text_0819DDFE
# 49 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	loadword 0, Naranja_Route110_G29_M08_Text_0819DE44
# 50 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M08_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 55 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7B
# 56 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 57 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M08_Text_0819DC87::
# 61 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "When I heard there was a strange\nhouse, I had to check it out.$"

Naranja_Route110_G29_M08_Text_0819DCC6::
# 65 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "I’ve discovered a tough TRAINER!$"

Naranja_Route110_G29_M08_Text_0819DCE7::
# 69 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "I’m sure having a good time checking\nthis place out.\pIt’s a challenge I’ve found worth\nrepeating!$"

Naranja_Route110_G29_M08_Text_0819DD49::
# 73 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "Maybe I could get my BIRD POKéMON\nto fly over the wall...$"

Naranja_Route110_G29_M08_Text_0819DD83::
# 77 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "Gwaaah! I blew it!$"

Naranja_Route110_G29_M08_Text_0819DD96::
# 81 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "Ehehehe... I guess I lost because I\nwas trying to cheat.$"

Naranja_Route110_G29_M08_Text_0819DDCF::
# 85 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "I’m getting dizzy from these rotating\ndoors...$"

Naranja_Route110_G29_M08_Text_0819DDFE::
# 89 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "Everything’s spinning around and\naround. I can’t take this anymore...$"

Naranja_Route110_G29_M08_Text_0819DE44::
# 93 "data/maps/Naranja_Route110_G29_M08/scripts.pory"
	.string "You don’t seem to be affected at all.\nOr do you have your poker face on?$"
