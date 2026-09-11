Naranja_Route111_G18_M01_MapScripts::
# 5 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route111_G18_M01_OnTransition
	.byte 0


Naranja_Route111_G18_M01_OnTransition::
# 9 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0841
	end


Naranja_Route111_G18_M01_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId1::
# 14 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	loadword 0, Naranja_Route111_G18_M01_Text_081923AF
# 17 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	callstd 5
# 18 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 19 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G18_M01_EventScript_Sub_0815BFFC
# 20 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 21 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G18_M01_EventScript_Sub_0815C029
	end


Naranja_Route111_G18_M01_EventScript_Sub_0815BFFC::
# 26 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	loadword 0, Naranja_Route111_G18_M01_Text_08192423
# 27 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	closemessage
# 29 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	call Naranja_Route119_G32_M00_EventScript_Sub_081A02CA
# 30 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	loadword 0, Naranja_Route111_G18_M01_Text_0819244D
# 31 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	callstd 5
# 32 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 33 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G18_M01_EventScript_Sub_0815BFFC
# 34 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 35 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G18_M01_EventScript_Sub_0815C029
	end


Naranja_Route111_G18_M01_EventScript_Sub_0815C029::
# 40 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	loadword 0, Naranja_Route111_G18_M01_Text_081924C6
# 41 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	callstd 4
# 42 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	release
	end


Naranja_Route111_G18_M01_Text_081923AF::
# 46 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	.string "Oh, dear, dear.\nAren’t your POKéMON exhausted?\pIf you’d like, rest up here.\nThat’s a fine idea! You should do that.$"

Naranja_Route111_G18_M01_Text_08192423::
# 50 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	.string "That’s right.\nTake your time and rest up!$"

Naranja_Route111_G18_M01_Text_0819244D::
# 54 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	.string "Oh, dear, dear.\nAre your POKéMON still tired?\pYou should take another rest here.\nThat’s a fine idea. You should do that.$"

Naranja_Route111_G18_M01_Text_081924C6::
# 58 "data/maps/Naranja_Route111_G18_M01/scripts.pory"
	.string "Is that so?\nYou don’t need to be shy about it.$"
