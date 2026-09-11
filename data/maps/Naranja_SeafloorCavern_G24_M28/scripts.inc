Naranja_SeafloorCavern_G24_M28_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SeafloorCavern_G24_M28_OnTransition
	.byte 0


Naranja_SeafloorCavern_G24_M28_OnTransition::
# 9 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_SeafloorCavern_G24_M28_EventScript_OBJECT_4_LocalId4::
# 14 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SEAFLOOR_CAVERN_571, LOCALID_NONE, Naranja_SeafloorCavern_G24_M28_Text_081974BA, Naranja_SeafloorCavern_G24_M28_Text_081974EA
# 15 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M28_Text_081974FF, MSGBOX_AUTOCLOSE
	end


Naranja_SeafloorCavern_G24_M28_EventScript_OBJECT_5_LocalId5::
# 20 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SEAFLOOR_CAVERN_572, LOCALID_NONE, Naranja_SeafloorCavern_G24_M28_Text_0819753C, Naranja_SeafloorCavern_G24_M28_Text_08197573
# 21 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M28_Text_08197589, MSGBOX_AUTOCLOSE
	end


Naranja_SeafloorCavern_G24_M28_Text_081974BA::
# 25 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	.string "We don’t need a kid around!\nGo on home already!$"

Naranja_SeafloorCavern_G24_M28_Text_081974EA::
# 29 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	.string "I want to go home...$"

Naranja_SeafloorCavern_G24_M28_Text_081974FF::
# 33 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	.string "I want to get a promotion so I can\nboss around the GRUNTS...$"

Naranja_SeafloorCavern_G24_M28_Text_0819753C::
# 37 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	.string "That submarine... It’s tiny inside.\nI’m sore all over!$"

Naranja_SeafloorCavern_G24_M28_Text_08197573::
# 41 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	.string "Losing makes me sore!$"

Naranja_SeafloorCavern_G24_M28_Text_08197589::
# 45 "data/maps/Naranja_SeafloorCavern_G24_M28/scripts.pory"
	.string "That submarine we jacked, man, it’s\nbrutal as a ride.\lIt’s way too tight in there!$"
