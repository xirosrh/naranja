Naranja_Desierto_G00_M32_MapScripts::
	.byte 0


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId9::
# 8 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_136, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B88D4, Naranja_Desierto_G00_M32_Text_081B8911
# 9 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_0814F205
# 12 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081B8925
# 13 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_0814F205::
# 18 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_136, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B895E, Naranja_Desierto_G00_M32_Text_081B899E
# 19 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081B89C0
# 20 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 25 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_155, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B933A, Naranja_Desierto_G00_M32_Text_081B9365
# 26 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 28 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_0814F3FA
# 29 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081B938E
# 30 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_0814F3FA::
# 35 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_155, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B93EB, Naranja_Desierto_G00_M32_Text_081B9429
# 36 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081B9477
# 37 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId1::
# 42 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_08170CA7
# 43 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 2
	end


Naranja_Desierto_G00_M32_EventScript_Sign_1::
# 48 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_08170D02
# 49 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 3
	end


Naranja_Desierto_G00_M32_EventScript_Sign_2::
# 54 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_08170D1E
# 55 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 3
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId10::
# 60 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_538, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD49E, Naranja_Desierto_G00_M32_Text_081BD4D9
# 61 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 62 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 63 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150DB4
# 64 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BD4F9
# 65 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150DB4::
# 70 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_538, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD569, Naranja_Desierto_G00_M32_Text_081BD5AB
# 71 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BD5F2
# 72 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId8::
# 77 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_364, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD79A, Naranja_Desierto_G00_M32_Text_081BD7E0
# 78 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 79 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 80 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150E30
# 81 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BD7F5
# 82 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150E30::
# 87 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_364, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD83F, Naranja_Desierto_G00_M32_Text_081BD8A2
# 88 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BD8BD
# 89 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F_LocalId17::
# 94 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_369, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD914, Naranja_Desierto_G00_M32_Text_081BD965
# 95 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 96 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 97 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150E6E
# 98 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BD98F
# 99 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150E6E::
# 104 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_369, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD9F1, Naranja_Desierto_G00_M32_Text_081BDA41
# 105 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BDA6B
# 106 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150E85::
# 111 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_553, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDAA7, Naranja_Desierto_G00_M32_Text_081BDAFC
# 112 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitse
# 113 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	buffermovename 0x6B, 0x5608
	return


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_LASS_LocalId20::
# 118 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDBC3, Naranja_Desierto_G00_M32_Text_081BDC07, Naranja_Desierto_G00_M32_Text_081BDC96
# 119 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 120 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 121 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150EC7
# 122 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BDC44
# 123 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150EC7::
# 128 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDDEF, Naranja_Desierto_G00_M32_Text_081BDE2F, Naranja_Desierto_G00_M32_Text_081BDEA7
# 129 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BDE55
# 130 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_LASS_LocalId19::
# 135 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDCD2, Naranja_Desierto_G00_M32_Text_081BDD1E, Naranja_Desierto_G00_M32_Text_081BDD8B
# 136 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 137 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 138 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150F0D
# 139 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BDD4E
# 140 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150F0D::
# 145 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDEE3, Naranja_Desierto_G00_M32_Text_081BDF26, Naranja_Desierto_G00_M32_Text_081BDF90
# 146 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BDF37
# 147 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId21::
# 152 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_037, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDFF4, Naranja_Desierto_G00_M32_Text_081BE03C
# 153 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 154 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 155 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081510B6
# 156 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BE05E
# 157 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081510B6::
# 162 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_037, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BE0AB, Naranja_Desierto_G00_M32_Text_081BE0D3
# 163 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081BE104
# 164 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId3::
# 169 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_376, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081C1C67, Naranja_Desierto_G00_M32_Text_081C1C95
# 170 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 171 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 172 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081522CB
# 173 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081C1CC3
# 174 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081522CB::
# 179 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_376, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081C1D02, Naranja_Desierto_G00_M32_Text_081C1D45
# 180 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081C1D6B
# 181 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_CUTTABLE_TREE_LocalId15::
# 186 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lockall
# 187 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0807
# 188 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if LESS_THAN, Naranja_Desierto_G00_M32_EventScript_Sub_081B0E32
# 189 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checkpartymove MOVE_CUT
# 190 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 191 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081B0E32
# 192 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 193 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 194 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	buffermovename 1, MOVE_CUT
# 195 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_081B0E3F
# 196 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 5
# 197 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 198 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081B0E3C
# 199 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081B0E82
# 200 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 4
# 201 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	closemessage
# 202 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	dofieldeffect 2
# 203 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitstate
# 204 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto Naranja_Desierto_G00_M32_EventScript_Sub_081B0E21
	return


Naranja_Desierto_G00_M32_EventScript_Sub_081B0E21::
# 208 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement 32783, Naranja_Desierto_G00_M32_Movement_081B0E30
# 209 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitmovement LOCALID_NONE
# 210 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	removeobject 32783
# 211 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081B0E32::
# 216 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_086BEF40
# 217 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 3
# 218 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081B0E3C::
# 223 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	closemessage
# 224 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId14::
# 229 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 230 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 231 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 1
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId16::
# 236 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8000, 0x18
# 237 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 238 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 1
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId18::
# 243 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lock
# 244 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	faceplayer
# 245 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checktrainerflag 0x1BE
# 246 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 247 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 248 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaTangelo_G06_M06_EventScript_OBJ_EVENT_GFX_LASS_LocalId1
# 249 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_086B8340
# 250 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 6
# 251 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checktrainerflag 0x229
# 252 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	call_if LESS_THAN, Naranja_Desierto_G00_M32_EventScript_Sub_08150E85
# 253 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_086B838D
# 254 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 5
# 255 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 256 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 257 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	closemessage
# 258 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	nop
# 259 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_CAMPER, Naranja_Desierto_G00_M32_Movement_08150E97
# 260 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8320
# 261 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x80
# 262 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_08150E97
# 263 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setobjectxy LOCALID_DESIERTO_G00_M32_POOCHYENA, 0x1A, 9
# 264 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_POOCHYENA, Naranja_Desierto_G00_M32_Movement_086B831D
# 265 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x20
# 266 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8327
# 267 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x40
# 268 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8310
# 269 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_POOCHYENA, Naranja_Desierto_G00_M32_Movement_086B8310
# 270 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x10
# 271 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lockall
# 272 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setvar 0x2130, 1
# 273 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	playse SE_PIN
# 274 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	call Naranja_Desierto_G00_M32_EventScript_Sub_086B8400
# 275 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	special DrawWholeMapView
# 276 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
# 277 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_08150E97
# 278 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x30
# 279 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_POOCHYENA, Naranja_Desierto_G00_M32_Movement_086B8330
# 280 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0xB0
# 281 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_CAMPER, Naranja_Desierto_G00_M32_Movement_08150E97
# 282 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	message Naranja_Desierto_G00_M32_Text_086B83B8
# 283 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitmessage
# 284 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	faceplayer
# 285 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8316
# 286 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	nop
# 287 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x40
# 288 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	loadword 0, Naranja_Desierto_G00_M32_Text_086B83CC
# 289 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 4
# 290 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	nop
# 291 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	release
	end


Naranja_Desierto_G00_M32_EventScript_Sub_086B8400::
# 296 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setmetatile 0x15, 7, 0xE2, 1
# 297 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setmetatile 0x15, 8, 0x121, 0
	return


# 301 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_08150E97:
# 302 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	emote_exclamation_mark
# 303 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_right
# 304 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 305 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_up
	step_end

# 308 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_081B0E30:
# 309 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	cut_tree
	step_end

# 312 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8310:
# 313 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_up
# 314 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 315 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 316 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
	step_end

# 319 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8316:
# 320 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_down
# 321 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_down
# 322 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_right
# 323 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_right
# 324 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_left
	step_end

# 327 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B831D:
# 328 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 329 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 330 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 331 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 332 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 333 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_up
# 334 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 335 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 336 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
	step_end

# 339 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8320:
# 340 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 341 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 342 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_up
# 343 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 344 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 345 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
	step_end

# 348 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8327:
# 349 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 350 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lock_facing_direction
# 351 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_down
# 352 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	unlock_facing_direction
# 353 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 354 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_up
# 355 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_up
	step_end

# 358 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8330:
# 359 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 360 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_down
# 361 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_down
# 362 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 363 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 364 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 365 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_wheelie_move_up
# 366 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_wheelie_move_up
# 367 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_pop_wheelie_move_right
# 368 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_pop_wheelie_move_right
	step_end

Naranja_Desierto_G00_M32_Text_08170CA7::
# 371 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Allì adelante hay un desierto abarrotado\nde entrenadores fortìsimos$"

Naranja_Desierto_G00_M32_Text_08170D02::
# 375 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "DESIERTO de entrenadores.\p“A pan duro, diente agudo”\p$"

Naranja_Desierto_G00_M32_Text_08170D1E::
# 379 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string " pan duro, diente agudo”\p$"

Naranja_Desierto_G00_M32_Text_081B0E3F::
# 383 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "This tree looks like it can be CUT down.\pWould you like to CUT it?$"

Naranja_Desierto_G00_M32_Text_081B88D4::
# 387 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Enfréntate al ciberpoder de mi pokemon.\nEl soldado eléctrico$"

Naranja_Desierto_G00_M32_Text_081B8911::
# 391 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡¡Mi ciberpokemon!!$"

Naranja_Desierto_G00_M32_Text_081B8925::
# 395 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Todo lo cíber mola\p…los cibercafés…\p…los cíberpokemon.$"

Naranja_Desierto_G00_M32_Text_081B895E::
# 399 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "After I lost to you, I learned a bunch\nof things about POKéMON.$"

Naranja_Desierto_G00_M32_Text_081B899E::
# 403 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I lost again?\nWhy couldn’t I win?$"

Naranja_Desierto_G00_M32_Text_081B89C0::
# 407 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m fabulously wealthy, but I can’t\nseem to win at POKéMON...\pIt’s so deep, the world of POKéMON...$"

Naranja_Desierto_G00_M32_Text_081B933A::
# 411 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "The sea is like my backyard.\nLet’s battle!$"

Naranja_Desierto_G00_M32_Text_081B9365::
# 415 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I lost on my home field...\nI’m in shock!$"

Naranja_Desierto_G00_M32_Text_081B938E::
# 419 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I swim the seas with a heart full of\ndreams...\pIt’s a song!\nAnyways, I’m swimming some more.$"

Naranja_Desierto_G00_M32_Text_081B93EB::
# 423 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Swimming in the big, wide sea, my\nPOKéMON has grown stronger!$"

Naranja_Desierto_G00_M32_Text_081B9429::
# 427 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "What a shock!\pMy POKéMON has gotten stronger, but\nI stayed weak as a TRAINER!$"

Naranja_Desierto_G00_M32_Text_081B9477::
# 431 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "What you learn in battle makes you a\nstronger TRAINER.\lThe waves taught me that.$"

Naranja_Desierto_G00_M32_Text_081BD49E::
# 435 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ROSELIA es una rosa  \ny una rosa es una rosa, es una rosa.$"

Naranja_Desierto_G00_M32_Text_081BD4D9::
# 439 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "…y sus espinas no respetan.$"

Naranja_Desierto_G00_M32_Text_081BD4F9::
# 443 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "AMAR es el empiece de la palabra\nAMARGURA…\pNo intento deprimirte sino enseñarte\nque hasta las rosas más bonitas\lTienen espinas.\p¿Las espinas crecen con el tiempo? \n¡Compruébalo!$"

Naranja_Desierto_G00_M32_Text_081BD569::
# 447 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Tienen espinas.\p¿Las espinas crecen con el tiempo? \n¡Compruébalo!$"

Naranja_Desierto_G00_M32_Text_081BD5AB::
# 451 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Que guay!\n¡Sabes un montón sobre  POKéMON!\p¡Con lo pequeñ{RIVAL} que eres…$"

Naranja_Desierto_G00_M32_Text_081BD5F2::
# 455 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Eres muy bueno \ncomo premio te voy a dar esta HM:\pObtuviste HM01.$"

Naranja_Desierto_G00_M32_Text_081BD79A::
# 459 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m in the middle of a triathlon, but,\nwhatever, let’s have a battle!$"

Naranja_Desierto_G00_M32_Text_081BD7E0::
# 463 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I ran out of energy!$"

Naranja_Desierto_G00_M32_Text_081BD7F5::
# 467 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I may have blown it...\pI might have dropped to last during\nthat battle...$"

Naranja_Desierto_G00_M32_Text_081BD83F::
# 471 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m smack in the middle of a triathlon,\nbut I’m comfortably ahead.\lLet’s make this a quick battle!$"

Naranja_Desierto_G00_M32_Text_081BD8A2::
# 475 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I ran out of energy again!$"

Naranja_Desierto_G00_M32_Text_081BD8BD::
# 479 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I was tops in swimming and cycling, but\nI’m not quite that confident with\lPOKéMON yet.$"

Naranja_Desierto_G00_M32_Text_081BD914::
# 483 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I do my triathlon training with POKéMON,\nso I’m pretty confident about my speed.$"

Naranja_Desierto_G00_M32_Text_081BD965::
# 487 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I need to get more practices in,\nI guess.$"

Naranja_Desierto_G00_M32_Text_081BD98F::
# 491 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Training is meaningful only if you\nkeep it up regularly.\pOkay! I’ll resume my training!\nTomorrow!$"

Naranja_Desierto_G00_M32_Text_081BD9F1::
# 495 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Are you keeping up with your training?\nI sure am!\lLet me show you the evidence!$"

Naranja_Desierto_G00_M32_Text_081BDA41::
# 499 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I need to get more practices in,\nI guess.$"

Naranja_Desierto_G00_M32_Text_081BDA6B::
# 503 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’ll resume training tomorrow.\nLet’s battle again sometime!$"

Naranja_Desierto_G00_M32_Text_081BDAA7::
# 507 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Aunque victorioso de piquito… \pMejor compruebo yo mismo:  \naquì medallas no cuentan.$"

Naranja_Desierto_G00_M32_Text_081BDAFC::
# 511 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Guau!\nVen cuando quieras pasar dentro.$"

Naranja_Desierto_G00_M32_Text_081BDBC3::
# 515 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I’m with my pretty junior student\npartner. I have to do good!$"

Naranja_Desierto_G00_M32_Text_081BDC07::
# 519 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I’m with my pretty junior student\npartner! Let me win!$"

Naranja_Desierto_G00_M32_Text_081BDC44::
# 523 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: Your POKéMON have some good\ncombinations.\pI’d say you’re second only to us!$"

Naranja_Desierto_G00_M32_Text_081BDC96::
# 527 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: If you want to battle us, bring\ntwo POKéMON with you.$"

Naranja_Desierto_G00_M32_Text_081BDCD2::
# 531 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I’m going to tag up with my super\nsenior student partner and beat you!$"

Naranja_Desierto_G00_M32_Text_081BDD1E::
# 535 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Oh, no!\nI’m sorry, ANNA! I let you down...$"

Naranja_Desierto_G00_M32_Text_081BDD4E::
# 539 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I dragged ANNA down...\nIf I didn’t, she would have won!$"

Naranja_Desierto_G00_M32_Text_081BDD8B::
# 543 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Do you only have one POKéMON?\nWe can’t battle with you, then.\pWe want to have a 2-on-2 battle.$"

Naranja_Desierto_G00_M32_Text_081BDDEF::
# 547 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I can’t keep losing in front of\nmy junior partner, right?$"

Naranja_Desierto_G00_M32_Text_081BDE2F::
# 551 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I couldn’t get into the groove.$"

Naranja_Desierto_G00_M32_Text_081BDE55::
# 555 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: Your POKéMON have some good\ncombinations.\pI’d say you’re second only to us!$"

Naranja_Desierto_G00_M32_Text_081BDEA7::
# 559 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: If you want to battle us, bring\ntwo POKéMON with you.$"

Naranja_Desierto_G00_M32_Text_081BDEE3::
# 563 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I’m going to tag up with my\nsenior partner and win this time!$"

Naranja_Desierto_G00_M32_Text_081BDF26::
# 567 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Too strong!$"

Naranja_Desierto_G00_M32_Text_081BDF37::
# 571 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I battled together with my\nsenior partner, but we lost...\pThat’s so discouraging...$"

Naranja_Desierto_G00_M32_Text_081BDF90::
# 575 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Do you only have one POKéMON?\nWe can’t battle with you, then.\pWe want to have a 2-on-2 battle.$"

Naranja_Desierto_G00_M32_Text_081BDFF4::
# 579 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "The aroma of flowers has a magical\npower. It cleanses us body and soul.$"

Naranja_Desierto_G00_M32_Text_081BE03C::
# 583 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Oh, dear me.\nI seem to have lost.$"

Naranja_Desierto_G00_M32_Text_081BE05E::
# 587 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Flowers, POKéMON...\nI love whatever smells nice.\pStinky things...\nI’ll pass.$"

Naranja_Desierto_G00_M32_Text_081BE0AB::
# 591 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Were you drawn here by the sweet\naroma?$"

Naranja_Desierto_G00_M32_Text_081BE0D3::
# 595 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "The power of aroma...\nIt didn’t seem to do much.$"

Naranja_Desierto_G00_M32_Text_081BE104::
# 599 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "If you use a sweet aroma properly,\nPOKéMON will be attracted by it.$"

Naranja_Desierto_G00_M32_Text_081C1C67::
# 603 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Isla MANDARINA   is still a long ways\naway...$"

Naranja_Desierto_G00_M32_Text_081C1C95::
# 607 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "My first victory seems to be far\naway, too...$"

Naranja_Desierto_G00_M32_Text_081C1CC3::
# 611 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "My whole life has been about losing,\nbut I will never give up!$"

Naranja_Desierto_G00_M32_Text_081C1D02::
# 615 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m still feeling good. I’ll keep on\nswimming to EVER GRANDE CITY.$"

Naranja_Desierto_G00_M32_Text_081C1D45::
# 619 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’ve yet to taste my first victory...$"

Naranja_Desierto_G00_M32_Text_081C1D6B::
# 623 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’ll eventually reach EVER GRANDE CITY\nwhere I can eventually win...$"

Naranja_Desierto_G00_M32_Text_086B8340::
# 627 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Tu medalla dice que eres grande.\p¡Mola que pase alguien \ntan buen{RIVAL} como tú!$"

Naranja_Desierto_G00_M32_Text_086B838D::
# 631 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¿Necesitas ayuda\npara despejar la entrada?$"

Naranja_Desierto_G00_M32_Text_086B83B8::
# 635 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Bien hecho MACHOP!$"

Naranja_Desierto_G00_M32_Text_086B83CC::
# 639 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Ahora ya puedes!$"

Naranja_Desierto_G00_M32_Text_086BEF40::
# 643 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Podrías cortar este árbol…\p…pero va a ser que no.$"
