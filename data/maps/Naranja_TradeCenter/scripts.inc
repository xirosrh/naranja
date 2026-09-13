Naranja_TradeCenter_MapScripts::
	.byte 0


Naranja_TradeCenter_EventScript_Trigger_1::
# 8 "data/maps/Naranja_TradeCenter/scripts.pory"
	setvar VAR_0x8005, 0
# 9 "data/maps/Naranja_TradeCenter/scripts.pory"
	special PlayerEnteredTradeSeat
# 10 "data/maps/Naranja_TradeCenter/scripts.pory"
	waitstate
	end


Naranja_TradeCenter_EventScript_Trigger_2::
# 15 "data/maps/Naranja_TradeCenter/scripts.pory"
	setvar VAR_0x8005, 1
# 16 "data/maps/Naranja_TradeCenter/scripts.pory"
	special PlayerEnteredTradeSeat
# 17 "data/maps/Naranja_TradeCenter/scripts.pory"
	waitstate
	end


Naranja_TradeCenter_EventScript_Woman6::
# 22 "data/maps/Naranja_TradeCenter/scripts.pory"
	special Script_FacePlayer
# 23 "data/maps/Naranja_TradeCenter/scripts.pory"
	message Naranja_TradeCenter_Text_081A4DAB
# 24 "data/maps/Naranja_TradeCenter/scripts.pory"
	waitmessage
# 25 "data/maps/Naranja_TradeCenter/scripts.pory"
	waitbuttonpress
# 26 "data/maps/Naranja_TradeCenter/scripts.pory"
	special Script_ClearHeldMovement
# 27 "data/maps/Naranja_TradeCenter/scripts.pory"
	closemessage
	end


Naranja_TradeCenter_Text_081A4DAB::
# 31 "data/maps/Naranja_TradeCenter/scripts.pory"
	.string "Please take your seat and start\nyour trade.$"
