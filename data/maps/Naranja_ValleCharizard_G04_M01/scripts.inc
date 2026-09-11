Naranja_ValleCharizard_G04_M01_MapScripts::
	.byte 0


Naranja_ValleCharizard_G04_M01_EventScript_Sub_0815369F::
# 8 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	callstd 4
# 9 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_FLANNERY_LocalId1::
# 14 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_NARANJA_VALLE_CHARIZARD_266, LOCALID_NONE, Naranja_ValleCharizard_G04_M01_Text_08176801, Naranja_ValleCharizard_G04_M01_Text_08176960, Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_08153766
# 15 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_00A8
# 16 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_ValleCharizard_G04_M01_EventScript_Sub_081537A7
# 17 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176C4A, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_08153766::
# 23 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	message Naranja_ValleCharizard_G04_M01_Text_08176A62
# 24 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	waitmessage
# 25 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 26 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176A8C, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_04BD
# 28 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_080A
# 29 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	addvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 30 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 31 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB
# 32 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setvar VAR_0x8008, 4
# 33 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 34 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_0326
# 35 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setvar VAR_NARANJA_VALLE_CHARIZARD_STORY_STATE, 1
# 36 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto Naranja_ValleCharizard_G04_M01_EventScript_Sub_081537A7
	return


Naranja_ValleCharizard_G04_M01_EventScript_Sub_081537A7::
# 40 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x152
# 41 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 42 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	callstd 0
# 43 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 44 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 45 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176B8F, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	setflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_00A8
# 47 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 52 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_VALLE_CHARIZARD_201, LOCALID_VALLE_CHARIZARD_G04_M01_MAN_6, Naranja_ValleCharizard_G04_M01_Text_08176432, Naranja_ValleCharizard_G04_M01_Text_0817644F, Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_081537E6
# 53 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176472, MSGBOX_AUTOCLOSE
	end


Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_081537E6::
# 58 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	call Naranja_ValleCharizard_G04_M01_EventScript_Sub_0815369F
# 59 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId4::
# 64 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_VALLE_CHARIZARD_203, LOCALID_VALLE_CHARIZARD_G04_M01_MAN_6_2, Naranja_ValleCharizard_G04_M01_Text_081764D1, Naranja_ValleCharizard_G04_M01_Text_08176516, Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_081537E6
# 65 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176537, MSGBOX_AUTOCLOSE
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId7::
# 70 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_VALLE_CHARIZARD_205, LOCALID_VALLE_CHARIZARD_G04_M01_MAN_6_3, Naranja_ValleCharizard_G04_M01_Text_0817658D, Naranja_ValleCharizard_G04_M01_Text_0817663F, Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_081537E6
# 71 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176660, MSGBOX_AUTOCLOSE
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId5::
# 76 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_VALLE_CHARIZARD_650, LOCALID_VALLE_CHARIZARD_G04_M01_GIRL_3, Naranja_ValleCharizard_G04_M01_Text_08176784, Naranja_ValleCharizard_G04_M01_Text_081767A6, Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_081537E6
# 77 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_081767C1, MSGBOX_AUTOCLOSE
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 82 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_VALLE_CHARIZARD_648, LOCALID_VALLE_CHARIZARD_G04_M01_MAN_4, Naranja_ValleCharizard_G04_M01_Text_081766D2, Naranja_ValleCharizard_G04_M01_Text_081766FE, Naranja_ValleCharizard_G04_M01_EventScript_AfterBattle_081537E6
# 83 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_0817671D, MSGBOX_AUTOCLOSE
	end


Naranja_ValleCharizard_G04_M01_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId6::
# 88 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	lock
# 89 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	faceplayer
# 90 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_04BD
# 91 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G04_M01_EventScript_Sub_0815386E
# 92 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176312, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M01_EventScript_Sub_0815386E::
# 98 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_0817640C, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M01_EventScript_Sign_1::
# 104 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	lockall
# 105 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_080A
# 106 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G04_M01_EventScript_Sub_08153898
# 107 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto Naranja_ValleCharizard_G04_M01_EventScript_Sub_081538A2
	return


Naranja_ValleCharizard_G04_M01_EventScript_Sign_2::
# 111 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	lockall
# 112 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_080A
# 113 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto_if EQUAL, Naranja_ValleCharizard_G04_M01_EventScript_Sub_08153898
# 114 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	goto Naranja_ValleCharizard_G04_M01_EventScript_Sub_081538A2
	return


Naranja_ValleCharizard_G04_M01_EventScript_Sub_08153898::
# 118 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176CCA, MSGBOX_DEFAULT
# 119 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	releaseall
	end


Naranja_ValleCharizard_G04_M01_EventScript_Sub_081538A2::
# 124 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M01_Text_08176CAF, MSGBOX_DEFAULT
# 125 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	releaseall
	end


Naranja_ValleCharizard_G04_M01_Text_08176312::
# 129 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Hey, how’s it going, CHAMPION-\nbound {PLAYER}?\pLAVARIDGE’s GYM LEADER FLANNERY\nuses FIRE-type POKéMON.\pHer passion for POKéMON burns stronger\nand hotter than a volcano.\pDon’t get too close to her - you’ll burn!\nHose her down with water and then\lgo for it!$"

Naranja_ValleCharizard_G04_M01_Text_0817640C::
# 133 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Yow! That was a scorching hot battle!$"

Naranja_ValleCharizard_G04_M01_Text_08176432::
# 137 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Owowowowow!\nYikes, it’s hot!$"

Naranja_ValleCharizard_G04_M01_Text_0817644F::
# 141 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "I’m blinded by sweat in my eyes...$"

Naranja_ValleCharizard_G04_M01_Text_08176472::
# 145 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Being buried in hot sand promotes\ncirculation.\pIt’s effective for healing pain in\nyour joints.$"

Naranja_ValleCharizard_G04_M01_Text_081764D1::
# 149 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "I’m trying to relieve my stress.\nDon’t come along and stress me out!$"

Naranja_ValleCharizard_G04_M01_Text_08176516::
# 153 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "I hope FLANNERY flames you good!$"

Naranja_ValleCharizard_G04_M01_Text_08176537::
# 157 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Haaah... Whew...\pIf you spend too much time buried in\nhot sand, it tuckers you out...$"

Naranja_ValleCharizard_G04_M01_Text_0817658D::
# 161 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "You must be getting tired by now.\nYou’d like to rest in the hot sand,\lwouldn’t you?\pBut you should know that maintaining\nyour willpower is an important ability\lfor all TRAINERS.$"

Naranja_ValleCharizard_G04_M01_Text_0817663F::
# 165 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Play with fire, and be burned...$"

Naranja_ValleCharizard_G04_M01_Text_08176660::
# 169 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Your skill is real...\nBut our LEADER FLANNERY is strong.\pIf you don’t watch yourself, you’ll be\nburned seriously.$"

Naranja_ValleCharizard_G04_M01_Text_081766D2::
# 173 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Can your POKéMON withstand\n392-degree heat?$"

Naranja_ValleCharizard_G04_M01_Text_081766FE::
# 177 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "It didn’t burn hotly enough...$"

Naranja_ValleCharizard_G04_M01_Text_0817671D::
# 181 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "The temperature of magma is\n392 degrees.\pYour POKéMON beat me, so they should\neasily survive in magma.$"

Naranja_ValleCharizard_G04_M01_Text_08176784::
# 185 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Um...\nOkay, I’ll battle with you.$"

Naranja_ValleCharizard_G04_M01_Text_081767A6::
# 189 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Oh, but you’re too strong.$"

Naranja_ValleCharizard_G04_M01_Text_081767C1::
# 193 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "I’m going to be a pretty and strong\nTRAINER just like FLANNERY.$"

Naranja_ValleCharizard_G04_M01_Text_08176801::
# 197 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Welcome... No, wait.\pPuny TRAINER, how good to see you’ve\nmade it here!\pI have been entrusted with the...\nNo, wait.\pI am FLANNERY, and I’m the GYM\nLEADER here!\pUh...\nDare not underestimate me, though\lI have been LEADER only a short time!\pWith skills inherited from my grand-\nfather, I shall, uh...demonstrate the\lhot moves we have honed on this land!$"

Naranja_ValleCharizard_G04_M01_Text_08176960::
# 201 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Oh...\nI guess I was trying too hard...\pI... I’ve only recently become a GYM\nLEADER.\pI tried too hard to be someone I’m not.\pI have to do things my natural way.\nIf I don’t, my POKéMON will be confused.\pThanks for teaching me that.\nFor that, you deserve this.$"

Naranja_ValleCharizard_G04_M01_Text_08176A62::
# 205 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\nfrom FLANNERY.$"

Naranja_ValleCharizard_G04_M01_Text_08176A8C::
# 209 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\nup to Level 50, even those you get in\ltrades from other people, will obey\lyou completely.\pAnd, it lets POKéMON use the HM move\nSTRENGTH outside of battle.\pThis is a token of my appreciation.\nDon’t be shy about taking it!$"

Naranja_ValleCharizard_G04_M01_Text_08176B8F::
# 213 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "That TM50 contains OVERHEAT.\pThat move inflicts serious damage on\nthe opponent.\pBut it also sharply cuts the SP. ATK\nof the POKéMON using it. It might not\lbe suitable for longer battles.$"

Naranja_ValleCharizard_G04_M01_Text_08176C4A::
# 217 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "Your power reminds me of someone...\pOh! I know! You battle like NORMAN,\nthe GYM LEADER of PETALBURG.$"

Naranja_ValleCharizard_G04_M01_Text_08176CAF::
# 221 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"

Naranja_ValleCharizard_G04_M01_Text_08176CCA::
# 225 "data/maps/Naranja_ValleCharizard_G04_M01/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\pFLANNERY’S CERTIFIED TRAINERS:\n{PLAYER}$"
