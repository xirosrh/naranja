Naranja_IslaTrovita_G11_M16_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M16_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M16_Text_08185584
# 9 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M16_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId2::
# 14 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M16_Text_081855FA
# 15 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M16_EventScript_OBJ_EVENT_GFX_PIKACHU_LocalId3::
# 20 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	waitse
# 23 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 24 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M16_Text_0818567D
# 25 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	waitmoncry
# 27 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M16_Text_08185584::
# 31 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	.string "For my own POKéMON, I give them\nperfectly suited nicknames!\pIt’s my expression of, uh...\noriginality, yes, that’s it!$"

Naranja_IslaTrovita_G11_M16_Text_081855FA::
# 35 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	.string "But giving the name PEKACHU to a\nPIKACHU? It seems pointless.\pI suppose it is good to use a name\nthat’s easy to understand, but...$"

Naranja_IslaTrovita_G11_M16_Text_0818567D::
# 39 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	.string "PEKACHU: Peka!$"
