Naranja_MandarinRoute_TunnelersRestHouse_MapScripts::
# 5 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MandarinRoute_TunnelersRestHouse_OnTransition
	.byte 0


Naranja_MandarinRoute_TunnelersRestHouse_OnTransition::
# 9 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTE_EVENT_COMPLETE_085A
	end


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_0815C2E8::
# 14 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	msgbox Naranja_MandarinRoute_TunnelersRestHouse_Text_08193135, MSGBOX_NPC
	end


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_LittleGirl1::
# 19 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	msgbox Naranja_MandarinRoute_TunnelersRestHouse_Text_081931C1, MSGBOX_NPC
	end


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_0815C2FA::
# 24 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	lock
# 25 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	faceplayer
# 26 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ROUTE_G21_M00_LITTLE_GIRL_1
# 27 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_086B3DD0
# 28 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	msgbox Naranja_MandarinRoute_TunnelersRestHouse_Text_08192F33, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	release
	end


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_0815C30F::
# 34 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	msgbox Naranja_MandarinRoute_TunnelersRestHouse_Text_086B3DB0, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	release
	end


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_086B3DD0::
# 40 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_HM_WHIRLPOOL_FROM_MATEO
# 41 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_0815C30F
# 42 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	nop
# 43 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	setflag FLAG_NARANJA_RECEIVED_HM_WHIRLPOOL_FROM_MATEO
# 44 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	msgbox Naranja_MandarinRoute_TunnelersRestHouse_Text_08193049, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	setorcopyvar VAR_0x8000, 0x158
# 46 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 47 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	callstd 0
# 48 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	msgbox Naranja_MandarinRoute_TunnelersRestHouse_Text_086B3DB0, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	release
	end


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Man3_2::
# 54 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ROUTE_G00_M31_LITTLE_GIRL_1
# 55 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	goto Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_0815C2FA
	return


Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Man3::
# 59 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_HM_WHIRLPOOL_FROM_MATEO
# 60 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	call_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_DittoDoll
# 61 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	goto Naranja_MandarinRoute_TunnelersRestHouse_EventScript_Sub_0815C2E8
	return


Naranja_MandarinRoute_TunnelersRestHouse_Text_08192F33::
# 64 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	.string "{COLOR 0x06}Mateo: {COLOR 0x01}Esculpo estatuas de cristal,  \ncomo nuestro padre y nuestro abuelo,\p…pero no consigo esculpir\nalgo realmente bueno.\pMi abuelo siempre decìa que se inspiraba\nrecordando las historias\lsobre el {COLOR 0x06}Onix de cristal.\p{COLOR 0x04}{PLAYER}: Yo lo encontraré\npara contarte cada detalle.$"

Naranja_MandarinRoute_TunnelersRestHouse_Text_08193049::
# 68 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	.string "{COLOR 0x06}Mateo: {COLOR 0x01}¿Lo conseguiste?\p{COLOR 0x04}PLAYER : …\p…\p{COLOR 0x01}¡Guau!   \n¿Y lo has capturado?\pMe has ayudado a continuar mi camino…\pte daré algo para el tuyo.\pEnséñala a un pokémon fuerte\npara deshacer los remolinos marinos.\pY recuerda siemopre que…$"

Naranja_MandarinRoute_TunnelersRestHouse_Text_08193135::
# 72 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	.string "Nuestro hermano está desconsolado.\pÉl es escultor, pero yo solo me dedico\na hacer objetos de cristal.\p¡Al menos necesito menos inspiración!$"

Naranja_MandarinRoute_TunnelersRestHouse_Text_081931C1::
# 76 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\nhas gone through!\pSometimes, if you hope strongly enough,\ndreams do come true.$"

Naranja_MandarinRoute_TunnelersRestHouse_Text_086B3DB0::
# 80 "data/maps/Naranja_MandarinRoute_TunnelersRestHouse/scripts.pory"
	.string "¡Aquí serás siempre bienvenido!$"
