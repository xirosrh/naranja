Naranja_BandonedShip_G24_M55_MapScripts::
	.byte 0


Naranja_BandonedShip_G24_M55_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId1::
# 8 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M55_Text_081984D8
# 9 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	callstd 2
	end


Naranja_BandonedShip_G24_M55_EventScript_OBJ_EVENT_GFX_TUBER_M_LocalId2::
# 14 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_BANDONED_SHIP_066, LOCALID_NONE, Naranja_BandonedShip_G24_M55_Text_0819843D, Naranja_BandonedShip_G24_M55_Text_08198479
# 15 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M55_Text_08198493
# 16 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	callstd 6
	end


Naranja_BandonedShip_G24_M55_Text_0819843D::
# 20 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	.string "What’s so funny about having my inner\ntube aboard the ship?$"

Naranja_BandonedShip_G24_M55_Text_08198479::
# 24 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	.string "Whoa, you overwhelmed me!$"

Naranja_BandonedShip_G24_M55_Text_08198493::
# 28 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	.string "It’s not easy throwing POKé BALLS\nwhile hanging on to an inner tube!$"

Naranja_BandonedShip_G24_M55_Text_081984D8::
# 32 "data/maps/Naranja_BandonedShip_G24_M55/scripts.pory"
	.string "Isn’t it fun here?\nI get excited just being here!$"
