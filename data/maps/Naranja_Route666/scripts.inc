Naranja_Route666_MapScripts::
# 5 "data/maps/Naranja_Route666/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route666_OnTransition
	.byte 0


Naranja_Route666_OnTransition::
# 9 "data/maps/Naranja_Route666/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_Route666/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_081A02C1
	end


Naranja_Route666_EventScript_SwimmerM::
# 15 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_374, Naranja_Route666_Text_081C17A8, Naranja_Route666_Text_081C17DD
# 16 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C17EC, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_SwimmerF::
# 21 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_384, Naranja_Route666_Text_081C1828, Naranja_Route666_Text_081C1860
# 22 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C1877, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_Fisherman::
# 27 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_667, Naranja_Route666_Text_081C18CC, Naranja_Route666_Text_081C1930
# 28 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C195D, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_Fisherman_3::
# 33 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_668, Naranja_Route666_Text_081C19A3, Naranja_Route666_Text_081C19D6
# 34 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C19E7, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_Fisherman_2::
# 39 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_669, Naranja_Route666_Text_081C1A2E, Naranja_Route666_Text_081C1A73
# 40 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C1AA0, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_BlackBelt::
# 45 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_672, Naranja_Route666_Text_081C1AE2, Naranja_Route666_Text_081C1B2A
# 46 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C1B39, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_Man6::
# 51 "data/maps/Naranja_Route666/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE666_674, Naranja_Route666_Text_081C1B92, Naranja_Route666_Text_081C1BD9
# 52 "data/maps/Naranja_Route666/scripts.pory"
	msgbox Naranja_Route666_Text_081C1BEC, MSGBOX_AUTOCLOSE
	end


Naranja_Route666_EventScript_ItemBall::
# 57 "data/maps/Naranja_Route666/scripts.pory"
	setorcopyvar VAR_0x8000, 0x46
# 58 "data/maps/Naranja_Route666/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 59 "data/maps/Naranja_Route666/scripts.pory"
	callstd 1
	end


Naranja_Route666_EventScript_ItemBall_2::
# 64 "data/maps/Naranja_Route666/scripts.pory"
	setorcopyvar VAR_0x8000, 0x42
# 65 "data/maps/Naranja_Route666/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 66 "data/maps/Naranja_Route666/scripts.pory"
	callstd 1
	end


Naranja_Route666_Text_081C17A8::
# 70 "data/maps/Naranja_Route666/scripts.pory"
	.string "I can see it in your face. You want\nto challenge me.$"

Naranja_Route666_Text_081C17DD::
# 74 "data/maps/Naranja_Route666/scripts.pory"
	.string "Awawawawawa...$"

Naranja_Route666_Text_081C17EC::
# 78 "data/maps/Naranja_Route666/scripts.pory"
	.string "A well-played match leaves me feeling\nrefreshed and serene.$"

Naranja_Route666_Text_081C1828::
# 82 "data/maps/Naranja_Route666/scripts.pory"
	.string "Do you have a rival whom you just\nhate to lose against?$"

Naranja_Route666_Text_081C1860::
# 86 "data/maps/Naranja_Route666/scripts.pory"
	.string "Arrrgh! I hate losing!$"

Naranja_Route666_Text_081C1877::
# 90 "data/maps/Naranja_Route666/scripts.pory"
	.string "If you have a rival, don’t you get the\nfeeling that you have to keep getting\lbetter?$"

Naranja_Route666_Text_081C18CC::
# 94 "data/maps/Naranja_Route666/scripts.pory"
	.string "Through fishing, I have attained a\nstate of becalmed serenity...\lPlease, allow me to demonstrate...$"

Naranja_Route666_Text_081C1930::
# 98 "data/maps/Naranja_Route666/scripts.pory"
	.string "Though I have lost, my heart remains\ncalm...$"

Naranja_Route666_Text_081C195D::
# 102 "data/maps/Naranja_Route666/scripts.pory"
	.string "It matters not that I catch nothing.\nThe line remains in the water...$"

Naranja_Route666_Text_081C19A3::
# 106 "data/maps/Naranja_Route666/scripts.pory"
	.string "Whoops! Don’t tell me I snagged\na SURFING POKéMON?$"

Naranja_Route666_Text_081C19D6::
# 110 "data/maps/Naranja_Route666/scripts.pory"
	.string "I can’t keep up!$"

Naranja_Route666_Text_081C19E7::
# 114 "data/maps/Naranja_Route666/scripts.pory"
	.string "Your POKéMON look pretty strong.\nThey’d be a handful if I hooked them!$"

Naranja_Route666_Text_081C1A2E::
# 118 "data/maps/Naranja_Route666/scripts.pory"
	.string "Well, hey! This is a match between a\nPOKéMON fan and a fishing buff!$"

Naranja_Route666_Text_081C1A73::
# 122 "data/maps/Naranja_Route666/scripts.pory"
	.string "No! My line’s all tangled!\nThe party’s over!$"

Naranja_Route666_Text_081C1AA0::
# 126 "data/maps/Naranja_Route666/scripts.pory"
	.string "My fishing line’s doing a dance!\nThe tangle tango! Hahaha, snarl!$"

Naranja_Route666_Text_081C1AE2::
# 130 "data/maps/Naranja_Route666/scripts.pory"
	.string "What I learned at DEWFORD’s POKéMON\nGYM, I will put into practice here.$"

Naranja_Route666_Text_081C1B2A::
# 134 "data/maps/Naranja_Route666/scripts.pory"
	.string "I was swamped!$"

Naranja_Route666_Text_081C1B39::
# 138 "data/maps/Naranja_Route666/scripts.pory"
	.string "BRAWLY, DEWFORD’s GYM LEADER, used\nto train with a guy named BRUNO in\lKANTO, I’ve heard.$"

Naranja_Route666_Text_081C1B92::
# 142 "data/maps/Naranja_Route666/scripts.pory"
	.string "BIRD POKéMON have excellent vision.\nThey spot prey from great heights.$"

Naranja_Route666_Text_081C1BD9::
# 146 "data/maps/Naranja_Route666/scripts.pory"
	.string "Whew... I give up.$"

Naranja_Route666_Text_081C1BEC::
# 150 "data/maps/Naranja_Route666/scripts.pory"
	.string "There’re lots of diving spots in the\nsea around here.\pYou can spot them easily from the sky\nbecause of their darker color.$"
