Naranja_IslaNueva_G15_M02_MapScripts::
# 5 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNueva_G15_M02_OnTransition
	.byte 0


Naranja_IslaNueva_G15_M02_OnTransition::
# 9 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	setrespawn 0xA
	end


Naranja_IslaNueva_G15_M02_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 14 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 17 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M02_EventScript_Sub_0815B1C6
# 18 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 19 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNueva_G15_M02_EventScript_Sub_0815B1C6
# 20 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M02_Text_0818F770
# 21 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M02_EventScript_Sub_0815B1C6::
# 27 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M02_Text_0818F6A2
# 28 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M02_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 34 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	lock
# 35 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 37 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M02_EventScript_Sub_0815B1EE
# 38 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 39 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNueva_G15_M02_EventScript_Sub_0815B1EE
# 40 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M02_Text_0818F860
# 41 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	callstd 4
# 42 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M02_EventScript_Sub_0815B1EE::
# 47 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M02_Text_0818F7EA
# 48 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M02_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 54 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	setvar VAR_0x800B, 1
# 55 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 56 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	waitmessage
# 57 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	waitbuttonpress
# 58 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M02_Text_0818F6A2::
# 62 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	.string "WALLACE, this town’s GYM LEADER, is a\npowerful TRAINER.\pHe’s rumored to be the best in the\nwhole HOENN region.\pBut the ELITE FOUR...\pThey’re said to be even stronger than\nWALLACE. How strong could they be?$"

Naranja_IslaNueva_G15_M02_Text_0818F770::
# 66 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	.string "Everyone in town has taken refuge\nand won’t come out of their homes.\pThis weather..\nCould it be the prelude to something?$"

Naranja_IslaNueva_G15_M02_Text_0818F7EA::
# 70 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	.string "Whenever, wherever, and whatever\nhappens, I will always be friends with\lPOKéMON.\pBecause it’s fun to be with POKéMON!$"

Naranja_IslaNueva_G15_M02_Text_0818F860::
# 74 "data/maps/Naranja_IslaNueva_G15_M02/scripts.pory"
	.string "I don’t know why...\nBut... I’m really scared...$"
