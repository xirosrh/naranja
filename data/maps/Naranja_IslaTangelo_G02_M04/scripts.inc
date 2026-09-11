Naranja_IslaTangelo_G02_M04_MapScripts::
	.byte 0


Naranja_IslaTangelo_G02_M04_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 8 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TANGELO_EVENT_COMPLETE_0074
# 11 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTangelo_G02_M04_EventScript_Sub_08152FDB
# 12 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G02_M04_Text_08174A8A
# 13 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M04_EventScript_Sub_08152FDB::
# 19 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G02_M04_Text_08174ACB
# 20 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	callstd 4
# 21 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M04_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId3::
# 26 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	loadword 0, Naranja_IslaTangelo_G02_M04_Text_08174B10
# 27 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaTangelo_G02_M04_Text_08174A8A::
# 31 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	.string "The clerk says they’re all sold out.\nI can’t buy any POKé BALLS.$"

Naranja_IslaTangelo_G02_M04_Text_08174ACB::
# 35 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	.string "I’m going to buy a bunch of POKé BALLS\nand catch a bunch of POKéMON!$"

Naranja_IslaTangelo_G02_M04_Text_08174B10::
# 39 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\nand faints, it won’t be able to battle.\pTo prevent your POKéMON from fainting,\nrestore its HP with a POTION.$"
