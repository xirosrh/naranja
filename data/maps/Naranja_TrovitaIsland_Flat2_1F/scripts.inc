Naranja_TrovitaIsland_Flat2_1F_MapScripts::
	.byte 0


Naranja_TrovitaIsland_Flat2_1F_EventScript_OldWoman2::
# 8 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	msgbox Naranja_TrovitaIsland_Flat2_1F_Text_081853DD, MSGBOX_NPC
	end


Naranja_TrovitaIsland_Flat2_1F_EventScript_Skitty::
# 13 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	lock
# 14 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	waitse
# 16 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 17 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	msgbox Naranja_TrovitaIsland_Flat2_1F_Text_08185410, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	waitmoncry
# 19 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Flat2_1F_Text_081853DD::
# 23 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	.string "DEVON CORPORATION’s workers live in\nthis building.$"

Naranja_TrovitaIsland_Flat2_1F_Text_08185410::
# 27 "data/maps/Naranja_TrovitaIsland_Flat2_1F/scripts.pory"
	.string "SKITTY: Gyaaaah!$"
