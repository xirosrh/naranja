Naranja_NewIsland_House1_MapScripts::
	.byte 0


Naranja_NewIsland_House1_EventScript_BlackBelt::
# 8 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	lock
# 9 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0079
# 11 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House1_EventScript_Sub_0815B2C7
# 12 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	msgbox Naranja_NewIsland_House1_Text_0818F991, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13F
# 14 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	callstd 0
# 16 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	setflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0079
# 17 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	msgbox Naranja_NewIsland_House1_Text_0818FA03, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	release
	end


Naranja_NewIsland_House1_EventScript_Sub_0815B2C7::
# 23 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	msgbox Naranja_NewIsland_House1_Text_0818FA03, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	release
	end


Naranja_NewIsland_House1_EventScript_Kecleon1::
# 29 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	lock
# 30 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	faceplayer
# 31 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	waitse
# 32 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, 0
# 33 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	msgbox Naranja_NewIsland_House1_Text_0818FA50, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	waitmoncry
# 35 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	release
	end


Naranja_NewIsland_House1_Text_0818F991::
# 39 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	.string "For thirty years I’ve remained in\nSOOTOPOLIS honing my skills.\pI developed a shattering TM.\nI bequeath it to you!$"

Naranja_NewIsland_House1_Text_0818FA03::
# 43 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	.string "TM31 contains BRICK BREAK! It’s a move\nso horrible that I can’t describe it.$"

Naranja_NewIsland_House1_Text_0818FA50::
# 47 "data/maps/Naranja_NewIsland_House1/scripts.pory"
	.string "KECLEON: Puu puhyaah.$"
