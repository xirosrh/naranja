Naranja_ShoalCave_LowTideEntranceRoom_MapScripts::
# 5 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ShoalCave_LowTideEntranceRoom_OnTransition
	.byte 0


Naranja_ShoalCave_LowTideEntranceRoom_OnTransition::
# 9 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	special UpdateShoalTideFlag
# 10 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_083A
# 11 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E06E
# 12 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E072
	return


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E06E::
# 16 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex 0xA9
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E072::
# 21 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex 0xA5
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_OldMan1::
# 26 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	lock
# 27 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	dotimebasedevents
# 29 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_085F
# 30 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E176
# 31 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 4
# 32 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E138
# 34 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 4
# 35 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E138
# 37 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6793, MSGBOX_YESNO
# 38 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 39 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E16C
# 40 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitemspace ITEM_SHELL_BELL, 1
# 41 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 42 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E106
# 43 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 44 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E12E
# 45 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6808, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 47 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 48 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setorcopyvar VAR_0x8000, 0xDB
# 49 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 50 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	callstd 0
# 51 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 52 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 53 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C688E, MSGBOX_DEFAULT
# 54 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 55 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E106::
# 60 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 5
# 61 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 62 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E117
	return


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E117::
# 67 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 5
# 68 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 69 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E128
	return


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E128::
# 74 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setvar VAR_RESULT, 2
	return


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E12E::
# 79 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C69F5, MSGBOX_DEFAULT
# 80 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E138::
# 85 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 1
# 86 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 87 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E162
# 88 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 1
# 89 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 90 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E162
# 91 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6668, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E162::
# 97 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C670D, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E16C::
# 103 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6944, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
	end


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_Sub_0815E176::
# 109 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B8
# 110 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B9
# 111 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BA
# 112 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BB
# 113 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BC
# 114 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BD
# 115 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BE
# 116 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BF
# 117 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_085F
	return


Naranja_ShoalCave_LowTideEntranceRoom_EventScript_ItemBall::
# 122 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6B
# 123 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 124 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	callstd 1
	end


Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6668::
# 128 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Are you planning on going deep in\nthere?\pHow about bringing me back some\nSHOAL SALT and SHOAL SHELLS?\pI can make you something good if\nyou bring me the ingredients.$"

Naranja_ShoalCave_LowTideEntranceRoom_Text_081C670D::
# 132 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "If you bring me four each of the\nSHOAL SALT and SHOAL SHELLS,\lI can make you a SHELL BELL...\pYou can get those ingredients\nevery day.$"

Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6793::
# 136 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Oh, hey! SHOAL SALT and SHOAL\nSHELLS! And enough of them, too!\pWould you like me to make you a\nSHELL BELL with them?$"

Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6808::
# 140 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "All righty, then! I’ll make you a\nSHELL BELL right away.\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pThere! Done!$"

Naranja_ShoalCave_LowTideEntranceRoom_Text_081C688E::
# 144 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Have a POKéMON hold on to that.\nIt’ll love it, that’s for certain.\pWhy, the SHELL BELL’s chime...\nIt’s simply sublime!\pYou can get its ingredients every\nday, so I can make you more.$"

Naranja_ShoalCave_LowTideEntranceRoom_Text_081C6944::
# 148 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Oh... Is that so...\nI wanted to make a SHELL BELL...$"

Naranja_ShoalCave_LowTideEntranceRoom_Text_081C69F5::
# 152 "data/maps/Naranja_ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "You don’t have space in your BAG\nif I were to make it for you.\pYou should make room and come back\nfor a SHELL BELL.$"
