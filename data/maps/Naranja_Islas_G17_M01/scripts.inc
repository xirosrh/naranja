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
	msgbox Naranja_Islas_G17_M01_Text_081C5EC6, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_007F
# 30 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE4A
# 31 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_007F
# 32 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C5F48, MSGBOX_YESNO
# 33 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 34 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE6A
# 35 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE73
# 37 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BE4A::
# 42 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C5F1B, MSGBOX_YESNO
# 43 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 44 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE6A
# 45 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 46 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BE73
# 47 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BE6A::
# 52 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C5F9D, MSGBOX_DEFAULT
	return


Naranja_Islas_G17_M01_EventScript_Sub_0815BE73::
# 57 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C6121, MSGBOX_DEFAULT
	return


Naranja_Islas_G17_M01_EventScript_Sub_0815BE7C::
# 62 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	message Naranja_Islas_G17_M01_Text_081A0C42
# 63 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	waitmessage
# 64 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	pokemartdecoration2 Naranja_Islas_G17_M01_Mart_0815BE94
# 65 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 71 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	lock
# 72 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_005E
# 74 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G17_M01_EventScript_Sub_0815BEB9
# 75 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C61E8, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BEB9::
# 81 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C6158, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10C
# 83 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 84 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 0
# 85 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C61E8, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_005E
# 87 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId3::
# 92 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	lock
# 93 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	faceplayer
# 94 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	dotimebasedevents
# 95 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_08D0
# 96 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M01_EventScript_Sub_0815BF1A
# 97 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C62DA, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	random 8
# 99 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	addvar VAR_RESULT, 0x85
# 100 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 101 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 102 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	callstd 0
# 103 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 104 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 105 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_08D0
# 106 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C6335, MSGBOX_DEFAULT
# 107 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


Naranja_Islas_G17_M01_EventScript_Sub_0815BF1A::
# 112 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	msgbox Naranja_Islas_G17_M01_Text_081C6335, MSGBOX_DEFAULT
# 113 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	release
	end


	.align 2
# 117 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
Naranja_Islas_G17_M01_Mart_0815BE94:
# 118 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 119 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_MAX_POTION
# 120 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 121 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 122 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 123 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

Naranja_Islas_G17_M01_Text_081A0C42::
# 126 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "{PLAYER}{KUN}, welcome!\pWhat can I do for you?$"

Naranja_Islas_G17_M01_Text_081C5EC6::
# 130 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Hello!\pThis is the PRETTY PETAL flower shop.\nSpreading flowers throughout the world!$"

Naranja_Islas_G17_M01_Text_081C5F1B::
# 134 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "{PLAYER}{KUN}, would you like to learn about\nBERRIES?$"

Naranja_Islas_G17_M01_Text_081C5F48::
# 138 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Your name is?\p{PLAYER}{KUN}.\nThat’s a nice name.\p{PLAYER}{KUN}, would you like to learn about\nBERRIES?$"

Naranja_Islas_G17_M01_Text_081C5F9D::
# 142 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "BERRIES grow on trees that thrive\nonly in dark, loamy soil.\pIf you take some BERRIES, be sure to\nplant one in the loamy soil again.\pA planted BERRY will soon sprout,\ngrow into a plant, flower beautifully,\lthen grow BERRIES again.\pI want to see the whole wide world\nfilled with beautiful flowers.\lThat’s my dream.\pPlease help me, {PLAYER}{KUN}. Plant BERRIES\nand bring more flowers into the world.$"

Naranja_Islas_G17_M01_Text_081C6121::
# 146 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Flowers bring so much happiness to\npeople, don’t they?$"

Naranja_Islas_G17_M01_Text_081C6158::
# 150 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "Hello!\pThe more attention you give to flowers,\nthe more beautifully they bloom.\pYou’ll like tending flowers. I’m sure\nof it. You can have this.$"

Naranja_Islas_G17_M01_Text_081C61E8::
# 154 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "While BERRY plants are growing,\nwater them with the WAILMER PAIL.\pOh, another thing.\pIf you don’t pick BERRIES for a while,\nthey’ll drop off onto the ground.\lBut they’ll sprout again.\pIsn’t that awesome?\nIt’s like they have the will to live.$"

Naranja_Islas_G17_M01_Text_081C62DA::
# 158 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "I’m trying to be like my big sisters.\nI’m growing flowers, too!\pHere you go! It’s for you!$"

Naranja_Islas_G17_M01_Text_081C6335::
# 162 "data/maps/Naranja_Islas_G17_M01/scripts.pory"
	.string "You can plant a BERRY and grow it big,\nor you can make a POKéMON hold it.\pBut now they have a machine that mixes\nup different BERRIES and makes candies\lfor POKéMON.\pI want some candy, too.$"
