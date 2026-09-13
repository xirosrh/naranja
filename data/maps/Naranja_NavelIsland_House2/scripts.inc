Naranja_NavelIsland_House2_MapScripts::
	.byte 0


Naranja_NavelIsland_House2_EventScript_OldMan1::
# 8 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	lockall
# 9 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_HOUSE2_OLD_MAN_1, Naranja_KumquatIsland_Movement_081A0839
# 10 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	waitmovement LOCALID_NONE
# 11 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	checkflag FLAG_TEMP_1
# 12 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153CB6
# 13 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177AF4, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	setflag FLAG_TEMP_1
# 15 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto Naranja_NavelIsland_House2_EventScript_Sub_08153CB6
	return


Naranja_NavelIsland_House2_EventScript_Sub_08153CB6::
# 19 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	checkitem ITEM_HEART_SCALE, 1
# 20 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 21 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153D60
# 22 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177BDB, MSGBOX_YESNO
# 23 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 24 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 25 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153D60
# 26 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto Naranja_NavelIsland_House2_EventScript_Sub_08153CE4
	return


Naranja_NavelIsland_House2_EventScript_Sub_08153CE4::
# 30 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177C3F, MSGBOX_DEFAULT
# 31 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	special ChooseMonForMoveRelearner
# 32 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	waitstate
# 33 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 34 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153D60
# 35 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	special IsSelectedMonEgg
# 36 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 37 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153D52
# 38 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 39 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153D44
# 40 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto Naranja_NavelIsland_House2_EventScript_Sub_08153D1A
	return


Naranja_NavelIsland_House2_EventScript_Sub_08153D1A::
# 44 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177C5D, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	special TeachMoveRelearnerMove
# 46 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	waitstate
# 47 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 48 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House2_EventScript_Sub_08153CE4
# 49 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177CC3, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 51 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto Naranja_NavelIsland_House2_EventScript_Sub_08153D60
	return


Naranja_NavelIsland_House2_EventScript_Sub_08153D44::
# 55 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177C78, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto Naranja_NavelIsland_House2_EventScript_Sub_08153CE4
	return


Naranja_NavelIsland_House2_EventScript_Sub_08153D52::
# 60 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177D33, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	goto Naranja_NavelIsland_House2_EventScript_Sub_08153CE4
	return


Naranja_NavelIsland_House2_EventScript_Sub_08153D60::
# 65 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	msgbox Naranja_NavelIsland_House2_Text_08177CEF, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	releaseall
	end


Naranja_NavelIsland_House2_Text_08177AF4::
# 70 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "I’m the MOVE TUTOR.\pI know all the moves that POKéMON\nlearn - every one of them - and I can\lteach POKéMON those moves.\pI can teach a move to a POKéMON\nof yours if you’d like.\pI’ll do it for a HEART SCALE.\nI’m collecting those now.$"

Naranja_NavelIsland_House2_Text_08177BDB::
# 74 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "Oh! That’s it! That’s an honest to\ngoodness HEART SCALE!\pLet me guess, you want me to teach\na move?$"

Naranja_NavelIsland_House2_Text_08177C3F::
# 78 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

Naranja_NavelIsland_House2_Text_08177C5D::
# 82 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "Which move should I teach?$"

Naranja_NavelIsland_House2_Text_08177C78::
# 86 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "Sorry...\pIt doesn’t appear as if I have any move\nI can teach that POKéMON.$"

Naranja_NavelIsland_House2_Text_08177CC3::
# 90 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\nin exchange.$"

Naranja_NavelIsland_House2_Text_08177CEF::
# 94 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "If your POKéMON need to learn a move,\ncome back with a HEART SCALE.$"

Naranja_NavelIsland_House2_Text_08177D33::
# 98 "data/maps/Naranja_NavelIsland_House2/scripts.pory"
	.string "Hunh? There isn’t a single move that\nI can teach an EGG.$"
