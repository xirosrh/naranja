Naranja_IslaTrovita_G11_M16_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M16_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M16_Text_08185584, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M16_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId2::
# 13 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M16_Text_081855FA, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M16_EventScript_OBJ_EVENT_GFX_PIKACHU_LocalId3::
# 18 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	lock
# 19 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	waitse
# 21 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 22 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M16_Text_0818567D, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M16_Text_08185584::
# 28 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	.string "For my own POKéMON, I give them\nperfectly suited nicknames!\pIt’s my expression of, uh...\noriginality, yes, that’s it!$"

Naranja_IslaTrovita_G11_M16_Text_081855FA::
# 32 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	.string "But giving the name PEKACHU to a\nPIKACHU? It seems pointless.\pI suppose it is good to use a name\nthat’s easy to understand, but...$"

Naranja_IslaTrovita_G11_M16_Text_0818567D::
# 36 "data/maps/Naranja_IslaTrovita_G11_M16/scripts.pory"
	.string "PEKACHU: Peka!$"
