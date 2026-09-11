Naranja_CaveOfOrigin_G24_M41_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_G24_M41/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_G24_M41_OnTransition
	.byte 0


Naranja_CaveOfOrigin_G24_M41_OnTransition::
# 9 "data/maps/Naranja_CaveOfOrigin_G24_M41/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 10 "data/maps/Naranja_CaveOfOrigin_G24_M41/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_G24_M38_EventScript_Sub_081A04E3
	end


Naranja_CaveOfOrigin_G24_M41_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 15 "data/maps/Naranja_CaveOfOrigin_G24_M41/scripts.pory"
	setorcopyvar VAR_0x8000, 0x159
# 16 "data/maps/Naranja_CaveOfOrigin_G24_M41/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 17 "data/maps/Naranja_CaveOfOrigin_G24_M41/scripts.pory"
	callstd 1
	end

