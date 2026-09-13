Naranja_OrangeIslands_PrettyPetalFlowerShop_MapScripts::
# 5 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_OrangeIslands_PrettyPetalFlowerShop_OnTransition
	.byte 0


Naranja_OrangeIslands_PrettyPetalFlowerShop_OnTransition::
# 9 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_083C
# 10 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	checkflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_007F
# 11 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if LESS_THAN, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE03
# 12 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_CORAL_EYE_BADGE
# 13 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if LESS_THAN, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE03
# 14 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE03::
# 19 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ORANGE_ISLANDS_PRETTY_PETAL_FLOWER_SHOP_WOMAN_3, 4, 6
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Woman3::
# 24 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	lock
# 25 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 26 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	checkflag FLAG_TEMP_1
# 27 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE7C
# 28 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5EC6, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	checkflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_007F
# 30 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE4A
# 31 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_007F
# 32 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5F48, MSGBOX_YESNO
# 33 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 34 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	call_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE6A
# 35 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	call_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE73
# 37 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE4A::
# 42 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5F1B, MSGBOX_YESNO
# 43 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 44 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	call_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE6A
# 45 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 46 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	call_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE73
# 47 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE6A::
# 52 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5F9D, MSGBOX_DEFAULT
	return


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE73::
# 57 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6121, MSGBOX_DEFAULT
	return


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BE7C::
# 62 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	message Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081A0C42
# 63 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 64 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Naranja_OrangeIslands_PrettyPetalFlowerShop_Mart_0815BE94
# 65 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Girl3::
# 71 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	lock
# 72 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	checkflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_005E
# 74 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if LESS_THAN, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BEB9
# 75 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C61E8, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BEB9::
# 81 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6158, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10C
# 83 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 84 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	callstd 0
# 85 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C61E8, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_005E
# 87 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Girl1::
# 92 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	lock
# 93 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 94 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 95 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	checkflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_08D0
# 96 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BF1A
# 97 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C62DA, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	random 8
# 99 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	addvar VAR_RESULT, 0x85
# 100 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 101 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 102 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	callstd 0
# 103 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 104 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 105 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_08D0
# 106 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6335, MSGBOX_DEFAULT
# 107 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


Naranja_OrangeIslands_PrettyPetalFlowerShop_EventScript_Sub_0815BF1A::
# 112 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	msgbox Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6335, MSGBOX_DEFAULT
# 113 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	release
	end


	.align 2
# 117 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
Naranja_OrangeIslands_PrettyPetalFlowerShop_Mart_0815BE94:
# 118 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 119 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_MAX_POTION
# 120 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 121 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 122 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 123 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_REVIVE
	.2byte ITEM_NONE

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081A0C42::
# 126 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "{PLAYER}{KUN}, welcome!\pWhat can I do for you?$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5EC6::
# 130 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "Hello!\pThis is the PRETTY PETAL flower shop.\nSpreading flowers throughout the world!$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5F1B::
# 134 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "{PLAYER}{KUN}, would you like to learn about\nBERRIES?$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5F48::
# 138 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "Your name is?\p{PLAYER}{KUN}.\nThat’s a nice name.\p{PLAYER}{KUN}, would you like to learn about\nBERRIES?$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C5F9D::
# 142 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "BERRIES grow on trees that thrive\nonly in dark, loamy soil.\pIf you take some BERRIES, be sure to\nplant one in the loamy soil again.\pA planted BERRY will soon sprout,\ngrow into a plant, flower beautifully,\lthen grow BERRIES again.\pI want to see the whole wide world\nfilled with beautiful flowers.\lThat’s my dream.\pPlease help me, {PLAYER}{KUN}. Plant BERRIES\nand bring more flowers into the world.$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6121::
# 146 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "Flowers bring so much happiness to\npeople, don’t they?$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6158::
# 150 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "Hello!\pThe more attention you give to flowers,\nthe more beautifully they bloom.\pYou’ll like tending flowers. I’m sure\nof it. You can have this.$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C61E8::
# 154 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "While BERRY plants are growing,\nwater them with the WAILMER PAIL.\pOh, another thing.\pIf you don’t pick BERRIES for a while,\nthey’ll drop off onto the ground.\lBut they’ll sprout again.\pIsn’t that awesome?\nIt’s like they have the will to live.$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C62DA::
# 158 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "I’m trying to be like my big sisters.\nI’m growing flowers, too!\pHere you go! It’s for you!$"

Naranja_OrangeIslands_PrettyPetalFlowerShop_Text_081C6335::
# 162 "data/maps/Naranja_OrangeIslands_PrettyPetalFlowerShop/scripts.pory"
	.string "You can plant a BERRY and grow it big,\nor you can make a POKéMON hold it.\pBut now they have a machine that mixes\nup different BERRIES and makes candies\lfor POKéMON.\pI want some candy, too.$"
