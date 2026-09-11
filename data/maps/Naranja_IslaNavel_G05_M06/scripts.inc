Naranja_IslaNavel_G05_M06_MapScripts::
	.byte 0


Naranja_IslaNavel_G05_M06_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	lockall
# 9 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G05_M06_OLD_MAN_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 10 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 11 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	checkflag FLAG_TEMP_1
# 12 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CB6
# 13 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177AF4
# 14 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	setflag FLAG_TEMP_1
# 16 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CB6
	return


Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CB6::
# 20 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	checkitem ITEM_HEART_SCALE, 1
# 21 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 22 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D60
# 23 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177BDB
# 24 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 5
# 25 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 26 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 27 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D60
# 28 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CE4
	return


Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CE4::
# 32 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177C3F
# 33 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	special ChooseMonForMoveRelearner
# 35 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	waitstate
# 36 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 37 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D60
# 38 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	special IsSelectedMonEgg
# 39 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 40 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D52
# 41 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 42 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D44
# 43 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D1A
	return


Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D1A::
# 47 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177C5D
# 48 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	special TeachMoveRelearnerMove
# 50 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	waitstate
# 51 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 52 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CE4
# 53 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177CC3
# 54 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 56 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D60
	return


Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D44::
# 60 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177C78
# 61 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 62 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CE4
	return


Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D52::
# 66 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177D33
# 67 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 68 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	goto Naranja_IslaNavel_G05_M06_EventScript_Sub_08153CE4
	return


Naranja_IslaNavel_G05_M06_EventScript_Sub_08153D60::
# 72 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M06_Text_08177CEF
# 73 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	releaseall
	end


Naranja_IslaNavel_G05_M06_Text_08177AF4::
# 78 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "I’m the MOVE TUTOR.\pI know all the moves that POKéMON\nlearn - every one of them - and I can\lteach POKéMON those moves.\pI can teach a move to a POKéMON\nof yours if you’d like.\pI’ll do it for a HEART SCALE.\nI’m collecting those now.$"

Naranja_IslaNavel_G05_M06_Text_08177BDB::
# 82 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "Oh! That’s it! That’s an honest to\ngoodness HEART SCALE!\pLet me guess, you want me to teach\na move?$"

Naranja_IslaNavel_G05_M06_Text_08177C3F::
# 86 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

Naranja_IslaNavel_G05_M06_Text_08177C5D::
# 90 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "Which move should I teach?$"

Naranja_IslaNavel_G05_M06_Text_08177C78::
# 94 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "Sorry...\pIt doesn’t appear as if I have any move\nI can teach that POKéMON.$"

Naranja_IslaNavel_G05_M06_Text_08177CC3::
# 98 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\nin exchange.$"

Naranja_IslaNavel_G05_M06_Text_08177CEF::
# 102 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "If your POKéMON need to learn a move,\ncome back with a HEART SCALE.$"

Naranja_IslaNavel_G05_M06_Text_08177D33::
# 106 "data/maps/Naranja_IslaNavel_G05_M06/scripts.pory"
	.string "Hunh? There isn’t a single move that\nI can teach an EGG.$"
