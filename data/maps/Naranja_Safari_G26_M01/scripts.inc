Naranja_Safari_G26_M01_MapScripts::
	.byte 0


Naranja_Safari_G26_M01_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId1::
# 8 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	loadword 0, Naranja_Safari_G26_M01_Text_081C3D19
# 9 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	callstd 2
	end


Naranja_Safari_G26_M01_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId2::
# 14 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	loadword 0, Naranja_Safari_G26_M01_Text_081C3D80
# 15 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	callstd 2
	end


Naranja_Safari_G26_M01_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 20 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x43
# 21 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 22 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	callstd 1
	end


Naranja_Safari_G26_M01_Text_081C3D19::
# 26 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	.string "I’m on a mission to find WATER POKéMON\nyou don’t see in HOENN.\pDo you have any idea where the lake is?$"

Naranja_Safari_G26_M01_Text_081C3D80::
# 30 "data/maps/Naranja_Safari_G26_M01/scripts.pory"
	.string "I’m going to catch a lot of rare POKéMON\nhere and trade them with my friends!$"
