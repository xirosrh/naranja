Naranja_IslaMandarin_G10_M07_MapScripts::
	.byte 0


Naranja_IslaMandarin_G10_M07_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	pokemart Naranja_IslaMandarin_G10_M07_Mart_081573D8
# 13 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 14 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M07_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 20 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M07_Text_081827D3
# 21 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M07_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 26 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M07_Text_0818287F
# 27 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	callstd 2
	end


	.align 2
# 31 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
Naranja_IslaMandarin_G10_M07_Mart_081573D8:
# 32 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 34 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 35 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_AWAKENING
# 38 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_X_SPEED
# 39 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_X_ATTACK
# 40 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_X_DEFEND
# 41 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 42 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 43 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

Naranja_IslaMandarin_G10_M07_Text_081827D3::
# 46 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.string "There are items that temporarily\nelevate the stats of POKéMON.\pThe ones I know you use in battle\nare X ATTACK and X DEFEND...\pI do believe that there are others\nlike them.$"

Naranja_IslaMandarin_G10_M07_Text_0818287F::
# 50 "data/maps/Naranja_IslaMandarin_G10_M07/scripts.pory"
	.string "Use a certain move, or use an item\ninstead...\pThe TRAINER’s decisions determine how\nbattles turn out, I think.$"
