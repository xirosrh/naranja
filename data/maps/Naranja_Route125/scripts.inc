Naranja_Route125_MapScripts::
# 5 "data/maps/Naranja_Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route125_OnTransition
	.byte 0


Naranja_Route125_OnTransition::
# 9 "data/maps/Naranja_Route125/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_Route125/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_081A02C1
	end


Naranja_Route125_EventScript_SwimmerM::
# 15 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE125_161, Naranja_Route125_Text_081C0FCF, Naranja_Route125_Text_081C1002
# 16 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C1013, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_SwimmerM_2::
# 21 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE125_162, Naranja_Route125_Text_081C104B, Naranja_Route125_Text_081C1073
# 22 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C1083, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_SwimmerF::
# 27 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE125_451, Naranja_Route125_Text_081C10C3, Naranja_Route125_Text_081C10FB
# 28 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C110C, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_SwimmerF_2::
# 33 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE125_452, Naranja_Route125_Text_081C1136, Naranja_Route125_Text_081C1175
# 34 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C117F, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_Sailor::
# 39 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE125_492, Naranja_Route125_Text_081C11AF, Naranja_Route125_Text_081C11ED
# 40 "data/maps/Naranja_Route125/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 41 "data/maps/Naranja_Route125/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 42 "data/maps/Naranja_Route125/scripts.pory"
	goto_if EQUAL, Naranja_Route125_EventScript_Sub_08151FB1
# 43 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C1208, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_Sub_08151FB1::
# 48 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE125_492, Naranja_Route125_Text_081C1282, Naranja_Route125_Text_081C12C5
# 49 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C12EE, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_Lass::
# 54 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE125_678, Naranja_Route125_Text_081C13A1, Naranja_Route125_Text_081C13FF, Naranja_Route125_Text_081C146E
# 55 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C141C, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_EventScript_Lass_2::
# 60 "data/maps/Naranja_Route125/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE125_678, Naranja_Route125_Text_081C14AB, Naranja_Route125_Text_081C14E7, Naranja_Route125_Text_081C154F
# 61 "data/maps/Naranja_Route125/scripts.pory"
	msgbox Naranja_Route125_Text_081C1508, MSGBOX_AUTOCLOSE
	end


Naranja_Route125_Text_081C0FCF::
# 65 "data/maps/Naranja_Route125/scripts.pory"
	.string "I heard you approaching, so I hung\naround for you!$"

Naranja_Route125_Text_081C1002::
# 69 "data/maps/Naranja_Route125/scripts.pory"
	.string "I beg for peace!$"

Naranja_Route125_Text_081C1013::
# 73 "data/maps/Naranja_Route125/scripts.pory"
	.string "Sound travels faster in water than\nit does through air.$"

Naranja_Route125_Text_081C104B::
# 77 "data/maps/Naranja_Route125/scripts.pory"
	.string "Hey, there!\nCheck out my sweet POKéMON!$"

Naranja_Route125_Text_081C1073::
# 81 "data/maps/Naranja_Route125/scripts.pory"
	.string "I floundered...$"

Naranja_Route125_Text_081C1083::
# 85 "data/maps/Naranja_Route125/scripts.pory"
	.string "I was blown away by HORSEA’s charm,\nso I started swimming, too.$"

Naranja_Route125_Text_081C10C3::
# 89 "data/maps/Naranja_Route125/scripts.pory"
	.string "I’m tired of swimming.\nAre you up for a battle with me?$"

Naranja_Route125_Text_081C10FB::
# 93 "data/maps/Naranja_Route125/scripts.pory"
	.string "You’re too much!$"

Naranja_Route125_Text_081C110C::
# 97 "data/maps/Naranja_Route125/scripts.pory"
	.string "Whew...\nWhich way is it to MOSSDEEP CITY?$"

Naranja_Route125_Text_081C1136::
# 101 "data/maps/Naranja_Route125/scripts.pory"
	.string "How would you like to take on the\nWATER-type POKéMON I raised?$"

Naranja_Route125_Text_081C1175::
# 105 "data/maps/Naranja_Route125/scripts.pory"
	.string "I lost...$"

Naranja_Route125_Text_081C117F::
# 109 "data/maps/Naranja_Route125/scripts.pory"
	.string "Your power... You’re the real deal.\nI’m amazed!$"

Naranja_Route125_Text_081C11AF::
# 113 "data/maps/Naranja_Route125/scripts.pory"
	.string "Ahoy! I’m a buff, tough SAILOR!\nI’ve braved the world’s seas!$"

Naranja_Route125_Text_081C11ED::
# 117 "data/maps/Naranja_Route125/scripts.pory"
	.string "Gwrroooar!\nI couldn’t win!$"

Naranja_Route125_Text_081C1208::
# 121 "data/maps/Naranja_Route125/scripts.pory"
	.string "The tide ebbs and flows inside the\nSHOAL CAVE.\pBy the way, it’s about six hours from\nhigh tide to low tide. Did you know?$"

Naranja_Route125_Text_081C1282::
# 125 "data/maps/Naranja_Route125/scripts.pory"
	.string "It’s high time I get my payback\nfrom you! Come on, we’re battling!$"

Naranja_Route125_Text_081C12C5::
# 129 "data/maps/Naranja_Route125/scripts.pory"
	.string "I couldn’t win!\nI flat out couldn’t win!$"

Naranja_Route125_Text_081C12EE::
# 133 "data/maps/Naranja_Route125/scripts.pory"
	.string "The SHOAL CAVE...\pThere are places you can and can’t\nget to depending on the rise and fall\lof the tide.\pBy the way, it’s about six hours from\nhigh tide to low tide. Don’t forget!$"

Naranja_Route125_Text_081C13A1::
# 137 "data/maps/Naranja_Route125/scripts.pory"
	.string "KIM: A funny old man lives in the\nSHOAL CAVE. Someone told me.\lAre you going to see him, too?$"

Naranja_Route125_Text_081C13FF::
# 141 "data/maps/Naranja_Route125/scripts.pory"
	.string "KIM: I thought we would win.$"

Naranja_Route125_Text_081C141C::
# 145 "data/maps/Naranja_Route125/scripts.pory"
	.string "KIM: A funny old man lives in the\nSHOAL CAVE, doesn’t he?\pLet’s go see him, IRIS!$"

Naranja_Route125_Text_081C146E::
# 149 "data/maps/Naranja_Route125/scripts.pory"
	.string "KIM: No, no, no! You need two POKéMON,\nor it’s just no good!$"

Naranja_Route125_Text_081C14AB::
# 153 "data/maps/Naranja_Route125/scripts.pory"
	.string "IRIS: KIM, can you tell me what we’re\nlooking for out here?$"

Naranja_Route125_Text_081C14E7::
# 157 "data/maps/Naranja_Route125/scripts.pory"
	.string "IRIS: Oh, we came sort of close.$"

Naranja_Route125_Text_081C1508::
# 161 "data/maps/Naranja_Route125/scripts.pory"
	.string "IRIS: KIM, are we really going into\nthe SHOAL CAVE?\lWe’ll get all wet.$"

Naranja_Route125_Text_081C154F::
# 165 "data/maps/Naranja_Route125/scripts.pory"
	.string "IRIS: Oh, we could never, ever do\nanything like a 2-on-1 battle.$"
