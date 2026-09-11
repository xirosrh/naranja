Naranja_IslaMandarina_G06_M05_MapScripts::
	.byte 0


Naranja_IslaMandarina_G06_M05_EventScript_OBJ_EVENT_GFX_MARILL_DOLL_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
# 10 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3B90
# 11 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_08153F68::
# 16 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMandarina_G06_M05_Movement_086B3B8C
# 17 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay 0x45
# 18 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3BB2
# 19 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	nop
# 21 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId3::
# 26 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	lock
# 27 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_VICTORY_ROAD_EVENT_COMPLETE_007E
# 29 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_08153FA5
# 30 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_VALLE_CHARIZARD_EVENT_COMPLETE_04BD
# 31 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_08153F9B
# 32 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_0817859A
# 33 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_08153F9B::
# 39 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_08178683
# 40 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_08153FA5::
# 46 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_081786B5
# 47 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_Trigger_4::
# 53 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MANDARINA_G06_M05_AQUA_MEMBER_F
# 54 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B4920
# 55 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
# 56 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3FFD
# 57 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B383C::
# 62 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MANDARINA_182, LOCALID_NONE, Naranja_IslaMandarina_G06_M05_Text_086B3C33, Naranja_IslaMandarina_G06_M05_Text_081BCB2E
# 63 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_081BCB40
# 64 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 6
# 65 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay 0x80
# 66 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2123
# 67 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
# 68 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_0817886A
# 69 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 2
# 70 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId4::
# 75 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2121
# 76 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3902
# 77 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MANDARINA_G06_M05_MARILL_DOLL
# 78 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3932
# 79 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2123
# 80 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3922
# 81 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
# 82 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3912
# 83 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B38C2
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B38C2::
# 88 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	lockall
# 89 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3972
# 90 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 5
# 91 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 92 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B38E4
# 93 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 94 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M07_EventScript_Sub_086B38F4
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B38E4::
# 99 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	lockall
# 100 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B39E2
# 101 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 6
# 102 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3902::
# 107 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3A22
# 108 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 6
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3912::
# 113 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3A72
# 114 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 6
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3922::
# 119 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3AA2
# 120 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 6
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3932::
# 125 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	lockall
# 126 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3AD7
# 127 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 5
# 128 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 129 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3954
# 130 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 131 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M07_EventScript_Sub_086B38F4
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3954::
# 136 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2121
# 137 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x119
# 138 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 139 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 0
# 140 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B3B35
# 141 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 6
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3B90::
# 146 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2123
# 147 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 148 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	fadescreen 2
# 149 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	fadescreen 0
# 150 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay 0x10
# 151 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	fadescreen 2
# 152 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	fadescreen 0
# 153 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay 0x25
# 154 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	fadescreen 2
# 155 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	fadescreen 0
# 156 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto Naranja_IslaMandarina_G06_M05_EventScript_Sub_08153F68
	return


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B3FFD::
# 160 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMandarina_G06_M05_Movement_086B403C
# 161 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B4040
	return


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B4040::
# 165 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay 0x30
# 166 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G06_M05_AQUA_MEMBER_F, Naranja_IslaMandarina_G06_M05_Movement_086B402B
# 167 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G06_M05_AQUA_MEMBER_M, Naranja_IslaMandarina_G06_M05_Movement_086B4034
# 168 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARINA_G06_M05_AQUA_MEMBER_F
# 169 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	goto Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B383C
	return


Naranja_IslaMandarina_G06_M05_EventScript_Trigger_5::
# 173 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MANDARINA_G06_M05_AQUA_MEMBER_F
# 174 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B4920
# 175 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
# 176 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B4040
	end


Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B4920::
# 181 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_2122
# 182 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G06_M05_EventScript_Sub_086B383C
# 183 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	release
	end


Naranja_IslaMandarina_G06_M05_EventScript_OBJ_EVENT_GFX_AQUA_MEMBER_F_LocalId2::
# 188 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M05_Text_086B4940
# 189 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	callstd 4
# 190 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	call 0x086B3B80
	end


# 194 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
Naranja_IslaMandarina_G06_M05_Movement_086B3B8C:
# 195 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_left
	step_end

# 198 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
Naranja_IslaMandarina_G06_M05_Movement_086B402B:
# 199 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 200 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay_16
# 201 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	jump_2_left
# 202 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 203 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 204 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 205 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 206 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	face_right
	step_end

# 209 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
Naranja_IslaMandarina_G06_M05_Movement_086B4034:
# 210 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 211 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	delay_16
# 212 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	jump_2_right
# 213 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 214 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_down
# 215 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	walk_slow_left
# 216 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	face_down
	step_end

# 219 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
Naranja_IslaMandarina_G06_M05_Movement_086B403C:
# 220 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	acro_wheelie_move_right
# 221 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	face_up
	step_end

Naranja_IslaMandarina_G06_M05_Text_0817859A::
# 224 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "こ\n$"

Naranja_IslaMandarina_G06_M05_Text_08178683::
# 228 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "WALLY’s gone away...\nHe slipped off on his own...$"

Naranja_IslaMandarina_G06_M05_Text_081786B5::
# 232 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "UNCLE: Is that right?\nWALLY’s gone away that far all by\lhimself...\pWell, I have to give him credit - he is\nmy little brother’s son.$"

Naranja_IslaMandarina_G06_M05_Text_0817886A::
# 236 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "{COLOR 0x04}Drowzee ha conseguido escapar del TR.\p ¡Vamos!\n¡ Directo a por él !$"

Naranja_IslaMandarina_G06_M05_Text_081BCB2E::
# 240 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Ouch, ouch, ouch!$"

Naranja_IslaMandarina_G06_M05_Text_081BCB40::
# 244 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Butch & Cassidy: {COLOR 0x02}¡El team Rocket \nte derrotará donde quiera que vayas!$"

Naranja_IslaMandarina_G06_M05_Text_086B3972::
# 248 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Humm…\nEsta bater a parece que da energ a\la todo el edificio.\pQuizá apagándola\ncorte la corriente del edificio.$"

Naranja_IslaMandarina_G06_M05_Text_086B39E2::
# 252 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Apagaste el generador.$"

Naranja_IslaMandarina_G06_M05_Text_086B3A22::
# 256 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Un agujero en la pared.\p{COLOR 0x04}Aquí antes había una batería…\p…que recuerdos.$"

Naranja_IslaMandarina_G06_M05_Text_086B3A72::
# 260 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Ya la habías apagado antes.\n¿Recuerdas?$"

Naranja_IslaMandarina_G06_M05_Text_086B3AA2::
# 264 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Algo la ha dejado bloqueada\ny no se puede apagar.$"

Naranja_IslaMandarina_G06_M05_Text_086B3AD7::
# 268 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Menos mal que ya pasó todo.\pA lo mejor más tarde necesitas la batería.\n¿Quieres llevártela?$"

Naranja_IslaMandarina_G06_M05_Text_086B3B35::
# 272 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Zaka!\p¡Ya tienes batería!$"

Naranja_IslaMandarina_G06_M05_Text_086B3BB2::
# 276 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "{COLOR 0x04}Arghh\pParece que pikachu pierde el control\ncuando me voy hacia el amplificador.\pDebo pararlo.\pCreo que estoy perdiendo salud.$"

Naranja_IslaMandarina_G06_M05_Text_086B3C33::
# 280 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "Butch y Cassidy:\n{COLOR 0x0D}¿Pretendes frustrar\lnuestros planes renacuaj{RIVAL}?\p{COLOR 0x06}Con este amplificador atraemos a\ntodos los pokemon de la ciudad, gracias\la la mente de nuestro DROWZEE.\p{COLOR 0x0D}Y tu PIKACHU ya ha empezado\na rebelarse.\p{COLOR 0x04}{PLAYER}:¿De veras?\nHe apagado la bater a del amplificador.\l¡No podéis hacerme nada!\p{COLOR 0x0D}Cassidy: Eso es lo que tú crees\n{COLOR 0x06}Butch: ¡Vamos!\l ¡Preparate para luchar!$"

Naranja_IslaMandarina_G06_M05_Text_086B4940::
# 284 "data/maps/Naranja_IslaMandarina_G06_M05/scripts.pory"
	.string "{COLOR 0x04}¡El Team Rocket\ndespega de nuevo!\n$"
