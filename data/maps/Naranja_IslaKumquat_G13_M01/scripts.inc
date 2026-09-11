Naranja_IslaKumquat_G13_M01_MapScripts::
	.byte 0


Naranja_IslaKumquat_G13_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 8 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	checkflag FLAG_TEMP_2
# 11 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	call_if LESS_THAN, Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583C7
# 12 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	checkflag FLAG_TEMP_2
# 13 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583DD
# 14 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 15 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 16 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583D0
# 17 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583C7::
# 22 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M01_Text_08186FE7, MSGBOX_DEFAULT
	return


Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583D0::
# 27 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	waitfanfare
# 30 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	goto Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583DD
	return


Naranja_IslaKumquat_G13_M01_EventScript_Sub_081583DD::
# 34 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	message Naranja_IslaKumquat_G13_M01_Text_0818708F
# 35 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	waitmessage
# 36 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 37 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	special Special_ShowDiploma
# 38 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	waitstate
# 39 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M01_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId4::
# 44 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M01_Text_08187149, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId2::
# 49 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M01_Text_0818719E, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M01_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId3::
# 54 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M01_Text_081871DF, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M01_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId6::
# 59 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M01_Text_0818729A, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M01_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId5::
# 64 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M01_Text_081872D4, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M01_Text_08186FE7::
# 68 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "I’m the GAME DESIGNER.\pOh, is that right?\nYou’re working on a POKéDEX?\pIt’s tough trying to complete it,\nbut don’t give up.\pIf you do complete it, please come\nshow me.$"

Naranja_IslaKumquat_G13_M01_Text_0818708F::
# 72 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "Wow! That’s awesome!\nYep, it’s totally awesome!\pThis POKéDEX is completely filled!\nYou really must love POKéMON!\pI’m so impressed!\pLet me give you something in\nrecognition of your feat!$"

Naranja_IslaKumquat_G13_M01_Text_08187149::
# 76 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "Me? You’re talking to me?\nI’m the PROGRAMMER.\pI wonder what the SLOTS are\nlike here.$"

Naranja_IslaKumquat_G13_M01_Text_0818719E::
# 80 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "I’m the GRAPHIC ARTIST! Aren’t the\nPOKéMON of HOENN interesting?$"

Naranja_IslaKumquat_G13_M01_Text_081871DF::
# 84 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "The girl TUBERS, they’re cute, hey?\nTo battle against a cute TUBER...\pWhoop, it drives me wild!\pAnd the TWINS! Aren’t they cute?\nA 2-on-2 battle with TWINS...\pWhoop, it’s unbearably fun!$"

Naranja_IslaKumquat_G13_M01_Text_0818729A::
# 88 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "The sea breeze tickles my heart.\nIt feels wonderful here!$"

Naranja_IslaKumquat_G13_M01_Text_081872D4::
# 92 "data/maps/Naranja_IslaKumquat_G13_M01/scripts.pory"
	.string "You never know when and where\npeople will challenge you.\pThat’s why I never leave home without\nmy GAME BOY ADVANCE.$"
