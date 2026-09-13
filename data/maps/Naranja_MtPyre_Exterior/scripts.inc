Naranja_MtPyre_Exterior_MapScripts::
# 5 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtPyre_Exterior_OnTransition
	.byte 0


Naranja_MtPyre_Exterior_OnTransition::
# 9 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	call Naranja_MtPyre_Exterior_EventScript_Sub_0815D492
	end


Naranja_MtPyre_Exterior_EventScript_Sub_0815D492::
# 14 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 15 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0xC
# 16 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	goto_if LESS_THAN, Naranja_MtPyre_Exterior_EventScript_Sub_0815D4A3
	return


Naranja_MtPyre_Exterior_EventScript_Sub_0815D4A3::
# 21 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setweather 6
	return


Naranja_MtPyre_Exterior_EventScript_Trigger_1::
# 26 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setweather 6
# 27 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	doweather
	end


Naranja_MtPyre_Exterior_EventScript_Trigger_3::
# 32 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setweather 2
# 33 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	doweather
	end


Naranja_MtPyre_Exterior_EventScript_ItemBall::
# 38 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14
# 39 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 40 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	callstd 1
	end


Naranja_MtPyre_Exterior_EventScript_ItemBall_2::
# 45 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setorcopyvar VAR_0x8000, 0x150
# 46 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 47 "data/maps/Naranja_MtPyre_Exterior/scripts.pory"
	callstd 1
	end

