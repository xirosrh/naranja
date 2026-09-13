Naranja_AbandonedShip_Underwater1_MapScripts::
# 5 "data/maps/Naranja_AbandonedShip_Underwater1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_AbandonedShip_Underwater1_OnResume
	.byte 0


Naranja_AbandonedShip_Underwater1_OnResume::
# 9 "data/maps/Naranja_AbandonedShip_Underwater1/scripts.pory"
	setdivewarp MAP_NARANJA_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, 0xFF, 0, 0xA
	end

