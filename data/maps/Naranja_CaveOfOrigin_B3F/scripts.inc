Naranja_CaveOfOrigin_B3F_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_B3F_OnTransition
	.byte 0


Naranja_CaveOfOrigin_B3F_OnTransition::
# 9 "data/maps/Naranja_CaveOfOrigin_B3F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 10 "data/maps/Naranja_CaveOfOrigin_B3F/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04E3
	end


Naranja_CaveOfOrigin_B3F_EventScript_ItemBall::
# 15 "data/maps/Naranja_CaveOfOrigin_B3F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x159
# 16 "data/maps/Naranja_CaveOfOrigin_B3F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 17 "data/maps/Naranja_CaveOfOrigin_B3F/scripts.pory"
	callstd 1
	end

