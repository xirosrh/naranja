Naranja_Route119_WeatherInstitute_1F_MapScripts::
# 5 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route119_WeatherInstitute_1F_OnTransition
	.byte 0


Naranja_Route119_WeatherInstitute_1F_OnTransition::
# 9 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
# 10 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 0
# 11 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	call_if EQUAL, Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_08163C41
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_08163C41::
# 16 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_1F_LITTLE_BOY_1, 0, 5
# 17 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ROUTE119_WEATHER_INSTITUTE_1F_LITTLE_BOY_1, 0xA
	return


Naranja_Route119_WeatherInstitute_1F_EventScript_LittleBoy1::
# 22 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 23 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 24 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 25 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 0
# 26 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	goto_if EQUAL, Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_08163C67
# 27 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819ED22, MSGBOX_DEFAULT
# 28 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	release
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_08163C67::
# 33 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819ECF4, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	release
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Man5_2::
# 39 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819ED6B, MSGBOX_NPC
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Man5::
# 44 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819EE25, MSGBOX_NPC
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Sign_1::
# 49 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 50 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819EE8B, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 52 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	call Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_081A02CA
# 53 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Object1::
# 58 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_582, Naranja_Route119_WeatherInstitute_1F_Text_0819EB8A, Naranja_Route119_WeatherInstitute_1F_Text_0819EBEE
# 59 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819EC0E, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Object2::
# 64 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE119_591, Naranja_Route119_WeatherInstitute_1F_Text_0819EC6B, Naranja_Route119_WeatherInstitute_1F_Text_0819EC89
# 65 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Naranja_Route119_WeatherInstitute_1F_Text_0819EC97, MSGBOX_AUTOCLOSE
	end


Naranja_Route119_WeatherInstitute_1F_EventScript_Sub_081A02CA::
# 70 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	fadescreen 1
# 71 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	playfanfare MUS_HEAL
# 72 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	waitfanfare
# 73 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	special HealPlayerParty
# 74 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	fadescreen 0
	return


Naranja_Route119_WeatherInstitute_1F_Text_0819EB8A::
# 78 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "The BOSS got interested in the\nresearch they have going here, so he\lsent us out.\pYou quit meddling!$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EBEE::
# 82 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it...\nBlasted by a kid...$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EC0E::
# 86 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our BOSS knows everything.\pBut I’m just a GRUNT. What would I know\nabout what he’s thinking?$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EC6B::
# 90 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\nWhat’s a kid doing here?$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EC89::
# 94 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\nI lost?!$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EC97::
# 98 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no...\nI’ll catch an earful for losing to a kid...\pI should just take a nap in the bed...$"

Naranja_Route119_WeatherInstitute_1F_Text_0819ECF4::
# 102 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\nupstairs!$"

Naranja_Route119_WeatherInstitute_1F_Text_0819ED22::
# 106 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you’re really strong!\pI wish I could be a POKéMON TRAINER\nlike you!$"

Naranja_Route119_WeatherInstitute_1F_Text_0819ED6B::
# 110 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "The PROFESSOR loves rain.\nThat’s a fact.\pBut if it keeps raining, people will be in\ntrouble. That’s another fact.\pAnd thus, the PROFESSOR is studying\nif the rain can be put to good use.$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EE25::
# 114 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\nWe’ve been saved by your actions!\pWhat I don’t understand is what on\nearth the {AQUA}S were up to.$"

Naranja_Route119_WeatherInstitute_1F_Text_0819EE8B::
# 118 "data/maps/Naranja_Route119_WeatherInstitute_1F/scripts.pory"
	.string "There’s a bed...\nLet’s take a rest.$"
