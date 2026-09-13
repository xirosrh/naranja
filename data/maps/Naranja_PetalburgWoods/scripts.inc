Naranja_PetalburgWoods_MapScripts::
# 5 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PetalburgWoods_OnTransition
	.byte 0


Naranja_PetalburgWoods_EventScript_BugCatcher::
# 9 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VALLEDELASFLORES_617, Naranja_PetalburgWoods_Text_081BD0AF, Naranja_PetalburgWoods_Text_081BD0D7
# 10 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_081BD0F4, MSGBOX_AUTOCLOSE
	end


Naranja_PetalburgWoods_OnTransition::
# 15 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_PetalburgWoods_EventScript_Trigger_2::
# 20 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	lock
# 21 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PetalburgWoods_Movement_086B4690
# 22 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay 0x10
# 23 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	call Naranja_InsideOfTruck_EventScript_Trigger_3
# 24 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	release
	end


Naranja_PetalburgWoods_EventScript_Boy3::
# 29 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_0819542B, MSGBOX_NPC
	end


Naranja_PetalburgWoods_EventScript_Lass::
# 34 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	lock
# 35 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	checkflag FLAG_NARANJA_VALLEDELASFLORES_EVENT_COMPLETE_0129
# 37 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	goto_if EQUAL, Naranja_PetalburgWoods_EventScript_Sub_0815CF0B
# 38 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_0819549E, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCD
# 40 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 41 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	callstd 0
# 42 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 44 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setflag FLAG_NARANJA_VALLEDELASFLORES_EVENT_COMPLETE_0129
# 45 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	release
	end


Naranja_PetalburgWoods_EventScript_Sub_0815CF0B::
# 50 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_08195503, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	release
	end


Naranja_PetalburgWoods_EventScript_ItemBall_2::
# 56 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4B
# 57 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 58 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	callstd 1
	end


Naranja_PetalburgWoods_EventScript_ItemBall::
# 63 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 64 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 65 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	callstd 1
	end


Naranja_PetalburgWoods_EventScript_ItemBall_3::
# 70 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8000, 0x22
# 71 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 72 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	callstd 1
	end


Naranja_PetalburgWoods_EventScript_ItemBall_4::
# 77 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12
# 78 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 79 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	callstd 1
	end


Naranja_PetalburgWoods_EventScript_FireCushion::
# 84 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	waitse
# 85 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	playmoncry SPECIES_VILEPLUME, 0
# 86 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	call Naranja_PetalburgWoods_EventScript_Sub_086B51C0
# 87 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	release
	end


Naranja_PetalburgWoods_EventScript_Sub_086B51C0::
# 92 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	lock
# 93 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	checkitem ITEM_PARALYZE_HEAL, 0
# 94 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 95 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	goto_if EQUAL, Naranja_PetalburgWoods_EventScript_Sub_086B5200
# 96 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	nop
# 97 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_081956A6, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	applymovement LOCALID_NARANJA_PETALBURG_WOODS_FIRE_CUSHION, Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Movement_086B336A
# 99 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay 5
# 100 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_081956E9, MSGBOX_AUTOCLOSE
# 101 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	nop
# 102 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	fadescreen 6
# 103 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay 0x15
# 104 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	warp MAP_NARANJA_VALENCIA_TANGELO_ROUTE_STERNS_SHIPYARD_2F, 1, 0x26C, 0x3900
# 105 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	nop1
# 106 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	callstd 1
# 107 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	release
	end


Naranja_PetalburgWoods_EventScript_Sub_086B5200::
# 112 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	msgbox Naranja_PetalburgWoods_Text_086B5223, MSGBOX_AUTOCLOSE
# 113 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	nop
# 114 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	removeitem ITEM_PARALYZE_HEAL, 1
# 115 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	nop
# 116 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setwildbattle SPECIES_VILEPLUME, 0x10, 0
# 117 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	special BattleSetup_StartLatiBattle
# 118 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay 0x80
# 119 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_NARANJA_PETALBURG_WOODS_FIRE_CUSHION
# 120 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	removeobject LOCALID_NARANJA_PETALBURG_WOODS_FIRE_CUSHION
	end


Naranja_PetalburgWoods_EventScript_PushableBoulder::
# 125 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_PETALBURG_WOODS_PUSHABLE_BOULDER
# 126 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	call_if EQUAL, Naranja_ColdPath_EventScript_Sub_086B7E7E
# 127 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_NARANJA_PETALBURG_WOODS_PUSHABLE_BOULDER
# 128 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	setwildbattle SPECIES_BULBASAUR, 5, 0
# 129 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	special BattleSetup_StartLatiBattle
# 130 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay 0x80
# 131 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	release
	end


# 135 "data/maps/Naranja_PetalburgWoods/scripts.pory"
Naranja_PetalburgWoods_Movement_086B4690:
# 136 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay_16
# 137 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	walk_slow_left
# 138 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay_16
# 139 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	face_up
# 140 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	delay_16
	step_end

Naranja_PetalburgWoods_Text_0819542B::
# 143 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "Jueves: Unos villanos me robaron\nmi SuperBall.\pPor cierto, ¿Te gusta mi nombre?\nMe lo puso mi padre no sé por que.$"

Naranja_PetalburgWoods_Text_0819549E::
# 147 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "Oh, neat!\nThat’s the BADGE from RUSTBORO GYM!\pYou must be a TRAINER.\nYou should try using this item.$"

Naranja_PetalburgWoods_Text_08195503::
# 151 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "It’s a MIRACLE SEED.\nIf a POKéMON holds that item, its\lGRASS-type moves become stronger.\pBesides MIRACLE SEED, I think there are\nother convenient items for POKéMON\lto hold.$"

Naranja_PetalburgWoods_Text_081956A6::
# 155 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "Vileplume: {COLOR 0x02}Vaaaaa\p{COLOR 0x04}¡Preparate para pelear Vileplume!\p{COLOR 0x01}Puuff$"

Naranja_PetalburgWoods_Text_081956E9::
# 159 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "{COLOR 0x04}Humm… ¡que bien huele!\nEstá echando su aroma.\p…\p¡Oh no! ¡¡Son esporas!!\p…\p¡ Que sueño…\pZzz\p{COLOR 0x01}Vileplume: {COLOR 0x02}Vaaiiil$"

Naranja_PetalburgWoods_Text_081BD0AF::
# 163 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "Jaja…\nMis bichos son fuertes.\l¡ Lucha !$"

Naranja_PetalburgWoods_Text_081BD0D7::
# 167 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "¡Vaya!\nMis pequeños insectos$"

Naranja_PetalburgWoods_Text_081BD0F4::
# 171 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "Los bichos crecen rápidamente.\nY a mí no me sobra el tiempo.$"

Naranja_PetalburgWoods_Text_086B5223::
# 175 "data/maps/Naranja_PetalburgWoods/scripts.pory"
	.string "Vileplume: {COLOR 0x02}¡Vahh! Vaaaa…\p{COLOR 0x04}¡Prepárate para luchar Vileplume!\p{COLOR 0x01}Vileplume: {COLOR 0x02}¿Vahh…\p{COLOR 0x04}…pero esta vez ya estoy preparado.\n¡Tengo protección antiesporas!\pVeamos esta vez   \nquien sale de aquì dormido.$"
