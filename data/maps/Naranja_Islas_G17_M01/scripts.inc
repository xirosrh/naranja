Naranja_Islas_G17_M01_MapScripts::
# 5 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Islas_G17_M01_OnTransition
	.byte 0


Naranja_Islas_G17_M01_OnTransition::
# 9 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_083C
# 10 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_007F
# 11 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G17_M01_EventScript_Sub_0815BE03
# 12 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 13 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G17_M01_EventScript_Sub_0815BE03
# 14 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_TEMP_1
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BE03::
# 19 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLAS_G17_M01_WOMAN_3, 4, 6
	end


Naranja_Islas_G17_M01_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 24 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	lock
# 25 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	faceplayer
# 26 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_TEMP_1
# 27 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE7C
# 28 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C5EC6
# 29 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 30 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_007F
# 31 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE4A
# 32 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_007F
# 33 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C5F48
# 34 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 5
# 35 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 36 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE6A
# 37 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE73
# 39 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BE4A::
# 44 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C5F1B
# 45 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 5
# 46 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 47 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE6A
# 48 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 49 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE73
# 50 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BE6A::
# 55 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C5F9D
# 56 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
	return


Naranja_Islas_G17_M01_EventScript_Sub_0815BE73::
# 61 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C6121
# 62 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
	return


Naranja_Islas_G17_M01_EventScript_Sub_0815BE7C::
# 67 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	message Naranja_Islas_G17_M01_Text_081A0C42
# 68 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	waitmessage
# 69 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	pokemartdecoration2 Naranja_Islas_G17_M01_Mart_0815BE94
# 70 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 71 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 77 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	lock
# 78 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	faceplayer
# 79 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_005E
# 80 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G17_M01_EventScript_Sub_0815BEB9
# 81 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C61E8
# 82 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BEB9::
# 88 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C6158
# 89 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10C
# 91 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 92 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 0
# 93 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C61E8
# 94 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_005E
# 96 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId3::
# 101 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	lock
# 102 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	faceplayer
# 103 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	dotimebasedevents
# 104 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_08D0
# 105 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BF1A
# 106 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C62DA
# 107 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 108 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	random 8
# 109 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	addvar VAR_RESULT, 0x85
# 110 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 111 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 112 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 0
# 113 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 114 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 115 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_08D0
# 116 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C6335
# 117 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 118 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BF1A::
# 123 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	loadword 0, Naranja_Islas_G17_M01_Text_081C6335
# 124 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 4
# 125 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


	.align 2
# 129 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
Naranja_Islas_G17_M01_Mart_0815BE94:
# 130 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 131 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_MAX_POTION
# 132 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 133 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 134 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 135 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

Naranja_Islas_G17_M01_Text_081A0C42::
# 138 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "{PLAYER}{KUN}, welcome!\pWhat can I do for you?$"

Naranja_Islas_G17_M01_Text_081C5EC6::
# 142 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Hello!\pThis is the PRETTY PETAL flower shop.\nSpreading flowers throughout the world!$"

Naranja_Islas_G17_M01_Text_081C5F1B::
# 146 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "{PLAYER}{KUN}, would you like to learn about\nBERRIES?$"

Naranja_Islas_G17_M01_Text_081C5F48::
# 150 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Your name is?\p{PLAYER}{KUN}.\nThat’s a nice name.\p{PLAYER}{KUN}, would you like to learn about\nBERRIES?$"

Naranja_Islas_G17_M01_Text_081C5F9D::
# 154 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "BERRIES grow on trees that thrive\nonly in dark, loamy soil.\pIf you take some BERRIES, be sure to\nplant one in the loamy soil again.\pA planted BERRY will soon sprout,\ngrow into a plant, flower beautifully,\lthen grow BERRIES again.\pI want to see the whole wide world\nfilled with beautiful flowers.\lThat’s my dream.\pPlease help me, {PLAYER}{KUN}. Plant BERRIES\nand bring more flowers into the world.$"

Naranja_Islas_G17_M01_Text_081C6121::
# 158 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Flowers bring so much happiness to\npeople, don’t they?$"

Naranja_Islas_G17_M01_Text_081C6158::
# 162 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Hello!\pThe more attention you give to flowers,\nthe more beautifully they bloom.\pYou’ll like tending flowers. I’m sure\nof it. You can have this.$"

Naranja_Islas_G17_M01_Text_081C61E8::
# 166 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "While BERRY plants are growing,\nwater them with the WAILMER PAIL.\pOh, another thing.\pIf you don’t pick BERRIES for a while,\nthey’ll drop off onto the ground.\lBut they’ll sprout again.\pIsn’t that awesome?\nIt’s like they have the will to live.$"

Naranja_Islas_G17_M01_Text_081C62DA::
# 170 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "I’m trying to be like my big sisters.\nI’m growing flowers, too!\pHere you go! It’s for you!$"

Naranja_Islas_G17_M01_Text_081C6335::
# 174 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "You can plant a BERRY and grow it big,\nor you can make a POKéMON hold it.\pBut now they have a machine that mixes\nup different BERRIES and makes candies\lfor POKéMON.\pI want some candy, too.$"
