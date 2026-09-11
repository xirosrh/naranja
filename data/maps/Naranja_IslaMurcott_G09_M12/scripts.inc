Naranja_IslaMurcott_G09_M12_MapScripts::
	.byte 0


Naranja_IslaMurcott_G09_M12_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	pokemart Naranja_IslaMurcott_G09_M12_Mart_08156428
# 13 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 14 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M12_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId2::
# 20 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M12_Text_08180730
# 21 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M12_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 26 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M12_Text_0818079D
# 27 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	callstd 2
	end


	.align 2
# 31 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
Naranja_IslaMurcott_G09_M12_Mart_08156428:
# 32 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 34 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_POTION
# 35 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 36 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 37 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 39 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_REPEL
# 40 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

Naranja_IslaMurcott_G09_M12_Text_08180730::
# 43 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.string "The MARKET does have some interesting\nmerchandise.\pBut there are some items you can only\nget at a POKé MART.$"

Naranja_IslaMurcott_G09_M12_Text_0818079D::
# 47 "data/maps/Naranja_IslaMurcott_G09_M12/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\nat catching POKéMON.\pWith this, I should be able to get that\nelusive POKéMON...$"
