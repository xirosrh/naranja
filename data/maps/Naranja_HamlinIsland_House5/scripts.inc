Naranja_HamlinIsland_House5_MapScripts::
	.byte 0


Naranja_HamlinIsland_House5_EventScript_OldMan1::
# 8 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	lock
# 9 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 11 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 12 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	goto_if EQUAL, Naranja_HamlinIsland_House5_EventScript_Sub_081543B0
# 13 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	msgbox Naranja_HamlinIsland_House5_Text_08179718, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	release
	end


Naranja_HamlinIsland_House5_EventScript_Sub_081543B0::
# 19 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	msgbox Naranja_HamlinIsland_House5_Text_0817973B, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	release
	end


Naranja_HamlinIsland_House5_EventScript_Gentleman::
# 25 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	msgbox Naranja_HamlinIsland_House5_Text_08179765, MSGBOX_NPC
	end


Naranja_HamlinIsland_House5_Text_08179718::
# 29 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	.string "I can’t see MIRAGE ISLAND today...$"

Naranja_HamlinIsland_House5_Text_0817973B::
# 33 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	.string "Oh! Oh my!\nI can see MIRAGE ISLAND today!$"

Naranja_HamlinIsland_House5_Text_08179765::
# 37 "data/maps/Naranja_HamlinIsland_House5/scripts.pory"
	.string "MIRAGE ISLAND...\pIt must become visible and invisible\ndepending on the weather conditions\lthat make mirages appear.\pOr is it really appearing and\ndisappearing?$"
