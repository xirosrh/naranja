Naranja_IslaShamouti_G12_M02_MapScripts::
# 5 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaShamouti_G12_M02_OnTransition
	.byte 0


Naranja_IslaShamouti_G12_M02_OnTransition::
# 9 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	setrespawn 7
	end


Naranja_IslaShamouti_G12_M02_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 14 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 16 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M02_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 23 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M02_Text_08186027
# 24 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M02_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 29 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M02_Text_08186086
# 30 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M02_EventScript_OBJ_EVENT_GFX_BOY_3_LocalId4::
# 35 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M02_Text_08186138
# 36 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M02_Text_08186027::
# 40 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	.string "Listen, kid, are you working\non a POKéDEX?\pHmm... Go to the SAFARI ZONE.\nThat’s my suggestion.$"

Naranja_IslaShamouti_G12_M02_Text_08186086::
# 44 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	.string "Have you done anything at the\nRECORD CORNER?\pIt’s pretty neat. It mixes and matches\nthe records of TRAINERS.\pI don’t know quite how it works,\nbut it’s cool. It’s exciting, even!$"

Naranja_IslaShamouti_G12_M02_Text_08186138::
# 48 "data/maps/Naranja_IslaShamouti_G12_M02/scripts.pory"
	.string "Hey, you’ve got a POKéNAV!\nIt’s the same as mine.\pCheck out the TRAINER’S EYES on it.\pIt shows you TRAINERS who want a\nrematch with you.\pIsn’t it great?\nYou have to hand it to DEVON!$"
