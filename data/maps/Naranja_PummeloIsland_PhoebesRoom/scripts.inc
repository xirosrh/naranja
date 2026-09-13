Naranja_PummeloIsland_PhoebesRoom_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_PummeloIsland_PhoebesRoom_OnLoad
# 6 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PummeloIsland_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PummeloIsland_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PummeloIsland_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_PummeloIsland_PhoebesRoom_OnWarp_1
	.2byte 0

Naranja_PummeloIsland_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	map_script_2 VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 1, Naranja_PummeloIsland_PhoebesRoom_OnFrame_1
	.2byte 0


Naranja_PummeloIsland_PhoebesRoom_OnWarp_1::
# 15 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_PummeloIsland_PhoebesRoom_OnFrame_1::
# 20 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	lockall
# 21 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0710
# 22 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	setvar VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 2
# 23 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	releaseall
	end


Naranja_PummeloIsland_PhoebesRoom_OnLoad::
# 28 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DE
# 29 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	call_if EQUAL, Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B624
# 30 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUMMELO_ISLAND_STORY_STATE, 2
# 31 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	call_if EQUAL, Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B62A
	end


Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B624::
# 36 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0757
	return


Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B62A::
# 41 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A07FA
	return


Naranja_PummeloIsland_PhoebesRoom_EventScript_Phoebe::
# 46 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	lock
# 47 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	faceplayer
# 48 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	checkflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DE
# 49 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	goto_if EQUAL, Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B657
# 50 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, 0
# 51 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	msgbox Naranja_PummeloIsland_PhoebesRoom_Text_081908F5, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_PUMMELO_ISLAND_262, Naranja_PummeloIsland_PhoebesRoom_Text_08190A0C
# 53 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	goto Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B661
	return


Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B657::
# 57 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	msgbox Naranja_PummeloIsland_PhoebesRoom_Text_08190A2A, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	release
	end


Naranja_PummeloIsland_PhoebesRoom_EventScript_Sub_0815B661::
# 63 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	setflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_04DE
# 64 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	call Naranja_PummeloIsland_SidneysRoom_EventScript_Sub_081A0693
# 65 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	msgbox Naranja_PummeloIsland_PhoebesRoom_Text_08190A2A, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	release
	end


Naranja_PummeloIsland_PhoebesRoom_Text_081908F5::
# 70 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\pI’m PHOEBE of the ELITE FOUR.\nI did my training on MT. PYRE.\pWhile I trained, I gained the ability\nto commune with GHOST-type POKéMON.\pYes, the bond I developed with POKéMON\nis extremely tight.\pSo, come on, just try and see if you can\neven inflict damage on my POKéMON!$"

Naranja_PummeloIsland_PhoebesRoom_Text_08190A0C::
# 74 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\nI’ve gone and lost.$"

Naranja_PummeloIsland_PhoebesRoom_Text_08190A2A::
# 78 "data/maps/Naranja_PummeloIsland_PhoebesRoom/scripts.pory"
	.string "There’s a definite bond between you\nand your POKéMON, too.\pI didn’t recognize it, so it’s only\nnatural that I lost.\pYup, I’d like to see how far your bond\nwill carry you.\pGo ahead, move on to the next room.$"
