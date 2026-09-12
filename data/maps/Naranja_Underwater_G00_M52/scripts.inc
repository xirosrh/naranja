Naranja_Underwater_G00_M52_MapScripts::
	.byte 0


Naranja_Underwater_G00_M52_EventScript_OBJ_EVENT_GFX_NURSE_LocalId3::
# 8 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	faceplayer
# 9 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_2, 0
# 10 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	call_if EQUAL, 0x086B703F
# 12 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	msgbox Naranja_Underwater_G00_M52_Text_086B72C0, MSGBOX_AUTOCLOSE
# 13 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	applymovement LOCALID_UNDERWATER_G00_M52_NURSE, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 14 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	delay 5
	end


Naranja_Underwater_G00_M52_Text_086B72C0::
# 18 "data/maps/Naranja_Underwater_G00_M52/scripts.pory"
	.string "{COLOR 0x04}(JOY está gesticulando){COLOR 0x01}\p \p-No.\p-Hace como que bebe.\p-Señala a Shelder.\p \p-Algas… me indica las algas.\p-Se toca el ojo.\p-Otra vez señala las algas.\p \p{COLOR 0x04}(¿Necesitará algo de entre las algas?)$"
