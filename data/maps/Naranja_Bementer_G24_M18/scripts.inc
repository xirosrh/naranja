Naranja_Bementer_G24_M18_MapScripts::
	.byte 0


Naranja_Bementer_G24_M18_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 8 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_190, Naranja_Bementer_G24_M18_Text_081968A6, Naranja_Bementer_G24_M18_Text_081968D0
# 9 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	msgbox Naranja_Bementer_G24_M18_Text_081968EE, MSGBOX_AUTOCLOSE
	end


Naranja_Bementer_G24_M18_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 14 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	setorcopyvar VAR_0x8000, 0xDC
# 15 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M18_Text_081968A6::
# 20 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	.string "Teacher...\nPlease watch over my progress!$"

Naranja_Bementer_G24_M18_Text_081968D0::
# 24 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	.string "Teacher...\nPlease forgive me!$"

Naranja_Bementer_G24_M18_Text_081968EE::
# 28 "data/maps/Naranja_Bementer_G24_M18/scripts.pory"
	.string "Until I improve, my teacher, who rests\nhere, will never find true peace...$"
