Naranja_Underwater_SeafloorCavern_MapScripts::
# 5 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Underwater_SeafloorCavern_OnResume
# 6 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Underwater_SeafloorCavern_OnTransition
# 7 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_Underwater_SeafloorCavern_OnLoad
	.byte 0


Naranja_Underwater_SeafloorCavern_OnTransition::
# 11 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_NARANJA_UNDERWATER_EVENT_COMPLETE_0847
# 12 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0081
# 13 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	goto_if EQUAL, Naranja_Underwater_SeafloorCavern_EventScript_Sub_0815D9BB
	end


Naranja_Underwater_SeafloorCavern_EventScript_Sub_0815D9BB::
# 18 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_HIDE_NARANJA_UNDERWATER_SEAFLOOR_CAVERN_RIVAL_BRENDAN_NORMAL
	end


Naranja_Underwater_SeafloorCavern_OnLoad::
# 23 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0081
# 24 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	call_if EQUAL, Naranja_Underwater_SeafloorCavern_EventScript_Sub_0815D9C9
	end


Naranja_Underwater_SeafloorCavern_EventScript_Sub_0815D9C9::
# 29 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 3, 0x21E, 1
# 30 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 3, 0x21E, 1
# 31 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 3, 0x21E, 1
# 32 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 3, 0x21E, 1
# 33 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 4, 0x228, 0
# 34 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 4, 0x228, 0
# 35 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 4, 0x228, 0
# 36 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 4, 0x228, 0
# 37 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 5, 0x228, 0
# 38 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 5, 0x228, 0
# 39 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 5, 0x228, 0
# 40 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 5, 0x228, 0
	return


Naranja_Underwater_SeafloorCavern_OnResume::
# 45 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	setdivewarp MAP_NARANJA_SEAFLOOR_CAVERN_ENTRANCE, 0xFF, 0xA, 0x11
	end


Naranja_Underwater_SeafloorCavern_EventScript_RivalAshNormal::
# 50 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	lockall
# 51 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	msgbox Naranja_Underwater_SeafloorCavern_Text_08197435, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	releaseall
	end


Naranja_Underwater_SeafloorCavern_Text_08197435::
# 56 "data/maps/Naranja_Underwater_SeafloorCavern/scripts.pory"
	.string "“SUBMARINE EXPLORER 1” is painted\non the hull.\pThis is the submarine TEAM {AQUA}\nstole in SLATEPORT!\pTEAM {AQUA} must have gone\nashore here.$"
