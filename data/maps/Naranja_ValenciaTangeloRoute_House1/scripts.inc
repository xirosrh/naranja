Naranja_ValenciaTangeloRoute_House1_MapScripts::
	.byte 0


Naranja_ValenciaTangeloRoute_House1_EventScript_Trader::
# 8 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	msgbox Naranja_ValenciaTangeloRoute_House1_Text_086B3EB4, MSGBOX_NPC
	end


Naranja_ValenciaTangeloRoute_House1_EventScript_Trigger_1::
# 13 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	setflag FLAG_HIDE_NARANJA_VALENCIA_TANGELO_ROUTE_G07_M02_TRADER_2
# 14 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	setflag FLAG_HIDE_NARANJA_VALENCIA_TANGELO_ROUTE_G09_M01_FIRE_CUSHION
# 15 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_VALENCIA_TANGELO_ROUTE_G09_M00_HEX_MANIAC
# 16 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_VALENCIA_TANGELO_ROUTE_G07_M02_TRADER
# 17 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	clearflag FLAG_NARANJA_BROCK_RECOMMENDED_PLAYER_FOR_LAPRAS
# 18 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ROUTE_G00_M31_LITTLE_GIRL_1
# 19 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	warp MAP_NARANJA_VALENCIA_TANGELO_ROUTE, 0, 0, 0
	end


Naranja_ValenciaTangeloRoute_House1_Text_086B3EB4::
# 23 "data/maps/Naranja_ValenciaTangeloRoute_House1/scripts.pory"
	.string "{COLOR 0x03}La botánica es fascinante…\p¿Sabía que los vegetales son los ùnicos\nseres vivos capaces de alimentarse \lauxiliándose de la energía del sol?\p¡Esto los convierte en imprescindibles\npara los demás seres vivos!$"
