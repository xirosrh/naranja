Naranja_IslaNavel_G05_M05_MapScripts::
# 5 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNavel_G05_M05_OnTransition
	.byte 0


Naranja_IslaNavel_G05_M05_OnTransition::
	end


Naranja_IslaNavel_G05_M05_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 13 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	lock
# 14 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_00E5
# 16 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C54
# 17 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	checkitem ITEM_METEORITE, 1
# 18 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 19 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153BDA
# 20 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177755
# 21 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153BDA::
# 27 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	checkflag FLAG_TEMP_2
# 28 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C2D
# 29 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	checkflag FLAG_TEMP_2
# 30 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C3E
# 31 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 32 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C47
# 33 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_081778C4
# 34 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13B
# 36 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 37 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 0
# 38 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 39 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 40 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	setvar VAR_0x8004, 0x118
# 41 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	call Naranja_CuevaKabuto_G24_M10_EventScript_Sub_081A067F
# 42 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_00E5
# 43 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177910
# 44 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C2D::
# 50 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177755
# 51 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_0817780E
# 53 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 5
	return


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C3E::
# 58 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_081779B8
# 59 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 5
	return


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C47::
# 64 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	setflag FLAG_TEMP_2
# 65 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_0817797D
# 66 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C54::
# 72 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177910
# 73 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 79 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	lock
# 80 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	faceplayer
# 81 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_00E5
# 82 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C86
# 83 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 84 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C7C
# 85 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177A2B
# 86 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C7C::
# 92 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177A7C
# 93 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 94 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_EventScript_Sub_08153C86::
# 99 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M05_Text_08177ABB
# 100 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M05_Text_08177755::
# 105 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "PROF. COZMO: Oh...\nI never should have let myself be\lconned into telling TEAM {AQUA} where\lyou can find METEORITES...\pThat METEORITE from METEOR FALLS...\nIt’s never going to be mine now...$"

Naranja_IslaNavel_G05_M05_Text_0817780E::
# 109 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "Oh!\nHah?\pThat item...\pCould it be?\pIs it the METEORITE that TEAM {AQUA}\ntook from METEOR FALLS?\pPlease, may I have it?\pI’m not asking for it for free.\nHow about in exchange for this TM?$"

Naranja_IslaNavel_G05_M05_Text_081778C4::
# 113 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "PROF. COZMO: This TM, it represents\nmy feeling of gratitude.\lPlease use it!$"

Naranja_IslaNavel_G05_M05_Text_08177910::
# 117 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "PROF. COZMO: Oh, I can’t believe it.\nThis is really, really great!\pThis is really going to help my research!$"

Naranja_IslaNavel_G05_M05_Text_0817797D::
# 121 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "PROF. COZMO: Oh, but...\nI’m crushed with disappointment...$"

Naranja_IslaNavel_G05_M05_Text_081779B8::
# 125 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "PROF. COZMO: Please, may I have that\nMETEORITE?\pI’m not asking for it for free.\nHow about in exchange for this TM?$"

Naranja_IslaNavel_G05_M05_Text_08177A2B::
# 129 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "PROF. COZMO went off to METEOR FALLS\non ROUTE 114 with some people from\lTEAM {AQUA}.$"

Naranja_IslaNavel_G05_M05_Text_08177A7C::
# 133 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "Poor PROF. COZMO...\nHe’s so depressed... I feel sorry for him.$"

Naranja_IslaNavel_G05_M05_Text_08177ABB::
# 137 "data/maps/Naranja_IslaNavel_G05_M05/scripts.pory"
	.string "Look at PROF. COZMO...\nHe’s so happy! I think it’s cute.$"
