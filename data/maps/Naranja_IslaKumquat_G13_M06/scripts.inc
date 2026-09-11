Naranja_IslaKumquat_G13_M06_MapScripts::
# 5 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaKumquat_G13_M06_OnTransition
	.byte 0


Naranja_IslaKumquat_G13_M06_OnTransition::
# 9 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	setrespawn 8
	end


Naranja_IslaKumquat_G13_M06_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 14 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 16 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M06_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId2::
# 23 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M06_Text_08189FC9, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M06_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId3::
# 28 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	lock
# 29 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	faceplayer
# 30 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 31 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M06_EventScript_Sub_0815935D
# 32 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M06_Text_0818A048, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M06_EventScript_Sub_0815935D::
# 38 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M06_Text_0818A0A1, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M06_Text_08189FC9::
# 43 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	.string "I wonder how many kinds of POKéMON\nthere are in the world?\pIt’d be great to cross seas and\ntrade POKéMON with people far away.$"

Naranja_IslaKumquat_G13_M06_Text_0818A048::
# 47 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	.string "I’ve been hearing about some rotten\nscoundrels who steal POKéMON and rip\loff METEORITES.$"

Naranja_IslaKumquat_G13_M06_Text_0818A0A1::
# 51 "data/maps/Naranja_IslaKumquat_G13_M06/scripts.pory"
	.string "Those rotten scoundrels who steal\nPOKéMON and rip off METEORITES...\pI haven’t seen them around recently.$"
