Naranja_IslaMellsweet_G14_M05_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	pokemart Naranja_IslaMellsweet_G14_M05_Mart_0815A940
# 13 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 14 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 20 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M05_Text_0818D758
# 21 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId3::
# 26 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M05_Text_0818D7E7
# 27 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId4::
# 32 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M05_Text_0818D841
# 33 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	callstd 2
	end


	.align 2
# 37 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
Naranja_IslaMellsweet_G14_M05_Mart_0815A940:
# 38 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 39 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_NET_BALL
# 40 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 41 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 42 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 43 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_REVIVE
# 44 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 45 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_X_ATTACK
# 46 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_X_DEFEND
	.2byte ITEM_NONE

Naranja_IslaMellsweet_G14_M05_Text_0818D758::
# 49 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.string "REVIVE is fantastic!\pGive it to a fainted POKéMON, and the\nPOKéMON will arise.\pBut be careful, REVIVE doesn’t restore\nthe used-up PP of moves.$"

Naranja_IslaMellsweet_G14_M05_Text_0818D7E7::
# 53 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\pOut of all the REPEL sprays, it lasts\nthe longest.$"

Naranja_IslaMellsweet_G14_M05_Text_0818D841::
# 57 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\nBALLS that are only made in MOSSDEEP.\pA NET BALL is effective against\nBUG-type and WATER-type POKéMON.\pA DIVE BALL works best on POKéMON at\nthe bottom of the sea.$"
