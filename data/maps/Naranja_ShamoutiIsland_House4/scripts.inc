Naranja_ShamoutiIsland_House4_MapScripts::
	.byte 0


Naranja_ShamoutiIsland_House4_EventScript_Woman5::
# 8 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House4_Text_081867AF, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_House4_EventScript_Boy3::
# 13 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	lockall
# 14 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00DF
# 15 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House4_EventScript_Sub_08158204
# 16 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00E0
# 17 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House4_EventScript_Sub_081581D6
# 18 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00DE
# 19 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_House4_EventScript_Sub_081581C2
# 20 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House4_Text_08186835, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	closemessage
# 22 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00DE
# 23 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MELLSWEET_ISLAND_G14_M02_WINGULL
# 24 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	applymovement LOCALID_NARANJA_SHAMOUTI_ISLAND_HOUSE4_WINGULL, Naranja_ShamoutiIsland_House4_Movement_08158218
# 25 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	removeobject LOCALID_NARANJA_SHAMOUTI_ISLAND_HOUSE4_WINGULL
# 27 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	releaseall
	end


Naranja_ShamoutiIsland_House4_EventScript_Sub_081581C2::
# 32 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	applymovement 32783, Naranja_KumquatIsland_Movement_081A0839
# 33 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House4_Text_0818684E, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	releaseall
	end


Naranja_ShamoutiIsland_House4_EventScript_Sub_081581D6::
# 40 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	applymovement 32783, Naranja_KumquatIsland_Movement_081A0839
# 41 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	waitmovement LOCALID_NONE
# 42 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House4_Text_08186881, MSGBOX_DEFAULT
# 43 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB9
# 44 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 45 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	callstd 0
# 46 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 47 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 48 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00DF
# 49 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	releaseall
	end


Naranja_ShamoutiIsland_House4_EventScript_Sub_08158204::
# 54 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	applymovement 32783, Naranja_KumquatIsland_Movement_081A0839
# 55 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	waitmovement LOCALID_NONE
# 56 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House4_Text_08186924, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	releaseall
	end


Naranja_ShamoutiIsland_House4_EventScript_Wingull::
# 62 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	lock
# 63 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	faceplayer
# 64 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	waitse
# 65 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 66 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House4_Text_0818695C, MSGBOX_DEFAULT
# 67 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	waitmoncry
# 68 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	release
	end


# 72 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
Naranja_ShamoutiIsland_House4_Movement_08158218:
# 73 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	walk_fast_down
# 74 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	walk_fast_down
# 75 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	walk_fast_right
# 76 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	walk_in_place_faster_down
# 77 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	delay_8
	step_end

Naranja_ShamoutiIsland_House4_Text_081867AF::
# 80 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	.string "By being together with POKéMON,\npeople make more and more friends.\pAnd that brings the world closer\ntogether. I think it’s wonderful!$"

Naranja_ShamoutiIsland_House4_Text_08186835::
# 84 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	.string "There!\nGo, BIRD POKéMON!$"

Naranja_ShamoutiIsland_House4_Text_0818684E::
# 88 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	.string "Heheh, I asked my WINGULL to run an\nerrand for me.$"

Naranja_ShamoutiIsland_House4_Text_08186881::
# 92 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	.string "Good!\nWelcome back, WINGULL!\pHuh? What is this?\nWhat is it holding?\pA MENTAL HERB?\nIt must have picked it up somewhere.\pBut I’m not a TRAINER, so you can\nhave it.$"

Naranja_ShamoutiIsland_House4_Text_08186924::
# 96 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	.string "Thanks to my WINGULL, I have friends\nwho live far away.$"

Naranja_ShamoutiIsland_House4_Text_0818695C::
# 100 "data/maps/Naranja_ShamoutiIsland_House4/scripts.pory"
	.string "WINGULL: Pihyoh!$"
