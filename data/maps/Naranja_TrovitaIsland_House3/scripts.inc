Naranja_TrovitaIsland_House3_MapScripts::
	.byte 0


Naranja_TrovitaIsland_House3_EventScript_OldMan2::
# 8 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	msgbox Naranja_TrovitaIsland_House3_Text_08185584, MSGBOX_NPC
	end


Naranja_TrovitaIsland_House3_EventScript_OldWoman2::
# 13 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	msgbox Naranja_TrovitaIsland_House3_Text_081855FA, MSGBOX_NPC
	end


Naranja_TrovitaIsland_House3_EventScript_Pikachu::
# 18 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	lock
# 19 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	waitse
# 21 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 22 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	msgbox Naranja_TrovitaIsland_House3_Text_0818567D, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	release
	end


Naranja_TrovitaIsland_House3_Text_08185584::
# 28 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	.string "For my own POKéMON, I give them\nperfectly suited nicknames!\pIt’s my expression of, uh...\noriginality, yes, that’s it!$"

Naranja_TrovitaIsland_House3_Text_081855FA::
# 32 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	.string "But giving the name PEKACHU to a\nPIKACHU? It seems pointless.\pI suppose it is good to use a name\nthat’s easy to understand, but...$"

Naranja_TrovitaIsland_House3_Text_0818567D::
# 36 "data/maps/Naranja_TrovitaIsland_House3/scripts.pory"
	.string "PEKACHU: Peka!$"
