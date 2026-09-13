Naranja_NewIsland_House4_MapScripts::
	.byte 0


Naranja_NewIsland_House4_EventScript_Man1::
# 8 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	msgbox Naranja_NewIsland_House4_Text_0818FC92, MSGBOX_NPC
	end


Naranja_NewIsland_House4_EventScript_Woman5::
# 13 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	msgbox Naranja_NewIsland_House4_Text_0818FD41, MSGBOX_NPC
	end


Naranja_NewIsland_House4_EventScript_Azumarill::
# 18 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	lock
# 19 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	waitse
# 21 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 22 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	msgbox Naranja_NewIsland_House4_Text_0818FDD8, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	release
	end


Naranja_NewIsland_House4_Text_0818FC92::
# 28 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	.string "Listen up, and I’ll tell you something\ngood.\pThere’s supposed to be an ancient\nruin in the sea around here.\pThere could be treasures just waiting\nto be discovered down there.$"

Naranja_NewIsland_House4_Text_0818FD41::
# 32 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	.string "Ancient treasures...\pIt would be nice if they existed, but\neven if they didn’t, it would be so\lbeautiful to take an underwater\lstroll with my POKéMON.$"

Naranja_NewIsland_House4_Text_0818FDD8::
# 36 "data/maps/Naranja_NewIsland_House4/scripts.pory"
	.string "AZUMARILL: Marurii.$"
