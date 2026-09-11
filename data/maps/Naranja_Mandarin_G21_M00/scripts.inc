Naranja_Mandarin_G21_M00_MapScripts::
# 5 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Mandarin_G21_M00_OnTransition
	.byte 0


Naranja_Mandarin_G21_M00_OnTransition::
# 9 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_085A
	end


Naranja_Mandarin_G21_M00_EventScript_Sub_0815C2E8::
# 14 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	loadword 0, Naranja_Mandarin_G21_M00_Text_08193135
# 15 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 2
	end


Naranja_Mandarin_G21_M00_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId3::
# 20 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	loadword 0, Naranja_Mandarin_G21_M00_Text_081931C1
# 21 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 2
	end


Naranja_Mandarin_G21_M00_EventScript_Sub_0815C2FA::
# 26 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	lock
# 27 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	checkflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 29 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Mandarin_G21_M00_EventScript_Sub_086B3DD0
# 30 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	loadword 0, Naranja_Mandarin_G21_M00_Text_08192F33
# 31 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	release
	end


Naranja_Mandarin_G21_M00_EventScript_Sub_0815C30F::
# 37 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	loadword 0, Naranja_Mandarin_G21_M00_Text_086B3DB0
# 38 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	release
	end


Naranja_Mandarin_G21_M00_EventScript_Sub_086B3DD0::
# 44 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_2119
# 45 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G21_M00_EventScript_Sub_0815C30F
# 46 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	nop
# 47 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_2119
# 48 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	loadword 0, Naranja_Mandarin_G21_M00_Text_08193049
# 49 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x158
# 51 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 52 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 0
# 53 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	loadword 0, Naranja_Mandarin_G21_M00_Text_086B3DB0
# 54 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	release
	end


Naranja_Mandarin_G21_M00_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId2::
# 60 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 61 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	goto Naranja_Mandarin_G21_M00_EventScript_Sub_0815C2FA
	return


Naranja_Mandarin_G21_M00_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 65 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_2119
# 66 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	call_if EQUAL, Naranja_Norte_G30_M00_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId1
# 67 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	goto Naranja_Mandarin_G21_M00_EventScript_Sub_0815C2E8
	return


Naranja_Mandarin_G21_M00_Text_08192F33::
# 70 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	.string "{COLOR 0x06}Mateo: {COLOR 0x01}Esculpo estatuas de cristal,  \ncomo nuestro padre y nuestro abuelo,\p…pero no consigo esculpir\nalgo realmente bueno.\pMi abuelo siempre decìa que se inspiraba\nrecordando las historias\lsobre el {COLOR 0x06}Onix de cristal.\p{COLOR 0x04}{PLAYER}: Yo lo encontraré\npara contarte cada detalle.$"

Naranja_Mandarin_G21_M00_Text_08193049::
# 74 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	.string "{COLOR 0x06}Mateo: {COLOR 0x01}¿Lo conseguiste?\p{COLOR 0x04}PLAYER : …\p…\p{COLOR 0x01}¡Guau!   \n¿Y lo has capturado?\pMe has ayudado a continuar mi camino…\pte daré algo para el tuyo.\pEnséñala a un pokémon fuerte\npara deshacer los remolinos marinos.\pY recuerda siemopre que…$"

Naranja_Mandarin_G21_M00_Text_08193135::
# 78 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	.string "Nuestro hermano está desconsolado.\pÉl es escultor, pero yo solo me dedico\na hacer objetos de cristal.\p¡Al menos necesito menos inspiración!$"

Naranja_Mandarin_G21_M00_Text_081931C1::
# 82 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\nhas gone through!\pSometimes, if you hope strongly enough,\ndreams do come true.$"

Naranja_Mandarin_G21_M00_Text_086B3DB0::
# 86 "data/maps/Naranja_Mandarin_G21_M00/scripts.pory"
	.string "¡Aquí serás siempre bienvenido!$"
