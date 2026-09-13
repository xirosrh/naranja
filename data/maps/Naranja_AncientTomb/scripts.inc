Naranja_AncientTomb_MapScripts::
# 5 "data/maps/Naranja_AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_AncientTomb_OnResume
# 6 "data/maps/Naranja_AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_AncientTomb_OnLoad
# 7 "data/maps/Naranja_AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_AncientTomb_OnTransition
	.byte 0


Naranja_AncientTomb_OnResume::
# 11 "data/maps/Naranja_AncientTomb/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/Naranja_AncientTomb/scripts.pory"
	call_if EQUAL, Naranja_AncientTomb_EventScript_Sub_0815EFD8
	end


Naranja_AncientTomb_EventScript_Sub_0815EFD8::
# 17 "data/maps/Naranja_AncientTomb/scripts.pory"
	removeobject 32783
	return


Naranja_AncientTomb_OnTransition::
# 22 "data/maps/Naranja_AncientTomb/scripts.pory"
	setflag FLAG_NARANJA_ANCIENT_TOMB_EVENT_COMPLETE_0859
	end


Naranja_AncientTomb_OnLoad::
# 27 "data/maps/Naranja_AncientTomb/scripts.pory"
	checkflag FLAG_NARANJA_ANCIENT_TOMB_EVENT_COMPLETE_0852
# 28 "data/maps/Naranja_AncientTomb/scripts.pory"
	call_if LESS_THAN, Naranja_AncientTomb_EventScript_Sub_0815EFEA
	end


Naranja_AncientTomb_EventScript_Sub_0815EFEA::
# 33 "data/maps/Naranja_AncientTomb/scripts.pory"
	setmetatile 7, 0x13, 0x229, 1
# 34 "data/maps/Naranja_AncientTomb/scripts.pory"
	setmetatile 8, 0x13, 0x229, 1
# 35 "data/maps/Naranja_AncientTomb/scripts.pory"
	setmetatile 9, 0x13, 0x229, 1
# 36 "data/maps/Naranja_AncientTomb/scripts.pory"
	setmetatile 7, 0x14, 0x235, 1
# 37 "data/maps/Naranja_AncientTomb/scripts.pory"
	setmetatile 8, 0x14, 0x235, 1
# 38 "data/maps/Naranja_AncientTomb/scripts.pory"
	setmetatile 9, 0x14, 0x235, 1
	return


Naranja_AncientTomb_EventScript_Sign_1::
# 43 "data/maps/Naranja_AncientTomb/scripts.pory"
	lockall
# 44 "data/maps/Naranja_AncientTomb/scripts.pory"
	checkflag FLAG_NARANJA_ANCIENT_TOMB_EVENT_COMPLETE_0852
# 45 "data/maps/Naranja_AncientTomb/scripts.pory"
	goto_if EQUAL, Naranja_AncientTomb_EventScript_Sub_0815F038
# 46 "data/maps/Naranja_AncientTomb/scripts.pory"
	braillemessage Naranja_AncientTomb_Text_081C552E
# 47 "data/maps/Naranja_AncientTomb/scripts.pory"
	waitbuttonpress
# 48 "data/maps/Naranja_AncientTomb/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 49 "data/maps/Naranja_AncientTomb/scripts.pory"
	releaseall
	end


Naranja_AncientTomb_EventScript_Sub_0815F038::
# 54 "data/maps/Naranja_AncientTomb/scripts.pory"
	msgbox Naranja_AncientTomb_Text_081A13BE, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_AncientTomb/scripts.pory"
	releaseall
	end


Naranja_AncientTomb_EventScript_Sign_2::
# 60 "data/maps/Naranja_AncientTomb/scripts.pory"
	lockall
# 61 "data/maps/Naranja_AncientTomb/scripts.pory"
	braillemessage Naranja_AncientTomb_Text_081C552E
# 62 "data/maps/Naranja_AncientTomb/scripts.pory"
	waitbuttonpress
# 63 "data/maps/Naranja_AncientTomb/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 64 "data/maps/Naranja_AncientTomb/scripts.pory"
	releaseall
	end


Naranja_AncientTomb_EventScript_Registeel::
# 69 "data/maps/Naranja_AncientTomb/scripts.pory"
	lock
# 70 "data/maps/Naranja_AncientTomb/scripts.pory"
	faceplayer
# 71 "data/maps/Naranja_AncientTomb/scripts.pory"
	waitse
# 72 "data/maps/Naranja_AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, 2
# 73 "data/maps/Naranja_AncientTomb/scripts.pory"
	delay 0x28
# 74 "data/maps/Naranja_AncientTomb/scripts.pory"
	waitmoncry
# 75 "data/maps/Naranja_AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 0x28, 0
# 76 "data/maps/Naranja_AncientTomb/scripts.pory"
	setflag FLAG_HIDE_NARANJA_ANCIENT_TOMB_REGISTEEL
# 77 "data/maps/Naranja_AncientTomb/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 78 "data/maps/Naranja_AncientTomb/scripts.pory"
	special StartRegiBattle
# 79 "data/maps/Naranja_AncientTomb/scripts.pory"
	waitstate
# 80 "data/maps/Naranja_AncientTomb/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 81 "data/maps/Naranja_AncientTomb/scripts.pory"
	release
	end


Naranja_AncientTomb_Text_081A13BE::
# 85 "data/maps/Naranja_AncientTomb/scripts.pory"
	.string "There is a big hole in the wall.$"

Naranja_AncientTomb_Text_081C552E::
# 89 "data/maps/Naranja_AncientTomb/scripts.pory"
	.string "  ëÛÀÂ+ÉìÒ éÌ+ ìÉÛÌÇ\nÒçáÌ ÀéÎ ßç=ÌÇ\nÀÉÛ ìç ìÒÌ àÙご\nÉé ìÒÌ ÛÉÎÎßÌわ$"
