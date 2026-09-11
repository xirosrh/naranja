Naranja_BandonedShip_G24_M56_MapScripts::
	.byte 0


Naranja_BandonedShip_G24_M56_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId1::
# 8 "data/maps/Naranja_BandonedShip_G24_M56/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M56_Text_0819850A
# 9 "data/maps/Naranja_BandonedShip_G24_M56/scripts.pory"
	callstd 2
	end


Naranja_BandonedShip_G24_M56_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 14 "data/maps/Naranja_BandonedShip_G24_M56/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7A
# 15 "data/maps/Naranja_BandonedShip_G24_M56/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_BandonedShip_G24_M56/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M56_Text_0819850A::
# 20 "data/maps/Naranja_BandonedShip_G24_M56/scripts.pory"
	.string "Ships of this sort are rare, so I’m\ntaking a look around.\pHmhm...\nThere appear to be other cabins...$"
