Naranja_Bementer_G24_M16_MapScripts::
# 8 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Bementer_G24_M16_OnTransition
# 9 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Bementer_G24_M16_OnResume
# 5 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Bementer_G24_M16_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Bementer_G24_M16_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, Naranja_Bementer_G24_M16_OnFrame_1
	.2byte 0


Naranja_Bementer_G24_M16_OnResume::
# 13 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	setstepcallback 7
# 14 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	setholewarp MAP_NARANJA_BEMENTER_G24_M15, 0xFF, 0, 0
	end


Naranja_Bementer_G24_M16_EventScript_OBJ_EVENT_GFX_WOMAN_1_LocalId3::
# 19 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M16_Text_081965BB
# 20 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	callstd 2
	end


Naranja_Bementer_G24_M16_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId4::
# 25 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M16_Text_08196600
# 26 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	callstd 2
	end


Naranja_Bementer_G24_M16_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId1::
# 31 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_145, LOCALID_NONE, Naranja_Bementer_G24_M16_Text_08196674, Naranja_Bementer_G24_M16_Text_081966BE
# 32 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M16_Text_081966E7
# 33 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M16_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId6::
# 38 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_BEMENTER_640, LOCALID_NONE, Naranja_Bementer_G24_M16_Text_081962C6, Naranja_Bementer_G24_M16_Text_08196358, Naranja_Bementer_G24_M16_Text_081963CB
# 39 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M16_Text_08196368
# 40 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M16_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId5::
# 45 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_BEMENTER_640, LOCALID_NONE, Naranja_Bementer_G24_M16_Text_08196449, Naranja_Bementer_G24_M16_Text_081964EB, Naranja_Bementer_G24_M16_Text_08196539
# 46 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M16_Text_08196504
# 47 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M16_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 52 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	setorcopyvar VAR_0x8000, 2
# 53 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 54 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M16_OnTransition::
# 59 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
	end


Naranja_Bementer_G24_M16_OnFrame_1::
# 64 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	lockall
# 65 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	delay 0x14
# 66 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Bementer_G24_M16_Movement_081C6BF7
# 67 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	waitmovement LOCALID_NONE
# 68 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	playse SE_FALL
# 69 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	delay 0x3C
# 70 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	warphole MAP_UNDEFINED
# 71 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	waitstate
	end


# 75 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
Naranja_Bementer_G24_M16_Movement_081C6BF7:
# 76 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	set_invisible
	step_end

Naranja_Bementer_G24_M16_Text_081962C6::
# 79 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "LUKE: We’re here on a dare.\pHeheh, if I show her how cool I am,\nshe’ll fall for me. I know it!\pI know! I’ll cream you and show her\nhow cool I am!$"

Naranja_Bementer_G24_M16_Text_08196358::
# 83 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "LUKE: Whoopsie!$"

Naranja_Bementer_G24_M16_Text_08196368::
# 87 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "LUKE: Well, we lost but that’s okay!\nI’m right here by your side.\lWe’ll make it through this dare!$"

Naranja_Bementer_G24_M16_Text_081963CB::
# 91 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "LUKE: If you want to take me on, bring\nsome more POKéMON.\pIf you don’t, I won’t be able to show\noff how cool I am to my girl!$"

Naranja_Bementer_G24_M16_Text_08196449::
# 95 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "DEZ: I came here on a dare with my\nboyfriend.\pIt’s really scary, but I’m with my\nboyfriend. It’s okay.\pI know! I’ll get my boyfriend to look\ncool by beating you!$"

Naranja_Bementer_G24_M16_Text_081964EB::
# 99 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "DEZ: Waaaah! I’m scared!$"

Naranja_Bementer_G24_M16_Text_08196504::
# 103 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "DEZ: We’re lovey-dovey, so we don’t\ncare if we lose!$"

Naranja_Bementer_G24_M16_Text_08196539::
# 107 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "DEZ: If you want to challenge us, you\nshould bring at least two POKéMON.\pMy boyfriend’s strong.\nJust one POKéMON won’t do at all.$"

Naranja_Bementer_G24_M16_Text_081965BB::
# 111 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "Memories of my darling SKITTY...\nMy eyes overflow thinking about it.$"

Naranja_Bementer_G24_M16_Text_08196600::
# 115 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "Ooch, ouch... There are holes in the\nground here and there.\pI didn’t notice and took a tumble from\nthe floor above.$"

Naranja_Bementer_G24_M16_Text_08196674::
# 119 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "Hey! Are you searching for POKéMON?\nYou came along after me! You’re rude!$"

Naranja_Bementer_G24_M16_Text_081966BE::
# 123 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "Ayieeeeh!\nI’m sorry, forgive me, please!$"

Naranja_Bementer_G24_M16_Text_081966E7::
# 127 "data/maps/Naranja_Bementer_G24_M16/scripts.pory"
	.string "People don’t come here often, so\nI thought there’d be rare POKéMON.$"
