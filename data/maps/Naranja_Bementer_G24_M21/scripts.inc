Naranja_Bementer_G24_M21_MapScripts::
# 5 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Bementer_G24_M21_OnTransition
	.byte 0


Naranja_Bementer_G24_M21_OnTransition::
# 9 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	call Naranja_Bementer_G24_M21_EventScript_Sub_0815D492
	end


Naranja_Bementer_G24_M21_EventScript_Sub_0815D492::
# 14 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 15 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0xC
# 16 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	goto_if LESS_THAN, Naranja_Bementer_G24_M21_EventScript_Sub_0815D4A3
	return


Naranja_Bementer_G24_M21_EventScript_Sub_0815D4A3::
# 21 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setweather 6
	return


Naranja_Bementer_G24_M21_EventScript_Trigger_1::
# 26 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setweather 6
# 27 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	doweather
	end


Naranja_Bementer_G24_M21_EventScript_Trigger_3::
# 32 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setweather 2
# 33 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	doweather
	end


Naranja_Bementer_G24_M21_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 38 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14
# 39 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 40 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	callstd 1
	end


Naranja_Bementer_G24_M21_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 45 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setorcopyvar VAR_0x8000, 0x150
# 46 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 47 "data/maps/Naranja_Bementer_G24_M21/scripts.pory"
	callstd 1
	end

