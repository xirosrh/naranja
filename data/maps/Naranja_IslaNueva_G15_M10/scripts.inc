Naranja_IslaNueva_G15_M10_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M10_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_00F5
# 11 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3CD
# 12 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_0818FEA1
# 13 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 5
# 14 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 15 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3C3
# 16 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_0818FF12
# 17 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 4
# 18 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	setorcopyvar VAR_0x8000, 0x75
# 19 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 7
# 20 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 21 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3D7
# 22 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_00F5
# 23 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3C3::
# 28 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_0818FF6D
# 29 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 4
# 30 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3CD::
# 35 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_0818FF95
# 36 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3D7::
# 42 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	bufferdecorationname 1, 0x75
# 43 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_081A0CEF
# 44 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_0818FF28
# 46 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 4
# 47 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_Text_0818FEA1::
# 51 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Hello! You’re our first guest in a\ngood while.\pYou’ve brightened up my day, so I’ll\ngive you a big WAILMER DOLL.$"

Naranja_IslaNueva_G15_M10_Text_0818FF12::
# 55 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Take good care of it!$"

Naranja_IslaNueva_G15_M10_Text_0818FF28::
# 59 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Oh, you want it, but not right now?\nOkay, then I’ll hold it for you.$"

Naranja_IslaNueva_G15_M10_Text_0818FF6D::
# 63 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Are you sure?\nYou don’t want this DOLL?$"

Naranja_IslaNueva_G15_M10_Text_0818FF95::
# 67 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "I love plush DOLLS!$"

Naranja_IslaNueva_G15_M10_Text_081A0CEF::
# 71 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "¡Qué mal! No hay sitio   \npara guardar otro {STR_VAR_2}…$"
