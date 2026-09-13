Naranja_Underwater_Route134_MapScripts::
# 5 "data/maps/Naranja_Underwater_Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Underwater_Route134_OnResume
	.byte 0


Naranja_Underwater_Route134_OnResume::
# 9 "data/maps/Naranja_Underwater_Route134/scripts.pory"
	setdivewarp MAP_NARANJA_ROUTE134, 0xFF, 0x3C, 0x1F
	end

