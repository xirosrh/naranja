Naranja_IslaNueva_G15_M06_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M06_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M06_Text_0818FA66
# 11 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	callstd 5
# 12 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 13 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G15_M06_EventScript_Sub_0815B307
# 14 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 15 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G15_M06_EventScript_Sub_0815B310
# 16 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M06_EventScript_Sub_0815B307::
# 21 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M06_Text_0818FAAE
# 22 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	callstd 4
	return


Naranja_IslaNueva_G15_M06_EventScript_Sub_0815B310::
# 27 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M06_Text_0818FB04
# 28 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	callstd 4
	return


Naranja_IslaNueva_G15_M06_Text_0818FA66::
# 32 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	.string "MT. PYRE...\pAt its peak are two orbs placed side\nby side. Did you know?$"

Naranja_IslaNueva_G15_M06_Text_0818FAAE::
# 36 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	.string "Yes, two orbs side by side...\pThe sight of them together...\nIt is somehow soothing...$"

Naranja_IslaNueva_G15_M06_Text_0818FB04::
# 40 "data/maps/Naranja_IslaNueva_G15_M06/scripts.pory"
	.string "Is that so?\nPerhaps you ought to visit and see...$"
