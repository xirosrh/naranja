Naranja_IslaMellsweet_G14_M07_MapScripts::
# 5 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaMellsweet_G14_M07_OnLoad
# 6 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMellsweet_G14_M07_OnTransition
# 7 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaMellsweet_G14_M07_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaMellsweet_G14_M07_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 0, Naranja_IslaMellsweet_G14_M07_OnFrame_1
	.2byte 0


Naranja_IslaMellsweet_G14_M07_OnLoad::
# 13 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 14 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815A9DF
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815A9DF::
# 19 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setmetatile 6, 4, 0x2F1, 1
	return


Naranja_IslaMellsweet_G14_M07_OnTransition::
# 24 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 1
# 25 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815A9F5
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815A9F5::
# 30 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, 6, 5
# 31 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, 7
	return


Naranja_IslaMellsweet_G14_M07_OnFrame_1::
# 36 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	lockall
# 37 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 38 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 41 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 42 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 43 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, Naranja_IslaMellsweet_G14_M07_Movement_0815AA6E
# 45 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DA77, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15A
# 48 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 49 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 0
# 50 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_007B
# 51 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_012E
# 52 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DB22, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	closemessage
# 54 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	delay 0x14
# 55 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, Naranja_IslaMellsweet_G14_M07_Movement_0815AA76
# 56 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 57 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 1
# 58 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 63 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	lockall
# 64 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DD12, MSGBOX_YESNO
# 65 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 66 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AAE6
# 67 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	getpartysize
# 68 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 69 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AADC
# 70 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 71 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	removeobject LOCALID_ISLA_MELLSWEET_G14_M07_ITEM_BALL
# 72 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	message Naranja_IslaMellsweet_G14_M07_Text_0818DD61
# 74 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitfanfare
# 75 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmessage
# 76 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	givemon SPECIES_BELDUM, 5, 0
# 77 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	bufferspeciesname 1, SPECIES_BELDUM
# 78 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_081A1102, MSGBOX_YESNO
# 79 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 80 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 81 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_ITEM_BALL
# 82 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_012A
# 83 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AADC::
# 88 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DD77, MSGBOX_DEFAULT
# 89 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AAE6::
# 94 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DD9E, MSGBOX_DEFAULT
# 95 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sign_1::
# 100 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818E0A3, MSGBOX_SIGN
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_GARY_LocalId1::
# 105 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DC25, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId4::
# 110 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	lockall
# 111 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_012E
# 112 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AB16
# 113 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DF1A, MSGBOX_DEFAULT
# 114 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AB16::
# 119 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M07_Text_0818DDC2, MSGBOX_DEFAULT
# 120 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 125 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15A
# 126 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 127 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 1
# 128 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_007B
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678::
# 133 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	fadescreen 1
# 134 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	special ChangePokemonNickname
# 135 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitstate
	return


# 139 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
Naranja_IslaMellsweet_G14_M07_Movement_0815AA6E:
# 140 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 141 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 142 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 143 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 144 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 145 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 146 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_in_place_faster_down
	step_end

# 149 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
Naranja_IslaMellsweet_G14_M07_Movement_0815AA76:
# 150 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_up
# 151 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_right
# 152 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_right
# 153 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_right
# 154 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_IslaMellsweet_G14_M07_Text_0818DA77::
# 157 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}?\pYes, this is my place. It’s a little\nembarrassing how empty it is here.\pOh, here, you should take this HM.\pIt contains DIVE.\nI’ve already taught my POKéMON.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DB22::
# 161 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "STEVEN: While you’re using SURF, you\nshould notice dark patches of water.\pUse DIVE if you come to deep water\nlike it. You’ll drop to the seafloor.\pWhen you want to come back up, use\nDIVE again.\pIn some places, it won’t be possible\nfor you to surface, though.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DC25::
# 165 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "STEVEN: Apparently, there’s an\nunderwater cavern between\lMOSSDEEP and SOOTOPOLIS.\pYou know, the one that CAPT. STERN\nfound in his submarine.\pAn underwater cavern...\pThere might be some rare stones down\nthere... I should go for a DIVE...$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD12::
# 169 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\pIt contained the POKéMON\nBELDUM.\pTake the POKé BALL?$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD61::
# 173 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD77::
# 177 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "There is no space for another POKéMON.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD9E::
# 181 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\nit was.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DDC2::
# 185 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "It’s a letter.\p... ... ... ... ... ...\pTo {PLAYER}{KUN}...\pI’ve decided to do a little soul-\nsearching and train on the road.\pI don’t plan to return home for some\ntime.\pI have a favor to ask of you.\pI want you to take the POKé BALL on\nthe desk.\pInside it is a BELDUM, my favorite\nPOKéMON.\pI’m counting on you.\pMay our paths cross some day.\pSTEVEN STONE$"

Naranja_IslaMellsweet_G14_M07_Text_0818DF1A::
# 189 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "It’s a letter.\p... ... ... ... ... ...\pTo {PLAYER}{KUN}...\pI’ve decided to do a little soul-\nsearching and train on the road.\pI don’t plan to return home for some\ntime.\pI have a favor to ask of you.\pI want you to take the POKé BALL on\nthe desk.\pInside it is a BELDUM, my favorite\nPOKéMON.\pI’m counting on you.\pIf you’d like, you should also take\nthe HM DIVE.\pMay our paths cross some day.\pSTEVEN STONE$"

Naranja_IslaMellsweet_G14_M07_Text_0818E0A3::
# 193 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "It’s a collection of rare rocks and\nstones assembled by STEVEN.$"

Naranja_IslaMellsweet_G14_M07_Text_081A1102::
# 197 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "Want to give a nickname to the\n{STR_VAR_2} you received?$"
