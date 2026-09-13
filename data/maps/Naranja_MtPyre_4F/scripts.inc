Naranja_MtPyre_4F_MapScripts::
	.byte 0


Naranja_MtPyre_4F_EventScript_BlackBelt::
# 8 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_190, Naranja_MtPyre_4F_Text_081968A6, Naranja_MtPyre_4F_Text_081968D0
# 9 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	msgbox Naranja_MtPyre_4F_Text_081968EE, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_4F_EventScript_ItemBall::
# 14 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	setorcopyvar VAR_0x8000, 0xDC
# 15 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	callstd 1
	end


Naranja_MtPyre_4F_Text_081968A6::
# 20 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	.string "Teacher...\nPlease watch over my progress!$"

Naranja_MtPyre_4F_Text_081968D0::
# 24 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	.string "Teacher...\nPlease forgive me!$"

Naranja_MtPyre_4F_Text_081968EE::
# 28 "data/maps/Naranja_MtPyre_4F/scripts.pory"
	.string "Until I improve, my teacher, who rests\nhere, will never find true peace...$"
