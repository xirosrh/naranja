Naranja_IslaPomelo_G16_M01_MapScripts::
# 5 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaPomelo_G16_M01_OnLoad
# 6 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaPomelo_G16_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaPomelo_G16_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaPomelo_G16_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_IslaPomelo_G16_M01_OnWarp_1
	.2byte 0

Naranja_IslaPomelo_G16_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_POMELO_STORY_STATE, 1, Naranja_IslaPomelo_G16_M01_OnFrame_1
	.2byte 0


Naranja_IslaPomelo_G16_M01_OnWarp_1::
# 15 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_IslaPomelo_G16_M01_OnFrame_1::
# 20 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	lockall
# 21 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0710
# 22 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_POMELO_STORY_STATE, 2
# 23 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	releaseall
	end


Naranja_IslaPomelo_G16_M01_OnLoad::
# 28 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DE
# 29 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B624
# 30 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_POMELO_STORY_STATE, 2
# 31 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B62A
	end


Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B624::
# 36 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0757
	return


Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B62A::
# 41 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A07FA
	return


Naranja_IslaPomelo_G16_M01_EventScript_OBJ_EVENT_GFX_PHOEBE_LocalId1::
# 46 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	lock
# 47 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	faceplayer
# 48 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DE
# 49 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B657
# 50 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, 0
# 51 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M01_Text_081908F5, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_ISLA_POMELO_262, Naranja_IslaPomelo_G16_M01_Text_08190A0C
# 53 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	goto Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B661
	return


Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B657::
# 57 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M01_Text_08190A2A, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M01_EventScript_Sub_0815B661::
# 63 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_04DE
# 64 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	call Naranja_IslaPomelo_G16_M00_EventScript_Sub_081A0693
# 65 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	msgbox Naranja_IslaPomelo_G16_M01_Text_08190A2A, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	release
	end


Naranja_IslaPomelo_G16_M01_Text_081908F5::
# 70 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	.string "Ahahaha!\pI’m PHOEBE of the ELITE FOUR.\nI did my training on MT. PYRE.\pWhile I trained, I gained the ability\nto commune with GHOST-type POKéMON.\pYes, the bond I developed with POKéMON\nis extremely tight.\pSo, come on, just try and see if you can\neven inflict damage on my POKéMON!$"

Naranja_IslaPomelo_G16_M01_Text_08190A0C::
# 74 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	.string "Oh, darn.\nI’ve gone and lost.$"

Naranja_IslaPomelo_G16_M01_Text_08190A2A::
# 78 "data/maps/Naranja_IslaPomelo_G16_M01/scripts.pory"
	.string "There’s a definite bond between you\nand your POKéMON, too.\pI didn’t recognize it, so it’s only\nnatural that I lost.\pYup, I’d like to see how far your bond\nwill carry you.\pGo ahead, move on to the next room.$"
