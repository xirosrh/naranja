Naranja_IslaHamlin_G07_M05_MapScripts::
	.byte 0


Naranja_IslaHamlin_G07_M05_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId2::
# 8 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	msgbox Naranja_IslaHamlin_G07_M05_Text_0817961F, MSGBOX_NPC
	end


Naranja_IslaHamlin_G07_M05_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 13 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	msgbox Naranja_IslaHamlin_G07_M05_Text_0817959B, MSGBOX_NPC
	end


Naranja_IslaHamlin_G07_M05_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId3::
# 18 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	lock
# 19 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	msgbox Naranja_IslaHamlin_G07_M05_Text_0817963D, MSGBOX_YESNO
# 21 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 22 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M05_EventScript_Sub_0815437F
# 23 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 24 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M05_EventScript_Sub_08154389
	end


Naranja_IslaHamlin_G07_M05_EventScript_Sub_0815437F::
# 29 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	msgbox Naranja_IslaHamlin_G07_M05_Text_08179656, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M05_EventScript_Sub_08154389::
# 35 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	msgbox Naranja_IslaHamlin_G07_M05_Text_0817968C, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M05_Text_0817959B::
# 40 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "People were saying they saw a POKéMON\nFLYING high above HOENN.\pIs it FLYING around all the time?\nDoesn’t it need to rest somewhere?$"

Naranja_IslaHamlin_G07_M05_Text_0817961F::
# 44 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "A sky POKéMON!\nA sky POKéMON!$"

Naranja_IslaHamlin_G07_M05_Text_0817963D::
# 48 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "Where did you come from?$"

Naranja_IslaHamlin_G07_M05_Text_08179656::
# 52 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "Yes?\nYES TOWN?\pI’ve never heard of a place like that.$"

Naranja_IslaHamlin_G07_M05_Text_0817968C::
# 56 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "No? That doesn’t make any sense.\nYou have to come from somewhere.\pOh! Wait! You’re not going to say you\nwere born at the bottom of the sea?$"
