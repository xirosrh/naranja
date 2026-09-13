Naranja_PalletTown_HerbShop_MapScripts::
	.byte 0


Naranja_PalletTown_HerbShop_EventScript_Boy5::
# 8 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	msgbox Naranja_PalletTown_HerbShop_Text_081762A3, MSGBOX_NPC
	end


Naranja_PalletTown_HerbShop_EventScript_Trigger_1::
# 13 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	lockall
# 14 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_4051
# 15 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	goto_if LESS_THAN, Naranja_TangeloIsland_EventScript_Trigger_1
# 16 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	nop
# 17 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_5051
# 18 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	goto_if EQUAL, 0x086B0B00
# 19 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	nop
# 20 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	msgbox Naranja_PalletTown_HerbShop_Text_08176209, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	release
	end


Naranja_PalletTown_HerbShop_Text_08176209::
# 25 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it’s used\nfor making herbal medicine.\pIt also does wonders when held by\na POKéMON.\pIt intensifies the power of FIRE-type\nmoves.$"

Naranja_PalletTown_HerbShop_Text_081762A3::
# 29 "data/maps/Naranja_PalletTown_HerbShop/scripts.pory"
	.string "Las normas son las normas\pNo puedo dejar que la gente pase\nsin pagar….            \l                           $"
