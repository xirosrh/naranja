Naranja_IslaMellsweet_G14_M09_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	dotimebasedevents
# 11 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 12 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 13 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815ABBA
# 15 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 16 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	call_if GREATER_THAN_OR_EQUAL, Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815ABC3
# 17 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	closemessage
# 18 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 19 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 20 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815ABBA::
# 25 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E1F3
# 26 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 4
	return


Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815ABC3::
# 31 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E214
# 32 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 4
	return


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId2::
# 37 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E251
# 38 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId3::
# 43 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	lock
# 44 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	faceplayer
# 45 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00C0
# 46 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815AC0C
# 47 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E335
# 48 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5D
# 50 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 51 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 0
# 52 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 53 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 54 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00C0
# 55 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E39B
# 56 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 4
# 57 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815AC0C::
# 62 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E39B
# 63 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId5::
# 69 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E3E5
# 70 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId4::
# 75 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	lock
# 76 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	faceplayer
# 77 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M09_Text_0818E427
# 78 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 4
# 79 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	closemessage
# 80 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 81 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 82 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_Text_0818E1F3::
# 86 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "The rocket’s launch is imminent!$"

Naranja_IslaMellsweet_G14_M09_Text_0818E214::
# 90 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "The rocket launched safely!\nThat’s successful launch no. {STR_VAR_1}!$"

Naranja_IslaMellsweet_G14_M09_Text_0818E251::
# 94 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "A rocket launch demands perfection.\nNot even a 1% margin of error is allowed.\pEven if it’s 99% okay, the whole thing\nis useless if 1% happens to be no good.\pDespite that, we never stop trying.\nWhy? It’s a dream that never ends.$"

Naranja_IslaMellsweet_G14_M09_Text_0818E335::
# 98 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "I was taking a stroll down the beach\nwhen I found this.\pIt’s not anything I need, so you can\nhave it.$"

Naranja_IslaMellsweet_G14_M09_Text_0818E39B::
# 102 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "The HOENN region has been famous for \nits meteor showers for a long time.$"

Naranja_IslaMellsweet_G14_M09_Text_0818E3E5::
# 106 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "Some people claim that POKéMON came\nfrom space. Could it be true?$"

Naranja_IslaMellsweet_G14_M09_Text_0818E427::
# 110 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "A giant chunk of metal bursts through\nthe skies and flies into space...\pIt boggles my mind!$"
