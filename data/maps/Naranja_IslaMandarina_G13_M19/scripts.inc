Naranja_IslaMandarina_G13_M19_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M19_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId4::
# 8 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M19_Mart_08159FA8
# 13 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M19_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId5::
# 19 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	lock
# 20 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	faceplayer
# 21 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 22 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	waitmessage
# 23 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M19_Mart_08159FD0
# 24 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M19_EventScript_OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M_LocalId1::
# 30 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M19_Text_0818C24B, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M19_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId2::
# 35 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M19_Text_0818C2B5, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M19_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 40 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M19_Text_0818C32E, MSGBOX_NPC
	end


	.align 2
# 44 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
Naranja_IslaMandarina_G13_M19_Mart_08159FA8:
# 45 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_PROTEIN
# 46 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_CALCIUM
# 47 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_IRON
# 48 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_ZINC
# 49 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_CARBOS
# 50 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

	.align 2
# 53 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
Naranja_IslaMandarina_G13_M19_Mart_08159FD0:
# 54 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_X_SPEED
# 55 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 56 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_X_ATTACK
# 57 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_X_DEFEND
# 58 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 59 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 60 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M19_Text_0818C24B::
# 63 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.string "For quickly toughening up POKéMON,\nitems are the best.\pPROTEIN boosts ATTACK, and CALCIUM\nraises SP. ATK.$"

Naranja_IslaMandarina_G13_M19_Text_0818C2B5::
# 67 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.string "I want my POKéMON to have more\nendurance.\pI’m trying to decide whether to raise\nDEFENSE with IRON, or SP. DEF with ZINC.$"

Naranja_IslaMandarina_G13_M19_Text_0818C32E::
# 71 "data/maps/Naranja_IslaMandarina_G13_M19/scripts.pory"
	.string "I gave a CARBOS to my POKéMON and its\nSPEED went up.$"
