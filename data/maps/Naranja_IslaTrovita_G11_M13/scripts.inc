Naranja_IslaTrovita_G11_M13_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M13_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId2::
# 8 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M13_Text_081853DD, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M13_EventScript_OBJ_EVENT_GFX_SKITTY_LocalId1::
# 13 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	lock
# 14 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	waitse
# 16 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 17 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M13_Text_08185410, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	waitmoncry
# 19 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M13_Text_081853DD::
# 23 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	.string "DEVON CORPORATION’s workers live in\nthis building.$"

Naranja_IslaTrovita_G11_M13_Text_08185410::
# 27 "data/maps/Naranja_IslaTrovita_G11_M13/scripts.pory"
	.string "SKITTY: Gyaaaah!$"
