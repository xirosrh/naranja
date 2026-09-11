Naranja_IslaTrovita_G11_M00_MapScripts::
# 5 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTrovita_G11_M00_OnTransition
	.byte 0


Naranja_IslaTrovita_G11_M00_OnTransition::
# 9 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0090
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
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0090
# 24 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815744A
# 25 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 26 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157440
# 27 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_081829A4
# 28 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157440::
# 34 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_08182A19
# 35 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815744A::
# 41 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_08182AB3
# 42 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 43 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_OBJ_EVENT_GFX_MAN_7_LocalId2::
# 48 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	lock
# 49 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	faceplayer
# 50 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0090
# 51 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815747B
# 52 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 53 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157485
# 54 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 55 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157485
# 56 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_08182AF0
# 57 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 58 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_0815747B::
# 63 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_08182B5A
# 64 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 65 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_08157485::
# 70 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_08182B2D
# 71 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId3::
# 77 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	lock
# 78 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	faceplayer
# 79 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0090
# 80 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574B6
# 81 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 82 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574C0
# 83 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 84 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574C0
# 85 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_081828EE
# 86 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574B6::
# 92 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_081828EE
# 93 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 94 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_EventScript_Sub_081574C0::
# 99 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M00_Text_0818295E
# 100 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M00_Text_081828EE::
# 105 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "Hello and welcome to the DEVON\nCORPORATION.\pWe’re proud producers of items and\nmedicine that enhance your life.$"

Naranja_IslaTrovita_G11_M00_Text_0818295E::
# 109 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "One of our research staff stupidly\ngot robbed of an important parcel.$"

Naranja_IslaTrovita_G11_M00_Text_081829A4::
# 113 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "Hey, those RUNNING SHOES!\nThey’re one of our products!\pIt makes me happy when I see someone\nusing something we made.$"

Naranja_IslaTrovita_G11_M00_Text_08182A19::
# 117 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "That stolen parcel...\pWell, sure it’s important, but it’s not\nanything that anyone can use.\pIn my estimation, that robber must not\nhave been very bright.$"

Naranja_IslaTrovita_G11_M00_Text_08182AB3::
# 121 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "It sounds like they’ve recovered\nthe ripped-off DEVON GOODS.$"

Naranja_IslaTrovita_G11_M00_Text_08182AF0::
# 125 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "I’m sorry, only authorized people\nare allowed to enter here.$"

Naranja_IslaTrovita_G11_M00_Text_08182B2D::
# 129 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "It’s beyond stupid.\nHow could we get robbed?$"

Naranja_IslaTrovita_G11_M00_Text_08182B5A::
# 133 "data/maps/Naranja_IslaTrovita_G11_M00/scripts.pory"
	.string "Hi, there!\nYou’re always welcome here!$"
