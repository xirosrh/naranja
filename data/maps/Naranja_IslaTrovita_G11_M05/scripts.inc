Naranja_IslaTrovita_G11_M05_MapScripts::
# 5 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTrovita_G11_M05_OnTransition
	.byte 0


Naranja_IslaTrovita_G11_M05_OnTransition::
# 9 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	setrespawn 6
# 10 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_IslaTrovita_G11_M05_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 15 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M05_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId2::
# 24 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M05_Text_08184B37, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M05_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId3::
# 29 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M05_Text_08184BAB, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M05_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId4::
# 34 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M05_Text_08184C19, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M05_Text_08184B37::
# 38 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\nfriend’s has a JOLLY nature.\pIt’s fascinating how POKéMON have\npersonalities!$"

Naranja_IslaTrovita_G11_M05_Text_08184BAB::
# 42 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	.string "Just like people, there are male and\nfemale POKéMON.\pBut no one seems to have any idea how\nthey’re different.$"

Naranja_IslaTrovita_G11_M05_Text_08184C19::
# 46 "data/maps/Naranja_IslaTrovita_G11_M05/scripts.pory"
	.string "The man next door gave me an HM!\pI used it to teach my POKéMON how to\nCUT down skinny trees.$"
