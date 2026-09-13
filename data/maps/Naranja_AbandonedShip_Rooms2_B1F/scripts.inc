Naranja_AbandonedShip_Rooms2_B1F_MapScripts::
	.byte 0


Naranja_AbandonedShip_Rooms2_B1F_EventScript_Camper::
# 8 "data/maps/Naranja_AbandonedShip_Rooms2_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Rooms2_B1F_Text_08198759, MSGBOX_NPC
	end


Naranja_AbandonedShip_Rooms2_B1F_EventScript_ItemBall::
# 13 "data/maps/Naranja_AbandonedShip_Rooms2_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 7
# 14 "data/maps/Naranja_AbandonedShip_Rooms2_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_AbandonedShip_Rooms2_B1F/scripts.pory"
	callstd 1
	end


Naranja_AbandonedShip_Rooms2_B1F_Text_08198759::
# 19 "data/maps/Naranja_AbandonedShip_Rooms2_B1F/scripts.pory"
	.string "This is a perfect place to go exploring!\nIt’s exciting here!\pI bet there’re amazing treasures on\nboard.$"
