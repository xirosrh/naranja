Naranja_IslaKumquat_G13_M02_MapScripts::
	.byte 0


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 8 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187348, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 13 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 14 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M02_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 15 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	message Naranja_IslaKumquat_G13_M02_Text_081873B9
# 16 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	multichoice 0x14, 8, 0x10, 1
# 18 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158458
# 20 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 21 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_0815844F
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_0815844F::
# 26 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187459, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158458::
# 31 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187495, MSGBOX_YESNO
# 32 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158477
# 34 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 35 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158481
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158477::
# 40 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081874F5, MSGBOX_SIGN
# 41 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158481::
# 46 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187534, MSGBOX_SIGN
# 47 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M02_GENTLEMAN, Naranja_IslaKumquat_G13_M02_Movement_081584FC
# 48 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 49 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 50 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 51 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 52 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584BD
# 53 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 54 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584D2
# 55 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 56 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584E7
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584BD::
# 61 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 62 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M02_Movement_08158504
# 63 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 64 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M03, 0xFF, 0xB, 8
# 65 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584D2::
# 70 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 71 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M02_Movement_081584FE
# 72 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 73 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M03, 0xFF, 0xB, 8
# 74 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584E7::
# 79 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 80 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M02_Movement_08158501
# 81 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 82 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M03, 0xFF, 0xB, 8
# 83 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_5::
# 88 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_0818757F, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_1::
# 93 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081875BE, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_6::
# 98 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081875F8, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_12::
# 103 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187641, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_10::
# 108 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081876A1, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_3::
# 113 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_0818770C, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_8::
# 118 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_0818775F, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_15::
# 123 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081877A9, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_11::
# 128 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187810, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId3::
# 133 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081878B7, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId4::
# 138 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_0818791D, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId5::
# 143 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081879BF, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId6::
# 148 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_081879E6, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId7::
# 153 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187A1A, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId10::
# 158 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187AA0, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId8::
# 163 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187B04, MSGBOX_NPC
# 164 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 165 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M02_ARTIST_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 166 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 167 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId9::
# 172 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M02_Text_08187B7F, MSGBOX_NPC
	end


# 176 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_081584FC:
# 177 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_081584FE:
# 181 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_left
# 182 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

# 185 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_08158501:
# 186 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_right
# 187 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

# 190 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_08158504:
# 191 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
# 192 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

Naranja_IslaKumquat_G13_M02_Text_08187348::
# 195 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Welcome to LILYCOVE MUSEUM.\pPlease take the time to enjoy our\ncollection of fantastic artwork\lfeaturing POKéMON.$"

Naranja_IslaKumquat_G13_M02_Text_081873B9::
# 199 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I’m the CURATOR of this MUSEUM of\nfine arts.\pIt’s heartening to see someone so\nyoung as you in our MUSEUM.\pHave you viewed our collection of\npaintings already?$"

Naranja_IslaKumquat_G13_M02_Text_08187459::
# 203 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Ah, then let me not disturb you.\nPlease, do take your time.$"

Naranja_IslaKumquat_G13_M02_Text_08187495::
# 207 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Oh? I do believe that you seem to\nbe a POKéMON TRAINER.\pHave you an interest in paintings,\ntoo?$"

Naranja_IslaKumquat_G13_M02_Text_081874F5::
# 211 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I see...\pI’m honored that you would visit\nus in spite of that.$"

Naranja_IslaKumquat_G13_M02_Text_08187534::
# 215 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Ah, excellent!\nYou do like paintings!\pThen, may I ask you to come with me?$"

Naranja_IslaKumquat_G13_M02_Text_0818757F::
# 219 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a very old painting.\nThe paint is peeling here and there.$"

Naranja_IslaKumquat_G13_M02_Text_081875BE::
# 223 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s an odd landscape with bizarre\nand fantastic scenery.$"

Naranja_IslaKumquat_G13_M02_Text_081875F8::
# 227 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a painting of a beautiful, smiling\nwoman with a POKéMON on her lap.$"

Naranja_IslaKumquat_G13_M02_Text_08187641::
# 231 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a painting of a legendary POKéMON\nfrom long ago.\pThe artist painted this from\nimagination.$"

Naranja_IslaKumquat_G13_M02_Text_081876A1::
# 235 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a painting of GRASS POKéMON\nswaying in a breeze.\pThey appear to be enjoying the wind’s\ngentle caress.$"

Naranja_IslaKumquat_G13_M02_Text_0818770C::
# 239 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a delicious-looking painting\nof BERRIES.\pThis painting could make you hungry!$"

Naranja_IslaKumquat_G13_M02_Text_0818775F::
# 243 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a replica of a famous sculpture.\pIt depicts an ancient BIRD POKéMON.$"

Naranja_IslaKumquat_G13_M02_Text_081877A9::
# 247 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a big POKé BALL carved from a\nblack stone.\pIt was apparently used in festivals\nin the olden days.$"

Naranja_IslaKumquat_G13_M02_Text_08187810::
# 251 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a huge stone tablet inscribed\nwith POKéMON and dense text in the\lsmall characters of an ancient,\lunreadable language.$"

Naranja_IslaKumquat_G13_M02_Text_081878B7::
# 255 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Battling with POKéMON is fun,\nI’ll grant you that.\pBut one mustn’t forget our love for\nthe fine arts.$"

Naranja_IslaKumquat_G13_M02_Text_0818791D::
# 259 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "This ART MUSEUM... Well, you could\nsee many fantastic paintings.\pAnd the CURATOR is a wonderful person.\pAmong artists like myself, this MUSEUM\nis an inspiration.$"

Naranja_IslaKumquat_G13_M02_Text_081879BF::
# 263 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "This lady is pretty!\nShe’s like Mommy!$"

Naranja_IslaKumquat_G13_M02_Text_081879E6::
# 267 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "This POKéMON is adorable!\nJust like our little boy!$"

Naranja_IslaKumquat_G13_M02_Text_08187A1A::
# 271 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I’d heard that this ART MUSEUM got\nin some new paintings.\pSo, naturally I hurried over.\pAre the new paintings up on the\nsecond floor?$"

Naranja_IslaKumquat_G13_M02_Text_08187AA0::
# 275 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Lately, the CURATOR has been\nunusually cheerful.\pI bet something good happened for him.\nDefinitely.$"

Naranja_IslaKumquat_G13_M02_Text_08187B04::
# 279 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I aim to see many great paintings\nhere and learn from them.\pI have this dream of one day having\nmy artwork exhibited here.$"

Naranja_IslaKumquat_G13_M02_Text_08187B7F::
# 283 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "The ART MUSEUM has become a favorite\ntourist destination.\pIt’s great for LILYCOVE...\nNo, great for the HOENN region!\pThis is what I’ve heard - a lone TRAINER\nprocured all the paintings upstairs.$"
