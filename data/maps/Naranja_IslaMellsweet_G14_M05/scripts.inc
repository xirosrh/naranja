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
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 19 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M05_Text_0818D758, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId3::
# 24 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M05_Text_0818D7E7, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M05_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId4::
# 29 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M05_Text_0818D841, MSGBOX_NPC
	end


	.align 2
# 33 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
Naranja_IslaMellsweet_G14_M05_Mart_0815A940:
# 34 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 35 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_NET_BALL
# 36 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 37 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 38 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 39 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_REVIVE
# 40 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 41 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_X_ATTACK
# 42 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.2byte ITEM_X_DEFEND
	.2byte ITEM_NONE

Naranja_IslaMellsweet_G14_M05_Text_0818D758::
# 45 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.string "REVIVE is fantastic!\pGive it to a fainted POKéMON, and the\nPOKéMON will arise.\pBut be careful, REVIVE doesn’t restore\nthe used-up PP of moves.$"

Naranja_IslaMellsweet_G14_M05_Text_0818D7E7::
# 49 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\pOut of all the REPEL sprays, it lasts\nthe longest.$"

Naranja_IslaMellsweet_G14_M05_Text_0818D841::
# 53 "data/maps/Naranja_IslaMellsweet_G14_M05/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\nBALLS that are only made in MOSSDEEP.\pA NET BALL is effective against\nBUG-type and WATER-type POKéMON.\pA DIVE BALL works best on POKéMON at\nthe bottom of the sea.$"
