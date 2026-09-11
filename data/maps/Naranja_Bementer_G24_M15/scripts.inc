Naranja_Bementer_G24_M15_MapScripts::
	.byte 0


Naranja_Bementer_G24_M15_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId1::
# 8 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	lock
# 9 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	checkflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_011A
# 11 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	goto_if EQUAL, Naranja_Bementer_G24_M15_EventScript_Sub_0815D352
# 12 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M15_Text_08196151
# 13 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBE
# 15 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	callstd 0
# 17 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 19 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	setflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_011A
# 20 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	release
	end


Naranja_Bementer_G24_M15_EventScript_Sub_0815D352::
# 25 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M15_Text_081961CE
# 26 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	release
	end


Naranja_Bementer_G24_M15_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId2::
# 32 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M15_Text_08196218
# 33 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	callstd 2
	end


Naranja_Bementer_G24_M15_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId3::
# 38 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M15_Text_08196283
# 39 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	callstd 2
	end


Naranja_Bementer_G24_M15_Text_08196151::
# 43 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	.string "All sorts of beings wander the slopes\nof MT. PYRE...\pThere is no telling what may happen.\nTake this. It’s for your own good.$"

Naranja_Bementer_G24_M15_Text_081961CE::
# 47 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	.string "Have a POKéMON hold that\nCLEANSE TAG.\pIt will help ward off wild POKéMON.$"

Naranja_Bementer_G24_M15_Text_08196218::
# 51 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	.string "Did you come to pay your respect\nto the spirits of departed POKéMON?\pYou must care for your POKéMON a lot.$"

Naranja_Bementer_G24_M15_Text_08196283::
# 55 "data/maps/Naranja_Bementer_G24_M15/scripts.pory"
	.string "This is the final resting place of my\nZIGZAGOON. I cherished it...$"
