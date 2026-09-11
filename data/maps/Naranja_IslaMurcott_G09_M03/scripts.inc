Naranja_IslaMurcott_G09_M03_MapScripts::
	.byte 0


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId1::
# 8 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CB71
# 9 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId2::
# 14 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CC80
# 15 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId13::
# 20 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0109
# 23 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M03_EventScript_Sub_08155595
# 24 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CCE2
# 25 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x149
# 27 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 28 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 0
# 29 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 30 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 31 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0109
# 32 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CE28
# 33 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M03_EventScript_Sub_08155595::
# 39 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CE28
# 40 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId3::
# 46 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CEF3
# 47 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 48 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 49 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_WOMAN_4, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 50 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 51 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_CONTEST_JUDGE_LocalId4::
# 56 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817CFA7
# 57 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 58 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 59 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_CONTEST_JUDGE, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 60 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 61 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId5::
# 66 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D054
# 67 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 68 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 69 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_GIRL_1_5, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 70 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 71 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId6::
# 76 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D07F
# 77 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 78 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 79 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_BOY_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 80 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 81 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId7::
# 86 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D0F9
# 87 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 88 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 89 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_BOY_1_7, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 90 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 91 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId8::
# 96 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D222
# 97 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 98 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 99 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_FAT_MAN_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 100 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 101 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId9::
# 106 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D39A
# 107 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 108 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 109 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_MANIAC, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 110 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 111 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_HIKER_LocalId10::
# 116 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D3F0
# 117 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 118 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 119 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_HIKER, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 120 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId12::
# 126 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D300
# 127 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 128 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 129 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_BOY_1_12, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 130 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 131 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId11::
# 136 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D27F
# 137 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 2
# 138 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	lockall
# 139 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G09_M03_BOY_3, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 140 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 141 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G09_M03_EventScript_Sign_1::
# 146 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M03_Text_0817D447
# 147 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G09_M03_Text_0817CB71::
# 151 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "Want a tasty little bit of advice\nfor CONTESTS?\pUsing a certain move after another\ncertain kind of move sometimes gets\lyou extra attention.\pIf you know what you’re doing, you\ncan score big in appeal.\pOf course, your opponents might try\ndisrupting your POKéMON’s showing.$"

Naranja_IslaMurcott_G09_M03_Text_0817CC80::
# 155 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "My papa, he’s a CONTEST JUDGE.\pI wonder what I should be when I\ngrow up, a JUDGE or a GYM LEADER?$"

Naranja_IslaMurcott_G09_M03_Text_0817CCE2::
# 159 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "Hey, man, I’m like majorly cheesed,\nyou know. Like, you know, I just\lwanted to know why my POKéMON\lnever won, you know, like, hey?\pSo, like, I gave the JUDGE my two\ncents, you know, they’re free.\pAnd he wouldn’t hear me out, like, hey!\nSo, like, total bummer, man!\pHey, like, you! Zip it, you know?\nJust, you know, take this!$"

Naranja_IslaMurcott_G09_M03_Text_0817CE28::
# 163 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "That’s, like, TM41, you know?\nHey, it’s TORMENT, you hearing me?\pLike, it won’t let the other guy\nuse the same move twice in a row, see?\pHey, now, you listen here, like,\nI’m not laying a torment on you!$"

Naranja_IslaMurcott_G09_M03_Text_0817CEF3::
# 167 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "MC: Oh, my, my!\nNow isn’t that a dandy of a POKéMON?\pPlease! Do step right up and take\npart in our splendid CONTESTS!\pYou’ll do well! I’m sure of it!\nMy eyes have never failed me!$"

Naranja_IslaMurcott_G09_M03_Text_0817CFA7::
# 171 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "JUDGE: Well, hello there!\nI see that you’re a TRAINER!\pThen, it just wouldn’t do for you\nto miss a POKéMON CONTEST!\pGet a CONTEST PASS in VERDANTURF\nCITY and enter anytime!$"

Naranja_IslaMurcott_G09_M03_Text_0817D054::
# 175 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "It’s appeal time!\nWhat should I lead with?$"

Naranja_IslaMurcott_G09_M03_Text_0817D07F::
# 179 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "They didn’t pay much attention to\nmy POKéMON’s appeal...\pHumph, that JUDGE, he doesn’t know\na good thing when he sees it.$"

Naranja_IslaMurcott_G09_M03_Text_0817D0F9::
# 183 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "Oh, hi! You must be a serious fan to get\nthis close to the action.\pI’ll reward your enthusiasm with this\nsage advice.\pIf a move goes over really well,\nthe audience will get excited.\pThe POKéMON that makes its appeal\nright when everyone’s excited...\pWell, you’d think something good has\nto happen!$"

Naranja_IslaMurcott_G09_M03_Text_0817D222::
# 187 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "I can’t do this! I’m more freaked out\nthan my POKéMON.\pI’m shivering and my heart is racing!$"

Naranja_IslaMurcott_G09_M03_Text_0817D27F::
# 191 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "A battle and a CONTEST aren’t the\nsame, but they are alike, too.\pYou need to work hard and believe\nin the POKéMON you’ve raised.$"

Naranja_IslaMurcott_G09_M03_Text_0817D300::
# 195 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "That POKéMON looks like it’s on top\nof its game, huh?\pA POKéMON that does good in the\nsecondary judging seems to be more\lrelaxed when it’s doing appeals.$"

Naranja_IslaMurcott_G09_M03_Text_0817D39A::
# 199 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "Will you look at that sorry sight?\pHeh, my POKéMON’s absolutely better\nthan that lot!$"

Naranja_IslaMurcott_G09_M03_Text_0817D3F0::
# 203 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "Don’t you get the urge to move with\nPOKéMON if they’re putting on an\lenergetic appeal?$"

Naranja_IslaMurcott_G09_M03_Text_0817D447::
# 207 "data/maps/Naranja_IslaMurcott_G09_M03/scripts.pory"
	.string "POKéMON CONTESTS\nHYPER RANK STAGE!$"
