Naranja_AbandonedShip_Rooms_B1F_MapScripts::
# 5 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_AbandonedShip_Rooms_B1F_OnResume
	.byte 0


Naranja_AbandonedShip_Rooms_B1F_OnResume::
# 9 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	setdivewarp MAP_NARANJA_ABANDONED_SHIP_UNDERWATER2, 0xFF, 0x11, 4
	end


Naranja_AbandonedShip_Rooms_B1F_EventScript_FatMan::
# 14 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms_B1F_Text_081986FE, MSGBOX_NPC
	end


Naranja_AbandonedShip_Rooms_B1F_EventScript_ItemBall::
# 19 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x55
# 20 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 21 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	callstd 1
	end


Naranja_AbandonedShip_Rooms_B1F_Text_081986FE::
# 25 "data/maps/Naranja_AbandonedShip_Rooms_B1F/scripts.pory"
	.string "Urrrrppp...\pI’m getting queasy just being aboard\nthis ship...\pIt’s not even moving, but...$"
