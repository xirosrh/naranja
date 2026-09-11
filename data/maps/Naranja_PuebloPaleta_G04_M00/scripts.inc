Naranja_PuebloPaleta_G04_M00_MapScripts::
	.byte 0


Naranja_PuebloPaleta_G04_M00_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId3::
# 8 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G04_M00_Text_081762A3
# 9 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	callstd 2
	end


Naranja_PuebloPaleta_G04_M00_EventScript_Trigger_1::
# 14 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	lockall
# 15 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_4051
# 16 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaTangelo_G00_M10_EventScript_Trigger_1
# 17 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	nop
# 18 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_5051
# 19 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	goto_if EQUAL, 0x086B0B00
# 20 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	nop
# 21 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G04_M00_Text_08176209
# 22 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	goto Naranja_ValleCharizard_G04_M01_EventScript_Sub_0815369F
	return


Naranja_PuebloPaleta_G04_M00_Text_08176209::
# 25 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	.string "That CHARCOAL I gave you, it’s used\nfor making herbal medicine.\pIt also does wonders when held by\na POKéMON.\pIt intensifies the power of FIRE-type\nmoves.$"

Naranja_PuebloPaleta_G04_M00_Text_081762A3::
# 29 "data/maps/Naranja_PuebloPaleta_G04_M00/scripts.pory"
	.string "Las normas son las normas\pNo puedo dejar que la gente pase\nsin pagar….            \l                           $"
