Naranja_TrovitaIsland_Gym_MapScripts::
	.byte 0


Naranja_TrovitaIsland_Gym_EventScript_Scyther::
# 8 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TROVITA_ISLAND_265, Naranja_TrovitaIsland_Gym_Text_08183EE5, Naranja_TrovitaIsland_Gym_Text_08183FC4, Naranja_TrovitaIsland_Gym_EventScript_AfterBattle_081578FE, NO_MUSIC
# 9 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_00A5
# 10 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto_if LESS_THAN, Naranja_TrovitaIsland_Gym_EventScript_Sub_0815793C
# 11 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_08184252, MSGBOX_DEFAULT
# 12 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Gym_EventScript_AfterBattle_081578FE::
# 17 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	message Naranja_TrovitaIsland_Gym_Text_081840AB
# 18 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	waitmessage
# 19 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	call Naranja_ValenciaIsland_Gym_EventScript_Sub_081A02C5
# 20 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_081840D5, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_04B1
# 22 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0807
# 23 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_QUEST_STATE, 1
# 24 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	addvar VAR_NARANJA_ORANGE_LEAGUE_BADGE_COUNT, 1
# 25 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 26 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	call Naranja_ValenciaIsland_Gym_EventScript_Sub_081A01C0
# 27 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	compare_var_to_value VAR_NARANJA_ORANGE_LEAGUE_BADGE_COUNT, 6
# 28 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	call_if EQUAL, Naranja_ValenciaIsland_Gym_EventScript_Sub_081A00FB
# 29 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto Naranja_TrovitaIsland_Gym_EventScript_Sub_0815793C
	return


Naranja_TrovitaIsland_Gym_EventScript_Sub_0815793C::
# 33 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setorcopyvar VAR_0x8000, 0x147
# 34 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 35 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	callstd 0
# 36 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 37 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 38 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_00A5
# 39 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_08184170, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Gym_EventScript_Youngster::
# 45 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TROVITA_ISLAND_320, Naranja_TrovitaIsland_Gym_Text_08183D99, Naranja_TrovitaIsland_Gym_Text_08183DDD
# 46 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_08183DF9, MSGBOX_AUTOCLOSE
	end


Naranja_TrovitaIsland_Gym_EventScript_Youngster_2::
# 51 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TROVITA_ISLAND_321, Naranja_TrovitaIsland_Gym_Text_08183E38, Naranja_TrovitaIsland_Gym_Text_08183E78
# 52 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_08183E98, MSGBOX_AUTOCLOSE
	end


Naranja_TrovitaIsland_Gym_EventScript_Man2::
# 57 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	lock
# 58 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	faceplayer
# 59 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_04B1
# 60 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_Gym_EventScript_Sub_081579A3
# 61 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_08183A4B, MSGBOX_DEFAULT
# 62 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Gym_EventScript_Sub_081579A3::
# 67 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_08183C90, MSGBOX_DEFAULT
# 68 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Gym_EventScript_Sign_1::
# 73 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	lockall
# 74 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0807
# 75 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_Gym_EventScript_Sub_081579CD
# 76 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto Naranja_TrovitaIsland_Gym_EventScript_Sub_081579D7
	return


Naranja_TrovitaIsland_Gym_EventScript_Sign_2::
# 80 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	lockall
# 81 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0807
# 82 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_Gym_EventScript_Sub_081579CD
# 83 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	goto Naranja_TrovitaIsland_Gym_EventScript_Sub_081579D7
	return


Naranja_TrovitaIsland_Gym_EventScript_Sub_081579CD::
# 87 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_081842E6, MSGBOX_DEFAULT
# 88 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	releaseall
	end


Naranja_TrovitaIsland_Gym_EventScript_Sub_081579D7::
# 93 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	msgbox Naranja_TrovitaIsland_Gym_Text_081842CC, MSGBOX_DEFAULT
# 94 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	releaseall
	end


Naranja_TrovitaIsland_Gym_Text_08183A4B::
# 98 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Yo, how’s it going?\pListen, my friend!\nWould you like to become the CHAMPION?\pI’m no TRAINER, not me, but I can\nsure give you winning advice.\pThat’s settled, then! We’ll aim for the\nPOKéMON CHAMPIONSHIP together!\pIt’s your job as a TRAINER to collect\nGYM BADGES, am I right?\pBut GYM LEADERS aren’t pushovers!\pAnd that’s where I come in!\nI’m here to provide expert advice!\pROXANNE, the GYM LEADER, is a user\nof ROCK-type POKéMON.\pThe ROCK type is very durable, but\nit can’t stand WATER-type and\lGRASS-type moves.\pCome see me afterwards, if you beat\nthe GYM LEADER.\pWell, go for it!$"

Naranja_TrovitaIsland_Gym_Text_08183C90::
# 102 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\nMy cheering must’ve worked!\pGreat!\nCheck your TRAINER CARD.\pThe STONE BADGE you got should be\nproperly recorded on it.\pIn other words...\pYou’ve climbed the first step on\nthe stairs to the CHAMPIONSHIP!\pThat’s got to feel awesome!$"

Naranja_TrovitaIsland_Gym_Text_08183D99::
# 106 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Mis dragones son todopoderosos.\p¡ No podrás derrotarlos jamás !$"

Naranja_TrovitaIsland_Gym_Text_08183DDD::
# 110 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Mi VAPOREON y mi DRATINI…$"

Naranja_TrovitaIsland_Gym_Text_08183DF9::
# 114 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Yo te aseguro que conocerás el poder \nde los dragones… pronto…$"

Naranja_TrovitaIsland_Gym_Text_08183E38::
# 118 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "If you can’t beat me, you won’t stand\na chance against ROXANNE!$"

Naranja_TrovitaIsland_Gym_Text_08183E78::
# 122 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Wow! You’ve got some potential!$"

Naranja_TrovitaIsland_Gym_Text_08183E98::
# 126 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\nseveral times.\pYou’d better be on your guard!$"

Naranja_TrovitaIsland_Gym_Text_08183EE5::
# 130 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\nPOKéMON GYM LEADER.\pI became a GYM LEADER so that I may\napply what I learned at the POKéMON\lTRAINER’S SCHOOL in battle.\pWould you kindly demonstrate how you\nbattle, and with which POKéMON?$"

Naranja_TrovitaIsland_Gym_Text_08183FC4::
# 134 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "So...\nI lost...\pIt seems that I still have much more\nto learn...\pI understand.\pThe POKéMON LEAGUE’s rules state\nthat TRAINERS are to be given this\lif they defeat a GYM LEADER.\pPlease accept the official POKéMON\nLEAGUE STONE BADGE.$"

Naranja_TrovitaIsland_Gym_Text_081840AB::
# 138 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\nfrom ROXANNE.$"

Naranja_TrovitaIsland_Gym_Text_081840D5::
# 142 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\npower of your POKéMON.\pIt also enables them to use the HM move\nCUT outside of battle.\pPlease take this with you, too.$"

Naranja_TrovitaIsland_Gym_Text_08184170::
# 146 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "That TM39 contains ROCK TOMB.\pIt not only inflicts damage by dropping\nrocks, it also lowers SPEED.\pIf you use a TM, it instantly teaches\nthe move to a POKéMON.\pRemember, a TM can be used only once,\nso think before you use it.$"

Naranja_TrovitaIsland_Gym_Text_08184252::
# 150 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "Since you are so strong, you should\nchallenge other GYM LEADERS.\pBy battling many TRAINERS, you should\nlearn many things.$"

Naranja_TrovitaIsland_Gym_Text_081842CC::
# 154 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"

Naranja_TrovitaIsland_Gym_Text_081842E6::
# 158 "data/maps/Naranja_TrovitaIsland_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\pROXANNE’S CERTIFIED TRAINERS:\n{PLAYER}$"
