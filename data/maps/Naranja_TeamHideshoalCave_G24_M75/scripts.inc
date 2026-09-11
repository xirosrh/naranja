Naranja_TeamHideshoalCave_G24_M75_MapScripts::
# 5 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_TeamHideshoalCave_G24_M75_OnResume
	.byte 0


Naranja_TeamHideshoalCave_G24_M75_OnResume::
# 9 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 10 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	call_if EQUAL, Naranja_TeamHideshoalCave_G24_M75_EventScript_Sub_0815F2B8
	end


Naranja_TeamHideshoalCave_G24_M75_EventScript_Sub_0815F2B8::
# 15 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	removeobject 32783
	return


Naranja_TeamHideshoalCave_G24_M75_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 20 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	setorcopyvar VAR_0x8000, 1
# 21 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 22 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	callstd 1
	end


Naranja_TeamHideshoalCave_G24_M75_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 27 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 28 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 29 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	callstd 1
	end


Naranja_TeamHideshoalCave_G24_M75_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 34 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	setorcopyvar VAR_0x8000, 0x25
# 35 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 36 "data/maps/Naranja_TeamHideshoalCave_G24_M75/scripts.pory"
	callstd 1
	end

