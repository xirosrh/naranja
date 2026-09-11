Naranja_CaveOfOrigin_G24_M39_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_G24_M39/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_G24_M39_OnTransition
	.byte 0


Naranja_CaveOfOrigin_G24_M39_OnTransition::
# 9 "data/maps/Naranja_CaveOfOrigin_G24_M39/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 10 "data/maps/Naranja_CaveOfOrigin_G24_M39/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_G24_M38_EventScript_Sub_081A04E3
	end

