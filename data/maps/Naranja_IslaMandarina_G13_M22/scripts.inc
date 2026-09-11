Naranja_IslaMandarina_G13_M22_MapScripts::
# 5 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMandarina_G13_M22_OnTransition
	.byte 0


Naranja_IslaMandarina_G13_M22_OnTransition::
# 9 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	getpokenewsactive 3
# 10 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A15F
# 12 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 13 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A163
	end


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A15F::
# 18 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARINA_G13_M22_ROOFTOP_SALE_WOMAN
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A163::
# 23 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARINA_G13_M22_ROOFTOP_SALE_WOMAN
	return


Naranja_IslaMandarina_G13_M22_EventScript_OBJ_EVENT_GFX_ROOFTOP_SALE_WOMAN_LocalId3::
# 28 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	lock
# 29 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	faceplayer
# 30 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 31 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	waitmessage
# 32 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	pokemartdecoration Naranja_IslaMandarina_G13_M22_Mart_0815A180
# 33 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M22_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId1::
# 39 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	lock
# 40 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	faceplayer
# 41 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	getpokenewsactive 3
# 42 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 43 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1BA
# 44 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C61F, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1BA::
# 50 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C685, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M22_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId2::
# 56 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C70E, MSGBOX_NPC
	end


Naranja_IslaMandarina_G13_M22_EventScript_Sign_1::
# 61 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	lockall
# 62 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	message Naranja_IslaMandarina_G13_M22_Text_0818C72B
# 63 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	waitmessage
# 64 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	showmoneybox 0, 0, 0
# 65 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1DE
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1DE::
# 69 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	multichoice 0x10, 0, 0x2A, 0
# 70 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 71 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 72 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 73 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A21C
# 74 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 75 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A227
# 76 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 77 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A232
# 78 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C7C3, MSGBOX_DEFAULT
# 79 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A21C::
# 83 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setvar VAR_TEMP_0, 0x1A
# 84 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A227::
# 88 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setvar VAR_TEMP_0, 0x1B
# 89 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A232::
# 93 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setvar VAR_TEMP_0, 0x1C
# 94 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A23D::
# 98 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkmoney 0xC8, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A244::
# 103 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkmoney 0x12C, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A24B::
# 108 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkmoney 0x15E, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A252::
# 113 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	removemoney 0xC8, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A259::
# 118 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	removemoney 0x12C, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A260::
# 123 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	removemoney 0x15E, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267::
# 128 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 129 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A23D
# 130 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 131 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A244
# 132 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 133 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A24B
# 134 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 135 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A37A
# 136 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkitemspace 0x4000, 1
# 137 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 138 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388
# 139 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 140 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A252
# 141 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 142 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A259
# 143 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 144 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A260
# 145 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	updatemoneybox 0
# 146 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 0, 0x4000
# 147 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	playse SE_VEND
# 148 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C75F, MSGBOX_DEFAULT
# 149 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	additem 0x4000, 1
# 150 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 1, 0x4000
# 151 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferstdstring 2, 0xE
# 152 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_081A0C8C, MSGBOX_DEFAULT
# 153 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	random 0x40
# 154 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 155 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E
# 156 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkitemspace 0x4000, 1
# 157 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 158 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388
# 159 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	playse SE_VEND
# 160 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C780, MSGBOX_DEFAULT
# 161 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	additem 0x4000, 1
# 162 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 1, 0x4000
# 163 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferstdstring 2, 0xE
# 164 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_081A0C8C, MSGBOX_DEFAULT
# 165 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	random 0x40
# 166 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 167 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E
# 168 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkitemspace 0x4000, 1
# 169 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 170 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388
# 171 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	playse SE_VEND
# 172 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C780, MSGBOX_DEFAULT
# 173 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	additem 0x4000, 1
# 174 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 1, 0x4000
# 175 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferstdstring 2, 0xE
# 176 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_081A0C8C, MSGBOX_DEFAULT
# 177 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E::
# 181 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	message Naranja_IslaMandarina_G13_M22_Text_0818C72B
# 182 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	waitmessage
# 183 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1DE
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A37A::
# 187 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_0818C7AF, MSGBOX_DEFAULT
# 188 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388::
# 192 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	msgbox Naranja_IslaMandarina_G13_M22_Text_081A0C79, MSGBOX_DEFAULT
# 193 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396::
# 197 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	hidemoneybox
# 198 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	releaseall
	end


	.align 2
# 202 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
Naranja_IslaMandarina_G13_M22_Mart_0815A180:
# 203 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 204 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 205 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_ELIXIR
# 206 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 207 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 208 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 209 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 210 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 211 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_ETHER
# 212 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_SACRED_ASH
# 213 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_SHOAL_SALT
# 214 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_SHOAL_SHELL
# 215 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_075
# 216 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_070
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M22_Text_0818C61F::
# 219 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Don’t they have set dates for their\nclear-out sales?\pI watch TV, but they never show any\ncommercials.$"

Naranja_IslaMandarina_G13_M22_Text_0818C685::
# 223 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Yes! I’ve been waiting a long time for\nthis clear-out sale.\pThey have items that you can only get\nhere. I’m going to load up, that I am!$"

Naranja_IslaMandarina_G13_M22_Text_0818C70E::
# 227 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Ohh... I’m bone-dry thirsty!$"

Naranja_IslaMandarina_G13_M22_Text_0818C72B::
# 231 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "It’s a VENDING MACHINE.\nWhich drink would you like?$"

Naranja_IslaMandarina_G13_M22_Text_0818C75F::
# 235 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Clang!\pA can of {STR_VAR_1} dropped down.$"

Naranja_IslaMandarina_G13_M22_Text_0818C780::
# 239 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Clang!\pScore! An extra can of {STR_VAR_1}\ndropped down!$"

Naranja_IslaMandarina_G13_M22_Text_0818C7AF::
# 243 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Not enough money...$"

Naranja_IslaMandarina_G13_M22_Text_0818C7C3::
# 247 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Decided against buying a drink.$"

Naranja_IslaMandarina_G13_M22_Text_081A0C79::
# 251 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "The BAG is full...$"

Naranja_IslaMandarina_G13_M22_Text_081A0C8C::
# 255 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "{PLAYER} colocó {STR_VAR_2}\nen la sección de {STR_VAR_3}.$"
