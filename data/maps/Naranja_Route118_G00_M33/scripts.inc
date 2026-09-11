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
	msgbox Naranja_Route118_G00_M33_Text_081BCA0E, MSGBOX_AUTOCLOSE
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150970::
# 18 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE118_307, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BCA6B, Naranja_Route118_G00_M33_Text_081BCAB3
# 19 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_081BCAC6, MSGBOX_AUTOCLOSE
	end


Naranja_Route118_G00_M33_OnTransition::
# 24 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE313
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId13::
# 29 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	lock
# 30 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	faceplayer
# 31 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE118_EVENT_COMPLETE_00E3
# 32 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150F89
# 33 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_08170F12, MSGBOX_YESNO
# 34 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 35 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150F5E
# 36 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 37 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto_if EQUAL, Naranja_Route118_G00_M33_EventScript_Sub_08150F7F
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150F5E::
# 42 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_08170F46, MSGBOX_DEFAULT
# 43 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8000, 0x107
# 44 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 45 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 0
# 46 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setflag FLAG_NARANJA_ROUTE118_EVENT_COMPLETE_00E3
# 47 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_08170F7E, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150F7F::
# 53 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_08170FB0, MSGBOX_DEFAULT
# 54 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_Sub_08150F89::
# 59 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_08170FC8, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId7::
# 65 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_08170FFE, MSGBOX_NPC
	end


Naranja_Route118_G00_M33_EventScript_Sign_2::
# 70 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_0817108B, MSGBOX_SIGN
	end


Naranja_Route118_G00_M33_EventScript_Sign_3::
# 75 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_081710A5, MSGBOX_SIGN
	end


Naranja_Route118_G00_M33_EventScript_Trigger_1::
# 80 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	lockall
# 81 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setvar VAR_0x8008, 0
# 82 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 83 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	applymovement LOCALID_ROUTE118_G00_M33_STEVEN, Naranja_InsideOfTruck_G08_M01_Movement_08151069
# 85 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151004
	return


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId17::
# 90 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_343, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE24A, Naranja_Route118_G00_M33_Text_081BE291
# 91 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_081BE2BE, MSGBOX_AUTOCLOSE
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_MR_BRINEYS_BOAT_LocalId15::
# 96 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_344, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE318, Naranja_Route118_G00_M33_Text_081BE385
# 97 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_081BE39C, MSGBOX_AUTOCLOSE
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId4::
# 102 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_398, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE148, Naranja_Route118_G00_M33_Text_081BE188
# 103 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_081BE19D, MSGBOX_AUTOCLOSE
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId16::
# 108 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE118_408, LOCALID_NONE, Naranja_Route118_G00_M33_Text_081BE1D7, Naranja_Route118_G00_M33_Text_081BE1F5
# 109 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route118_G00_M33_Text_081BE20D, MSGBOX_AUTOCLOSE
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId5::
# 114 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_052, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 115 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId6::
# 121 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_052, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 122 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC015, MSGBOX_DEFAULT
# 123 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId8::
# 128 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_055, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 129 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 130 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId9::
# 135 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE118_055, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 136 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC015, MSGBOX_DEFAULT
# 137 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	release
	end


Naranja_Route118_G00_M33_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 142 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 143 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 144 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	callstd 1
	end


Naranja_Route118_G00_M33_Text_08170F12::
# 148 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hmm!\nA GOOD ROD is really good!\pWouldn’t you agree?$"

Naranja_Route118_G00_M33_Text_08170F46::
# 152 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hmm!\nWe’re of identical minds!\pHmm!\nTake this GOOD ROD!$"

Naranja_Route118_G00_M33_Text_08170F7E::
# 156 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Wherever there’s water, try your luck\nat fishing.$"

Naranja_Route118_G00_M33_Text_08170FB0::
# 160 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Don’t you like to fish?$"

Naranja_Route118_G00_M33_Text_08170FC8::
# 164 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Try catching all sorts of POKéMON\nwith your GOOD ROD.$"

Naranja_Route118_G00_M33_Text_08170FFE::
# 168 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Even if there isn’t a boat, you can\ncross rivers and the sea if you have\la POKéMON that knows SURF.\pPOKéMON can be counted on to do so\nmuch!$"

Naranja_Route118_G00_M33_Text_0817108B::
# 172 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "ROUTE 118\nロ MAUVILLE CITY$"

Naranja_Route118_G00_M33_Text_081710A5::
# 176 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "ROUTE 118\nル ROUTE 119$"

Naranja_Route118_G00_M33_Text_081BC9AC::
# 180 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hm...\nYou seem rather capable...\lLet me keep you company!$"

Naranja_Route118_G00_M33_Text_081BC9E6::
# 184 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "You’re much stronger than\nI’d imagined!$"

Naranja_Route118_G00_M33_Text_081BCA0E::
# 188 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "There is no such thing as a born genius.\nIt all depends on effort!\lThat is what I believe...$"

Naranja_Route118_G00_M33_Text_081BCA6B::
# 192 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Hm... As always, your agility speaks\nfor itself.\lCome, keep me company!$"

Naranja_Route118_G00_M33_Text_081BCAB3::
# 196 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "As strong as ever!$"

Naranja_Route118_G00_M33_Text_081BCAC6::
# 200 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "All it takes is effort!\pI lost because I haven’t put in enough\neffort!$"

Naranja_Route118_G00_M33_Text_081BE148::
# 204 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "BIRD POKéMON that FLY elegantly in\nthe sky... They’re the best!$"

Naranja_Route118_G00_M33_Text_081BE188::
# 208 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Urgh... I crashed...$"

Naranja_Route118_G00_M33_Text_081BE19D::
# 212 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "You’ve got great POKéMON.\nI’ll have to train mine better.$"

Naranja_Route118_G00_M33_Text_081BE1D7::
# 216 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Take flight!\nMy BIRD POKéMON!$"

Naranja_Route118_G00_M33_Text_081BE1F5::
# 220 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "They did take flight...$"

Naranja_Route118_G00_M33_Text_081BE20D::
# 224 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "If they’d get stronger, they’d be able\nto fly more freely...$"

Naranja_Route118_G00_M33_Text_081BE24A::
# 228 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I’m a FISHERMAN, but also a TRAINER.\nI’m raising the POKéMON I caught.$"

Naranja_Route118_G00_M33_Text_081BE291::
# 232 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I thought I was doing okay in my\ntraining...$"

Naranja_Route118_G00_M33_Text_081BE2BE::
# 236 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I couldn’t win by training POKéMON\nwhile I fished...\pWas I doing things in half measures?$"

Naranja_Route118_G00_M33_Text_081BE318::
# 240 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "For FISHERMEN, equipment is the key.\pBut for TRAINERS, the key ingredients\nare POKéMON and heart, of course!$"

Naranja_Route118_G00_M33_Text_081BE385::
# 244 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "I was beaten in heart?$"

Naranja_Route118_G00_M33_Text_081BE39C::
# 248 "data/maps/Naranja_Route118_G00_M33/scripts.pory"
	.string "Come to think of it, fishing is a battle\nbetween a FISHERMAN and a POKéMON.$"
