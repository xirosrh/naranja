Naranja_MandarinIslandNorth_Mart_MapScripts::
	.byte 0


Naranja_MandarinIslandNorth_Mart_EventScript_MartEmployee::
# 8 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	lock
# 9 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	pokemart Naranja_MandarinIslandNorth_Mart_Mart_081573D8
# 13 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_Mart_EventScript_OldMan1::
# 19 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_Mart_Text_081827D3, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_Mart_EventScript_Man4::
# 24 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_Mart_Text_0818287F, MSGBOX_NPC
	end


	.align 2
# 28 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
Naranja_MandarinIslandNorth_Mart_Mart_081573D8:
# 29 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 30 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 31 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 32 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 34 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 35 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 36 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 37 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_X_DEFEND
# 38 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 39 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 40 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

Naranja_MandarinIslandNorth_Mart_Text_081827D3::
# 43 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.string "There are items that temporarily\nelevate the stats of POKéMON.\pThe ones I know you use in battle\nare X ATTACK and X DEFEND...\pI do believe that there are others\nlike them.$"

Naranja_MandarinIslandNorth_Mart_Text_0818287F::
# 47 "data/maps/Naranja_MandarinIslandNorth_Mart/scripts.pory"
	.string "Use a certain move, or use an item\ninstead...\pThe TRAINER’s decisions determine how\nbattles turn out, I think.$"
