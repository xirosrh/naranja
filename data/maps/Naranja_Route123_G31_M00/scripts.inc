Naranja_Route123_G31_M00_MapScripts::
# 5 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route123_G31_M00_OnTransition
	.byte 0


Naranja_Route123_G31_M00_OnTransition::
# 9 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_0863
	end


Naranja_Route123_G31_M00_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 14 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	dotimebasedevents
# 17 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08CD
# 18 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163A5A
# 19 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5BC4
# 20 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 21 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	random 0xA
# 22 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x14
# 23 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x85
# 24 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 25 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 26 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 27 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 28 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 29 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08CD
# 30 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5C66
# 31 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	random 0xA
# 33 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x14
# 34 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x85
# 35 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 36 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 37 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 38 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 39 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 40 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5C83
# 41 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 42 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163A5A::
# 47 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5CDC
# 48 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId2::
# 54 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	lock
# 55 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	faceplayer
# 56 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	dotimebasedevents
# 57 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08D1
# 58 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163C13
# 59 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5D24
# 60 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setvar VAR_0x8004, 0xD
# 62 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 63 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	lock
# 64 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	faceplayer
# 65 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 66 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AAD
# 67 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 68 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163A9B
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163A9B::
# 73 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5EC0
# 74 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5E59
# 76 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 77 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163AAD::
# 82 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 83 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 84 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 85 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163B1E
# 86 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 87 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163B4F
# 88 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 89 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163B80
# 90 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 91 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163BB1
# 92 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 93 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163BE2
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163AF0::
# 98 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5E0E
# 99 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	random 0xA
# 101 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x85
# 102 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 103 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 104 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 105 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 106 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 107 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163B1E::
# 111 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F8
# 112 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 113 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5DC1
# 114 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 115 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA3
# 116 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 117 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 118 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 119 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 120 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F8
# 121 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163B4F::
# 125 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F9
# 126 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 127 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5DC1
# 128 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 129 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA4
# 130 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 131 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 132 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 133 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 134 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F9
# 135 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163B80::
# 139 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FA
# 140 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 141 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5DC1
# 142 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 143 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA5
# 144 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 145 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 146 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 147 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 148 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FA
# 149 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163BB1::
# 153 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FB
# 154 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 155 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5DC1
# 156 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 157 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA6
# 158 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 159 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 160 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 161 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 162 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FB
# 163 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163BE2::
# 167 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FC
# 168 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 169 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5DC1
# 170 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 171 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA7
# 172 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 173 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 174 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 175 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 176 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FC
# 177 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163C13::
# 181 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5E59
# 182 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 183 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163C1D::
# 188 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08D1
# 189 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	loadword 0, Naranja_Route123_G31_M00_Text_081C5E59
# 190 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 4
# 191 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_081A00F3::
# 196 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	fadescreen 1
# 197 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	special ShowEasyChatScreen
# 198 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	fadescreen 0
	return


Naranja_Route123_G31_M00_Text_081C5BC4::
# 202 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "You may call me the BERRY MASTER.\pI dream of filling the world with\nbeautiful flowers, so I raise BERRIES\land hand them out to everyone.\pYou’re deserving of one!$"

Naranja_Route123_G31_M00_Text_081C5C66::
# 206 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Why be stingy?\nTake another!$"

Naranja_Route123_G31_M00_Text_081C5C83::
# 210 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Be sure to visit the PRETTY PETAL\nflower shop near RUSTBORO.\pLet flowers fill the world!$"

Naranja_Route123_G31_M00_Text_081C5CDC::
# 214 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "I’m done for today.\nCome again another day.\pLet flowers fill the world!$"

Naranja_Route123_G31_M00_Text_081C5D24::
# 218 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "The way my husband grows BERRIES,\noh, he’s the best in the world.\pHe makes me proud, that he does.\pIncidentally, child, have you heard\na good saying lately?$"

Naranja_Route123_G31_M00_Text_081C5DC1::
# 222 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Ah! What a remarkable saying!\nInspirational, it is!\pI want you to have this.$"

Naranja_Route123_G31_M00_Text_081C5E0E::
# 226 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Oh! A good saying it is.\nYou’re quite remarkable.\pI want you to have this.$"

Naranja_Route123_G31_M00_Text_081C5E59::
# 230 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Our four grandchildren should become\nmore accomplished than my husband.\pJoy never goes out of my life!$"

Naranja_Route123_G31_M00_Text_081C5EC0::
# 234 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Ah...$"
