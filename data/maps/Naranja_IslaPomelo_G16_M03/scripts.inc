Naranja_IslaPomelo_G16_M03_MapScripts::
# 8 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaPomelo_G16_M03_OnLoad
# 5 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaPomelo_G16_M03_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaPomelo_G16_M03_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_IslaPomelo_G16_M03_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_POMELO_STORY_STATE, 3, Naranja_IslaPomelo_G16_M03_OnFrame_1
	.2byte 0

Naranja_IslaPomelo_G16_M03_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M00_OnWarp_1
	.2byte 0


Naranja_IslaPomelo_G16_M03_OnFrame_1::
# 15 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	lockall
# 16 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0710
# 17 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	setvar VAR_NARANJA_ISLA_POMELO_STORY_STATE, 4
# 18 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M03_OnLoad::
# 23 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04E0
# 24 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B758
# 25 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_POMELO_STORY_STATE, 4
# 26 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B75E
	end


Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B758::
# 31 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0757
	return


Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B75E::
# 36 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A07FA
	return


Naranja_IslaPomelo_G16_M03_EventScript_OBJ_EVENT_GFX_DRAKE_LocalId1::
# 41 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	lock
# 42 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	faceplayer
# 43 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04E0
# 44 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B78B
# 45 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, 0
# 46 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M03_Text_08190CEB, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_POMELO_264, LOCALID_NONE, Naranja_IslaPomelo_G16_M03_Text_08190E42
# 48 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	goto Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B795
	return


Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B78B::
# 52 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M03_Text_08190E5D, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M03_EventScript_Sub_0815B795::
# 58 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 59 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 60 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04E0
# 61 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0693
# 62 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M03_Text_08190E5D, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M03_Text_08190CEB::
# 67 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	.string "I am the last of the POKéMON LEAGUE\nELITE FOUR, DRAKE the DRAGON master!\pIn their natural state, POKéMON are\nwild living things. They are free.\pAt times, they hinder us.\nAt times, they help us.\pFor us to battle with POKéMON as\npartners, do you know what it takes?\pDo you know what is needed?\pIf you don’t, then you will never\nprevail over me!$"

Naranja_IslaPomelo_G16_M03_Text_08190E42::
# 71 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	.string "Superb, it should be said.$"

Naranja_IslaPomelo_G16_M03_Text_08190E5D::
# 75 "data/maps/Naranja_IslaPomelo_G16_M03/scripts.pory"
	.string "You deserve every credit for coming\nthis far as a TRAINER of POKéMON.\pYou do seem to know what is needed.\pYes, what a TRAINER needs is a\nvirtuous heart.\pPOKéMON touch the good hearts of\nTRAINERS and learn good from wrong.\pThey touch the good hearts of\nTRAINERS and grow strong.\pGo! Go onwards!\nThe CHAMPION is waiting!$"
