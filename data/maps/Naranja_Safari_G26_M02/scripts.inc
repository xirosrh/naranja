Naranja_Safari_G26_M02_MapScripts::
	.byte 0


Naranja_Safari_G26_M02_EventScript_OBJ_EVENT_GFX_HERACROSS_LocalId1::
# 8 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	msgbox Naranja_Safari_G26_M02_Text_081C3C39, MSGBOX_NPC
	end


Naranja_Safari_G26_M02_EventScript_Sign_1::
# 13 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	msgbox Naranja_Safari_G26_M02_Text_081C3EA3, MSGBOX_SIGN
	end


Naranja_Safari_G26_M02_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 18 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x19
# 19 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	callstd 1
	end


Naranja_Safari_G26_M02_Text_081C3C39::
# 24 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	.string "Sometimes, when I toss a オカキクケ at \nPOKéMON, it gets ignored.\pDo POKéMON have likes and dislikes\nabout what they eat?$"

Naranja_Safari_G26_M02_Text_081C3EA3::
# 28 "data/maps/Naranja_Safari_G26_M02/scripts.pory"
	.string "“Relieve your tired feet.”\nREST HOUSE$"
