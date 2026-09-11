Naranja_IslaMikan_G24_M06_MapScripts::
# 5 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_IslaMikan_G24_M06_OnResume
# 6 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaMikan_G24_M06_OnLoad
# 7 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMikan_G24_M06_OnTransition
	.byte 0


Naranja_IslaMikan_G24_M06_OnResume::
# 11 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G24_M06_EventScript_Sub_0815CB0D
	end


Naranja_IslaMikan_G24_M06_EventScript_Sub_0815CB0D::
# 17 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	removeobject 32783
	return


Naranja_IslaMikan_G24_M06_OnLoad::
# 22 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0850
# 23 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G24_M06_EventScript_Sub_0815CB1B
	end


Naranja_IslaMikan_G24_M06_EventScript_Sub_0815CB1B::
# 28 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setmetatile 7, 0x13, 0x229, 1
# 29 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setmetatile 8, 0x13, 0x229, 1
# 30 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setmetatile 9, 0x13, 0x229, 1
# 31 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setmetatile 7, 0x14, 0x235, 1
# 32 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setmetatile 8, 0x14, 0x235, 1
# 33 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setmetatile 9, 0x14, 0x235, 1
	return


Naranja_IslaMikan_G24_M06_OnTransition::
# 38 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0856
	end


Naranja_IslaMikan_G24_M06_EventScript_Sign_1::
# 43 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	lockall
# 44 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0850
# 45 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G24_M06_EventScript_Sub_0815CB6D
# 46 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	braillemessage Naranja_IslaMikan_G24_M06_Text_081C54C8
# 47 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	waitbuttonpress
# 48 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 49 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G24_M06_EventScript_Sub_0815CB6D::
# 54 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	loadword 0, Naranja_AncientTomb_G24_M68_Text_081A13BE
# 55 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G24_M06_EventScript_Sign_2::
# 61 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	lockall
# 62 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	braillemessage Naranja_IslaMikan_G24_M06_Text_081C54C8
# 63 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	waitbuttonpress
# 64 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 65 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G24_M06_EventScript_OBJ_EVENT_GFX_REGIROCK_LocalId1::
# 70 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	lock
# 71 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	faceplayer
# 72 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	waitse
# 73 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	playmoncry SPECIES_REGIROCK, 2
# 74 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	delay 0x28
# 75 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	waitmoncry
# 76 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 0x28, 0
# 77 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G24_M06_REGIROCK
# 78 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 79 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	special StartRegiBattle
# 80 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	waitstate
# 81 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 82 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	release
	end


Naranja_IslaMikan_G24_M06_Text_081C54C8::
# 86 "data/maps/Naranja_IslaMikan_G24_M06/scripts.pory"
	.string "  ëÛÁÂëÉÔÒìÇ ëÉÔÒìÇ\nÎç+éÇ Îç+éわ\nìÒÌéÇ ぅàÌ\nàìëÌéÔìÒわ$"
