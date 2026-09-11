Naranja_ValleCharizard_G04_M03_MapScripts::
	.byte 0


Naranja_ValleCharizard_G04_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 8 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M03_Text_08176D07
# 9 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	callstd 2
	end


Naranja_ValleCharizard_G04_M03_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId2::
# 14 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	lock
# 15 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	waitse
# 17 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 18 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M03_Text_08176D94
# 19 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	waitmoncry
# 21 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M03_Text_08176D07::
# 25 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	.string "My wife’s warming an EGG in the hot\nsprings. This is what she told me.\pShe left two POKéMON with the DAY CARE.\nAnd they discovered that EGG!$"

Naranja_ValleCharizard_G04_M03_Text_08176D94::
# 29 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	.string "ZIGZAGOON: Pshoo!$"
