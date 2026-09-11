Naranja_IslaMandarina_G13_M18_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_COOK_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M18_Text_0818C162, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId2::
# 13 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M18_Text_0818C195, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId3::
# 18 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M18_Text_0818C1D9, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId5::
# 23 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	lock
# 24 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	faceplayer
# 25 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 26 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	waitmessage
# 27 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M18_Mart_08159F44
# 28 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId4::
# 34 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	lock
# 35 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 37 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	waitmessage
# 38 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M18_Mart_08159F78
# 39 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	release
	end


	.align 2
# 44 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
Naranja_IslaMandarina_G13_M18_Mart_08159F44:
# 45 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_POKE_BALL
# 46 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 47 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 48 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 49 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 50 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 51 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 52 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 53 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 54 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_AWAKENING
# 55 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

	.align 2
# 58 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
Naranja_IslaMandarina_G13_M18_Mart_08159F78:
# 59 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_POTION
# 60 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 61 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 62 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_MAX_POTION
# 63 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_REVIVE
# 64 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_REPEL
# 65 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 66 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 67 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 68 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M18_Text_0818C162::
# 71 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.string "Learn to use items properly.\nThat’s basic, really.$"

Naranja_IslaMandarina_G13_M18_Text_0818C195::
# 75 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.string "My husband is waiting at home.\nWhat would make a good gift for him?$"

Naranja_IslaMandarina_G13_M18_Text_0818C1D9::
# 79 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.string "I’m leaving on a long journey soon.\nI need to stock up on items.$"
