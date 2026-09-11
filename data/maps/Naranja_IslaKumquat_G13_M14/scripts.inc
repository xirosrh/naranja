Naranja_IslaKumquat_G13_M14_MapScripts::
	.byte 0


Naranja_IslaKumquat_G13_M14_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId1::
# 8 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00EA
# 11 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M14_EventScript_Sub_08159BDA
# 12 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M14_Text_0818B83C, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14C
# 14 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	callstd 0
# 16 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 17 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 18 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00EA
# 19 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M14_Text_0818B883, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M14_EventScript_Sub_08159BDA::
# 25 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M14_Text_0818B883, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M14_Text_0818B83C::
# 30 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	.string "Huh? What? What’s that?\pI’m not near awake yet...\nYou can have this...$"

Naranja_IslaKumquat_G13_M14_Text_0818B883::
# 34 "data/maps/Naranja_IslaKumquat_G13_M14/scripts.pory"
	.string "Yawn...\pSleep is essential for good health...\nSleep and regain health...$"
