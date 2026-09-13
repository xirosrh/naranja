Naranja_CaveOfOrigin_B1F_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_B1F_OnTransition
	.byte 0


Naranja_CaveOfOrigin_B1F_OnTransition::
# 9 "data/maps/Naranja_CaveOfOrigin_B1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 10 "data/maps/Naranja_CaveOfOrigin_B1F/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04E3
	end

