Naranja_MandarinIslandNorth_House2_MapScripts::
	.byte 0


Naranja_MandarinIslandNorth_House2_EventScript_FatMan::
# 8 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	lock
# 9 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_NORTH_EVENT_COMPLETE_0102
# 11 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_House2_EventScript_Sub_0815733D
# 12 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_House2_Text_0818244E, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	checkitem ITEM_HARBOR_MAIL, 1
# 14 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 15 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_House2_EventScript_Sub_081572E5
# 16 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_House2_EventScript_Sub_081572E5::
# 21 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	playse SE_PIN
# 22 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 23 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	waitmovement LOCALID_NONE
# 24 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 25 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_House2_Text_081824D8, MSGBOX_YESNO
# 27 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 28 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_House2_EventScript_Sub_0815731B
# 29 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 30 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_House2_EventScript_Sub_08157347
	end


Naranja_MandarinIslandNorth_House2_EventScript_Sub_0815731B::
# 35 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_House2_Text_08182515, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	removeitem ITEM_HARBOR_MAIL, 1
# 37 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	setorcopyvar VAR_0x8000, 0x104
# 38 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 39 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	callstd 0
# 40 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_NORTH_EVENT_COMPLETE_0102
# 41 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	goto Naranja_MandarinIslandNorth_House2_EventScript_Sub_0815733D
	return


Naranja_MandarinIslandNorth_House2_EventScript_Sub_0815733D::
# 45 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_House2_Text_08182549, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_House2_EventScript_Sub_08157347::
# 51 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_House2_Text_08182578, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_House2_Text_0818244E::
# 56 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	.string "If I had a BIKE, it’d be easy to cycle to\nSLATEPORT for some shopping.\pI’d be able to buy HARBOR MAIL at the\nPOKéMON MART in SLATEPORT...$"

Naranja_MandarinIslandNorth_House2_Text_081824D8::
# 60 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	.string "Oh! You have HARBOR MAIL?\nWill you trade it for a COIN CASE?$"

Naranja_MandarinIslandNorth_House2_Text_08182515::
# 64 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	.string "Oh, I’m so happy!\nOkay, I’ll trade you a COIN CASE!$"

Naranja_MandarinIslandNorth_House2_Text_08182549::
# 68 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	.string "That COIN CASE can be used at the\nGAME CORNER.$"

Naranja_MandarinIslandNorth_House2_Text_08182578::
# 72 "data/maps/Naranja_MandarinIslandNorth_House2/scripts.pory"
	.string "Oh, that’s disappointing.\pA COIN CASE is needed for the\nGAME CORNER.$"
