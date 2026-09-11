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
	msgbox Naranja_Desierto_G00_M32_Text_081B8925, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_0814F205::
# 17 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_136, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B895E, Naranja_Desierto_G00_M32_Text_081B899E
# 18 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081B89C0, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 23 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_155, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B933A, Naranja_Desierto_G00_M32_Text_081B9365
# 24 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 25 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 26 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_0814F3FA
# 27 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081B938E, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_0814F3FA::
# 32 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_155, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081B93EB, Naranja_Desierto_G00_M32_Text_081B9429
# 33 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081B9477, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId1::
# 38 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_08170CA7, MSGBOX_NPC
	end


Naranja_Desierto_G00_M32_EventScript_Sign_1::
# 43 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_08170D02, MSGBOX_SIGN
	end


Naranja_Desierto_G00_M32_EventScript_Sign_2::
# 48 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_08170D1E, MSGBOX_SIGN
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId10::
# 53 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_538, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD49E, Naranja_Desierto_G00_M32_Text_081BD4D9
# 54 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 55 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 56 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150DB4
# 57 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BD4F9, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150DB4::
# 62 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_538, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD569, Naranja_Desierto_G00_M32_Text_081BD5AB
# 63 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BD5F2, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId8::
# 68 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_364, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD79A, Naranja_Desierto_G00_M32_Text_081BD7E0
# 69 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 70 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 71 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150E30
# 72 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BD7F5, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150E30::
# 77 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_364, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD83F, Naranja_Desierto_G00_M32_Text_081BD8A2
# 78 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BD8BD, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F_LocalId17::
# 83 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_369, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD914, Naranja_Desierto_G00_M32_Text_081BD965
# 84 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 85 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 86 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150E6E
# 87 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BD98F, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150E6E::
# 92 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_369, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BD9F1, Naranja_Desierto_G00_M32_Text_081BDA41
# 93 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BDA6B, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150E85::
# 98 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_553, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDAA7, Naranja_Desierto_G00_M32_Text_081BDAFC
# 99 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitse
# 100 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	buffermovename 0x6B, 0x5608
	return


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_LASS_LocalId20::
# 105 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDBC3, Naranja_Desierto_G00_M32_Text_081BDC07, Naranja_Desierto_G00_M32_Text_081BDC96
# 106 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 107 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 108 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150EC7
# 109 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BDC44, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150EC7::
# 114 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDDEF, Naranja_Desierto_G00_M32_Text_081BDE2F, Naranja_Desierto_G00_M32_Text_081BDEA7
# 115 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BDE55, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_LASS_LocalId19::
# 120 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDCD2, Naranja_Desierto_G00_M32_Text_081BDD1E, Naranja_Desierto_G00_M32_Text_081BDD8B
# 121 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 122 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 123 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_08150F0D
# 124 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BDD4E, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_08150F0D::
# 129 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_DESIERTO_287, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDEE3, Naranja_Desierto_G00_M32_Text_081BDF26, Naranja_Desierto_G00_M32_Text_081BDF90
# 130 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BDF37, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId21::
# 135 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_037, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BDFF4, Naranja_Desierto_G00_M32_Text_081BE03C
# 136 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 137 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 138 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081510B6
# 139 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BE05E, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081510B6::
# 144 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_037, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081BE0AB, Naranja_Desierto_G00_M32_Text_081BE0D3
# 145 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081BE104, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId3::
# 150 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_DESIERTO_376, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081C1C67, Naranja_Desierto_G00_M32_Text_081C1C95
# 151 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 152 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 153 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081522CB
# 154 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081C1CC3, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081522CB::
# 159 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_DESIERTO_376, LOCALID_NONE, Naranja_Desierto_G00_M32_Text_081C1D02, Naranja_Desierto_G00_M32_Text_081C1D45
# 160 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081C1D6B, MSGBOX_AUTOCLOSE
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_CUTTABLE_TREE_LocalId15::
# 165 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lockall
# 166 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0807
# 167 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if LESS_THAN, Naranja_Desierto_G00_M32_EventScript_Sub_081B0E32
# 168 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checkpartymove MOVE_CUT
# 169 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 170 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081B0E32
# 171 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setfieldeffectargument 0, 0x800D
# 172 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	bufferpartymonnick 0, 0x800D
# 173 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	buffermovename 1, MOVE_CUT
# 174 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_081B0E3F, MSGBOX_YESNO
# 175 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 176 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G00_M32_EventScript_Sub_081B0E3C
# 177 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081B0E82, MSGBOX_DEFAULT
# 178 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	closemessage
# 179 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	dofieldeffect 2
# 180 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitstate
# 181 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto Naranja_Desierto_G00_M32_EventScript_Sub_081B0E21
	return


Naranja_Desierto_G00_M32_EventScript_Sub_081B0E21::
# 185 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement 32783, Naranja_Desierto_G00_M32_Movement_081B0E30
# 186 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitmovement LOCALID_NONE
# 187 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	removeobject 32783
# 188 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081B0E32::
# 193 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_086BEF40, MSGBOX_SIGN
# 194 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
	end


Naranja_Desierto_G00_M32_EventScript_Sub_081B0E3C::
# 199 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	closemessage
# 200 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId14::
# 205 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 206 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 207 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 1
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId16::
# 212 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8000, 0x18
# 213 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 214 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	callstd 1
	end


Naranja_Desierto_G00_M32_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId18::
# 219 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lock
# 220 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	faceplayer
# 221 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checktrainerflag 0x1BE
# 222 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 223 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 224 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaTangelo_G06_M06_EventScript_OBJ_EVENT_GFX_LASS_LocalId1
# 225 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_086B8340, MSGBOX_AUTOCLOSE
# 226 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	checktrainerflag 0x229
# 227 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	call_if LESS_THAN, Naranja_Desierto_G00_M32_EventScript_Sub_08150E85
# 228 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_086B838D, MSGBOX_YESNO
# 229 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 230 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 231 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	closemessage
# 232 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	nop
# 233 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_CAMPER, Naranja_Desierto_G00_M32_Movement_08150E97
# 234 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8320
# 235 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x80
# 236 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_08150E97
# 237 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setobjectxy LOCALID_DESIERTO_G00_M32_POOCHYENA, 0x1A, 9
# 238 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_POOCHYENA, Naranja_Desierto_G00_M32_Movement_086B831D
# 239 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x20
# 240 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8327
# 241 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x40
# 242 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8310
# 243 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_POOCHYENA, Naranja_Desierto_G00_M32_Movement_086B8310
# 244 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x10
# 245 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lockall
# 246 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setvar 0x2130, 1
# 247 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	playse SE_PIN
# 248 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	call Naranja_Desierto_G00_M32_EventScript_Sub_086B8400
# 249 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	special DrawWholeMapView
# 250 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	releaseall
# 251 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_08150E97
# 252 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x30
# 253 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_POOCHYENA, Naranja_Desierto_G00_M32_Movement_086B8330
# 254 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0xB0
# 255 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_CAMPER, Naranja_Desierto_G00_M32_Movement_08150E97
# 256 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	message Naranja_Desierto_G00_M32_Text_086B83B8
# 257 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	waitmessage
# 258 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	faceplayer
# 259 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	applymovement LOCALID_DESIERTO_G00_M32_AZUMARILL, Naranja_Desierto_G00_M32_Movement_086B8316
# 260 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	nop
# 261 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay 0x40
# 262 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	msgbox Naranja_Desierto_G00_M32_Text_086B83CC, MSGBOX_DEFAULT
# 263 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	nop
# 264 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	release
	end


Naranja_Desierto_G00_M32_EventScript_Sub_086B8400::
# 269 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setmetatile 0x15, 7, 0xE2, 1
# 270 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	setmetatile 0x15, 8, 0x121, 0
	return


# 274 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_08150E97:
# 275 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	emote_exclamation_mark
# 276 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_right
# 277 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 278 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_up
	step_end

# 281 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_081B0E30:
# 282 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	cut_tree
	step_end

# 285 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8310:
# 286 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_up
# 287 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 288 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 289 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
	step_end

# 292 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8316:
# 293 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_down
# 294 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_down
# 295 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_right
# 296 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_right
# 297 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_left
	step_end

# 300 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B831D:
# 301 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 302 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 303 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 304 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 305 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 306 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_up
# 307 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 308 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 309 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
	step_end

# 312 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8320:
# 313 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 314 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_left
# 315 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_up
# 316 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 317 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 318 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
	step_end

# 321 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8327:
# 322 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_in_place_faster_up
# 323 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	lock_facing_direction
# 324 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_down
# 325 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	unlock_facing_direction
# 326 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	delay_16
# 327 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_up
# 328 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_up
	step_end

# 331 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
Naranja_Desierto_G00_M32_Movement_086B8330:
# 332 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 333 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_down
# 334 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	face_down
# 335 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 336 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 337 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	walk_slow_right
# 338 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_wheelie_move_up
# 339 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_wheelie_move_up
# 340 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_pop_wheelie_move_right
# 341 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	acro_pop_wheelie_move_right
	step_end

Naranja_Desierto_G00_M32_Text_08170CA7::
# 344 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Allì adelante hay un desierto abarrotado\nde entrenadores fortìsimos$"

Naranja_Desierto_G00_M32_Text_08170D02::
# 348 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "DESIERTO de entrenadores.\p“A pan duro, diente agudo”\p$"

Naranja_Desierto_G00_M32_Text_08170D1E::
# 352 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string " pan duro, diente agudo”\p$"

Naranja_Desierto_G00_M32_Text_081B0E3F::
# 356 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "This tree looks like it can be CUT down.\pWould you like to CUT it?$"

Naranja_Desierto_G00_M32_Text_081B88D4::
# 360 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Enfréntate al ciberpoder de mi pokemon.\nEl soldado eléctrico$"

Naranja_Desierto_G00_M32_Text_081B8911::
# 364 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡¡Mi ciberpokemon!!$"

Naranja_Desierto_G00_M32_Text_081B8925::
# 368 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Todo lo cíber mola\p…los cibercafés…\p…los cíberpokemon.$"

Naranja_Desierto_G00_M32_Text_081B895E::
# 372 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "After I lost to you, I learned a bunch\nof things about POKéMON.$"

Naranja_Desierto_G00_M32_Text_081B899E::
# 376 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I lost again?\nWhy couldn’t I win?$"

Naranja_Desierto_G00_M32_Text_081B89C0::
# 380 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m fabulously wealthy, but I can’t\nseem to win at POKéMON...\pIt’s so deep, the world of POKéMON...$"

Naranja_Desierto_G00_M32_Text_081B933A::
# 384 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "The sea is like my backyard.\nLet’s battle!$"

Naranja_Desierto_G00_M32_Text_081B9365::
# 388 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I lost on my home field...\nI’m in shock!$"

Naranja_Desierto_G00_M32_Text_081B938E::
# 392 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I swim the seas with a heart full of\ndreams...\pIt’s a song!\nAnyways, I’m swimming some more.$"

Naranja_Desierto_G00_M32_Text_081B93EB::
# 396 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Swimming in the big, wide sea, my\nPOKéMON has grown stronger!$"

Naranja_Desierto_G00_M32_Text_081B9429::
# 400 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "What a shock!\pMy POKéMON has gotten stronger, but\nI stayed weak as a TRAINER!$"

Naranja_Desierto_G00_M32_Text_081B9477::
# 404 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "What you learn in battle makes you a\nstronger TRAINER.\lThe waves taught me that.$"

Naranja_Desierto_G00_M32_Text_081BD49E::
# 408 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ROSELIA es una rosa  \ny una rosa es una rosa, es una rosa.$"

Naranja_Desierto_G00_M32_Text_081BD4D9::
# 412 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "…y sus espinas no respetan.$"

Naranja_Desierto_G00_M32_Text_081BD4F9::
# 416 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "AMAR es el empiece de la palabra\nAMARGURA…\pNo intento deprimirte sino enseñarte\nque hasta las rosas más bonitas\lTienen espinas.\p¿Las espinas crecen con el tiempo? \n¡Compruébalo!$"

Naranja_Desierto_G00_M32_Text_081BD569::
# 420 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Tienen espinas.\p¿Las espinas crecen con el tiempo? \n¡Compruébalo!$"

Naranja_Desierto_G00_M32_Text_081BD5AB::
# 424 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Que guay!\n¡Sabes un montón sobre  POKéMON!\p¡Con lo pequeñ{RIVAL} que eres…$"

Naranja_Desierto_G00_M32_Text_081BD5F2::
# 428 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Eres muy bueno \ncomo premio te voy a dar esta HM:\pObtuviste HM01.$"

Naranja_Desierto_G00_M32_Text_081BD79A::
# 432 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m in the middle of a triathlon, but,\nwhatever, let’s have a battle!$"

Naranja_Desierto_G00_M32_Text_081BD7E0::
# 436 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I ran out of energy!$"

Naranja_Desierto_G00_M32_Text_081BD7F5::
# 440 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I may have blown it...\pI might have dropped to last during\nthat battle...$"

Naranja_Desierto_G00_M32_Text_081BD83F::
# 444 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m smack in the middle of a triathlon,\nbut I’m comfortably ahead.\lLet’s make this a quick battle!$"

Naranja_Desierto_G00_M32_Text_081BD8A2::
# 448 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I ran out of energy again!$"

Naranja_Desierto_G00_M32_Text_081BD8BD::
# 452 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I was tops in swimming and cycling, but\nI’m not quite that confident with\lPOKéMON yet.$"

Naranja_Desierto_G00_M32_Text_081BD914::
# 456 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I do my triathlon training with POKéMON,\nso I’m pretty confident about my speed.$"

Naranja_Desierto_G00_M32_Text_081BD965::
# 460 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I need to get more practices in,\nI guess.$"

Naranja_Desierto_G00_M32_Text_081BD98F::
# 464 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Training is meaningful only if you\nkeep it up regularly.\pOkay! I’ll resume my training!\nTomorrow!$"

Naranja_Desierto_G00_M32_Text_081BD9F1::
# 468 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Are you keeping up with your training?\nI sure am!\lLet me show you the evidence!$"

Naranja_Desierto_G00_M32_Text_081BDA41::
# 472 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I need to get more practices in,\nI guess.$"

Naranja_Desierto_G00_M32_Text_081BDA6B::
# 476 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’ll resume training tomorrow.\nLet’s battle again sometime!$"

Naranja_Desierto_G00_M32_Text_081BDAA7::
# 480 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Aunque victorioso de piquito… \pMejor compruebo yo mismo:  \naquì medallas no cuentan.$"

Naranja_Desierto_G00_M32_Text_081BDAFC::
# 484 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Guau!\nVen cuando quieras pasar dentro.$"

Naranja_Desierto_G00_M32_Text_081BDBC3::
# 488 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I’m with my pretty junior student\npartner. I have to do good!$"

Naranja_Desierto_G00_M32_Text_081BDC07::
# 492 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I’m with my pretty junior student\npartner! Let me win!$"

Naranja_Desierto_G00_M32_Text_081BDC44::
# 496 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: Your POKéMON have some good\ncombinations.\pI’d say you’re second only to us!$"

Naranja_Desierto_G00_M32_Text_081BDC96::
# 500 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: If you want to battle us, bring\ntwo POKéMON with you.$"

Naranja_Desierto_G00_M32_Text_081BDCD2::
# 504 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I’m going to tag up with my super\nsenior student partner and beat you!$"

Naranja_Desierto_G00_M32_Text_081BDD1E::
# 508 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Oh, no!\nI’m sorry, ANNA! I let you down...$"

Naranja_Desierto_G00_M32_Text_081BDD4E::
# 512 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I dragged ANNA down...\nIf I didn’t, she would have won!$"

Naranja_Desierto_G00_M32_Text_081BDD8B::
# 516 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Do you only have one POKéMON?\nWe can’t battle with you, then.\pWe want to have a 2-on-2 battle.$"

Naranja_Desierto_G00_M32_Text_081BDDEF::
# 520 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I can’t keep losing in front of\nmy junior partner, right?$"

Naranja_Desierto_G00_M32_Text_081BDE2F::
# 524 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: I couldn’t get into the groove.$"

Naranja_Desierto_G00_M32_Text_081BDE55::
# 528 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: Your POKéMON have some good\ncombinations.\pI’d say you’re second only to us!$"

Naranja_Desierto_G00_M32_Text_081BDEA7::
# 532 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "ANNA: If you want to battle us, bring\ntwo POKéMON with you.$"

Naranja_Desierto_G00_M32_Text_081BDEE3::
# 536 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I’m going to tag up with my\nsenior partner and win this time!$"

Naranja_Desierto_G00_M32_Text_081BDF26::
# 540 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Too strong!$"

Naranja_Desierto_G00_M32_Text_081BDF37::
# 544 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: I battled together with my\nsenior partner, but we lost...\pThat’s so discouraging...$"

Naranja_Desierto_G00_M32_Text_081BDF90::
# 548 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "MEG: Do you only have one POKéMON?\nWe can’t battle with you, then.\pWe want to have a 2-on-2 battle.$"

Naranja_Desierto_G00_M32_Text_081BDFF4::
# 552 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "The aroma of flowers has a magical\npower. It cleanses us body and soul.$"

Naranja_Desierto_G00_M32_Text_081BE03C::
# 556 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Oh, dear me.\nI seem to have lost.$"

Naranja_Desierto_G00_M32_Text_081BE05E::
# 560 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Flowers, POKéMON...\nI love whatever smells nice.\pStinky things...\nI’ll pass.$"

Naranja_Desierto_G00_M32_Text_081BE0AB::
# 564 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Were you drawn here by the sweet\naroma?$"

Naranja_Desierto_G00_M32_Text_081BE0D3::
# 568 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "The power of aroma...\nIt didn’t seem to do much.$"

Naranja_Desierto_G00_M32_Text_081BE104::
# 572 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "If you use a sweet aroma properly,\nPOKéMON will be attracted by it.$"

Naranja_Desierto_G00_M32_Text_081C1C67::
# 576 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Isla MANDARINA   is still a long ways\naway...$"

Naranja_Desierto_G00_M32_Text_081C1C95::
# 580 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "My first victory seems to be far\naway, too...$"

Naranja_Desierto_G00_M32_Text_081C1CC3::
# 584 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "My whole life has been about losing,\nbut I will never give up!$"

Naranja_Desierto_G00_M32_Text_081C1D02::
# 588 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’m still feeling good. I’ll keep on\nswimming to EVER GRANDE CITY.$"

Naranja_Desierto_G00_M32_Text_081C1D45::
# 592 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’ve yet to taste my first victory...$"

Naranja_Desierto_G00_M32_Text_081C1D6B::
# 596 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "I’ll eventually reach EVER GRANDE CITY\nwhere I can eventually win...$"

Naranja_Desierto_G00_M32_Text_086B8340::
# 600 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Tu medalla dice que eres grande.\p¡Mola que pase alguien \ntan buen{RIVAL} como tú!$"

Naranja_Desierto_G00_M32_Text_086B838D::
# 604 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¿Necesitas ayuda\npara despejar la entrada?$"

Naranja_Desierto_G00_M32_Text_086B83B8::
# 608 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Bien hecho MACHOP!$"

Naranja_Desierto_G00_M32_Text_086B83CC::
# 612 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "¡Ahora ya puedes!$"

Naranja_Desierto_G00_M32_Text_086BEF40::
# 616 "data/maps/Naranja_Desierto_G00_M32/scripts.pory"
	.string "Podrías cortar este árbol…\p…pero va a ser que no.$"
