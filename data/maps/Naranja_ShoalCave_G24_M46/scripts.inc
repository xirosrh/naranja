Naranja_ShoalCave_G24_M46_MapScripts::
# 5 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ShoalCave_G24_M46_OnTransition
	.byte 0


Naranja_ShoalCave_G24_M46_OnTransition::
# 9 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	special UpdateShoalTideFlag
# 10 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_083A
# 11 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E06E
# 12 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E072
	return


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E06E::
# 16 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setmaplayoutindex 0xA9
	end


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E072::
# 21 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setmaplayoutindex 0xA5
	end


Naranja_ShoalCave_G24_M46_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId2::
# 26 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	lock
# 27 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	dotimebasedevents
# 29 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_085F
# 30 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	call_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E176
# 31 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 4
# 32 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E138
# 34 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 4
# 35 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E138
# 37 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C6793
# 38 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 5
# 39 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 40 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E16C
# 41 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitemspace ITEM_SHELL_BELL, 1
# 42 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	call_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E106
# 44 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 45 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E12E
# 46 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C6808
# 47 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 49 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 50 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setorcopyvar VAR_0x8000, 0xDB
# 51 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 52 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 0
# 53 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 54 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 55 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C688E
# 56 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 4
# 57 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setflag FLAG_TEMP_2
# 58 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E106::
# 63 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 5
# 64 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 65 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E117
	return


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E117::
# 70 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 5
# 71 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 72 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E128
	return


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E128::
# 77 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setvar VAR_RESULT, 2
	return


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E12E::
# 82 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C69F5
# 83 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 4
# 84 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E138::
# 89 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 1
# 90 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 91 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E162
# 92 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 1
# 93 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 94 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E162
# 95 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C6668
# 96 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E162::
# 102 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C670D
# 103 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 4
# 104 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E16C::
# 109 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M46_Text_081C6944
# 110 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	release
	end


Naranja_ShoalCave_G24_M46_EventScript_Sub_0815E176::
# 116 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B8
# 117 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B9
# 118 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BA
# 119 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BB
# 120 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BC
# 121 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BD
# 122 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BE
# 123 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BF
# 124 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_085F
	return


Naranja_ShoalCave_G24_M46_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 129 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6B
# 130 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 131 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	callstd 1
	end


Naranja_ShoalCave_G24_M46_Text_081C6668::
# 135 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "Are you planning on going deep in\nthere?\pHow about bringing me back some\nSHOAL SALT and SHOAL SHELLS?\pI can make you something good if\nyou bring me the ingredients.$"

Naranja_ShoalCave_G24_M46_Text_081C670D::
# 139 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "If you bring me four each of the\nSHOAL SALT and SHOAL SHELLS,\lI can make you a SHELL BELL...\pYou can get those ingredients\nevery day.$"

Naranja_ShoalCave_G24_M46_Text_081C6793::
# 143 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "Oh, hey! SHOAL SALT and SHOAL\nSHELLS! And enough of them, too!\pWould you like me to make you a\nSHELL BELL with them?$"

Naranja_ShoalCave_G24_M46_Text_081C6808::
# 147 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "All righty, then! I’ll make you a\nSHELL BELL right away.\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pThere! Done!$"

Naranja_ShoalCave_G24_M46_Text_081C688E::
# 151 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "Have a POKéMON hold on to that.\nIt’ll love it, that’s for certain.\pWhy, the SHELL BELL’s chime...\nIt’s simply sublime!\pYou can get its ingredients every\nday, so I can make you more.$"

Naranja_ShoalCave_G24_M46_Text_081C6944::
# 155 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "Oh... Is that so...\nI wanted to make a SHELL BELL...$"

Naranja_ShoalCave_G24_M46_Text_081C69F5::
# 159 "data/maps/Naranja_ShoalCave_G24_M46/scripts.pory"
	.string "You don’t have space in your BAG\nif I were to make it for you.\pYou should make room and come back\nfor a SHELL BELL.$"
