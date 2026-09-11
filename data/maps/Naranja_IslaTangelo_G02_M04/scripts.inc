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
	msgbox Naranja_IslaTangelo_G02_M04_Text_08174A8A, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M04_EventScript_Sub_08152FDB::
# 18 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M04_Text_08174ACB, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	release
	end


Naranja_IslaTangelo_G02_M04_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId3::
# 24 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	msgbox Naranja_IslaTangelo_G02_M04_Text_08174B10, MSGBOX_NPC
	end


Naranja_IslaTangelo_G02_M04_Text_08174A8A::
# 28 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	.string "The clerk says they’re all sold out.\nI can’t buy any POKé BALLS.$"

Naranja_IslaTangelo_G02_M04_Text_08174ACB::
# 32 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	.string "I’m going to buy a bunch of POKé BALLS\nand catch a bunch of POKéMON!$"

Naranja_IslaTangelo_G02_M04_Text_08174B10::
# 36 "data/maps/Naranja_IslaTangelo_G02_M04/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\nand faints, it won’t be able to battle.\pTo prevent your POKéMON from fainting,\nrestore its HP with a POTION.$"
