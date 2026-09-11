Naranja_IslaMellsweet_G00_M06_MapScripts::
# 5 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMellsweet_G00_M06_OnTransition
	.byte 0


Naranja_IslaMellsweet_G00_M06_OnTransition::
# 9 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 10 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 11 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 12 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 13 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 14 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId3::
# 19 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_08169266
# 20 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId1::
# 25 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081692A1
# 26 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId4::
# 31 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081691F2
# 32 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 37 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_08169370
# 38 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId5::
# 43 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_08169314
# 44 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId8::
# 49 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081694DA
# 50 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Sign_8::
# 55 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081695D3
# 56 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Sign_2::
# 61 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081695E6
# 62 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Sign_1::
# 67 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_0816962F
# 68 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Sign_5::
# 73 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_0816965C
# 74 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 3
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Trigger_1::
# 79 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_081C
# 80 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId7::
# 85 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	lock
# 86 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	faceplayer
# 87 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_0816944E
# 88 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 4
# 89 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 90 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	waitmovement LOCALID_NONE
# 91 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId9::
# 96 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	lock
# 97 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	faceplayer
# 98 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0114
# 99 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G00_M06_EventScript_Sub_0814D069
# 100 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081690A9
# 101 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 5
# 102 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 103 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G00_M06_EventScript_Sub_0814D073
# 104 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_08169117
# 105 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBB
# 107 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 108 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 0
# 109 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 110 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 111 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0114
# 112 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Sub_0814D069::
# 117 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_0816916F
# 118 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G00_M06_EventScript_Sub_0814D073::
# 124 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G00_M06_Text_081691A7
# 125 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 4
# 126 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G00_M06_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 131 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setorcopyvar VAR_0x8000, 6
# 132 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 133 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	callstd 1
	end


Naranja_IslaMellsweet_G00_M06_Text_081690A9::
# 137 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "Me lo regalaron.\nAunque no sé lo que es\nSi lo quieres\nCógelo\pI think it’s called KING’S ROCK.\nDo you want it?$"

Naranja_IslaMellsweet_G00_M06_Text_08169117::
# 141 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "Why would you want it?\nYou’re weird.\pYou can keep it, but keep it a secret\nfrom STEVEN.$"

Naranja_IslaMellsweet_G00_M06_Text_0816916F::
# 145 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "Is it really that fun collecting\nrocks? I don’t get it.$"

Naranja_IslaMellsweet_G00_M06_Text_081691A7::
# 149 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "Yeah, you think so, too! What are you\nsupposed to do with some weird rock?$"

Naranja_IslaMellsweet_G00_M06_Text_081691F2::
# 153 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\nWAILMER.\pIt’s called, uh...\nWhat was it now...\pWAI, WAI, WAI...\pWAILMER watching!$"

Naranja_IslaMellsweet_G00_M06_Text_08169266::
# 157 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "The island’s SPACE CENTER has been\nlaunching huge rockets.$"

Naranja_IslaMellsweet_G00_M06_Text_081692A1::
# 161 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "I’d heard from my mates in LILYCOVE\nthat the herd of WAILMER has\ldisappeared.\pWhat went down over there, I wonder?$"

Naranja_IslaMellsweet_G00_M06_Text_08169314::
# 165 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "Wouldn’t it be nice?\pIf the whole world was covered in\nplants and flowers like this island?$"

Naranja_IslaMellsweet_G00_M06_Text_08169370::
# 169 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "All life needs the sea to live, even\nthough it makes its home on the land.\pLife, having run its course, becomes\nsoil and returns to the land.\pAnd the sea is always connected to\nthe land.\pYes, like the very shoreline here.$"

Naranja_IslaMellsweet_G00_M06_Text_0816944E::
# 173 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "A voyage on a ship is fine.\pBut crossing the sea with POKéMON\nusing SURF...\pNow that’s an exhilarating trip!\nWouldn’t you agree, youngster?$"

Naranja_IslaMellsweet_G00_M06_Text_081694DA::
# 177 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "This rock has a special meaning to\nthe people at the SPACE CENTER.\pThey put it here as their wish for\ntheir rockets to fly safely.\pWhen you make a wish, what do you use?\nDo you wish upon a star?\pI use a wish tag to make it happen.\nThat’s what I do.$"

Naranja_IslaMellsweet_G00_M06_Text_081695D3::
# 181 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "It’s a white rock.$"

Naranja_IslaMellsweet_G00_M06_Text_081695E6::
# 185 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\nLEADERS: LIZA & TATE\p“The mystic combination!”$"

Naranja_IslaMellsweet_G00_M06_Text_0816962F::
# 189 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "MOSSDEEP CITY\n“Our slogan: Cherish POKéMON!”$"

Naranja_IslaMellsweet_G00_M06_Text_0816965C::
# 193 "data/maps/Naranja_IslaMellsweet_G00_M06/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n“The closest place to space.”$"
