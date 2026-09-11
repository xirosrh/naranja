Naranja_Route118_G00_M33_MapScripts::
# 5 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route118_G00_M33_OnTransition
	.byte 0


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId18::
# 9 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_307, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BC9AC, Naranja_Route118_G00_M33_Text_081BC9E6
# 10 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 11 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 12 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150970
# 13 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081BCA0E
# 14 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 6
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150970::
# 19 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE118_307, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BCA6B, Naranja_Route118_G00_M33_Text_081BCAB3
# 20 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081BCAC6
# 21 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 6
	end


Naranja_Route118_G00_M33_OnTransition::
# 26 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE313
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId13::
# 31 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	lock
# 32 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	faceplayer
# 33 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE118_EVENT_COMPLETE_00E3
# 34 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150F89
# 35 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_08170F12
# 36 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 5
# 37 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 38 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150F5E
# 39 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 40 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150F7F
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150F5E::
# 45 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_08170F46
# 46 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8000, 0x107
# 48 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 49 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 0
# 50 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setflag FLAG_NARANJA_ROUTE118_EVENT_COMPLETE_00E3
# 51 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_08170F7E
# 52 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 53 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150F7F::
# 58 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_08170FB0
# 59 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 60 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150F89::
# 65 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_08170FC8
# 66 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId7::
# 72 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_08170FFE
# 73 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 2
	end


Naranja_Route118_G00_M33_EventScript_Sign_2::
# 78 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_0817108B
# 79 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 3
	end


Naranja_Route118_G00_M33_EventScript_Sign_3::
# 84 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081710A5
# 85 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 3
	end


Naranja_Route118_G00_M33_EventScript_Trigger_1::
# 90 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	lockall
# 91 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setvar VAR_0x8008, 0
# 92 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 93 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	waitmovement LOCALID_NONE
# 94 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	applymovement LOCALID_ROUTE118_G00_M33_STEVEN, Naranja_InsideOfTruck_G08_M01_Movement_08151069
# 95 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	waitmovement LOCALID_NONE
# 96 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151004
	return


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId17::
# 100 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_343, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE24A, Naranja_Route118_G00_M33_Text_081BE291
# 101 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081BE2BE
# 102 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 6
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_MR_BRINEYS_BOAT_LocalId15::
# 107 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_344, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE318, Naranja_Route118_G00_M33_Text_081BE385
# 108 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081BE39C
# 109 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 6
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId4::
# 114 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_398, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE148, Naranja_Route118_G00_M33_Text_081BE188
# 115 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081BE19D
# 116 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 6
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId16::
# 121 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_408, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE1D7, Naranja_Route118_G00_M33_Text_081BE1F5
# 122 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route118_G00_M33_Text_081BE20D
# 123 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 6
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId5::
# 128 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_052, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 129 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 130 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 131 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId6::
# 136 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_052, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 137 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC015
# 138 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 139 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId8::
# 144 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_055, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 145 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 146 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 147 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId9::
# 152 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_055, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 153 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC015
# 154 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 4
# 155 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 160 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 161 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 162 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 1
	end


Naranja_Route118_G00_M33_Text_08170F12::
# 166 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hmm!\nA GOOD ROD is really good!\pWouldn’t you agree?$"

Naranja_Route118_G00_M33_Text_08170F46::
# 170 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hmm!\nWe’re of identical minds!\pHmm!\nTake this GOOD ROD!$"

Naranja_Route118_G00_M33_Text_08170F7E::
# 174 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Wherever there’s water, try your luck\nat fishing.$"

Naranja_Route118_G00_M33_Text_08170FB0::
# 178 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Don’t you like to fish?$"

Naranja_Route118_G00_M33_Text_08170FC8::
# 182 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Try catching all sorts of POKéMON\nwith your GOOD ROD.$"

Naranja_Route118_G00_M33_Text_08170FFE::
# 186 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Even if there isn’t a boat, you can\ncross rivers and the sea if you have\la POKéMON that knows SURF.\pPOKéMON can be counted on to do so\nmuch!$"

Naranja_Route118_G00_M33_Text_0817108B::
# 190 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "ROUTE 118\nロ MAUVILLE CITY$"

Naranja_Route118_G00_M33_Text_081710A5::
# 194 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "ROUTE 118\nル ROUTE 119$"

Naranja_Route118_G00_M33_Text_081BC9AC::
# 198 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hm...\nYou seem rather capable...\lLet me keep you company!$"

Naranja_Route118_G00_M33_Text_081BC9E6::
# 202 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "You’re much stronger than\nI’d imagined!$"

Naranja_Route118_G00_M33_Text_081BCA0E::
# 206 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "There is no such thing as a born genius.\nIt all depends on effort!\lThat is what I believe...$"

Naranja_Route118_G00_M33_Text_081BCA6B::
# 210 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hm... As always, your agility speaks\nfor itself.\lCome, keep me company!$"

Naranja_Route118_G00_M33_Text_081BCAB3::
# 214 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "As strong as ever!$"

Naranja_Route118_G00_M33_Text_081BCAC6::
# 218 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "All it takes is effort!\pI lost because I haven’t put in enough\neffort!$"

Naranja_Route118_G00_M33_Text_081BE148::
# 222 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "BIRD POKéMON that FLY elegantly in\nthe sky... They’re the best!$"

Naranja_Route118_G00_M33_Text_081BE188::
# 226 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Urgh... I crashed...$"

Naranja_Route118_G00_M33_Text_081BE19D::
# 230 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "You’ve got great POKéMON.\nI’ll have to train mine better.$"

Naranja_Route118_G00_M33_Text_081BE1D7::
# 234 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Take flight!\nMy BIRD POKéMON!$"

Naranja_Route118_G00_M33_Text_081BE1F5::
# 238 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "They did take flight...$"

Naranja_Route118_G00_M33_Text_081BE20D::
# 242 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "If they’d get stronger, they’d be able\nto fly more freely...$"

Naranja_Route118_G00_M33_Text_081BE24A::
# 246 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I’m a FISHERMAN, but also a TRAINER.\nI’m raising the POKéMON I caught.$"

Naranja_Route118_G00_M33_Text_081BE291::
# 250 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I thought I was doing okay in my\ntraining...$"

Naranja_Route118_G00_M33_Text_081BE2BE::
# 254 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I couldn’t win by training POKéMON\nwhile I fished...\pWas I doing things in half measures?$"

Naranja_Route118_G00_M33_Text_081BE318::
# 258 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "For FISHERMEN, equipment is the key.\pBut for TRAINERS, the key ingredients\nare POKéMON and heart, of course!$"

Naranja_Route118_G00_M33_Text_081BE385::
# 262 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I was beaten in heart?$"

Naranja_Route118_G00_M33_Text_081BE39C::
# 266 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Come to think of it, fishing is a battle\nbetween a FISHERMAN and a POKéMON.$"
