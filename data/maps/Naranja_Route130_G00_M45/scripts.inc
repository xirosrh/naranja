Naranja_Route130_G00_M45_MapScripts::
# 5 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route130_G00_M45_OnTransition
	.byte 0


Naranja_Route130_G00_M45_OnTransition::
# 9 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 10 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	goto_if EQUAL, Naranja_Route130_G00_M45_EventScript_Sub_0815240C
# 12 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_11
# 13 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_12
# 14 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_13
# 15 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_14
# 16 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_15
# 17 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_16
# 18 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_17
# 19 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_18
# 20 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_19
# 21 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_1A
# 22 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_1B
# 23 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_1C
# 24 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_1D
# 25 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_1E
# 26 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_TEMP_1F
# 27 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_G24_M44_BREAKABLE_ROCK
# 28 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setmaplayoutindex 0x108
	end


Naranja_Route130_G00_M45_EventScript_Sub_0815240C::
# 33 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	setmaplayoutindex 0x2E
	end


Naranja_Route130_G00_M45_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 38 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE130_165, LOCALID_NONE, Naranja_Route130_G00_M45_Text_081C2401, Naranja_Route130_G00_M45_Text_081C245D
# 39 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	loadword 0, Naranja_Route130_G00_M45_Text_081C2479
# 40 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	callstd 6
	end


Naranja_Route130_G00_M45_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 45 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE130_455, LOCALID_NONE, Naranja_Route130_G00_M45_Text_081C24DC, Naranja_Route130_G00_M45_Text_081C2525
# 46 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	loadword 0, Naranja_Route130_G00_M45_Text_081C256E
# 47 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	callstd 6
	end


Naranja_Route130_G00_M45_Text_081C2401::
# 51 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	.string "What a surprise! I didn’t expect to\nsee a TRAINER out in the sea.\pI think we should battle!$"

Naranja_Route130_G00_M45_Text_081C245D::
# 55 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	.string "This kid’s awfully tough...$"

Naranja_Route130_G00_M45_Text_081C2479::
# 59 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	.string "Your eyes have that look of someone\nwho’s experienced harsh challenges\land won. It suits you well!$"

Naranja_Route130_G00_M45_Text_081C24DC::
# 63 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	.string "In the deep blue sea,\nmy shattered blue heart finds\lcomfort among waves.$"

Naranja_Route130_G00_M45_Text_081C2525::
# 67 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	.string "Like the vast blue sea,\nthe world of POKéMON spans\ldepths beyond belief.$"

Naranja_Route130_G00_M45_Text_081C256E::
# 71 "data/maps/Naranja_Route130_G00_M45/scripts.pory"
	.string "The world’s children dream\nof one day becoming the\lPOKéMON CHAMPION.$"
