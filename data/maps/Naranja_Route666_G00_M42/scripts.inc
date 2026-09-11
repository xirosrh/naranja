Naranja_Route666_G00_M42_MapScripts::
# 5 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route666_G00_M42_OnTransition
	.byte 0


Naranja_Route666_G00_M42_OnTransition::
# 9 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 15 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_374, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C17A8, Naranja_Route666_G00_M42_Text_081C17DD
# 16 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C17EC
# 17 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 22 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_384, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C1828, Naranja_Route666_G00_M42_Text_081C1860
# 23 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C1877
# 24 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId5::
# 29 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_667, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C18CC, Naranja_Route666_G00_M42_Text_081C1930
# 30 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C195D
# 31 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId7::
# 36 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_668, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C19A3, Naranja_Route666_G00_M42_Text_081C19D6
# 37 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C19E7
# 38 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId6::
# 43 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_669, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C1A2E, Naranja_Route666_G00_M42_Text_081C1A73
# 44 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C1AA0
# 45 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId9::
# 50 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_672, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C1AE2, Naranja_Route666_G00_M42_Text_081C1B2A
# 51 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C1B39
# 52 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId8::
# 57 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE666_674, LOCALID_NONE, Naranja_Route666_G00_M42_Text_081C1B92, Naranja_Route666_G00_M42_Text_081C1BD9
# 58 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	loadword 0, Naranja_Route666_G00_M42_Text_081C1BEC
# 59 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 6
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 64 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	setorcopyvar VAR_0x8000, 0x46
# 65 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 66 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 1
	end


Naranja_Route666_G00_M42_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 71 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	setorcopyvar VAR_0x8000, 0x42
# 72 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 73 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	callstd 1
	end


Naranja_Route666_G00_M42_Text_081C17A8::
# 77 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "I can see it in your face. You want\nto challenge me.$"

Naranja_Route666_G00_M42_Text_081C17DD::
# 81 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Awawawawawa...$"

Naranja_Route666_G00_M42_Text_081C17EC::
# 85 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "A well-played match leaves me feeling\nrefreshed and serene.$"

Naranja_Route666_G00_M42_Text_081C1828::
# 89 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Do you have a rival whom you just\nhate to lose against?$"

Naranja_Route666_G00_M42_Text_081C1860::
# 93 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Arrrgh! I hate losing!$"

Naranja_Route666_G00_M42_Text_081C1877::
# 97 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "If you have a rival, don’t you get the\nfeeling that you have to keep getting\lbetter?$"

Naranja_Route666_G00_M42_Text_081C18CC::
# 101 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Through fishing, I have attained a\nstate of becalmed serenity...\lPlease, allow me to demonstrate...$"

Naranja_Route666_G00_M42_Text_081C1930::
# 105 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Though I have lost, my heart remains\ncalm...$"

Naranja_Route666_G00_M42_Text_081C195D::
# 109 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "It matters not that I catch nothing.\nThe line remains in the water...$"

Naranja_Route666_G00_M42_Text_081C19A3::
# 113 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Whoops! Don’t tell me I snagged\na SURFING POKéMON?$"

Naranja_Route666_G00_M42_Text_081C19D6::
# 117 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "I can’t keep up!$"

Naranja_Route666_G00_M42_Text_081C19E7::
# 121 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Your POKéMON look pretty strong.\nThey’d be a handful if I hooked them!$"

Naranja_Route666_G00_M42_Text_081C1A2E::
# 125 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Well, hey! This is a match between a\nPOKéMON fan and a fishing buff!$"

Naranja_Route666_G00_M42_Text_081C1A73::
# 129 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "No! My line’s all tangled!\nThe party’s over!$"

Naranja_Route666_G00_M42_Text_081C1AA0::
# 133 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "My fishing line’s doing a dance!\nThe tangle tango! Hahaha, snarl!$"

Naranja_Route666_G00_M42_Text_081C1AE2::
# 137 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "What I learned at DEWFORD’s POKéMON\nGYM, I will put into practice here.$"

Naranja_Route666_G00_M42_Text_081C1B2A::
# 141 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "I was swamped!$"

Naranja_Route666_G00_M42_Text_081C1B39::
# 145 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "BRAWLY, DEWFORD’s GYM LEADER, used\nto train with a guy named BRUNO in\lKANTO, I’ve heard.$"

Naranja_Route666_G00_M42_Text_081C1B92::
# 149 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "BIRD POKéMON have excellent vision.\nThey spot prey from great heights.$"

Naranja_Route666_G00_M42_Text_081C1BD9::
# 153 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "Whew... I give up.$"

Naranja_Route666_G00_M42_Text_081C1BEC::
# 157 "data/maps/Naranja_Route666_G00_M42/scripts.pory"
	.string "There’re lots of diving spots in the\nsea around here.\pYou can spot them easily from the sky\nbecause of their darker color.$"
