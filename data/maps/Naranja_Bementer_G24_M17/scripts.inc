Naranja_Bementer_G24_M17_MapScripts::
	.byte 0


Naranja_Bementer_G24_M17_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId1::
# 8 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_236, LOCALID_NONE, Naranja_Bementer_G24_M17_Text_0819672B, Naranja_Bementer_G24_M17_Text_0819679D
# 9 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M17_Text_081967B5
# 10 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M17_EventScript_OBJ_EVENT_GFX_LASS_LocalId2::
# 15 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BEMENTER_247, LOCALID_NONE, Naranja_Bementer_G24_M17_Text_081967EF, Naranja_Bementer_G24_M17_Text_0819682B
# 16 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	loadword 0, Naranja_Bementer_G24_M17_Text_08196842
# 17 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	callstd 6
	end


Naranja_Bementer_G24_M17_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 22 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	setorcopyvar VAR_0x8000, 0x53
# 23 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 24 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M17_Text_0819672B::
# 28 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "The rich atmosphere of the mountain\nhas elevated my psychic power!\pA mere child like you...\nYou dream of winning?$"

Naranja_Bementer_G24_M17_Text_0819679D::
# 32 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "I drown in self-pity...$"

Naranja_Bementer_G24_M17_Text_081967B5::
# 36 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "My psychic powers have surely\ngrown several times, but...$"

Naranja_Bementer_G24_M17_Text_081967EF::
# 40 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "Ahahahaha!\pThis is no place for children, least\nof all you!$"

Naranja_Bementer_G24_M17_Text_0819682B::
# 44 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "I lost that cleanly...$"

Naranja_Bementer_G24_M17_Text_08196842::
# 48 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "This means my training is still not\nenough...\pI’ve got to keep working toward the\nsummit...\pGo, me!$"
