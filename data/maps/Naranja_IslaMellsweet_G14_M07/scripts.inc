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
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DA77
# 47 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15A
# 49 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 50 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 0
# 51 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_007B
# 52 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_012E
# 53 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DB22
# 54 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	closemessage
# 56 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	delay 0x14
# 57 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M07_STEVEN, Naranja_IslaMellsweet_G14_M07_Movement_0815AA76
# 58 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 59 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 1
# 60 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 65 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	lockall
# 66 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DD12
# 67 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 5
# 68 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 69 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AAE6
# 70 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	getpartysize
# 71 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 72 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AADC
# 73 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 74 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	removeobject LOCALID_ISLA_MELLSWEET_G14_M07_ITEM_BALL
# 75 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	message Naranja_IslaMellsweet_G14_M07_Text_0818DD61
# 77 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitfanfare
# 78 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitmessage
# 79 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	givemon SPECIES_BELDUM, 5, 0
# 80 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	bufferspeciesname 1, SPECIES_BELDUM
# 81 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_081A1102
# 82 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 5
# 83 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 84 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 85 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_ITEM_BALL
# 86 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_012A
# 87 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AADC::
# 92 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DD77
# 93 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 4
# 94 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AAE6::
# 99 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DD9E
# 100 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sign_1::
# 106 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818E0A3
# 107 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_STEVEN_LocalId1::
# 112 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DC25
# 113 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId4::
# 118 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	lockall
# 119 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_012E
# 120 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AB16
# 121 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DF1A
# 122 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 4
# 123 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_0815AB16::
# 128 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_0818DDC2
# 129 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M07_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 135 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15A
# 136 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 137 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	callstd 1
# 138 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_007B
	end


Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678::
# 143 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	fadescreen 1
# 144 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	special ChangePokemonNickname
# 145 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	waitstate
	return


# 149 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
Naranja_IslaMellsweet_G14_M07_Movement_0815AA6E:
# 150 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 151 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 152 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 153 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 154 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 155 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_left
# 156 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_in_place_faster_down
	step_end

# 159 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
Naranja_IslaMellsweet_G14_M07_Movement_0815AA76:
# 160 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_up
# 161 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_right
# 162 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_right
# 163 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_right
# 164 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_IslaMellsweet_G14_M07_Text_0818DA77::
# 167 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}?\pYes, this is my place. It’s a little\nembarrassing how empty it is here.\pOh, here, you should take this HM.\pIt contains DIVE.\nI’ve already taught my POKéMON.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DB22::
# 171 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "STEVEN: While you’re using SURF, you\nshould notice dark patches of water.\pUse DIVE if you come to deep water\nlike it. You’ll drop to the seafloor.\pWhen you want to come back up, use\nDIVE again.\pIn some places, it won’t be possible\nfor you to surface, though.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DC25::
# 175 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "STEVEN: Apparently, there’s an\nunderwater cavern between\lMOSSDEEP and SOOTOPOLIS.\pYou know, the one that CAPT. STERN\nfound in his submarine.\pAn underwater cavern...\pThere might be some rare stones down\nthere... I should go for a DIVE...$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD12::
# 179 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\pIt contained the POKéMON\nBELDUM.\pTake the POKé BALL?$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD61::
# 183 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD77::
# 187 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "There is no space for another POKéMON.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DD9E::
# 191 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\nit was.$"

Naranja_IslaMellsweet_G14_M07_Text_0818DDC2::
# 195 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "It’s a letter.\p... ... ... ... ... ...\pTo {PLAYER}{KUN}...\pI’ve decided to do a little soul-\nsearching and train on the road.\pI don’t plan to return home for some\ntime.\pI have a favor to ask of you.\pI want you to take the POKé BALL on\nthe desk.\pInside it is a BELDUM, my favorite\nPOKéMON.\pI’m counting on you.\pMay our paths cross some day.\pSTEVEN STONE$"

Naranja_IslaMellsweet_G14_M07_Text_0818DF1A::
# 199 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "It’s a letter.\p... ... ... ... ... ...\pTo {PLAYER}{KUN}...\pI’ve decided to do a little soul-\nsearching and train on the road.\pI don’t plan to return home for some\ntime.\pI have a favor to ask of you.\pI want you to take the POKé BALL on\nthe desk.\pInside it is a BELDUM, my favorite\nPOKéMON.\pI’m counting on you.\pIf you’d like, you should also take\nthe HM DIVE.\pMay our paths cross some day.\pSTEVEN STONE$"

Naranja_IslaMellsweet_G14_M07_Text_0818E0A3::
# 203 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "It’s a collection of rare rocks and\nstones assembled by STEVEN.$"

Naranja_IslaMellsweet_G14_M07_Text_081A1102::
# 207 "data/maps/Naranja_IslaMellsweet_G14_M07/scripts.pory"
	.string "Want to give a nickname to the\n{STR_VAR_2} you received?$"
