Naranja_Route126_G00_M41_MapScripts::
# 5 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route126_G00_M41_OnTransition
	.byte 0


Naranja_Route126_G00_M41_OnTransition::
# 9 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
	end


Naranja_Route126_G00_M41_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 15 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE126_163, LOCALID_NONE, Naranja_Route126_G00_M41_Text_081C1590, Naranja_Route126_G00_M41_Text_081C15C3
# 16 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	loadword 0, Naranja_Route126_G00_M41_Text_081C15D8
# 17 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	callstd 6
	end


Naranja_Route126_G00_M41_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId2::
# 22 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE126_164, LOCALID_NONE, Naranja_Route126_G00_M41_Text_081C1627, Naranja_Route126_G00_M41_Text_081C1660
# 23 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	loadword 0, Naranja_Route126_G00_M41_Text_081C166F
# 24 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	callstd 6
	end


Naranja_Route126_G00_M41_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 29 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE126_453, LOCALID_NONE, Naranja_Route126_G00_M41_Text_081C16AB, Naranja_Route126_G00_M41_Text_081C16C5
# 30 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	loadword 0, Naranja_Route126_G00_M41_Text_081C1702
# 31 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	callstd 6
	end


Naranja_Route126_G00_M41_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 36 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE126_454, LOCALID_NONE, Naranja_Route126_G00_M41_Text_081C1741, Naranja_Route126_G00_M41_Text_081C1766
# 37 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	loadword 0, Naranja_Route126_G00_M41_Text_081C1773
# 38 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	callstd 6
	end


Naranja_Route126_G00_M41_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 43 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	setorcopyvar VAR_0x8000, 0x33
# 44 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 45 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	callstd 1
	end


Naranja_Route126_G00_M41_Text_081C1590::
# 49 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "Swimming is a full-body workout!\nYou will get fit!$"

Naranja_Route126_G00_M41_Text_081C15C3::
# 53 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "I admit it! You win!$"

Naranja_Route126_G00_M41_Text_081C15D8::
# 57 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "Thanks to my daily swimming routine...\nLook! Feast your eyes on this physique!$"

Naranja_Route126_G00_M41_Text_081C1627::
# 61 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "This towering white mountain of rock\nis SOOTOPOLIS CITY.$"

Naranja_Route126_G00_M41_Text_081C1660::
# 65 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "I was done in?$"

Naranja_Route126_G00_M41_Text_081C166F::
# 69 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "I can’t find the entrance to\nSOOTOPOLIS. Where could it be?$"

Naranja_Route126_G00_M41_Text_081C16AB::
# 73 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "Ufufufufu!\nI’m a mermaid!$"

Naranja_Route126_G00_M41_Text_081C16C5::
# 77 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "My fantasy burst as if it were a bubble!\nBlub, blub, blub...$"

Naranja_Route126_G00_M41_Text_081C1702::
# 81 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "You thrashed me... I want to\ndisappear in a wave of despair...$"

Naranja_Route126_G00_M41_Text_081C1741::
# 85 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "Hello, kiddo!\nWant a battle with me?$"

Naranja_Route126_G00_M41_Text_081C1766::
# 89 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "Oh, noooooh!$"

Naranja_Route126_G00_M41_Text_081C1773::
# 93 "data/maps/Naranja_Route126_G00_M41/scripts.pory"
	.string "I love frolicking with POKéMON in\nthe sea like this!$"
