Naranja_IslaNueva_G15_M12_MapScripts::
	.byte 0


Naranja_IslaNueva_G15_M12_EventScript_OBJ_EVENT_GFX_HIKER_LocalId2::
# 8 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special GetSeedotSizeRecordInfo
# 9 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	lock
# 10 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	faceplayer
# 11 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081900F7
# 12 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 13 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special ChoosePartyMon
# 14 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	waitstate
# 15 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 16 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFF
# 17 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B448
# 18 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special CompareSeedotSize
# 19 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 20 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B452
# 21 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 22 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B45C
# 23 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 24 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B466
# 25 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B448::
# 30 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_08190366
# 31 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B452::
# 37 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_08190329
# 38 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B45C::
# 44 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081902E4
# 45 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B466::
# 51 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_0819021D
# 52 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 53 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 54 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 55 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 0
# 56 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 57 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B488
# 58 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	closemessage
# 59 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B488::
# 64 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081902C4
# 65 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 66 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId1::
# 71 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special GetLotadSizeRecordInfo
# 72 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	lock
# 73 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	faceplayer
# 74 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_08190431
# 75 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special ChoosePartyMon
# 77 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	waitstate
# 78 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 79 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFF
# 80 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4D9
# 81 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special CompareLotadSize
# 82 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 83 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4E3
# 84 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 85 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4ED
# 86 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 87 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4F7
# 88 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4D9::
# 93 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_0819065A
# 94 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4E3::
# 100 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_08190628
# 101 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 102 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4ED::
# 107 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081905E6
# 108 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 109 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B4F7::
# 114 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_08190536
# 115 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 117 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 118 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 0
# 119 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 120 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B519
# 121 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	closemessage
# 122 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sub_0815B519::
# 127 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081905C1
# 128 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 129 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	release
	end


Naranja_IslaNueva_G15_M12_EventScript_Sign_1::
# 134 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special GetSeedotSizeRecordInfo
# 135 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	lockall
# 136 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081903C9
# 137 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 138 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	releaseall
	end


Naranja_IslaNueva_G15_M12_EventScript_Sign_2::
# 143 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	special GetLotadSizeRecordInfo
# 144 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	lockall
# 145 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M12_Text_081906BE
# 146 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	callstd 4
# 147 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	releaseall
	end


Naranja_IslaNueva_G15_M12_Text_081900F7::
# 151 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Do you know the POKéMON SHROOMISH?\nIt’s hardly ever seen in SOOTOPOLIS.\pAnyway, I love big SHROOMISH.\nThe bigger the better.\pBut my younger brother, he says that\nBARBOACH is bigger.\pThat’s silly. SHROOMISH has to be\nbigger than that!\pHuh? Do you have a SHROOMISH with you?\nP-p-please, show me!$"

Naranja_IslaNueva_G15_M12_Text_0819021D::
# 155 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "{STR_VAR_2} inches!\nOh, my gosh, this is a big one!\pIt might even beat the big BARBOACH\nmy younger brother saw!\pThanks for showing me.\nThis is my thanks!$"

Naranja_IslaNueva_G15_M12_Text_081902C4::
# 159 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Hunh?\nYour BAG is crammed full.$"

Naranja_IslaNueva_G15_M12_Text_081902E4::
# 163 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "{STR_VAR_2} inches, is it?\pHmm... I’ve seen a bigger SHROOMISH\nthan this one.$"

Naranja_IslaNueva_G15_M12_Text_08190329::
# 167 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Oh, now this is quite something...\nBut it’s not a SHROOMISH!$"

Naranja_IslaNueva_G15_M12_Text_08190366::
# 171 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "You don’t have a big SHROOMISH?\nThat’s too bad...\pIf you get a big SHROOMISH, please\ncome show me.$"

Naranja_IslaNueva_G15_M12_Text_081903C9::
# 175 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "The biggest SHROOMISH in history!\n{STR_VAR_2}’s {STR_VAR_3}-inch giant!\pA SHROOMISH bigger than a BARBOACH\nalways wanted!$"

Naranja_IslaNueva_G15_M12_Text_08190431::
# 179 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Do you know the POKéMON BARBOACH?\nIt’s rarely seen in SOOTOPOLIS.\pI love, I mean love, big BARBOACH!\pMy big brother says that SHROOMISH is\nbigger.\pBut that’s wrong! Everyone knows that\nBARBOACH is a lot bigger.\pHunh? Do you have a BARBOACH?\nP-p-please show me!$"

Naranja_IslaNueva_G15_M12_Text_08190536::
# 183 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "{STR_VAR_2} inches!\nWow, that is big!\pIt might be even bigger than the huge\nSHROOMISH my big brother saw.\pThanks for showing me!\nThis is my thanks!$"

Naranja_IslaNueva_G15_M12_Text_081905C1::
# 187 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Whoops, looks like your BAG is full.$"

Naranja_IslaNueva_G15_M12_Text_081905E6::
# 191 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "{STR_VAR_2} inches?\pHmm... I’ve seen a bigger BARBOACH\nthan this one here.$"

Naranja_IslaNueva_G15_M12_Text_08190628::
# 195 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Well, isn’t this something!\nBut it’s no BARBOACH!$"

Naranja_IslaNueva_G15_M12_Text_0819065A::
# 199 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "Don’t you have a big BARBOACH?\nHow disappointing...\pIf you get a big BARBOACH, please\ncome show me!$"

Naranja_IslaNueva_G15_M12_Text_081906BE::
# 203 "data/maps/Naranja_IslaNueva_G15_M12/scripts.pory"
	.string "The biggest BARBOACH in history!\n{STR_VAR_2}’s {STR_VAR_3}-inch colossus!\pA BARBOACH bigger than a SHROOMISH\nalways wanted!$"
