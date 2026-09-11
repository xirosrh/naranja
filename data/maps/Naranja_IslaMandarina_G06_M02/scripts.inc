Naranja_IslaMandarina_G06_M02_MapScripts::
	.byte 0


Naranja_IslaMandarina_G06_M02_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	pokemart Naranja_IslaMandarina_G06_M02_Mart_08153ED4
# 13 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 14 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M02_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId2::
# 20 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M02_Text_081781C9
# 21 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G06_M02_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId3::
# 26 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M02_Text_08178240
# 27 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G06_M02_EventScript_OBJ_EVENT_GFX_LASS_LocalId4::
# 32 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M02_Text_081782C0
# 33 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	callstd 2
	end


	.align 2
# 37 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
Naranja_IslaMandarina_G06_M02_Mart_08153ED4:
# 38 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 39 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_NEST_BALL
# 40 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 41 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 42 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 43 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_AWAKENING
# 44 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 45 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 46 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_REPEL
# 47 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 48 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

Naranja_IslaMandarina_G06_M02_Text_081781C9::
# 51 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\nis crucial.\pIt jacks up the power of some moves\neven though it’s only for one battle.$"

Naranja_IslaMandarina_G06_M02_Text_08178240::
# 55 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.string "They don’t sell any items that will let\nyou win CONTESTS...\pIt means you have to raise POKéMON\ndiligently on an everyday basis.$"

Naranja_IslaMandarina_G06_M02_Text_081782C0::
# 59 "data/maps/Naranja_IslaMandarina_G06_M02/scripts.pory"
	.string "The NEST BALL works better on\nweakened POKéMON.\pVERDANTURF is the only place you can\nbuy it.$"
