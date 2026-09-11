Naranja_IslaHamlin_G00_M15_MapScripts::
# 5 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaHamlin_G00_M15_OnTransition
# 6 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_IslaHamlin_G00_M15_OnResume
	.byte 0


Naranja_IslaHamlin_G00_M15_OnTransition::
# 10 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	setflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_0815
	end


Naranja_IslaHamlin_G00_M15_OnResume::
# 15 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	setstepcallback 3
	end


Naranja_IslaHamlin_G00_M15_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId3::
# 20 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	msgbox Naranja_IslaHamlin_G00_M15_Text_0816D04A, MSGBOX_NPC
	end


Naranja_IslaHamlin_G00_M15_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId1::
# 25 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	msgbox Naranja_IslaHamlin_G00_M15_Text_0816CFC5, MSGBOX_NPC
	end


Naranja_IslaHamlin_G00_M15_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId2::
# 30 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	msgbox Naranja_IslaHamlin_G00_M15_Text_0816D08A, MSGBOX_NPC
	end


Naranja_IslaHamlin_G00_M15_EventScript_Sign_2::
# 35 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	msgbox Naranja_IslaHamlin_G00_M15_Text_0816D0CE, MSGBOX_SIGN
	end


Naranja_IslaHamlin_G00_M15_EventScript_Sign_1::
# 40 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	msgbox Naranja_IslaHamlin_G00_M15_Text_081A0D75, MSGBOX_SIGN
	end


Naranja_IslaHamlin_G00_M15_Text_0816CFC5::
# 44 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	.string "The sea between PACIFIDLOG and\nSLATEPORT has a fast-running tide.\pIf you decide to SURF, you could end\nup swept away somewhere else.$"

Naranja_IslaHamlin_G00_M15_Text_0816D04A::
# 48 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	.string "See, isn’t it neat?\nThese houses are on water!\pI was born here!$"

Naranja_IslaHamlin_G00_M15_Text_0816D08A::
# 52 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	.string "The folks of PACIFIDLOG all fish and\ndive as part of the lifestyle.$"

Naranja_IslaHamlin_G00_M15_Text_0816D0CE::
# 56 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	.string "PACIFIDLOG TOWN\p“Where the morning sun smiles upon\nthe waters.”$"

Naranja_IslaHamlin_G00_M15_Text_081A0D75::
# 60 "data/maps/Naranja_IslaHamlin_G00_M15/scripts.pory"
	.string "“Rejuvenate your tired partners!”\nPOKéMON CENTER$"
