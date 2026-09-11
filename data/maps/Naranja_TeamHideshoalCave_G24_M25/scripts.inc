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
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_596, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M25_Text_08197093, Naranja_TeamHideshoalCave_G24_M25_Text_08197145, Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D8FD
# 28 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M25_Text_081971AE
# 29 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 4
# 30 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D8FD::
# 35 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setvar VAR_0x8008, 1
# 36 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setvar VAR_0x8009, 3
# 37 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 38 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	delay 0x14
# 40 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 41 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 42 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M25_Text_08197162
# 43 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 4
# 44 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	closemessage
# 45 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 46 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32777, Naranja_TeamHideshoalCave_G24_M25_Movement_0815D95D
# 47 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	removeobject 32777
# 49 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	delay 0x14
# 50 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 51 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M25_Text_081971AE
# 53 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0070
# 55 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setflag FLAG_HIDE_ISLA_KUMQUAT_G00_M05_241
# 56 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJECT_2_LocalId2::
# 61 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_570, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M25_Text_08197270, Naranja_TeamHideshoalCave_G24_M25_Text_081972AC, Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D97D
# 62 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M25_Text_081972D2
# 63 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 6
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_AfterBattle_0815D97D::
# 68 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M25_Text_081972D2
# 69 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 4
# 70 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJECT_5_LocalId5::
# 75 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_593, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M25_Text_081972EF, Naranja_TeamHideshoalCave_G24_M25_Text_08197390
# 76 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M25_Text_081973C0
# 77 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 6
	end


Naranja_TeamHideshoalCave_G24_M25_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 82 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setorcopyvar VAR_0x8000, 8
# 83 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 84 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	callstd 1
	end


# 88 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
Naranja_TeamHideshoalCave_G24_M25_Movement_0815D95D:
# 89 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
# 90 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
# 91 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
# 92 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	walk_right
	step_end

Naranja_TeamHideshoalCave_G24_M25_Text_08197093::
# 95 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe...\pGot here already, did you?\nWe underestimated you!\pBut this is it!\pI’m a cut above the GRUNTS you’ve seen\nso far.\pI’m not stalling for time. I’m going\nto pulverize you!$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197145::
# 99 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe...\nSo, I lost, too...$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197162::
# 103 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe!\pWhile I was toying with you, our BOSS\ngot through his preparations!$"

Naranja_TeamHideshoalCave_G24_M25_Text_081971AE::
# 107 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Hehehe!\pOur BOSS has already gone on his way to\nsome cave under the sea!\pIf you’re going to give chase, you’d\nbetter search the big, wide sea beyond\lLILYCOVE.\pBut will you find it then?\nHehehe!$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197270::
# 111 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\nYou owe me a battle, too!$"

Naranja_TeamHideshoalCave_G24_M25_Text_081972AC::
# 115 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Tired of waiting...\nLost and dazed...$"

Naranja_TeamHideshoalCave_G24_M25_Text_081972D2::
# 119 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "BOSS...\nIs this good enough?$"

Naranja_TeamHideshoalCave_G24_M25_Text_081972EF::
# 123 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "Warp panels, the HIDEOUT’s pride\nand joy!\pYou’re clueless about where you are,\naren’t you?\pFluster and tire out the enemy, then\nlower the boom! That’s our plan!$"

Naranja_TeamHideshoalCave_G24_M25_Text_08197390::
# 127 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "What’s wrong with you?\nYou’re not tired at all!$"

Naranja_TeamHideshoalCave_G24_M25_Text_081973C0::
# 131 "data/maps/Naranja_TeamHideshoalCave_G24_M25/scripts.pory"
	.string "That reminds me... I can’t remember\nwhere I put the MASTER BALL.\pIf I fail to guard it, our BOSS will\nchew me out...$"
