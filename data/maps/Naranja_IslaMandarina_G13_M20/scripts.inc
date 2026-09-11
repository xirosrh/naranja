Naranja_IslaMandarina_G13_M20_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M20_Text_0818C39C, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 13 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M20_Text_0818C41B, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId3::
# 18 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M20_Text_0818C481, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId4::
# 23 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	lock
# 24 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	faceplayer
# 25 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 26 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	waitmessage
# 27 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M20_Mart_0815A030
# 28 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M20_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId5::
# 34 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	lock
# 35 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 37 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	waitmessage
# 38 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	pokemart Naranja_IslaMandarina_G13_M20_Mart_0815A054
# 39 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	release
	end


	.align 2
# 44 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
Naranja_IslaMandarina_G13_M20_Mart_0815A030:
# 45 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM38
# 46 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM25
# 47 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM14
# 48 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM15
	.2byte ITEM_NONE

	.align 2
# 51 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
Naranja_IslaMandarina_G13_M20_Mart_0815A054:
# 52 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM17
# 53 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM20
# 54 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM33
# 55 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.2byte ITEM_TM16
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M20_Text_0818C39C::
# 58 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.string "Hmm...\pAn attacking move...\nOr a defensive move...\pIt’s no easy matter to decide which TM\nmoves should be taught to POKéMON...$"

Naranja_IslaMandarina_G13_M20_Text_0818C41B::
# 62 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.string "There are so many different kinds of\nTM moves.\pA catalog I read said there are fifty\ndifferent kinds.$"

Naranja_IslaMandarina_G13_M20_Text_0818C481::
# 66 "data/maps/Naranja_IslaMandarina_G13_M20/scripts.pory"
	.string "I’d like to get all the different TM, \nbut a POKéMON learns only four moves.$"
