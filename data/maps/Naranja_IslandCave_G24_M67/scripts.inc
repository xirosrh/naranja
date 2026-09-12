Naranja_IslandCave_G24_M67_MapScripts::
# 5 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_IslandCave_G24_M67_OnResume
# 6 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslandCave_G24_M67_OnLoad
# 7 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslandCave_G24_M67_OnTransition
	.byte 0


Naranja_IslandCave_G24_M67_OnResume::
# 11 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	call_if EQUAL, Naranja_IslandCave_G24_M67_EventScript_Sub_0815EED0
	end


Naranja_IslandCave_G24_M67_EventScript_Sub_0815EED0::
# 17 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	removeobject 32783
	return


Naranja_IslandCave_G24_M67_OnLoad::
# 22 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	checkflag FLAG_NARANJA_ISLAND_CAVE_EVENT_COMPLETE_0851
# 23 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	call_if LESS_THAN, Naranja_IslandCave_G24_M67_EventScript_Sub_0815EEDE
	end


Naranja_IslandCave_G24_M67_EventScript_Sub_0815EEDE::
# 28 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setmetatile 7, 0x13, 0x229, 1
# 29 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setmetatile 8, 0x13, 0x229, 1
# 30 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setmetatile 9, 0x13, 0x229, 1
# 31 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setmetatile 7, 0x14, 0x235, 1
# 32 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setmetatile 8, 0x14, 0x235, 1
# 33 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setmetatile 9, 0x14, 0x235, 1
	return


Naranja_IslandCave_G24_M67_OnTransition::
# 38 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setflag FLAG_NARANJA_ISLAND_CAVE_EVENT_COMPLETE_0855
	end


Naranja_IslandCave_G24_M67_EventScript_Sign_1::
# 43 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	lockall
# 44 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	checkflag FLAG_NARANJA_ISLAND_CAVE_EVENT_COMPLETE_0851
# 45 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	goto_if EQUAL, Naranja_IslandCave_G24_M67_EventScript_Sub_0815EF72
# 46 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	braillemessage Naranja_IslandCave_G24_M67_Text_081C54FC
# 47 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	special ShouldDoBrailleRegirockEffectOld
# 48 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	waitstate
# 49 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	goto Naranja_IslandCave_G24_M67_EventScript_Sub_0815EF95
	return


Naranja_IslandCave_G24_M67_EventScript_Sub_0815EF72::
# 53 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	msgbox Naranja_AncientTomb_G24_M68_Text_081A13BE, MSGBOX_DEFAULT
# 54 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	releaseall
	end


Naranja_IslandCave_G24_M67_EventScript_Sign_2::
# 59 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	lockall
# 60 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	braillemessage Naranja_IslandCave_G24_M67_Text_081C54FC
# 61 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	checkflag FLAG_NARANJA_ISLAND_CAVE_EVENT_COMPLETE_0851
# 62 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	goto_if EQUAL, Naranja_IslandCave_G24_M67_EventScript_Sub_0815EF95
# 63 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	special ShouldDoBrailleRegirockEffectOld
# 64 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	waitstate
# 65 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	goto Naranja_IslandCave_G24_M67_EventScript_Sub_0815EF95
	return


Naranja_IslandCave_G24_M67_EventScript_Sub_0815EF95::
# 69 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	waitbuttonpress
# 70 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 71 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	releaseall
	end


Naranja_IslandCave_G24_M67_EventScript_OBJ_EVENT_GFX_REGICE_LocalId1::
# 76 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	lock
# 77 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	faceplayer
# 78 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	waitse
# 79 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	playmoncry SPECIES_REGICE, 2
# 80 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	delay 0x28
# 81 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	waitmoncry
# 82 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setwildbattle SPECIES_REGICE, 0x28, 0
# 83 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setflag FLAG_HIDE_ISLAND_CAVE_G24_M67_REGICE
# 84 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 85 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	special StartRegiBattle
# 86 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	waitstate
# 87 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 88 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	release
	end


Naranja_IslandCave_G24_M67_Text_081C54FC::
# 92 "data/maps/Naranja_IslandCave_G24_M67/scripts.pory"
	.string "Â éÛÈÂàìçá ÀéÎ\n+ÀÉìわ +ÀÉì\nÊçë ìÉÛÌ ìç\náÀàà ì+ÉÂÌわ$"
