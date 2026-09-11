Naranja_IslaShamouti_G12_M07_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M07_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M07_Text_081867AF
# 9 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M07_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId2::
# 14 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	lockall
# 15 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00DF
# 16 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M07_EventScript_Sub_08158204
# 17 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00E0
# 18 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M07_EventScript_Sub_081581D6
# 19 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00DE
# 20 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M07_EventScript_Sub_081581C2
# 21 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M07_Text_08186835
# 22 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 4
# 23 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	closemessage
# 24 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00DE
# 25 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MELLSWEET_G14_M02_WINGULL
# 26 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	applymovement LOCALID_ISLA_SHAMOUTI_G12_M07_WINGULL, Naranja_IslaShamouti_G12_M07_Movement_08158218
# 27 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	removeobject LOCALID_ISLA_SHAMOUTI_G12_M07_WINGULL
# 29 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	releaseall
	end


Naranja_IslaShamouti_G12_M07_EventScript_Sub_081581C2::
# 34 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 35 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M07_Text_0818684E
# 37 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	releaseall
	end


Naranja_IslaShamouti_G12_M07_EventScript_Sub_081581D6::
# 43 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 44 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M07_Text_08186881
# 46 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB9
# 48 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 49 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 0
# 50 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 51 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 52 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00DF
# 53 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	releaseall
	end


Naranja_IslaShamouti_G12_M07_EventScript_Sub_08158204::
# 58 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 59 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M07_Text_08186924
# 61 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 4
# 62 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	releaseall
	end


Naranja_IslaShamouti_G12_M07_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId3::
# 67 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	lock
# 68 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	faceplayer
# 69 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	waitse
# 70 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 71 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M07_Text_0818695C
# 72 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	callstd 4
# 73 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	waitmoncry
# 74 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	release
	end


# 78 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
Naranja_IslaShamouti_G12_M07_Movement_08158218:
# 79 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	walk_fast_down
# 80 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	walk_fast_down
# 81 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	walk_fast_right
# 82 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	walk_in_place_faster_down
# 83 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	delay_8
	step_end

Naranja_IslaShamouti_G12_M07_Text_081867AF::
# 86 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	.string "By being together with POKéMON,\npeople make more and more friends.\pAnd that brings the world closer\ntogether. I think it’s wonderful!$"

Naranja_IslaShamouti_G12_M07_Text_08186835::
# 90 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	.string "There!\nGo, BIRD POKéMON!$"

Naranja_IslaShamouti_G12_M07_Text_0818684E::
# 94 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	.string "Heheh, I asked my WINGULL to run an\nerrand for me.$"

Naranja_IslaShamouti_G12_M07_Text_08186881::
# 98 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	.string "Good!\nWelcome back, WINGULL!\pHuh? What is this?\nWhat is it holding?\pA MENTAL HERB?\nIt must have picked it up somewhere.\pBut I’m not a TRAINER, so you can\nhave it.$"

Naranja_IslaShamouti_G12_M07_Text_08186924::
# 102 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	.string "Thanks to my WINGULL, I have friends\nwho live far away.$"

Naranja_IslaShamouti_G12_M07_Text_0818695C::
# 106 "data/maps/Naranja_IslaShamouti_G12_M07/scripts.pory"
	.string "WINGULL: Pihyoh!$"
