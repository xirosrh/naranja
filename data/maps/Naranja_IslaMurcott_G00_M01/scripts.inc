Naranja_IslaMurcott_G00_M01_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G00_M01_OnTransition
	.byte 0


Naranja_IslaMurcott_G00_M01_OnTransition::
# 9 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x78
# 10 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, 0x77
# 11 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_3, 0
# 12 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BA5C
# 13 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 14 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BA68
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BA5C::
# 19 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0817
# 20 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 0
# 21 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G09_M02_REPORTER_M
	return


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BA68::
# 26 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, 0x1C, 0xD
# 27 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_OLD_WOMAN_2, 0x19, 0xD
# 28 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_BOY_4, 0x19, 0xE
# 29 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_COOK, 0x1B, 0x10
# 30 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_GIRL_1_8, 0x1C, 0x10
# 31 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_FAT_MAN, 0x1D, 0x10
# 32 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MURCOTT_G00_M01_MAN_1_2, 0x1F, 0xE
# 33 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, 8
# 34 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_OLD_WOMAN_2, 0x12
# 35 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_BOY_4, 0x10
# 36 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_COOK, 7
# 37 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_GIRL_1_8, 7
# 38 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_FAT_MAN, 7
# 39 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MURCOTT_G00_M01_MAN_1_2, 9
	return


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId26::
# 44 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 45 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 46 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_IslaMurcott_G00_M01_Text_08164642
# 47 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 48 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemart Naranja_IslaMurcott_G00_M01_Mart_0814BAD0
# 49 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 50 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId24::
# 56 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 57 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 58 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	bufferleadmonspeciesname 0
# 59 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164682
# 60 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 62 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 63 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB35
# 64 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 65 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 66 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB2B
# 67 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164691
# 68 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 69 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_IslaMurcott_G00_M01_Text_081646DD
# 71 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitfanfare
# 72 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 73 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081646FC
# 74 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	special GiveLeadMonEffortRibbon
# 76 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB2B::
# 81 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816471C
# 82 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB35::
# 88 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164775
# 89 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_COOK_LocalId6::
# 95 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 96 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 97 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 98 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB56
# 99 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164814
# 100 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB56::
# 106 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165376
# 107 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 108 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId7::
# 113 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 114 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 115 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 116 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB77
# 117 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081648A0
# 118 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB77::
# 124 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165222
# 125 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 126 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId8::
# 131 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 132 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 133 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 134 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBA1
# 135 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 136 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBAB
# 137 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164937
# 138 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 139 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBA1::
# 144 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081652A0
# 145 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 146 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBAB::
# 151 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164995
# 152 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 153 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId3::
# 158 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 159 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 160 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 161 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBCC
# 162 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164A30
# 163 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 164 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBCC::
# 169 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816530A
# 170 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 171 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId2::
# 176 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 177 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 178 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 179 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC0A
# 180 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164B34
# 181 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 182 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC0A::
# 187 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081653F4
# 188 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 189 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 194 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 195 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 196 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_0094
# 197 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC29
# 198 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164BBF
# 199 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 200 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC29::
# 205 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164BEA
# 206 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 207 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_11::
# 212 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165856
# 213 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_12::
# 218 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lockall
# 219 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 220 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC63
# 221 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 222 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC59
# 223 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081658A0
# 224 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 225 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC59::
# 230 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081658E8
# 231 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 232 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC63::
# 237 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165952
# 238 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 239 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_10::
# 244 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081659B3
# 245 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_8::
# 250 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081659E3
# 251 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_9::
# 256 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165A17
# 257 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_7::
# 262 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165A57
# 263 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_5::
# 268 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lockall
# 269 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 270 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCA5
# 271 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165A8B
# 272 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 273 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCA5::
# 278 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165B02
# 279 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 280 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_1::
# 285 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165B48
# 286 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId17::
# 291 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 292 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 293 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 294 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCCF
# 295 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164F9E
# 296 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 297 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCCF::
# 302 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164F9E
# 303 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 304 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId18::
# 309 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164FFC
# 310 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId12::
# 315 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164E85
# 316 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId13::
# 321 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164EDB
# 322 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId14::
# 327 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164F62
# 328 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId15::
# 333 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816507C
# 334 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId16::
# 339 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 340 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 341 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081650F1
# 342 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 5
# 343 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 344 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD28
# 345 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 346 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD31
# 347 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD28::
# 352 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816511E
# 353 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
	return


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD31::
# 358 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081651A1
# 359 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
	return


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_VARS_LocalId5::
# 364 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 365 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 366 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164C64
# 367 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 368 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 369 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_VARS, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 370 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 371 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_19_LocalId19::
# 376 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 377 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 378 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164C9F
# 379 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 380 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 381 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 382 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 383 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_20_LocalId20::
# 388 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 389 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 390 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164CE8
# 391 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 392 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 393 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 394 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 395 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_27_LocalId27::
# 400 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 401 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 402 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164D2B
# 403 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 404 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 405 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_3, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 406 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 407 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_28_LocalId28::
# 412 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 413 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 414 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164D92
# 415 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 416 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 417 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_4, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 418 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 419 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_29_LocalId29::
# 424 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 425 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 426 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164DD5
# 427 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 428 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 429 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_5, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 430 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 431 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_30_LocalId30::
# 436 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 437 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 438 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164DF4
# 439 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 440 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 441 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_6, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 442 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 443 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_31_LocalId31::
# 448 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 449 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 450 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08164E46
# 451 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 452 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 453 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_7, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 454 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 455 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId22::
# 460 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 461 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 462 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 463 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 464 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemartdecoration Naranja_IslaMurcott_G00_M01_Mart_0814BE0C
# 465 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 466 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 467 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BE16::
# 472 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081A116E
# 473 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 474 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId21::
# 479 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 480 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 481 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 482 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BE16
# 483 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 484 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 485 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemartdecoration Naranja_IslaMurcott_G00_M01_Mart_0814BE40
# 486 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 487 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 488 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId25::
# 493 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 494 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 495 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 496 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 497 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemart Naranja_IslaMurcott_G00_M01_Mart_0814BEB4
# 498 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G00_M29_Text_081A0C02
# 499 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 500 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId11::
# 505 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lockall
# 506 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165498
# 507 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 508 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081654E0
# 509 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 510 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 511 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_REPORTER_F, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 512 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 513 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay 0xA
# 514 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_CAMERAMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 515 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 516 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay 0x19
# 517 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_IslaMurcott_G00_M01_Movement_0814C000
# 518 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G00_M01_Movement_0814C00E
# 519 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_REPORTER_F, Naranja_IslaMurcott_G00_M01_Movement_0814BFDD
# 520 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_CAMERAMAN, Naranja_IslaMurcott_G00_M01_Movement_0814BFEA
# 521 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 522 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G00_M01_REPORTER_F
# 523 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G00_M01_CAMERAMAN
# 524 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816558D
# 525 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 526 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 527 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 528 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081655E7
# 529 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 530 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 531 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081656BC
# 532 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 533 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_COOK, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 534 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_FAT_MAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 535 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_OLD_WOMAN_2, Naranja_IslaMurcott_G00_M01_Movement_0814BFCD
# 536 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_BOY_4, Naranja_IslaMurcott_G00_M01_Movement_081A0831
# 537 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_MAN_1_2, Naranja_IslaMurcott_G00_M01_Movement_0814BFD5
# 538 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 539 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 540 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 541 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816578F
# 542 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 543 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	playse SE_PIN
# 544 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 545 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 546 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 547 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 548 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081657FA
# 549 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 550 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 551 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 552 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_0816583A
# 553 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 4
# 554 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 555 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_IslaMurcott_G00_M01_Movement_0814BFFB
# 556 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G00_M01_Movement_0814C008
# 557 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 558 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1
# 559 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_SCIENTIST_1
# 560 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_SUBMARINE_SHADOW
# 561 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_241
# 562 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_246
# 563 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 2
# 564 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	warp MAP_NARANJA_ISLA_MURCOTT_G09_M08, 0xFF, 0xB, 0xE
# 565 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitstate
# 566 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId9::
# 571 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165425
# 572 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId10::
# 577 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_08165458
# 578 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 3
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId23::
# 583 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G00_M01_Text_081647A7
# 584 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	callstd 2
	end


# 588 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFCD:
# 589 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 590 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 591 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	emote_question_mark
# 592 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_right
# 593 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 594 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 595 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 598 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFD5:
# 599 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	emote_question_mark
# 600 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_up
# 601 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 602 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_down
# 603 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 604 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 605 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 608 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFDD:
# 609 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 610 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 611 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 612 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 613 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 614 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 615 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 616 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 617 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 618 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 619 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 620 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
	step_end

# 623 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFEA:
# 624 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 625 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 626 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 627 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 628 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 629 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 630 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 631 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 632 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 633 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 634 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 635 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 636 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
	step_end

# 639 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFFB:
# 640 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_right
# 641 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_up
# 642 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_up
# 643 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	set_invisible
	step_end

# 646 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814C000:
# 647 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 648 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 649 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 650 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 651 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 652 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 653 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
	step_end

# 656 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814C008:
# 657 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_right
# 658 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 659 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 660 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_right
# 661 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_up
	step_end

# 664 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814C00E:
# 665 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 666 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 667 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 668 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 669 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 670 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 671 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 672 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_down
	step_end

# 675 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_081A0831:
# 676 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	emote_question_mark
	step_end

	.align 2
# 679 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BAD0:
# 680 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_PROTEIN
# 681 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_IRON
# 682 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_CARBOS
# 683 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_ZINC
# 684 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_CALCIUM
# 685 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

	.align 2
# 688 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BE0C:
# 689 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 690 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 691 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_NONE

	.align 2
# 694 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BE40:
# 695 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 696 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_SODA_POP
# 697 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 698 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_LEMONADE
# 699 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 700 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 701 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_GREEN_SHARD
# 702 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_034
# 703 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_035
# 704 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_036
# 705 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_037
# 706 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_038
# 707 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_039
# 708 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_03A
	.2byte ITEM_NONE

	.align 2
# 711 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BEB4:
# 712 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_TM10
# 713 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_TM43
	.2byte ITEM_NONE

Naranja_IslaMurcott_G00_M01_Text_08164642::
# 716 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "I’m the ENERGY GURU!\nI’ll go for it and sell you what you need!$"

Naranja_IslaMurcott_G00_M01_Text_08164682::
# 720 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Oh?\nYour {STR_VAR_1}...$"

Naranja_IslaMurcott_G00_M01_Text_08164691::
# 724 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Went for it stupendously!\pAs its reward, please give it this\nEFFORT RIBBON.$"

Naranja_IslaMurcott_G00_M01_Text_081646DD::
# 728 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"

Naranja_IslaMurcott_G00_M01_Text_081646FC::
# 732 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\non {STR_VAR_1}.$"

Naranja_IslaMurcott_G00_M01_Text_0816471C::
# 736 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "You have to go for it a little harder.\pIf you do, I’ll give your POKéMON\nsomething nice.$"

Naranja_IslaMurcott_G00_M01_Text_08164775::
# 740 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\nRIBBON looks good on it!$"

Naranja_IslaMurcott_G00_M01_Text_081647A7::
# 744 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "The light of the lighthouse reaches\ndozens of miles away.\pI wonder if it doesn’t startle POKéMON\nin the sea.$"

Naranja_IslaMurcott_G00_M01_Text_08164814::
# 748 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Ooh, look at this!\pThe seaweed you can get around these\nparts is fresh and full of life.\pWhy, it looks like it can even rear up\nand attack!$"

Naranja_IslaMurcott_G00_M01_Text_081648A0::
# 752 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Q. bonito color el del mar del sur.\pSin duda, el turquesa más profundo\nque pueda existir\pJamás me cansaré de verlo.\p{COLOR 0x04}{PLAYER}: Sí, realmente \nes precioso.$"

Naranja_IslaMurcott_G00_M01_Text_08164937::
# 756 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Shopping where you can breathe the\nscent of the ocean...\pSLATEPORT is such a wonderful place!$"

Naranja_IslaMurcott_G00_M01_Text_08164995::
# 760 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on the\nfloor, they’ll get dirty.\pI’m going to buy some BRICKS so my\nDOLLS and CUSHIONS won’t get dirty\lwhen I leave them out.$"

Naranja_IslaMurcott_G00_M01_Text_08164A30::
# 764 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Yeah! I’ve waited so long for this!\nPOKéMON CONTESTS!\lI’m going to enter!\pBut before I do, I have to catch some\nPOKéMON!$"

Naranja_IslaMurcott_G00_M01_Text_08164B34::
# 768 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN, the fellow who built the\nMUSEUM, also happens to be the leader\lof an undersea exploration team.\pSo, everyone calls him CAPT. STERN.$"

Naranja_IslaMurcott_G00_M01_Text_08164BBF::
# 772 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "What is that over there?\nThat long line...$"

Naranja_IslaMurcott_G00_M01_Text_08164BEA::
# 776 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "When I was a child, I visited the\nMUSEUM often.\pI used to dream about the mysteries of\nthe sea after seeing the exhibits.$"

Naranja_IslaMurcott_G00_M01_Text_08164C64::
# 780 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Hey, there! Quit pushing!\nThis is the line, can’t you see?$"

Naranja_IslaMurcott_G00_M01_Text_08164C9F::
# 784 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "TEAM {AQUA} has a policy of\nassembling and dispersing at the\loperation site.$"

Naranja_IslaMurcott_G00_M01_Text_08164CE8::
# 788 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Our BOSS is brilliant.\pWhat would he want to do with a\nMUSEUM now?$"

Naranja_IslaMurcott_G00_M01_Text_08164D2B::
# 792 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "What’s the new scheme, I wonder?\pOur BOSS is scary when he’s mad, so\nI’d better not screw things up...$"

Naranja_IslaMurcott_G00_M01_Text_08164D92::
# 796 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "If there’s something we need in the\nMUSEUM, we should take it all!$"

Naranja_IslaMurcott_G00_M01_Text_08164DD5::
# 800 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Hey, you there!\nDon’t butt in!$"

Naranja_IslaMurcott_G00_M01_Text_08164DF4::
# 804 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "A long line, huh?\pIt reminds me of the times I lined up to\nbuy smash-hit games...$"

Naranja_IslaMurcott_G00_M01_Text_08164E46::
# 808 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Why are we even lining up and paying?\nWe should just march in!$"

Naranja_IslaMurcott_G00_M01_Text_08164E85::
# 812 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "The sea is just so vast...\pCould the sea have been made by the\ntears shed by POKéMON?$"

Naranja_IslaMurcott_G00_M01_Text_08164EDB::
# 816 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Do you know what they do with old\nships that become too creaky to sail?\pThey sink them in the sea so they\nbecome habitats for POKéMON.$"

Naranja_IslaMurcott_G00_M01_Text_08164F62::
# 820 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Whenever I visit here, I get carried\naway and buy too much.$"

Naranja_IslaMurcott_G00_M01_Text_08164F9E::
# 824 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "If you want to change your POKéMON’s\nnickname, you’ll have to get the NAME\lRATER to help you.$"

Naranja_IslaMurcott_G00_M01_Text_08164FFC::
# 828 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Any POKéMON you get in a trade, you\ncan’t change its nickname.\pThe original TRAINER’s love for that\nPOKéMON is in the nickname.$"

Naranja_IslaMurcott_G00_M01_Text_0816507C::
# 832 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "A POKéMON CONTEST HALL opened in\nSLATEPORT recently.\pI plan on entering after I improve the\ncondition of my POKéMON.$"

Naranja_IslaMurcott_G00_M01_Text_081650F1::
# 836 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Do you know about the machine\nBERRY BLENDER?$"

Naranja_IslaMurcott_G00_M01_Text_0816511E::
# 840 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "People have to work together to get it\nto spin faster.\pThe faster you can make it spin, the\nbetter オカキクケS you can get, I’ve heard.$"

Naranja_IslaMurcott_G00_M01_Text_081651A1::
# 844 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "It’s used for making a kind of candy\ncalled a オカキクケ.\pIf you give a good オカキクケ to a POKéMON,\nits condition will improve by a lot.$"

Naranja_IslaMurcott_G00_M01_Text_08165222::
# 848 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "I was hoping that it was a famous star\nso I could get an autograph.\pBut who’s that being interviewed?\nIsn’t that CAPT. STERN?$"

Naranja_IslaMurcott_G00_M01_Text_081652A0::
# 852 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "That lady interviewer is so cool and\npretty.\pWhen I grow up, I’m going to be an\ninternational journalist!$"

Naranja_IslaMurcott_G00_M01_Text_0816530A::
# 856 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN says they discovered\nsomething at the bottom of the sea.\pI wonder what it is?\nWhat could it be?$"

Naranja_IslaMurcott_G00_M01_Text_08165376::
# 860 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "What’s going on here?\pDid the good CAPTAIN come back with\na big fish from the ocean floor?$"

Naranja_IslaMurcott_G00_M01_Text_081653F4::
# 864 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "A TV interview! Here!\nThe CAPTAIN’s a celebrity!$"

Naranja_IslaMurcott_G00_M01_Text_08165425::
# 868 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\nfor the camera!$"

Naranja_IslaMurcott_G00_M01_Text_08165458::
# 872 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "GABBY: I see, I see. You’ve had a most\ninvaluable experience...$"

Naranja_IslaMurcott_G00_M01_Text_08165498::
# 876 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\nmove ahead with our exploration.$"

Naranja_IslaMurcott_G00_M01_Text_081654E0::
# 880 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "GABBY: That’s wonderful, CAPT. STERN!\nThank you for taking the time from\lyour busy schedule to talk to us.\pWe hope we can interview you again\nwith news of more discoveries!$"

Naranja_IslaMurcott_G00_M01_Text_0816558D::
# 884 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN: Whew...\pThat was my first time to be filmed for\nTV. That was nerve wracking.$"

Naranja_IslaMurcott_G00_M01_Text_081655E7::
# 888 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\nYou’re looking great!\pWe made a huge discovery on our last\nseafloor exploration.\pWe found an underwater cavern on\nROUTE 128.\pWe think it’s the habitat of a POKéMON\nthat’s said to have been long extinct.$"

Naranja_IslaMurcott_G00_M01_Text_081656BC::
# 892 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Fufufu...\nCAPT. STERN, I presume.\pWe of TEAM {AQUA} will assume\ncontrol of your submarine!\pYour objections are meaningless!\nWe expect your total cooperation!\pFufufu...\nJust watch and learn what TEAM\l{AQUA} has planned!$"

Naranja_IslaMurcott_G00_M01_Text_0816578F::
# 896 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN: What was that all about?\pIt sounded like someone using a\nmegaphone...\pWhere did it come from?$"

Naranja_IslaMurcott_G00_M01_Text_081657FA::
# 900 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "It’s from the HARBOR!\pThe submarine!\nThey’re trying to take it!$"

Naranja_IslaMurcott_G00_M01_Text_0816583A::
# 904 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "{PLAYER}{KUN}!\nPlease, come with me!$"

Naranja_IslaMurcott_G00_M01_Text_08165856::
# 908 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "POKéMON CONTESTS\nHYPER RANK REGISTRATION\l“Let it burn! POKéMON TRAINERS!”$"

Naranja_IslaMurcott_G00_M01_Text_081658A0::
# 912 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN’S SHIPYARD\p“Wanted: A sailor capable of sailing\nin all currents.”$"

Naranja_IslaMurcott_G00_M01_Text_081658E8::
# 916 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN’S SHIPYARD\p“The ferry S.S. TIDAL nears\ncompletion for serving the ports of\lSLATEPORT and LILYCOVE.”$"

Naranja_IslaMurcott_G00_M01_Text_08165952::
# 920 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN’S SHIPYARD\p“Boarding of the SLATEPORT-LILYCOVE\nferry S.S. TIDAL is handled at the\lHARBOR.”$"

Naranja_IslaMurcott_G00_M01_Text_081659B3::
# 924 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "POKéMON FAN CLUB\n“Calling all fans of POKéMON!”$"

Naranja_IslaMurcott_G00_M01_Text_081659E3::
# 928 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "“The endless sea sustains\nall life.”\pOCEANIC MUSEUM$"

Naranja_IslaMurcott_G00_M01_Text_08165A17::
# 932 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT CITY\p“The port where people and POKéMON\ncross paths.”$"

Naranja_IslaMurcott_G00_M01_Text_08165A57::
# 936 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT MARKET\n“Unique items found nowhere else!”$"

Naranja_IslaMurcott_G00_M01_Text_08165A8B::
# 940 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT HARBOR\p“The ferry S.S. TIDAL is under\nconstruction in the SHIPYARD.\p“Service is scheduled to begin\nshortly.”$"

Naranja_IslaMurcott_G00_M01_Text_08165B02::
# 944 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT HARBOR\p“Enjoy a delightful cruise on the\nferry S.S. TIDAL.”$"

Naranja_IslaMurcott_G00_M01_Text_08165B48::
# 948 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "NAME RATER’S HOUSE\n“POKéMON nicknames rated.”$"

Naranja_IslaMurcott_G00_M01_Text_081A116E::
# 952 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Do you know the TM SECRET POWER?\pOur group, we love the TM SECRET\nPOWER.\pOne of our members will give it to you.\nCome back and show me if you get it.\pWe’ll accept you as a member and sell\nyou good stuff in secrecy.$"
