Naranja_Valledelasflores_G24_M11_MapScripts::
# 5 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Valledelasflores_G24_M11_OnTransition
	.byte 0


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId9::
# 9 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VALLEDELASFLORES_617, LOCALID_NONE, Naranja_Valledelasflores_G24_M11_Text_081BD0AF, Naranja_Valledelasflores_G24_M11_Text_081BD0D7
# 10 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_081BD0F4
# 11 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 6
	end


Naranja_Valledelasflores_G24_M11_OnTransition::
# 16 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_Valledelasflores_G24_M11_EventScript_Trigger_2::
# 21 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	lock
# 22 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Valledelasflores_G24_M11_Movement_086B4690
# 23 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay 0x10
# 24 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	call Naranja_InsideOfTruck_G25_M40_EventScript_Trigger_3
# 25 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	release
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId11::
# 30 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_0819542B
# 31 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 2
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_LASS_LocalId13::
# 36 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	lock
# 37 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	faceplayer
# 38 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	checkflag FLAG_NARANJA_VALLEDELASFLORES_EVENT_COMPLETE_0129
# 39 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	goto_if EQUAL, Naranja_Valledelasflores_G24_M11_EventScript_Sub_0815CF0B
# 40 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_0819549E
# 41 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 4
# 42 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCD
# 43 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 44 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 0
# 45 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 46 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 47 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setflag FLAG_NARANJA_VALLEDELASFLORES_EVENT_COMPLETE_0129
# 48 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	release
	end


Naranja_Valledelasflores_G24_M11_EventScript_Sub_0815CF0B::
# 53 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_08195503
# 54 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	release
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 60 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4B
# 61 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 62 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 1
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 67 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 68 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 69 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 1
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 74 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 0x22
# 75 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 76 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 1
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId12::
# 81 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12
# 82 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 83 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 1
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_FIRE_CUSHION_LocalId8::
# 88 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	waitse
# 89 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	playmoncry SPECIES_VILEPLUME, 0
# 90 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	call Naranja_Valledelasflores_G24_M11_EventScript_Sub_086B51C0
# 91 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	release
	end


Naranja_Valledelasflores_G24_M11_EventScript_Sub_086B51C0::
# 96 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	lock
# 97 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	checkitem ITEM_PARALYZE_HEAL, 0
# 98 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 99 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	goto_if EQUAL, Naranja_Valledelasflores_G24_M11_EventScript_Sub_086B5200
# 100 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	nop
# 101 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_081956A6
# 102 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 4
# 103 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	applymovement LOCALID_VALLEDELASFLORES_G24_M11_FIRE_CUSHION, Naranja_ValnTang_G09_M01_Movement_086B336A
# 104 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay 5
# 105 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_081956E9
# 106 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 6
# 107 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	nop
# 108 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	fadescreen 6
# 109 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay 0x15
# 110 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	warp MAP_NARANJA_VALN_TANG_G09_M01, 1, 0x26C, 0x3900
# 111 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	nop1
# 112 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 1
# 113 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	release
	end


Naranja_Valledelasflores_G24_M11_EventScript_Sub_086B5200::
# 118 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	loadword 0, Naranja_Valledelasflores_G24_M11_Text_086B5223
# 119 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	callstd 6
# 120 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	nop
# 121 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	removeitem ITEM_PARALYZE_HEAL, 1
# 122 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	nop
# 123 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setwildbattle SPECIES_VILEPLUME, 0x10, 0
# 124 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	special BattleSetup_StartLatiBattle
# 125 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay 0x80
# 126 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setflag FLAG_HIDE_VALLEDELASFLORES_G24_M11_FIRE_CUSHION
# 127 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	removeobject LOCALID_VALLEDELASFLORES_G24_M11_FIRE_CUSHION
	end


Naranja_Valledelasflores_G24_M11_EventScript_OBJ_EVENT_GFX_PUSHABLE_BOULDER_LocalId1::
# 132 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	checkflag FLAG_HIDE_VALLEDELASFLORES_G24_M11_PUSHABLE_BOULDER
# 133 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 134 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setflag FLAG_HIDE_VALLEDELASFLORES_G24_M11_PUSHABLE_BOULDER
# 135 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	setwildbattle SPECIES_BULBASAUR, 5, 0
# 136 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	special BattleSetup_StartLatiBattle
# 137 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay 0x80
# 138 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	release
	end


# 142 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
Naranja_Valledelasflores_G24_M11_Movement_086B4690:
# 143 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay_16
# 144 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	walk_slow_left
# 145 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay_16
# 146 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	face_up
# 147 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	delay_16
	step_end

Naranja_Valledelasflores_G24_M11_Text_0819542B::
# 150 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "Jueves: Unos villanos me robaron\nmi SuperBall.\pPor cierto, ¿Te gusta mi nombre?\nMe lo puso mi padre no sé por que.$"

Naranja_Valledelasflores_G24_M11_Text_0819549E::
# 154 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "Oh, neat!\nThat’s the BADGE from RUSTBORO GYM!\pYou must be a TRAINER.\nYou should try using this item.$"

Naranja_Valledelasflores_G24_M11_Text_08195503::
# 158 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "It’s a MIRACLE SEED.\nIf a POKéMON holds that item, its\lGRASS-type moves become stronger.\pBesides MIRACLE SEED, I think there are\nother convenient items for POKéMON\lto hold.$"

Naranja_Valledelasflores_G24_M11_Text_081956A6::
# 162 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "Vileplume: {COLOR 0x02}Vaaaaa\p{COLOR 0x04}¡Preparate para pelear Vileplume!\p{COLOR 0x01}Puuff$"

Naranja_Valledelasflores_G24_M11_Text_081956E9::
# 166 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "{COLOR 0x04}Humm… ¡que bien huele!\nEstá echando su aroma.\p…\p¡Oh no! ¡¡Son esporas!!\p…\p¡ Que sueño…\pZzz\p{COLOR 0x01}Vileplume: {COLOR 0x02}Vaaiiil$"

Naranja_Valledelasflores_G24_M11_Text_081BD0AF::
# 170 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "Jaja…\nMis bichos son fuertes.\l¡ Lucha !$"

Naranja_Valledelasflores_G24_M11_Text_081BD0D7::
# 174 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "¡Vaya!\nMis pequeños insectos$"

Naranja_Valledelasflores_G24_M11_Text_081BD0F4::
# 178 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "Los bichos crecen rápidamente.\nY a mí no me sobra el tiempo.$"

Naranja_Valledelasflores_G24_M11_Text_086B5223::
# 182 "data/maps/Naranja_Valledelasflores_G24_M11/scripts.pory"
	.string "Vileplume: {COLOR 0x02}¡Vahh! Vaaaa…\p{COLOR 0x04}¡Prepárate para luchar Vileplume!\p{COLOR 0x01}Vileplume: {COLOR 0x02}¿Vahh…\p{COLOR 0x04}…pero esta vez ya estoy preparado.\n¡Tengo protección antiesporas!\pVeamos esta vez   \nquien sale de aquì dormido.$"
