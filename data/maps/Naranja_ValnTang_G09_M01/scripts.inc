Naranja_ValnTang_G09_M01_MapScripts::
	.byte 0


Naranja_ValnTang_G09_M01_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId2::
# 8 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	msgbox Naranja_ValnTang_G09_M01_Text_0817C7A2, MSGBOX_NPC
	end


Naranja_ValnTang_G09_M01_EventScript_OBJ_EVENT_GFX_FIRE_CUSHION_LocalId3::
# 13 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	msgbox Naranja_ValnTang_G09_M01_Text_0817C80C, MSGBOX_NPC
	end


Naranja_ValnTang_G09_M01_EventScript_Trigger_1::
# 18 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	lockall
# 19 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	checkflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 20 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	nop
# 21 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 22 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	setflag FLAG_NARANJA_IVY_VILEPLUME_EVENT_STARTED
# 23 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	setweather 0xA
# 24 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	doweather
# 25 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	msgbox Naranja_ValnTang_G09_M01_Text_086B3370, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	closemessage
# 27 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M01_FIRE_CUSHION, Naranja_ValnTang_G09_M01_Movement_086B336A
# 28 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	delay 0x10
# 29 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G01_M04_Movement_0814E9FC
# 30 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	delay 0x50
# 31 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	releaseall
# 32 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	setweather 0
# 33 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	msgbox Naranja_ValnTang_G09_M01_Text_086B3400, MSGBOX_AUTOCLOSE
# 34 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	nop
# 35 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	doweather
	end


# 39 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
Naranja_ValnTang_G09_M01_Movement_086B336A:
# 40 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	emote_question_mark
	step_end

Naranja_ValnTang_G09_M01_Text_0817C7A2::
# 43 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "Designing a large ship is more like\nmaking a big building than putting\ltogether a transportation vehicle.$"

Naranja_ValnTang_G09_M01_Text_0817C80C::
# 47 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "Don’t you think it’s strange that a\nship made of heavy iron floats?\pIt floats because of a principle\ncalled buoyancy.$"

Naranja_ValnTang_G09_M01_Text_086B3370::
# 51 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "{COLOR 0x0A}Ivy: ¡{PLAYER} no pases!\lTe intoxicarías con las esporas.\p¡Busca ayuda por favor!$"

Naranja_ValnTang_G09_M01_Text_086B3400::
# 55 "data/maps/Naranja_ValnTang_G09_M01/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Debo darme prisa!\nA Brock y a la profesora Ivy\lles ha paralizado un vileplume.\pTengo que encontrar un experto\nen curación pokemon…$"
