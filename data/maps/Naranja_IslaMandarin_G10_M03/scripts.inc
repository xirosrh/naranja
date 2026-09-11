Naranja_IslaMandarin_G10_M03_MapScripts::
	.byte 0


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId3::
# 8 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181C35
# 11 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 12 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 13 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B32
# 15 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181CB4
# 16 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showmoneybox 0, 0, 0
# 18 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showcoinsbox 0, 5
# 19 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156A60
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156A60::
# 23 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	multichoicedefault 0xF, 0, 0x31, 0, 0
# 24 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 25 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 26 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AAE
# 27 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 28 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AF0
# 29 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B4C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AAE::
# 33 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_1
# 34 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x26DE
# 35 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B5C
# 36 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkmoney 0x3E8, 0
# 37 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B3C
# 39 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addcoins 0x32
# 40 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removemoney 0x3E8, 0
# 41 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatemoneybox 0
# 42 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 5
# 43 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 44 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181CFE
# 45 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 47 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 48 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AF0::
# 53 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_1
# 54 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x251C
# 55 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B5C
# 56 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkmoney 0x2710, 0
# 57 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 58 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B3C
# 59 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addcoins 0x1F4
# 60 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removemoney 0x2710, 0
# 61 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatemoneybox 0
# 62 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 5
# 63 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 64 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181CFE
# 65 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 66 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 67 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 68 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B32::
# 73 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181C53
# 74 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B3C::
# 80 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181D28
# 81 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 83 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 84 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B4C::
# 89 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181D73
# 90 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 92 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 93 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B5C::
# 98 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181D57
# 99 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 101 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 102 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId4::
# 107 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 108 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 109 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181DE1
# 110 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 112 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 113 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B88
# 114 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B88::
# 119 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 120 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 121 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showcoinsbox 0, 0
# 122 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 123 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BA6
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B::
# 127 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 128 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 129 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BA6
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BA6::
# 133 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	multichoice 0xC, 0, 0x30, 0
# 134 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 135 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 136 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BE2
# 137 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 138 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BF0
# 139 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 140 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BFE
# 141 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 142 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D
# 143 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BE2::
# 147 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 148 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 0, 0x58
# 149 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BF0::
# 153 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 154 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 0, 0x59
# 155 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BFE::
# 159 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 160 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 0, 0x5A
# 161 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C::
# 165 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E33
# 166 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 5
# 167 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 168 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D
# 169 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 170 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 171 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C46
# 172 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 173 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C80
# 174 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 175 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CBA
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C46::
# 180 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 181 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x3E8
# 182 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4
# 183 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x58
# 184 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x58
# 185 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 186 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02
# 187 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x3E8
# 188 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	adddecoration 0x58
# 189 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 190 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 191 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E49
# 192 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 193 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C80::
# 197 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 198 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x3E8
# 199 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4
# 200 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x59
# 201 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x59
# 202 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 203 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02
# 204 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x3E8
# 205 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	adddecoration 0x59
# 206 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 207 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 208 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E49
# 209 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 210 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CBA::
# 214 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 215 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x3E8
# 216 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4
# 217 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x5A
# 218 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x5A
# 219 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 220 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02
# 221 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x3E8
# 222 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	adddecoration 0x5A
# 223 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 224 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 225 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E49
# 226 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 227 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4::
# 231 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E76
# 232 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 233 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02::
# 237 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 238 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D::
# 242 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181EC2
# 243 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 244 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 0
# 245 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId9::
# 250 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 251 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 252 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181DE1
# 253 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 254 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 255 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 256 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D36
# 257 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D36::
# 262 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 263 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 264 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showcoinsbox 0, 0
# 265 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 266 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D54
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49::
# 270 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 271 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 272 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D54
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D54::
# 276 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	multichoice 0xC, 0, 0x37, 0
# 277 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 278 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 279 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DA6
# 280 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 281 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DB4
# 282 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 283 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DC2
# 284 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 285 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DD0
# 286 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 287 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DDE
# 288 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 289 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77
# 290 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DA6::
# 294 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 295 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM32
# 296 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DB4::
# 300 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 301 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM29
# 302 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DC2::
# 306 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 307 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM35
# 308 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DD0::
# 312 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 4
# 313 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM24
# 314 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DDE::
# 318 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 5
# 319 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM13
# 320 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC::
# 324 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E33
# 325 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 5
# 326 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 327 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77
# 328 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 329 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 330 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E3C
# 331 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 332 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E76
# 333 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 334 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EB0
# 335 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 336 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EEA
# 337 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 338 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F24
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E3C::
# 343 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 344 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x5DC
# 345 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 346 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM32, 1
# 347 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 348 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 349 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x5DC
# 350 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM32, 1
# 351 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 352 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 353 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F08
# 354 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 355 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E76::
# 359 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 360 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xDAC
# 361 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 362 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM29, 1
# 363 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 364 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 365 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xDAC
# 366 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM29, 1
# 367 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 368 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 369 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F08
# 370 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 371 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EB0::
# 375 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 376 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xFA0
# 377 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 378 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM35, 1
# 379 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 380 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 381 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xFA0
# 382 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM35, 1
# 383 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 384 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 385 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F08
# 386 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 387 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EEA::
# 391 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 392 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xFA0
# 393 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 394 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM24, 1
# 395 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 396 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 397 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xFA0
# 398 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM24, 1
# 399 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 400 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 401 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F08
# 402 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 403 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F24::
# 407 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 408 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xFA0
# 409 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 410 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM13, 1
# 411 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 412 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 413 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xFA0
# 414 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM13, 1
# 415 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 416 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 417 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F08
# 418 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 419 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E::
# 423 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181E76
# 424 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 425 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C::
# 429 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 430 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77::
# 434 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181EC2
# 435 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 436 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 0
# 437 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 442 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_081821C1
# 443 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 448 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_081821F3
# 449 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId5::
# 454 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 455 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 456 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 457 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
# 458 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F3D
# 459 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 5
# 460 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 461 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157068
# 462 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 463 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 464 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156FDB
# 465 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 466 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157005
# 467 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 468 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815702F
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156FDB::
# 473 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x58
# 474 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x58
# 475 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 476 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059
# 477 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F89
# 478 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 479 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x58
# 480 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 7
# 481 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 482 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157005::
# 486 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x59
# 487 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x59
# 488 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 489 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059
# 490 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F89
# 491 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 492 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x59
# 493 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 7
# 494 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 495 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815702F::
# 499 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x5A
# 500 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x5A
# 501 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 502 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059
# 503 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F89
# 504 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 505 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5A
# 506 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 7
# 507 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 508 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059::
# 512 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 513 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181F97
# 514 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 515 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157068::
# 520 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181FBC
# 521 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 522 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072::
# 527 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08181FE9
# 528 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 529 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId6::
# 534 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 535 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 536 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 537 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 538 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815709C
# 539 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_0818201E
# 540 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 541 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815709C::
# 545 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E1
# 546 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA
# 547 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_1
# 548 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 549 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA
# 550 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E1
# 551 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addcoins 0x14
# 552 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_0818208E
# 553 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 554 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 555 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA::
# 559 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_081820DD
# 560 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 561 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId7::
# 565 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 566 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 567 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08182120
# 568 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 569 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_COOK_LocalId8::
# 573 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 574 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 575 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_0818217C
# 576 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 577 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId10::
# 581 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 582 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 583 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08182241
# 584 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 585 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108::
# 589 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	closemessage
# 590 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 591 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 592 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId11::
# 597 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 598 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 599 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08182272
# 600 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 601 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId12::
# 605 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 606 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 607 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_081822F4
# 608 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 609 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sign_1::
# 613 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 614 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 615 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 616 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 617 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 618 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 619 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 620 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_2::
# 625 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 626 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 627 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 628 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 629 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 1
# 630 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 631 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 632 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_3::
# 637 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 638 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 639 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 640 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 641 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 2
# 642 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 643 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 644 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_4::
# 649 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 650 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 651 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 652 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 653 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 3
# 654 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 655 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 656 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_5::
# 661 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 662 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 663 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 664 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 665 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 4
# 666 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 667 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 668 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_6::
# 673 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 674 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 675 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 676 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 677 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 5
# 678 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 679 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 680 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_7::
# 685 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 686 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 687 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 688 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 689 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 6
# 690 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 691 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 692 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_8::
# 697 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 698 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 699 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 700 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 701 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 7
# 702 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 703 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 704 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_9::
# 709 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 710 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 711 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 712 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 713 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 8
# 714 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 715 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 716 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_10::
# 721 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 722 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 723 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 724 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 725 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 9
# 726 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 727 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 728 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_11::
# 733 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 734 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 735 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 736 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 737 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0xA
# 738 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 739 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 740 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_12::
# 745 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 746 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 747 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 748 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 749 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0xB
# 750 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 751 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 752 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5::
# 757 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M03_Text_08182420
# 758 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 4
# 759 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_13::
# 764 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 765 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 766 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 767 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 768 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	getpokenewsactive 2
# 769 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 770 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
# 771 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addvar VAR_0x8004, 0x80
# 772 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sign_19::
# 776 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 777 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 778 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 779 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 1
# 780 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	getpokenewsactive 2
# 781 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 782 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
# 783 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addvar VAR_0x8004, 0x80
# 784 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA::
# 788 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	special PlayRoulette
# 789 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitstate
	end


Naranja_IslaMandarin_G10_M03_Text_08181C35::
# 793 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"

Naranja_IslaMandarin_G10_M03_Text_08181C53::
# 797 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Okay, you wanted some COINS for\nthe games?\pBut you don’t have a COIN CASE for\nstowing the COINS.$"

Naranja_IslaMandarin_G10_M03_Text_08181CB4::
# 801 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Were you looking for COINS?\pIt’s ¥1000 for 50 COINS.\nWould you like some?$"

Naranja_IslaMandarin_G10_M03_Text_08181CFE::
# 805 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Thank you very much!\nHere are your COINS!$"

Naranja_IslaMandarin_G10_M03_Text_08181D28::
# 809 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Um... You don’t appear to have\nenough money...$"

Naranja_IslaMandarin_G10_M03_Text_08181D57::
# 813 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh?\nYour COIN CASE is full.$"

Naranja_IslaMandarin_G10_M03_Text_08181D73::
# 817 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh... You don’t need COINS, then?\nGood luck on your adventure!$"

Naranja_IslaMandarin_G10_M03_Text_08181DE1::
# 821 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Welcome.\pYou can exchange your COINS for\nprizes here.$"

Naranja_IslaMandarin_G10_M03_Text_08181E17::
# 825 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Which prize would you like?$"

Naranja_IslaMandarin_G10_M03_Text_08181E33::
# 829 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"

Naranja_IslaMandarin_G10_M03_Text_08181E49::
# 833 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Thank you!\nWe’ll send it to your PC at home.$"

Naranja_IslaMandarin_G10_M03_Text_08181E76::
# 837 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "You don’t have enough COINS.$"

Naranja_IslaMandarin_G10_M03_Text_08181EC2::
# 841 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh, is that so? \nYou need to save some COINS before\lcoming back here.$"

Naranja_IslaMandarin_G10_M03_Text_08181F08::
# 845 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Here you go!$"

Naranja_IslaMandarin_G10_M03_Text_08181F3D::
# 849 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "I made a mistake and got two of the\nsame DOLLS.\pWould you like one of them?$"

Naranja_IslaMandarin_G10_M03_Text_08181F89::
# 853 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "There you go!$"

Naranja_IslaMandarin_G10_M03_Text_08181F97::
# 857 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Huh?\nYou want it, but not right now?$"

Naranja_IslaMandarin_G10_M03_Text_08181FBC::
# 861 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh, don’t be so negative!\nYou can have this!$"

Naranja_IslaMandarin_G10_M03_Text_08181FE9::
# 865 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "There’s a prize I want, but I can’t win\nthe jackpot.$"

Naranja_IslaMandarin_G10_M03_Text_0818201E::
# 869 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Hey, kid, if you want to play here,\nyou need a COIN CASE.\pI think the young lady next door\nhad one. Go see her!$"

Naranja_IslaMandarin_G10_M03_Text_0818208E::
# 873 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "My luck can only last so long.\nThis is too much for me.\lHere, take some COINS!$"

Naranja_IslaMandarin_G10_M03_Text_081820DD::
# 877 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "MAUVILLE has something for\neveryone.\pFor me, it’s the GAME CORNER.$"

Naranja_IslaMandarin_G10_M03_Text_08182120::
# 881 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "The ROULETTE tables have different\nrates.\pCheck your COINS if you’re going to\npick a table.$"

Naranja_IslaMandarin_G10_M03_Text_0818217C::
# 885 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "It’s easy to lose track of time in here. \nI should get back to work.$"

Naranja_IslaMandarin_G10_M03_Text_081821C1::
# 889 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "COINS are needed to play here in the\nGAME CORNER.$"

Naranja_IslaMandarin_G10_M03_Text_081821F3::
# 893 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "This ROULETTE thing...\nIt’s rather demanding.\pWin or lose, it’s only by luck.$"

Naranja_IslaMandarin_G10_M03_Text_08182241::
# 897 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Up to three COINS can be used to play\nthe SLOTS.$"

Naranja_IslaMandarin_G10_M03_Text_08182272::
# 901 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "It’s very difficult to make it stop\nright on “7.”\pIf it stops on “7” during the REEL TIME\nbonus game, you’ll receive extra COINS.$"

Naranja_IslaMandarin_G10_M03_Text_081822F4::
# 905 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Here’s some information for you\nabout the SLOTS.\pThe more lightning bolts you stock, the\nmore REEL TIME chances you get.\pIn a game with the maximum five REEL\nTIME chances...\pIt is possible to receive four regular\nbonuses, then a big bonus.\pThe big bonus is 660 COINS, but it’s\nvery difficult to get.$"

Naranja_IslaMandarin_G10_M03_Text_08182420::
# 909 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "You can’t play if you don’t have a\nCOIN CASE.$"
