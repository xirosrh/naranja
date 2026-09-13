Naranja_AbandonedShip_Corridors_B1F_MapScripts::
# 5 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_AbandonedShip_Corridors_B1F_OnResume
# 6 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_AbandonedShip_Corridors_B1F_OnLoad
	.byte 0


Naranja_AbandonedShip_Corridors_B1F_OnResume::
# 10 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_NARANJA_ABANDONED_SHIP_UNDERWATER1, 0xFF, 5, 4
	end


Naranja_AbandonedShip_Corridors_B1F_OnLoad::
# 15 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00EF
# 16 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	call_if LESS_THAN, Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815E9B6
# 17 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00EF
# 18 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	call_if EQUAL, Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815E9C0
	end


Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815E9B6::
# 23 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 0xB, 4, 0x233, 1
	return


Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815E9C0::
# 28 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 0xB, 4, 0x22B, 1
	return


Naranja_AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 33 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Corridors_B1F_Text_0819864A, MSGBOX_NPC
	end


Naranja_AbandonedShip_Corridors_B1F_EventScript_Sign_1::
# 38 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 39 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00EF
# 40 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815EA14
# 41 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY, 1
# 42 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if EQUAL, Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815EA0A
# 44 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Corridors_B1F_Text_08198692, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 46 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY, 1
# 47 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00EF
# 48 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	call Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815E9C0
# 49 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815EA0A::
# 55 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Corridors_B1F_Text_0819865C, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


Naranja_AbandonedShip_Corridors_B1F_EventScript_Sub_0815EA14::
# 61 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Corridors_B1F_Text_081986EC, MSGBOX_DEFAULT
# 62 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


Naranja_AbandonedShip_Corridors_B1F_EventScript_Sailor::
# 67 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BANDONED_SHIP_496, Naranja_AbandonedShip_Corridors_B1F_Text_0819856F, Naranja_AbandonedShip_Corridors_B1F_Text_081985C5
# 68 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox Naranja_AbandonedShip_Corridors_B1F_Text_081985D7, MSGBOX_AUTOCLOSE
	end


Naranja_AbandonedShip_Corridors_B1F_Text_0819856F::
# 72 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\nalways bring our POKéMON.\lHow about a quick battle?$"

Naranja_AbandonedShip_Corridors_B1F_Text_081985C5::
# 76 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I’m sunk!$"

Naranja_AbandonedShip_Corridors_B1F_Text_081985D7::
# 80 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship’s bottom has sunk into the\ndepths.\pIf a POKéMON knew how to go underwater,\nwe might make some progress...$"

Naranja_AbandonedShip_Corridors_B1F_Text_0819864A::
# 84 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\nIt’s a ship!$"

Naranja_AbandonedShip_Corridors_B1F_Text_0819865C::
# 88 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p“STORAGE” is painted on the door.$"

Naranja_AbandonedShip_Corridors_B1F_Text_08198692::
# 92 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\nSTORAGE KEY.\pThe inserted KEY stuck fast, but the\ndoor opened.$"

Naranja_AbandonedShip_Corridors_B1F_Text_081986EC::
# 96 "data/maps/Naranja_AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
