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
	msgbox Naranja_IslaValencia_G08_M04_Text_0817BD30, MSGBOX_NPC
	end


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId4::
# 29 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_0817BD92, MSGBOX_NPC
	end


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId5::
# 34 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 35 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_086C00D5, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 38 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 39 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_0815524F
# 40 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_0815524F::
# 45 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_STARTER_MON, 0
# 46 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155272
# 47 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_STARTER_MON, 1
# 48 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_0815527B
# 49 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_STARTER_MON, 2
# 50 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155284
# 51 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_08155272::
# 56 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_0817BE6C, MSGBOX_DEFAULT
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_0815527B::
# 61 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_0817BEF1, MSGBOX_DEFAULT
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_08155284::
# 66 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_0817BF73, MSGBOX_DEFAULT
	return


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId2::
# 71 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 72 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_0805
# 74 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BDB
# 75 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1C97, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B2D
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B2D::
# 80 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1D10, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	multichoice 0x11, 6, 0x14, 0
# 82 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 83 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 84 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B7A
# 85 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 86 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BD1
# 87 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 88 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B6C
# 89 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 90 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BD1
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B6C::
# 95 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1D3A, MSGBOX_DEFAULT
# 96 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B2D
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1B7A::
# 100 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1F7B, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	closemessage
# 102 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 103 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 104 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 105 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 106 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 107 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C77
# 108 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 109 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BB1
# 110 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 111 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BBB
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BB1::
# 116 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1FF0, MSGBOX_DEFAULT
# 117 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BBB::
# 122 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 123 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	special ShowEasyChatProfile
# 124 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	waitmessage
# 125 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	delay 0x50
# 126 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B2137, MSGBOX_DEFAULT
# 127 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BD1::
# 132 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1FA3, MSGBOX_DEFAULT
# 133 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BDB::
# 138 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B202F, MSGBOX_DEFAULT
# 139 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BE9
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BE9::
# 143 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B2063, MSGBOX_DEFAULT
# 144 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	multichoice 0x11, 6, 0x14, 0
# 145 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 146 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 147 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C36
# 148 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 149 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C6D
# 150 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 151 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C28
# 152 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 153 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C6D
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C28::
# 158 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B1D3A, MSGBOX_DEFAULT
# 159 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BE9
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C36::
# 163 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B207F, MSGBOX_DEFAULT
# 164 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	closemessage
# 165 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 166 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 167 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	lock
# 168 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 169 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 170 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C77
# 171 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 172 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BB1
# 173 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 174 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1BBB
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C6D::
# 179 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B20CE, MSGBOX_DEFAULT
# 180 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C77::
# 185 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 186 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C96
# 187 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_084C
# 188 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C96
# 189 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_084C
# 190 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_081B21CC, MSGBOX_SIGN
# 191 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	release
	end


Naranja_IslaValencia_G08_M04_EventScript_Sub_081B1C96::
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3506::
# 200 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 201 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	msgbox Naranja_IslaValencia_G08_M04_Text_0817C1EC, MSGBOX_AUTOCLOSE
# 202 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_ValnTang_G07_M02_EventScript_Trigger_1
	return


Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3F85::
# 206 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 207 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 208 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155213
# 209 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	goto Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3506
	return


Naranja_IslaValencia_G08_M04_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 213 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	faceplayer
# 214 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	nop
# 215 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	checkflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 216 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaValencia_G08_M04_EventScript_Sub_08155213
# 217 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	nop
# 218 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	call Naranja_IslaValencia_G08_M04_EventScript_Sub_086B3F85
	end


Naranja_IslaValencia_G08_M04_Text_0817BD30::
# 222 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿Sabes cómo usar un ordenador?\p{COLOR 0x04}{PLAYER}: ¡Mejor que tù!\p{COLOR 0x01}Está bien, solo pretendia ayudarte.$"

Naranja_IslaValencia_G08_M04_Text_0817BD92::
# 226 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡Hola!  ¿Que tal? \p{COLOR 0x04}{PLAYER}: ¿Y tu chavalín?\p{COLOR 0x01}Bien.$"

Naranja_IslaValencia_G08_M04_Text_0817BE6C::
# 230 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "For example, your TREECKO is a\nGRASS type.\pIt’s strong against the WATER and\nGROUND types.\pBut, it’s weak against FIRE-type\nPOKéMON.$"

Naranja_IslaValencia_G08_M04_Text_0817BEF1::
# 234 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "For example, your TORCHIC is a\nFIRE type.\pIt’s strong against the GRASS and\nBUG types.\pBut, it’s weak against WATER-type\nPOKéMON.$"

Naranja_IslaValencia_G08_M04_Text_0817BF73::
# 238 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "For example, your MUDKIP is a\nWATER type.\pIt’s strong against the FIRE type.\pBut, it’s weak against GRASS-type\nand ELECTRIC-type POKéMON.$"

Naranja_IslaValencia_G08_M04_Text_0817C1EC::
# 242 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡¿Una parálisis nerviosa\ncausada por esporas de Vileplume?!\p¡Eso puede ser grave!\pEs la hora de la enfermera Joy\p{COLOR 0x04}(¿Cómorr?)\nDebemos darnos prisa, enfermera.\p{COLOR 0x01}Cierto {PLAYER}.\nMe ocuparé de trasladarles aquí.\lEn cuanto termine, vuelve al\llaboratorio de Ivy.$"

Naranja_IslaValencia_G08_M04_Text_081B1C97::
# 246 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Hello there, TRAINER!\nYou’ve got a wonderful smile, there.\pI have a hobby - collecting the profiles\nof POKéMON TRAINERS.$"

Naranja_IslaValencia_G08_M04_Text_081B1D10::
# 250 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿Y el tuyo?      \n¿Me lo podrías enseñar?$"

Naranja_IslaValencia_G08_M04_Text_081B1D3A::
# 254 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "You make your own profile by putting\ntogether four words or phrases.\pHere, I’ll show you an example of a\nprofile using four pieces of text.\pYou can switch those four pieces with\nother text pieces any which way you\llike to make your own profile.\pThere are a lot of text pieces that you\ncan use.\pThey are arranged in groups like\nPOKéMON, lifestyles, and hobbies so\lit is easier to look them up.\pSo, first, choose the group of text\npieces to display a list of choices.\pThen, pick the choice you want.\pRepeat for the remaining text choices,\nand you’ll have your very own profile.$"

Naranja_IslaValencia_G08_M04_Text_081B1F7B::
# 258 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡Gracias!\n¿ Me dejarías ver tu perfil ?$"

Naranja_IslaValencia_G08_M04_Text_081B1FA3::
# 262 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Oh, no, really?\pI imagine someone like you would have\na wonderful profile...$"

Naranja_IslaValencia_G08_M04_Text_081B1FF0::
# 266 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡ Vaya ! ¿No me dijiste el verdadero?\pBueno, te oiré otra vez.$"

Naranja_IslaValencia_G08_M04_Text_081B202F::
# 270 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡Hola entrenador!\nTienes una gran sonrisa\p{COLOR 0x04}{PLAYER}: ¿?$"

Naranja_IslaValencia_G08_M04_Text_081B2063::
# 274 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿Puedo ver tu perfil?$"

Naranja_IslaValencia_G08_M04_Text_081B207F::
# 278 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡ Muchas gracias !\pEspero que sea mejor que el que me\ndijiste antes.$"

Naranja_IslaValencia_G08_M04_Text_081B20CE::
# 282 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¿En serio, prefieres mantener \ntu perfil actual?\pJeje,   \p¡ Cómo tu quieras !\p¡ Es tu perfil no el mío !$"

Naranja_IslaValencia_G08_M04_Text_081B2137::
# 286 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "¡ Fantástico !\pTu perfil es maravilloso.\nExplica perfectamente quién eres.\pCualquiera que lo oiga se sentirá\nhechizado por tus palabras.\p¡ Gracias !$"

Naranja_IslaValencia_G08_M04_Text_081B21CC::
# 290 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Oh?\nYou know the secret saying!\pThat means you’re now a fellow member\nof the MYSTERY EVENT CLUB!$"

Naranja_IslaValencia_G08_M04_Text_086C00D5::
# 294 "data/maps/Naranja_IslaValencia_G08_M04/scripts.pory"
	.string "Es un misterio porque los\npokemon del archipiélago son distintos\lque los del continente.\pAunque quizás lo sepa la Profesora IVY.\p{COLOR 0x04}{PLAYER}: ¿Podrìas decirme dónde\nencontrar su laboratorio?\p{COLOR 0x01}Está aquì al lado, al Este.\p¡Pero ten cuidado con los entrenadores!$"
