Naranja_IslaNueva_G15_M07_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M07_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M07_Text_0818FB36
# 11 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	callstd 5
# 12 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 13 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M07_EventScript_Sub_0815B339
# 14 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M07_Text_0818FBC0
# 15 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	callstd 4
# 16 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M07_EventScript_Sub_0815B339::
# 21 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M07_Text_0818FB9C
# 22 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	callstd 4
# 23 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M07_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId2::
# 28 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M07_Text_0818FC1A
# 29 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G15_M07_Text_0818FB36::
# 33 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "You’re a POKéMON TRAINER, aren’t you?\pSOOTOPOLIS’s GYM LEADER WALLACE has\nmany fans.\lDo you have any?$"

Naranja_IslaNueva_G15_M07_Text_0818FB9C::
# 37 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "Oh, then you must be pretty strong.$"

Naranja_IslaNueva_G15_M07_Text_0818FBC0::
# 41 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "Oh, dear...\nThat’s a little lonesome.\pTry working a little harder to get a\nfan following.$"

Naranja_IslaNueva_G15_M07_Text_0818FC1A::
# 45 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "Dedicated fans come over from even\nKANTO and JOHTO.\pIt was really wild when I went to the\nTRAINER FAN CLUB in LILYCOVE.$"
