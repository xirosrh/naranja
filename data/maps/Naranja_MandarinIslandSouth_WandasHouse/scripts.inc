Naranja_MandarinIslandSouth_WandasHouse_MapScripts::
	.byte 0


Naranja_MandarinIslandSouth_WandasHouse_EventScript_MarillDoll::
# 8 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	lock
# 9 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
# 10 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3B90
# 11 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_08153F68::
# 16 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MandarinIslandSouth_WandasHouse_Movement_086B3B8C
# 17 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay 0x45
# 18 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3BB2, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	nop
# 20 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Man3::
# 25 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	lock
# 26 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	faceplayer
# 27 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_VICTORY_ROAD_EVENT_COMPLETE_007E
# 28 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_08153FA5
# 29 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_CHARICIFIC_VALLEY_EVENT_COMPLETE_04BD
# 30 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_08153F9B
# 31 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_0817859A, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_08153F9B::
# 37 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_08178683, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_08153FA5::
# 43 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_081786B5, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Trigger_4::
# 49 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_G06_M05_AQUA_MEMBER_F
# 50 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B4920
# 51 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
# 52 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3FFD
# 53 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B383C::
# 58 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_182, Naranja_MandarinIslandSouth_WandasHouse_Text_086B3C33, Naranja_MandarinIslandSouth_WandasHouse_Text_081BCB2E
# 59 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_081BCB40, MSGBOX_AUTOCLOSE
# 60 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay 0x80
# 61 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	setflag FLAG_NARANJA_DEFEATED_BUTCH_AND_CASSIDY
# 62 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	clearflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
# 63 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_0817886A, MSGBOX_NPC
# 64 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Woman2::
# 69 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_BATTERY_INSTALLED
# 70 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if LESS_THAN, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3902
# 71 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_G06_M05_MARILL_DOLL
# 72 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3932
# 73 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_BUTCH_AND_CASSIDY
# 74 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3922
# 75 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
# 76 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3912
# 77 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B38C2
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B38C2::
# 82 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	lockall
# 83 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3972, MSGBOX_YESNO
# 84 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 85 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B38E4
# 86 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 87 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_1F_EventScript_Sub_086B38F4
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B38E4::
# 92 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	lockall
# 93 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B39E2, MSGBOX_AUTOCLOSE
# 94 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3902::
# 99 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3A22, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3912::
# 104 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3A72, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3922::
# 109 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3AA2, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3932::
# 114 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	lockall
# 115 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3AD7, MSGBOX_YESNO
# 116 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 117 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3954
# 118 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 119 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_1F_EventScript_Sub_086B38F4
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3954::
# 124 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	clearflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_BATTERY_INSTALLED
# 125 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	setorcopyvar VAR_0x8000, 0x119
# 126 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 127 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	callstd 0
# 128 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B3B35, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3B90::
# 133 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_BUTCH_AND_CASSIDY
# 134 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto_if EQUAL, Naranja_ColdPath_EventScript_Sub_086B7E7E
# 135 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	fadescreen 2
# 136 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	fadescreen 0
# 137 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay 0x10
# 138 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	fadescreen 2
# 139 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	fadescreen 0
# 140 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay 0x25
# 141 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	fadescreen 2
# 142 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	fadescreen 0
# 143 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_08153F68
	return


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B3FFD::
# 147 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MandarinIslandSouth_WandasHouse_Movement_086B403C
# 148 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B4040
	return


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B4040::
# 152 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay 0x30
# 153 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_WANDAS_HOUSE_AQUA_MEMBER_F, Naranja_MandarinIslandSouth_WandasHouse_Movement_086B402B
# 154 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_WANDAS_HOUSE_AQUA_MEMBER_M, Naranja_MandarinIslandSouth_WandasHouse_Movement_086B4034
# 155 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_G06_M05_AQUA_MEMBER_F
# 156 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	goto Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B383C
	return


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Trigger_5::
# 160 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ISLAND_SOUTH_G06_M05_AQUA_MEMBER_F
# 161 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B4920
# 162 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
# 163 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B4040
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B4920::
# 168 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTEA_GENERATOR_SWITCHED_OFF
# 169 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call_if EQUAL, Naranja_MandarinIslandSouth_WandasHouse_EventScript_Sub_086B383C
# 170 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_WandasHouse_EventScript_Cassidy::
# 175 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	msgbox Naranja_MandarinIslandSouth_WandasHouse_Text_086B4940, MSGBOX_DEFAULT
# 176 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	call 0x086B3B80
	end


# 180 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
Naranja_MandarinIslandSouth_WandasHouse_Movement_086B3B8C:
# 181 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_left
	step_end

# 184 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
Naranja_MandarinIslandSouth_WandasHouse_Movement_086B402B:
# 185 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 186 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay_16
# 187 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	jump_2_left
# 188 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 189 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 190 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 191 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 192 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	face_right
	step_end

# 195 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
Naranja_MandarinIslandSouth_WandasHouse_Movement_086B4034:
# 196 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 197 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	delay_16
# 198 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	jump_2_right
# 199 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 200 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_down
# 201 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	walk_slow_left
# 202 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	face_down
	step_end

# 205 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
Naranja_MandarinIslandSouth_WandasHouse_Movement_086B403C:
# 206 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	acro_wheelie_move_right
# 207 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	face_up
	step_end

Naranja_MandarinIslandSouth_WandasHouse_Text_0817859A::
# 210 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "こ\n$"

Naranja_MandarinIslandSouth_WandasHouse_Text_08178683::
# 214 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "WALLY’s gone away...\nHe slipped off on his own...$"

Naranja_MandarinIslandSouth_WandasHouse_Text_081786B5::
# 218 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "UNCLE: Is that right?\nWALLY’s gone away that far all by\lhimself...\pWell, I have to give him credit - he is\nmy little brother’s son.$"

Naranja_MandarinIslandSouth_WandasHouse_Text_0817886A::
# 222 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "{COLOR 0x04}Drowzee ha conseguido escapar del TR.\p ¡Vamos!\n¡ Directo a por él !$"

Naranja_MandarinIslandSouth_WandasHouse_Text_081BCB2E::
# 226 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Ouch, ouch, ouch!$"

Naranja_MandarinIslandSouth_WandasHouse_Text_081BCB40::
# 230 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Butch & Cassidy: {COLOR 0x02}¡El team Rocket \nte derrotará donde quiera que vayas!$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3972::
# 234 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Humm…\nEsta bater a parece que da energ a\la todo el edificio.\pQuizá apagándola\ncorte la corriente del edificio.$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B39E2::
# 238 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Apagaste el generador.$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3A22::
# 242 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Un agujero en la pared.\p{COLOR 0x04}Aquí antes había una batería…\p…que recuerdos.$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3A72::
# 246 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Ya la habías apagado antes.\n¿Recuerdas?$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3AA2::
# 250 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Algo la ha dejado bloqueada\ny no se puede apagar.$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3AD7::
# 254 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Menos mal que ya pasó todo.\pA lo mejor más tarde necesitas la batería.\n¿Quieres llevártela?$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3B35::
# 258 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Zaka!\p¡Ya tienes batería!$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3BB2::
# 262 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "{COLOR 0x04}Arghh\pParece que pikachu pierde el control\ncuando me voy hacia el amplificador.\pDebo pararlo.\pCreo que estoy perdiendo salud.$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B3C33::
# 266 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "Butch y Cassidy:\n{COLOR 0x0D}¿Pretendes frustrar\lnuestros planes renacuaj{RIVAL}?\p{COLOR 0x06}Con este amplificador atraemos a\ntodos los pokemon de la ciudad, gracias\la la mente de nuestro DROWZEE.\p{COLOR 0x0D}Y tu PIKACHU ya ha empezado\na rebelarse.\p{COLOR 0x04}{PLAYER}:¿De veras?\nHe apagado la bater a del amplificador.\l¡No podéis hacerme nada!\p{COLOR 0x0D}Cassidy: Eso es lo que tú crees\n{COLOR 0x06}Butch: ¡Vamos!\l ¡Preparate para luchar!$"

Naranja_MandarinIslandSouth_WandasHouse_Text_086B4940::
# 270 "data/maps/Naranja_MandarinIslandSouth_WandasHouse/scripts.pory"
	.string "{COLOR 0x04}¡El Team Rocket\ndespega de nuevo!\n$"
