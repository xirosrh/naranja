Naranja_Bementer_G24_M19_MapScripts::
	.byte 0


Naranja_Bementer_G24_M19_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId1::
# 8 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_109, LOCALID_NONE, Naranja_Bementer_G24_M19_Text_08196939, Naranja_Bementer_G24_M19_Text_08196997
# 9 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M19_Text_081969AC
# 10 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M19_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 15 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	setorcopyvar VAR_0x8000, 0xDD
# 16 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 17 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M19_Text_08196939::
# 21 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	.string "I love all things horrifying...\nIt’s like a disease...\pWhen I’m here...\nI shiver with fear...$"

Naranja_Bementer_G24_M19_Text_08196997::
# 25 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	.string "Losing, I dislike...$"

Naranja_Bementer_G24_M19_Text_081969AC::
# 29 "data/maps/Naranja_Bementer_G24_M19/scripts.pory"
	.string "I want to see dreadful things...\nI can’t leave...\pStay...\nWon’t you stay with me?$"
