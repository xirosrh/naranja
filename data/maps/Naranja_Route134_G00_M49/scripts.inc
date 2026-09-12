Naranja_Route134_G00_M49_MapScripts::
# 5 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route134_G00_M49_OnResume
	.byte 0


Naranja_Route134_G00_M49_OnResume::
# 9 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	setdivewarp MAP_NARANJA_UNDERWATER_G24_M69, 0xFF, 8, 6
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 14 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE134_172, Naranja_Route134_G00_M49_Text_081C30C6, Naranja_Route134_G00_M49_Text_081C3110
# 15 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	msgbox Naranja_Route134_G00_M49_Text_081C311A, MSGBOX_AUTOCLOSE
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 20 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE134_463, Naranja_Route134_G00_M49_Text_081C315E, Naranja_Route134_G00_M49_Text_081C3198
# 21 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	msgbox Naranja_Route134_G00_M49_Text_081C31A0, MSGBOX_AUTOCLOSE
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId4::
# 26 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE134_413, Naranja_Route134_G00_M49_Text_081C31D7, Naranja_Route134_G00_M49_Text_081C3213
# 27 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	msgbox Naranja_Route134_G00_M49_Text_081C3229, MSGBOX_AUTOCLOSE
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 32 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE134_397, Naranja_Route134_G00_M49_Text_081C3319, Naranja_Route134_G00_M49_Text_081C335C
# 33 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	msgbox Naranja_Route134_G00_M49_Text_081C336E, MSGBOX_AUTOCLOSE
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId5::
# 38 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE134_180, Naranja_Route134_G00_M49_Text_081C3262, Naranja_Route134_G00_M49_Text_081C329E
# 39 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	msgbox Naranja_Route134_G00_M49_Text_081C32D6, MSGBOX_AUTOCLOSE
	end


Naranja_Route134_G00_M49_Text_081C30C6::
# 43 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Even those POKéMON that can swim are\ncarried along by the rapid currents.$"

Naranja_Route134_G00_M49_Text_081C3110::
# 47 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Aiyeeeeh!$"

Naranja_Route134_G00_M49_Text_081C311A::
# 51 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "I think POKéMON enjoy the fast-running\ncurrents around these parts.$"

Naranja_Route134_G00_M49_Text_081C315E::
# 55 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "My LUVDISC are looking for a fun\nmatch. Will you join us?$"

Naranja_Route134_G00_M49_Text_081C3198::
# 59 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Oopsie!$"

Naranja_Route134_G00_M49_Text_081C31A0::
# 63 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "There’s a collector who’s after the\nSCALES of LUVDISC.$"

Naranja_Route134_G00_M49_Text_081C31D7::
# 67 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Okeydokey! That’s enough rest, gang!\nIt’s time for a match!$"

Naranja_Route134_G00_M49_Text_081C3213::
# 71 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Tuckered out again...$"

Naranja_Route134_G00_M49_Text_081C3229::
# 75 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "My BIRD POKéMON get tired quickly after\na long flight...$"

Naranja_Route134_G00_M49_Text_081C3262::
# 79 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "You’re a POKéMON TRAINER.\nNo need for words. We battle now.$"

Naranja_Route134_G00_M49_Text_081C329E::
# 83 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "... ... ... ... ... ... ...\n... ... ... ... ... ... ...$"

Naranja_Route134_G00_M49_Text_081C32D6::
# 87 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "It was I who challenged you, and yet\nI lost. I am deeply shamed...$"

Naranja_Route134_G00_M49_Text_081C3319::
# 91 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "The savage tide in this area serves to\nmake us stronger than ever.$"

Naranja_Route134_G00_M49_Text_081C335C::
# 95 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "I concede defeat.$"

Naranja_Route134_G00_M49_Text_081C336E::
# 99 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "We will return for more training at\nMETEOR FALLS.\pIf you’d like, you should go, too.\nIt will definitely toughen you up!$"
