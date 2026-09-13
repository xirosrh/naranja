Naranja_NewIsland_House2_MapScripts::
	.byte 0


Naranja_NewIsland_House2_EventScript_OldWoman1::
# 8 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	lock
# 9 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	msgbox Naranja_NewIsland_House2_Text_0818FA66, MSGBOX_YESNO
# 11 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 12 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	call_if EQUAL, Naranja_NewIsland_House2_EventScript_Sub_0815B307
# 13 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	call_if EQUAL, Naranja_NewIsland_House2_EventScript_Sub_0815B310
# 15 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	release
	end


Naranja_NewIsland_House2_EventScript_Sub_0815B307::
# 20 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	msgbox Naranja_NewIsland_House2_Text_0818FAAE, MSGBOX_DEFAULT
	return


Naranja_NewIsland_House2_EventScript_Sub_0815B310::
# 25 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	msgbox Naranja_NewIsland_House2_Text_0818FB04, MSGBOX_DEFAULT
	return


Naranja_NewIsland_House2_Text_0818FA66::
# 29 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	.string "MT. PYRE...\pAt its peak are two orbs placed side\nby side. Did you know?$"

Naranja_NewIsland_House2_Text_0818FAAE::
# 33 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	.string "Yes, two orbs side by side...\pThe sight of them together...\nIt is somehow soothing...$"

Naranja_NewIsland_House2_Text_0818FB04::
# 37 "data/maps/Naranja_NewIsland_House2/scripts.pory"
	.string "Is that so?\nPerhaps you ought to visit and see...$"
