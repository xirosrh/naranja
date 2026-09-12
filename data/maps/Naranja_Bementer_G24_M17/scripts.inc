Naranja_Bementer_G24_M17_MapScripts::
	.byte 0


Naranja_Bementer_G24_M17_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId1::
# 8 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_236, Naranja_Bementer_G24_M17_Text_0819672B, Naranja_Bementer_G24_M17_Text_0819679D
# 9 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	msgbox Naranja_Bementer_G24_M17_Text_081967B5, MSGBOX_AUTOCLOSE
	end


Naranja_Bementer_G24_M17_EventScript_OBJ_EVENT_GFX_LASS_LocalId2::
# 14 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_247, Naranja_Bementer_G24_M17_Text_081967EF, Naranja_Bementer_G24_M17_Text_0819682B
# 15 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	msgbox Naranja_Bementer_G24_M17_Text_08196842, MSGBOX_AUTOCLOSE
	end


Naranja_Bementer_G24_M17_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 20 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	setorcopyvar VAR_0x8000, 0x53
# 21 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 22 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M17_Text_0819672B::
# 26 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "The rich atmosphere of the mountain\nhas elevated my psychic power!\pA mere child like you...\nYou dream of winning?$"

Naranja_Bementer_G24_M17_Text_0819679D::
# 30 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "I drown in self-pity...$"

Naranja_Bementer_G24_M17_Text_081967B5::
# 34 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "My psychic powers have surely\ngrown several times, but...$"

Naranja_Bementer_G24_M17_Text_081967EF::
# 38 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "Ahahahaha!\pThis is no place for children, least\nof all you!$"

Naranja_Bementer_G24_M17_Text_0819682B::
# 42 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "I lost that cleanly...$"

Naranja_Bementer_G24_M17_Text_08196842::
# 46 "data/maps/Naranja_Bementer_G24_M17/scripts.pory"
	.string "This means my training is still not\nenough...\pI’ve got to keep working toward the\nsummit...\pGo, me!$"
