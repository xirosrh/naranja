Naranja_IslaValencia_G08_M04_MapScripts::
# 5 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaValencia_G08_M04_OnTransition
	.byte 0


Naranja_IslaValencia_G08_M04_OnTransition::
# 9 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setrespawn 3
# 10 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_08155213::
# 15 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId3::
# 24 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_0817BD30
# 25 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId4::
# 30 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_0817BD92
# 31 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId5::
# 36 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 37 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 38 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_086C00D5
# 39 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 40 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 41 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 42 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_0815524F
# 43 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_0815524F::
# 48 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_STARTER_MON, 0
# 49 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155272
# 50 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_STARTER_MON, 1
# 51 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_0815527B
# 52 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_STARTER_MON, 2
# 53 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155284
# 54 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_08155272::
# 59 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_0817BE6C
# 60 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_0815527B::
# 65 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_0817BEF1
# 66 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_08155284::
# 71 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_0817BF73
# 72 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
	return


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId2::
# 77 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 78 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 79 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_0805
# 80 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BDB
# 81 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1C97
# 82 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B2D
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B2D::
# 87 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1D10
# 88 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 89 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	multichoice 0x11, 6, 0x14, 0
# 90 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 91 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 92 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B7A
# 93 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 94 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BD1
# 95 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 96 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B6C
# 97 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 98 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BD1
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B6C::
# 103 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1D3A
# 104 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 105 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B2D
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B7A::
# 109 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1F7B
# 110 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	closemessage
# 112 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 113 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 114 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 115 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 116 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 117 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C77
# 118 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 119 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BB1
# 120 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 121 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BBB
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BB1::
# 126 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1FF0
# 127 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 128 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BBB::
# 133 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 134 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	special ShowEasyChatProfile
# 135 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	waitmessage
# 136 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	delay 0x50
# 137 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B2137
# 138 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 139 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BD1::
# 144 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1FA3
# 145 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 146 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BDB::
# 151 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B202F
# 152 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 153 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BE9
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BE9::
# 157 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B2063
# 158 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 159 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	multichoice 0x11, 6, 0x14, 0
# 160 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 161 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 162 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C36
# 163 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 164 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C6D
# 165 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 166 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C28
# 167 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 168 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C6D
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C28::
# 173 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B1D3A
# 174 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 175 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BE9
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C36::
# 179 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B207F
# 180 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 181 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	closemessage
# 182 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 183 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 184 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 185 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 186 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 187 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C77
# 188 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 189 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BB1
# 190 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 191 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BBB
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C6D::
# 196 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B20CE
# 197 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 4
# 198 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C77::
# 203 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 204 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C96
# 205 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_084C
# 206 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C96
# 207 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_084C
# 208 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_081B21CC
# 209 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 3
# 210 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C96::
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3506::
# 219 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 220 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	loadword 0, Naranja_IslaValencia_G08_M04_Text_0817C1EC
# 221 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	callstd 6
# 222 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_ValnTang_G07_M02_EventScript_Trigger_1
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3F85::
# 226 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 227 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 228 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155213
# 229 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3506
	return


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 233 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 234 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	nop
# 235 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 236 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155213
# 237 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	nop
# 238 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3F85
	end


Naranja_IslaValencia_G08_M04_Text_0817BD30::
# 242 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿Sabes cómo usar un ordenador?\p{COLOR 0x04}{PLAYER}: ¡Mejor que tù!\p{COLOR 0x01}Está bien, solo pretendia ayudarte.$"

Naranja_IslaValencia_G08_M04_Text_0817BD92::
# 246 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡Hola!  ¿Que tal? \p{COLOR 0x04}{PLAYER}: ¿Y tu chavalín?\p{COLOR 0x01}Bien.$"

Naranja_IslaValencia_G08_M04_Text_0817BE6C::
# 250 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "For example, your TREECKO is a\nGRASS type.\pIt’s strong against the WATER and\nGROUND types.\pBut, it’s weak against FIRE-type\nPOKéMON.$"

Naranja_IslaValencia_G08_M04_Text_0817BEF1::
# 254 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "For example, your TORCHIC is a\nFIRE type.\pIt’s strong against the GRASS and\nBUG types.\pBut, it’s weak against WATER-type\nPOKéMON.$"

Naranja_IslaValencia_G08_M04_Text_0817BF73::
# 258 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "For example, your MUDKIP is a\nWATER type.\pIt’s strong against the FIRE type.\pBut, it’s weak against GRASS-type\nand ELECTRIC-type POKéMON.$"

Naranja_IslaValencia_G08_M04_Text_0817C1EC::
# 262 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡¿Una parálisis nerviosa\ncausada por esporas de Vileplume?!\p¡Eso puede ser grave!\pEs la hora de la enfermera Joy\p{COLOR 0x04}(¿Cómorr?)\nDebemos darnos prisa, enfermera.\p{COLOR 0x01}Cierto {PLAYER}.\nMe ocuparé de trasladarles aquí.\lEn cuanto termine, vuelve al\llaboratorio de Ivy.$"

Naranja_IslaValencia_G08_M04_Text_081B1C97::
# 266 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Hello there, TRAINER!\nYou’ve got a wonderful smile, there.\pI have a hobby - collecting the profiles\nof POKéMON TRAINERS.$"

Naranja_IslaValencia_G08_M04_Text_081B1D10::
# 270 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿Y el tuyo?      \n¿Me lo podrías enseñar?$"

Naranja_IslaValencia_G08_M04_Text_081B1D3A::
# 274 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "You make your own profile by putting\ntogether four words or phrases.\pHere, I’ll show you an example of a\nprofile using four pieces of text.\pYou can switch those four pieces with\nother text pieces any which way you\llike to make your own profile.\pThere are a lot of text pieces that you\ncan use.\pThey are arranged in groups like\nPOKéMON, lifestyles, and hobbies so\lit is easier to look them up.\pSo, first, choose the group of text\npieces to display a list of choices.\pThen, pick the choice you want.\pRepeat for the remaining text choices,\nand you’ll have your very own profile.$"

Naranja_IslaValencia_G08_M04_Text_081B1F7B::
# 278 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡Gracias!\n¿ Me dejarías ver tu perfil ?$"

Naranja_IslaValencia_G08_M04_Text_081B1FA3::
# 282 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Oh, no, really?\pI imagine someone like you would have\na wonderful profile...$"

Naranja_IslaValencia_G08_M04_Text_081B1FF0::
# 286 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡ Vaya ! ¿No me dijiste el verdadero?\pBueno, te oiré otra vez.$"

Naranja_IslaValencia_G08_M04_Text_081B202F::
# 290 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡Hola entrenador!\nTienes una gran sonrisa\p{COLOR 0x04}{PLAYER}: ¿?$"

Naranja_IslaValencia_G08_M04_Text_081B2063::
# 294 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿Puedo ver tu perfil?$"

Naranja_IslaValencia_G08_M04_Text_081B207F::
# 298 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡ Muchas gracias !\pEspero que sea mejor que el que me\ndijiste antes.$"

Naranja_IslaValencia_G08_M04_Text_081B20CE::
# 302 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿En serio, prefieres mantener \ntu perfil actual?\pJeje,   \p¡ Cómo tu quieras !\p¡ Es tu perfil no el mío !$"

Naranja_IslaValencia_G08_M04_Text_081B2137::
# 306 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡ Fantástico !\pTu perfil es maravilloso.\nExplica perfectamente quién eres.\pCualquiera que lo oiga se sentirá\nhechizado por tus palabras.\p¡ Gracias !$"

Naranja_IslaValencia_G08_M04_Text_081B21CC::
# 310 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Oh?\nYou know the secret saying!\pThat means you’re now a fellow member\nof the MYSTERY EVENT CLUB!$"

Naranja_IslaValencia_G08_M04_Text_086C00D5::
# 314 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Es un misterio porque los\npokemon del archipiélago son distintos\lque los del continente.\pAunque quizás lo sepa la Profesora IVY.\p{COLOR 0x04}{PLAYER}: ¿Podrìas decirme dónde\nencontrar su laboratorio?\p{COLOR 0x01}Está aquì al lado, al Este.\p¡Pero ten cuidado con los entrenadores!$"
