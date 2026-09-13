Naranja_NavelIsland_Mart_MapScripts::
	.byte 0


Naranja_NavelIsland_Mart_EventScript_LittleBoy1::
# 8 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	msgbox Naranja_NavelIsland_Mart_Text_08170CEB, MSGBOX_NPC
	end


Naranja_NavelIsland_Mart_EventScript_Woman3::
# 13 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	msgbox Naranja_NavelIsland_Mart_Text_08176FF0, MSGBOX_NPC
	end


Naranja_NavelIsland_Mart_EventScript_Man3::
# 18 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	msgbox Naranja_NavelIsland_Mart_Text_081770E2, MSGBOX_NPC
	end


Naranja_NavelIsland_Mart_EventScript_Skitty::
# 23 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	lock
# 24 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	faceplayer
# 25 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	waitse
# 26 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 27 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	msgbox Naranja_NavelIsland_Mart_Text_081770D3, MSGBOX_DEFAULT
# 28 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	waitmoncry
# 29 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	release
	end


Naranja_NavelIsland_Mart_Text_08170CEB::
# 33 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	.string "The air is tasty here!$"

Naranja_NavelIsland_Mart_Text_08176FF0::
# 37 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	.string "I’m having a hard time deciding if I\nshould make my SKITTY evolve or not.\pI only have to use this MOON STONE,\nbut it’s so hard to decide...\pIf I make it evolve, it will become\nmuch stronger.\pBut it will look so different, too.$"

Naranja_NavelIsland_Mart_Text_081770D3::
# 41 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"

Naranja_NavelIsland_Mart_Text_081770E2::
# 45 "data/maps/Naranja_NavelIsland_Mart/scripts.pory"
	.string "This NUGGET I found here...\nI suppose I’ll have to sell it, seeing\las how it has no other use.$"
