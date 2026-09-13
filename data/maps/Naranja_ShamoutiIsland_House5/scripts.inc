Naranja_ShamoutiIsland_House5_MapScripts::
	.byte 0


Naranja_ShamoutiIsland_House5_EventScript_Woman2::
# 8 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House5_Text_0818696D, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_House5_EventScript_Man1::
# 13 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House5_Text_081869D6, MSGBOX_NPC
	end


Naranja_ShamoutiIsland_House5_EventScript_Zigzagoon::
# 18 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	lock
# 19 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	waitse
# 21 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 22 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	msgbox Naranja_ShamoutiIsland_House5_Text_08186A4F, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_House5_Text_0818696D::
# 28 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	.string "The tree houses of FORTREE are great!\pI think it’s the number one town for\nliving together with POKéMON.$"

Naranja_ShamoutiIsland_House5_Text_081869D6::
# 32 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	.string "POKéMON and people have adapted to\nnature to survive.\pThere’s no need to make nature\nconform to the way we want to live.$"

Naranja_ShamoutiIsland_House5_Text_08186A4F::
# 36 "data/maps/Naranja_ShamoutiIsland_House5/scripts.pory"
	.string "ZIGZAGOON: Bufuu!$"
