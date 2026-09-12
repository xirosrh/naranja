Naranja_Safari_G26_M01_MapScripts::
	.byte 0


Naranja_Safari_G26_M01_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId1::
# 8 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	msgbox Naranja_Safari_G26_M01_Text_081C3D19, MSGBOX_NPC
	end


Naranja_Safari_G26_M01_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId2::
# 13 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	msgbox Naranja_Safari_G26_M01_Text_081C3D80, MSGBOX_NPC
	end


Naranja_Safari_G26_M01_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 18 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x43
# 19 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	callstd 1
	end


Naranja_Safari_G26_M01_Text_081C3D19::
# 24 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	.string "I’m on a mission to find WATER POKéMON\nyou don’t see in HOENN.\pDo you have any idea where the lake is?$"

Naranja_Safari_G26_M01_Text_081C3D80::
# 28 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	.string "I’m going to catch a lot of rare POKéMON\nhere and trade them with my friends!$"
