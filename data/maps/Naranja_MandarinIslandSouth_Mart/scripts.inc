Naranja_MandarinIslandSouth_Mart_MapScripts::
	.byte 0


Naranja_MandarinIslandSouth_Mart_EventScript_MartEmployee::
# 8 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	lock
# 9 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	pokemart Naranja_MandarinIslandSouth_Mart_Mart_08153ED4
# 13 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_Mart_EventScript_Boy2::
# 19 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_Mart_Text_081781C9, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_Mart_EventScript_OldWoman1::
# 24 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_Mart_Text_08178240, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_Mart_EventScript_Lass::
# 29 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_Mart_Text_081782C0, MSGBOX_NPC
	end


	.align 2
# 33 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
Naranja_MandarinIslandSouth_Mart_Mart_08153ED4:
# 34 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 35 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 36 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 37 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 38 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 40 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 41 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 42 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 43 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 44 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

Naranja_MandarinIslandSouth_Mart_Text_081781C9::
# 47 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\nis crucial.\pIt jacks up the power of some moves\neven though it’s only for one battle.$"

Naranja_MandarinIslandSouth_Mart_Text_08178240::
# 51 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.string "They don’t sell any items that will let\nyou win CONTESTS...\pIt means you have to raise POKéMON\ndiligently on an everyday basis.$"

Naranja_MandarinIslandSouth_Mart_Text_081782C0::
# 55 "data/maps/Naranja_MandarinIslandSouth_Mart/scripts.pory"
	.string "The NEST BALL works better on\nweakened POKéMON.\pVERDANTURF is the only place you can\nbuy it.$"
