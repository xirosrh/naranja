Naranja_BandonedShip_G24_M58_MapScripts::
# 5 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_BandonedShip_G24_M58_OnResume
	.byte 0


Naranja_BandonedShip_G24_M58_OnResume::
# 9 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	setdivewarp MAP_NARANJA_BANDONED_SHIP_G24_M64, 0xFF, 0x11, 4
	end


Naranja_BandonedShip_G24_M58_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId1::
# 14 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M58_Text_081986FE
# 15 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	callstd 2
	end


Naranja_BandonedShip_G24_M58_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 20 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	setorcopyvar VAR_0x8000, 0x55
# 21 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 22 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M58_Text_081986FE::
# 26 "data/maps/Naranja_BandonedShip_G24_M58/scripts.pory"
	.string "Urrrrppp...\pI’m getting queasy just being aboard\nthis ship...\pIt’s not even moving, but...$"
