Naranja_NewIsland_House8_MapScripts::
	.byte 0


Naranja_NewIsland_House8_EventScript_Hiker::
# 8 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special GetSeedotSizeRecordInfo
# 9 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	lock
# 10 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	faceplayer
# 11 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081900F7, MSGBOX_DEFAULT
# 12 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special ChoosePartyMon
# 13 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	waitstate
# 14 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 15 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFF
# 16 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B448
# 17 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special CompareSeedotSize
# 18 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 19 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B452
# 20 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 21 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B45C
# 22 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 23 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B466
# 24 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B448::
# 29 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_08190366, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B452::
# 35 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_08190329, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B45C::
# 41 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081902E4, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B466::
# 47 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_0819021D, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 49 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 50 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	callstd 0
# 51 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 52 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B488
# 53 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	closemessage
# 54 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B488::
# 59 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081902C4, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Fisherman::
# 65 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special GetLotadSizeRecordInfo
# 66 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	lock
# 67 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	faceplayer
# 68 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_08190431, MSGBOX_DEFAULT
# 69 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special ChoosePartyMon
# 70 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	waitstate
# 71 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 72 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFF
# 73 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B4D9
# 74 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special CompareLotadSize
# 75 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 76 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B4E3
# 77 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 78 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B4ED
# 79 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 80 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B4F7
# 81 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B4D9::
# 86 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_0819065A, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B4E3::
# 92 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_08190628, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B4ED::
# 98 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081905E6, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B4F7::
# 104 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_08190536, MSGBOX_DEFAULT
# 105 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 106 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 107 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	callstd 0
# 108 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 109 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_House8_EventScript_Sub_0815B519
# 110 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	closemessage
# 111 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sub_0815B519::
# 116 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081905C1, MSGBOX_DEFAULT
# 117 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	release
	end


Naranja_NewIsland_House8_EventScript_Sign_1::
# 122 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special GetSeedotSizeRecordInfo
# 123 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	lockall
# 124 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081903C9, MSGBOX_DEFAULT
# 125 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	releaseall
	end


Naranja_NewIsland_House8_EventScript_Sign_2::
# 130 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	special GetLotadSizeRecordInfo
# 131 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	lockall
# 132 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	msgbox Naranja_NewIsland_House8_Text_081906BE, MSGBOX_DEFAULT
# 133 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	releaseall
	end


Naranja_NewIsland_House8_Text_081900F7::
# 137 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Do you know the POKéMON SHROOMISH?\nIt’s hardly ever seen in SOOTOPOLIS.\pAnyway, I love big SHROOMISH.\nThe bigger the better.\pBut my younger brother, he says that\nBARBOACH is bigger.\pThat’s silly. SHROOMISH has to be\nbigger than that!\pHuh? Do you have a SHROOMISH with you?\nP-p-please, show me!$"

Naranja_NewIsland_House8_Text_0819021D::
# 141 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "{STR_VAR_2} inches!\nOh, my gosh, this is a big one!\pIt might even beat the big BARBOACH\nmy younger brother saw!\pThanks for showing me.\nThis is my thanks!$"

Naranja_NewIsland_House8_Text_081902C4::
# 145 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Hunh?\nYour BAG is crammed full.$"

Naranja_NewIsland_House8_Text_081902E4::
# 149 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "{STR_VAR_2} inches, is it?\pHmm... I’ve seen a bigger SHROOMISH\nthan this one.$"

Naranja_NewIsland_House8_Text_08190329::
# 153 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Oh, now this is quite something...\nBut it’s not a SHROOMISH!$"

Naranja_NewIsland_House8_Text_08190366::
# 157 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "You don’t have a big SHROOMISH?\nThat’s too bad...\pIf you get a big SHROOMISH, please\ncome show me.$"

Naranja_NewIsland_House8_Text_081903C9::
# 161 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "The biggest SHROOMISH in history!\n{STR_VAR_2}’s {STR_VAR_3}-inch giant!\pA SHROOMISH bigger than a BARBOACH\nalways wanted!$"

Naranja_NewIsland_House8_Text_08190431::
# 165 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Do you know the POKéMON BARBOACH?\nIt’s rarely seen in SOOTOPOLIS.\pI love, I mean love, big BARBOACH!\pMy big brother says that SHROOMISH is\nbigger.\pBut that’s wrong! Everyone knows that\nBARBOACH is a lot bigger.\pHunh? Do you have a BARBOACH?\nP-p-please show me!$"

Naranja_NewIsland_House8_Text_08190536::
# 169 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "{STR_VAR_2} inches!\nWow, that is big!\pIt might be even bigger than the huge\nSHROOMISH my big brother saw.\pThanks for showing me!\nThis is my thanks!$"

Naranja_NewIsland_House8_Text_081905C1::
# 173 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Whoops, looks like your BAG is full.$"

Naranja_NewIsland_House8_Text_081905E6::
# 177 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "{STR_VAR_2} inches?\pHmm... I’ve seen a bigger BARBOACH\nthan this one here.$"

Naranja_NewIsland_House8_Text_08190628::
# 181 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Well, isn’t this something!\nBut it’s no BARBOACH!$"

Naranja_NewIsland_House8_Text_0819065A::
# 185 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "Don’t you have a big BARBOACH?\nHow disappointing...\pIf you get a big BARBOACH, please\ncome show me!$"

Naranja_NewIsland_House8_Text_081906BE::
# 189 "data/maps/Naranja_NewIsland_House8/scripts.pory"
	.string "The biggest BARBOACH in history!\n{STR_VAR_2}’s {STR_VAR_3}-inch colossus!\pA BARBOACH bigger than a SHROOMISH\nalways wanted!$"
