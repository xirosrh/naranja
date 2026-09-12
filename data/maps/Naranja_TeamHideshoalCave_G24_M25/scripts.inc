Naranja_TeamHideshoalCave_G24_M25_MapScripts::
# 5 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TeamHideshoalCave_G24_M25_OnTransition
	.byte 0


Naranja_TeamHideshoalCave_G24_M25_OnTransition::
# 9 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_Trigger_1::
# 14 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	lockall
# 15 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setvar VAR_0x8008, 1
# 16 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 18 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 19 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 20 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 21 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setvar VAR_TEMP_1, 1
# 22 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	releaseall
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJECT_1_LocalId1::
# 27 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_596, Naranja_TeamHideshoalCave_G24_M25_Text_08197093, Naranja_TeamHideshoalCave_G24_M25_Text_08197145, Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D8FD
# 28 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	msgbox Naranja_TeamHideshoalCave_G24_M25_Text_081971AE, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D8FD::
# 34 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setvar VAR_0x8008, 1
# 35 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setvar VAR_0x8009, 3
# 36 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 37 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	delay 0x14
# 39 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 40 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	msgbox Naranja_TeamHideshoalCave_G24_M25_Text_08197162, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	closemessage
# 43 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 44 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32777, Naranja_TeamHideshoalCave_G24_M25_Movement_0815D95D
# 45 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	removeobject 32777
# 47 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	delay 0x14
# 48 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 49 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	msgbox Naranja_TeamHideshoalCave_G24_M25_Text_081971AE, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0070
# 52 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setflag FLAG_HIDE_ISLA_KUMQUAT_G00_M05_241
# 53 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJECT_2_LocalId2::
# 58 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_570, Naranja_TeamHideshoalCave_G24_M25_Text_08197270, Naranja_TeamHideshoalCave_G24_M25_Text_081972AC, Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D97D
# 59 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	msgbox Naranja_TeamHideshoalCave_G24_M25_Text_081972D2, MSGBOX_AUTOCLOSE
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D97D::
# 64 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	msgbox Naranja_TeamHideshoalCave_G24_M25_Text_081972D2, MSGBOX_DEFAULT
# 65 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJECT_5_LocalId5::
# 70 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_593, Naranja_TeamHideshoalCave_G24_M25_Text_081972EF, Naranja_TeamHideshoalCave_G24_M25_Text_08197390
# 71 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	msgbox Naranja_TeamHideshoalCave_G24_M25_Text_081973C0, MSGBOX_AUTOCLOSE
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 76 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 8
# 77 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 78 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 1
	end


# 82 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
Naranja_TeamHideshoalCave_G24_M25_Movement_0815D95D:
# 83 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
# 84 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
# 85 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
# 86 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
	step_end

Naranja_TeamHideshoalCave_G24_M25_Text_08197093::
# 89 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe...\pGot here already, did you?\nWe underestimated you!\pBut this is it!\pI’m a cut above the GRUNTS you’ve seen\nso far.\pI’m not stalling for time. I’m going\nto pulverize you!$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197145::
# 93 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe...\nSo, I lost, too...$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197162::
# 97 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe!\pWhile I was toying with you, our BOSS\ngot through his preparations!$"

Naranja_TeamHideshoalCave_G24_M25_Text_081971AE::
# 101 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe!\pOur BOSS has already gone on his way to\nsome cave under the sea!\pIf you’re going to give chase, you’d\nbetter search the big, wide sea beyond\lLILYCOVE.\pBut will you find it then?\nHehehe!$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197270::
# 105 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\nYou owe me a battle, too!$"

Naranja_TeamHideshoalCave_G24_M25_Text_081972AC::
# 109 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Tired of waiting...\nLost and dazed...$"

Naranja_TeamHideshoalCave_G24_M25_Text_081972D2::
# 113 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "BOSS...\nIs this good enough?$"

Naranja_TeamHideshoalCave_G24_M25_Text_081972EF::
# 117 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Warp panels, the HIDEOUT’s pride\nand joy!\pYou’re clueless about where you are,\naren’t you?\pFluster and tire out the enemy, then\nlower the boom! That’s our plan!$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197390::
# 121 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "What’s wrong with you?\nYou’re not tired at all!$"

Naranja_TeamHideshoalCave_G24_M25_Text_081973C0::
# 125 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "That reminds me... I can’t remember\nwhere I put the MASTER BALL.\pIf I fail to guard it, our BOSS will\nchew me out...$"
