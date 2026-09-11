Naranja_Route108_G00_M23_MapScripts::
	.byte 0


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId2::
# 8 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, TRAINER_NARANJA_ROUTE108_156, LOCALID_NONE, Naranja_Route108_G00_M23_Text_086B88F0, Naranja_Route108_G00_M23_Text_081B97EF, Naranja_Route108_G00_M23_Text_086B8AA9, Naranja_Route108_G00_M23_EventScript_AfterBattle_086B8820
	end


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId3::
# 13 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE108_157, LOCALID_NONE, Naranja_Route108_G00_M23_Text_081B9864, Naranja_Route108_G00_M23_Text_081B989F
# 14 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	loadword 0, Naranja_Route108_G00_M23_Text_081B98BC
# 15 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	callstd 6
	end


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 20 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE108_447, LOCALID_NONE, Naranja_Route108_G00_M23_Text_081B9986, Naranja_Route108_G00_M23_Text_081B99BB
# 21 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	loadword 0, Naranja_Route108_G00_M23_Text_081B99E9
# 22 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	callstd 6
	end


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 27 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE108_214, LOCALID_NONE, Naranja_Route108_G00_M23_Text_081BC1C8, Naranja_Route108_G00_M23_Text_081BC23F
# 28 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	loadword 0, Naranja_Route108_G00_M23_Text_081BC24F
# 29 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	callstd 6
	end


Naranja_Route108_G00_M23_EventScript_AfterBattle_086B8820::
# 34 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	setflag FLAG_HIDE_CUEVA_KABUTO_G24_M07_KECLEON_1
# 35 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x30
# 36 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement LOCALID_ROUTE108_G00_M23_SWIMMER_F, Naranja_Route108_G00_M23_Movement_086B88C0
# 37 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 6, Naranja_Route108_G00_M23_Movement_086B88C0
# 38 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 7, Naranja_Route108_G00_M23_Movement_086B88C0
# 39 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	message Naranja_Route108_G00_M23_Text_086B8AC9
# 40 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x40
# 41 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	waitmessage
# 42 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x80
# 43 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject LOCALID_ROUTE108_G00_M23_SWIMMER_F
# 44 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 6
# 45 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 7
# 46 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x10
# 47 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 9, Naranja_Route108_G00_M23_Movement_086B88D5
# 48 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 5, Naranja_Route108_G00_M23_Movement_086B88D5
# 49 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route108_G00_M23_Movement_086B88EB
# 50 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	loadword 0, Naranja_Route108_G00_M23_Text_081B97C3
# 51 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	closemessage
# 53 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	call Naranja_CaveOfOrigin_G24_M38_EventScript_Sub_081A04D3
# 54 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x40
# 55 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	nop
# 56 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	message Naranja_Route108_G00_M23_Text_086B8AEC
# 57 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	waitmessage
# 58 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	fadescreen 1
# 59 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 9
# 60 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 5
# 61 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x10
# 62 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	fadescreen 0
# 63 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	releaseall
	end


# 67 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
Naranja_Route108_G00_M23_Movement_086B88C0:
# 68 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_down
# 69 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay_1
# 70 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_left
# 71 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay_1
# 72 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_up
# 73 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay_1
# 74 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_left
# 75 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_in_place_faster_left
# 76 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	lock_facing_direction
# 77 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 78 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 79 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 80 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 81 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 82 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 83 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 84 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 86 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	set_visible
	step_end

# 90 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
Naranja_Route108_G00_M23_Movement_086B88D5:
# 91 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	set_visible
# 92 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	emote_exclamation_mark
	step_end

# 95 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
Naranja_Route108_G00_M23_Movement_086B88EB:
# 96 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_up
	step_end

Naranja_Route108_G00_M23_Text_081B97C3::
# 99 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¡El reportaje\nestá quedando espectacular!$"

Naranja_Route108_G00_M23_Text_081B97EF::
# 103 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¿Otra vez?   \n¿Qué hemos hecho para merecer esto?$"

Naranja_Route108_G00_M23_Text_081B9864::
# 107 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Ahoy, there! Are you going out to the\nABANDONED SHIP, too?$"

Naranja_Route108_G00_M23_Text_081B989F::
# 111 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "I’m sinking!\nGlub... Glub...$"

Naranja_Route108_G00_M23_Text_081B98BC::
# 115 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Some people even go inside that\nABANDONED SHIP.$"

Naranja_Route108_G00_M23_Text_081B9986::
# 119 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "I love the sea!\nI forget all my worries when I swim!$"

Naranja_Route108_G00_M23_Text_081B99BB::
# 123 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "When I lose a battle, I get all\nstressed out!$"

Naranja_Route108_G00_M23_Text_081B99E9::
# 127 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Work off your stress by swimming!\nIt’s so healthy!$"

Naranja_Route108_G00_M23_Text_081BC1C8::
# 131 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "カ\nÉ \nエÑこここここここオíÑÒ\nœ\nn fish, roast\nmarshmallows, and tell spooky stories!\pBut the best of all are the POKéMON\nbattles!$"

Naranja_Route108_G00_M23_Text_081BC23F::
# 135 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Way too strong!$"

Naranja_Route108_G00_M23_Text_081BC24F::
# 139 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "I think it’s great that I can go\ncamping with my POKéMON.$"

Naranja_Route108_G00_M23_Text_086B88F0::
# 143 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "JESSIE: {COLOR 0x07}Jaja,\n¿Quieres problemas?\l{COLOR 0x01}JAMES:{COLOR 0x07} ¡Pues escucha nuestro lema!\p{COLOR 0x07}Para proteger al mundo\nde la devastación.\pPara unir a todos los pueblos\nen una sola nación.\pPara derrotar a los enemigos\nde la verdad y el amor.\pPara extender nuestro poder\nmás allá del espacio exterior.\p¡Jessie!\p¡James!\pEl team Rocket despega\na la velocidad de la luz.\pRendìos ahora\no preparaos para luchar.\p{COLOR 0x09}Reportera:{COLOR 0x01}¡Espectacular!\n¡Bravo! ¡Bravìsimo!$"

Naranja_Route108_G00_M23_Text_086B8AA9::
# 147 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¡Necesitas dos POKéMON mocos{RIVAL}!$"

Naranja_Route108_G00_M23_Text_086B8AC9::
# 151 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¡El TEAM ROCKET despega de nuevoo…$"

Naranja_Route108_G00_M23_Text_086B8AEC::
# 155 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¿Que…\p¿Qué fue eso?\pEsto se cae a pedazos.\p¡Trae la CUERDA HUÍDA, cari!$"
