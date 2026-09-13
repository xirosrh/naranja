Naranja_IslaTrovita_G11_M00_MapScripts::
# 5 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTrovita_G11_M00_OnTransition
	.byte 0


Naranja_IslaTrovita_G11_M00_OnTransition::
# 9 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_MET_MARA_ON_TROVITA
# 10 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	call_if LESS_THAN, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157416
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157416::
# 15 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G11_M00_MAN_7_2, 0xE, 2
# 16 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G11_M00_MAN_7_2, 8
	return


Naranja_IslaTrovita_G11_M00_EventScript_OBJ_EVENT_GFX_MAN_7_LocalId1::
# 21 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	lock
# 22 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	faceplayer
# 23 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_MET_MARA_ON_TROVITA
# 24 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815744A
# 25 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 26 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157440
# 27 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_081829A4, MSGBOX_DEFAULT
# 28 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157440::
# 33 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_08182A19, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815744A::
# 39 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_08182AB3, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_OBJ_EVENT_GFX_MAN_7_LocalId2::
# 45 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	lock
# 46 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	faceplayer
# 47 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_MET_MARA_ON_TROVITA
# 48 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815747B
# 49 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_TEAM_ROCKET_IN_CRYSTAL_CAVE
# 50 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157485
# 51 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 52 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157485
# 53 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_08182AF0, MSGBOX_DEFAULT
# 54 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815747B::
# 59 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_08182B5A, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157485::
# 65 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_08182B2D, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId3::
# 71 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	lock
# 72 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_MET_MARA_ON_TROVITA
# 74 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574B6
# 75 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_TEAM_ROCKET_IN_CRYSTAL_CAVE
# 76 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574C0
# 77 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 78 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574C0
# 79 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_081828EE, MSGBOX_DEFAULT
# 80 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574B6::
# 85 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_081828EE, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574C0::
# 91 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M00_Text_0818295E, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_Text_081828EE::
# 96 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "Hello and welcome to the DEVON\nCORPORATION.\pWe’re proud producers of items and\nmedicine that enhance your life.$"

Naranja_IslaTrovita_G11_M00_Text_0818295E::
# 100 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "One of our research staff stupidly\ngot robbed of an important parcel.$"

Naranja_IslaTrovita_G11_M00_Text_081829A4::
# 104 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "Hey, those RUNNING SHOES!\nThey’re one of our products!\pIt makes me happy when I see someone\nusing something we made.$"

Naranja_IslaTrovita_G11_M00_Text_08182A19::
# 108 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "That stolen parcel...\pWell, sure it’s important, but it’s not\nanything that anyone can use.\pIn my estimation, that robber must not\nhave been very bright.$"

Naranja_IslaTrovita_G11_M00_Text_08182AB3::
# 112 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "It sounds like they’ve recovered\nthe ripped-off DEVON GOODS.$"

Naranja_IslaTrovita_G11_M00_Text_08182AF0::
# 116 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "I’m sorry, only authorized people\nare allowed to enter here.$"

Naranja_IslaTrovita_G11_M00_Text_08182B2D::
# 120 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "It’s beyond stupid.\nHow could we get robbed?$"

Naranja_IslaTrovita_G11_M00_Text_08182B5A::
# 124 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "Hi, there!\nYou’re always welcome here!$"
