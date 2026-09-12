Naranja_Route108_G00_M23_MapScripts::
	.byte 0


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId2::
# 8 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE108_156, Naranja_Route108_G00_M23_Text_086B88F0, Naranja_Route108_G00_M23_Text_081B97EF, Naranja_Route108_G00_M23_Text_086B8AA9, Naranja_Route108_G00_M23_EventScript_AfterBattle_086B8820, NO_MUSIC
	end


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId3::
# 13 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE108_157, Naranja_Route108_G00_M23_Text_081B9864, Naranja_Route108_G00_M23_Text_081B989F
# 14 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	msgbox Naranja_Route108_G00_M23_Text_081B98BC, MSGBOX_AUTOCLOSE
	end


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 19 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE108_447, Naranja_Route108_G00_M23_Text_081B9986, Naranja_Route108_G00_M23_Text_081B99BB
# 20 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	msgbox Naranja_Route108_G00_M23_Text_081B99E9, MSGBOX_AUTOCLOSE
	end


Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 25 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE108_214, Naranja_Route108_G00_M23_Text_081BC1C8, Naranja_Route108_G00_M23_Text_081BC23F
# 26 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	msgbox Naranja_Route108_G00_M23_Text_081BC24F, MSGBOX_AUTOCLOSE
	end


Naranja_Route108_G00_M23_EventScript_AfterBattle_086B8820::
# 31 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	setflag FLAG_HIDE_CUEVA_KABUTO_G24_M07_KECLEON_1
# 32 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x30
# 33 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement LOCALID_ROUTE108_G00_M23_SWIMMER_F, Naranja_Route108_G00_M23_Movement_086B88C0
# 34 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 6, Naranja_Route108_G00_M23_Movement_086B88C0
# 35 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 7, Naranja_Route108_G00_M23_Movement_086B88C0
# 36 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	message Naranja_Route108_G00_M23_Text_086B8AC9
# 37 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x40
# 38 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	waitmessage
# 39 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x80
# 40 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject LOCALID_ROUTE108_G00_M23_SWIMMER_F
# 41 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 6
# 42 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 7
# 43 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x10
# 44 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 9, Naranja_Route108_G00_M23_Movement_086B88D5
# 45 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement 5, Naranja_Route108_G00_M23_Movement_086B88D5
# 46 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route108_G00_M23_Movement_086B88EB
# 47 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	msgbox Naranja_Route108_G00_M23_Text_081B97C3, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	closemessage
# 49 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	call Naranja_CaveOfOrigin_G24_M38_EventScript_Sub_081A04D3
# 50 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x40
# 51 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	nop
# 52 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	message Naranja_Route108_G00_M23_Text_086B8AEC
# 53 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	waitmessage
# 54 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	fadescreen 1
# 55 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 9
# 56 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	removeobject 5
# 57 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay 0x10
# 58 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	fadescreen 0
# 59 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	releaseall
	end


# 63 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
Naranja_Route108_G00_M23_Movement_086B88C0:
# 64 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_down
# 65 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay_1
# 66 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_left
# 67 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay_1
# 68 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_up
# 69 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	delay_1
# 70 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_left
# 71 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_in_place_faster_left
# 72 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	lock_facing_direction
# 73 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 74 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 75 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
# 76 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	walk_faster_up
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
	set_visible
	step_end

# 86 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
Naranja_Route108_G00_M23_Movement_086B88D5:
# 87 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	set_visible
# 88 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	emote_exclamation_mark
	step_end

# 91 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
Naranja_Route108_G00_M23_Movement_086B88EB:
# 92 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	face_up
	step_end

Naranja_Route108_G00_M23_Text_081B97C3::
# 95 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¡El reportaje\nestá quedando espectacular!$"

Naranja_Route108_G00_M23_Text_081B97EF::
# 99 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¿Otra vez?   \n¿Qué hemos hecho para merecer esto?$"

Naranja_Route108_G00_M23_Text_081B9864::
# 103 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Ahoy, there! Are you going out to the\nABANDONED SHIP, too?$"

Naranja_Route108_G00_M23_Text_081B989F::
# 107 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "I’m sinking!\nGlub... Glub...$"

Naranja_Route108_G00_M23_Text_081B98BC::
# 111 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Some people even go inside that\nABANDONED SHIP.$"

Naranja_Route108_G00_M23_Text_081B9986::
# 115 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "I love the sea!\nI forget all my worries when I swim!$"

Naranja_Route108_G00_M23_Text_081B99BB::
# 119 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "When I lose a battle, I get all\nstressed out!$"

Naranja_Route108_G00_M23_Text_081B99E9::
# 123 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Work off your stress by swimming!\nIt’s so healthy!$"

Naranja_Route108_G00_M23_Text_081BC1C8::
# 127 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "カ\nÉ \nエÑこここここここオíÑÒ\nœ\nn fish, roast\nmarshmallows, and tell spooky stories!\pBut the best of all are the POKéMON\nbattles!$"

Naranja_Route108_G00_M23_Text_081BC23F::
# 131 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "Way too strong!$"

Naranja_Route108_G00_M23_Text_081BC24F::
# 135 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "I think it’s great that I can go\ncamping with my POKéMON.$"

Naranja_Route108_G00_M23_Text_086B88F0::
# 139 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "JESSIE: {COLOR 0x07}Jaja,\n¿Quieres problemas?\l{COLOR 0x01}JAMES:{COLOR 0x07} ¡Pues escucha nuestro lema!\p{COLOR 0x07}Para proteger al mundo\nde la devastación.\pPara unir a todos los pueblos\nen una sola nación.\pPara derrotar a los enemigos\nde la verdad y el amor.\pPara extender nuestro poder\nmás allá del espacio exterior.\p¡Jessie!\p¡James!\pEl team Rocket despega\na la velocidad de la luz.\pRendìos ahora\no preparaos para luchar.\p{COLOR 0x09}Reportera:{COLOR 0x01}¡Espectacular!\n¡Bravo! ¡Bravìsimo!$"

Naranja_Route108_G00_M23_Text_086B8AA9::
# 143 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¡Necesitas dos POKéMON mocos{RIVAL}!$"

Naranja_Route108_G00_M23_Text_086B8AC9::
# 147 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¡El TEAM ROCKET despega de nuevoo…$"

Naranja_Route108_G00_M23_Text_086B8AEC::
# 151 "data/maps/Naranja_Route108_G00_M23/scripts.pory"
	.string "¿Que…\p¿Qué fue eso?\pEsto se cae a pedazos.\p¡Trae la CUERDA HUÍDA, cari!$"
