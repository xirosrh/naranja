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
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E1F3, MSGBOX_DEFAULT
	return


Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815ABC3::
# 30 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E214, MSGBOX_DEFAULT
	return


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId2::
# 35 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E251, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId3::
# 40 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	lock
# 41 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	faceplayer
# 42 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00C0
# 43 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815AC0C
# 44 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E335, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5D
# 46 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 47 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	callstd 0
# 48 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 49 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 50 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00C0
# 51 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E39B, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_EventScript_Sub_0815AC0C::
# 57 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E39B, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId5::
# 63 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E3E5, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M09_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId4::
# 68 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	lock
# 69 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	faceplayer
# 70 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M09_Text_0818E427, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	closemessage
# 72 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 73 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 74 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M09_Text_0818E1F3::
# 78 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "The rocket’s launch is imminent!$"

Naranja_IslaMellsweet_G14_M09_Text_0818E214::
# 82 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "The rocket launched safely!\nThat’s successful launch no. {STR_VAR_1}!$"

Naranja_IslaMellsweet_G14_M09_Text_0818E251::
# 86 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "A rocket launch demands perfection.\nNot even a 1% margin of error is allowed.\pEven if it’s 99% okay, the whole thing\nis useless if 1% happens to be no good.\pDespite that, we never stop trying.\nWhy? It’s a dream that never ends.$"

Naranja_IslaMellsweet_G14_M09_Text_0818E335::
# 90 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "I was taking a stroll down the beach\nwhen I found this.\pIt’s not anything I need, so you can\nhave it.$"

Naranja_IslaMellsweet_G14_M09_Text_0818E39B::
# 94 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "The HOENN region has been famous for \nits meteor showers for a long time.$"

Naranja_IslaMellsweet_G14_M09_Text_0818E3E5::
# 98 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "Some people claim that POKéMON came\nfrom space. Could it be true?$"

Naranja_IslaMellsweet_G14_M09_Text_0818E427::
# 102 "data/maps/Naranja_IslaMellsweet_G14_M09/scripts.pory"
	.string "A giant chunk of metal bursts through\nthe skies and flies into space...\pIt boggles my mind!$"
