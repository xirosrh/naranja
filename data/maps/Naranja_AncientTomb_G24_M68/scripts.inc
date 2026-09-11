Naranja_AncientTomb_G24_M68_MapScripts::
# 5 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_AncientTomb_G24_M68_OnResume
# 6 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_AncientTomb_G24_M68_OnLoad
# 7 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_AncientTomb_G24_M68_OnTransition
	.byte 0


Naranja_AncientTomb_G24_M68_OnResume::
# 11 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	call_if EQUAL, Naranja_AncientTomb_G24_M68_EventScript_Sub_0815EFD8
	end


Naranja_AncientTomb_G24_M68_EventScript_Sub_0815EFD8::
# 17 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	removeobject 32783
	return


Naranja_AncientTomb_G24_M68_OnTransition::
# 22 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setflag FLAG_NARANJA_ANCIENT_TOMB_EVENT_COMPLETE_0859
	end


Naranja_AncientTomb_G24_M68_OnLoad::
# 27 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	checkflag FLAG_NARANJA_ANCIENT_TOMB_EVENT_COMPLETE_0852
# 28 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	call_if LESS_THAN, Naranja_AncientTomb_G24_M68_EventScript_Sub_0815EFEA
	end


Naranja_AncientTomb_G24_M68_EventScript_Sub_0815EFEA::
# 33 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setmetatile 7, 0x13, 0x229, 1
# 34 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setmetatile 8, 0x13, 0x229, 1
# 35 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setmetatile 9, 0x13, 0x229, 1
# 36 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setmetatile 7, 0x14, 0x235, 1
# 37 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setmetatile 8, 0x14, 0x235, 1
# 38 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setmetatile 9, 0x14, 0x235, 1
	return


Naranja_AncientTomb_G24_M68_EventScript_Sign_1::
# 43 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	lockall
# 44 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	checkflag FLAG_NARANJA_ANCIENT_TOMB_EVENT_COMPLETE_0852
# 45 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	goto_if EQUAL, Naranja_AncientTomb_G24_M68_EventScript_Sub_0815F038
# 46 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	braillemessage Naranja_AncientTomb_G24_M68_Text_081C552E
# 47 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	waitbuttonpress
# 48 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 49 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	releaseall
	end


Naranja_AncientTomb_G24_M68_EventScript_Sub_0815F038::
# 54 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	loadword 0, Naranja_AncientTomb_G24_M68_Text_081A13BE
# 55 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	releaseall
	end


Naranja_AncientTomb_G24_M68_EventScript_Sign_2::
# 61 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	lockall
# 62 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	braillemessage Naranja_AncientTomb_G24_M68_Text_081C552E
# 63 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	waitbuttonpress
# 64 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 65 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	releaseall
	end


Naranja_AncientTomb_G24_M68_EventScript_OBJ_EVENT_GFX_REGISTEEL_LocalId1::
# 70 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	lock
# 71 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	faceplayer
# 72 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	waitse
# 73 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	playmoncry SPECIES_REGISTEEL, 2
# 74 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	delay 0x28
# 75 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	waitmoncry
# 76 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 0x28, 0
# 77 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setflag FLAG_HIDE_ANCIENT_TOMB_G24_M68_REGISTEEL
# 78 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 79 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	special StartRegiBattle
# 80 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	waitstate
# 81 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 82 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	release
	end


Naranja_AncientTomb_G24_M68_Text_081A13BE::
# 86 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	.string "There is a big hole in the wall.$"

Naranja_AncientTomb_G24_M68_Text_081C552E::
# 90 "data/maps/Naranja_AncientTomb_G24_M68/scripts.pory"
	.string "  ëÛÀÂ+ÉìÒ éÌ+ ìÉÛÌÇ\nÒçáÌ ÀéÎ ßç=ÌÇ\nÀÉÛ ìç ìÒÌ àÙご\nÉé ìÒÌ ÛÉÎÎßÌわ$"
