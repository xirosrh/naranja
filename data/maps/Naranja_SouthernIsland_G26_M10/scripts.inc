Naranja_SouthernIsland_G26_M10_MapScripts::
# 5 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SouthernIsland_G26_M10_OnResume
# 6 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SouthernIsland_G26_M10_OnTransition
	.byte 0


Naranja_SouthernIsland_G26_M10_OnResume::
# 10 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 11 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	call_if EQUAL, Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B68
	end


Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B68::
# 16 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	removeobject LOCALID_SOUTHERN_ISLAND_G26_M10_241
	return


Naranja_SouthernIsland_G26_M10_OnTransition::
# 21 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, 0xBB
# 22 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	call Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B77
	end


Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B77::
# 27 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	checkplayergender
# 28 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 29 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	goto_if EQUAL, Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B8F
# 30 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 31 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	goto_if EQUAL, Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B95
	end


Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B8F::
# 36 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x64
	return


Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160B95::
# 41 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x69
	return


Naranja_SouthernIsland_G26_M10_EventScript_Sign_1::
# 46 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	lockall
# 47 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setvar VAR_0x8008, 0xC
# 48 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	goto Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160BA7
	return


Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160BA7::
# 52 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	checkflag FLAG_NARANJA_SOUTHERN_ISLAND_EVENT_COMPLETE_00CE
# 53 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	goto_if EQUAL, Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160C08
# 54 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0853
# 55 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	goto_if LESS_THAN, Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160C08
# 56 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setflag FLAG_NARANJA_SOUTHERN_ISLAND_EVENT_COMPLETE_00CE
# 57 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	special SpawnCameraObject
# 58 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	applymovement 127, Naranja_SouthernIsland_G26_M10_Movement_08160C12
# 59 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay 0x32
# 61 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	waitse
# 62 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	playmoncry SPECIES_LATIAS, 0
# 63 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay 0x1E
# 64 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	waitmoncry
# 65 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	addobject LOCALID_SOUTHERN_ISLAND_G26_M10_241
# 66 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay 0x1E
# 67 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	applymovement 127, Naranja_SouthernIsland_G26_M10_Movement_08160C16
# 68 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	applymovement LOCALID_SOUTHERN_ISLAND_G26_M10_241, Naranja_SouthernIsland_G26_M10_Movement_08160C22
# 69 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay 0x32
# 71 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	special RemoveCameraObject
# 72 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setwildbattle SPECIES_LATIAS, 0x32, 0xBF
# 73 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_G26_M10_241
# 74 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 75 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	special BattleSetup_StartLatiBattle
# 76 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	waitstate
# 77 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 78 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	releaseall
	end


Naranja_SouthernIsland_G26_M10_EventScript_Sub_08160C08::
# 83 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	msgbox Naranja_SouthernIsland_G26_M10_Text_081C52C5, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	releaseall
	end


# 88 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
Naranja_SouthernIsland_G26_M10_Movement_08160C12:
# 89 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_up
# 90 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_up
# 91 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
Naranja_SouthernIsland_G26_M10_Movement_08160C16:
# 95 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 96 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 97 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 98 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 99 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 100 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 101 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 102 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 103 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 104 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 105 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_in_place_faster_up
	step_end

# 108 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
Naranja_SouthernIsland_G26_M10_Movement_08160C22:
# 109 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 110 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 111 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 112 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 113 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 114 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 115 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	delay_16
# 116 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 117 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 118 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
# 119 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	walk_down
	step_end

Naranja_SouthernIsland_G26_M10_Text_081C52C5::
# 122 "data/maps/Naranja_SouthernIsland_G26_M10/scripts.pory"
	.string "“All dreams are but another reality.\nNever forget...”$"
