Naranja_IslaMandarina_G13_M18_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_COOK_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M18_Text_0818C162
# 9 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId2::
# 14 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M18_Text_0818C195
# 15 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId3::
# 20 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M18_Text_0818C1D9
# 21 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId5::
# 26 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	lock
# 27 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 29 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	waitmessage
# 30 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M18_Mart_08159F44
# 31 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 32 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M18_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId4::
# 38 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	lock
# 39 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	faceplayer
# 40 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 41 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	waitmessage
# 42 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M18_Mart_08159F78
# 43 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 44 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	release
	end


	.align 2
# 49 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
Naranja_IslaMandarina_G13_M18_Mart_08159F44:
# 50 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_POKE_BALL
# 51 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 52 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 53 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 54 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 55 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 56 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 57 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 58 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 59 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_AWAKENING
# 60 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

	.align 2
# 63 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
Naranja_IslaMandarina_G13_M18_Mart_08159F78:
# 64 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_POTION
# 65 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 66 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 67 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_MAX_POTION
# 68 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_REVIVE
# 69 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_REPEL
# 70 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 71 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 72 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 73 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M18_Text_0818C162::
# 76 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.string "Learn to use items properly.\nThat’s basic, really.$"

Naranja_IslaMandarina_G13_M18_Text_0818C195::
# 80 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.string "My husband is waiting at home.\nWhat would make a good gift for him?$"

Naranja_IslaMandarina_G13_M18_Text_0818C1D9::
# 84 "data/maps/Naranja_IslaMandarina_G13_M18/scripts.pory"
	.string "I’m leaving on a long journey soon.\nI need to stock up on items.$"
