Naranja_OrangeIslands_MrBrineysHouse_MapScripts::
# 5 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_OrangeIslands_MrBrineysHouse_OnTransition
	.byte 0


Naranja_OrangeIslands_MrBrineysHouse_OnTransition::
# 9 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_083D
# 10 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_NARANJA_CRYSTAL_ONIX_GUIDE_POSITION_STATE, 1
# 11 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	call_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BCD4
# 12 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MIKAN_ISLAND_G00_M20_WALLY
# 13 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	call_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BCD0
	end


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BCD0::
# 18 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_NARANJA_TROVITA_ISLAND_G00_M03_VARS
	return


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BCD4::
# 23 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ORANGE_ISLANDS_MR_BRINEYS_HOUSE_OLD_MAN_1, 9, 3
# 24 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ORANGE_ISLANDS_MR_BRINEYS_HOUSE_OLD_MAN_1, 0x32
# 25 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_ORANGE_ISLANDS_MR_BRINEYS_HOUSE_WINGULL, 9, 6
# 26 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_NARANJA_ORANGE_ISLANDS_MR_BRINEYS_HOUSE_WINGULL, 0x33
	return


Naranja_OrangeIslands_MrBrineysHouse_EventScript_OldMan1::
# 31 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	lock
# 32 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	faceplayer
# 33 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	checkflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_0093
# 34 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	call_if LESS_THAN, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD0E
# 35 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	checkflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_00BD
# 36 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD65
# 37 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 38 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD7E
# 39 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD32
	return


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD0E::
# 43 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_0093
# 44 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191A82, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191AAD, MSGBOX_YESNO
# 46 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 47 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD97
# 48 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDAB
	return


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD32::
# 52 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	message Naranja_OrangeIslands_MrBrineysHouse_Text_08191E80
# 53 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	waitmessage
# 54 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	multichoicedefault 0x15, 8, 0xE, 1, 0
# 55 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 56 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 57 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDAB
# 58 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 59 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDA1
# 60 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 61 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDA1
	end


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD65::
# 66 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191CC3, MSGBOX_YESNO
# 67 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 68 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD97
# 69 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDAB
	return


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD7E::
# 73 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191DA6, MSGBOX_YESNO
# 74 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 75 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto_if EQUAL, Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD97
# 76 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	goto Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDAB
	return


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BD97::
# 80 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191C57, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	release
	end


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDA1::
# 86 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191EDB, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	release
	end


Naranja_OrangeIslands_MrBrineysHouse_EventScript_Sub_0815BDAB::
# 92 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	msgbox Naranja_OrangeIslands_MrBrineysHouse_Text_08191BFD, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A010C
# 94 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setvar VAR_NARANJA_ORANGE_ISLANDS_STORY_STATE, 1
# 95 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MIKAN_ISLAND_G00_M20_OLD_MAN_1
# 96 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_NARANJA_ORANGE_ISLANDS_G17_M00_OLD_MAN_1
# 97 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_NARANJA_ORANGE_ISLANDS_G17_M00_WINGULL
# 98 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	warp MAP_NARANJA_ORANGE_ISLANDS, 0xFF, 0xD, 0x33
# 99 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	waitstate
# 100 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	releaseall
	end


Naranja_OrangeIslands_MrBrineysHouse_Text_08191A82::
# 104 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Hold on, lass!\nWait up, PEEKO!$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191AAD::
# 108 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "Hm? You’re {PLAYER}{KUN}!\nYou saved my darling PEEKO!\lWe owe so much to you!\pWhat’s that?\nYou want to sail with me?\pHmhm...\pYou have a LETTER bound for DEWFORD\nand a package for SLATEPORT, then?\pQuite the busy life you must lead!\pBut, certainly, what you’re asking is\nno problem at all.\pYou’ve come to the right man!\nWe’ll set sail for DEWFORD.$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191BFD::
# 112 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: DEWFORD, here we come!\pAnchors aweigh!\nPEEKO, we’re setting sail, my darling!$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191C57::
# 116 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\nYour deliveries can wait?\pYou just go on and tell me whenever\nyou want to set sail!$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191CC3::
# 120 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nI know exactly what you want to say!\pYou’re to deliver a LETTER to DEWFORD\nand a package to SLATEPORT.\pWhat you need me to do is no problem\nat all - I’m the man for the job!\pFirst, we’ll set sail for DEWFORD.$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191DA6::
# 124 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nI know exactly what you want to say!\pYou’re to deliver a package to\nCAPT. STERN in SLATEPORT.\pWhat you need me to do is no problem\nat all - I’m the man for the job!\pFirst, we’ll set sail for DEWFORD.$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191E80::
# 128 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\nFor you, I’ll go out to sea anytime!\pNow, my friend, where are we bound?$"

Naranja_OrangeIslands_MrBrineysHouse_Text_08191EDB::
# 132 "data/maps/Naranja_OrangeIslands_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\nWell, PEEKO owes her life to you.\pYou just go on and tell me whenever\nyou want to set sail!$"
