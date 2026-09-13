Naranja_MurcottIsland_ContestHall_MapScripts::
	.byte 0


Naranja_MurcottIsland_ContestHall_EventScript_FatMan::
# 8 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CB71, MSGBOX_NPC
	end


Naranja_MurcottIsland_ContestHall_EventScript_LittleBoy1::
# 13 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CC80, MSGBOX_NPC
	end


Naranja_MurcottIsland_ContestHall_EventScript_Sailor::
# 18 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lock
# 19 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0109
# 21 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_ContestHall_EventScript_Sub_08155595
# 22 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CCE2, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	setorcopyvar VAR_0x8000, 0x149
# 24 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 25 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	callstd 0
# 26 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 27 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 28 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0109
# 29 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CE28, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	release
	end


Naranja_MurcottIsland_ContestHall_EventScript_Sub_08155595::
# 35 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CE28, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	release
	end


Naranja_MurcottIsland_ContestHall_EventScript_Woman4::
# 41 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CEF3, MSGBOX_NPC
# 42 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 43 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_WOMAN_4, Naranja_RusturfTunnel_Movement_081A083D
# 44 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_ContestJudge::
# 50 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817CFA7, MSGBOX_NPC
# 51 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 52 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_CONTEST_JUDGE, Naranja_RusturfTunnel_Movement_081A083D
# 53 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Girl1::
# 59 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D054, MSGBOX_NPC
# 60 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 61 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_GIRL_1_5, Naranja_RusturfTunnel_Movement_081A083D
# 62 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 63 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Boy2::
# 68 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D07F, MSGBOX_NPC
# 69 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 70 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_BOY_2, Naranja_RusturfTunnel_Movement_081A083D
# 71 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 72 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Boy1::
# 77 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D0F9, MSGBOX_NPC
# 78 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 79 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_BOY_1_7, Naranja_RusturfTunnel_Movement_081A083D
# 80 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 81 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_FatMan_2::
# 86 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D222, MSGBOX_NPC
# 87 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 88 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_FAT_MAN_2, Naranja_RusturfTunnel_Movement_081A083D
# 89 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 90 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Maniac::
# 95 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D39A, MSGBOX_NPC
# 96 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 97 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_MANIAC, Naranja_RusturfTunnel_Movement_081A083D
# 98 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Hiker::
# 104 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D3F0, MSGBOX_NPC
# 105 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 106 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_HIKER, Naranja_RusturfTunnel_Movement_081A083D
# 107 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Boy1_2::
# 113 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D300, MSGBOX_NPC
# 114 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 115 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_BOY_1_12, Naranja_RusturfTunnel_Movement_081A083D
# 116 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 117 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Boy3::
# 122 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D27F, MSGBOX_NPC
# 123 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	lockall
# 124 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_CONTEST_HALL_BOY_3, Naranja_RusturfTunnel_Movement_081A083D
# 125 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	waitmovement LOCALID_NONE
# 126 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_ContestHall_EventScript_Sign_1::
# 131 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	msgbox Naranja_MurcottIsland_ContestHall_Text_0817D447, MSGBOX_SIGN
	end


Naranja_MurcottIsland_ContestHall_Text_0817CB71::
# 135 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "Want a tasty little bit of advice\nfor CONTESTS?\pUsing a certain move after another\ncertain kind of move sometimes gets\lyou extra attention.\pIf you know what you’re doing, you\ncan score big in appeal.\pOf course, your opponents might try\ndisrupting your POKéMON’s showing.$"

Naranja_MurcottIsland_ContestHall_Text_0817CC80::
# 139 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "My papa, he’s a CONTEST JUDGE.\pI wonder what I should be when I\ngrow up, a JUDGE or a GYM LEADER?$"

Naranja_MurcottIsland_ContestHall_Text_0817CCE2::
# 143 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "Hey, man, I’m like majorly cheesed,\nyou know. Like, you know, I just\lwanted to know why my POKéMON\lnever won, you know, like, hey?\pSo, like, I gave the JUDGE my two\ncents, you know, they’re free.\pAnd he wouldn’t hear me out, like, hey!\nSo, like, total bummer, man!\pHey, like, you! Zip it, you know?\nJust, you know, take this!$"

Naranja_MurcottIsland_ContestHall_Text_0817CE28::
# 147 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "That’s, like, TM41, you know?\nHey, it’s TORMENT, you hearing me?\pLike, it won’t let the other guy\nuse the same move twice in a row, see?\pHey, now, you listen here, like,\nI’m not laying a torment on you!$"

Naranja_MurcottIsland_ContestHall_Text_0817CEF3::
# 151 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "MC: Oh, my, my!\nNow isn’t that a dandy of a POKéMON?\pPlease! Do step right up and take\npart in our splendid CONTESTS!\pYou’ll do well! I’m sure of it!\nMy eyes have never failed me!$"

Naranja_MurcottIsland_ContestHall_Text_0817CFA7::
# 155 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "JUDGE: Well, hello there!\nI see that you’re a TRAINER!\pThen, it just wouldn’t do for you\nto miss a POKéMON CONTEST!\pGet a CONTEST PASS in VERDANTURF\nCITY and enter anytime!$"

Naranja_MurcottIsland_ContestHall_Text_0817D054::
# 159 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "It’s appeal time!\nWhat should I lead with?$"

Naranja_MurcottIsland_ContestHall_Text_0817D07F::
# 163 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "They didn’t pay much attention to\nmy POKéMON’s appeal...\pHumph, that JUDGE, he doesn’t know\na good thing when he sees it.$"

Naranja_MurcottIsland_ContestHall_Text_0817D0F9::
# 167 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "Oh, hi! You must be a serious fan to get\nthis close to the action.\pI’ll reward your enthusiasm with this\nsage advice.\pIf a move goes over really well,\nthe audience will get excited.\pThe POKéMON that makes its appeal\nright when everyone’s excited...\pWell, you’d think something good has\nto happen!$"

Naranja_MurcottIsland_ContestHall_Text_0817D222::
# 171 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "I can’t do this! I’m more freaked out\nthan my POKéMON.\pI’m shivering and my heart is racing!$"

Naranja_MurcottIsland_ContestHall_Text_0817D27F::
# 175 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "A battle and a CONTEST aren’t the\nsame, but they are alike, too.\pYou need to work hard and believe\nin the POKéMON you’ve raised.$"

Naranja_MurcottIsland_ContestHall_Text_0817D300::
# 179 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "That POKéMON looks like it’s on top\nof its game, huh?\pA POKéMON that does good in the\nsecondary judging seems to be more\lrelaxed when it’s doing appeals.$"

Naranja_MurcottIsland_ContestHall_Text_0817D39A::
# 183 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "Will you look at that sorry sight?\pHeh, my POKéMON’s absolutely better\nthan that lot!$"

Naranja_MurcottIsland_ContestHall_Text_0817D3F0::
# 187 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "Don’t you get the urge to move with\nPOKéMON if they’re putting on an\lenergetic appeal?$"

Naranja_MurcottIsland_ContestHall_Text_0817D447::
# 191 "data/maps/Naranja_MurcottIsland_ContestHall/scripts.pory"
	.string "POKéMON CONTESTS\nHYPER RANK STAGE!$"
