Naranja_ShamoutiIsland_Mart_MapScripts::
	.byte 0


Naranja_ShamoutiIsland_Mart_EventScript_MartEmployee::
# 8 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	lock
# 9 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	pokemart Naranja_ShamoutiIsland_Mart_Mart_08158080
# 13 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_Mart_EventScript_Woman3::
# 19 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Mart_Text_081861EF, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_Mart_EventScript_Girl3::
# 24 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Mart_Text_08186251, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_Mart_EventScript_Boy2::
# 29 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Mart_Text_081862CA, MSGBOX_NPC
	end


	.align 2
# 33 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
Naranja_ShamoutiIsland_Mart_Mart_08158080:
# 34 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 35 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 36 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 37 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 38 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 39 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 40 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 41 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 42 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 43 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_NONE

Naranja_ShamoutiIsland_Mart_Text_081861EF::
# 46 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.string "SUPER REPEL lasts a long time, and\nit gets the job done.\pIt’s much better than an ordinary\nREPEL.$"

Naranja_ShamoutiIsland_Mart_Text_08186251::
# 50 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.string "I always stock up on more items than\nI’m sure I’ll need.\pYou never know what might happen.\nBetter to be safe than sorry!$"

Naranja_ShamoutiIsland_Mart_Text_081862CA::
# 54 "data/maps/Naranja_ShamoutiIsland_Mart/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\nimmediately by one level.$"
