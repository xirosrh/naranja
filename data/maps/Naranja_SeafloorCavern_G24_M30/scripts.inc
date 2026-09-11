Naranja_SeafloorCavern_G24_M30_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SeafloorCavern_G24_M30_OnTransition
	.byte 0


Naranja_SeafloorCavern_G24_M30_OnTransition::
# 9 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_SeafloorCavern_G24_M30_EventScript_OBJECT_10_LocalId10::
# 14 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_SEAFLOOR_CAVERN_600, LOCALID_NONE, Naranja_SeafloorCavern_G24_M30_Text_081975DC, Naranja_SeafloorCavern_G24_M30_Text_081976F3
# 15 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M30_Text_08197704
# 16 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	callstd 6
	end


Naranja_SeafloorCavern_G24_M30_Text_081975DC::
# 20 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	.string "Ahahahaha!\pHow did you manage to get here without\na submarine?\lWhat an impressive child!\pBut... It won’t do to have you\nmeddling about here.\pAnd, I do want payback for what\nhappened at the WEATHER INSTITUTE...\pI’m going to give you a little taste\nof pain! Resign yourself to it!$"

Naranja_SeafloorCavern_G24_M30_Text_081976F3::
# 24 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	.string "Ahahahaha!\pOuch!$"

Naranja_SeafloorCavern_G24_M30_Text_08197704::
# 28 "data/maps/Naranja_SeafloorCavern_G24_M30/scripts.pory"
	.string "Ahahahaha!\nYou’re so darn strong.\pIt’s terribly disappointing that you’re\nnot a TEAM {AQUA} member.\pYou could have enjoyed the fabulous\nworld our BOSS has promised to one\lof our own...$"
