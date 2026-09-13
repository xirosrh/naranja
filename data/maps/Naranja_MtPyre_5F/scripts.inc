Naranja_MtPyre_5F_MapScripts::
	.byte 0


Naranja_MtPyre_5F_EventScript_HexManiac::
# 8 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_109, Naranja_MtPyre_5F_Text_08196939, Naranja_MtPyre_5F_Text_08196997
# 9 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	msgbox Naranja_MtPyre_5F_Text_081969AC, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_5F_EventScript_ItemBall::
# 14 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	setorcopyvar VAR_0x8000, 0xDD
# 15 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	callstd 1
	end


Naranja_MtPyre_5F_Text_08196939::
# 20 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	.string "I love all things horrifying...\nIt’s like a disease...\pWhen I’m here...\nI shiver with fear...$"

Naranja_MtPyre_5F_Text_08196997::
# 24 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	.string "Losing, I dislike...$"

Naranja_MtPyre_5F_Text_081969AC::
# 28 "data/maps/Naranja_MtPyre_5F/scripts.pory"
	.string "I want to see dreadful things...\nI can’t leave...\pStay...\nWon’t you stay with me?$"
