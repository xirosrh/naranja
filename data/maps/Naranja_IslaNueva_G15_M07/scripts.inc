Naranja_IslaNueva_G15_M07_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M07_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId1::
# 8 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M07_Text_0818FB36, MSGBOX_YESNO
# 11 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 12 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M07_EventScript_Sub_0815B339
# 13 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M07_Text_0818FBC0, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M07_EventScript_Sub_0815B339::
# 19 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M07_Text_0818FB9C, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M07_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId2::
# 25 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G15_M07_Text_0818FC1A, MSGBOX_NPC
	end


Naranja_IslaNueva_G15_M07_Text_0818FB36::
# 29 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "You’re a POKéMON TRAINER, aren’t you?\pSOOTOPOLIS’s GYM LEADER WALLACE has\nmany fans.\lDo you have any?$"

Naranja_IslaNueva_G15_M07_Text_0818FB9C::
# 33 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "Oh, then you must be pretty strong.$"

Naranja_IslaNueva_G15_M07_Text_0818FBC0::
# 37 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "Oh, dear...\nThat’s a little lonesome.\pTry working a little harder to get a\nfan following.$"

Naranja_IslaNueva_G15_M07_Text_0818FC1A::
# 41 "data/maps/Naranja_IslaNueva_G15_M07/scripts.pory"
	.string "Dedicated fans come over from even\nKANTO and JOHTO.\pIt was really wild when I went to the\nTRAINER FAN CLUB in LILYCOVE.$"
