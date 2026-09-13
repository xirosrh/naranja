Naranja_ScorchedSlab_MapScripts::
# 5 "data/maps/Naranja_ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ScorchedSlab_OnTransition
	.byte 0


Naranja_ScorchedSlab_OnTransition::
# 9 "data/maps/Naranja_ScorchedSlab/scripts.pory"
	setflag FLAG_NARANJA_SCORCHED_SLAB_EVENT_COMPLETE_0858
	end


Naranja_ScorchedSlab_EventScript_ItemBall::
# 14 "data/maps/Naranja_ScorchedSlab/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12B
# 15 "data/maps/Naranja_ScorchedSlab/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_ScorchedSlab/scripts.pory"
	callstd 1
	end

