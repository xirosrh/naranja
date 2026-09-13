Naranja_Route119_WeatherInstitute_2F_MapScripts::
# 5 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route119_WeatherInstitute_2F_OnTransition
	.byte 0


Naranja_Route119_WeatherInstitute_2F_OnTransition::
# 9 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
# 10 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 0
# 11 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	call_if EQUAL, Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163CE4
# 12 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 1
# 13 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	call_if EQUAL, Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163CF0
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163CE4::
# 18 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_SCIENTIST_1, 1, 6
# 19 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_SCIENTIST_1, 0xA
	return


Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163CF0::
# 24 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_SCIENTIST_1, 4, 6
# 25 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_SCIENTIST_1, 0xA
	return


Naranja_Route119_WeatherInstitute_2F_EventScript_Object1::
# 30 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_583, Naranja_Route119_WeatherInstitute_2F_Text_0819EEAF, Naranja_Route119_WeatherInstitute_2F_Text_0819EF1B
# 31 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819EF3E, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_Object2::
# 36 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_584, Naranja_Route119_WeatherInstitute_2F_Text_0819EFA3, Naranja_Route119_WeatherInstitute_2F_Text_0819EFDD
# 37 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819EFE9, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_Object3::
# 42 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_599, Naranja_Route119_WeatherInstitute_2F_Text_0819F042, Naranja_Route119_WeatherInstitute_2F_Text_0819F0F4, Naranja_Route119_WeatherInstitute_2F_EventScript_AfterBattle_08163D45
# 43 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819F11B, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_AfterBattle_08163D45::
# 48 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819F11B, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 50 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_NARANJA_ROUTE119_EVENT_STATE_2, 1
# 51 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_MAN_5
# 52 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 53 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen 1
# 54 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_ROUTE119_241
# 55 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_241
# 56 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_241_2
# 57 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_242
# 58 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen 0
# 59 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_SCIENTIST_1, Naranja_Route119_WeatherInstitute_2F_Movement_08163DC8
# 60 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 61 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_2F_SCIENTIST_1
# 62 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	goto Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163D7A
	return


Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163D7A::
# 66 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819F1CF, MSGBOX_DEFAULT
# 67 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	getpartysize
# 68 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 69 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	goto_if EQUAL, Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163DB4
# 70 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	message Naranja_Route119_WeatherInstitute_2F_Text_0819F267
# 72 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 73 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 74 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM, 0x19, 0xD1
# 75 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_NARANJA_ROUTE119_EVENT_COMPLETE_0097
# 76 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819F27D, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163DB4::
# 82 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819F231, MSGBOX_DEFAULT
# 83 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163DBE::
# 88 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_2F_Text_0819F2FE, MSGBOX_DEFAULT
# 89 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


Naranja_Route119_WeatherInstitute_2F_EventScript_Scientist1::
# 94 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 95 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 96 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE119_EVENT_COMPLETE_0097
# 97 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	goto_if EQUAL, Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163DBE
# 98 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	goto Naranja_Route119_WeatherInstitute_2F_EventScript_Sub_08163D7A
	return


# 101 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
Naranja_Route119_WeatherInstitute_2F_Movement_08163DC8:
# 102 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 103 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 104 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
	step_end

Naranja_Route119_WeatherInstitute_2F_Text_0819EEAF::
# 107 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\nPOKéMON that has something to do with\lthe weather. We’re here to take them!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819EF1B::
# 111 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan’s being spoiled by a kid?$"

Naranja_Route119_WeatherInstitute_2F_Text_0819EF3E::
# 115 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\ncontrol the weather freely, then we of\lTEAM {AQUA} definitely need it!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819EFA3::
# 119 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "We’re TEAM {AQUA}!\nWe appear wherever anything rare is\lfound!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819EFDD::
# 123 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819EFE9::
# 127 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don’t have any idea what we of\nTEAM {AQUA} are working towards!\lYou stay out of our way!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F042::
# 131 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\pYou’re going to meddle in TEAM {AQUA}’s\naffairs?\pYou’re either absolutely fearless,\nsimply ignorant, or both!\pYou’re so cute, you’re disgusting!\nI’ll put you down, kiddy!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F0F4::
# 135 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\nYou’re disgustingly strong!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F11B::
# 139 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\nWe got meddled with unexpectedly!\pWe’re out of options.\nWe’ll have to pull out.\pBut this isn’t the last you’ll see of\nTEAM {AQUA}! We have other plans!\lDon’t you forget it!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F1CF::
# 143 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\nThanks to you, we’re safe!\pIt might be an odd way of thanking you,\nbut take this POKéMON.$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F231::
# 147 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don’t seem to have any room\nfor this POKéMON.$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F267::
# 151 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F27D::
# 155 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\nto the weather conditions.\pThere’re plenty of them in the\nINSTITUTE - go ahead and take it.$"

Naranja_Route119_WeatherInstitute_2F_Text_0819F2FE::
# 159 "data/maps/Naranja_Route119_WeatherInstitute_2F/scripts.pory"
	.string "I’ve been researching rain for many\nyears, but it’s ridiculous to think that\lhumans can freely change the weather.$"
