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
	msgbox Naranja_IslaNueva_G15_M10_Text_0818FEA1, MSGBOX_YESNO
# 13 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3C3
# 15 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M10_Text_0818FF12, MSGBOX_DEFAULT
# 16 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	setorcopyvar VAR_0x8000, 0x75
# 17 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	callstd 7
# 18 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3D7
# 20 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_00F5
# 21 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3C3::
# 26 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M10_Text_0818FF6D, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3CD::
# 32 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M10_Text_0818FF95, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_EventScript_Sub_0815B3D7::
# 38 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	bufferdecorationname 1, 0x75
# 39 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M10_Text_081A0CEF, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M10_Text_0818FF28, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M10_Text_0818FEA1::
# 45 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Hello! You’re our first guest in a\ngood while.\pYou’ve brightened up my day, so I’ll\ngive you a big WAILMER DOLL.$"

Naranja_IslaNueva_G15_M10_Text_0818FF12::
# 49 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Take good care of it!$"

Naranja_IslaNueva_G15_M10_Text_0818FF28::
# 53 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Oh, you want it, but not right now?\nOkay, then I’ll hold it for you.$"

Naranja_IslaNueva_G15_M10_Text_0818FF6D::
# 57 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "Are you sure?\nYou don’t want this DOLL?$"

Naranja_IslaNueva_G15_M10_Text_0818FF95::
# 61 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "I love plush DOLLS!$"

Naranja_IslaNueva_G15_M10_Text_081A0CEF::
# 65 "data/maps/Naranja_IslaNueva_G15_M10/scripts.pory"
	.string "¡Qué mal! No hay sitio   \npara guardar otro {STR_VAR_2}…$"
