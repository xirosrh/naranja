Naranja_MtPyre_1F_MapScripts::
	.byte 0


Naranja_MtPyre_1F_EventScript_OldWoman2::
# 8 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	lock
# 9 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	checkflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_011A
# 11 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_1F_EventScript_Sub_0815D352
# 12 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	msgbox Naranja_MtPyre_1F_Text_08196151, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0xBE
# 14 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	callstd 0
# 16 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 17 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 18 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	setflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_011A
# 19 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	release
	end


Naranja_MtPyre_1F_EventScript_Sub_0815D352::
# 24 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	msgbox Naranja_MtPyre_1F_Text_081961CE, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	release
	end


Naranja_MtPyre_1F_EventScript_Woman2::
# 30 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	msgbox Naranja_MtPyre_1F_Text_08196218, MSGBOX_NPC
	end


Naranja_MtPyre_1F_EventScript_Man5::
# 35 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	msgbox Naranja_MtPyre_1F_Text_08196283, MSGBOX_NPC
	end


Naranja_MtPyre_1F_Text_08196151::
# 39 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\nof MT. PYRE...\pThere is no telling what may happen.\nTake this. It’s for your own good.$"

Naranja_MtPyre_1F_Text_081961CE::
# 43 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	.string "Have a POKéMON hold that\nCLEANSE TAG.\pIt will help ward off wild POKéMON.$"

Naranja_MtPyre_1F_Text_08196218::
# 47 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\nto the spirits of departed POKéMON?\pYou must care for your POKéMON a lot.$"

Naranja_MtPyre_1F_Text_08196283::
# 51 "data/maps/Naranja_MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\nZIGZAGOON. I cherished it...$"
