Naranja_IslaNueva_G15_M08_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M08_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M08_Text_0818FC92
# 9 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G15_M08_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId2::
# 14 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M08_Text_0818FD41
# 15 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G15_M08_EventScript_OBJ_EVENT_GFX_AZUMARILL_LocalId3::
# 20 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	waitse
# 23 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 24 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M08_Text_0818FDD8
# 25 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	waitmoncry
# 27 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M08_Text_0818FC92::
# 31 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	.string "Listen up, and I’ll tell you something\ngood.\pThere’s supposed to be an ancient\nruin in the sea around here.\pThere could be treasures just waiting\nto be discovered down there.$"

Naranja_IslaNueva_G15_M08_Text_0818FD41::
# 35 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	.string "Ancient treasures...\pIt would be nice if they existed, but\neven if they didn’t, it would be so\lbeautiful to take an underwater\lstroll with my POKéMON.$"

Naranja_IslaNueva_G15_M08_Text_0818FDD8::
# 39 "data/maps/Naranja_IslaNueva_G15_M08/scripts.pory"
	.string "AZUMARILL: Marurii.$"
