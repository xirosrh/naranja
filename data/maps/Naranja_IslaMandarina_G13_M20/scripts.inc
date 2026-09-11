Naranja_IslaMandarina_G13_M20_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M20_Text_0818C39C
# 9 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 14 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M20_Text_0818C41B
# 15 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId3::
# 20 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M20_Text_0818C481
# 21 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId4::
# 26 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	lock
# 27 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 29 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	waitmessage
# 30 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M20_Mart_0815A030
# 31 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 32 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId5::
# 38 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	lock
# 39 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	faceplayer
# 40 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 41 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	waitmessage
# 42 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M20_Mart_0815A054
# 43 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 44 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	release
	end


	.align 2
# 49 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
Naranja_IslaMandarina_G13_M20_Mart_0815A030:
# 50 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM38
# 51 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM25
# 52 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM14
# 53 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM15
	.2byte ITEM_NONE

	.align 2
# 56 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
Naranja_IslaMandarina_G13_M20_Mart_0815A054:
# 57 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM17
# 58 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM20
# 59 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM33
# 60 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM16
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M20_Text_0818C39C::
# 63 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.string "Hmm...\pAn attacking move...\nOr a defensive move...\pIt’s no easy matter to decide which TM\nmoves should be taught to POKéMON...$"

Naranja_IslaMandarina_G13_M20_Text_0818C41B::
# 67 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.string "There are so many different kinds of\nTM moves.\pA catalog I read said there are fifty\ndifferent kinds.$"

Naranja_IslaMandarina_G13_M20_Text_0818C481::
# 71 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.string "I’d like to get all the different TM, \nbut a POKéMON learns only four moves.$"
