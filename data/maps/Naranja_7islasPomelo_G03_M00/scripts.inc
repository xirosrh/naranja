Naranja_7islasPomelo_G03_M00_MapScripts::
	.byte 0


Naranja_7islasPomelo_G03_M00_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId2::
# 8 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M00_Text_08174BA5, MSGBOX_NPC
	end


Naranja_7islasPomelo_G03_M00_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId1::
# 13 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M00_Text_08174C0D, MSGBOX_NPC
	end


Naranja_7islasPomelo_G03_M00_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId3::
# 18 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	lock
# 19 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	waitse
# 21 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 22 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M00_Text_08174CC8, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M00_Text_08174BA5::
# 28 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	.string "There’s a lot to be said for living on\na small island like this in harmony with\lPOKéMON and the family.$"

Naranja_7islasPomelo_G03_M00_Text_08174C0D::
# 32 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	.string "I came from the large port of SLATEPORT\nCITY when I married my husband here.\pLife goes by slowly on this little\nisland. But being surrounded by the\lbeautiful sea - that’s happiness, too.$"

Naranja_7islasPomelo_G03_M00_Text_08174CC8::
# 36 "data/maps/Naranja_7islasPomelo_G03_M00/scripts.pory"
	.string "ZIGZAGOON: Guguuh!$"
