Naranja_SeafloorCavern_Entrance_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SeafloorCavern_Entrance_OnResume
	.byte 0


Naranja_SeafloorCavern_Entrance_OnResume::
# 9 "data/maps/Naranja_SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_NARANJA_UNDERWATER_SEAFLOOR_CAVERN, 0xFF, 6, 5
# 10 "data/maps/Naranja_SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_NARANJA_UNDERWATER_SEAFLOOR_CAVERN, 0xFF, 6, 5
	end

