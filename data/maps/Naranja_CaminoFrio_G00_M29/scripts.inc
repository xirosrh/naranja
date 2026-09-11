Naranja_CaminoFrio_G00_M29_MapScripts::
	.byte 0


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_WALLY_LocalId20::
# 8 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value 0x212C, 1
# 9 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_0814BBEA
# 10 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08164AA9
# 11 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 2
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_0814BBEA::
# 16 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081653D1
# 17 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 3
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150733::
# 22 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 23 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 24 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	dotimebasedevents
# 25 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_08CB
# 26 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150778
# 27 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081C5803
# 28 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	random 5
# 30 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	addvar VAR_RESULT, 0xF
# 31 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	addvar VAR_RESULT, 0x85
# 32 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 33 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 34 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 0
# 35 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 37 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_08CB
# 38 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081C5861
# 39 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 40 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150778::
# 45 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081C5878
# 46 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId12::
# 52 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 53 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 54 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_00E7
# 55 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081507B9
# 56 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08170154
# 57 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 58 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x125
# 59 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 60 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 0
# 61 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 62 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 63 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_00E7
# 64 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081701C5
# 65 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 66 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081507B9::
# 71 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081701C5
# 72 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 73 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sign_1::
# 78 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08170206
# 79 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 3
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sign_2::
# 84 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_0817022E
# 85 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 3
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId3::
# 90 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_CAMINO_FRIO_628, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC05B, Naranja_CaminoFrio_G00_M29_Text_081BC0B5, Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_0815CBA7
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150808::
# 95 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_CAMINO_FRIO_629, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC125, Naranja_CaminoFrio_G00_M29_Text_081BC163, Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_086B8212
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId6::
# 100 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_472, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC289, Naranja_CaminoFrio_G00_M29_Text_081BC2BE
# 101 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC2C6
# 102 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId7::
# 107 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_143, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC2F5, Naranja_CaminoFrio_G00_M29_Text_081BC327
# 108 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 109 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 110 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150874
# 111 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC337
# 112 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150874::
# 117 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_CAMINO_FRIO_143, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC3B3, Naranja_CaminoFrio_G00_M29_Text_081BC3E0
# 118 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC40F
# 119 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId17::
# 124 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_206, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC45A, Naranja_CaminoFrio_G00_M29_Text_081BC499
# 125 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 126 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 127 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081508B2
# 128 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC4B5
# 129 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081508B2::
# 134 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_CAMINO_FRIO_206, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC525, Naranja_CaminoFrio_G00_M29_Text_081BC559
# 135 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC58C
# 136 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId16::
# 141 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_338, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC5FC, Naranja_CaminoFrio_G00_M29_Text_081BC653
# 142 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC679
# 143 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId15::
# 148 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_342, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC6EC, Naranja_CaminoFrio_G00_M29_Text_081BC750
# 149 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC78A
# 150 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId23::
# 155 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_CAMINO_FRIO_679, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC7E3, Naranja_CaminoFrio_G00_M29_Text_081BC834, Naranja_CaminoFrio_G00_M29_Text_081BC88A
# 156 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154030
	return


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId22::
# 160 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_CAMINO_FRIO_679, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC8D8, Naranja_CaminoFrio_G00_M29_Text_081BC8FB, Naranja_CaminoFrio_G00_M29_Text_081BC96A
# 161 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081BC91E
# 162 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId5::
# 167 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 168 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 169 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 170 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 171 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	pokemart Naranja_CaminoFrio_G00_M29_Mart_08153980
# 172 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 173 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 174 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154030::
# 179 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 180 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 181 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178A9C
# 182 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 183 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 184 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 185 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 186 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154093
# 187 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 188 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_0815409D
# 189 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 190 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540A7
# 191 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 192 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540B1
# 193 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 194 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540BB
# 195 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 196 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540C5
# 197 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 198 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540CF
# 199 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154093::
# 204 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178C90
# 205 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 206 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_0815409D::
# 211 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178C39
# 212 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 213 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540A7::
# 218 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178BFA
# 219 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 220 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540B1::
# 225 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178BC4
# 226 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 227 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540BB::
# 232 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178B82
# 233 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 234 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540C5::
# 239 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178B43
# 240 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 241 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540CF::
# 246 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08178AF2
# 247 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 248 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_0815CBA7::
# 253 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08194917
# 254 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 255 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x157
# 256 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 257 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 0
# 258 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_BOY_3
# 259 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_08194A3E
# 260 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 261 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 262 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BOY_3, Naranja_CaminoFrio_G00_M29_Movement_086B8200
# 263 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmovement LOCALID_NONE
# 264 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId1::
# 269 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionGetBerryTreeData
# 270 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 271 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xFF
# 272 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1533
# 273 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 274 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A153D
# 275 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 276 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1595
# 277 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 278 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15A2
# 279 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 280 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15AF
# 281 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 282 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15BC
# 283 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 284 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F9
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1533::
# 289 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 290 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1946
# 291 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 292 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 293 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A153D::
# 298 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 299 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 300 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 301 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 302 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1558
# 303 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A16B6
# 304 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 305 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 306 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1558::
# 311 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A16CD
# 312 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 5
# 313 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 314 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1577
# 315 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 316 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1577::
# 321 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	fadescreen 1
# 322 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 323 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionGetBerryCountString
# 324 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitstate
# 325 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_ITEM_ID, 0
# 326 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593
# 327 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeitem 0x800E, 1
# 328 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A16A9
# 329 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593::
# 333 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1595::
# 338 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 339 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A172C
# 340 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 341 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 342 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15A2::
# 346 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 347 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A174B
# 348 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 349 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 350 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15AF::
# 354 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 355 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A175C
# 356 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 357 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 358 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15BC::
# 362 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15CE
# 363 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 364 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A177D
# 365 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 366 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 367 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15CE::
# 371 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 372 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F2
# 373 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8005, 4
# 374 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15EB
# 375 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferstring 1, Naranja_CaminoFrio_G00_M29_Text_081A17B7
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15EB::
# 380 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferstring 1, Naranja_CaminoFrio_G00_M29_Text_081A179F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F2::
# 385 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferstring 1, Naranja_CaminoFrio_G00_M29_Text_081A17B0
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F9::
# 390 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	buffernumberstring 1, VAR_0x8006
# 391 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 392 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 393 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A17C0
# 394 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 5
# 395 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 396 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A161D
# 397 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 398 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A164B
# 399 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A161D
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A161D::
# 403 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionPickBerryTree
# 404 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 405 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1642
# 406 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionRemoveBerryTree
# 407 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A17FD
# 408 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 409 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 410 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitfanfare
# 411 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 412 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A181A
# 413 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 414 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 415 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1642::
# 420 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1881
# 421 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 422 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 423 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A164B::
# 428 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A18C5
# 429 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 430 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 431 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F::
# 436 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkitem ITEM_WAILMER_PAIL, 1
# 437 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 438 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D
# 439 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A18E6
# 440 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 5
# 441 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 442 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1693
# 443 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 444 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D
# 445 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D::
# 449 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1693::
# 454 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1912
# 455 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 456 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionWaterBerryTree
# 457 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special DoWateringBerryTreeAnim
# 458 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitstate
# 459 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1925
# 460 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 461 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 462 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A16A9::
# 467 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionPlantBerryTree
# 468 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	incrementgamestat 3
# 469 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A16FB
# 470 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 471 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
	return


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_BREAKABLE_ROCK_LocalId18::
# 476 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 477 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 478 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F3E
# 479 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 480 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 481 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F3E
# 482 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 483 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 484 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	buffermovename 1, MOVE_ROCK_SMASH
# 485 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081B0F4B
# 486 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 5
# 487 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 488 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F48
# 489 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081B0E82
# 490 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 491 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 492 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	dofieldeffect 0x25
# 493 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitstate
# 494 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F0C
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F0C::
# 498 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement 32783, Naranja_CaminoFrio_G00_M29_Movement_081B0F3C
# 499 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmovement LOCALID_NONE
# 500 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject 32783
# 501 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
# 502 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 503 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F3E::
# 508 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081B0F90
# 509 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 3
# 510 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F48::
# 515 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 516 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 521 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 522 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 523 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 1
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId10::
# 528 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x40
# 529 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 530 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 1
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId11::
# 535 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x142
# 536 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 537 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 1
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6630::
# 542 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 543 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6658
# 544 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_083272FC
# 545 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6855
# 546 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 547 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 548 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_0802DE50
# 549 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 550 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6658::
# 555 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 556 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 557 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6965
# 558 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B6674
# 559 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 560 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Trigger_1::
# 565 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 566 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 567 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 568 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B66BF
# 569 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 570 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 571 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_0803DEB2
# 572 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B68A8
# 573 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 574 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_081536F3
# 575 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 576 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B66BF::
# 581 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 582 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 583 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	givemon SPECIES_GOLDUCK, 0x1E, 0x118
# 584 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_0803DEB2
# 585 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6A5B
# 586 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 587 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_081788C2
# 588 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 589 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6A87
# 590 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 591 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setobjectxy LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, 0x11, 0x26
# 592 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 593 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, Naranja_CaminoFrio_G00_M29_Movement_086B6ACA
# 594 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0xFF
# 595 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL
# 596 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150808
# 597 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 598 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Trigger_3::
# 603 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 604 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 605 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 606 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 607 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	clearflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 608 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_08229547
# 609 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B68DD
# 610 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 611 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 612 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_085061EC
# 613 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x40
# 614 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B691D
# 615 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 616 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B6771
# 617 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_086B6779
# 618 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x90
# 619 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, Naranja_CaminoFrio_G00_M29_Movement_086B677D
# 620 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_080239AB
# 621 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x40
# 622 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_TOTODILE_DOLL_LocalId13::
# 627 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 628 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitse
# 629 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	playmoncry SPECIES_MAWILE, 0x2800
# 630 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitse
# 631 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 632 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x30
# 633 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6989
# 634 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 635 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, Naranja_CaminoFrio_G00_M29_Movement_086B67C1
# 636 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_086B67D1
# 637 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0xB0
# 638 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 639 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Trigger_2::
# 644 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 645 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 646 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	getpartysize
# 647 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 648 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6630
# 649 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_08229547
# 650 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B67E0
# 651 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 652 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 653 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B5425
# 654 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_BARD_LocalId4::
# 659 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 660 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6B23
# 661 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6BB0
# 662 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 663 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 664 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_0802DE50
# 665 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6BB5
# 666 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 667 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6B23::
# 672 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 673 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 674 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6BCB
# 675 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 4
# 676 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 677 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6BDA
# 678 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 679 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 680 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6C1A
# 681 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 682 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_086B67C1
# 683 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x30
# 684 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject LOCALID_CAMINO_FRIO_G00_M29_BARD
# 685 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 686 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setobjectxy LOCALID_CAMINO_FRIO_G00_M29_SWIMMER_F, 0x11, 0x28
# 687 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 2
# 688 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_SWIMMER_F, Naranja_CaminoFrio_G00_M29_Movement_086B6B9A
# 689 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x60
# 690 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_08003246
# 691 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0xA0
# 692 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 693 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x40
# 694 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 695 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	clearflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 696 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject LOCALID_CAMINO_FRIO_G00_M29_SWIMMER_F
# 697 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 698 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6D80::
# 703 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 704 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6F0D
# 705 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 706 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_NURSE, Naranja_CaminoFrio_G00_M29_Movement_086B67C2
# 707 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 5
# 708 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 709 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x20
# 710 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeitem ITEM_POTION, 1
# 711 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6FBA
# 712 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
# 713 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B67C2
# 714 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x60
# 715 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 716 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	warp MAP_NARANJA_UNDERWATER_G00_M52, 0, 0, 0
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_NURSE_LocalId2::
# 721 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 722 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6DC0
# 723 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 5
# 724 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 725 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 726 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 727 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 728 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 729 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkitem ITEM_POTION, 0
# 730 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 731 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6D80
# 732 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_086B6EC9
# 733 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 6
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId14::
# 738 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 739 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 740 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150733
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E::
# 744 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_086B8212::
# 749 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B8210
# 750 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x30
# 751 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6B23
	return


# 754 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_080008A0:
# 755 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_down
	step_end

# 758 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_08003246:
# 759 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_left
	step_end

# 762 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_080239AB:
# 763 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
	step_end

# 766 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_0802DE50:
# 767 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
	step_end

# 770 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_0803DEB2:
# 771 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
	step_end

# 774 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_081536F3:
# 775 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_left
# 776 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_up
	step_end

# 779 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_081788C2:
# 780 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_left
# 781 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_down
	step_end

# 784 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_081B0F3C:
# 785 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	rock_smash_break
	step_end

# 788 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_08229547:
# 789 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
# 790 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
	step_end

# 793 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_083272FC:
# 794 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_down
# 795 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
	step_end

# 798 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_085061EC:
# 799 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_down
# 800 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_left
	step_end

# 803 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B5425:
# 804 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_down
	step_end

# 807 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6674:
# 808 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
# 809 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_in_place_up
# 810 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 811 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 812 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
	step_end

# 815 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6771:
# 816 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	slide_left
# 817 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_in_place_faster_left
# 818 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock_facing_direction
# 819 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 820 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	unlock_facing_direction
	step_end

# 823 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6779:
# 824 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_left
# 825 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 828 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B677D:
# 829 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_visible
# 830 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
	step_end

# 833 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B67C1:
# 834 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_down
# 835 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_down
# 836 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 837 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 840 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B67C2:
# 841 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_down
# 842 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 843 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 846 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B67D1:
# 847 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 848 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 849 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 850 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 851 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 852 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 853 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 854 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 855 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_visible
# 856 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
	step_end

# 859 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6ACA:
# 860 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_visible
# 861 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	acro_end_wheelie_face_right
# 862 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 863 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
	step_end

# 866 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6B9A:
# 867 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 868 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
# 869 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 870 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 871 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 872 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 873 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 874 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 875 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 876 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 877 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 878 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 879 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 880 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 881 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 882 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 883 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 884 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 885 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 886 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
	step_end

# 889 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B8200:
# 890 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 891 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
# 892 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_left
# 893 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 894 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 895 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_right
# 896 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_faster_right
# 897 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_right
# 898 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 899 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_down
# 900 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_right
# 901 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_right
# 902 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_faster_up
# 903 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
# 904 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 907 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B8210:
# 908 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_down
	step_end

	.align 2
# 911 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Mart_08153980:
# 912 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 913 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 914 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 915 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 916 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 917 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 918 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 919 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 920 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_X_ATTACK
# 921 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_X_DEFEND
# 922 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 923 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

Naranja_CaminoFrio_G00_M29_Text_08164AA9::
# 926 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x03}Ahora hay que vencer al\nlìder de Isla NAVEL, DANNY.\pCuando compitas con él recuerda\nla continuidad y la estabilidad\lpara ser efectiv{RIVAL}.$"

Naranja_CaminoFrio_G00_M29_Text_081653D1::
# 930 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x03}¡Vamos {PLAYER}! \nJOY está esperando.$"

Naranja_CaminoFrio_G00_M29_Text_08170154::
# 934 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "All my POKéMON does is ROAR...\nNo one dares to come near me...\pSigh... If you would, please take\nthis TM away...$"

Naranja_CaminoFrio_G00_M29_Text_081701C5::
# 938 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TM05 contains ROAR.\nA ROAR sends POKéMON scurrying.$"

Naranja_CaminoFrio_G00_M29_Text_08170206::
# 942 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "METEOR FALLS\nRUSTBORO CITY THROUGH HERE$"

Naranja_CaminoFrio_G00_M29_Text_0817022E::
# 946 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "FOSSIL MANIAC’S HOUSE\n“Fossils gratefully accepted!”$"

Naranja_CaminoFrio_G00_M29_Text_08178A9C::
# 950 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Let me see your POKéMON.\nI’ll check to see how much it likes you.\pOh.\nYour POKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_08178AF2::
# 954 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It adores you.\nIt can’t possibly love you any more.\lI even feel happy seeing it.$"

Naranja_CaminoFrio_G00_M29_Text_08178B43::
# 958 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It seems to be very happy.\nIt obviously likes you a whole lot.$"

Naranja_CaminoFrio_G00_M29_Text_08178B82::
# 962 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It likes you quite a lot.\nIt seems to want to be babied a little.$"

Naranja_CaminoFrio_G00_M29_Text_08178BC4::
# 966 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s getting used to you.\nIt seems to believe in you.$"

Naranja_CaminoFrio_G00_M29_Text_08178BFA::
# 970 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s not very used to you yet.\nIt neither loves nor hates you.$"

Naranja_CaminoFrio_G00_M29_Text_08178C39::
# 974 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s very wary.\nIt has scary viciousness in its eyes.\lIt doesn’t like you much at all.$"

Naranja_CaminoFrio_G00_M29_Text_08178C90::
# 978 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This is a little hard for me to say...\pYour POKéMON simply detests you.\nDoesn’t that make you uncomfortable?$"

Naranja_CaminoFrio_G00_M29_Text_08194917::
# 982 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¿Sabes?\pEres bueno y es difìcil ver,\naquì y en todos lados,\la alguien con un estilo\ltan impactante como 2.000 vatios.\p¡Es arrojar la POKéBALL\ny haces saltar los fusibles!\pRápido como un rayo\nahora podrás iluminar las cuevas\lcon la potente luz\lque despedirán tus POKéMON.\p¡Ten esta HM DESTELLO!$"

Naranja_CaminoFrio_G00_M29_Text_08194A3E::
# 986 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Enséñala a quienes elijas\ne iluminarán tu camino.\p¡Y sin necesidad de enchufarlos!\p{COLOR 0x04}¿Ah no?\p¡Menuda tragedia me estás ahorrando!\p{COLOR 0x01}Ja. Ja.\p¡Espero verte pronto {PLAYER}!$"

Naranja_CaminoFrio_G00_M29_Text_081A0BE4::
# 990 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Bienvenido!\p¿Puedo ayudarte?$"

Naranja_CaminoFrio_G00_M29_Text_081A0C02::
# 994 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Vuelve otra vez !$"

Naranja_CaminoFrio_G00_M29_Text_081A16B6::
# 998 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s soft, loamy soil.$"

Naranja_CaminoFrio_G00_M29_Text_081A16CD::
# 1002 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s soft, loamy soil.\nWant to plant a BERRY?$"

Naranja_CaminoFrio_G00_M29_Text_081A16FB::
# 1006 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} planted one {STR_VAR_1} BERRY in\nthe soft, loamy soil.$"

Naranja_CaminoFrio_G00_M29_Text_081A172C::
# 1010 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "One {STR_VAR_1} BERRY was planted here.$"

Naranja_CaminoFrio_G00_M29_Text_081A174B::
# 1014 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{STR_VAR_1} has sprouted.$"

Naranja_CaminoFrio_G00_M29_Text_081A175C::
# 1018 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This {STR_VAR_1} plant is growing taller.$"

Naranja_CaminoFrio_G00_M29_Text_081A177D::
# 1022 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "These {STR_VAR_1} flowers are blooming\n{STR_VAR_2}.$"

Naranja_CaminoFrio_G00_M29_Text_081A179F::
# 1026 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "very beautifully$"

Naranja_CaminoFrio_G00_M29_Text_081A17B0::
# 1030 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "cutely$"

Naranja_CaminoFrio_G00_M29_Text_081A17B7::
# 1034 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "prettily$"

Naranja_CaminoFrio_G00_M29_Text_081A17C0::
# 1038 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "There are {STR_VAR_2} {STR_VAR_1} BERRIES!\pDo you want to pick the\n{STR_VAR_1} BERRIES?$"

Naranja_CaminoFrio_G00_M29_Text_081A17FD::
# 1042 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1} BERRIES.$"

Naranja_CaminoFrio_G00_M29_Text_081A181A::
# 1046 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1} BERRIES\nin the BAG’s BERRIES POCKET.\pThe soil returned to its soft and\nloamy state.$"

Naranja_CaminoFrio_G00_M29_Text_081A1881::
# 1050 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "The BAG’s BERRIES POCKET is full.\pThe {STR_VAR_1} BERRIES couldn’t be taken.$"

Naranja_CaminoFrio_G00_M29_Text_081A18C5::
# 1054 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} left the {STR_VAR_1} BERRIES\nunpicked.$"

Naranja_CaminoFrio_G00_M29_Text_081A18E6::
# 1058 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Want to water the {STR_VAR_1} with the\nWAILMER PAIL?$"

Naranja_CaminoFrio_G00_M29_Text_081A1912::
# 1062 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} watered the {STR_VAR_1}.$"

Naranja_CaminoFrio_G00_M29_Text_081A1925::
# 1066 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "The plant seems to be delighted.$"

Naranja_CaminoFrio_G00_M29_Text_081A1946::
# 1070 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "!$"

Naranja_CaminoFrio_G00_M29_Text_081B0E82::
# 1074 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}.$"

Naranja_CaminoFrio_G00_M29_Text_081B0F4B::
# 1078 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This rock appears to be breakable.\nWould you like to use WHIRPOOL?$"

Naranja_CaminoFrio_G00_M29_Text_081B0F90::
# 1082 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s a rugged rock, but a POKéMON\nmay be able to smash it.$"

Naranja_CaminoFrio_G00_M29_Text_081BC05B::
# 1086 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Oye!\p¡Hola!\n¡Me llamo Lectro!\py… ¡O te dejo paralizado \nde un chispazo o te regalo algo!$"

Naranja_CaminoFrio_G00_M29_Text_081BC0B5::
# 1090 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Bravo!$"

Naranja_CaminoFrio_G00_M29_Text_081BC125::
# 1094 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¿Un GOLDUCK? \p¿Crees que eso te fortalece? \p¡Pues empecemos!\n$"

Naranja_CaminoFrio_G00_M29_Text_081BC163::
# 1098 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Esto le hace a una pensar.      $"

Naranja_CaminoFrio_G00_M29_Text_081BC289::
# 1102 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I need to exercise after a meal.\nLet’s have a match!$"

Naranja_CaminoFrio_G00_M29_Text_081BC2BE::
# 1106 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Oh, no!$"

Naranja_CaminoFrio_G00_M29_Text_081BC2C6::
# 1110 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I just had a tasty meal.\nI’m getting drowsy...$"

Naranja_CaminoFrio_G00_M29_Text_081BC2F5::
# 1114 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Ufufufufufu...\nWant to battle against my POKéMON?$"

Naranja_CaminoFrio_G00_M29_Text_081BC327::
# 1118 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "M-My POKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_081BC337::
# 1122 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "A big body that’s all lumpy and hard,\nenormous horns, and vicious fangs...\pUfufufufu...\nI wish I had a POKéMON like that...$"

Naranja_CaminoFrio_G00_M29_Text_081BC3B3::
# 1126 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Ufufufufufu...\nCome on, battle my POKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_081BC3E0::
# 1130 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I feel so lucky getting to see your\nPOKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_081BC40F::
# 1134 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Ufufufufufu...\pWhen I see POKéMON battling, I get all\nshivery and shaky...$"

Naranja_CaminoFrio_G00_M29_Text_081BC45A::
# 1138 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "If you’re lighting a campfire, make\nsure you have water handy.$"

Naranja_CaminoFrio_G00_M29_Text_081BC499::
# 1142 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Thanks for dousing my fire!$"

Naranja_CaminoFrio_G00_M29_Text_081BC4B5::
# 1146 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "You really do have to be careful with\nany sort of fire in a forest.\pDon’t ever underestimate the power\nof fire.$"

Naranja_CaminoFrio_G00_M29_Text_081BC525::
# 1150 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Have you learned to keep water handy\nfor campfires?$"

Naranja_CaminoFrio_G00_M29_Text_081BC559::
# 1154 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I got hosed down before I could flare\nup, I guess.$"

Naranja_CaminoFrio_G00_M29_Text_081BC58C::
# 1158 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "You really do have to be careful with\nany sort of fire in a forest.\pDon’t ever underestimate the power\nof fire.$"

Naranja_CaminoFrio_G00_M29_Text_081BC5FC::
# 1162 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "If we were fishing, you wouldn’t stand\na chance against me.\lSo, bring on your POKéMON!$"

Naranja_CaminoFrio_G00_M29_Text_081BC653::
# 1166 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "If we were fishing, I would’ve won...$"

Naranja_CaminoFrio_G00_M29_Text_081BC679::
# 1170 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I think I’ll try my luck at landing\na big one at METEOR FALLS.\pThere has to be something in there.\nI just know it.$"

Naranja_CaminoFrio_G00_M29_Text_081BC6EC::
# 1174 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I like to fish. But I also like to\nbattle!\pIf anyone challenges me, I’m there,\neven if I’m fishing.$"

Naranja_CaminoFrio_G00_M29_Text_081BC750::
# 1178 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I like to battle, but that doesn’t\nmean I’m good at it...$"

Naranja_CaminoFrio_G00_M29_Text_081BC78A::
# 1182 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This time I’ll do it!\pI always think that, so I can’t walk\naway from fishing or POKéMON.$"

Naranja_CaminoFrio_G00_M29_Text_081BC7E3::
# 1186 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TYRA: Well, sure.\nI’m in the mood for it.\lI’ll teach you a little about POKéMON.$"

Naranja_CaminoFrio_G00_M29_Text_081BC834::
# 1190 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TYRA: What an amazing battle style!$"

Naranja_CaminoFrio_G00_M29_Text_081BC88A::
# 1194 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TYRA: Giggle...\nIf you want to battle with us, just one\lPOKéMON isn’t enough!$"

Naranja_CaminoFrio_G00_M29_Text_081BC8D8::
# 1198 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: Who taught you about POKéMON?$"

Naranja_CaminoFrio_G00_M29_Text_081BC8FB::
# 1202 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: What an amazing battle style!$"

Naranja_CaminoFrio_G00_M29_Text_081BC91E::
# 1206 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: I started training POKéMON\nbecause TYRA, my student mentor,\ltaught me!$"

Naranja_CaminoFrio_G00_M29_Text_081BC96A::
# 1210 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: Do you only have one POKéMON?\nI think it must feel lonesome.$"

Naranja_CaminoFrio_G00_M29_Text_081C5803::
# 1214 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I’m gathering BERRIES so I can win a\nPOKéMON CONTEST.\pIf you’d like, I’ll share one with you.$"

Naranja_CaminoFrio_G00_M29_Text_081C5861::
# 1218 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Good luck to you, too!$"

Naranja_CaminoFrio_G00_M29_Text_081C5878::
# 1222 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "What BERRIES should I plant today?\nWhat color オカキクケS should I make?\pFretting over stuff like that is fun\nin its own way.$"

Naranja_CaminoFrio_G00_M29_Text_086B67E0::
# 1226 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "No subas, este es mi peñón\nY no te dejo subir porque…\p…ehh …\p…tienes demasiados POKéMON.\nVuelve con un equipo menor.$"

Naranja_CaminoFrio_G00_M29_Text_086B6855::
# 1230 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Soy MARINA\ly este es mi Peñón.\p¡Oye!\n¡Qu tate de las escaleras!$"

Naranja_CaminoFrio_G00_M29_Text_086B68A8::
# 1234 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Aquì se hace mi Real voluntad.\p¡No te acerques allì!$"

Naranja_CaminoFrio_G00_M29_Text_086B68DD::
# 1238 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Eh! No te acerques a allì\pporque esa parte…\p…ehh…\pes sólo mía.$"

Naranja_CaminoFrio_G00_M29_Text_086B691D::
# 1242 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string " {COLOR 0x01}MARINA:Q quieres ahora?\p{COLOR 0x04}¡Mojarte!\nA ver si se te va la laca maja$"

Naranja_CaminoFrio_G00_M29_Text_086B6965::
# 1246 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x04}Me pareció ver un lindo GOLDUCK…$"

Naranja_CaminoFrio_G00_M29_Text_086B6989::
# 1250 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "GOLDUCK parece querer unirse al equipo.\p{COLOR 0x04}¡De acuerdo GOLDUCK!\nJuntos derrotaremos a esa harpìa.\pLe bajaremos los humos en una batalla\npara que entienda que no puede ir por\lahì reinando en peñones ni isletas.$"

Naranja_CaminoFrio_G00_M29_Text_086B6A5B::
# 1254 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "MARINA: ¡Eh! ¡Tú!\n¿Porqué no me haces caso?$"

Naranja_CaminoFrio_G00_M29_Text_086B6A87::
# 1258 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}:¿A quién le importa\nlo que tu digas?\p¡Sube GOLDUCK!$"

Naranja_CaminoFrio_G00_M29_Text_086B6BB0::
# 1262 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Eh!$"

Naranja_CaminoFrio_G00_M29_Text_086B6BB5::
# 1266 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "No te acerques tanto.$"

Naranja_CaminoFrio_G00_M29_Text_086B6BCB::
# 1270 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¿Sabes?$"

Naranja_CaminoFrio_G00_M29_Text_086B6BDA::
# 1274 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Quizás…\pEsta isleta no sea mìa,\nsólo porque intenté quedármela.$"

Naranja_CaminoFrio_G00_M29_Text_086B6C1A::
# 1278 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "MARINA: ¡Gracias!\p{COLOR 0x04}{PLAYER}: ¿Porqué?\p{COLOR 0x01}MARINA: Porque me di cuenta\nque no soy nadie para llegar aquì la\lúltima y decir que me quedo la isleta.\pNo tengo ninguna soberanìa aquì.\pMe iré a mi casa y dejaré de molestar\na toda la gente que podrìa utilizarlo.\pSolo fui una oportunista por aprovechar\nun momento que estaba vacìo\lpara quedarme la isleta.\p¡Adiós {PLAYER}!$"

Naranja_CaminoFrio_G00_M29_Text_086B6DC0::
# 1282 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Hummm…\ntu Lapras se ve feliz,\ppero deberìa descansar\ndespués de tan largos viajes.\p¡Buenas! \nSoy la ENFERMERA JOY.\pComo muchas islas son muy pequeñas\npara tener su propio CENTRO POKéMON,\lyo voy donde me necesite la salud\lde un POKéMON, esté donde esté.\p¿Me ayudas?$"

Naranja_CaminoFrio_G00_M29_Text_086B6EC9::
# 1286 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡De acuerdo!\pAunque necesitaremos una POCIÓN.\n¿Podrìas conseguirla?$"

Naranja_CaminoFrio_G00_M29_Text_086B6F0D::
# 1290 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Perfecto!\pHay que curar y alimentar\na un SHELLDER enfermo.\p¿No te importa\nque usemos esa POCIÓN no?\p¡Pues ahora mismo marcharemos!\p{COLOR 0x04} ¿A dónde?\p{COLOR 0x01}Dónde están las llaves…$"

Naranja_CaminoFrio_G00_M29_Text_086B6FBA::
# 1294 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x04}¡Ay!\n¡Hoy debe ser San Zambullida!$"
