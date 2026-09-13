Naranja_Route130_MapScripts::
# 5 "data/maps/Naranja_Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route130_OnTransition
	.byte 0


Naranja_Route130_OnTransition::
# 9 "data/maps/Naranja_Route130/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 10 "data/maps/Naranja_Route130/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_Route130/scripts.pory"
	goto_if EQUAL, Naranja_Route130_EventScript_Sub_0815240C
# 12 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_11
# 13 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 14 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 15 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 16 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 17 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 18 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 19 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 20 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 21 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 22 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 23 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 24 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 25 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 26 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 27 "data/maps/Naranja_Route130/scripts.pory"
	setflag FLAG_HIDE_NARANJA_VICTORY_ROAD_B1F_BREAKABLE_ROCK
# 28 "data/maps/Naranja_Route130/scripts.pory"
	setmaplayoutindex 0x108
	end


Naranja_Route130_EventScript_Sub_0815240C::
# 33 "data/maps/Naranja_Route130/scripts.pory"
	setmaplayoutindex 0x2E
	end


Naranja_Route130_EventScript_SwimmerM::
# 38 "data/maps/Naranja_Route130/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE130_165, Naranja_Route130_Text_081C2401, Naranja_Route130_Text_081C245D
# 39 "data/maps/Naranja_Route130/scripts.pory"
	msgbox Naranja_Route130_Text_081C2479, MSGBOX_AUTOCLOSE
	end


Naranja_Route130_EventScript_SwimmerF::
# 44 "data/maps/Naranja_Route130/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE130_455, Naranja_Route130_Text_081C24DC, Naranja_Route130_Text_081C2525
# 45 "data/maps/Naranja_Route130/scripts.pory"
	msgbox Naranja_Route130_Text_081C256E, MSGBOX_AUTOCLOSE
	end


Naranja_Route130_Text_081C2401::
# 49 "data/maps/Naranja_Route130/scripts.pory"
	.string "What a surprise! I didn’t expect to\nsee a TRAINER out in the sea.\pI think we should battle!$"

Naranja_Route130_Text_081C245D::
# 53 "data/maps/Naranja_Route130/scripts.pory"
	.string "This kid’s awfully tough...$"

Naranja_Route130_Text_081C2479::
# 57 "data/maps/Naranja_Route130/scripts.pory"
	.string "Your eyes have that look of someone\nwho’s experienced harsh challenges\land won. It suits you well!$"

Naranja_Route130_Text_081C24DC::
# 61 "data/maps/Naranja_Route130/scripts.pory"
	.string "In the deep blue sea,\nmy shattered blue heart finds\lcomfort among waves.$"

Naranja_Route130_Text_081C2525::
# 65 "data/maps/Naranja_Route130/scripts.pory"
	.string "Like the vast blue sea,\nthe world of POKéMON spans\ldepths beyond belief.$"

Naranja_Route130_Text_081C256E::
# 69 "data/maps/Naranja_Route130/scripts.pory"
	.string "The world’s children dream\nof one day becoming the\lPOKéMON CHAMPION.$"
