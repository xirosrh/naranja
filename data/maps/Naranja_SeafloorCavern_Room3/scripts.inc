Naranja_SeafloorCavern_Room3_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SeafloorCavern_Room3_OnTransition
	.byte 0


Naranja_SeafloorCavern_Room3_OnTransition::
# 9 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_SeafloorCavern_Room3_EventScript_Object10::
# 14 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SEAFLOOR_CAVERN_600, Naranja_SeafloorCavern_Room3_Text_081975DC, Naranja_SeafloorCavern_Room3_Text_081976F3
# 15 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	msgbox Naranja_SeafloorCavern_Room3_Text_08197704, MSGBOX_AUTOCLOSE
	end


Naranja_SeafloorCavern_Room3_Text_081975DC::
# 19 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\pHow did you manage to get here without\na submarine?\lWhat an impressive child!\pBut... It won’t do to have you\nmeddling about here.\pAnd, I do want payback for what\nhappened at the WEATHER INSTITUTE...\pI’m going to give you a little taste\nof pain! Resign yourself to it!$"

Naranja_SeafloorCavern_Room3_Text_081976F3::
# 23 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\pOuch!$"

Naranja_SeafloorCavern_Room3_Text_08197704::
# 27 "data/maps/Naranja_SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\nYou’re so darn strong.\pIt’s terribly disappointing that you’re\nnot a TEAM {AQUA} member.\pYou could have enjoyed the fabulous\nworld our BOSS has promised to one\lof our own...$"
