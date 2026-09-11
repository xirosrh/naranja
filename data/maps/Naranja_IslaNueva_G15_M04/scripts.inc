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
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 14 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId2::
# 20 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 23 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B268
# 24 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 25 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B268
# 26 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M04_Text_0818F8D7
# 27 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B268::
# 33 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M04_Text_0818F890
# 34 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId3::
# 40 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	lock
# 41 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	faceplayer
# 42 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 43 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B290
# 44 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 45 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B290
# 46 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M04_Text_0818F96B
# 47 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M04_EventScript_Sub_0815B290::
# 53 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M04_Text_0818F8F2
# 54 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	release
	end


	.align 2
# 59 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
Naranja_IslaNueva_G15_M04_Mart_0815B234:
# 60 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 61 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 62 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_MAX_POTION
# 63 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 64 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_REVIVE
# 65 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 66 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_X_ATTACK
# 67 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_X_DEFEND
# 68 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_NONE

Naranja_IslaNueva_G15_M04_Text_0818F890::
# 71 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "PP UP is great!\pIt raises the POWER POINTS, the PP,\nof a POKéMON move.$"

Naranja_IslaNueva_G15_M04_Text_0818F8D7::
# 75 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "What... What is happening?$"

Naranja_IslaNueva_G15_M04_Text_0818F8F2::
# 79 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "Do you know FULL RESTORE?\pFull restoration of HP!\nEradication of all status problems!\pIt’s truly an item of your dreams!$"

Naranja_IslaNueva_G15_M04_Text_0818F96B::
# 83 "data/maps/Naranja_IslaNueva_G15_M04/scripts.pory"
	.string "This weather...\nDid something awaken?$"
