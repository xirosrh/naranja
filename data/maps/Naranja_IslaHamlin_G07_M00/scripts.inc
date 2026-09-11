Naranja_IslaHamlin_G07_M00_MapScripts::
# 5 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaHamlin_G07_M00_OnTransition
	.byte 0


Naranja_IslaHamlin_G07_M00_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 9 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	setvar VAR_0x800B, 1
# 10 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 11 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	waitbuttonpress
# 13 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	release
	end


Naranja_IslaHamlin_G07_M00_OnTransition::
# 18 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	setrespawn 0x13
	end


Naranja_IslaHamlin_G07_M00_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId3::
# 23 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M00_Text_08178E47
# 24 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaHamlin_G07_M00_EventScript_OBJ_EVENT_GFX_WOMAN_1_LocalId4::
# 29 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M00_Text_08178E79
# 30 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaHamlin_G07_M00_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId2::
# 35 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	loadword 0, Naranja_IslaHamlin_G07_M00_Text_08178ED9
# 36 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaHamlin_G07_M00_Text_08178E47::
# 40 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	.string "What color is your TRAINER’S CARD?\nMine’s copper!$"

Naranja_IslaHamlin_G07_M00_Text_08178E79::
# 44 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	.string "PACIFIDLOG TOWN floats on top of\na colony of CORSOLA.\pIf I told you that, would you believe me?$"

Naranja_IslaHamlin_G07_M00_Text_08178ED9::
# 48 "data/maps/Naranja_IslaHamlin_G07_M00/scripts.pory"
	.string "The ancestors of the people in\nPACIFIDLOG were said to have been\lborn on boats and then lived and died \laboard them.\pI understand that they lived that way\nbecause they were searching for\lsomething.$"
