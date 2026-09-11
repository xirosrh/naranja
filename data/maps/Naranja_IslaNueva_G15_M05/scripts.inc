Naranja_IslaNueva_G15_M05_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M05_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0079
# 11 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M05_EventScript_Sub_0815B2C7
# 12 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M05_Text_0818F991
# 13 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13F
# 15 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	callstd 0
# 17 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0079
# 18 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M05_Text_0818FA03
# 19 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M05_EventScript_Sub_0815B2C7::
# 25 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M05_Text_0818FA03
# 26 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M05_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId2::
# 32 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	lock
# 33 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	waitse
# 35 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	playmoncry SPECIES_KECLEON, 0
# 36 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M05_Text_0818FA50
# 37 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	waitmoncry
# 39 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M05_Text_0818F991::
# 43 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	.string "For thirty years I’ve remained in\nSOOTOPOLIS honing my skills.\pI developed a shattering TM.\nI bequeath it to you!$"

Naranja_IslaNueva_G15_M05_Text_0818FA03::
# 47 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	.string "TM31 contains BRICK BREAK! It’s a move\nso horrible that I can’t describe it.$"

Naranja_IslaNueva_G15_M05_Text_0818FA50::
# 51 "data/maps/Naranja_IslaNueva_G15_M05/scripts.pory"
	.string "KECLEON: Puu puhyaah.$"
