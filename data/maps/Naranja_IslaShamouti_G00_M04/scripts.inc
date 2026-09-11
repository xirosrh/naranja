Naranja_IslaShamouti_G00_M04_MapScripts::
# 5 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaShamouti_G00_M04_OnTransition
# 6 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_IslaShamouti_G00_M04_OnResume
	.byte 0


Naranja_IslaShamouti_G00_M04_OnTransition::
# 10 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_081A
	end


Naranja_IslaShamouti_G00_M04_OnResume::
# 15 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	setstepcallback 2
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId1::
# 20 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_08167577
# 21 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 26 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	lock
# 27 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0127
# 29 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C973
# 30 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_081675C2
# 31 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C973::
# 37 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_08167642
# 38 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId2::
# 44 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_0816768A
# 45 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId5::
# 50 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_0816770E
# 51 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId4::
# 56 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_081677BD
# 57 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId6::
# 62 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_0816782C
# 63 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sign_1::
# 68 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_0816792F
# 69 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 3
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sign_4::
# 74 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_08167969
# 75 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 3
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId7::
# 80 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	lock
# 81 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	faceplayer
# 82 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	checkitem ITEM_DEVON_SCOPE, 1
# 83 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 84 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9CF
# 85 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_08167868
# 86 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9CF::
# 92 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_0816788B
# 93 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 5
# 94 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 95 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9E4
# 96 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9E4::
# 101 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G00_M04_Text_081678CB
# 102 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	callstd 4
# 103 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	closemessage
# 104 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	applymovement 32783, Naranja_Route120_G00_M35_Movement_081A0662
# 105 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 106 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitse
# 107 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 108 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	delay 0x28
# 109 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitmoncry
# 110 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	applymovement 32783, Naranja_IslaShamouti_G00_M04_Movement_0814CA13
# 111 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 112 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	removeobject 32783
# 113 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0127
# 114 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


# 118 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
Naranja_IslaShamouti_G00_M04_Movement_0814CA13:
# 119 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	walk_right
	step_end

Naranja_IslaShamouti_G00_M04_Text_08167577::
# 122 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Sniff...\nUm... You, uh...smell singed.\pWere you at a volcano or something?$"

Naranja_IslaShamouti_G00_M04_Text_081675C2::
# 126 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "I want to go to the POKéMON GYM, but\nsomething’s blocking the way.\pAfter all the bother I went through\ntraining on ROUTE 120...$"

Naranja_IslaShamouti_G00_M04_Text_08167642::
# 130 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "I’ve got my pride-and-joy POKéMON\nwith me. This time, I’ll beat WINONA.$"

Naranja_IslaShamouti_G00_M04_Text_0816768A::
# 134 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "The ground absorbs rainwater, and\ntrees grow by drinking that water...\pOur FORTREE CITY exists because\nthere’s both water and soil.$"

Naranja_IslaShamouti_G00_M04_Text_0816770E::
# 138 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "The CITY consists of homes built on\ntrees.\pPerhaps because of that lifestyle,\neveryone is healthy and lively.\pWhy, even myself - I feel as if I’ve\ngrown thirty years younger.$"

Naranja_IslaShamouti_G00_M04_Text_081677BD::
# 142 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Living on top of trees is okay.\pBut sometimes BUG POKéMON come in\nthrough windows.\lIt can be really startling.$"

Naranja_IslaShamouti_G00_M04_Text_0816782C::
# 146 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Some POKéMON evolve when they go\nthrough a Game Link cable.$"

Naranja_IslaShamouti_G00_M04_Text_08167868::
# 150 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Something unseeable is in the way.$"

Naranja_IslaShamouti_G00_M04_Text_0816788B::
# 154 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Something unseeable is in the way.\pWant to use the DEVON SCOPE?$"

Naranja_IslaShamouti_G00_M04_Text_081678CB::
# 158 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\pAn invisible POKéMON became completely\nvisible!\pThe startled POKéMON fled!$"

Naranja_IslaShamouti_G00_M04_Text_0816792F::
# 162 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "FORTREE CITY\n“The treetop city that frolics with\lnature.”$"

Naranja_IslaShamouti_G00_M04_Text_08167969::
# 166 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\nLEADER: WINONA\p“The bird user taking flight into\nthe world.”$"
