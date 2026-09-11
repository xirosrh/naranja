Naranja_ValnTang_G07_M02_MapScripts::
	.byte 0


Naranja_ValnTang_G07_M02_EventScript_OBJ_EVENT_GFX_TRADER_LocalId1::
# 8 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	loadword 0, Naranja_ValnTang_G07_M02_Text_086B3EB4
# 9 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	callstd 2
	end


Naranja_ValnTang_G07_M02_EventScript_Trigger_1::
# 14 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 15 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G09_M01_FIRE_CUSHION
# 16 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	clearflag FLAG_HIDE_VALN_TANG_G09_M00_HEX_MANIAC
# 17 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	clearflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER
# 18 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	clearflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 19 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 20 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	warp MAP_NARANJA_VALN_TANG_G00_M17, 0, 0, 0
	end


Naranja_ValnTang_G07_M02_Text_086B3EB4::
# 24 "data/maps/Naranja_ValnTang_G07_M02/scripts.pory"
	.string "{COLOR 0x03}La botánica es fascinante…\p¿Sabía que los vegetales son los ùnicos\nseres vivos capaces de alimentarse \lauxiliándose de la energía del sol?\p¡Esto los convierte en imprescindibles\npara los demás seres vivos!$"
