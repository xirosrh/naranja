Naranja_Route131_G00_M46_MapScripts::
# 5 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route131_G00_M46_OnTransition
	.byte 0


Naranja_Route131_G00_M46_OnTransition::
# 9 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 10 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	call_if EQUAL, Naranja_Route131_G00_M46_EventScript_Sub_0815244E
	end


Naranja_Route131_G00_M46_EventScript_Sub_0815244E::
# 15 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	setmaplayoutindex 0x140
	return


Naranja_Route131_G00_M46_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 20 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE131_166, Naranja_Route131_G00_M46_Text_081C25B3, Naranja_Route131_G00_M46_Text_081C25F8
# 21 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	msgbox Naranja_Route131_G00_M46_Text_081C262A, MSGBOX_AUTOCLOSE
	end


Naranja_Route131_G00_M46_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId2::
# 26 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE131_167, Naranja_Route131_G00_M46_Text_081C26B9, Naranja_Route131_G00_M46_Text_081C271F
# 27 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	msgbox Naranja_Route131_G00_M46_Text_081C2726, MSGBOX_AUTOCLOSE
	end


Naranja_Route131_G00_M46_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 32 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE131_456, Naranja_Route131_G00_M46_Text_081C2774, Naranja_Route131_G00_M46_Text_081C27A4
# 33 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	msgbox Naranja_Route131_G00_M46_Text_081C27CF, MSGBOX_AUTOCLOSE
	end


Naranja_Route131_G00_M46_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 38 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE131_457, Naranja_Route131_G00_M46_Text_081C284A, Naranja_Route131_G00_M46_Text_081C2883
# 39 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	msgbox Naranja_Route131_G00_M46_Text_081C2898, MSGBOX_AUTOCLOSE
	end


Naranja_Route131_G00_M46_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId5::
# 44 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE131_686, Naranja_Route131_G00_M46_Text_081C28E2, Naranja_Route131_G00_M46_Text_081C2918, Naranja_Route131_G00_M46_Text_081C29B2
# 45 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	msgbox Naranja_Route131_G00_M46_Text_081C2950, MSGBOX_AUTOCLOSE
	end


Naranja_Route131_G00_M46_EventScript_OBJ_EVENT_GFX_TUBER_M_SWIMMING_LocalId6::
# 50 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE131_686, Naranja_Route131_G00_M46_Text_081C29F3, Naranja_Route131_G00_M46_Text_081C2A20, Naranja_Route131_G00_M46_Text_081C2ACA
# 51 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	msgbox Naranja_Route131_G00_M46_Text_081C2A5D, MSGBOX_AUTOCLOSE
	end


Naranja_Route131_G00_M46_Text_081C25B3::
# 55 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "The sea is teeming with POKéMON.\nIt’s not easy swimming, I tell you.$"

Naranja_Route131_G00_M46_Text_081C25F8::
# 59 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "POKéMON raised by TRAINERS are\nseriously tough...$"

Naranja_Route131_G00_M46_Text_081C262A::
# 63 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Gasp... Gasp... I’m wiped out...\pThe going’s easy. It’s the leaving\nthat’s the hard part.\pWill I have any energy left to make\nthe return trip?$"

Naranja_Route131_G00_M46_Text_081C26B9::
# 67 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "The sea... The sea... The sea...\nThe sea as far as these eyes can see!\lI’m sick and tired of the sea!$"

Naranja_Route131_G00_M46_Text_081C271F::
# 71 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Bleah!$"

Naranja_Route131_G00_M46_Text_081C2726::
# 75 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Bored I am by the sea, but swim I must.\pI’m a born swimmer!\nThat’s what I am.$"

Naranja_Route131_G00_M46_Text_081C2774::
# 79 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Hi, sweetie, wait!\nWe should battle, you and I!$"

Naranja_Route131_G00_M46_Text_081C27A4::
# 83 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "You’re tough in spite of the way\nyou look!$"

Naranja_Route131_G00_M46_Text_081C27CF::
# 87 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Did you see a guy over there who whines\nthat he’s bored of the sea?\pThat’s all talk.\nHe’s hopelessly in love with the sea!$"

Naranja_Route131_G00_M46_Text_081C284A::
# 91 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Why do men love bathing suits so much?\pThey all ogle me!$"

Naranja_Route131_G00_M46_Text_081C2883::
# 95 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "I’m out of my depth!$"

Naranja_Route131_G00_M46_Text_081C2898::
# 99 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "Maybe it’s not my bathing suit that\nmakes men look. It must be my beauty!$"

Naranja_Route131_G00_M46_Text_081C28E2::
# 103 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "RELI: We’ll work together as siblings\nto take you on!$"

Naranja_Route131_G00_M46_Text_081C2918::
# 107 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "RELI: We couldn’t win even though we\nworked together...$"

Naranja_Route131_G00_M46_Text_081C2950::
# 111 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "RELI: The people of PACIFIDLOG are\ntogether with the sea and POKéMON from\lthe time they are born.$"

Naranja_Route131_G00_M46_Text_081C29B2::
# 115 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "RELI: You don’t have two POKéMON?\nWe can’t enjoy a battle, then.$"

Naranja_Route131_G00_M46_Text_081C29F3::
# 119 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "IAN: I’m doing my best together with\nmy sis!$"

Naranja_Route131_G00_M46_Text_081C2A20::
# 123 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "IAN: I did my best with my sis, but\nwe still couldn’t win...$"

Naranja_Route131_G00_M46_Text_081C2A5D::
# 127 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "IAN: You know how PACIFIDLOG is\na floating town?\pSo, wherever there is the sea, that’s\na part of PACIFIDLOG!$"

Naranja_Route131_G00_M46_Text_081C2ACA::
# 131 "data/maps/Naranja_Route131_G00_M46/scripts.pory"
	.string "IAN: If you have two POKéMON, we’ll\ntake you on!$"
