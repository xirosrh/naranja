Naranja_ValleCharizard_G04_M04_MapScripts::
	.byte 0


Naranja_ValleCharizard_G04_M04_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	pokemart Naranja_ValleCharizard_G04_M04_Mart_081538E4
# 13 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 14 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	callstd 4
# 15 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 20 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M04_Text_08176DA6
# 21 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	callstd 2
	end


Naranja_ValleCharizard_G04_M04_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId3::
# 26 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M04_Text_08176E1A
# 27 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	callstd 2
	end


	.align 2
# 31 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
Naranja_ValleCharizard_G04_M04_Mart_081538E4:
# 32 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 33 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 34 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_AWAKENING
# 37 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 38 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_REVIVE
# 39 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 40 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

Naranja_ValleCharizard_G04_M04_Text_08176DA6::
# 43 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.string "Use X SPEED to add to a POKéMON’s\nSPEED in battle.\pThat will help it get in the first\nstrike - a decided advantage!$"

Naranja_ValleCharizard_G04_M04_Text_08176E1A::
# 47 "data/maps/Naranja_ValleCharizard_G04_M04/scripts.pory"
	.string "On MT. CHIMNEY’s peak, there’s a local\nspecialty that you can buy only there.\pGive it to a POKéMON - it will be elated.$"
