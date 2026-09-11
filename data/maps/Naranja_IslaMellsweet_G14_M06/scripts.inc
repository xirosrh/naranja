Naranja_IslaMellsweet_G14_M06_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M06_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0098
# 11 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M06_EventScript_Sub_0815A9B1
# 12 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M06_Text_0818D909
# 13 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	callstd 5
# 14 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 15 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M06_EventScript_Sub_0815A9BB
# 16 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M06_Text_0818D9A9
# 17 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	callstd 4
# 18 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	setorcopyvar VAR_0x8000, 0x108
# 19 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	callstd 0
# 21 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0098
# 22 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M06_Text_0818D9E3
# 23 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	callstd 4
# 24 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M06_EventScript_Sub_0815A9B1::
# 29 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M06_Text_0818DA44
# 30 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	callstd 4
# 31 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M06_EventScript_Sub_0815A9BB::
# 36 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M06_Text_0818DA26
# 37 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M06_Text_0818D909::
# 42 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	.string "Hey there, TRAINER!\nA SUPER ROD really is super!\pSay all you want, but this baby can\ncatch POKéMON off the seafloor!\pWhat do you think?\nYou want it, don’t you?$"

Naranja_IslaMellsweet_G14_M06_Text_0818D9A9::
# 46 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	.string "You bet, you bet!\nAfter all, a SUPER ROD is really super!$"

Naranja_IslaMellsweet_G14_M06_Text_0818D9E3::
# 50 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	.string "If there’s any water, try dropping in\nyour ROD and see what bites!$"

Naranja_IslaMellsweet_G14_M06_Text_0818DA26::
# 54 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	.string "Hunh?\nDon’t you like to fish?$"

Naranja_IslaMellsweet_G14_M06_Text_0818DA44::
# 58 "data/maps/Naranja_IslaMellsweet_G14_M06/scripts.pory"
	.string "Go after the seafloor POKéMON with\nyour SUPER ROD.$"
