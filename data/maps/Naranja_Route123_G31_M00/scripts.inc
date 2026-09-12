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
	msgbox Naranja_Route123_G31_M00_Text_081C5BC4, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	random 0xA
# 21 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x14
# 22 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x85
# 23 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 24 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 25 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 26 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 27 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 28 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08CD
# 29 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5C66, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	random 0xA
# 31 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x14
# 32 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x85
# 33 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 34 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 35 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 36 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 37 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 38 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5C83, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163A5A::
# 44 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5CDC, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId2::
# 50 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	lock
# 51 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	faceplayer
# 52 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	dotimebasedevents
# 53 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08D1
# 54 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163C13
# 55 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5D24, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setvar VAR_0x8004, 0xD
# 57 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 58 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	lock
# 59 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	faceplayer
# 60 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AAD
# 62 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 63 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163A9B
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163A9B::
# 68 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5EC0, MSGBOX_DEFAULT
# 69 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5E59, MSGBOX_DEFAULT
# 70 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163AAD::
# 75 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 76 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 77 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 78 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163B1E
# 79 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 80 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163B4F
# 81 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 82 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163B80
# 83 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 84 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163BB1
# 85 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 86 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163BE2
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163AF0::
# 91 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5E0E, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	random 0xA
# 93 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	addvar VAR_RESULT, 0x85
# 94 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 95 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 96 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 97 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 98 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 99 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163B1E::
# 103 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F8
# 104 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 105 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5DC1, MSGBOX_DEFAULT
# 106 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA3
# 107 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 108 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 109 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 110 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 111 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F8
# 112 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163B4F::
# 116 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F9
# 117 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 118 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5DC1, MSGBOX_DEFAULT
# 119 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA4
# 120 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 121 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 122 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 123 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 124 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00F9
# 125 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163B80::
# 129 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FA
# 130 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 131 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5DC1, MSGBOX_DEFAULT
# 132 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA5
# 133 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 134 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 135 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 136 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 137 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FA
# 138 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163BB1::
# 142 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FB
# 143 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 144 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5DC1, MSGBOX_DEFAULT
# 145 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA6
# 146 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 147 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 148 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 149 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 150 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FB
# 151 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163BE2::
# 155 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FC
# 156 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G31_M00_EventScript_Sub_08163AF0
# 157 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5DC1, MSGBOX_DEFAULT
# 158 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA7
# 159 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 160 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	callstd 0
# 161 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 162 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 163 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00FC
# 164 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	goto Naranja_Route123_G31_M00_EventScript_Sub_08163C1D
	return


Naranja_Route123_G31_M00_EventScript_Sub_08163C13::
# 168 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5E59, MSGBOX_DEFAULT
# 169 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_08163C1D::
# 174 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_08D1
# 175 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	msgbox Naranja_Route123_G31_M00_Text_081C5E59, MSGBOX_DEFAULT
# 176 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	release
	end


Naranja_Route123_G31_M00_EventScript_Sub_081A00F3::
# 181 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	fadescreen 1
# 182 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	special ShowEasyChatScreen
# 183 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	fadescreen 0
	return


Naranja_Route123_G31_M00_Text_081C5BC4::
# 187 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "You may call me the BERRY MASTER.\pI dream of filling the world with\nbeautiful flowers, so I raise BERRIES\land hand them out to everyone.\pYou’re deserving of one!$"

Naranja_Route123_G31_M00_Text_081C5C66::
# 191 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Why be stingy?\nTake another!$"

Naranja_Route123_G31_M00_Text_081C5C83::
# 195 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Be sure to visit the PRETTY PETAL\nflower shop near RUSTBORO.\pLet flowers fill the world!$"

Naranja_Route123_G31_M00_Text_081C5CDC::
# 199 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "I’m done for today.\nCome again another day.\pLet flowers fill the world!$"

Naranja_Route123_G31_M00_Text_081C5D24::
# 203 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "The way my husband grows BERRIES,\noh, he’s the best in the world.\pHe makes me proud, that he does.\pIncidentally, child, have you heard\na good saying lately?$"

Naranja_Route123_G31_M00_Text_081C5DC1::
# 207 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Ah! What a remarkable saying!\nInspirational, it is!\pI want you to have this.$"

Naranja_Route123_G31_M00_Text_081C5E0E::
# 211 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Oh! A good saying it is.\nYou’re quite remarkable.\pI want you to have this.$"

Naranja_Route123_G31_M00_Text_081C5E59::
# 215 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Our four grandchildren should become\nmore accomplished than my husband.\pJoy never goes out of my life!$"

Naranja_Route123_G31_M00_Text_081C5EC0::
# 219 "data/maps/Naranja_Route123_G31_M00/scripts.pory"
	.string "Ah...$"
