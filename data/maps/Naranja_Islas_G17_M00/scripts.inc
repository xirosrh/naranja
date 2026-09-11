Naranja_Islas_G17_M00_MapScripts::
# 5 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Islas_G17_M00_OnTransition
	.byte 0


Naranja_Islas_G17_M00_OnTransition::
# 9 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_083D
# 10 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLAS_EVENT_STATE_2, 1
# 11 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BCD4
# 12 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 13 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	call_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BCD0
	end


Naranja_Islas_G17_M00_EventScript_Sub_0815BCD0::
# 18 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setflag FLAG_HIDE_ISLA_TROVITA_G00_M03_VARS
	return


Naranja_Islas_G17_M00_EventScript_Sub_0815BCD4::
# 23 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setobjectxyperm LOCALID_ISLAS_G17_M00_OLD_MAN_1, 9, 3
# 24 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setobjectmovementtype LOCALID_ISLAS_G17_M00_OLD_MAN_1, 0x32
# 25 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setobjectxyperm LOCALID_ISLAS_G17_M00_WINGULL, 9, 6
# 26 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setobjectmovementtype LOCALID_ISLAS_G17_M00_WINGULL, 0x33
	return


Naranja_Islas_G17_M00_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 31 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	lock
# 32 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	faceplayer
# 33 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_0093
# 34 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	call_if LESS_THAN, Naranja_Islas_G17_M00_EventScript_Sub_0815BD0E
# 35 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 36 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G17_M00_EventScript_Sub_0815BD65
# 37 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 38 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G17_M00_EventScript_Sub_0815BD7E
# 39 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto Naranja_Islas_G17_M00_EventScript_Sub_0815BD32
	return


Naranja_Islas_G17_M00_EventScript_Sub_0815BD0E::
# 43 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_0093
# 44 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191A82
# 45 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191AAD
# 47 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 5
# 48 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 49 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BD97
# 50 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto Naranja_Islas_G17_M00_EventScript_Sub_0815BDAB
	return


Naranja_Islas_G17_M00_EventScript_Sub_0815BD32::
# 54 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	message Naranja_Islas_G17_M00_Text_08191E80
# 55 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	waitmessage
# 56 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	multichoicedefault 0x15, 8, 0xE, 1, 0
# 57 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 58 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 59 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BDAB
# 60 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 61 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BDA1
# 62 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 63 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BDA1
	end


Naranja_Islas_G17_M00_EventScript_Sub_0815BD65::
# 68 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191CC3
# 69 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 5
# 70 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 71 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BD97
# 72 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto Naranja_Islas_G17_M00_EventScript_Sub_0815BDAB
	return


Naranja_Islas_G17_M00_EventScript_Sub_0815BD7E::
# 76 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191DA6
# 77 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 5
# 78 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 79 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G17_M00_EventScript_Sub_0815BD97
# 80 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	goto Naranja_Islas_G17_M00_EventScript_Sub_0815BDAB
	return


Naranja_Islas_G17_M00_EventScript_Sub_0815BD97::
# 84 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191C57
# 85 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 4
# 86 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	release
	end


Naranja_Islas_G17_M00_EventScript_Sub_0815BDA1::
# 91 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191EDB
# 92 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 4
# 93 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	release
	end


Naranja_Islas_G17_M00_EventScript_Sub_0815BDAB::
# 98 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	loadword 0, Naranja_Islas_G17_M00_Text_08191BFD
# 99 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A010C
# 101 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setvar VAR_NARANJA_ISLAS_STORY_STATE, 1
# 102 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MIKAN_G00_M20_OLD_MAN_1
# 103 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 104 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 105 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	warp MAP_NARANJA_ISLAS_G00_M19, 0xFF, 0xD, 0x33
# 106 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	waitstate
# 107 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	releaseall
	end


Naranja_Islas_G17_M00_Text_08191A82::
# 111 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: Hold on, lass!\nWait up, PEEKO!$"

Naranja_Islas_G17_M00_Text_08191AAD::
# 115 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "Hm? You’re {PLAYER}{KUN}!\nYou saved my darling PEEKO!\lWe owe so much to you!\pWhat’s that?\nYou want to sail with me?\pHmhm...\pYou have a LETTER bound for DEWFORD\nand a package for SLATEPORT, then?\pQuite the busy life you must lead!\pBut, certainly, what you’re asking is\nno problem at all.\pYou’ve come to the right man!\nWe’ll set sail for DEWFORD.$"

Naranja_Islas_G17_M00_Text_08191BFD::
# 119 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: DEWFORD, here we come!\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_Islas_G17_M00_Text_08191C57::
# 123 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: Is that so?\nYour deliveries can wait?\pYou just go on and tell me whenever\nyou want to set sail!$"

Naranja_Islas_G17_M00_Text_08191CC3::
# 127 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nI know exactly what you want to say!\pYou’re to deliver a LETTER to DEWFORD\nand a package to SLATEPORT.\pWhat you need me to do is no problem\nat all - I’m the man for the job!\pFirst, we’ll set sail for DEWFORD.$"

Naranja_Islas_G17_M00_Text_08191DA6::
# 131 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nI know exactly what you want to say!\pYou’re to deliver a package to\nCAPT. STERN in SLATEPORT.\pWhat you need me to do is no problem\nat all - I’m the man for the job!\pFirst, we’ll set sail for DEWFORD.$"

Naranja_Islas_G17_M00_Text_08191E80::
# 135 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nFor you, I’ll go out to sea anytime!\pNow, my friend, where are we bound?$"

Naranja_Islas_G17_M00_Text_08191EDB::
# 139 "data/maps/Naranja_Islas_G17_M00/scripts.pory"
	.string "MR. BRINEY: Is that so?\nWell, PEEKO owes her life to you.\pYou just go on and tell me whenever\nyou want to set sail!$"
