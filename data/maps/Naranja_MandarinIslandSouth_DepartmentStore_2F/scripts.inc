Naranja_MandarinIslandSouth_DepartmentStore_2F_MapScripts::
	.byte 0


Naranja_MandarinIslandSouth_DepartmentStore_2F_EventScript_Cook::
# 8 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_2F_Text_0818C162, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_2F_EventScript_Woman2::
# 13 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_2F_Text_0818C195, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_2F_EventScript_Sailor::
# 18 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_2F_Text_0818C1D9, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_2F_EventScript_Woman4_2::
# 23 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	lock
# 24 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	faceplayer
# 25 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 26 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	waitmessage
# 27 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	pokemart Naranja_MandarinIslandSouth_DepartmentStore_2F_Mart_08159F44
# 28 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_2F_EventScript_Woman4::
# 34 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	lock
# 35 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 37 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	waitmessage
# 38 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	pokemart Naranja_MandarinIslandSouth_DepartmentStore_2F_Mart_08159F78
# 39 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	release
	end


	.align 2
# 44 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
Naranja_MandarinIslandSouth_DepartmentStore_2F_Mart_08159F44:
# 45 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 46 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 47 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 48 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 49 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 50 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 51 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 52 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 53 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 54 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 55 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

	.align 2
# 58 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
Naranja_MandarinIslandSouth_DepartmentStore_2F_Mart_08159F78:
# 59 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 60 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 61 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 62 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 63 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 64 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 65 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 66 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 67 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 68 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_NONE

Naranja_MandarinIslandSouth_DepartmentStore_2F_Text_0818C162::
# 71 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\nThat’s basic, really.$"

Naranja_MandarinIslandSouth_DepartmentStore_2F_Text_0818C195::
# 75 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\nWhat would make a good gift for him?$"

Naranja_MandarinIslandSouth_DepartmentStore_2F_Text_0818C1D9::
# 79 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_2F/scripts.pory"
	.string "I’m leaving on a long journey soon.\nI need to stock up on items.$"
