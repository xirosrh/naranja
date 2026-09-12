Naranja_PuebloPaleta_G08_M00_MapScripts::
	.byte 0


Naranja_PuebloPaleta_G08_M00_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId2::
# 8 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	lock
# 9 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_007A
# 11 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G08_M00_EventScript_Sub_0815446D
# 12 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 13 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G08_M00_EventScript_Sub_08154463
# 14 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G08_M00_Text_086BF11B, MSGBOX_DEFAULT
# 15 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G08_M00_EventScript_Sub_08154463::
# 20 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G08_M00_Text_08179CA1, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G08_M00_EventScript_Sub_0815446D::
# 26 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G08_M00_Text_08179D12, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G08_M00_EventScript_OBJ_EVENT_GFX_BIRCHS_BAG_LocalId1::
# 32 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	lock
# 33 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	waitse
# 35 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	playmoncry SPECIES_MACHOKE, 0
# 36 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	msgbox Naranja_PuebloPaleta_G08_M00_Text_086BFAF4, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	waitmoncry
# 38 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G08_M00_Text_08179CA1::
# 42 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	.string "Oh, hello, {PLAYER}! We’ve got\nsomething we want you to have.\pMy husband has it, so please have a\nword with him, dear.$"

Naranja_PuebloPaleta_G08_M00_Text_08179D12::
# 46 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	.string "I want you to keep this a secret\nfrom my husband...\pBut our WALLY left VERDANTURF TOWN\nwithout telling anyone.\pYou know, WALLY is frail, but\nhe’s surprisingly strong-willed.\pI’m sure that he’ll come back safe\nand sound one day!$"

Naranja_PuebloPaleta_G08_M00_Text_086BF11B::
# 50 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	.string "Delia: ¡Esta vez no tengo nada para tí!\n¿Crees que cada vez que vengas te\lvas a llevar algo?\p\pDe todos modos…\n¡Suerte!$"

Naranja_PuebloPaleta_G08_M00_Text_086BFAF4::
# 54 "data/maps/Naranja_PuebloPaleta_G08_M00/scripts.pory"
	.string "¡{PLAYER} encontró MOCHILA!\pDelia: ¡Eh! ¿Que haces?\n¡Esto es mío!$"
