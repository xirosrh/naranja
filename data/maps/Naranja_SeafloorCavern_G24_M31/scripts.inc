Naranja_SeafloorCavern_G24_M31_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SeafloorCavern_G24_M31_OnTransition
	.byte 0


Naranja_SeafloorCavern_G24_M31_OnTransition::
# 9 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_SeafloorCavern_G24_M31_EventScript_OBJECT_1_LocalId1::
# 14 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SEAFLOOR_CAVERN_573, Naranja_SeafloorCavern_G24_M31_Text_081977B9, Naranja_SeafloorCavern_G24_M31_Text_081977E2
# 15 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M31_Text_081977ED, MSGBOX_AUTOCLOSE
	end


Naranja_SeafloorCavern_G24_M31_Text_081977B9::
# 19 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	.string "Who are you?\nWhere did you come in from?$"

Naranja_SeafloorCavern_G24_M31_Text_081977E2::
# 23 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	.string "Lost it...$"

Naranja_SeafloorCavern_G24_M31_Text_081977ED::
# 27 "data/maps/Naranja_SeafloorCavern_G24_M31/scripts.pory"
	.string "I can’t find the way out!\pI’m not afraid. Don’t get me wrong!$"
