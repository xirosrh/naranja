Naranja_Route111_G18_M00_MapScripts::
	.byte 0


Naranja_Route111_G18_M00_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId2::
# 8 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	lock
# 9 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setvar VAR_0x8008, 2
# 11 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	loadword 0, Naranja_Route111_G18_M00_Text_08191FCE
# 12 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 4
# 13 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4
	return


Naranja_Route111_G18_M00_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId3::
# 17 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	lock
# 18 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	faceplayer
# 19 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setvar VAR_0x8008, 3
# 20 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0115
# 21 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G18_M00_EventScript_Sub_0815BF72
# 22 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	loadword 0, Naranja_Route111_G18_M00_Text_0819208A
# 23 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 4
# 24 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB5
# 25 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 26 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 0
# 27 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 28 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 29 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0115
# 30 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4
	return


Naranja_Route111_G18_M00_EventScript_Sub_0815BF72::
# 34 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	loadword 0, Naranja_Route111_G18_M00_Text_0819214D
# 35 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4
	return


Naranja_Route111_G18_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId1::
# 40 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	lock
# 41 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	faceplayer
# 42 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setvar VAR_0x8008, 1
# 43 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	loadword 0, Naranja_Route111_G18_M00_Text_08192190
# 44 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4
	return


Naranja_Route111_G18_M00_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId4::
# 49 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	lock
# 50 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	faceplayer
# 51 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setvar VAR_0x8008, 4
# 52 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	checkflag FLAG_TEMP_4
# 53 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G18_M00_EventScript_Sub_0815BFB6
# 54 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	loadword 0, Naranja_Route111_G18_M00_Text_08192219
# 55 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	setflag FLAG_TEMP_4
# 57 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4
	return


Naranja_Route111_G18_M00_EventScript_Sub_0815BFB6::
# 61 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	loadword 0, Naranja_Route111_G18_M00_Text_08192334
# 62 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	goto Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4
	return


Naranja_Route111_G18_M00_EventScript_Sub_0815BFC4::
# 67 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	closemessage
# 68 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	applymovement 32776, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 69 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	release
	end


Naranja_Route111_G18_M00_Text_08191FCE::
# 74 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	.string "You’re the first TRAINER I’ve seen who\ndeploys POKéMON so masterfully.\pBut, I should tell you - my son is\nstronger than you.\pHe even took the POKéMON LEAGUE\nchallenge, I’ll have you know.$"

Naranja_Route111_G18_M00_Text_0819208A::
# 78 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	.string "We use this MACHO BRACE to more\neffectively strengthen our POKéMON\lin training.\pSince you’ve beaten our entire family,\nI don’t know if you need it, but we\lwould like you to have our MACHO BRACE.$"

Naranja_Route111_G18_M00_Text_0819214D::
# 82 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	.string "When it comes to POKéMON battles,\nwe tend to be pretty passionate.$"

Naranja_Route111_G18_M00_Text_08192190::
# 86 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	.string "Mommy is stronger than Daddy.\pI’m stronger than Mommy.\pAnd Grandma’s stronger than me!\pBut my big brother is even stronger\nthan Grandma.$"

Naranja_Route111_G18_M00_Text_08192219::
# 90 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	.string "There’s no question that you’re strong.\pBut if you were to battle my grandson,\nyou’d end up crying in frustration.\pHe’s much stronger than any TRAINER\nour family knows.\pHe must be challenging the POKéMON\nLEAGUE CHAMPION by now.\pKnowing my grandson, he could be the\nCHAMPION already!$"

Naranja_Route111_G18_M00_Text_08192334::
# 94 "data/maps/Naranja_Route111_G18_M00/scripts.pory"
	.string "My grandson must be challenging the\nPOKéMON LEAGUE CHAMPION by now.\pKnowing my grandson, he could be the\nCHAMPION already!$"
