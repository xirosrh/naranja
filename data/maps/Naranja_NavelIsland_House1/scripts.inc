Naranja_NavelIsland_House1_MapScripts::
# 5 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NavelIsland_House1_OnTransition
	.byte 0


Naranja_NavelIsland_House1_OnTransition::
	end


Naranja_NavelIsland_House1_EventScript_Scientist1::
# 13 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	lock
# 14 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	checkflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_00E5
# 16 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House1_EventScript_Sub_08153C54
# 17 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	checkitem ITEM_METEORITE, 1
# 18 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 19 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House1_EventScript_Sub_08153BDA
# 20 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177755, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_EventScript_Sub_08153BDA::
# 26 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	checkflag FLAG_TEMP_2
# 27 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	call_if LESS_THAN, Naranja_NavelIsland_House1_EventScript_Sub_08153C2D
# 28 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	checkflag FLAG_TEMP_2
# 29 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	call_if EQUAL, Naranja_NavelIsland_House1_EventScript_Sub_08153C3E
# 30 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 31 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House1_EventScript_Sub_08153C47
# 32 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_081778C4, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13B
# 34 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 35 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	callstd 0
# 36 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 37 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 38 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	setvar VAR_0x8004, 0x118
# 39 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	call Naranja_GraniteCave_StevensRoom_EventScript_Sub_081A067F
# 40 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	setflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_00E5
# 41 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177910, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_EventScript_Sub_08153C2D::
# 47 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177755, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_0817780E, MSGBOX_YESNO
	return


Naranja_NavelIsland_House1_EventScript_Sub_08153C3E::
# 53 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_081779B8, MSGBOX_YESNO
	return


Naranja_NavelIsland_House1_EventScript_Sub_08153C47::
# 58 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	setflag FLAG_TEMP_2
# 59 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_0817797D, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_EventScript_Sub_08153C54::
# 65 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177910, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_EventScript_Woman3::
# 71 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	lock
# 72 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	checkflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_00E5
# 74 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House1_EventScript_Sub_08153C86
# 75 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 76 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_House1_EventScript_Sub_08153C7C
# 77 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177A2B, MSGBOX_DEFAULT
# 78 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_EventScript_Sub_08153C7C::
# 83 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177A7C, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_EventScript_Sub_08153C86::
# 89 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	msgbox Naranja_NavelIsland_House1_Text_08177ABB, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	release
	end


Naranja_NavelIsland_House1_Text_08177755::
# 94 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "PROF. COZMO: Oh...\nI never should have let myself be\lconned into telling TEAM {AQUA} where\lyou can find METEORITES...\pThat METEORITE from METEOR FALLS...\nIt’s never going to be mine now...$"

Naranja_NavelIsland_House1_Text_0817780E::
# 98 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "Oh!\nHah?\pThat item...\pCould it be?\pIs it the METEORITE that TEAM {AQUA}\ntook from METEOR FALLS?\pPlease, may I have it?\pI’m not asking for it for free.\nHow about in exchange for this TM?$"

Naranja_NavelIsland_House1_Text_081778C4::
# 102 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "PROF. COZMO: This TM, it represents\nmy feeling of gratitude.\lPlease use it!$"

Naranja_NavelIsland_House1_Text_08177910::
# 106 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "PROF. COZMO: Oh, I can’t believe it.\nThis is really, really great!\pThis is really going to help my research!$"

Naranja_NavelIsland_House1_Text_0817797D::
# 110 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "PROF. COZMO: Oh, but...\nI’m crushed with disappointment...$"

Naranja_NavelIsland_House1_Text_081779B8::
# 114 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "PROF. COZMO: Please, may I have that\nMETEORITE?\pI’m not asking for it for free.\nHow about in exchange for this TM?$"

Naranja_NavelIsland_House1_Text_08177A2B::
# 118 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "PROF. COZMO went off to METEOR FALLS\non ROUTE 114 with some people from\lTEAM {AQUA}.$"

Naranja_NavelIsland_House1_Text_08177A7C::
# 122 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "Poor PROF. COZMO...\nHe’s so depressed... I feel sorry for him.$"

Naranja_NavelIsland_House1_Text_08177ABB::
# 126 "data/maps/Naranja_NavelIsland_House1/scripts.pory"
	.string "Look at PROF. COZMO...\nHe’s so happy! I think it’s cute.$"
