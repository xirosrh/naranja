Naranja_IslaMandarin_G00_M02_MapScripts::
# 5 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMandarin_G00_M02_OnTransition
	.byte 0


Naranja_IslaMandarin_G00_M02_OnTransition::
# 9 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0818
# 10 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M06_WOMAN_7
# 11 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0832
# 12 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0063
# 13 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setvar VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 0
# 14 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D1
# 15 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C053
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C053::
# 20 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARIN_G10_M00_WATTSON
# 21 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARIN_G00_M02_WATTSON
	return


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId1::
# 26 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_081664DF
# 27 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId3::
# 32 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_0816655C
# 33 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 38 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_081665DB
# 39 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId2::
# 44 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_0816662A
# 45 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_6::
# 50 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166665
# 51 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_2::
# 56 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166697
# 57 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_7::
# 62 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_081666E4
# 63 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_8::
# 68 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_0816671C
# 69 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId5::
# 74 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	lock
# 75 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	faceplayer
# 76 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0062
# 77 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C0BA
# 78 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_0816674A
# 79 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0062
# 81 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C0BA::
# 86 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166879
# 87 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 88 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId7::
# 93 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	lock
	return


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_WALLY_LocalId6::
	return


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_WATTSON_LocalId8::
# 102 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	lock
# 103 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	faceplayer
# 104 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D1
# 105 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C368
# 106 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 107 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C33C
# 108 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D0
# 109 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C332
# 110 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_081661C1
# 111 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 112 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10F
# 113 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 114 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 0
# 115 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D0
# 116 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166331
# 117 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 118 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C332::
# 123 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166331
# 124 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 125 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C33C::
# 130 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_081663EB
# 131 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 132 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x138
# 133 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 134 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 0
# 135 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 136 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 137 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D1
# 138 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166488
# 139 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 140 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C368::
# 145 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_08166488
# 146 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 4
# 147 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_3::
# 152 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G00_M02_Text_081A0D41
# 153 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 3
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 158 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4D
# 159 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 160 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 1
	end


Naranja_IslaMandarin_G00_M02_Text_081661C1::
# 164 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\nYou look like you have a lot of zip!\lThat’s a good thing, wahahahaha!\pFine! I’ve decided!\nI need a favor, {PLAYER}{KUN}!\pMAUVILLE CITY has an underground\nsector called NEW MAUVILLE.\p{PLAYER}{KUN}, I’d like you to go there and\nswitch off the GENERATOR.\pThe GENERATOR has been running a bit\nhaywire. It’s getting unsafe.\pHere, this is the KEY to get into NEW\nMAUVILLE.$"

Naranja_IslaMandarin_G00_M02_Text_08166331::
# 168 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Don’t you worry about it.\nIt won’t be a challenge to you.\pThe entrance to NEW MAUVILLE is just\na short SURF away from ROUTE 110.\pThat’s it, then, you have my trust!\nWahahahaha!$"

Naranja_IslaMandarin_G00_M02_Text_081663EB::
# 172 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Wahahahaha!\pI knew it, {PLAYER}{KUN}! I knew I’d made\nthe right choice asking you!\pThis is my thanks - a TM containing\nTHUNDERBOLT!\pGo on, you’ve earned it!$"

Naranja_IslaMandarin_G00_M02_Text_08166488::
# 176 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Wahahahaha!\pIt pleases me to no end to see the\nyoung step up and take charge!$"

Naranja_IslaMandarin_G00_M02_Text_081664DF::
# 180 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "You know, it’s cool to have POKéMON\nbattles and stuff...\pBut if your POKéMON gets hurt, you\nhave to nurse it back to health.$"

Naranja_IslaMandarin_G00_M02_Text_0816655C::
# 184 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Los viajes en zepelín son\nextremadamente divertidos.\pMe encanta ver la cara de la gente\nque acaba de salir de uno de uno, jeje$"

Naranja_IslaMandarin_G00_M02_Text_081665DB::
# 188 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Have you been to RYDEL’S CYCLES yet?\pRYDEL, the owner, is a very generous\nman.$"

Naranja_IslaMandarin_G00_M02_Text_0816662A::
# 192 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Even if you’re riding a BIKE, wild\nPOKéMON could jump you.$"

Naranja_IslaMandarin_G00_M02_Text_08166665::
# 196 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "MAUVILLE CITY\n“The bright and shiny city of fun!”$"

Naranja_IslaMandarin_G00_M02_Text_08166697::
# 200 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\nLEADER: WATTSON\l“The cheerfully electrifying man!”$"

Naranja_IslaMandarin_G00_M02_Text_081666E4::
# 204 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "“Ride in gravel and shake up your\nsoul!”\lRYDEL’S CYCLES$"

Naranja_IslaMandarin_G00_M02_Text_0816671C::
# 208 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "“The play spot for all!”\nMAUVILLE GAME CORNER$"

Naranja_IslaMandarin_G00_M02_Text_0816674A::
# 212 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Hi, do you check out TV at all?\pThey’ve added a bunch of cool new\nshows recently.\pTV is so cool. I’ve seen my friends on\nTV just out of the blue.\pAnd, sometimes, they even put you on TV\nwithout telling you.\pI wish I would be on TV sometime.\pThat’s why I think you should check\nout TVs whenever you can.$"

Naranja_IslaMandarin_G00_M02_Text_08166879::
# 216 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

Naranja_IslaMandarin_G00_M02_Text_081A0D41::
# 220 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "“Selected items for your convenience!”\nPOKéMON MART$"
