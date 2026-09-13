Naranja_PummeloIsland_Corridor3_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland_Corridor3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PummeloIsland_Corridor3_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_PummeloIsland_Corridor3_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_PummeloIsland_Corridor3/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_PummeloIsland_Corridor3_OnWarp_1
	.2byte 0


Naranja_PummeloIsland_Corridor3_OnWarp_1::
# 11 "data/maps/Naranja_PummeloIsland_Corridor3/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end

