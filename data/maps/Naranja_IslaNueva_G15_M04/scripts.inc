Naranja_IslaNueva_G15_M04_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M04_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	pokemart Naranja_IslaNueva_G15_M04_Mart_0815B234
# 13 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId2::
# 19 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	lock
# 20 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	faceplayer
# 21 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 22 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B268
# 23 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 24 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B268
# 25 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M04_Text_0818F8D7, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B268::
# 31 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M04_Text_0818F890, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId3::
# 37 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	lock
# 38 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	faceplayer
# 39 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 40 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B290
# 41 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 42 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B290
# 43 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M04_Text_0818F96B, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B290::
# 49 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M04_Text_0818F8F2, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


	.align 2
# 54 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
Naranja_IslaNueva_G15_M04_Mart_0815B234:
# 55 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 56 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 57 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_MAX_POTION
# 58 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 59 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_REVIVE
# 60 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 61 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_X_ATTACK
# 62 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_X_DEFEND
# 63 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_NONE

Naranja_IslaNueva_G15_M04_Text_0818F890::
# 66 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "PP UP is great!\pIt raises the POWER POINTS, the PP,\nof a POKéMON move.$"

Naranja_IslaNueva_G15_M04_Text_0818F8D7::
# 70 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "What... What is happening?$"

Naranja_IslaNueva_G15_M04_Text_0818F8F2::
# 74 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "Do you know FULL RESTORE?\pFull restoration of HP!\nEradication of all status problems!\pIt’s truly an item of your dreams!$"

Naranja_IslaNueva_G15_M04_Text_0818F96B::
# 78 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "This weather...\nDid something awaken?$"
