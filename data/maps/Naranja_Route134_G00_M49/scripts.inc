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
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE134_172, LOCALID_NONE, Naranja_Route134_G00_M49_Text_081C30C6, Naranja_Route134_G00_M49_Text_081C3110
# 15 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	loadword 0, Naranja_Route134_G00_M49_Text_081C311A
# 16 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	callstd 6
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 21 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE134_463, LOCALID_NONE, Naranja_Route134_G00_M49_Text_081C315E, Naranja_Route134_G00_M49_Text_081C3198
# 22 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	loadword 0, Naranja_Route134_G00_M49_Text_081C31A0
# 23 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	callstd 6
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId4::
# 28 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE134_413, LOCALID_NONE, Naranja_Route134_G00_M49_Text_081C31D7, Naranja_Route134_G00_M49_Text_081C3213
# 29 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	loadword 0, Naranja_Route134_G00_M49_Text_081C3229
# 30 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	callstd 6
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 35 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE134_397, LOCALID_NONE, Naranja_Route134_G00_M49_Text_081C3319, Naranja_Route134_G00_M49_Text_081C335C
# 36 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	loadword 0, Naranja_Route134_G00_M49_Text_081C336E
# 37 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	callstd 6
	end


Naranja_Route134_G00_M49_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId5::
# 42 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE134_180, LOCALID_NONE, Naranja_Route134_G00_M49_Text_081C3262, Naranja_Route134_G00_M49_Text_081C329E
# 43 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	loadword 0, Naranja_Route134_G00_M49_Text_081C32D6
# 44 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	callstd 6
	end


Naranja_Route134_G00_M49_Text_081C30C6::
# 48 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Even those POKéMON that can swim are\ncarried along by the rapid currents.$"

Naranja_Route134_G00_M49_Text_081C3110::
# 52 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Aiyeeeeh!$"

Naranja_Route134_G00_M49_Text_081C311A::
# 56 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "I think POKéMON enjoy the fast-running\ncurrents around these parts.$"

Naranja_Route134_G00_M49_Text_081C315E::
# 60 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "My LUVDISC are looking for a fun\nmatch. Will you join us?$"

Naranja_Route134_G00_M49_Text_081C3198::
# 64 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Oopsie!$"

Naranja_Route134_G00_M49_Text_081C31A0::
# 68 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "There’s a collector who’s after the\nSCALES of LUVDISC.$"

Naranja_Route134_G00_M49_Text_081C31D7::
# 72 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Okeydokey! That’s enough rest, gang!\nIt’s time for a match!$"

Naranja_Route134_G00_M49_Text_081C3213::
# 76 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "Tuckered out again...$"

Naranja_Route134_G00_M49_Text_081C3229::
# 80 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "My BIRD POKéMON get tired quickly after\na long flight...$"

Naranja_Route134_G00_M49_Text_081C3262::
# 84 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "You’re a POKéMON TRAINER.\nNo need for words. We battle now.$"

Naranja_Route134_G00_M49_Text_081C329E::
# 88 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "... ... ... ... ... ... ...\n... ... ... ... ... ... ...$"

Naranja_Route134_G00_M49_Text_081C32D6::
# 92 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "It was I who challenged you, and yet\nI lost. I am deeply shamed...$"

Naranja_Route134_G00_M49_Text_081C3319::
# 96 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "The savage tide in this area serves to\nmake us stronger than ever.$"

Naranja_Route134_G00_M49_Text_081C335C::
# 100 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "I concede defeat.$"

Naranja_Route134_G00_M49_Text_081C336E::
# 104 "data/maps/Naranja_Route134_G00_M49/scripts.pory"
	.string "We will return for more training at\nMETEOR FALLS.\pIf you’d like, you should go, too.\nIt will definitely toughen you up!$"
