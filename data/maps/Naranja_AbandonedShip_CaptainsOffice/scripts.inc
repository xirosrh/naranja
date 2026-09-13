Naranja_AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0


Naranja_AbandonedShip_CaptainsOffice_EventScript_Scientist1::
# 8 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 9 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0126
# 11 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_CaptainsOffice_EventScript_Sub_0815EB2D
# 12 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 13 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 14 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_CaptainsOffice_EventScript_Sub_0815EB23
# 15 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS_ITEM_BALL_2
# 16 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_CaptainsOffice_EventScript_Sub_0815EB2D
# 17 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Naranja_AbandonedShip_CaptainsOffice_Text_08198C85, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


Naranja_AbandonedShip_CaptainsOffice_EventScript_Sub_0815EB23::
# 23 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Naranja_AbandonedShip_CaptainsOffice_Text_08198D00, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


Naranja_AbandonedShip_CaptainsOffice_EventScript_Sub_0815EB2D::
# 29 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Naranja_AbandonedShip_CaptainsOffice_Text_08198D7B, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


Naranja_AbandonedShip_CaptainsOffice_EventScript_ItemBall::
# 35 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11D
# 36 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 37 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	callstd 1
	end


Naranja_AbandonedShip_CaptainsOffice_Text_08198C85::
# 41 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I’m investigating this ship on behalf\nof CAPT. STERN.\pHe also asked me to find a SCANNER,\nbut I haven’t had any success...$"

Naranja_AbandonedShip_CaptainsOffice_Text_08198D00::
# 45 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That’s a SCANNER!\pListen, can I get you to deliver that\nto CAPT. STERN?\pI want to investigate this ship a\nlittle more.$"

Naranja_AbandonedShip_CaptainsOffice_Text_08198D7B::
# 49 "data/maps/Naranja_AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\nIt seems to be from an earlier era.$"
