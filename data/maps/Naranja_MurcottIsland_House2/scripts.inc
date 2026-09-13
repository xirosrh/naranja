Naranja_MurcottIsland_House2_MapScripts::
	.byte 0


Naranja_MurcottIsland_House2_EventScript_Man3::
# 8 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	msgbox Naranja_MurcottIsland_House2_Text_081804CF, MSGBOX_NPC
	end


Naranja_MurcottIsland_House2_EventScript_Girl3::
# 13 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	lock
# 14 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 16 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 17 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_House2_EventScript_Sub_081563B5
# 18 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	msgbox Naranja_MurcottIsland_House2_Text_08180567, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	release
	end


Naranja_MurcottIsland_House2_EventScript_Sub_081563B5::
# 24 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	msgbox Naranja_MurcottIsland_House2_Text_081805CD, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	release
	end


Naranja_MurcottIsland_House2_Text_081804CF::
# 29 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	.string "My POKéMON has a HASTY nature.\pIt has higher SPEED compared to my\nother POKéMON.\pMaybe their nature has something to\ndo with the stat gains of POKéMON.$"

Naranja_MurcottIsland_House2_Text_08180567::
# 33 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	.string "You need a CONTEST PASS to enter a\nCONTEST.\pIt’s easy to get. They give it to\nanyone who has POKéMON.$"

Naranja_MurcottIsland_House2_Text_081805CD::
# 37 "data/maps/Naranja_MurcottIsland_House2/scripts.pory"
	.string "Oh, a CONTEST PASS!\nYou’re going to be a contestant?$"
