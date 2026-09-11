Naranja_BandonedShip_G24_M59_MapScripts::
	.byte 0


Naranja_BandonedShip_G24_M59_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId1::
# 8 "data/maps/Naranja_BandonedShip_G24_M59/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M59_Text_08198759
# 9 "data/maps/Naranja_BandonedShip_G24_M59/scripts.pory"
	callstd 2
	end


Naranja_BandonedShip_G24_M59_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 14 "data/maps/Naranja_BandonedShip_G24_M59/scripts.pory"
	setorcopyvar VAR_0x8000, 7
# 15 "data/maps/Naranja_BandonedShip_G24_M59/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_BandonedShip_G24_M59/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M59_Text_08198759::
# 20 "data/maps/Naranja_BandonedShip_G24_M59/scripts.pory"
	.string "This is a perfect place to go exploring!\nIt’s exciting here!\pI bet there’re amazing treasures on\nboard.$"
