Naranja_ValleCharizard_G04_M03_MapScripts::
	.byte 0


Naranja_ValleCharizard_G04_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 8 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M03_Text_08176D07, MSGBOX_NPC
	end


Naranja_ValleCharizard_G04_M03_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId2::
# 13 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	lock
# 14 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	waitse
# 16 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 17 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	msgbox Naranja_ValleCharizard_G04_M03_Text_08176D94, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	waitmoncry
# 19 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M03_Text_08176D07::
# 23 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	.string "My wife’s warming an EGG in the hot\nsprings. This is what she told me.\pShe left two POKéMON with the DAY CARE.\nAnd they discovered that EGG!$"

Naranja_ValleCharizard_G04_M03_Text_08176D94::
# 27 "data/maps/Naranja_ValleCharizard_G04_M03/scripts.pory"
	.string "ZIGZAGOON: Pshoo!$"
