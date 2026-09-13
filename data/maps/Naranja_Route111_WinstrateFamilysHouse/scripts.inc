Naranja_Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0


Naranja_Route111_WinstrateFamilysHouse_EventScript_Man1::
# 8 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 9 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, 2
# 11 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Naranja_Route111_WinstrateFamilysHouse_Text_08191FCE, MSGBOX_DEFAULT
# 12 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4
	return


Naranja_Route111_WinstrateFamilysHouse_EventScript_Woman2::
# 16 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 17 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 18 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, 3
# 19 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0115
# 20 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BF72
# 21 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Naranja_Route111_WinstrateFamilysHouse_Text_0819208A, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB5
# 23 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 24 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	callstd 0
# 25 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 26 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 27 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0115
# 28 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4
	return


Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BF72::
# 32 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Naranja_Route111_WinstrateFamilysHouse_Text_0819214D, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4
	return


Naranja_Route111_WinstrateFamilysHouse_EventScript_Lass::
# 37 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 38 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 39 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Naranja_Route111_WinstrateFamilysHouse_Text_08192190, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4
	return


Naranja_Route111_WinstrateFamilysHouse_EventScript_OldWoman1::
# 45 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 46 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 47 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, 4
# 48 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	checkflag FLAG_TEMP_4
# 49 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFB6
# 50 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Naranja_Route111_WinstrateFamilysHouse_Text_08192219, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 52 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4
	return


Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFB6::
# 56 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Naranja_Route111_WinstrateFamilysHouse_Text_08192334, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	goto Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4
	return


Naranja_Route111_WinstrateFamilysHouse_EventScript_Sub_0815BFC4::
# 61 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 62 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement 32776, Naranja_RusturfTunnel_Movement_081A083D
# 63 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement LOCALID_NONE
# 64 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	release
	end


Naranja_Route111_WinstrateFamilysHouse_Text_08191FCE::
# 68 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You’re the first TRAINER I’ve seen who\ndeploys POKéMON so masterfully.\pBut, I should tell you - my son is\nstronger than you.\pHe even took the POKéMON LEAGUE\nchallenge, I’ll have you know.$"

Naranja_Route111_WinstrateFamilysHouse_Text_0819208A::
# 72 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We use this MACHO BRACE to more\neffectively strengthen our POKéMON\lin training.\pSince you’ve beaten our entire family,\nI don’t know if you need it, but we\lwould like you to have our MACHO BRACE.$"

Naranja_Route111_WinstrateFamilysHouse_Text_0819214D::
# 76 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\nwe tend to be pretty passionate.$"

Naranja_Route111_WinstrateFamilysHouse_Text_08192190::
# 80 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\pI’m stronger than Mommy.\pAnd Grandma’s stronger than me!\pBut my big brother is even stronger\nthan Grandma.$"

Naranja_Route111_WinstrateFamilysHouse_Text_08192219::
# 84 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There’s no question that you’re strong.\pBut if you were to battle my grandson,\nyou’d end up crying in frustration.\pHe’s much stronger than any TRAINER\nour family knows.\pHe must be challenging the POKéMON\nLEAGUE CHAMPION by now.\pKnowing my grandson, he could be the\nCHAMPION already!$"

Naranja_Route111_WinstrateFamilysHouse_Text_08192334::
# 88 "data/maps/Naranja_Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\nPOKéMON LEAGUE CHAMPION by now.\pKnowing my grandson, he could be the\nCHAMPION already!$"
