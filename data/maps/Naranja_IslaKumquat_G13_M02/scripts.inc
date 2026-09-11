Naranja_IslaKumquat_G13_M02_MapScripts::
	.byte 0


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 8 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187348
# 9 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 14 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 15 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M02_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 16 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	message Naranja_IslaKumquat_G13_M02_Text_081873B9
# 17 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	multichoice 0x14, 8, 0x10, 1
# 19 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 20 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158458
# 21 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 22 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_0815844F
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_0815844F::
# 27 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187459
# 28 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158458::
# 33 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187495
# 34 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 5
# 35 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158477
# 37 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 38 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158481
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158477::
# 43 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081874F5
# 44 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
# 45 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_08158481::
# 50 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187534
# 51 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
# 52 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M02_GENTLEMAN, Naranja_IslaKumquat_G13_M02_Movement_081584FC
# 53 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 54 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 55 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 56 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 57 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584BD
# 58 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 59 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584D2
# 60 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 61 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584E7
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584BD::
# 66 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 67 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M02_Movement_08158504
# 68 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M03, 0xFF, 0xB, 8
# 70 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584D2::
# 75 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 76 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M02_Movement_081584FE
# 77 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 78 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M03, 0xFF, 0xB, 8
# 79 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sub_081584E7::
# 84 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 85 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M02_Movement_08158501
# 86 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 87 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M03, 0xFF, 0xB, 8
# 88 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_5::
# 93 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_0818757F
# 94 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_1::
# 99 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081875BE
# 100 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_6::
# 105 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081875F8
# 106 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_12::
# 111 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187641
# 112 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_10::
# 117 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081876A1
# 118 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_3::
# 123 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_0818770C
# 124 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_8::
# 129 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_0818775F
# 130 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_15::
# 135 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081877A9
# 136 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_Sign_11::
# 141 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187810
# 142 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId3::
# 147 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081878B7
# 148 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId4::
# 153 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_0818791D
# 154 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId5::
# 159 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081879BF
# 160 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId6::
# 165 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_081879E6
# 166 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId7::
# 171 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187A1A
# 172 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId10::
# 177 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187AA0
# 178 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId8::
# 183 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187B04
# 184 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
# 185 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	lockall
# 186 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M02_ARTIST_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 187 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 188 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M02_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId9::
# 193 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M02_Text_08187B7F
# 194 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	callstd 2
	end


# 198 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_081584FC:
# 199 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

# 202 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_081584FE:
# 203 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_left
# 204 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

# 207 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_08158501:
# 208 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_right
# 209 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

# 212 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
Naranja_IslaKumquat_G13_M02_Movement_08158504:
# 213 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
# 214 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	walk_up
	step_end

Naranja_IslaKumquat_G13_M02_Text_08187348::
# 217 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Welcome to LILYCOVE MUSEUM.\pPlease take the time to enjoy our\ncollection of fantastic artwork\lfeaturing POKéMON.$"

Naranja_IslaKumquat_G13_M02_Text_081873B9::
# 221 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I’m the CURATOR of this MUSEUM of\nfine arts.\pIt’s heartening to see someone so\nyoung as you in our MUSEUM.\pHave you viewed our collection of\npaintings already?$"

Naranja_IslaKumquat_G13_M02_Text_08187459::
# 225 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Ah, then let me not disturb you.\nPlease, do take your time.$"

Naranja_IslaKumquat_G13_M02_Text_08187495::
# 229 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Oh? I do believe that you seem to\nbe a POKéMON TRAINER.\pHave you an interest in paintings,\ntoo?$"

Naranja_IslaKumquat_G13_M02_Text_081874F5::
# 233 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I see...\pI’m honored that you would visit\nus in spite of that.$"

Naranja_IslaKumquat_G13_M02_Text_08187534::
# 237 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Ah, excellent!\nYou do like paintings!\pThen, may I ask you to come with me?$"

Naranja_IslaKumquat_G13_M02_Text_0818757F::
# 241 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a very old painting.\nThe paint is peeling here and there.$"

Naranja_IslaKumquat_G13_M02_Text_081875BE::
# 245 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s an odd landscape with bizarre\nand fantastic scenery.$"

Naranja_IslaKumquat_G13_M02_Text_081875F8::
# 249 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a painting of a beautiful, smiling\nwoman with a POKéMON on her lap.$"

Naranja_IslaKumquat_G13_M02_Text_08187641::
# 253 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a painting of a legendary POKéMON\nfrom long ago.\pThe artist painted this from\nimagination.$"

Naranja_IslaKumquat_G13_M02_Text_081876A1::
# 257 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a painting of GRASS POKéMON\nswaying in a breeze.\pThey appear to be enjoying the wind’s\ngentle caress.$"

Naranja_IslaKumquat_G13_M02_Text_0818770C::
# 261 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a delicious-looking painting\nof BERRIES.\pThis painting could make you hungry!$"

Naranja_IslaKumquat_G13_M02_Text_0818775F::
# 265 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a replica of a famous sculpture.\pIt depicts an ancient BIRD POKéMON.$"

Naranja_IslaKumquat_G13_M02_Text_081877A9::
# 269 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a big POKé BALL carved from a\nblack stone.\pIt was apparently used in festivals\nin the olden days.$"

Naranja_IslaKumquat_G13_M02_Text_08187810::
# 273 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "It’s a huge stone tablet inscribed\nwith POKéMON and dense text in the\lsmall characters of an ancient,\lunreadable language.$"

Naranja_IslaKumquat_G13_M02_Text_081878B7::
# 277 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Battling with POKéMON is fun,\nI’ll grant you that.\pBut one mustn’t forget our love for\nthe fine arts.$"

Naranja_IslaKumquat_G13_M02_Text_0818791D::
# 281 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "This ART MUSEUM... Well, you could\nsee many fantastic paintings.\pAnd the CURATOR is a wonderful person.\pAmong artists like myself, this MUSEUM\nis an inspiration.$"

Naranja_IslaKumquat_G13_M02_Text_081879BF::
# 285 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "This lady is pretty!\nShe’s like Mommy!$"

Naranja_IslaKumquat_G13_M02_Text_081879E6::
# 289 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "This POKéMON is adorable!\nJust like our little boy!$"

Naranja_IslaKumquat_G13_M02_Text_08187A1A::
# 293 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I’d heard that this ART MUSEUM got\nin some new paintings.\pSo, naturally I hurried over.\pAre the new paintings up on the\nsecond floor?$"

Naranja_IslaKumquat_G13_M02_Text_08187AA0::
# 297 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "Lately, the CURATOR has been\nunusually cheerful.\pI bet something good happened for him.\nDefinitely.$"

Naranja_IslaKumquat_G13_M02_Text_08187B04::
# 301 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "I aim to see many great paintings\nhere and learn from them.\pI have this dream of one day having\nmy artwork exhibited here.$"

Naranja_IslaKumquat_G13_M02_Text_08187B7F::
# 305 "data/maps/Naranja_IslaKumquat_G13_M02/scripts.pory"
	.string "The ART MUSEUM has become a favorite\ntourist destination.\pIt’s great for LILYCOVE...\nNo, great for the HOENN region!\pThis is what I’ve heard - a lone TRAINER\nprocured all the paintings upstairs.$"
