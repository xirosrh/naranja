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
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_0818374C
# 34 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 36 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M02_TEALA, Naranja_IslaTrovita_G11_M02_Movement_08157815
# 37 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	delay 0x50
# 39 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M02_TEALA, Naranja_IslaTrovita_G11_M02_Movement_0815781E
# 40 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_08183903
# 42 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 43 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 44 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 45 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M02_TEALA, Naranja_IslaTrovita_G11_M02_Movement_08157803
# 46 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaTrovita_G11_M02_Movement_08157827
# 47 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_0818320B
# 50 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	releaseall
# 52 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	nop
# 53 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	nop
# 54 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	nop
# 55 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto Naranja_IslaTrovita_G11_M02_EventScript_Sub_081577D8
	return


Naranja_IslaTrovita_G11_M02_EventScript_Sub_081577D8::
# 59 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_08183439
# 60 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_SWIMMER_M
# 62 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_BLACK_BELT
# 63 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_WOMAN_3
# 64 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 65 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 66 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 1
# 67 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TROVITA_G00_M03_VARS
# 68 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_2, 1
# 69 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G11_M02_EventScript_OBJ_EVENT_GFX_MAGMA_MEMBER_F_LocalId1::
# 74 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	lock
# 75 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	faceplayer
# 76 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0110
# 77 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_0815789B
# 78 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 79 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_08157864
# 80 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_0818351E
# 81 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 83 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 84 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 85 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_08157864::
# 90 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_0818353E
# 91 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 92 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB6
# 93 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 94 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 0
# 95 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 96 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 97 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0110
# 98 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_081835B3
# 99 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 101 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 102 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 103 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_0815789B::
# 108 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_0818368D
# 109 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 110 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	closemessage
# 111 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 112 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 113 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2::
# 118 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	lock
# 119 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	faceplayer
# 120 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_0100
# 121 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M02_EventScript_Sub_081578C5
# 122 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_0818395C
# 123 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 124 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sub_081578C5::
# 129 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_081839A3
# 130 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 4
# 131 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M02_EventScript_Sign_1::
# 136 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M02_Text_08183A04
# 137 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	callstd 3
	end


# 141 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_08157803:
# 142 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 143 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 144 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 145 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_down
# 146 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 147 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 148 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 149 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 150 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 151 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 152 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 153 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 154 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 155 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 158 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_08157815:
# 159 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 160 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 161 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 162 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_down
# 163 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 164 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 165 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 166 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
	step_end

# 169 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_0815781E:
# 170 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 171 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 172 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 173 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 174 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_up
# 175 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 176 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
# 177 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_left
	step_end

# 180 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
Naranja_IslaTrovita_G11_M02_Movement_08157827:
# 181 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 182 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 183 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 184 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 185 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_down
# 186 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 187 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 188 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 189 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 190 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 191 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 192 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
# 193 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	walk_right
	step_end

Naranja_IslaTrovita_G11_M02_Text_0818320B::
# 196 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "¿Qué ves aquì?\p{COLOR 0x04}Ehh… \nUnos dibujos infantiles.\p{COLOR 0x01}\nDebido a la excursión que hicieron\llos niños de TROVITA\lpara aprender una cosa:\pAunque parezca insignificante los\nque sacaban unos pocos para un circo\ly otros pocos para otro\ly otros pocos más para otro,\lacabaron extinguiendo\lmuchas variedades rosas\lcomo los famosos TAUROS salmón\ly los escurridizos ALTARIAS fucsias.$"

Naranja_IslaTrovita_G11_M02_Text_08183439::
# 200 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Ahora ya no quedan en esta isla     \nni en ninguna otra parte del mundo,\lpor eso debemos cuidar\lcada forma de vida.\pEspero que a partir de ahora\ntengas más cuidado\lcon lo que haces en esta isla\ly con el todo el mundo en general.$"

Naranja_IslaTrovita_G11_M02_Text_0818351E::
# 204 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: I’m counting on you!$"

Naranja_IslaTrovita_G11_M02_Text_0818353E::
# 208 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\nThank you kindly!\pThis is my way of thanking you.\nIt should help you, a TRAINER.$"

Naranja_IslaTrovita_G11_M02_Text_081835B3::
# 212 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\nEXP. SHARE will be given some of the\lEXP Points from battle.\pIt will get EXP Points even if it didn’t\nactually battle.\pI would say EXP. SHARE is quite useful\nfor raising weak POKéMON.$"

Naranja_IslaTrovita_G11_M02_Text_0818368D::
# 216 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "MR. STONE: Since my youth, I’ve immersed\nmyself in work.\pConsequently, I’m not familiar with\ntrends and that sort of thing.\pBut do young people all want to be\nTRAINERS in the POKéMON LEAGUE?$"

Naranja_IslaTrovita_G11_M02_Text_0818374C::
# 220 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Y esta es la oficina  \nde vigilancia de PINKAN.\pDebes cuidar mucho los POKéMON\nque hay por aquì.\pEsta isla es un espacio protegido,\nconcretamente es una\lRESERVA DE LA POKéSFERA.\pY debemos protegerla de\ncazadores ladrones furtivos.\pSólo cuando los del continente\nse dieron cuenta de lo dañino que era\lexhibir animales especiales\lsacándolos de esta pequeña isla\ly condenando estas razas\lrosas de pokemon\ldejaron de exterminarlos cazándolos.$"

Naranja_IslaTrovita_G11_M02_Text_08183903::
# 224 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Ven por aquì, a tu izquierda.      \nQue te explique mejor el problema.$"

Naranja_IslaTrovita_G11_M02_Text_0818395C::
# 228 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "Cuida mucho el medioambiente\ny los POKéMON que viven en él\pEs crucial.$"

Naranja_IslaTrovita_G11_M02_Text_081839A3::
# 232 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "DEVON’s new products, the REPEAT BALL\nand TIMER BALL, have become hugely\lpopular among TRAINERS.$"

Naranja_IslaTrovita_G11_M02_Text_08183A04::
# 236 "data/maps/Naranja_IslaTrovita_G11_M02/scripts.pory"
	.string "It’s a collection of rare rocks and\nstones assembled by the PRESIDENT.$"
