Naranja_ValnTang_G09_M01_MapScripts::
	.byte 0


Naranja_ValnTang_G09_M01_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId2::
# 8 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M01_Text_0817C7A2
# 9 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	callstd 2
	end


Naranja_ValnTang_G09_M01_EventScript_OBJ_EVENT_GFX_FIRE_CUSHION_LocalId3::
# 14 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M01_Text_0817C80C
# 15 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	callstd 2
	end


Naranja_ValnTang_G09_M01_EventScript_Trigger_1::
# 20 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	lockall
# 21 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	checkflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 22 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	nop
# 23 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 24 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 25 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	setweather 0xA
# 26 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	doweather
# 27 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M01_Text_086B3370
# 28 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	closemessage
# 30 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M01_FIRE_CUSHION, Naranja_ValnTang_G09_M01_Movement_086B336A
# 31 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	delay 0x10
# 32 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M04_Movement_0814E9FC
# 33 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	delay 0x50
# 34 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	releaseall
# 35 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	setweather 0
# 36 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M01_Text_086B3400
# 37 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	callstd 6
# 38 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	nop
# 39 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	doweather
	end


# 43 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
Naranja_ValnTang_G09_M01_Movement_086B336A:
# 44 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	emote_question_mark
	step_end

Naranja_ValnTang_G09_M01_Text_0817C7A2::
# 47 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "Designing a large ship is more like\nmaking a big building than putting\ltogether a transportation vehicle.$"

Naranja_ValnTang_G09_M01_Text_0817C80C::
# 51 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "Don’t you think it’s strange that a\nship made of heavy iron floats?\pIt floats because of a principle\ncalled buoyancy.$"

Naranja_ValnTang_G09_M01_Text_086B3370::
# 55 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "{COLOR 0x0A}Ivy: ¡{PLAYER} no pases!\lTe intoxicarías con las esporas.\p¡Busca ayuda por favor!$"

Naranja_ValnTang_G09_M01_Text_086B3400::
# 59 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Debo darme prisa!\nA Brock y a la profesora Ivy\lles ha paralizado un vileplume.\pTengo que encontrar un experto\nen curación pokemon…$"
