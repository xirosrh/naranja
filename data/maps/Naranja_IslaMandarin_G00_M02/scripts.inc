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
	msgbox Naranja_IslaMandarin_G00_M02_Text_081664DF, MSGBOX_NPC
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId3::
# 31 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_0816655C, MSGBOX_NPC
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 36 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_081665DB, MSGBOX_NPC
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId2::
# 41 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_0816662A, MSGBOX_NPC
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_6::
# 46 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166665, MSGBOX_SIGN
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_2::
# 51 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166697, MSGBOX_SIGN
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_7::
# 56 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_081666E4, MSGBOX_SIGN
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_8::
# 61 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_0816671C, MSGBOX_SIGN
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId5::
# 66 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	lock
# 67 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	faceplayer
# 68 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0062
# 69 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C0BA
# 70 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_0816674A, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0062
# 72 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C0BA::
# 77 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166879, MSGBOX_DEFAULT
# 78 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId7::
# 83 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	lock
	return


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_WALLY_LocalId6::
	return


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_WATTSON_LocalId8::
# 92 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	lock
# 93 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	faceplayer
# 94 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D1
# 95 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C368
# 96 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 97 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C33C
# 98 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D0
# 99 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C332
# 100 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_081661C1, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10F
# 102 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 103 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 0
# 104 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D0
# 105 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166331, MSGBOX_DEFAULT
# 106 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C332::
# 111 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166331, MSGBOX_DEFAULT
# 112 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C33C::
# 117 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_081663EB, MSGBOX_DEFAULT
# 118 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x138
# 119 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 120 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 0
# 121 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 122 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 123 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00D1
# 124 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166488, MSGBOX_DEFAULT
# 125 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sub_0814C368::
# 130 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_08166488, MSGBOX_DEFAULT
# 131 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G00_M02_EventScript_Sign_3::
# 136 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G00_M02_Text_081A0D41, MSGBOX_SIGN
	end


Naranja_IslaMandarin_G00_M02_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 141 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4D
# 142 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 143 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	callstd 1
	end


Naranja_IslaMandarin_G00_M02_Text_081661C1::
# 147 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\nYou look like you have a lot of zip!\lThat’s a good thing, wahahahaha!\pFine! I’ve decided!\nI need a favor, {PLAYER}{KUN}!\pMAUVILLE CITY has an underground\nsector called NEW MAUVILLE.\p{PLAYER}{KUN}, I’d like you to go there and\nswitch off the GENERATOR.\pThe GENERATOR has been running a bit\nhaywire. It’s getting unsafe.\pHere, this is the KEY to get into NEW\nMAUVILLE.$"

Naranja_IslaMandarin_G00_M02_Text_08166331::
# 151 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Don’t you worry about it.\nIt won’t be a challenge to you.\pThe entrance to NEW MAUVILLE is just\na short SURF away from ROUTE 110.\pThat’s it, then, you have my trust!\nWahahahaha!$"

Naranja_IslaMandarin_G00_M02_Text_081663EB::
# 155 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Wahahahaha!\pI knew it, {PLAYER}{KUN}! I knew I’d made\nthe right choice asking you!\pThis is my thanks - a TM containing\nTHUNDERBOLT!\pGo on, you’ve earned it!$"

Naranja_IslaMandarin_G00_M02_Text_08166488::
# 159 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "WATTSON: Wahahahaha!\pIt pleases me to no end to see the\nyoung step up and take charge!$"

Naranja_IslaMandarin_G00_M02_Text_081664DF::
# 163 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "You know, it’s cool to have POKéMON\nbattles and stuff...\pBut if your POKéMON gets hurt, you\nhave to nurse it back to health.$"

Naranja_IslaMandarin_G00_M02_Text_0816655C::
# 167 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Los viajes en zepelín son\nextremadamente divertidos.\pMe encanta ver la cara de la gente\nque acaba de salir de uno de uno, jeje$"

Naranja_IslaMandarin_G00_M02_Text_081665DB::
# 171 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Have you been to RYDEL’S CYCLES yet?\pRYDEL, the owner, is a very generous\nman.$"

Naranja_IslaMandarin_G00_M02_Text_0816662A::
# 175 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Even if you’re riding a BIKE, wild\nPOKéMON could jump you.$"

Naranja_IslaMandarin_G00_M02_Text_08166665::
# 179 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "MAUVILLE CITY\n“The bright and shiny city of fun!”$"

Naranja_IslaMandarin_G00_M02_Text_08166697::
# 183 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\nLEADER: WATTSON\l“The cheerfully electrifying man!”$"

Naranja_IslaMandarin_G00_M02_Text_081666E4::
# 187 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "“Ride in gravel and shake up your\nsoul!”\lRYDEL’S CYCLES$"

Naranja_IslaMandarin_G00_M02_Text_0816671C::
# 191 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "“The play spot for all!”\nMAUVILLE GAME CORNER$"

Naranja_IslaMandarin_G00_M02_Text_0816674A::
# 195 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Hi, do you check out TV at all?\pThey’ve added a bunch of cool new\nshows recently.\pTV is so cool. I’ve seen my friends on\nTV just out of the blue.\pAnd, sometimes, they even put you on TV\nwithout telling you.\pI wish I would be on TV sometime.\pThat’s why I think you should check\nout TVs whenever you can.$"

Naranja_IslaMandarin_G00_M02_Text_08166879::
# 199 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

Naranja_IslaMandarin_G00_M02_Text_081A0D41::
# 203 "data/maps/Naranja_IslaMandarin_G00_M02/scripts.pory"
	.string "“Selected items for your convenience!”\nPOKéMON MART$"
