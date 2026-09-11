Naranja_IslaHamlin_G07_M05_MapScripts::
	.byte 0


Naranja_IslaHamlin_G07_M05_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId2::
# 8 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M05_Text_0817961F
# 9 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaHamlin_G07_M05_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 14 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M05_Text_0817959B
# 15 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaHamlin_G07_M05_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId3::
# 20 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M05_Text_0817963D
# 23 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	callstd 5
# 24 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 25 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M05_EventScript_Sub_0815437F
# 26 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 27 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M05_EventScript_Sub_08154389
	end


Naranja_IslaHamlin_G07_M05_EventScript_Sub_0815437F::
# 32 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M05_Text_08179656
# 33 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M05_EventScript_Sub_08154389::
# 39 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M05_Text_0817968C
# 40 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M05_Text_0817959B::
# 45 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "People were saying they saw a POKéMON\nFLYING high above HOENN.\pIs it FLYING around all the time?\nDoesn’t it need to rest somewhere?$"

Naranja_IslaHamlin_G07_M05_Text_0817961F::
# 49 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "A sky POKéMON!\nA sky POKéMON!$"

Naranja_IslaHamlin_G07_M05_Text_0817963D::
# 53 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "Where did you come from?$"

Naranja_IslaHamlin_G07_M05_Text_08179656::
# 57 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "Yes?\nYES TOWN?\pI’ve never heard of a place like that.$"

Naranja_IslaHamlin_G07_M05_Text_0817968C::
# 61 "data/maps/Naranja_IslaHamlin_G07_M05/scripts.pory"
	.string "No? That doesn’t make any sense.\nYou have to come from somewhere.\pOh! Wait! You’re not going to say you\nwere born at the bottom of the sea?$"
