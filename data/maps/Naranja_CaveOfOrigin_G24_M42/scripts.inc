Naranja_CaveOfOrigin_G24_M42_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_CaveOfOrigin_G24_M42_OnResume
# 6 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_G24_M42_OnTransition
	.byte 0


Naranja_CaveOfOrigin_G24_M42_OnResume::
# 10 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 11 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_0815DDC1
	end


Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_0815DDC1::
# 16 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_G24_M42_248
	return


Naranja_CaveOfOrigin_G24_M42_OnTransition::
# 21 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setmaplayoutindex 0x139
# 22 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	call Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_081A01B5
# 23 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 24 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_G24_M38_EventScript_Sub_081A04E3
	end


Naranja_CaveOfOrigin_G24_M42_EventScript_Trigger_1::
# 29 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	lockall
# 30 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 31 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	msgbox Naranja_CaveOfOrigin_G24_M42_Text_081B4FE4, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	closemessage
# 34 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setweather 0
# 35 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	doweather
# 36 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	special WaitWeather
# 37 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitstate
# 38 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	playse SE_M_DETECT
# 39 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setfieldeffectargument 0, 9
# 40 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setfieldeffectargument 1, 0xD
# 41 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setfieldeffectargument 2, 0
# 42 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	dofieldeffect 0x36
# 43 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitfieldeffect 0x36
# 44 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setvar VAR_RESULT, 2
# 45 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	playse SE_ORB
# 46 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	special DoOrbEffect
# 47 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitstate
# 48 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	special DoOrbEffect
# 49 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitstate
# 50 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_G24_M42_248, Naranja_CaveOfOrigin_G24_M42_Movement_0815DE7D
# 51 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	delay 0x3C
# 53 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setwildbattle SPECIES_GROUDON, 0x2D, 0
# 54 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitse
# 55 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	playmoncry SPECIES_GROUDON, 2
# 56 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	delay 0x28
# 57 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitmoncry
# 58 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 59 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	special StartGroudonKyogreBattle
# 60 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitstate
# 61 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 62 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 64 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_0815DE73
# 65 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setflag FLAG_HIDE_ISLA_NUEVA_G00_M07_WALLACE
# 66 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setflag FLAG_HIDE_ISLA_NUEVA_G00_M07_BEAUTY
# 67 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setflag FLAG_HIDE_ISLA_NUEVA_G00_M07_BEAUTY_2
# 68 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G15_M00_WALLACE
# 69 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setvar VAR_NARANJA_CAVE_OF_ORIGIN_STORY_STATE, 1
# 70 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 71 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_OLD_MAN_1
# 72 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 73 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setvar VAR_NARANJA_BEMENTER_STORY_STATE, 2
# 74 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	clearflag FLAG_HIDE_BEMENTER_G24_M22_246
# 75 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	releaseall
	end


Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_0815DE73::
# 80 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	msgbox Naranja_CaveOfOrigin_G24_M42_Text_081B5009, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	closemessage
	return


Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_081A01B5::
# 86 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, 0xC6
# 87 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, 0xCE
	return


Naranja_CaveOfOrigin_G24_M42_EventScript_Trigger_2::
# 92 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	lockall
# 93 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitse
# 94 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	playmoncry SPECIES_GROUDON, 2
# 95 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	waitmoncry
# 96 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	setvar VAR_TEMP_5, 1
# 97 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	releaseall
	end


# 101 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
Naranja_CaveOfOrigin_G24_M42_Movement_0815DE7D:
# 102 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	init_affine_anim
# 103 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	hide_reflection
# 104 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	delay_16
# 105 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	delay_16
# 106 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	show_reflection
	step_end

Naranja_CaveOfOrigin_G24_M42_Text_081B4FE4::
# 109 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	.string "{PLAYER}’s RED ORB suddenly began\nglowing!$"

Naranja_CaveOfOrigin_G24_M42_Text_081B5009::
# 113 "data/maps/Naranja_CaveOfOrigin_G24_M42/scripts.pory"
	.string "GROUDON appears to have settled\ninto sleep again...$"
