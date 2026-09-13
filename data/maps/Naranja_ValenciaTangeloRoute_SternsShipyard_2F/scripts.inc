Naranja_ValenciaTangeloRoute_SternsShipyard_2F_MapScripts::
	.byte 0


Naranja_ValenciaTangeloRoute_SternsShipyard_2F_EventScript_HexManiac::
# 8 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	msgbox Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_0817C7A2, MSGBOX_NPC
	end


Naranja_ValenciaTangeloRoute_SternsShipyard_2F_EventScript_FireCushion::
# 13 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	msgbox Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_0817C80C, MSGBOX_NPC
	end


Naranja_ValenciaTangeloRoute_SternsShipyard_2F_EventScript_Trigger_1::
# 18 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	lockall
# 19 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_VALENCIA_TANGELO_ROUTE_G07_M02_TRADER_2
# 20 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	nop
# 21 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	call_if EQUAL, Naranja_ColdPath_EventScript_Sub_086B7E7E
# 22 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	setflag FLAG_NARANJA_IVY_VILEPLUME_EVENT_STARTED
# 23 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	setweather 0xA
# 24 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	doweather
# 25 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	msgbox Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_086B3370, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	closemessage
# 27 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	applymovement LOCALID_NARANJA_VALENCIA_TANGELO_ROUTE_STERNS_SHIPYARD_2F_FIRE_CUSHION, Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Movement_086B336A
# 28 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	delay 0x10
# 29 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PalletTown_ProfessorOaksLab_Movement_0814E9FC
# 30 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	delay 0x50
# 31 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	releaseall
# 32 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	setweather 0
# 33 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	msgbox Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_086B3400, MSGBOX_AUTOCLOSE
# 34 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	nop
# 35 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	doweather
	end


# 39 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Movement_086B336A:
# 40 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	emote_question_mark
	step_end

Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_0817C7A2::
# 43 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	.string "Designing a large ship is more like\nmaking a big building than putting\ltogether a transportation vehicle.$"

Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_0817C80C::
# 47 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	.string "Don’t you think it’s strange that a\nship made of heavy iron floats?\pIt floats because of a principle\ncalled buoyancy.$"

Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_086B3370::
# 51 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	.string "{COLOR 0x0A}Ivy: ¡{PLAYER} no pases!\lTe intoxicarías con las esporas.\p¡Busca ayuda por favor!$"

Naranja_ValenciaTangeloRoute_SternsShipyard_2F_Text_086B3400::
# 55 "data/maps/Naranja_ValenciaTangeloRoute_SternsShipyard_2F/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Debo darme prisa!\nA Brock y a la profesora Ivy\lles ha paralizado un vileplume.\pTengo que encontrar un experto\nen curación pokemon…$"
