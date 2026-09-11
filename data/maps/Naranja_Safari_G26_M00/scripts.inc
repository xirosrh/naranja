Naranja_Safari_G26_M00_MapScripts::
	.byte 0


Naranja_Safari_G26_M00_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 8 "data/maps/Naranja_Safari_G26_M00/scripts.pory"
	loadword 0, Naranja_Safari_G26_M00_Text_081C3CAE
# 9 "data/maps/Naranja_Safari_G26_M00/scripts.pory"
	callstd 2
	end


Naranja_Safari_G26_M00_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 14 "data/maps/Naranja_Safari_G26_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x136
# 15 "data/maps/Naranja_Safari_G26_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_Safari_G26_M00/scripts.pory"
	callstd 1
	end


Naranja_Safari_G26_M00_Text_081C3CAE::
# 20 "data/maps/Naranja_Safari_G26_M00/scripts.pory"
	.string "Gasp... Gasp...\nI...made it out here...but...\pI’m exhausted... I don’t have the\nenergy to catch POKéMON...$"
