Naranja_MtPyre_2F_MapScripts::
# 8 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtPyre_2F_OnTransition
# 9 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_MtPyre_2F_OnResume
# 5 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_MtPyre_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_MtPyre_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, Naranja_MtPyre_2F_OnFrame_1
	.2byte 0


Naranja_MtPyre_2F_OnResume::
# 13 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	setstepcallback 7
# 14 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	setholewarp MAP_NARANJA_MT_PYRE_1F, 0xFF, 0, 0
	end


Naranja_MtPyre_2F_EventScript_Woman1::
# 19 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	msgbox Naranja_MtPyre_2F_Text_081965BB, MSGBOX_NPC
	end


Naranja_MtPyre_2F_EventScript_Man3::
# 24 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	msgbox Naranja_MtPyre_2F_Text_08196600, MSGBOX_NPC
	end


Naranja_MtPyre_2F_EventScript_Maniac::
# 29 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_145, Naranja_MtPyre_2F_Text_08196674, Naranja_MtPyre_2F_Text_081966BE
# 30 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	msgbox Naranja_MtPyre_2F_Text_081966E7, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_2F_EventScript_Man5::
# 35 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_BEMENTER_640, Naranja_MtPyre_2F_Text_081962C6, Naranja_MtPyre_2F_Text_08196358, Naranja_MtPyre_2F_Text_081963CB
# 36 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	msgbox Naranja_MtPyre_2F_Text_08196368, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_2F_EventScript_Woman5::
# 41 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_BEMENTER_640, Naranja_MtPyre_2F_Text_08196449, Naranja_MtPyre_2F_Text_081964EB, Naranja_MtPyre_2F_Text_08196539
# 42 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	msgbox Naranja_MtPyre_2F_Text_08196504, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_2F_EventScript_ItemBall::
# 47 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	setorcopyvar VAR_0x8000, 2
# 48 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 49 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	callstd 1
	end


Naranja_MtPyre_2F_OnTransition::
# 54 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
	end


Naranja_MtPyre_2F_OnFrame_1::
# 59 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	lockall
# 60 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	delay 0x14
# 61 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MtPyre_2F_Movement_081C6BF7
# 62 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 63 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	playse SE_FALL
# 64 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	delay 0x3C
# 65 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	warphole MAP_UNDEFINED
# 66 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	waitstate
	end


# 70 "data/maps/Naranja_MtPyre_2F/scripts.pory"
Naranja_MtPyre_2F_Movement_081C6BF7:
# 71 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	set_invisible
	step_end

Naranja_MtPyre_2F_Text_081962C6::
# 74 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "LUKE: We’re here on a dare.\pHeheh, if I show her how cool I am,\nshe’ll fall for me. I know it!\pI know! I’ll cream you and show her\nhow cool I am!$"

Naranja_MtPyre_2F_Text_08196358::
# 78 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "LUKE: Whoopsie!$"

Naranja_MtPyre_2F_Text_08196368::
# 82 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "LUKE: Well, we lost but that’s okay!\nI’m right here by your side.\lWe’ll make it through this dare!$"

Naranja_MtPyre_2F_Text_081963CB::
# 86 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "LUKE: If you want to take me on, bring\nsome more POKéMON.\pIf you don’t, I won’t be able to show\noff how cool I am to my girl!$"

Naranja_MtPyre_2F_Text_08196449::
# 90 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "DEZ: I came here on a dare with my\nboyfriend.\pIt’s really scary, but I’m with my\nboyfriend. It’s okay.\pI know! I’ll get my boyfriend to look\ncool by beating you!$"

Naranja_MtPyre_2F_Text_081964EB::
# 94 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "DEZ: Waaaah! I’m scared!$"

Naranja_MtPyre_2F_Text_08196504::
# 98 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "DEZ: We’re lovey-dovey, so we don’t\ncare if we lose!$"

Naranja_MtPyre_2F_Text_08196539::
# 102 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "DEZ: If you want to challenge us, you\nshould bring at least two POKéMON.\pMy boyfriend’s strong.\nJust one POKéMON won’t do at all.$"

Naranja_MtPyre_2F_Text_081965BB::
# 106 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "Memories of my darling SKITTY...\nMy eyes overflow thinking about it.$"

Naranja_MtPyre_2F_Text_08196600::
# 110 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "Ooch, ouch... There are holes in the\nground here and there.\pI didn’t notice and took a tumble from\nthe floor above.$"

Naranja_MtPyre_2F_Text_08196674::
# 114 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "Hey! Are you searching for POKéMON?\nYou came along after me! You’re rude!$"

Naranja_MtPyre_2F_Text_081966BE::
# 118 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "Ayieeeeh!\nI’m sorry, forgive me, please!$"

Naranja_MtPyre_2F_Text_081966E7::
# 122 "data/maps/Naranja_MtPyre_2F/scripts.pory"
	.string "People don’t come here often, so\nI thought there’d be rare POKéMON.$"
