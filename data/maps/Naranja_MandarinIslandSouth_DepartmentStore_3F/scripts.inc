Naranja_MandarinIslandSouth_DepartmentStore_3F_MapScripts::
	.byte 0


Naranja_MandarinIslandSouth_DepartmentStore_3F_EventScript_Woman4::
# 8 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	lock
# 9 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	pokemart Naranja_MandarinIslandSouth_DepartmentStore_3F_Mart_08159FA8
# 13 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_3F_EventScript_Woman4_2::
# 19 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	lock
# 20 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	faceplayer
# 21 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 22 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	waitmessage
# 23 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	pokemart Naranja_MandarinIslandSouth_DepartmentStore_3F_Mart_08159FD0
# 24 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStore_3F_EventScript_RunningTriathleteM::
# 30 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_3F_Text_0818C24B, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_3F_EventScript_Man3::
# 35 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_3F_Text_0818C2B5, MSGBOX_NPC
	end


Naranja_MandarinIslandSouth_DepartmentStore_3F_EventScript_Woman7::
# 40 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_DepartmentStore_3F_Text_0818C32E, MSGBOX_NPC
	end


	.align 2
# 44 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
Naranja_MandarinIslandSouth_DepartmentStore_3F_Mart_08159FA8:
# 45 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 46 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 47 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 48 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 49 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 50 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

	.align 2
# 53 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
Naranja_MandarinIslandSouth_DepartmentStore_3F_Mart_08159FD0:
# 54 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 55 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 56 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 57 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFEND
# 58 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 59 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 60 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

Naranja_MandarinIslandSouth_DepartmentStore_3F_Text_0818C24B::
# 63 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\nitems are the best.\pPROTEIN boosts ATTACK, and CALCIUM\nraises SP. ATK.$"

Naranja_MandarinIslandSouth_DepartmentStore_3F_Text_0818C2B5::
# 67 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\nendurance.\pI’m trying to decide whether to raise\nDEFENSE with IRON, or SP. DEF with ZINC.$"

Naranja_MandarinIslandSouth_DepartmentStore_3F_Text_0818C32E::
# 71 "data/maps/Naranja_MandarinIslandSouth_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON and its\nSPEED went up.$"
