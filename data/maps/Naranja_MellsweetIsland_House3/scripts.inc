Naranja_MellsweetIsland_House3_MapScripts::
	.byte 0


Naranja_MellsweetIsland_House3_EventScript_Fisherman::
# 8 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	lock
# 9 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	checkflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_0098
# 11 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_MellsweetIsland_House3_EventScript_Sub_0815A9B1
# 12 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	msgbox Naranja_MellsweetIsland_House3_Text_0818D909, MSGBOX_YESNO
# 13 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_MellsweetIsland_House3_EventScript_Sub_0815A9BB
# 15 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	msgbox Naranja_MellsweetIsland_House3_Text_0818D9A9, MSGBOX_DEFAULT
# 16 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	setorcopyvar VAR_0x8000, 0x108
# 17 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 18 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	callstd 0
# 19 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	setflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_0098
# 20 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	msgbox Naranja_MellsweetIsland_House3_Text_0818D9E3, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	release
	end


Naranja_MellsweetIsland_House3_EventScript_Sub_0815A9B1::
# 26 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	msgbox Naranja_MellsweetIsland_House3_Text_0818DA44, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	release
	end


Naranja_MellsweetIsland_House3_EventScript_Sub_0815A9BB::
# 32 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	msgbox Naranja_MellsweetIsland_House3_Text_0818DA26, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	release
	end


Naranja_MellsweetIsland_House3_Text_0818D909::
# 37 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	.string "Hey there, TRAINER!\nA SUPER ROD really is super!\pSay all you want, but this baby can\ncatch POKéMON off the seafloor!\pWhat do you think?\nYou want it, don’t you?$"

Naranja_MellsweetIsland_House3_Text_0818D9A9::
# 41 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	.string "You bet, you bet!\nAfter all, a SUPER ROD is really super!$"

Naranja_MellsweetIsland_House3_Text_0818D9E3::
# 45 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	.string "If there’s any water, try dropping in\nyour ROD and see what bites!$"

Naranja_MellsweetIsland_House3_Text_0818DA26::
# 49 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	.string "Hunh?\nDon’t you like to fish?$"

Naranja_MellsweetIsland_House3_Text_0818DA44::
# 53 "data/maps/Naranja_MellsweetIsland_House3/scripts.pory"
	.string "Go after the seafloor POKéMON with\nyour SUPER ROD.$"
