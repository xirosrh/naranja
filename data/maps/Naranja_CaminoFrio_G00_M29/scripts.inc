Naranja_CaminoFrio_G00_M29_MapScripts::
	.byte 0


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_WALLY_LocalId20::
# 8 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value 0x212C, 1
# 9 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_0814BBEA
# 10 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08164AA9, MSGBOX_NPC
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_0814BBEA::
# 15 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081653D1, MSGBOX_SIGN
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150733::
# 20 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 21 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	dotimebasedevents
# 23 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_08CB
# 24 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150778
# 25 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081C5803, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	random 5
# 27 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	addvar VAR_RESULT, 0xF
# 28 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	addvar VAR_RESULT, 0x85
# 29 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 30 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 31 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 0
# 32 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 33 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 34 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_08CB
# 35 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081C5861, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150778::
# 41 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081C5878, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId12::
# 47 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 48 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 49 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_00E7
# 50 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081507B9
# 51 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08170154, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x125
# 53 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 54 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 0
# 55 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 56 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 57 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_00E7
# 58 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081701C5, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081507B9::
# 64 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081701C5, MSGBOX_DEFAULT
# 65 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sign_1::
# 70 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08170206, MSGBOX_SIGN
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sign_2::
# 75 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_0817022E, MSGBOX_SIGN
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId3::
# 80 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_CAMINO_FRIO_628, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC05B, Naranja_CaminoFrio_G00_M29_Text_081BC0B5, Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_0815CBA7
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150808::
# 85 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_CAMINO_FRIO_629, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC125, Naranja_CaminoFrio_G00_M29_Text_081BC163, Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_086B8212
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId6::
# 90 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_472, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC289, Naranja_CaminoFrio_G00_M29_Text_081BC2BE
# 91 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC2C6, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId7::
# 96 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_143, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC2F5, Naranja_CaminoFrio_G00_M29_Text_081BC327
# 97 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 98 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 99 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150874
# 100 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC337, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150874::
# 105 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_CAMINO_FRIO_143, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC3B3, Naranja_CaminoFrio_G00_M29_Text_081BC3E0
# 106 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC40F, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId17::
# 111 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_206, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC45A, Naranja_CaminoFrio_G00_M29_Text_081BC499
# 112 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 113 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 114 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081508B2
# 115 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC4B5, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081508B2::
# 120 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_CAMINO_FRIO_206, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC525, Naranja_CaminoFrio_G00_M29_Text_081BC559
# 121 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC58C, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId16::
# 126 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_338, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC5FC, Naranja_CaminoFrio_G00_M29_Text_081BC653
# 127 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC679, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId15::
# 132 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_CAMINO_FRIO_342, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC6EC, Naranja_CaminoFrio_G00_M29_Text_081BC750
# 133 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC78A, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId23::
# 138 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_CAMINO_FRIO_679, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC7E3, Naranja_CaminoFrio_G00_M29_Text_081BC834, Naranja_CaminoFrio_G00_M29_Text_081BC88A
# 139 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154030
	return


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId22::
# 143 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_CAMINO_FRIO_679, LOCALID_NONE, Naranja_CaminoFrio_G00_M29_Text_081BC8D8, Naranja_CaminoFrio_G00_M29_Text_081BC8FB, Naranja_CaminoFrio_G00_M29_Text_081BC96A
# 144 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081BC91E, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId5::
# 149 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 150 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 151 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 152 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 153 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	pokemart Naranja_CaminoFrio_G00_M29_Mart_08153980
# 154 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 155 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154030::
# 160 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 161 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 162 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178A9C, MSGBOX_DEFAULT
# 163 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 164 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 165 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 166 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154093
# 167 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 168 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_0815409D
# 169 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 170 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540A7
# 171 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 172 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540B1
# 173 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 174 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540BB
# 175 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 176 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540C5
# 177 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 178 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540CF
# 179 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_08154093::
# 184 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178C90, MSGBOX_DEFAULT
# 185 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_0815409D::
# 190 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178C39, MSGBOX_DEFAULT
# 191 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540A7::
# 196 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178BFA, MSGBOX_DEFAULT
# 197 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540B1::
# 202 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178BC4, MSGBOX_DEFAULT
# 203 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540BB::
# 208 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178B82, MSGBOX_DEFAULT
# 209 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540C5::
# 214 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178B43, MSGBOX_DEFAULT
# 215 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081540CF::
# 220 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08178AF2, MSGBOX_DEFAULT
# 221 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_0815CBA7::
# 226 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08194917, MSGBOX_DEFAULT
# 227 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x157
# 228 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 229 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 0
# 230 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_BOY_3
# 231 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_08194A3E, MSGBOX_DEFAULT
# 232 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 233 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BOY_3, Naranja_CaminoFrio_G00_M29_Movement_086B8200
# 234 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmovement LOCALID_NONE
# 235 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId1::
# 240 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionGetBerryTreeData
# 241 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 242 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xFF
# 243 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1533
# 244 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 245 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A153D
# 246 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 247 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1595
# 248 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 249 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15A2
# 250 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 251 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15AF
# 252 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 253 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15BC
# 254 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 255 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F9
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1533::
# 260 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 261 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1946
# 262 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 263 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 264 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A153D::
# 269 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 270 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 271 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 272 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 273 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1558
# 274 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A16B6
# 275 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 276 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 277 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1558::
# 282 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A16CD, MSGBOX_YESNO
# 283 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 284 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1577
# 285 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 286 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1577::
# 291 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	fadescreen 1
# 292 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 293 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionGetBerryCountString
# 294 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitstate
# 295 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_ITEM_ID, 0
# 296 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593
# 297 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeitem 0x800E, 1
# 298 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A16A9
# 299 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1593::
# 303 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1595::
# 308 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 309 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A172C
# 310 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 311 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 312 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15A2::
# 316 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 317 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A174B
# 318 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 319 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 320 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15AF::
# 324 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 325 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A175C
# 326 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 327 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 328 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15BC::
# 332 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15CE
# 333 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 334 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A177D
# 335 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 336 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 337 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15CE::
# 341 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 342 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F2
# 343 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8005, 4
# 344 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15EB
# 345 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferstring 1, Naranja_CaminoFrio_G00_M29_Text_081A17B7
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15EB::
# 350 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferstring 1, Naranja_CaminoFrio_G00_M29_Text_081A179F
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F2::
# 355 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferstring 1, Naranja_CaminoFrio_G00_M29_Text_081A17B0
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A15F9::
# 360 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	buffernumberstring 1, VAR_0x8006
# 361 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 362 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 363 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A17C0, MSGBOX_YESNO
# 364 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 365 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A161D
# 366 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 367 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A164B
# 368 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A161D
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A161D::
# 372 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionPickBerryTree
# 373 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 374 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1642
# 375 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionRemoveBerryTree
# 376 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A17FD
# 377 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 378 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 379 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitfanfare
# 380 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 381 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A181A
# 382 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 383 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 384 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1642::
# 389 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1881
# 390 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 391 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 392 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A164B::
# 397 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A18C5
# 398 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 399 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 400 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A165F::
# 405 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkitem ITEM_WAILMER_PAIL, 1
# 406 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 407 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D
# 408 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A18E6, MSGBOX_YESNO
# 409 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 410 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1693
# 411 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 412 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D
# 413 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A168D::
# 417 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A1693::
# 422 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1912
# 423 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 424 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionWaterBerryTree
# 425 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special DoWateringBerryTreeAnim
# 426 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitstate
# 427 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A1925
# 428 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 429 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
# 430 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081A16A9::
# 435 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	special ObjectEventInteractionPlantBerryTree
# 436 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	incrementgamestat 3
# 437 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A16FB
# 438 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmessage
# 439 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitbuttonpress
	return


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_BREAKABLE_ROCK_LocalId18::
# 444 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lockall
# 445 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 446 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F3E
# 447 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 448 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 449 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F3E
# 450 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 451 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 452 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	buffermovename 1, MOVE_ROCK_SMASH
# 453 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081B0F4B, MSGBOX_YESNO
# 454 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 455 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F48
# 456 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081B0E82, MSGBOX_DEFAULT
# 457 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 458 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	dofieldeffect 0x25
# 459 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitstate
# 460 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F0C
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F0C::
# 464 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement 32783, Naranja_CaminoFrio_G00_M29_Movement_081B0F3C
# 465 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitmovement LOCALID_NONE
# 466 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject 32783
# 467 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
# 468 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 469 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F3E::
# 474 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081B0F90, MSGBOX_SIGN
# 475 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_081B0F48::
# 480 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	closemessage
# 481 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 486 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 487 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 488 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 1
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId10::
# 493 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x40
# 494 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 495 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 1
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId11::
# 500 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8000, 0x142
# 501 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 502 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	callstd 1
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6630::
# 507 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 508 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6658
# 509 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_083272FC
# 510 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6855, MSGBOX_AUTOCLOSE
# 511 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 512 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_0802DE50
# 513 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 514 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6658::
# 519 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 520 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 521 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B6674
# 522 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6965, MSGBOX_AUTOCLOSE
# 523 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Trigger_1::
# 528 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 529 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 530 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 531 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B66BF
# 532 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 533 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 534 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_0803DEB2
# 535 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B68A8, MSGBOX_AUTOCLOSE
# 536 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_081536F3
# 537 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 538 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B66BF::
# 543 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 544 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 545 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	givemon SPECIES_GOLDUCK, 0x1E, 0x118
# 546 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_0803DEB2
# 547 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6A5B, MSGBOX_AUTOCLOSE
# 548 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_081788C2
# 549 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 550 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6A87, MSGBOX_AUTOCLOSE
# 551 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setobjectxy LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, 0x11, 0x26
# 552 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 553 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, Naranja_CaminoFrio_G00_M29_Movement_086B6ACA
# 554 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0xFF
# 555 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL
# 556 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150808
# 557 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 558 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Trigger_3::
# 563 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 564 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 565 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 566 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 567 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	clearflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 568 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_08229547
# 569 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B68DD, MSGBOX_AUTOCLOSE
# 570 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 571 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_085061EC
# 572 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x40
# 573 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B691D, MSGBOX_DEFAULT
# 574 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B6771
# 575 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_086B6779
# 576 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x90
# 577 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, Naranja_CaminoFrio_G00_M29_Movement_086B677D
# 578 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_080239AB
# 579 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x40
# 580 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_TOTODILE_DOLL_LocalId13::
# 585 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 586 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitse
# 587 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	playmoncry SPECIES_MAWILE, 0x2800
# 588 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	waitse
# 589 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 590 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x30
# 591 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6989, MSGBOX_AUTOCLOSE
# 592 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_TOTODILE_DOLL, Naranja_CaminoFrio_G00_M29_Movement_086B67C1
# 593 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_086B67D1
# 594 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0xB0
# 595 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 596 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Trigger_2::
# 601 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_SWIMMER_F
# 602 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 603 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	getpartysize
# 604 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 605 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6630
# 606 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_08229547
# 607 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B67E0, MSGBOX_AUTOCLOSE
# 608 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 609 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B5425
# 610 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_BARD_LocalId4::
# 615 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 616 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6B23
# 617 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6BB0, MSGBOX_DEFAULT
# 618 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 619 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_0802DE50
# 620 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6BB5, MSGBOX_AUTOCLOSE
# 621 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6B23::
# 626 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock
# 627 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 628 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6BCB, MSGBOX_DEFAULT
# 629 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 630 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6BDA, MSGBOX_AUTOCLOSE
# 631 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 632 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6C1A, MSGBOX_AUTOCLOSE
# 633 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_BARD, Naranja_CaminoFrio_G00_M29_Movement_086B67C1
# 634 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x30
# 635 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject LOCALID_CAMINO_FRIO_G00_M29_BARD
# 636 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 637 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setobjectxy LOCALID_CAMINO_FRIO_G00_M29_SWIMMER_F, 0x11, 0x28
# 638 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 2
# 639 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_SWIMMER_F, Naranja_CaminoFrio_G00_M29_Movement_086B6B9A
# 640 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x60
# 641 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_08003246
# 642 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0xA0
# 643 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 644 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x40
# 645 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 646 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	clearflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 647 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeobject LOCALID_CAMINO_FRIO_G00_M29_SWIMMER_F
# 648 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x10
# 649 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6D80::
# 654 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 655 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6F0D, MSGBOX_AUTOCLOSE
# 656 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G00_M29_NURSE, Naranja_CaminoFrio_G00_M29_Movement_086B67C2
# 657 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 5
# 658 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 659 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x20
# 660 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	removeitem ITEM_POTION, 1
# 661 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6FBA, MSGBOX_AUTOCLOSE
# 662 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B67C2
# 663 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x60
# 664 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	clearflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_212C
# 665 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	warp MAP_NARANJA_UNDERWATER_G00_M52, 0, 0, 0
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_NURSE_LocalId2::
# 670 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	faceplayer
# 671 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6DC0, MSGBOX_YESNO
# 672 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 673 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 674 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 675 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 676 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 677 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	checkitem ITEM_POTION, 0
# 678 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 679 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6D80
# 680 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_086B6EC9, MSGBOX_AUTOCLOSE
	end


Naranja_CaminoFrio_G00_M29_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId14::
# 685 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 686 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	nop
# 687 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_08150733
	return


Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E::
# 691 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	release
	end


Naranja_CaminoFrio_G00_M29_EventScript_AfterBattle_086B8212::
# 696 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G00_M29_Movement_086B8210
# 697 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay 0x30
# 698 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	goto Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B6B23
	return


# 701 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_080008A0:
# 702 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_down
	step_end

# 705 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_08003246:
# 706 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_left
	step_end

# 709 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_080239AB:
# 710 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
	step_end

# 713 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_0802DE50:
# 714 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
	step_end

# 717 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_0803DEB2:
# 718 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
	step_end

# 721 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_081536F3:
# 722 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_left
# 723 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_up
	step_end

# 726 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_081788C2:
# 727 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_left
# 728 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_down
	step_end

# 731 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_081B0F3C:
# 732 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	rock_smash_break
	step_end

# 735 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_08229547:
# 736 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
# 737 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
	step_end

# 740 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_083272FC:
# 741 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_down
# 742 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
	step_end

# 745 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_085061EC:
# 746 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_down
# 747 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_left
	step_end

# 750 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B5425:
# 751 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_down
	step_end

# 754 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6674:
# 755 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
# 756 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_in_place_up
# 757 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 758 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 759 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
	step_end

# 762 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6771:
# 763 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	slide_left
# 764 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_in_place_faster_left
# 765 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	lock_facing_direction
# 766 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 767 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	unlock_facing_direction
	step_end

# 770 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6779:
# 771 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_left
# 772 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 775 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B677D:
# 776 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_visible
# 777 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
	step_end

# 780 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B67C1:
# 781 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_down
# 782 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_down
# 783 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 784 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 787 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B67C2:
# 788 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_down
# 789 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 790 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 793 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B67D1:
# 794 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 795 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 796 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 797 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 798 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 799 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 800 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 801 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 802 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_visible
# 803 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
	step_end

# 806 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6ACA:
# 807 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_visible
# 808 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	acro_end_wheelie_face_right
# 809 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 810 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
	step_end

# 813 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B6B9A:
# 814 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 815 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_right
# 816 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 817 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 818 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 819 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 820 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 821 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 822 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 823 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 824 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 825 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 826 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 827 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_left
# 828 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 829 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 830 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 831 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 832 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
# 833 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_up
	step_end

# 836 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B8200:
# 837 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_right
# 838 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	emote_exclamation_mark
# 839 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	face_left
# 840 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 841 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	delay_16
# 842 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_right
# 843 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_faster_right
# 844 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_right
# 845 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_down
# 846 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_down
# 847 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_right
# 848 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_fast_right
# 849 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_faster_up
# 850 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	jump_2_up
# 851 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	set_invisible
	step_end

# 854 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Movement_086B8210:
# 855 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	walk_slow_down
	step_end

	.align 2
# 858 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
Naranja_CaminoFrio_G00_M29_Mart_08153980:
# 859 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 860 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 861 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 862 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 863 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 864 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 865 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 866 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 867 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_X_ATTACK
# 868 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_X_DEFEND
# 869 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 870 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

Naranja_CaminoFrio_G00_M29_Text_08164AA9::
# 873 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x03}Ahora hay que vencer al\nlìder de Isla NAVEL, DANNY.\pCuando compitas con él recuerda\nla continuidad y la estabilidad\lpara ser efectiv{RIVAL}.$"

Naranja_CaminoFrio_G00_M29_Text_081653D1::
# 877 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x03}¡Vamos {PLAYER}! \nJOY está esperando.$"

Naranja_CaminoFrio_G00_M29_Text_08170154::
# 881 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "All my POKéMON does is ROAR...\nNo one dares to come near me...\pSigh... If you would, please take\nthis TM away...$"

Naranja_CaminoFrio_G00_M29_Text_081701C5::
# 885 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TM05 contains ROAR.\nA ROAR sends POKéMON scurrying.$"

Naranja_CaminoFrio_G00_M29_Text_08170206::
# 889 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "METEOR FALLS\nRUSTBORO CITY THROUGH HERE$"

Naranja_CaminoFrio_G00_M29_Text_0817022E::
# 893 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "FOSSIL MANIAC’S HOUSE\n“Fossils gratefully accepted!”$"

Naranja_CaminoFrio_G00_M29_Text_08178A9C::
# 897 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Let me see your POKéMON.\nI’ll check to see how much it likes you.\pOh.\nYour POKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_08178AF2::
# 901 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It adores you.\nIt can’t possibly love you any more.\lI even feel happy seeing it.$"

Naranja_CaminoFrio_G00_M29_Text_08178B43::
# 905 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It seems to be very happy.\nIt obviously likes you a whole lot.$"

Naranja_CaminoFrio_G00_M29_Text_08178B82::
# 909 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It likes you quite a lot.\nIt seems to want to be babied a little.$"

Naranja_CaminoFrio_G00_M29_Text_08178BC4::
# 913 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s getting used to you.\nIt seems to believe in you.$"

Naranja_CaminoFrio_G00_M29_Text_08178BFA::
# 917 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s not very used to you yet.\nIt neither loves nor hates you.$"

Naranja_CaminoFrio_G00_M29_Text_08178C39::
# 921 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s very wary.\nIt has scary viciousness in its eyes.\lIt doesn’t like you much at all.$"

Naranja_CaminoFrio_G00_M29_Text_08178C90::
# 925 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This is a little hard for me to say...\pYour POKéMON simply detests you.\nDoesn’t that make you uncomfortable?$"

Naranja_CaminoFrio_G00_M29_Text_08194917::
# 929 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¿Sabes?\pEres bueno y es difìcil ver,\naquì y en todos lados,\la alguien con un estilo\ltan impactante como 2.000 vatios.\p¡Es arrojar la POKéBALL\ny haces saltar los fusibles!\pRápido como un rayo\nahora podrás iluminar las cuevas\lcon la potente luz\lque despedirán tus POKéMON.\p¡Ten esta HM DESTELLO!$"

Naranja_CaminoFrio_G00_M29_Text_08194A3E::
# 933 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Enséñala a quienes elijas\ne iluminarán tu camino.\p¡Y sin necesidad de enchufarlos!\p{COLOR 0x04}¿Ah no?\p¡Menuda tragedia me estás ahorrando!\p{COLOR 0x01}Ja. Ja.\p¡Espero verte pronto {PLAYER}!$"

Naranja_CaminoFrio_G00_M29_Text_081A0BE4::
# 937 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Bienvenido!\p¿Puedo ayudarte?$"

Naranja_CaminoFrio_G00_M29_Text_081A0C02::
# 941 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Vuelve otra vez !$"

Naranja_CaminoFrio_G00_M29_Text_081A16B6::
# 945 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s soft, loamy soil.$"

Naranja_CaminoFrio_G00_M29_Text_081A16CD::
# 949 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s soft, loamy soil.\nWant to plant a BERRY?$"

Naranja_CaminoFrio_G00_M29_Text_081A16FB::
# 953 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} planted one {STR_VAR_1} BERRY in\nthe soft, loamy soil.$"

Naranja_CaminoFrio_G00_M29_Text_081A172C::
# 957 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "One {STR_VAR_1} BERRY was planted here.$"

Naranja_CaminoFrio_G00_M29_Text_081A174B::
# 961 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{STR_VAR_1} has sprouted.$"

Naranja_CaminoFrio_G00_M29_Text_081A175C::
# 965 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This {STR_VAR_1} plant is growing taller.$"

Naranja_CaminoFrio_G00_M29_Text_081A177D::
# 969 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "These {STR_VAR_1} flowers are blooming\n{STR_VAR_2}.$"

Naranja_CaminoFrio_G00_M29_Text_081A179F::
# 973 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "very beautifully$"

Naranja_CaminoFrio_G00_M29_Text_081A17B0::
# 977 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "cutely$"

Naranja_CaminoFrio_G00_M29_Text_081A17B7::
# 981 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "prettily$"

Naranja_CaminoFrio_G00_M29_Text_081A17C0::
# 985 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "There are {STR_VAR_2} {STR_VAR_1} BERRIES!\pDo you want to pick the\n{STR_VAR_1} BERRIES?$"

Naranja_CaminoFrio_G00_M29_Text_081A17FD::
# 989 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1} BERRIES.$"

Naranja_CaminoFrio_G00_M29_Text_081A181A::
# 993 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1} BERRIES\nin the BAG’s BERRIES POCKET.\pThe soil returned to its soft and\nloamy state.$"

Naranja_CaminoFrio_G00_M29_Text_081A1881::
# 997 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "The BAG’s BERRIES POCKET is full.\pThe {STR_VAR_1} BERRIES couldn’t be taken.$"

Naranja_CaminoFrio_G00_M29_Text_081A18C5::
# 1001 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} left the {STR_VAR_1} BERRIES\nunpicked.$"

Naranja_CaminoFrio_G00_M29_Text_081A18E6::
# 1005 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Want to water the {STR_VAR_1} with the\nWAILMER PAIL?$"

Naranja_CaminoFrio_G00_M29_Text_081A1912::
# 1009 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{PLAYER} watered the {STR_VAR_1}.$"

Naranja_CaminoFrio_G00_M29_Text_081A1925::
# 1013 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "The plant seems to be delighted.$"

Naranja_CaminoFrio_G00_M29_Text_081A1946::
# 1017 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "!$"

Naranja_CaminoFrio_G00_M29_Text_081B0E82::
# 1021 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}.$"

Naranja_CaminoFrio_G00_M29_Text_081B0F4B::
# 1025 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This rock appears to be breakable.\nWould you like to use WHIRPOOL?$"

Naranja_CaminoFrio_G00_M29_Text_081B0F90::
# 1029 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "It’s a rugged rock, but a POKéMON\nmay be able to smash it.$"

Naranja_CaminoFrio_G00_M29_Text_081BC05B::
# 1033 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Oye!\p¡Hola!\n¡Me llamo Lectro!\py… ¡O te dejo paralizado \nde un chispazo o te regalo algo!$"

Naranja_CaminoFrio_G00_M29_Text_081BC0B5::
# 1037 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Bravo!$"

Naranja_CaminoFrio_G00_M29_Text_081BC125::
# 1041 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¿Un GOLDUCK? \p¿Crees que eso te fortalece? \p¡Pues empecemos!\n$"

Naranja_CaminoFrio_G00_M29_Text_081BC163::
# 1045 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Esto le hace a una pensar.      $"

Naranja_CaminoFrio_G00_M29_Text_081BC289::
# 1049 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I need to exercise after a meal.\nLet’s have a match!$"

Naranja_CaminoFrio_G00_M29_Text_081BC2BE::
# 1053 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Oh, no!$"

Naranja_CaminoFrio_G00_M29_Text_081BC2C6::
# 1057 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I just had a tasty meal.\nI’m getting drowsy...$"

Naranja_CaminoFrio_G00_M29_Text_081BC2F5::
# 1061 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Ufufufufufu...\nWant to battle against my POKéMON?$"

Naranja_CaminoFrio_G00_M29_Text_081BC327::
# 1065 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "M-My POKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_081BC337::
# 1069 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "A big body that’s all lumpy and hard,\nenormous horns, and vicious fangs...\pUfufufufu...\nI wish I had a POKéMON like that...$"

Naranja_CaminoFrio_G00_M29_Text_081BC3B3::
# 1073 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Ufufufufufu...\nCome on, battle my POKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_081BC3E0::
# 1077 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I feel so lucky getting to see your\nPOKéMON...$"

Naranja_CaminoFrio_G00_M29_Text_081BC40F::
# 1081 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Ufufufufufu...\pWhen I see POKéMON battling, I get all\nshivery and shaky...$"

Naranja_CaminoFrio_G00_M29_Text_081BC45A::
# 1085 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "If you’re lighting a campfire, make\nsure you have water handy.$"

Naranja_CaminoFrio_G00_M29_Text_081BC499::
# 1089 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Thanks for dousing my fire!$"

Naranja_CaminoFrio_G00_M29_Text_081BC4B5::
# 1093 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "You really do have to be careful with\nany sort of fire in a forest.\pDon’t ever underestimate the power\nof fire.$"

Naranja_CaminoFrio_G00_M29_Text_081BC525::
# 1097 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Have you learned to keep water handy\nfor campfires?$"

Naranja_CaminoFrio_G00_M29_Text_081BC559::
# 1101 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I got hosed down before I could flare\nup, I guess.$"

Naranja_CaminoFrio_G00_M29_Text_081BC58C::
# 1105 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "You really do have to be careful with\nany sort of fire in a forest.\pDon’t ever underestimate the power\nof fire.$"

Naranja_CaminoFrio_G00_M29_Text_081BC5FC::
# 1109 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "If we were fishing, you wouldn’t stand\na chance against me.\lSo, bring on your POKéMON!$"

Naranja_CaminoFrio_G00_M29_Text_081BC653::
# 1113 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "If we were fishing, I would’ve won...$"

Naranja_CaminoFrio_G00_M29_Text_081BC679::
# 1117 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I think I’ll try my luck at landing\na big one at METEOR FALLS.\pThere has to be something in there.\nI just know it.$"

Naranja_CaminoFrio_G00_M29_Text_081BC6EC::
# 1121 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I like to fish. But I also like to\nbattle!\pIf anyone challenges me, I’m there,\neven if I’m fishing.$"

Naranja_CaminoFrio_G00_M29_Text_081BC750::
# 1125 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I like to battle, but that doesn’t\nmean I’m good at it...$"

Naranja_CaminoFrio_G00_M29_Text_081BC78A::
# 1129 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "This time I’ll do it!\pI always think that, so I can’t walk\naway from fishing or POKéMON.$"

Naranja_CaminoFrio_G00_M29_Text_081BC7E3::
# 1133 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TYRA: Well, sure.\nI’m in the mood for it.\lI’ll teach you a little about POKéMON.$"

Naranja_CaminoFrio_G00_M29_Text_081BC834::
# 1137 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TYRA: What an amazing battle style!$"

Naranja_CaminoFrio_G00_M29_Text_081BC88A::
# 1141 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "TYRA: Giggle...\nIf you want to battle with us, just one\lPOKéMON isn’t enough!$"

Naranja_CaminoFrio_G00_M29_Text_081BC8D8::
# 1145 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: Who taught you about POKéMON?$"

Naranja_CaminoFrio_G00_M29_Text_081BC8FB::
# 1149 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: What an amazing battle style!$"

Naranja_CaminoFrio_G00_M29_Text_081BC91E::
# 1153 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: I started training POKéMON\nbecause TYRA, my student mentor,\ltaught me!$"

Naranja_CaminoFrio_G00_M29_Text_081BC96A::
# 1157 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "IVY: Do you only have one POKéMON?\nI think it must feel lonesome.$"

Naranja_CaminoFrio_G00_M29_Text_081C5803::
# 1161 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "I’m gathering BERRIES so I can win a\nPOKéMON CONTEST.\pIf you’d like, I’ll share one with you.$"

Naranja_CaminoFrio_G00_M29_Text_081C5861::
# 1165 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Good luck to you, too!$"

Naranja_CaminoFrio_G00_M29_Text_081C5878::
# 1169 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "What BERRIES should I plant today?\nWhat color オカキクケS should I make?\pFretting over stuff like that is fun\nin its own way.$"

Naranja_CaminoFrio_G00_M29_Text_086B67E0::
# 1173 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "No subas, este es mi peñón\nY no te dejo subir porque…\p…ehh …\p…tienes demasiados POKéMON.\nVuelve con un equipo menor.$"

Naranja_CaminoFrio_G00_M29_Text_086B6855::
# 1177 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Soy MARINA\ly este es mi Peñón.\p¡Oye!\n¡Qu tate de las escaleras!$"

Naranja_CaminoFrio_G00_M29_Text_086B68A8::
# 1181 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Aquì se hace mi Real voluntad.\p¡No te acerques allì!$"

Naranja_CaminoFrio_G00_M29_Text_086B68DD::
# 1185 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Eh! No te acerques a allì\pporque esa parte…\p…ehh…\pes sólo mía.$"

Naranja_CaminoFrio_G00_M29_Text_086B691D::
# 1189 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string " {COLOR 0x01}MARINA:Q quieres ahora?\p{COLOR 0x04}¡Mojarte!\nA ver si se te va la laca maja$"

Naranja_CaminoFrio_G00_M29_Text_086B6965::
# 1193 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x04}Me pareció ver un lindo GOLDUCK…$"

Naranja_CaminoFrio_G00_M29_Text_086B6989::
# 1197 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "GOLDUCK parece querer unirse al equipo.\p{COLOR 0x04}¡De acuerdo GOLDUCK!\nJuntos derrotaremos a esa harpìa.\pLe bajaremos los humos en una batalla\npara que entienda que no puede ir por\lahì reinando en peñones ni isletas.$"

Naranja_CaminoFrio_G00_M29_Text_086B6A5B::
# 1201 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "MARINA: ¡Eh! ¡Tú!\n¿Porqué no me haces caso?$"

Naranja_CaminoFrio_G00_M29_Text_086B6A87::
# 1205 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}:¿A quién le importa\nlo que tu digas?\p¡Sube GOLDUCK!$"

Naranja_CaminoFrio_G00_M29_Text_086B6BB0::
# 1209 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Eh!$"

Naranja_CaminoFrio_G00_M29_Text_086B6BB5::
# 1213 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "No te acerques tanto.$"

Naranja_CaminoFrio_G00_M29_Text_086B6BCB::
# 1217 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¿Sabes?$"

Naranja_CaminoFrio_G00_M29_Text_086B6BDA::
# 1221 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Quizás…\pEsta isleta no sea mìa,\nsólo porque intenté quedármela.$"

Naranja_CaminoFrio_G00_M29_Text_086B6C1A::
# 1225 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "MARINA: ¡Gracias!\p{COLOR 0x04}{PLAYER}: ¿Porqué?\p{COLOR 0x01}MARINA: Porque me di cuenta\nque no soy nadie para llegar aquì la\lúltima y decir que me quedo la isleta.\pNo tengo ninguna soberanìa aquì.\pMe iré a mi casa y dejaré de molestar\na toda la gente que podrìa utilizarlo.\pSolo fui una oportunista por aprovechar\nun momento que estaba vacìo\lpara quedarme la isleta.\p¡Adiós {PLAYER}!$"

Naranja_CaminoFrio_G00_M29_Text_086B6DC0::
# 1229 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "Hummm…\ntu Lapras se ve feliz,\ppero deberìa descansar\ndespués de tan largos viajes.\p¡Buenas! \nSoy la ENFERMERA JOY.\pComo muchas islas son muy pequeñas\npara tener su propio CENTRO POKéMON,\lyo voy donde me necesite la salud\lde un POKéMON, esté donde esté.\p¿Me ayudas?$"

Naranja_CaminoFrio_G00_M29_Text_086B6EC9::
# 1233 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡De acuerdo!\pAunque necesitaremos una POCIÓN.\n¿Podrìas conseguirla?$"

Naranja_CaminoFrio_G00_M29_Text_086B6F0D::
# 1237 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "¡Perfecto!\pHay que curar y alimentar\na un SHELLDER enfermo.\p¿No te importa\nque usemos esa POCIÓN no?\p¡Pues ahora mismo marcharemos!\p{COLOR 0x04} ¿A dónde?\p{COLOR 0x01}Dónde están las llaves…$"

Naranja_CaminoFrio_G00_M29_Text_086B6FBA::
# 1241 "data/maps/Naranja_CaminoFrio_G00_M29/scripts.pory"
	.string "{COLOR 0x04}¡Ay!\n¡Hoy debe ser San Zambullida!$"
