Naranja_IslaShamouti_G12_M04_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M04_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	pokemart Naranja_IslaShamouti_G12_M04_Mart_08158080
# 13 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M04_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 19 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M04_Text_081861EF, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M04_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId3::
# 24 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M04_Text_08186251, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M04_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId4::
# 29 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M04_Text_081862CA, MSGBOX_NPC
	end


	.align 2
# 33 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
Naranja_IslaShamouti_G12_M04_Mart_08158080:
# 34 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 35 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 36 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 37 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 38 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 39 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 40 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_AWAKENING
# 41 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_REVIVE
# 42 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 43 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_NONE

Naranja_IslaShamouti_G12_M04_Text_081861EF::
# 46 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.string "SUPER REPEL lasts a long time, and\nit gets the job done.\pIt’s much better than an ordinary\nREPEL.$"

Naranja_IslaShamouti_G12_M04_Text_08186251::
# 50 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.string "I always stock up on more items than\nI’m sure I’ll need.\pYou never know what might happen.\nBetter to be safe than sorry!$"

Naranja_IslaShamouti_G12_M04_Text_081862CA::
# 54 "data/maps/Naranja_IslaShamouti_G12_M04/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\nimmediately by one level.$"
