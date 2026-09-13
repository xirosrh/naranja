Naranja_CaveOfOrigin_B2F_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_B2F_OnTransition
	.byte 0


Naranja_CaveOfOrigin_B2F_OnTransition::
# 9 "data/maps/Naranja_CaveOfOrigin_B2F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 10 "data/maps/Naranja_CaveOfOrigin_B2F/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04E3
	end


Naranja_CaveOfOrigin_B2F_EventScript_Trigger_3::
# 15 "data/maps/Naranja_CaveOfOrigin_B2F/scripts.pory"
	lockall
# 16 "data/maps/Naranja_CaveOfOrigin_B2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 17 "data/maps/Naranja_CaveOfOrigin_B2F/scripts.pory"
	goto Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04D3
	return

