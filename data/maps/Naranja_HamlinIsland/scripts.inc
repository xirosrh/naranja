Naranja_HamlinIsland_MapScripts::
# 5 "data/maps/Naranja_HamlinIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_HamlinIsland_OnTransition
# 6 "data/maps/Naranja_HamlinIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_HamlinIsland_OnResume
	.byte 0


Naranja_HamlinIsland_OnTransition::
# 10 "data/maps/Naranja_HamlinIsland/scripts.pory"
	setflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_0815
	end


Naranja_HamlinIsland_OnResume::
# 15 "data/maps/Naranja_HamlinIsland/scripts.pory"
	setstepcallback 3
	end


Naranja_HamlinIsland_EventScript_LittleBoy1::
# 20 "data/maps/Naranja_HamlinIsland/scripts.pory"
	msgbox Naranja_HamlinIsland_Text_0816D04A, MSGBOX_NPC
	end


Naranja_HamlinIsland_EventScript_Girl1::
# 25 "data/maps/Naranja_HamlinIsland/scripts.pory"
	msgbox Naranja_HamlinIsland_Text_0816CFC5, MSGBOX_NPC
	end


Naranja_HamlinIsland_EventScript_Fisherman::
# 30 "data/maps/Naranja_HamlinIsland/scripts.pory"
	msgbox Naranja_HamlinIsland_Text_0816D08A, MSGBOX_NPC
	end


Naranja_HamlinIsland_EventScript_Sign_2::
# 35 "data/maps/Naranja_HamlinIsland/scripts.pory"
	msgbox Naranja_HamlinIsland_Text_0816D0CE, MSGBOX_SIGN
	end


Naranja_HamlinIsland_EventScript_Sign_1::
# 40 "data/maps/Naranja_HamlinIsland/scripts.pory"
	msgbox Naranja_HamlinIsland_Text_081A0D75, MSGBOX_SIGN
	end


Naranja_HamlinIsland_Text_0816CFC5::
# 44 "data/maps/Naranja_HamlinIsland/scripts.pory"
	.string "The sea between PACIFIDLOG and\nSLATEPORT has a fast-running tide.\pIf you decide to SURF, you could end\nup swept away somewhere else.$"

Naranja_HamlinIsland_Text_0816D04A::
# 48 "data/maps/Naranja_HamlinIsland/scripts.pory"
	.string "See, isn’t it neat?\nThese houses are on water!\pI was born here!$"

Naranja_HamlinIsland_Text_0816D08A::
# 52 "data/maps/Naranja_HamlinIsland/scripts.pory"
	.string "The folks of PACIFIDLOG all fish and\ndive as part of the lifestyle.$"

Naranja_HamlinIsland_Text_0816D0CE::
# 56 "data/maps/Naranja_HamlinIsland/scripts.pory"
	.string "PACIFIDLOG TOWN\p“Where the morning sun smiles upon\nthe waters.”$"

Naranja_HamlinIsland_Text_081A0D75::
# 60 "data/maps/Naranja_HamlinIsland/scripts.pory"
	.string "“Rejuvenate your tired partners!”\nPOKéMON CENTER$"
