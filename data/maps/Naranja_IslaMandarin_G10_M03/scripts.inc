Naranja_IslaMandarin_G10_M03_MapScripts::
	.byte 0


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId3::
# 8 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181C35, MSGBOX_DEFAULT
# 11 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 12 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 13 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B32
# 14 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181CB4
# 15 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 16 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showmoneybox 0, 0, 0
# 17 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showcoinsbox 0, 5
# 18 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156A60
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156A60::
# 22 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	multichoicedefault 0xF, 0, 0x31, 0, 0
# 23 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 24 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 25 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AAE
# 26 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 27 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AF0
# 28 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B4C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AAE::
# 32 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_1
# 33 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x26DE
# 34 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B5C
# 35 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkmoney 0x3E8, 0
# 36 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 37 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B3C
# 38 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addcoins 0x32
# 39 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removemoney 0x3E8, 0
# 40 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatemoneybox 0
# 41 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 5
# 42 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 43 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181CFE, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 45 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 46 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156AF0::
# 51 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_1
# 52 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x251C
# 53 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B5C
# 54 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkmoney 0x2710, 0
# 55 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 56 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B3C
# 57 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addcoins 0x1F4
# 58 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removemoney 0x2710, 0
# 59 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatemoneybox 0
# 60 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 5
# 61 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 62 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181CFE, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 64 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 65 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B32::
# 70 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181C53, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B3C::
# 76 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181D28, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 78 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 79 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B4C::
# 84 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181D73, MSGBOX_DEFAULT
# 85 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 86 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 87 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B5C::
# 92 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181D57, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidemoneybox
# 94 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 5
# 95 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId4::
# 100 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 101 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 102 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181DE1, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 104 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 105 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B88
# 106 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B88::
# 111 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 112 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 113 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showcoinsbox 0, 0
# 114 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 115 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BA6
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B::
# 119 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 120 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 121 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BA6
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BA6::
# 125 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	multichoice 0xC, 0, 0x30, 0
# 126 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 127 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 128 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BE2
# 129 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 130 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BF0
# 131 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 132 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BFE
# 133 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 134 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D
# 135 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BE2::
# 139 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 140 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 0, 0x58
# 141 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BF0::
# 145 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 146 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 0, 0x59
# 147 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156BFE::
# 151 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 152 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 0, 0x5A
# 153 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C0C::
# 157 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E33, MSGBOX_YESNO
# 158 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 159 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D
# 160 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 161 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 162 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C46
# 163 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 164 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C80
# 165 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 166 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CBA
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C46::
# 171 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 172 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x3E8
# 173 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4
# 174 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x58
# 175 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x58
# 176 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 177 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02
# 178 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x3E8
# 179 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	adddecoration 0x58
# 180 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 181 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 182 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E49, MSGBOX_DEFAULT
# 183 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156C80::
# 187 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 188 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x3E8
# 189 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4
# 190 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x59
# 191 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x59
# 192 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 193 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02
# 194 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x3E8
# 195 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	adddecoration 0x59
# 196 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 197 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 198 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E49, MSGBOX_DEFAULT
# 199 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CBA::
# 203 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 204 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x3E8
# 205 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4
# 206 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x5A
# 207 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x5A
# 208 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 209 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02
# 210 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x3E8
# 211 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	adddecoration 0x5A
# 212 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 213 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 214 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E49, MSGBOX_DEFAULT
# 215 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156CF4::
# 219 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E76, MSGBOX_DEFAULT
# 220 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D02::
# 224 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 225 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156B9B
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D0D::
# 229 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181EC2, MSGBOX_DEFAULT
# 230 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 0
# 231 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId9::
# 236 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 237 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 238 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181DE1, MSGBOX_DEFAULT
# 239 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 240 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 241 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D36
# 242 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D36::
# 247 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 248 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 249 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	showcoinsbox 0, 0
# 250 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 251 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D54
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49::
# 255 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	message Naranja_IslaMandarin_G10_M03_Text_08181E17
# 256 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmessage
# 257 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D54
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D54::
# 261 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	multichoice 0xC, 0, 0x37, 0
# 262 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 263 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 264 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DA6
# 265 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 266 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DB4
# 267 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 268 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DC2
# 269 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 270 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DD0
# 271 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 272 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DDE
# 273 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 274 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77
# 275 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DA6::
# 279 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 280 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM32
# 281 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DB4::
# 285 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 286 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM29
# 287 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DC2::
# 291 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 292 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM35
# 293 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DD0::
# 297 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 4
# 298 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM24
# 299 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DDE::
# 303 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_TEMP_1, 5
# 304 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferitemname 0, ITEM_TM13
# 305 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156DEC::
# 309 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E33, MSGBOX_YESNO
# 310 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 311 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77
# 312 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 313 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 314 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E3C
# 315 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 316 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E76
# 317 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 318 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EB0
# 319 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 320 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EEA
# 321 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 322 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F24
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E3C::
# 327 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 328 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x5DC
# 329 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 330 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM32, 1
# 331 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 332 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 333 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0x5DC
# 334 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM32, 1
# 335 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 336 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 337 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F08, MSGBOX_DEFAULT
# 338 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156E76::
# 342 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 343 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xDAC
# 344 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 345 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM29, 1
# 346 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 347 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 348 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xDAC
# 349 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM29, 1
# 350 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 351 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 352 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F08, MSGBOX_DEFAULT
# 353 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EB0::
# 357 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 358 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xFA0
# 359 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 360 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM35, 1
# 361 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 362 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 363 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xFA0
# 364 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM35, 1
# 365 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 366 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 367 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F08, MSGBOX_DEFAULT
# 368 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156EEA::
# 372 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 373 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xFA0
# 374 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 375 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM24, 1
# 376 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 377 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 378 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xFA0
# 379 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM24, 1
# 380 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 381 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 382 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F08, MSGBOX_DEFAULT
# 383 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F24::
# 387 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_2
# 388 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0xFA0
# 389 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E
# 390 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitemspace ITEM_TM13, 1
# 391 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 392 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C
# 393 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	removecoins 0xFA0
# 394 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	additem ITEM_TM13, 1
# 395 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	updatecoinsbox 0, 0
# 396 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 397 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F08, MSGBOX_DEFAULT
# 398 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F5E::
# 402 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181E76, MSGBOX_DEFAULT
# 403 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F6C::
# 407 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 408 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156D49
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156F77::
# 412 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181EC2, MSGBOX_DEFAULT
# 413 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	hidecoinsbox 0, 0
# 414 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 419 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_081821C1, MSGBOX_NPC
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 424 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_081821F3, MSGBOX_NPC
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId5::
# 429 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 430 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 431 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 432 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
# 433 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F3D, MSGBOX_YESNO
# 434 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 435 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157068
# 436 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 437 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 438 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156FDB
# 439 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 440 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157005
# 441 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 442 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815702F
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08156FDB::
# 447 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x58
# 448 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x58
# 449 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 450 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059
# 451 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F89, MSGBOX_DEFAULT
# 452 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x58
# 453 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 7
# 454 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 455 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157005::
# 459 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x59
# 460 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x59
# 461 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 462 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059
# 463 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F89, MSGBOX_DEFAULT
# 464 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x59
# 465 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 7
# 466 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 467 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815702F::
# 471 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	bufferdecorationname 1, 0x5A
# 472 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkdecorspace 0x5A
# 473 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 474 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059
# 475 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F89, MSGBOX_DEFAULT
# 476 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5A
# 477 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	callstd 7
# 478 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E2
# 479 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157059::
# 483 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 484 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181F97, MSGBOX_DEFAULT
# 485 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157068::
# 490 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181FBC, MSGBOX_DEFAULT
# 491 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157072::
# 496 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08181FE9, MSGBOX_DEFAULT
# 497 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId6::
# 502 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 503 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 504 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 505 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 506 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815709C
# 507 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_0818201E, MSGBOX_DEFAULT
# 508 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_0815709C::
# 512 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E1
# 513 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA
# 514 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkcoins VAR_TEMP_1
# 515 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 516 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA
# 517 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_00E1
# 518 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addcoins 0x14
# 519 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_0818208E, MSGBOX_DEFAULT
# 520 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playse SE_SHOP
# 521 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_081570CA::
# 525 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_081820DD, MSGBOX_DEFAULT
# 526 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId7::
# 530 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 531 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 532 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08182120, MSGBOX_DEFAULT
# 533 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_COOK_LocalId8::
# 537 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 538 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 539 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_0818217C, MSGBOX_DEFAULT
# 540 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId10::
# 544 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 545 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 546 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08182241, MSGBOX_DEFAULT
# 547 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108::
# 551 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	closemessage
# 552 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 553 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 554 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId11::
# 559 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 560 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 561 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08182272, MSGBOX_DEFAULT
# 562 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId12::
# 566 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lock
# 567 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	faceplayer
# 568 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_081822F4, MSGBOX_DEFAULT
# 569 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_08157108
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sign_1::
# 573 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 574 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 575 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 576 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 577 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 578 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 579 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 580 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_2::
# 585 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 586 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 587 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 588 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 589 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 1
# 590 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 591 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 592 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_3::
# 597 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 598 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 599 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 600 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 601 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 2
# 602 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 603 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 604 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_4::
# 609 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 610 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 611 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 612 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 613 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 3
# 614 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 615 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 616 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_5::
# 621 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 622 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 623 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 624 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 625 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 4
# 626 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 627 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 628 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_6::
# 633 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 634 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 635 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 636 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 637 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 5
# 638 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 639 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 640 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_7::
# 645 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 646 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 647 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 648 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 649 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 6
# 650 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 651 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 652 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_8::
# 657 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 658 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 659 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 660 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 661 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 7
# 662 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 663 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 664 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_9::
# 669 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 670 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 671 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 672 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 673 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 8
# 674 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 675 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 676 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_10::
# 681 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 682 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 683 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 684 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 685 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 9
# 686 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 687 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 688 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_11::
# 693 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 694 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 695 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 696 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 697 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0xA
# 698 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 699 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 700 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_12::
# 705 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	lockall
# 706 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 707 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 708 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 709 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0xB
# 710 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 711 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	playslotmachine 0x800D
# 712 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5::
# 717 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M03_Text_08182420, MSGBOX_DEFAULT
# 718 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M03_EventScript_Sign_13::
# 723 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 724 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 725 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 726 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 727 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	getpokenewsactive 2
# 728 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 729 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
# 730 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addvar VAR_0x8004, 0x80
# 731 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sign_19::
# 735 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 736 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 737 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081572B5
# 738 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	setvar VAR_0x8004, 1
# 739 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	getpokenewsactive 2
# 740 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 741 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
# 742 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	addvar VAR_0x8004, 0x80
# 743 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	goto Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA
	return


Naranja_IslaMandarin_G10_M03_EventScript_Sub_081C40DA::
# 747 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	special PlayRoulette
# 748 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	waitstate
	end


Naranja_IslaMandarin_G10_M03_Text_08181C35::
# 752 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"

Naranja_IslaMandarin_G10_M03_Text_08181C53::
# 756 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Okay, you wanted some COINS for\nthe games?\pBut you don’t have a COIN CASE for\nstowing the COINS.$"

Naranja_IslaMandarin_G10_M03_Text_08181CB4::
# 760 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Were you looking for COINS?\pIt’s ¥1000 for 50 COINS.\nWould you like some?$"

Naranja_IslaMandarin_G10_M03_Text_08181CFE::
# 764 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Thank you very much!\nHere are your COINS!$"

Naranja_IslaMandarin_G10_M03_Text_08181D28::
# 768 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Um... You don’t appear to have\nenough money...$"

Naranja_IslaMandarin_G10_M03_Text_08181D57::
# 772 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh?\nYour COIN CASE is full.$"

Naranja_IslaMandarin_G10_M03_Text_08181D73::
# 776 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh... You don’t need COINS, then?\nGood luck on your adventure!$"

Naranja_IslaMandarin_G10_M03_Text_08181DE1::
# 780 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Welcome.\pYou can exchange your COINS for\nprizes here.$"

Naranja_IslaMandarin_G10_M03_Text_08181E17::
# 784 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Which prize would you like?$"

Naranja_IslaMandarin_G10_M03_Text_08181E33::
# 788 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"

Naranja_IslaMandarin_G10_M03_Text_08181E49::
# 792 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Thank you!\nWe’ll send it to your PC at home.$"

Naranja_IslaMandarin_G10_M03_Text_08181E76::
# 796 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "You don’t have enough COINS.$"

Naranja_IslaMandarin_G10_M03_Text_08181EC2::
# 800 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh, is that so? \nYou need to save some COINS before\lcoming back here.$"

Naranja_IslaMandarin_G10_M03_Text_08181F08::
# 804 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Here you go!$"

Naranja_IslaMandarin_G10_M03_Text_08181F3D::
# 808 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "I made a mistake and got two of the\nsame DOLLS.\pWould you like one of them?$"

Naranja_IslaMandarin_G10_M03_Text_08181F89::
# 812 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "There you go!$"

Naranja_IslaMandarin_G10_M03_Text_08181F97::
# 816 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Huh?\nYou want it, but not right now?$"

Naranja_IslaMandarin_G10_M03_Text_08181FBC::
# 820 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Oh, don’t be so negative!\nYou can have this!$"

Naranja_IslaMandarin_G10_M03_Text_08181FE9::
# 824 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "There’s a prize I want, but I can’t win\nthe jackpot.$"

Naranja_IslaMandarin_G10_M03_Text_0818201E::
# 828 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Hey, kid, if you want to play here,\nyou need a COIN CASE.\pI think the young lady next door\nhad one. Go see her!$"

Naranja_IslaMandarin_G10_M03_Text_0818208E::
# 832 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "My luck can only last so long.\nThis is too much for me.\lHere, take some COINS!$"

Naranja_IslaMandarin_G10_M03_Text_081820DD::
# 836 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "MAUVILLE has something for\neveryone.\pFor me, it’s the GAME CORNER.$"

Naranja_IslaMandarin_G10_M03_Text_08182120::
# 840 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "The ROULETTE tables have different\nrates.\pCheck your COINS if you’re going to\npick a table.$"

Naranja_IslaMandarin_G10_M03_Text_0818217C::
# 844 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "It’s easy to lose track of time in here. \nI should get back to work.$"

Naranja_IslaMandarin_G10_M03_Text_081821C1::
# 848 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "COINS are needed to play here in the\nGAME CORNER.$"

Naranja_IslaMandarin_G10_M03_Text_081821F3::
# 852 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "This ROULETTE thing...\nIt’s rather demanding.\pWin or lose, it’s only by luck.$"

Naranja_IslaMandarin_G10_M03_Text_08182241::
# 856 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Up to three COINS can be used to play\nthe SLOTS.$"

Naranja_IslaMandarin_G10_M03_Text_08182272::
# 860 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "It’s very difficult to make it stop\nright on “7.”\pIf it stops on “7” during the REEL TIME\nbonus game, you’ll receive extra COINS.$"

Naranja_IslaMandarin_G10_M03_Text_081822F4::
# 864 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "Here’s some information for you\nabout the SLOTS.\pThe more lightning bolts you stock, the\nmore REEL TIME chances you get.\pIn a game with the maximum five REEL\nTIME chances...\pIt is possible to receive four regular\nbonuses, then a big bonus.\pThe big bonus is 660 COINS, but it’s\nvery difficult to get.$"

Naranja_IslaMandarin_G10_M03_Text_08182420::
# 868 "data/maps/Naranja_IslaMandarin_G10_M03/scripts.pory"
	.string "You can’t play if you don’t have a\nCOIN CASE.$"
