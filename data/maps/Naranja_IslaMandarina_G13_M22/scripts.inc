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
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 34 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M22_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId1::
# 40 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	lock
# 41 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	faceplayer
# 42 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	getpokenewsactive 3
# 43 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 44 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1BA
# 45 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C61F
# 46 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1BA::
# 52 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C685
# 53 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M22_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId2::
# 59 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C70E
# 60 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G13_M22_EventScript_Sign_1::
# 65 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	lockall
# 66 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	message Naranja_IslaMandarina_G13_M22_Text_0818C72B
# 67 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	waitmessage
# 68 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	showmoneybox 0, 0, 0
# 69 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1DE
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1DE::
# 73 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	multichoice 0x10, 0, 0x2A, 0
# 74 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 75 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 76 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 77 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A21C
# 78 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 79 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A227
# 80 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 81 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A232
# 82 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C7C3
# 83 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 84 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A21C::
# 88 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setvar VAR_TEMP_0, 0x1A
# 89 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A227::
# 93 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setvar VAR_TEMP_0, 0x1B
# 94 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A232::
# 98 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	setvar VAR_TEMP_0, 0x1C
# 99 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A23D::
# 103 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkmoney 0xC8, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A244::
# 108 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkmoney 0x12C, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A24B::
# 113 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkmoney 0x15E, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A252::
# 118 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	removemoney 0xC8, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A259::
# 123 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	removemoney 0x12C, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A260::
# 128 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	removemoney 0x15E, 0
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A267::
# 133 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 134 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A23D
# 135 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 136 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A244
# 137 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 138 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A24B
# 139 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 140 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A37A
# 141 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkitemspace 0x4000, 1
# 142 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 143 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388
# 144 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 145 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A252
# 146 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 147 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A259
# 148 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 149 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A260
# 150 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	updatemoneybox 0
# 151 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 0, 0x4000
# 152 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	playse SE_VEND
# 153 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C75F
# 154 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 155 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	additem 0x4000, 1
# 156 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 1, 0x4000
# 157 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferstdstring 2, 0xE
# 158 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_081A0C8C
# 159 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 160 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	random 0x40
# 161 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 162 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E
# 163 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkitemspace 0x4000, 1
# 164 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 165 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388
# 166 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	playse SE_VEND
# 167 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C780
# 168 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 169 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	additem 0x4000, 1
# 170 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 1, 0x4000
# 171 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferstdstring 2, 0xE
# 172 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_081A0C8C
# 173 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 174 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	random 0x40
# 175 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 176 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E
# 177 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	checkitemspace 0x4000, 1
# 178 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 179 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388
# 180 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	playse SE_VEND
# 181 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C780
# 182 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 183 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	additem 0x4000, 1
# 184 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferitemname 1, 0x4000
# 185 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	bufferstdstring 2, 0xE
# 186 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_081A0C8C
# 187 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 188 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A36E::
# 192 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	message Naranja_IslaMandarina_G13_M22_Text_0818C72B
# 193 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	waitmessage
# 194 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A1DE
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A37A::
# 198 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_0818C7AF
# 199 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 200 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A388::
# 204 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G13_M22_Text_081A0C79
# 205 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	callstd 4
# 206 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	goto Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396
	return


Naranja_IslaMandarina_G13_M22_EventScript_Sub_0815A396::
# 210 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	hidemoneybox
# 211 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	releaseall
	end


	.align 2
# 215 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
Naranja_IslaMandarina_G13_M22_Mart_0815A180:
# 216 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 217 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 218 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_ELIXIR
# 219 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 220 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 221 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 222 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 223 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 224 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_ETHER
# 225 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_SACRED_ASH
# 226 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_SHOAL_SALT
# 227 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_SHOAL_SHELL
# 228 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_075
# 229 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.2byte ITEM_070
	.2byte ITEM_NONE

Naranja_IslaMandarina_G13_M22_Text_0818C61F::
# 232 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Don’t they have set dates for their\nclear-out sales?\pI watch TV, but they never show any\ncommercials.$"

Naranja_IslaMandarina_G13_M22_Text_0818C685::
# 236 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Yes! I’ve been waiting a long time for\nthis clear-out sale.\pThey have items that you can only get\nhere. I’m going to load up, that I am!$"

Naranja_IslaMandarina_G13_M22_Text_0818C70E::
# 240 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Ohh... I’m bone-dry thirsty!$"

Naranja_IslaMandarina_G13_M22_Text_0818C72B::
# 244 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "It’s a VENDING MACHINE.\nWhich drink would you like?$"

Naranja_IslaMandarina_G13_M22_Text_0818C75F::
# 248 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Clang!\pA can of {STR_VAR_1} dropped down.$"

Naranja_IslaMandarina_G13_M22_Text_0818C780::
# 252 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Clang!\pScore! An extra can of {STR_VAR_1}\ndropped down!$"

Naranja_IslaMandarina_G13_M22_Text_0818C7AF::
# 256 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Not enough money...$"

Naranja_IslaMandarina_G13_M22_Text_0818C7C3::
# 260 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "Decided against buying a drink.$"

Naranja_IslaMandarina_G13_M22_Text_081A0C79::
# 264 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "The BAG is full...$"

Naranja_IslaMandarina_G13_M22_Text_081A0C8C::
# 268 "data/maps/Naranja_IslaMandarina_G13_M22/scripts.pory"
	.string "{PLAYER} colocó {STR_VAR_2}\nen la sección de {STR_VAR_3}.$"
