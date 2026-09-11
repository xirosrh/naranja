Naranja_IslaShamouti_G12_M09_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M09_Text_08186A61, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 13 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M09_Text_08186AD6, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId3::
# 18 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	lock
# 19 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 21 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	waitmessage
# 22 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	pokemartdecoration Naranja_IslaShamouti_G12_M09_Mart_08158284
# 23 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId4::
# 29 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	lock
# 30 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	faceplayer
# 31 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 32 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	waitmessage
# 33 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	pokemartdecoration Naranja_IslaShamouti_G12_M09_Mart_081582B0
# 34 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	release
	end


	.align 2
# 39 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
Naranja_IslaShamouti_G12_M09_Mart_08158284:
# 40 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 41 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 42 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 43 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 45 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 46 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_NEST_BALL
# 47 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

	.align 2
# 50 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
Naranja_IslaShamouti_G12_M09_Mart_081582B0:
# 51 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 52 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 53 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 54 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 55 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 56 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 57 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_AWAKENING
# 58 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

Naranja_IslaShamouti_G12_M09_Text_08186A61::
# 61 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.string "Merchandise you buy here is sent to\nyour own PC.\pThat’s fantastic! I wish they could\nalso deliver me home like that.$"

Naranja_IslaShamouti_G12_M09_Text_08186AD6::
# 65 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.string "I’m buying a pretty desk and I’m\nputting my cute DOLLS on it.\pIf I don’t, when I decorate my\nSECRET BASE, my DOLLS will get\ldirty or poked with splinters.$"
