Naranja_AbandonedShip_Rooms_1F_MapScripts::
	.byte 0


Naranja_AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 8 "data/maps/Naranja_AbandonedShip_Rooms_1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms_1F_Text_0819850A, MSGBOX_NPC
	end


Naranja_AbandonedShip_Rooms_1F_EventScript_ItemBall::
# 13 "data/maps/Naranja_AbandonedShip_Rooms_1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7A
# 14 "data/maps/Naranja_AbandonedShip_Rooms_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_AbandonedShip_Rooms_1F/scripts.pory"
	callstd 1
	end


Naranja_AbandonedShip_Rooms_1F_Text_0819850A::
# 19 "data/maps/Naranja_AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ships of this sort are rare, so I’m\ntaking a look around.\pHmhm...\nThere appear to be other cabins...$"
