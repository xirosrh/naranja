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
	msgbox Naranja_IslaShamouti_G00_M04_Text_08167577, MSGBOX_NPC
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 25 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	lock
# 26 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	faceplayer
# 27 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0127
# 28 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C973
# 29 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_081675C2, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C973::
# 35 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_08167642, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId2::
# 41 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_0816768A, MSGBOX_NPC
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId5::
# 46 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_0816770E, MSGBOX_NPC
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId4::
# 51 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_081677BD, MSGBOX_NPC
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId6::
# 56 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_0816782C, MSGBOX_NPC
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sign_1::
# 61 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_0816792F, MSGBOX_SIGN
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sign_4::
# 66 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_08167969, MSGBOX_SIGN
	end


Naranja_IslaShamouti_G00_M04_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId7::
# 71 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	lock
# 72 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	checkitem ITEM_DEVON_SCOPE, 1
# 74 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 75 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9CF
# 76 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_08167868, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9CF::
# 82 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_0816788B, MSGBOX_YESNO
# 83 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 84 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9E4
# 85 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G00_M04_EventScript_Sub_0814C9E4::
# 90 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G00_M04_Text_081678CB, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	closemessage
# 92 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	applymovement 32783, Naranja_Route120_G00_M35_Movement_081A0662
# 93 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 94 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitse
# 95 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 96 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	delay 0x28
# 97 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitmoncry
# 98 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	applymovement 32783, Naranja_IslaShamouti_G00_M04_Movement_0814CA13
# 99 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 100 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	removeobject 32783
# 101 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_0127
# 102 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	release
	end


# 106 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
Naranja_IslaShamouti_G00_M04_Movement_0814CA13:
# 107 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	walk_right
	step_end

Naranja_IslaShamouti_G00_M04_Text_08167577::
# 110 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Sniff...\nUm... You, uh...smell singed.\pWere you at a volcano or something?$"

Naranja_IslaShamouti_G00_M04_Text_081675C2::
# 114 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "I want to go to the POKéMON GYM, but\nsomething’s blocking the way.\pAfter all the bother I went through\ntraining on ROUTE 120...$"

Naranja_IslaShamouti_G00_M04_Text_08167642::
# 118 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "I’ve got my pride-and-joy POKéMON\nwith me. This time, I’ll beat WINONA.$"

Naranja_IslaShamouti_G00_M04_Text_0816768A::
# 122 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "The ground absorbs rainwater, and\ntrees grow by drinking that water...\pOur FORTREE CITY exists because\nthere’s both water and soil.$"

Naranja_IslaShamouti_G00_M04_Text_0816770E::
# 126 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "The CITY consists of homes built on\ntrees.\pPerhaps because of that lifestyle,\neveryone is healthy and lively.\pWhy, even myself - I feel as if I’ve\ngrown thirty years younger.$"

Naranja_IslaShamouti_G00_M04_Text_081677BD::
# 130 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Living on top of trees is okay.\pBut sometimes BUG POKéMON come in\nthrough windows.\lIt can be really startling.$"

Naranja_IslaShamouti_G00_M04_Text_0816782C::
# 134 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Some POKéMON evolve when they go\nthrough a Game Link cable.$"

Naranja_IslaShamouti_G00_M04_Text_08167868::
# 138 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Something unseeable is in the way.$"

Naranja_IslaShamouti_G00_M04_Text_0816788B::
# 142 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "Something unseeable is in the way.\pWant to use the DEVON SCOPE?$"

Naranja_IslaShamouti_G00_M04_Text_081678CB::
# 146 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\pAn invisible POKéMON became completely\nvisible!\pThe startled POKéMON fled!$"

Naranja_IslaShamouti_G00_M04_Text_0816792F::
# 150 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "FORTREE CITY\n“The treetop city that frolics with\lnature.”$"

Naranja_IslaShamouti_G00_M04_Text_08167969::
# 154 "data/maps/Naranja_IslaShamouti_G00_M04/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\nLEADER: WINONA\p“The bird user taking flight into\nthe world.”$"
