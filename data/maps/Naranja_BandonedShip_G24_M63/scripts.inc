Naranja_BandonedShip_G24_M63_MapScripts::
	.byte 0


Naranja_BandonedShip_G24_M63_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 8 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	lock
# 9 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0126
# 11 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M63_EventScript_Sub_0815EB2D
# 12 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 13 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 14 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M63_EventScript_Sub_0815EB23
# 15 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	checkflag FLAG_HIDE_BANDONED_SHIP_G24_M66_ITEM_BALL_2
# 16 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M63_EventScript_Sub_0815EB2D
# 17 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M63_Text_08198C85
# 18 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	callstd 4
# 19 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	release
	end


Naranja_BandonedShip_G24_M63_EventScript_Sub_0815EB23::
# 24 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M63_Text_08198D00
# 25 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	release
	end


Naranja_BandonedShip_G24_M63_EventScript_Sub_0815EB2D::
# 31 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M63_Text_08198D7B
# 32 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	release
	end


Naranja_BandonedShip_G24_M63_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 38 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11D
# 39 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 40 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M63_Text_08198C85::
# 44 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	.string "I’m investigating this ship on behalf\nof CAPT. STERN.\pHe also asked me to find a SCANNER,\nbut I haven’t had any success...$"

Naranja_BandonedShip_G24_M63_Text_08198D00::
# 48 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	.string "Oh! That’s a SCANNER!\pListen, can I get you to deliver that\nto CAPT. STERN?\pI want to investigate this ship a\nlittle more.$"

Naranja_BandonedShip_G24_M63_Text_08198D7B::
# 52 "data/maps/Naranja_BandonedShip_G24_M63/scripts.pory"
	.string "This ship is called S.S. CACTUS.\nIt seems to be from an earlier era.$"
