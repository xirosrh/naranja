Naranja_HamlinIsland_House2_MapScripts::
	.byte 0


Naranja_HamlinIsland_House2_EventScript_Gentleman::
# 8 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	lock
# 9 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	dotimebasedevents
# 11 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	call Naranja_HamlinIsland_House2_EventScript_Sub_081541B4
# 12 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	checkflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012B
# 13 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_HamlinIsland_House2_EventScript_Sub_08154254
# 14 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	checkflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012C
# 15 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	call_if EQUAL, Naranja_HamlinIsland_House2_EventScript_Sub_081541CE
# 16 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	checkflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012C
# 17 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	call_if LESS_THAN, Naranja_HamlinIsland_House2_EventScript_Sub_081541D7
# 18 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012C
# 19 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 20 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 21 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_HamlinIsland_House2_EventScript_Sub_081541EC
# 22 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 23 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 24 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_HamlinIsland_House2_EventScript_Sub_0815421B
# 25 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto Naranja_HamlinIsland_House2_EventScript_Sub_08154225
	return


Naranja_HamlinIsland_House2_EventScript_Sub_081541B4::
# 29 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	checkflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012B
# 30 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto_if LESS_THAN, Naranja_HamlinIsland_House2_EventScript_Sub_081A14DC
# 31 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 32 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	call_if EQUAL, Naranja_HamlinIsland_House2_EventScript_Sub_081541E8
	return


Naranja_HamlinIsland_House2_EventScript_Sub_081541CE::
# 38 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_08179155, MSGBOX_DEFAULT
	return


Naranja_HamlinIsland_House2_EventScript_Sub_081541D7::
# 43 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_081790C1, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_08179155, MSGBOX_DEFAULT
	return


Naranja_HamlinIsland_House2_EventScript_Sub_081541E8::
# 49 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	clearflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012B
	return


Naranja_HamlinIsland_House2_EventScript_Sub_081541EC::
# 54 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_08179169, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13B
# 56 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 57 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	callstd 0
# 58 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 59 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 60 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012B
# 61 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 62 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_08179283, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	release
	end


Naranja_HamlinIsland_House2_EventScript_Sub_0815421B::
# 68 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_081791CA, MSGBOX_DEFAULT
# 69 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	release
	end


Naranja_HamlinIsland_House2_EventScript_Sub_08154225::
# 74 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_0817922D, MSGBOX_DEFAULT
# 75 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setorcopyvar VAR_0x8000, 0x135
# 76 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 77 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	callstd 0
# 78 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 79 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 80 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	setflag FLAG_NARANJA_HAMLIN_ISLAND_EVENT_COMPLETE_012B
# 81 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 82 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_08179283, MSGBOX_DEFAULT
# 83 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	release
	end


Naranja_HamlinIsland_House2_EventScript_Sub_08154254::
# 88 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 89 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 90 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_081792F2, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	release
	end


Naranja_HamlinIsland_House2_EventScript_Azurill::
# 96 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	lock
# 97 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	faceplayer
# 98 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	waitse
# 99 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, 0
# 100 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_0817938B, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	waitmoncry
# 102 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_0817939B, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	release
	end


Naranja_HamlinIsland_House2_EventScript_Azurill_2::
# 108 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	lock
# 109 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	faceplayer
# 110 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	waitse
# 111 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, 2
# 112 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_081793CC, MSGBOX_DEFAULT
# 113 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	waitmoncry
# 114 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	msgbox Naranja_HamlinIsland_House2_Text_081793DD, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	release
	end


Naranja_HamlinIsland_House2_EventScript_Sub_081A14DC::
	return


Naranja_HamlinIsland_House2_Text_081790C1::
# 123 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "$"

Naranja_HamlinIsland_House2_Text_08179155::
# 127 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "Ah!\nYour POKéMON...$"

Naranja_HamlinIsland_House2_Text_08179169::
# 131 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "It clearly likes you very much.\pA POKéMON that adoring and adorable\ndeserves a TM like this, no?$"

Naranja_HamlinIsland_House2_Text_081791CA::
# 135 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "Hmm...\nIt’s not bad, but it’s also not good.\pYou, as the TRAINER, need to put in\nsome more effort.$"

Naranja_HamlinIsland_House2_Text_0817922D::
# 139 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "It has a vicious look to it.\pA frightening POKéMON like that\ndeserves a TM like this.$"

Naranja_HamlinIsland_House2_Text_08179283::
# 143 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "If a POKéMON likes you a lot, RETURN’s\npower is enhanced.\pIf it doesn’t like you, FRUSTRATION’s\npower goes up.$"

Naranja_HamlinIsland_House2_Text_081792F2::
# 147 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\nI should be getting a good TM or two.\pYou should come see me then.\nI’ll give you a TM that’s suitable for\lyour POKéMON.$"

Naranja_HamlinIsland_House2_Text_0817938B::
# 151 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "AZURILL: Rurii.$"

Naranja_HamlinIsland_House2_Text_0817939B::
# 155 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "It appears to be very friendly with the\nTRAINER.$"

Naranja_HamlinIsland_House2_Text_081793CC::
# 159 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "AZURILL: Rururi!$"

Naranja_HamlinIsland_House2_Text_081793DD::
# 163 "data/maps/Naranja_HamlinIsland_House2/scripts.pory"
	.string "It doesn’t appear to like the TRAINER\nvery much.$"
