Naranja_SeafloorCavern_G24_M27_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_G24_M27/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SeafloorCavern_G24_M27_OnResume
	.byte 0


Naranja_SeafloorCavern_G24_M27_OnResume::
# 9 "data/maps/Naranja_SeafloorCavern_G24_M27/scripts.pory"
	setdivewarp MAP_NARANJA_UNDERWATER_G24_M26, 0xFF, 6, 5
# 10 "data/maps/Naranja_SeafloorCavern_G24_M27/scripts.pory"
	setescapewarp MAP_NARANJA_UNDERWATER_G24_M26, 0xFF, 6, 5
	end

