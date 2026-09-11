Naranja_IslaMandarina_G00_M14_MapScripts::
# 5 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMandarina_G00_M14_OnTransition
	.byte 0


Naranja_IslaMandarina_G00_M14_OnTransition::
# 9 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_0814
# 10 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 0
# 11 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARINA_G06_M00_REPORTER_M
	end


Naranja_IslaMandarina_G00_M14_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2::
# 16 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	lock
# 17 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	faceplayer
# 18 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 19 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	call_if EQUAL, Naranja_IslaMandarina_G00_M14_EventScript_Sub_086B6560
# 20 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMandarina_G00_M14_Movement_08645ED1
# 21 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CBCE, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


Naranja_IslaMandarina_G00_M14_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId1::
# 27 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CC28, MSGBOX_NPC
	end


Naranja_IslaMandarina_G00_M14_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId4::
# 32 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CCD0, MSGBOX_NPC
	end


Naranja_IslaMandarina_G00_M14_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId3::
# 37 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	lock
# 38 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	faceplayer
# 39 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARINA_EVENT_COMPLETE_00C7
# 40 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G00_M14_EventScript_Sub_0814E8C0
# 41 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CD4D, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sub_0814E8C0::
# 47 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CE30, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sign_2::
# 53 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CEC0, MSGBOX_SIGN
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sign_4::
# 58 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CF0D, MSGBOX_SIGN
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sign_7::
# 63 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CF28, MSGBOX_SIGN
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sign_6::
# 68 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CF6D, MSGBOX_SIGN
	end


Naranja_IslaMandarina_G00_M14_EventScript_Trigger_1::
# 73 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MANDARINA_G00_M14_LITTLE_GIRL_1
# 74 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarina_G00_M14_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2
# 75 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


Naranja_IslaMandarina_G00_M14_EventScript_Trigger_2::
# 80 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 81 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarina_G00_M14_EventScript_Sub_086B5D6E
# 82 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sub_086B5D6E::
# 87 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	lock
# 88 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	faceplayer
# 89 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMandarina_G00_M14_Movement_08645ED1
# 90 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_086B5D82, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


Naranja_IslaMandarina_G00_M14_EventScript_Sub_086B6560::
# 96 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARINA_G00_M14_LITTLE_GIRL_1
# 97 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_0816CAEB, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	applymovement LOCALID_ISLA_MANDARINA_G00_M14_LITTLE_GIRL_1, Naranja_IslaMandarina_G00_M14_Movement_086B6580
# 99 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	delay 0xFF
# 100 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	nop
# 101 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	removeobject 512
# 102 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	nop
# 103 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	release
	end


# 107 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
Naranja_IslaMandarina_G00_M14_Movement_08645ED1:
# 108 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_slow_down
# 109 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	face_up
	step_end

# 112 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
Naranja_IslaMandarina_G00_M14_Movement_086B6580:
# 113 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 114 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 115 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 116 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 117 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 118 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 119 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 120 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 121 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_up
# 122 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	walk_right
# 123 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	set_invisible
	step_end

Naranja_IslaMandarina_G00_M14_Text_0816CAEB::
# 126 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "{COLOR 0x06}Marisa: {COLOR 0x01} Mi hermano Mateo\nesculpe en cristal…\p…pero no consigue inspirarse…\p…\p¡Oye!\p¿Conoces la leyenda del Onix de cristal?\p¡Ve a nuestra casa!\n¡Él te la explicará…\p…para que puedas partir a buscarlo!\p¡Asì se inspirará!$"

Naranja_IslaMandarina_G00_M14_Text_0816CBCE::
# 130 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "¡Vete!\pMI hermano está triste porque no     \npuede realizar su trabajo.\pNo molestes.$"

Naranja_IslaMandarina_G00_M14_Text_0816CC28::
# 134 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "A veces me siento vacìo \ny necesito marcarme objetivos,\lcosas que quiero alcanzar.\pPero se tornan en fracaso cuando\nme ciegan por completo\ly entiendo que son absurdas.$"

Naranja_IslaMandarina_G00_M14_Text_0816CCD0::
# 138 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "¿Sabes lo bueno de Isla MANDARINO…\p…y que ninguna otra isla tiene?\p¡Aquì puedes comprar la felicidad\na un precio módico!$"

Naranja_IslaMandarina_G00_M14_Text_0816CD4D::
# 142 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "Creo que ya no te puedes fiar de nadie…\p…es como…\p…como que no conocemos a nadie.\p¡Angustia!\pVeo todos los dìas las caras\nde quien trabaja conmigo\ly ni siquiera puedo saber que hace\lcuando no le veo…\p¿Tu crees posible conocer?$"

Naranja_IslaMandarina_G00_M14_Text_0816CE30::
# 146 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "Sin llegar a conocer realmente\nsomos ermitaños sociales\ltoda nuestra vida.\pY entonces no tenemos nada\nsi solo tenemos trastos metidos en casa.$"

Naranja_IslaMandarina_G00_M14_Text_0816CEC0::
# 150 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "{COLOR 0x0D}Isla MANDARINA NORTE\n{COLOR 0x00}“La Gran Naranja”$"

Naranja_IslaMandarina_G00_M14_Text_0816CF0D::
# 154 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "Saliendo Vd. de MANDARINA.$"

Naranja_IslaMandarina_G00_M14_Text_0816CF28::
# 158 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "CENTRO COMERCIAL MANDARINA FELIZ\p“Reservamos el derecho de admisión”$"

Naranja_IslaMandarina_G00_M14_Text_0816CF6D::
# 162 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "Proyecto Gran Factorìa\n“No se acerquen: ALTO VOLTAJE”$"

Naranja_IslaMandarina_G00_M14_Text_086B5D82::
# 166 "data/maps/Naranja_IslaMandarina_G00_M14/scripts.pory"
	.string "La puerta está cerrada.$"
