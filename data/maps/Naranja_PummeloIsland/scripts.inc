Naranja_PummeloIsland_MapScripts::
# 5 "data/maps/Naranja_PummeloIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PummeloIsland_OnTransition
	.byte 0


Naranja_PummeloIsland_OnTransition::
# 9 "data/maps/Naranja_PummeloIsland/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_PummeloIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_081A02C1
	end


Naranja_PummeloIsland_EventScript_Sign_1::
# 15 "data/maps/Naranja_PummeloIsland/scripts.pory"
	msgbox Naranja_PummeloIsland_Text_0816A74D, MSGBOX_SIGN
	end


Naranja_PummeloIsland_EventScript_Sign_3::
# 20 "data/maps/Naranja_PummeloIsland/scripts.pory"
	msgbox Naranja_PummeloIsland_Text_0816A787, MSGBOX_SIGN
	end


Naranja_PummeloIsland_EventScript_Sign_4::
# 25 "data/maps/Naranja_PummeloIsland/scripts.pory"
	msgbox Naranja_PummeloIsland_Text_0816A763, MSGBOX_SIGN
	end


Naranja_PummeloIsland_EventScript_Trigger_1::
# 30 "data/maps/Naranja_PummeloIsland/scripts.pory"
	setflag FLAG_NARANJA_PUMMELO_ISLAND_EVENT_COMPLETE_081E
# 31 "data/maps/Naranja_PummeloIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


Naranja_PummeloIsland_Text_0816A74D::
# 35 "data/maps/Naranja_PummeloIsland/scripts.pory"
	.string "ENTERING VICTORY ROAD$"

Naranja_PummeloIsland_Text_0816A763::
# 39 "data/maps/Naranja_PummeloIsland/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\nCENTER GATE$"

Naranja_PummeloIsland_Text_0816A787::
# 43 "data/maps/Naranja_PummeloIsland/scripts.pory"
	.string "EVER GRANDE CITY\p“The paradise of flowers, the sea,\nand POKéMON.”$"
