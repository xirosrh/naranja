Naranja_CaveOfOrigin_1F_MapScripts::
# 5 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaveOfOrigin_1F_OnTransition
	.byte 0


Naranja_CaveOfOrigin_1F_OnTransition::
# 9 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 10 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	call_if EQUAL, Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04E3
	end


Naranja_CaveOfOrigin_1F_EventScript_Trigger_1::
# 15 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	lockall
# 16 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	goto Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04D3
	return


Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04D3::
# 21 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 22 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_0x8005, 1
# 23 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	special ShakeCamera
# 24 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	waitstate
# 25 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	releaseall
	return


Naranja_CaveOfOrigin_1F_EventScript_Sub_081A04E3::
# 30 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 31 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 32 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 33 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_TEMP_4, 1
# 34 "data/maps/Naranja_CaveOfOrigin_1F/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

