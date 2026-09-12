Naranja_Tangelo_G24_M29_MapScripts::
	.byte 0


Naranja_Tangelo_G24_M29_EventScript_OBJ_EVENT_GFX_TRACEY_LocalId5::
# 8 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TANGELO_333, Naranja_Tangelo_G24_M29_Text_081B7B68, Naranja_Tangelo_G24_M29_Text_081B7B9D, Naranja_Tangelo_G24_M29_EventScript_AfterBattle_086B5CD4
	end


Naranja_Tangelo_G24_M29_EventScript_OBJ_EVENT_GFX_BIG_LAPRAS_DOLL_LocalId3::
# 13 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	lock
# 14 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	msgbox Naranja_Tangelo_G24_M29_Text_081955B0, MSGBOX_AUTOCLOSE
# 16 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	setflag FLAG_HIDE_TANGELO_G24_M29_BIG_LAPRAS_DOLL
# 17 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TANGELO_G02_M02_WALLY
# 18 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TANGELO_G02_M02_BOY_1_3
# 19 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	givemon SPECIES_LAPRAS, 5, 0
# 20 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	warp MAP_NARANJA_ISLA_TANGELO_G02_M02, 1, 0, 0
	end


Naranja_Tangelo_G24_M29_EventScript_OBJ_EVENT_GFX_BIG_WAILMER_DOLL_LocalId9::
# 25 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	lock
# 26 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	nop
# 27 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	msgbox Naranja_Tangelo_G24_M29_Text_086B5340, MSGBOX_AUTOCLOSE
# 28 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	release
	end


Naranja_Tangelo_G24_M29_EventScript_AfterBattle_086B5CD4::
# 33 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	nop
# 34 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 35 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	msgbox Naranja_Tangelo_G24_M29_Text_081B7BD0, MSGBOX_AUTOCLOSE
	end


Naranja_Tangelo_G24_M29_Text_081955B0::
# 39 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	.string "{COLOR 0x06}Hiii hiii\p{COLOR 0x04}{PLAYER}: ¡Pobre lapras!\nLe han atacado, pero sus heridas\lya han mejorado mejor.\pNecesita ayuda de un experto.\n¿No crees Tacey?\p{COLOR 0x03}Tracey: Quizás sì.\pLo mejor será llevarlo al centro pokemon.\n¡Vamos!$"

Naranja_Tangelo_G24_M29_Text_081B7B68::
# 43 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	.string "{COLOR 0x03}Tracey: ¿Conoces al Prf. OAK?\n¡¡ Demuéstramelo !!$"

Naranja_Tangelo_G24_M29_Text_081B7B9D::
# 47 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	.string "{COLOR 0x0D}¡Te llevas de maravilla\ncon tus pokemon !$"

Naranja_Tangelo_G24_M29_Text_081B7BD0::
# 51 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	.string "{COLOR 0x03}Este Lapras te ayudará a moverte \npor el mar.$"

Naranja_Tangelo_G24_M29_Text_086B5340::
# 55 "data/maps/Naranja_Tangelo_G24_M29/scripts.pory"
	.string "No sé porque estára\neste wailmer en el centro\pDesde luego no parece\nque sea por depresión.$"
