Naranja_MurcottIsland_Mart_MapScripts::
	.byte 0


Naranja_MurcottIsland_Mart_EventScript_MartEmployee::
# 8 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	lock
# 9 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	pokemart Naranja_MurcottIsland_Mart_Mart_08156428
# 13 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	release
	end


Naranja_MurcottIsland_Mart_EventScript_BlackBelt::
# 19 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	msgbox Naranja_MurcottIsland_Mart_Text_08180730, MSGBOX_NPC
	end


Naranja_MurcottIsland_Mart_EventScript_Man4::
# 24 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	msgbox Naranja_MurcottIsland_Mart_Text_0818079D, MSGBOX_NPC
	end


	.align 2
# 28 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
Naranja_MurcottIsland_Mart_Mart_08156428:
# 29 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 30 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 31 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_POTION
# 32 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 33 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 34 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 35 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 36 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 37 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Naranja_MurcottIsland_Mart_Text_08180730::
# 40 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.string "The MARKET does have some interesting\nmerchandise.\pBut there are some items you can only\nget at a POKé MART.$"

Naranja_MurcottIsland_Mart_Text_0818079D::
# 44 "data/maps/Naranja_MurcottIsland_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\nat catching POKéMON.\pWith this, I should be able to get that\nelusive POKéMON...$"
