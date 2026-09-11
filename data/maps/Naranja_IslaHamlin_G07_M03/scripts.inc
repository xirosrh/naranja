Naranja_IslaHamlin_G07_M03_MapScripts::
	.byte 0


Naranja_IslaHamlin_G07_M03_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId1::
# 8 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	dotimebasedevents
# 11 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	call Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541B4
# 12 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012B
# 13 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_08154254
# 14 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012C
# 15 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541CE
# 16 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012C
# 17 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	call_if LESS_THAN, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541D7
# 18 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012C
# 19 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 20 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 21 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541EC
# 22 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 23 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 24 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_0815421B
# 25 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto Naranja_IslaHamlin_G07_M03_EventScript_Sub_08154225
	return


Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541B4::
# 29 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012B
# 30 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 31 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 32 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541E8
	return


Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541CE::
# 38 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_08179155
# 39 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
	return


Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541D7::
# 44 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_081790C1
# 45 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_08179155
# 47 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
	return


Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541E8::
# 52 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012B
	return


Naranja_IslaHamlin_G07_M03_EventScript_Sub_081541EC::
# 57 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_08179169
# 58 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 59 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13B
# 60 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 61 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 0
# 62 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 63 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 64 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012B
# 65 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 66 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_08179283
# 67 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 68 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M03_EventScript_Sub_0815421B::
# 73 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_081791CA
# 74 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M03_EventScript_Sub_08154225::
# 80 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_0817922D
# 81 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x135
# 83 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 84 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 0
# 85 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 86 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 87 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_HAMLIN_EVENT_COMPLETE_012B
# 88 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 89 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_08179283
# 90 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M03_EventScript_Sub_08154254::
# 96 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 97 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 98 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_081792F2
# 99 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M03_EventScript_OBJ_EVENT_GFX_AZURILL_LocalId2::
# 105 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	lock
# 106 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	faceplayer
# 107 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	waitse
# 108 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	playmoncry SPECIES_AZURILL, 0
# 109 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_0817938B
# 110 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	waitmoncry
# 112 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_0817939B
# 113 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M03_EventScript_OBJ_EVENT_GFX_AZURILL_LocalId3::
# 119 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	lock
# 120 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	faceplayer
# 121 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	waitse
# 122 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	playmoncry SPECIES_AZURILL, 2
# 123 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_081793CC
# 124 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 125 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	waitmoncry
# 126 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M03_Text_081793DD
# 127 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	callstd 4
# 128 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC::
	return


Naranja_IslaHamlin_G07_M03_Text_081790C1::
# 136 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "$"

Naranja_IslaHamlin_G07_M03_Text_08179155::
# 140 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "Ah!\nYour POKéMON...$"

Naranja_IslaHamlin_G07_M03_Text_08179169::
# 144 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "It clearly likes you very much.\pA POKéMON that adoring and adorable\ndeserves a TM like this, no?$"

Naranja_IslaHamlin_G07_M03_Text_081791CA::
# 148 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "Hmm...\nIt’s not bad, but it’s also not good.\pYou, as the TRAINER, need to put in\nsome more effort.$"

Naranja_IslaHamlin_G07_M03_Text_0817922D::
# 152 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "It has a vicious look to it.\pA frightening POKéMON like that\ndeserves a TM like this.$"

Naranja_IslaHamlin_G07_M03_Text_08179283::
# 156 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "If a POKéMON likes you a lot, RETURN’s\npower is enhanced.\pIf it doesn’t like you, FRUSTRATION’s\npower goes up.$"

Naranja_IslaHamlin_G07_M03_Text_081792F2::
# 160 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\nI should be getting a good TM or two.\pYou should come see me then.\nI’ll give you a TM that’s suitable for\lyour POKéMON.$"

Naranja_IslaHamlin_G07_M03_Text_0817938B::
# 164 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "AZURILL: Rurii.$"

Naranja_IslaHamlin_G07_M03_Text_0817939B::
# 168 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "It appears to be very friendly with the\nTRAINER.$"

Naranja_IslaHamlin_G07_M03_Text_081793CC::
# 172 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "AZURILL: Rururi!$"

Naranja_IslaHamlin_G07_M03_Text_081793DD::
# 176 "data/maps/Naranja_IslaHamlin_G07_M03/scripts.pory"
	.string "It doesn’t appear to like the TRAINER\nvery much.$"
