Naranja_IslaTangelo_G02_M02_MapScripts::
# 5 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTangelo_G02_M02_OnTransition
	.byte 0


Naranja_IslaTangelo_G02_M02_EventScript_Sub_0814F776::
# 9 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_086B5730, MSGBOX_AUTOCLOSE
	end


Naranja_IslaTangelo_G02_M02_OnTransition::
# 14 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	setrespawn 0xE
# 15 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_IslaTangelo_G02_M02_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 20 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	setvar VAR_0x800B, 1
# 21 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 22 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	waitmessage
# 23 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M02_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 29 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_081748D1, MSGBOX_NPC
	end


Naranja_IslaTangelo_G02_M02_EventScript_OBJ_EVENT_GFX_TRACEY_LocalId4::
# 34 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	lock
# 35 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_211B
# 37 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	call_if LESS_THAN, Naranja_IslaTangelo_G02_M02_EventScript_Sub_086B5CF0
# 38 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	nop
# 39 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	goto Naranja_IslaTangelo_G02_M02_EventScript_Sub_086B5D20
	return


Naranja_IslaTangelo_G02_M02_EventScript_Sub_086B5CF0::
# 43 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_211B
# 44 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	nop
# 45 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_086B5580, MSGBOX_AUTOCLOSE
# 46 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	nop
# 47 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	checkflag FLAG_HIDE_ISLA_TANGELO_G02_M02_BOY_1_3
# 48 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 49 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	nop
# 50 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 51 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_086B5790, MSGBOX_AUTOCLOSE
# 52 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	nop
# 53 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M02_EventScript_Sub_086B5D20::
# 58 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	checkflag FLAG_HIDE_ISLA_TANGELO_G02_M02_BOY_1_3
# 59 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaTangelo_G02_M02_EventScript_Sub_0814F776
# 60 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	checkflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 61 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G02_M02_EventScript_Sub_086B5D50
# 62 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 63 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_086B5790, MSGBOX_AUTOCLOSE
# 64 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M02_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId3::
# 69 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	faceplayer
# 70 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	setflag FLAG_HIDE_ISLA_TANGELO_G02_M02_BOY_1_3
# 71 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	nop
# 72 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_086B5B91, MSGBOX_AUTOCLOSE
	end


Naranja_IslaTangelo_G02_M02_EventScript_Sub_086B5D50::
# 77 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M02_Text_086B5AF3, MSGBOX_AUTOCLOSE
	end


Naranja_IslaTangelo_G02_M02_Text_081748D1::
# 81 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	.string "That PC in the corner there is\nfor any POKéMON TRAINER to use.\pNaturally, that means you’re welcome\nto use it, too.$"

Naranja_IslaTangelo_G02_M02_Text_086B5580::
# 85 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	.string "{COLOR 0x03}¡Hola {PLAYER}!\p{COLOR 0x04}¡Vaya!\n¿Qué haces aquì Tracey?\p{COLOR 0x03}Verás, por tu manera de combatir\nsé que cuidarás bien a Lapras.\pDecidì acompañarte de vuelta\na Pueblo Paleta.\p…\pAsì podré ver al Profesor Oak\ny si me admite trabajar ayudándole\len su laboratorio.\p¿Qué te parece?\p{COLOR 0x04}Claro, en cuanto lleguemos a Paleta,\nte presentaré, ahora tengo que buscar\lalgún medio de volver allì.\p{COLOR 0x03}Te estaré esperando aquì\p¡Cuida a Lapras!\pY sube su nivel…$"

Naranja_IslaTangelo_G02_M02_Text_086B5730::
# 89 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	.string "{COLOR 0x03}¿Encontraste la manera\nde volver a Paleta?\pQuizás el Profesor Oak\nnos pueda ayudar.$"

Naranja_IslaTangelo_G02_M02_Text_086B5790::
# 93 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	.string "Texto no recuperable del ROM original.$"

Naranja_IslaTangelo_G02_M02_Text_086B5AF3::
# 97 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	.string "{COLOR 0x03}Para llegar al gimnasio tendrás   \nque atravesar el bosque\ldel valle de las flores.\pNo creo que te cueste encontrarlo,\npodrás llegar fácilmente.\p¡Cuìdate!$"

Naranja_IslaTangelo_G02_M02_Text_086B5B91::
# 101 "data/maps/Naranja_IslaTangelo_G02_M02/scripts.pory"
	.string "Quiero que la doctora Joy\nhaga un chequeo a mi Starmie     \lpara poder presentarlo a\lla ÉLITE NARANJA.\p{COLOR 0x04}¿La ÉLITE NARANJA?\p{COLOR 0x01}Sì.\pLa ÉLITE NARANJA.$"
