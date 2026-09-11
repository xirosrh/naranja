Naranja_IslaMandarin_G10_M06_MapScripts::
# 19 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_7islasPomelo_G03_M02_OnLoad
# 5 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaMandarin_G10_M06_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaMandarin_G10_M06_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_IslaMandarin_G10_M06_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 1, Naranja_7islasPomelo_G03_M02_OnFrame_1
# 7 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 2, Naranja_7islasPomelo_G03_M02_OnFrame_1
# 8 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 5, Naranja_7islasPomelo_G03_M02_OnFrame_1
# 9 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 3, Naranja_7islasPomelo_G03_M02_OnFrame_4
# 10 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 4, Naranja_7islasPomelo_G03_M02_OnFrame_5
	.2byte 0

Naranja_IslaMandarin_G10_M06_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 1, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 14 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 2, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 15 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 5, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 16 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 3, Naranja_7islasPomelo_G03_M02_OnWarp_1
# 17 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	map_script_2 VAR_NARANJA_7ISLAS_POMELO_STORY_STATE, 4, Naranja_7islasPomelo_G03_M02_OnWarp_1
	.2byte 0


Naranja_IslaMandarin_G10_M06_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 23 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A3EA6
	end


Naranja_IslaMandarin_G10_M06_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2::
# 28 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A40CC
	end


Naranja_IslaMandarin_G10_M06_EventScript_OBJ_EVENT_GFX_TEALA_LocalId3::
# 33 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	call Naranja_7islasPomelo_G03_M02_EventScript_Sub_081A41FB
	end


Naranja_IslaMandarin_G10_M06_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId4::
# 38 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M06_Text_08182724, MSGBOX_NPC
	end


Naranja_IslaMandarin_G10_M06_Text_08182724::
# 42 "data/maps/Naranja_IslaMandarin_G10_M06/scripts.pory"
	.string "Did you know that you can link battle\nat the COLOSSEUM here?\pThey put up your record on the wall\nfor everyone to see.\pIt’s embarrassing if you lose more\noften than you win...$"
