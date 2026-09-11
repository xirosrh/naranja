Naranja_IslaValencia_G13_M13_MapScripts::
	.byte 0


Naranja_IslaValencia_G13_M13_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	loadword 0, Naranja_IslaValencia_G13_M13_Text_0818B7B0
# 9 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	callstd 2
	end


Naranja_IslaValencia_G13_M13_EventScript_OBJ_EVENT_GFX_WYNAUT_DOLL_LocalId2::
# 14 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	waitse
# 17 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	playmoncry SPECIES_VENONAT, 0
# 18 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	loadword 0, Naranja_IslaValencia_G13_M13_Text_0817E156
# 19 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	waitmoncry
# 21 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	release
	end


Naranja_IslaValencia_G13_M13_Text_0817E156::
# 25 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	.string "Fffnyaaaah...$"

Naranja_IslaValencia_G13_M13_Text_0818B7B0::
# 29 "data/maps/Naranja_IslaValencia_G13_M13/scripts.pory"
	.string "Creo q. llegarás llegarás lejos {PLAYER},\pTienes un brillo especial en los ojos.\pNo necesitarás suerte.\pPero entrena duro.$"
