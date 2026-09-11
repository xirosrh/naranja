Naranja_ScorchedSlab_G24_M73_MapScripts::
# 5 "data/maps/Naranja_ScorchedSlab_G24_M73/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ScorchedSlab_G24_M73_OnTransition
	.byte 0


Naranja_ScorchedSlab_G24_M73_OnTransition::
# 9 "data/maps/Naranja_ScorchedSlab_G24_M73/scripts.pory"
	setflag FLAG_NARANJA_SCORCHED_SLAB_EVENT_COMPLETE_0858
	end


Naranja_ScorchedSlab_G24_M73_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 14 "data/maps/Naranja_ScorchedSlab_G24_M73/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12B
# 15 "data/maps/Naranja_ScorchedSlab_G24_M73/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_ScorchedSlab_G24_M73/scripts.pory"
	callstd 1
	end

