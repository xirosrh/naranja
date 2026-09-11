Naranja_IslaTrovita_G11_M02_MapScripts::
# 5 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTrovita_G11_M02_OnTransition
# 6 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaTrovita_G11_M02_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaTrovita_G11_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaTrovita_G11_M02_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_2, 0, Naranja_IslaTrovita_G11_M02_OnWarp_1
	.2byte 0

Naranja_IslaTrovita_G11_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_2, 0, Naranja_IslaTrovita_G11_M02_OnFrame_1
	.2byte 0


Naranja_IslaTrovita_G11_M02_OnTransition::
# 15 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_2, 0
# 16 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_0815772D
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_0815772D::
# 21 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G11_M02_TEALA, 3, 2
# 22 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G11_M02_TEALA, 9
	return


Naranja_IslaTrovita_G11_M02_OnWarp_1::
# 27 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	turnobject LOCALID_PLAYER, 4
	end


Naranja_IslaTrovita_G11_M02_OnFrame_1::
# 32 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	lockall
# 33 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_0818374C, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 35 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M02_TEALA, Naranja_IslaTrovita_G11_M02_Movement_08157815
# 36 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 37 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	delay 0x50
# 38 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M02_TEALA, Naranja_IslaTrovita_G11_M02_Movement_0815781E
# 39 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_08183903, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 42 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 43 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M02_TEALA, Naranja_IslaTrovita_G11_M02_Movement_08157803
# 44 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTrovita_G11_M02_Movement_08157827
# 45 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_0818320B, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	releaseall
# 49 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	nop
# 50 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	nop
# 51 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	nop
# 52 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto Naranja_IslaTrovita_G11_M02_EventScript_Sub_081577D8
	return


Naranja_IslaTrovita_G11_M02_EventScript_Sub_081577D8::
# 56 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_08183439, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_SWIMMER_M
# 58 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT
# 59 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3
# 60 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 61 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 62 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 1
# 63 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TROVITA_G00_M03_VARS
# 64 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_2, 1
# 65 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G11_M02_EventScript_OBJ_EVENT_GFX_MAGMA_MEMBER_F_LocalId1::
# 70 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	lock
# 71 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	faceplayer
# 72 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0110
# 73 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_0815789B
# 74 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 75 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_08157864
# 76 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_0818351E, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 78 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 79 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 80 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_08157864::
# 85 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_0818353E, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB6
# 87 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 88 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 0
# 89 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 90 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 91 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0110
# 92 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_081835B3, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 94 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 95 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 96 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_0815789B::
# 101 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_0818368D, MSGBOX_DEFAULT
# 102 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 103 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 104 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 105 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2::
# 110 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	lock
# 111 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	faceplayer
# 112 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_0100
# 113 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_081578C5
# 114 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_0818395C, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_081578C5::
# 120 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_081839A3, MSGBOX_DEFAULT
# 121 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sign_1::
# 126 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M02_Text_08183A04, MSGBOX_SIGN
	end


# 130 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_08157803:
# 131 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 132 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 133 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 134 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_down
# 135 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 136 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 137 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 138 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 139 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 140 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 141 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 142 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 143 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 144 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 147 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_08157815:
# 148 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 149 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 150 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 151 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_down
# 152 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 153 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 154 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 155 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
	step_end

# 158 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_0815781E:
# 159 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 160 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 161 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 162 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 163 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_up
# 164 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 165 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 166 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
	step_end

# 169 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_08157827:
# 170 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 171 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 172 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 173 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 174 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_down
# 175 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 176 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 177 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 178 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 179 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 180 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 181 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 182 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
	step_end

Naranja_IslaTrovita_G11_M02_Text_0818320B::
# 185 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "¿Qué ves aquì?\p{COLOR 0x04}Ehh… \nUnos dibujos infantiles.\p{COLOR 0x01}\nDebido a la excursión que hicieron\llos niños de TROVITA\lpara aprender una cosa:\pAunque parezca insignificante los\nque sacaban unos pocos para un circo\ly otros pocos para otro\ly otros pocos más para otro,\lacabaron extinguiendo\lmuchas variedades rosas\lcomo los famosos TAUROS salmón\ly los escurridizos ALTARIAS fucsias.$"

Naranja_IslaTrovita_G11_M02_Text_08183439::
# 189 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Ahora ya no quedan en esta isla     \nni en ninguna otra parte del mundo,\lpor eso debemos cuidar\lcada forma de vida.\pEspero que a partir de ahora\ntengas más cuidado\lcon lo que haces en esta isla\ly con el todo el mundo en general.$"

Naranja_IslaTrovita_G11_M02_Text_0818351E::
# 193 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: I’m counting on you!$"

Naranja_IslaTrovita_G11_M02_Text_0818353E::
# 197 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\nThank you kindly!\pThis is my way of thanking you.\nIt should help you, a TRAINER.$"

Naranja_IslaTrovita_G11_M02_Text_081835B3::
# 201 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\nEXP. SHARE will be given some of the\lEXP Points from battle.\pIt will get EXP Points even if it didn’t\nactually battle.\pI would say EXP. SHARE is quite useful\nfor raising weak POKéMON.$"

Naranja_IslaTrovita_G11_M02_Text_0818368D::
# 205 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: Since my youth, I’ve immersed\nmyself in work.\pConsequently, I’m not familiar with\ntrends and that sort of thing.\pBut do young people all want to be\nTRAINERS in the POKéMON LEAGUE?$"

Naranja_IslaTrovita_G11_M02_Text_0818374C::
# 209 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Y esta es la oficina  \nde vigilancia de PINKAN.\pDebes cuidar mucho los POKéMON\nque hay por aquì.\pEsta isla es un espacio protegido,\nconcretamente es una\lRESERVA DE LA POKéSFERA.\pY debemos protegerla de\ncazadores ladrones furtivos.\pSólo cuando los del continente\nse dieron cuenta de lo dañino que era\lexhibir animales especiales\lsacándolos de esta pequeña isla\ly condenando estas razas\lrosas de pokemon\ldejaron de exterminarlos cazándolos.$"

Naranja_IslaTrovita_G11_M02_Text_08183903::
# 213 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Ven por aquì, a tu izquierda.      \nQue te explique mejor el problema.$"

Naranja_IslaTrovita_G11_M02_Text_0818395C::
# 217 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Cuida mucho el medioambiente\ny los POKéMON que viven en él\pEs crucial.$"

Naranja_IslaTrovita_G11_M02_Text_081839A3::
# 221 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "DEVON’s new products, the REPEAT BALL\nand TIMER BALL, have become hugely\lpopular among TRAINERS.$"

Naranja_IslaTrovita_G11_M02_Text_08183A04::
# 225 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "It’s a collection of rare rocks and\nstones assembled by the PRESIDENT.$"
