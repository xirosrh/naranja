Naranja_MellsweetIsland_Mart_MapScripts::
	.byte 0


Naranja_MellsweetIsland_Mart_EventScript_MartEmployee::
# 8 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	lock
# 9 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	pokemart Naranja_MellsweetIsland_Mart_Mart_0815A940
# 13 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	release
	end


Naranja_MellsweetIsland_Mart_EventScript_Woman7::
# 19 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	msgbox Naranja_MellsweetIsland_Mart_Text_0818D758, MSGBOX_NPC
	end


Naranja_MellsweetIsland_Mart_EventScript_Boy2::
# 24 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	msgbox Naranja_MellsweetIsland_Mart_Text_0818D7E7, MSGBOX_NPC
	end


Naranja_MellsweetIsland_Mart_EventScript_Sailor::
# 29 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	msgbox Naranja_MellsweetIsland_Mart_Text_0818D841, MSGBOX_NPC
	end


	.align 2
# 33 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
Naranja_MellsweetIsland_Mart_Mart_0815A940:
# 34 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 35 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 36 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 37 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 38 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 39 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 40 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 41 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 42 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.2byte ITEM_X_DEFEND
	.2byte ITEM_NONE

Naranja_MellsweetIsland_Mart_Text_0818D758::
# 45 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.string "REVIVE is fantastic!\pGive it to a fainted POKéMON, and the\nPOKéMON will arise.\pBut be careful, REVIVE doesn’t restore\nthe used-up PP of moves.$"

Naranja_MellsweetIsland_Mart_Text_0818D7E7::
# 49 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\pOut of all the REPEL sprays, it lasts\nthe longest.$"

Naranja_MellsweetIsland_Mart_Text_0818D841::
# 53 "data/maps/Naranja_MellsweetIsland_Mart/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\nBALLS that are only made in MOSSDEEP.\pA NET BALL is effective against\nBUG-type and WATER-type POKéMON.\pA DIVE BALL works best on POKéMON at\nthe bottom of the sea.$"
