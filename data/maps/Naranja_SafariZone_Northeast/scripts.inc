Naranja_SafariZone_Northeast_MapScripts::
	.byte 0


Naranja_SafariZone_Northeast_EventScript_Fisherman::
# 8 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	msgbox Naranja_SafariZone_Northeast_Text_081C3D19, MSGBOX_NPC
	end


Naranja_SafariZone_Northeast_EventScript_Man5::
# 13 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	msgbox Naranja_SafariZone_Northeast_Text_081C3D80, MSGBOX_NPC
	end


Naranja_SafariZone_Northeast_EventScript_ItemBall::
# 18 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	setorcopyvar VAR_0x8000, 0x43
# 19 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	callstd 1
	end


Naranja_SafariZone_Northeast_Text_081C3D19::
# 24 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	.string "I’m on a mission to find WATER POKéMON\nyou don’t see in HOENN.\pDo you have any idea where the lake is?$"

Naranja_SafariZone_Northeast_Text_081C3D80::
# 28 "data/maps/Naranja_SafariZone_Northeast/scripts.pory"
	.string "I’m going to catch a lot of rare POKéMON\nhere and trade them with my friends!$"
