Naranja_IslaMandarin_G10_M04_MapScripts::
	.byte 0


Naranja_IslaMandarin_G10_M04_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId1::
# 8 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0102
# 11 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M04_EventScript_Sub_0815733D
# 12 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M04_Text_0818244E
# 13 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	checkitem ITEM_HARBOR_MAIL, 1
# 15 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 16 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M04_EventScript_Sub_081572E5
# 17 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M04_EventScript_Sub_081572E5::
# 22 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	playse SE_PIN
# 23 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 24 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 26 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 27 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M04_Text_081824D8
# 28 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	callstd 5
# 29 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 30 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M04_EventScript_Sub_0815731B
# 31 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 32 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M04_EventScript_Sub_08157347
	end


Naranja_IslaMandarin_G10_M04_EventScript_Sub_0815731B::
# 37 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M04_Text_08182515
# 38 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	removeitem ITEM_HARBOR_MAIL, 1
# 40 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x104
# 41 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 42 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	callstd 0
# 43 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0102
# 44 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	goto Naranja_IslaMandarin_G10_M04_EventScript_Sub_0815733D
	return


Naranja_IslaMandarin_G10_M04_EventScript_Sub_0815733D::
# 48 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M04_Text_08182549
# 49 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M04_EventScript_Sub_08157347::
# 55 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M04_Text_08182578
# 56 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	callstd 4
# 57 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M04_Text_0818244E::
# 61 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	.string "If I had a BIKE, it’d be easy to cycle to\nSLATEPORT for some shopping.\pI’d be able to buy HARBOR MAIL at the\nPOKéMON MART in SLATEPORT...$"

Naranja_IslaMandarin_G10_M04_Text_081824D8::
# 65 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	.string "Oh! You have HARBOR MAIL?\nWill you trade it for a COIN CASE?$"

Naranja_IslaMandarin_G10_M04_Text_08182515::
# 69 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	.string "Oh, I’m so happy!\nOkay, I’ll trade you a COIN CASE!$"

Naranja_IslaMandarin_G10_M04_Text_08182549::
# 73 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	.string "That COIN CASE can be used at the\nGAME CORNER.$"

Naranja_IslaMandarin_G10_M04_Text_08182578::
# 77 "data/maps/Naranja_IslaMandarin_G10_M04/scripts.pory"
	.string "Oh, that’s disappointing.\pA COIN CASE is needed for the\nGAME CORNER.$"
