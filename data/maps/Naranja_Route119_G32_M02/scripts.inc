Naranja_Route119_G32_M02_MapScripts::
	.byte 0


Naranja_Route119_G32_M02_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId1::
# 8 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	msgbox Naranja_Route119_G32_M02_Text_0819F371, MSGBOX_NPC
	end


Naranja_Route119_G32_M02_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId2::
# 13 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	lock
# 14 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	waitse
# 16 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 17 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	msgbox Naranja_Route119_G32_M02_Text_0819F406, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	waitmoncry
# 19 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	release
	end


Naranja_Route119_G32_M02_Text_0819F371::
# 23 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	.string "I heard about a cave called the CAVE\nOF ORIGIN.\pPeople rumor that the spirits of\nPOKéMON are revived there.\lCould something like that really happen?$"

Naranja_Route119_G32_M02_Text_0819F406::
# 27 "data/maps/Naranja_Route119_G32_M02/scripts.pory"
	.string "WINGULL: Pihyo?$"
