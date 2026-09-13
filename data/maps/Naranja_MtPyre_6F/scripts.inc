Naranja_MtPyre_6F_MapScripts::
	.byte 0


Naranja_MtPyre_6F_EventScript_HexManiac::
# 8 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_108, Naranja_MtPyre_6F_Text_081969FE, Naranja_MtPyre_6F_Text_08196A30
# 9 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 10 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 11 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_6F_EventScript_Sub_0815D46F
# 12 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	msgbox Naranja_MtPyre_6F_Text_08196A4C, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_6F_EventScript_Sub_0815D46F::
# 17 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_BEMENTER_108, Naranja_MtPyre_6F_Text_08196A95, Naranja_MtPyre_6F_Text_08196AB1
# 18 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	msgbox Naranja_MtPyre_6F_Text_08196AC9, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_6F_EventScript_ItemBall::
# 23 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13E
# 24 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 25 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	callstd 1
	end


Naranja_MtPyre_6F_Text_081969FE::
# 29 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	.string "When I’m here...\nA curious power flows into me...$"

Naranja_MtPyre_6F_Text_08196A30::
# 33 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	.string "The power is ebbing away...$"

Naranja_MtPyre_6F_Text_08196A4C::
# 37 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\nof POKéMON in fitful sleep here...$"

Naranja_MtPyre_6F_Text_08196A95::
# 41 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	.string "Behind you...\nWhat is it...$"

Naranja_MtPyre_6F_Text_08196AB1::
# 45 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	.string "Something faded away...$"

Naranja_MtPyre_6F_Text_08196AC9::
# 49 "data/maps/Naranja_MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here...\nSometimes, they play...$"
