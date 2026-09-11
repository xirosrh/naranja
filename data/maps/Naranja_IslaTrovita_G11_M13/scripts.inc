Naranja_IslaTrovita_G11_M13_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M13_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId2::
# 8 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M13_Text_081853DD
# 9 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M13_EventScript_OBJ_EVENT_GFX_SKITTY_LocalId1::
# 14 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	waitse
# 17 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 18 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M13_Text_08185410
# 19 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	waitmoncry
# 21 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M13_Text_081853DD::
# 25 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	.string "DEVON CORPORATION’s workers live in\nthis building.$"

Naranja_IslaTrovita_G11_M13_Text_08185410::
# 29 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	.string "SKITTY: Gyaaaah!$"
