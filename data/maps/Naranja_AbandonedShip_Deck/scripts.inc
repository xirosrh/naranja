Naranja_AbandonedShip_Deck_MapScripts::
# 5 "data/maps/Naranja_AbandonedShip_Deck/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_AbandonedShip_Deck_OnTransition
	.byte 0


Naranja_AbandonedShip_Deck_OnTransition::
# 9 "data/maps/Naranja_AbandonedShip_Deck/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_083E
	end

