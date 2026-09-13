Naranja_SevenGrapefruitIslands_House1_MapScripts::
	.byte 0


Naranja_SevenGrapefruitIslands_House1_EventScript_Man1::
# 8 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_House1_Text_08174BA5, MSGBOX_NPC
	end


Naranja_SevenGrapefruitIslands_House1_EventScript_Woman4::
# 13 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_House1_Text_08174C0D, MSGBOX_NPC
	end


Naranja_SevenGrapefruitIslands_House1_EventScript_Zigzagoon::
# 18 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	lock
# 19 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	waitse
# 21 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 22 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_House1_Text_08174CC8, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_House1_Text_08174BA5::
# 28 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	.string "There’s a lot to be said for living on\na small island like this in harmony with\lPOKéMON and the family.$"

Naranja_SevenGrapefruitIslands_House1_Text_08174C0D::
# 32 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	.string "I came from the large port of SLATEPORT\nCITY when I married my husband here.\pLife goes by slowly on this little\nisland. But being surrounded by the\lbeautiful sea - that’s happiness, too.$"

Naranja_SevenGrapefruitIslands_House1_Text_08174CC8::
# 36 "data/maps/Naranja_SevenGrapefruitIslands_House1/scripts.pory"
	.string "ZIGZAGOON: Guguuh!$"
