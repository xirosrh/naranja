Naranja_IslaShamouti_G12_M09_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M09_Text_08186A61
# 9 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 14 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M09_Text_08186AD6
# 15 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId3::
# 20 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 23 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	waitmessage
# 24 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	pokemartdecoration Naranja_IslaShamouti_G12_M09_Mart_08158284
# 25 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 26 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M09_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId4::
# 32 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	lock
# 33 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 35 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	waitmessage
# 36 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	pokemartdecoration Naranja_IslaShamouti_G12_M09_Mart_081582B0
# 37 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 38 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	release
	end


	.align 2
# 43 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
Naranja_IslaShamouti_G12_M09_Mart_08158284:
# 44 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 45 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 46 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 47 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_POKE_BALL
# 48 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 49 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 50 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_NEST_BALL
# 51 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

	.align 2
# 54 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
Naranja_IslaShamouti_G12_M09_Mart_081582B0:
# 55 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 56 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 57 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 58 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 59 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 60 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 61 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_AWAKENING
# 62 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

Naranja_IslaShamouti_G12_M09_Text_08186A61::
# 65 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.string "Merchandise you buy here is sent to\nyour own PC.\pThat’s fantastic! I wish they could\nalso deliver me home like that.$"

Naranja_IslaShamouti_G12_M09_Text_08186AD6::
# 69 "data/maps/Naranja_IslaShamouti_G12_M09/scripts.pory"
	.string "I’m buying a pretty desk and I’m\nputting my cute DOLLS on it.\pIf I don’t, when I decorate my\nSECRET BASE, my DOLLS will get\ldirty or poked with splinters.$"
