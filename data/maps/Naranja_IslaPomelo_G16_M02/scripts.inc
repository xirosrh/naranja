Naranja_IslaPomelo_G16_M02_MapScripts::
# 8 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaPomelo_G16_M02_OnLoad
# 5 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaPomelo_G16_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaPomelo_G16_M02_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_IslaPomelo_G16_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_POMELO_STORY_STATE, 2, Naranja_IslaPomelo_G16_M02_OnFrame_1
	.2byte 0

Naranja_IslaPomelo_G16_M02_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M02_OnWarp_1
	.2byte 0


Naranja_IslaPomelo_G16_M02_OnWarp_1::
# 15 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_IslaPomelo_G16_M02_OnFrame_1::
# 20 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	lockall
# 21 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0710
# 22 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	setvar VAR_NARANJA_ISLA_POMELO_STORY_STATE, 3
# 23 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M02_OnLoad::
# 28 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DF
# 29 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6BE
# 30 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_POMELO_STORY_STATE, 3
# 31 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6C4
	end


Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6BE::
# 36 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0757
	return


Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6C4::
# 41 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A07FA
	return


Naranja_IslaPomelo_G16_M02_EventScript_OBJ_EVENT_GFX_GLACIA_LocalId1::
# 46 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	lock
# 47 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	faceplayer
# 48 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DF
# 49 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6F1
# 50 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, 0
# 51 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M02_Text_08190AF9, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ISLA_POMELO_263, Naranja_IslaPomelo_G16_M02_Text_08190C01
# 53 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	goto Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6FB
	return


Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6F1::
# 57 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M02_Text_08190C8F, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M02_EventScript_Sub_0815B6FB::
# 63 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DF
# 64 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0693
# 65 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M02_Text_08190C8F, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M02_Text_08190AF9::
# 70 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	.string "Welcome, my name is GLACIA of the\nELITE FOUR.\pI’ve traveled from afar to HOENN so\nthat I may hone my ice skills.\pBut all I have seen are challenges by\nweak TRAINERS and their POKéMON.\pWhat about you?\pIt would please me to no end if I could\ngo all out against you!$"

Naranja_IslaPomelo_G16_M02_Text_08190C01::
# 74 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	.string "You and your POKéMON...\nHow hot your spirits burn!\pThe all-consuming heat overwhelms.\pIt’s no surprise that my icy skills\nfailed to harm you.$"

Naranja_IslaPomelo_G16_M02_Text_08190C8F::
# 78 "data/maps/Naranja_IslaPomelo_G16_M02/scripts.pory"
	.string "Advance to the next room.\pAnd there, confirm the truly fearsome\nside of the POKéMON LEAGUE.$"
