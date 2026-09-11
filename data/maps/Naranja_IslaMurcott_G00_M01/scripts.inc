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
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId24::
# 55 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 56 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 57 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	bufferleadmonspeciesname 0
# 58 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164682, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 60 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB35
# 62 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 63 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 64 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB2B
# 65 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164691, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_IslaMurcott_G00_M01_Text_081646DD
# 68 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitfanfare
# 69 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 70 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081646FC, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	special GiveLeadMonEffortRibbon
# 72 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB2B::
# 77 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816471C, MSGBOX_DEFAULT
# 78 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB35::
# 83 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164775, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_COOK_LocalId6::
# 89 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 90 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 91 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 92 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB56
# 93 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164814, MSGBOX_DEFAULT
# 94 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB56::
# 99 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165376, MSGBOX_DEFAULT
# 100 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId7::
# 105 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 106 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 107 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 108 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB77
# 109 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081648A0, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BB77::
# 115 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165222, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId8::
# 121 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 122 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 123 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 124 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBA1
# 125 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 126 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBAB
# 127 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164937, MSGBOX_DEFAULT
# 128 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBA1::
# 133 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081652A0, MSGBOX_DEFAULT
# 134 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBAB::
# 139 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164995, MSGBOX_DEFAULT
# 140 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId3::
# 145 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 146 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 147 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 148 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBCC
# 149 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164A30, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BBCC::
# 155 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816530A, MSGBOX_DEFAULT
# 156 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId2::
# 161 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 162 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 163 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 164 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC0A
# 165 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164B34, MSGBOX_DEFAULT
# 166 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC0A::
# 171 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081653F4, MSGBOX_DEFAULT
# 172 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 177 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 178 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 179 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_0094
# 180 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC29
# 181 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164BBF, MSGBOX_DEFAULT
# 182 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC29::
# 187 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164BEA, MSGBOX_DEFAULT
# 188 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_11::
# 193 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165856, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_12::
# 198 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lockall
# 199 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 200 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC63
# 201 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 202 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC59
# 203 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081658A0, MSGBOX_DEFAULT
# 204 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC59::
# 209 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081658E8, MSGBOX_DEFAULT
# 210 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BC63::
# 215 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165952, MSGBOX_DEFAULT
# 216 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_10::
# 221 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081659B3, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_8::
# 226 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081659E3, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_9::
# 231 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165A17, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_7::
# 236 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165A57, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_5::
# 241 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lockall
# 242 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 243 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCA5
# 244 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165A8B, MSGBOX_DEFAULT
# 245 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCA5::
# 250 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165B02, MSGBOX_DEFAULT
# 251 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sign_1::
# 256 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165B48, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId17::
# 261 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 262 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 263 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 1
# 264 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCCF
# 265 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164F9E, MSGBOX_DEFAULT
# 266 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BCCF::
# 271 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164F9E, MSGBOX_DEFAULT
# 272 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId18::
# 277 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164FFC, MSGBOX_NPC
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId12::
# 282 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164E85, MSGBOX_NPC
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId13::
# 287 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164EDB, MSGBOX_NPC
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId14::
# 292 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164F62, MSGBOX_NPC
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId15::
# 297 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816507C, MSGBOX_NPC
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId16::
# 302 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 303 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 304 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081650F1, MSGBOX_YESNO
# 305 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 306 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD28
# 307 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 308 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD31
# 309 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD28::
# 314 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816511E, MSGBOX_DEFAULT
	return


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BD31::
# 319 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081651A1, MSGBOX_DEFAULT
	return


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_VARS_LocalId5::
# 324 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 325 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 326 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164C64, MSGBOX_DEFAULT
# 327 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 328 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_VARS, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 329 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 330 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_19_LocalId19::
# 335 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 336 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 337 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164C9F, MSGBOX_DEFAULT
# 338 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 339 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 340 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 341 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_20_LocalId20::
# 346 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 347 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 348 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164CE8, MSGBOX_DEFAULT
# 349 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 350 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 351 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 352 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_27_LocalId27::
# 357 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 358 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 359 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164D2B, MSGBOX_DEFAULT
# 360 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 361 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_3, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 362 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 363 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_28_LocalId28::
# 368 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 369 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 370 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164D92, MSGBOX_DEFAULT
# 371 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 372 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_4, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 373 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 374 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_29_LocalId29::
# 379 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 380 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 381 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164DD5, MSGBOX_DEFAULT
# 382 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 383 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_5, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 384 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 385 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_30_LocalId30::
# 390 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 391 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 392 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164DF4, MSGBOX_DEFAULT
# 393 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 394 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_6, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 395 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 396 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJECT_31_LocalId31::
# 401 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 402 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 403 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08164E46, MSGBOX_DEFAULT
# 404 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 405 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_241_7, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 406 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 407 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId22::
# 412 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 413 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 414 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 415 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 416 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemartdecoration Naranja_IslaMurcott_G00_M01_Mart_0814BE0C
# 417 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 418 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BE16::
# 423 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081A116E, MSGBOX_DEFAULT
# 424 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId21::
# 429 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 430 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 431 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 432 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMurcott_G00_M01_EventScript_Sub_0814BE16
# 433 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 434 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 435 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemartdecoration Naranja_IslaMurcott_G00_M01_Mart_0814BE40
# 436 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 437 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId25::
# 442 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lock
# 443 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	faceplayer
# 444 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 445 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmessage
# 446 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	pokemart Naranja_IslaMurcott_G00_M01_Mart_0814BEB4
# 447 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 448 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	release
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId11::
# 453 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	lockall
# 454 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165498, MSGBOX_DEFAULT
# 455 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081654E0, MSGBOX_DEFAULT
# 456 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 457 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_REPORTER_F, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 458 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 459 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay 0xA
# 460 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_CAMERAMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 461 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 462 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay 0x19
# 463 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_IslaMurcott_G00_M01_Movement_0814C000
# 464 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G00_M01_Movement_0814C00E
# 465 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_REPORTER_F, Naranja_IslaMurcott_G00_M01_Movement_0814BFDD
# 466 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_CAMERAMAN, Naranja_IslaMurcott_G00_M01_Movement_0814BFEA
# 467 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 468 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G00_M01_REPORTER_F
# 469 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G00_M01_CAMERAMAN
# 470 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816558D, MSGBOX_DEFAULT
# 471 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 472 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 473 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081655E7, MSGBOX_DEFAULT
# 474 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 475 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081656BC, MSGBOX_DEFAULT
# 476 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_COOK, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 477 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_FAT_MAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 478 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_OLD_WOMAN_2, Naranja_IslaMurcott_G00_M01_Movement_0814BFCD
# 479 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_BOY_4, Naranja_IslaMurcott_G00_M01_Movement_081A0831
# 480 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_MAN_1_2, Naranja_IslaMurcott_G00_M01_Movement_0814BFD5
# 481 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 482 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 483 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 484 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816578F, MSGBOX_DEFAULT
# 485 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	playse SE_PIN
# 486 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 487 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 488 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 489 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 490 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081657FA, MSGBOX_DEFAULT
# 491 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 492 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 493 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_0816583A, MSGBOX_DEFAULT
# 494 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	closemessage
# 495 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1, Naranja_IslaMurcott_G00_M01_Movement_0814BFFB
# 496 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMurcott_G00_M01_Movement_0814C008
# 497 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 498 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	removeobject LOCALID_ISLA_MURCOTT_G00_M01_SCIENTIST_1
# 499 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_SCIENTIST_1
# 500 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_SUBMARINE_SHADOW
# 501 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_241
# 502 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_246
# 503 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_STORY_STATE, 2
# 504 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	warp MAP_NARANJA_ISLA_MURCOTT_G09_M08, 0xFF, 0xB, 0xE
# 505 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	waitstate
# 506 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	releaseall
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId9::
# 511 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165425, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId10::
# 516 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_08165458, MSGBOX_SIGN
	end


Naranja_IslaMurcott_G00_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId23::
# 521 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	msgbox Naranja_IslaMurcott_G00_M01_Text_081647A7, MSGBOX_NPC
	end


# 525 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFCD:
# 526 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 527 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 528 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	emote_question_mark
# 529 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_right
# 530 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 531 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 532 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 535 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFD5:
# 536 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	emote_question_mark
# 537 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_up
# 538 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 539 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_down
# 540 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 541 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 542 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 545 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFDD:
# 546 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 547 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 548 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 549 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 550 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 551 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 552 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 553 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 554 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 555 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 556 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 557 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
	step_end

# 560 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFEA:
# 561 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 562 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 563 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 564 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 565 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 566 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 567 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 568 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 569 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 570 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 571 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 572 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
# 573 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
	step_end

# 576 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814BFFB:
# 577 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_right
# 578 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_up
# 579 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_up
# 580 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	set_invisible
	step_end

# 583 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814C000:
# 584 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 585 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 586 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 587 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 588 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 589 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_down
# 590 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_left
	step_end

# 593 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814C008:
# 594 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_right
# 595 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 596 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 597 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_right
# 598 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_up
	step_end

# 601 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_0814C00E:
# 602 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 603 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 604 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 605 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 606 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 607 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 608 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	delay_16
# 609 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	walk_in_place_faster_down
	step_end

# 612 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Movement_081A0831:
# 613 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	emote_question_mark
	step_end

	.align 2
# 616 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BAD0:
# 617 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_PROTEIN
# 618 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_IRON
# 619 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_CARBOS
# 620 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_ZINC
# 621 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_CALCIUM
# 622 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

	.align 2
# 625 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BE0C:
# 626 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 627 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 628 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_NONE

	.align 2
# 631 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BE40:
# 632 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 633 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_SODA_POP
# 634 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 635 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_LEMONADE
# 636 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 637 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 638 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_GREEN_SHARD
# 639 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_034
# 640 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_035
# 641 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_036
# 642 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_037
# 643 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_038
# 644 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_039
# 645 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_03A
	.2byte ITEM_NONE

	.align 2
# 648 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
Naranja_IslaMurcott_G00_M01_Mart_0814BEB4:
# 649 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_TM10
# 650 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.2byte ITEM_TM43
	.2byte ITEM_NONE

Naranja_IslaMurcott_G00_M01_Text_08164642::
# 653 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "I’m the ENERGY GURU!\nI’ll go for it and sell you what you need!$"

Naranja_IslaMurcott_G00_M01_Text_08164682::
# 657 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Oh?\nYour {STR_VAR_1}...$"

Naranja_IslaMurcott_G00_M01_Text_08164691::
# 661 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Went for it stupendously!\pAs its reward, please give it this\nEFFORT RIBBON.$"

Naranja_IslaMurcott_G00_M01_Text_081646DD::
# 665 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"

Naranja_IslaMurcott_G00_M01_Text_081646FC::
# 669 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\non {STR_VAR_1}.$"

Naranja_IslaMurcott_G00_M01_Text_0816471C::
# 673 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "You have to go for it a little harder.\pIf you do, I’ll give your POKéMON\nsomething nice.$"

Naranja_IslaMurcott_G00_M01_Text_08164775::
# 677 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\nRIBBON looks good on it!$"

Naranja_IslaMurcott_G00_M01_Text_081647A7::
# 681 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "The light of the lighthouse reaches\ndozens of miles away.\pI wonder if it doesn’t startle POKéMON\nin the sea.$"

Naranja_IslaMurcott_G00_M01_Text_08164814::
# 685 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Ooh, look at this!\pThe seaweed you can get around these\nparts is fresh and full of life.\pWhy, it looks like it can even rear up\nand attack!$"

Naranja_IslaMurcott_G00_M01_Text_081648A0::
# 689 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Q. bonito color el del mar del sur.\pSin duda, el turquesa más profundo\nque pueda existir\pJamás me cansaré de verlo.\p{COLOR 0x04}{PLAYER}: Sí, realmente \nes precioso.$"

Naranja_IslaMurcott_G00_M01_Text_08164937::
# 693 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Shopping where you can breathe the\nscent of the ocean...\pSLATEPORT is such a wonderful place!$"

Naranja_IslaMurcott_G00_M01_Text_08164995::
# 697 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on the\nfloor, they’ll get dirty.\pI’m going to buy some BRICKS so my\nDOLLS and CUSHIONS won’t get dirty\lwhen I leave them out.$"

Naranja_IslaMurcott_G00_M01_Text_08164A30::
# 701 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Yeah! I’ve waited so long for this!\nPOKéMON CONTESTS!\lI’m going to enter!\pBut before I do, I have to catch some\nPOKéMON!$"

Naranja_IslaMurcott_G00_M01_Text_08164B34::
# 705 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN, the fellow who built the\nMUSEUM, also happens to be the leader\lof an undersea exploration team.\pSo, everyone calls him CAPT. STERN.$"

Naranja_IslaMurcott_G00_M01_Text_08164BBF::
# 709 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "What is that over there?\nThat long line...$"

Naranja_IslaMurcott_G00_M01_Text_08164BEA::
# 713 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "When I was a child, I visited the\nMUSEUM often.\pI used to dream about the mysteries of\nthe sea after seeing the exhibits.$"

Naranja_IslaMurcott_G00_M01_Text_08164C64::
# 717 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Hey, there! Quit pushing!\nThis is the line, can’t you see?$"

Naranja_IslaMurcott_G00_M01_Text_08164C9F::
# 721 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "TEAM {AQUA} has a policy of\nassembling and dispersing at the\loperation site.$"

Naranja_IslaMurcott_G00_M01_Text_08164CE8::
# 725 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Our BOSS is brilliant.\pWhat would he want to do with a\nMUSEUM now?$"

Naranja_IslaMurcott_G00_M01_Text_08164D2B::
# 729 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "What’s the new scheme, I wonder?\pOur BOSS is scary when he’s mad, so\nI’d better not screw things up...$"

Naranja_IslaMurcott_G00_M01_Text_08164D92::
# 733 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "If there’s something we need in the\nMUSEUM, we should take it all!$"

Naranja_IslaMurcott_G00_M01_Text_08164DD5::
# 737 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Hey, you there!\nDon’t butt in!$"

Naranja_IslaMurcott_G00_M01_Text_08164DF4::
# 741 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "A long line, huh?\pIt reminds me of the times I lined up to\nbuy smash-hit games...$"

Naranja_IslaMurcott_G00_M01_Text_08164E46::
# 745 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Why are we even lining up and paying?\nWe should just march in!$"

Naranja_IslaMurcott_G00_M01_Text_08164E85::
# 749 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "The sea is just so vast...\pCould the sea have been made by the\ntears shed by POKéMON?$"

Naranja_IslaMurcott_G00_M01_Text_08164EDB::
# 753 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Do you know what they do with old\nships that become too creaky to sail?\pThey sink them in the sea so they\nbecome habitats for POKéMON.$"

Naranja_IslaMurcott_G00_M01_Text_08164F62::
# 757 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Whenever I visit here, I get carried\naway and buy too much.$"

Naranja_IslaMurcott_G00_M01_Text_08164F9E::
# 761 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "If you want to change your POKéMON’s\nnickname, you’ll have to get the NAME\lRATER to help you.$"

Naranja_IslaMurcott_G00_M01_Text_08164FFC::
# 765 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Any POKéMON you get in a trade, you\ncan’t change its nickname.\pThe original TRAINER’s love for that\nPOKéMON is in the nickname.$"

Naranja_IslaMurcott_G00_M01_Text_0816507C::
# 769 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "A POKéMON CONTEST HALL opened in\nSLATEPORT recently.\pI plan on entering after I improve the\ncondition of my POKéMON.$"

Naranja_IslaMurcott_G00_M01_Text_081650F1::
# 773 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Do you know about the machine\nBERRY BLENDER?$"

Naranja_IslaMurcott_G00_M01_Text_0816511E::
# 777 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "People have to work together to get it\nto spin faster.\pThe faster you can make it spin, the\nbetter オカキクケS you can get, I’ve heard.$"

Naranja_IslaMurcott_G00_M01_Text_081651A1::
# 781 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "It’s used for making a kind of candy\ncalled a オカキクケ.\pIf you give a good オカキクケ to a POKéMON,\nits condition will improve by a lot.$"

Naranja_IslaMurcott_G00_M01_Text_08165222::
# 785 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "I was hoping that it was a famous star\nso I could get an autograph.\pBut who’s that being interviewed?\nIsn’t that CAPT. STERN?$"

Naranja_IslaMurcott_G00_M01_Text_081652A0::
# 789 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "That lady interviewer is so cool and\npretty.\pWhen I grow up, I’m going to be an\ninternational journalist!$"

Naranja_IslaMurcott_G00_M01_Text_0816530A::
# 793 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN says they discovered\nsomething at the bottom of the sea.\pI wonder what it is?\nWhat could it be?$"

Naranja_IslaMurcott_G00_M01_Text_08165376::
# 797 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "What’s going on here?\pDid the good CAPTAIN come back with\na big fish from the ocean floor?$"

Naranja_IslaMurcott_G00_M01_Text_081653F4::
# 801 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "A TV interview! Here!\nThe CAPTAIN’s a celebrity!$"

Naranja_IslaMurcott_G00_M01_Text_08165425::
# 805 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\nfor the camera!$"

Naranja_IslaMurcott_G00_M01_Text_08165458::
# 809 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "GABBY: I see, I see. You’ve had a most\ninvaluable experience...$"

Naranja_IslaMurcott_G00_M01_Text_08165498::
# 813 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\nmove ahead with our exploration.$"

Naranja_IslaMurcott_G00_M01_Text_081654E0::
# 817 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "GABBY: That’s wonderful, CAPT. STERN!\nThank you for taking the time from\lyour busy schedule to talk to us.\pWe hope we can interview you again\nwith news of more discoveries!$"

Naranja_IslaMurcott_G00_M01_Text_0816558D::
# 821 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN: Whew...\pThat was my first time to be filmed for\nTV. That was nerve wracking.$"

Naranja_IslaMurcott_G00_M01_Text_081655E7::
# 825 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\nYou’re looking great!\pWe made a huge discovery on our last\nseafloor exploration.\pWe found an underwater cavern on\nROUTE 128.\pWe think it’s the habitat of a POKéMON\nthat’s said to have been long extinct.$"

Naranja_IslaMurcott_G00_M01_Text_081656BC::
# 829 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Fufufu...\nCAPT. STERN, I presume.\pWe of TEAM {AQUA} will assume\ncontrol of your submarine!\pYour objections are meaningless!\nWe expect your total cooperation!\pFufufu...\nJust watch and learn what TEAM\l{AQUA} has planned!$"

Naranja_IslaMurcott_G00_M01_Text_0816578F::
# 833 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "CAPT. STERN: What was that all about?\pIt sounded like someone using a\nmegaphone...\pWhere did it come from?$"

Naranja_IslaMurcott_G00_M01_Text_081657FA::
# 837 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "It’s from the HARBOR!\pThe submarine!\nThey’re trying to take it!$"

Naranja_IslaMurcott_G00_M01_Text_0816583A::
# 841 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "{PLAYER}{KUN}!\nPlease, come with me!$"

Naranja_IslaMurcott_G00_M01_Text_08165856::
# 845 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "POKéMON CONTESTS\nHYPER RANK REGISTRATION\l“Let it burn! POKéMON TRAINERS!”$"

Naranja_IslaMurcott_G00_M01_Text_081658A0::
# 849 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN’S SHIPYARD\p“Wanted: A sailor capable of sailing\nin all currents.”$"

Naranja_IslaMurcott_G00_M01_Text_081658E8::
# 853 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN’S SHIPYARD\p“The ferry S.S. TIDAL nears\ncompletion for serving the ports of\lSLATEPORT and LILYCOVE.”$"

Naranja_IslaMurcott_G00_M01_Text_08165952::
# 857 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "STERN’S SHIPYARD\p“Boarding of the SLATEPORT-LILYCOVE\nferry S.S. TIDAL is handled at the\lHARBOR.”$"

Naranja_IslaMurcott_G00_M01_Text_081659B3::
# 861 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "POKéMON FAN CLUB\n“Calling all fans of POKéMON!”$"

Naranja_IslaMurcott_G00_M01_Text_081659E3::
# 865 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "“The endless sea sustains\nall life.”\pOCEANIC MUSEUM$"

Naranja_IslaMurcott_G00_M01_Text_08165A17::
# 869 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT CITY\p“The port where people and POKéMON\ncross paths.”$"

Naranja_IslaMurcott_G00_M01_Text_08165A57::
# 873 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT MARKET\n“Unique items found nowhere else!”$"

Naranja_IslaMurcott_G00_M01_Text_08165A8B::
# 877 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT HARBOR\p“The ferry S.S. TIDAL is under\nconstruction in the SHIPYARD.\p“Service is scheduled to begin\nshortly.”$"

Naranja_IslaMurcott_G00_M01_Text_08165B02::
# 881 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "SLATEPORT HARBOR\p“Enjoy a delightful cruise on the\nferry S.S. TIDAL.”$"

Naranja_IslaMurcott_G00_M01_Text_08165B48::
# 885 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "NAME RATER’S HOUSE\n“POKéMON nicknames rated.”$"

Naranja_IslaMurcott_G00_M01_Text_081A116E::
# 889 "data/maps/Naranja_IslaMurcott_G00_M01/scripts.pory"
	.string "Do you know the TM SECRET POWER?\pOur group, we love the TM SECRET\nPOWER.\pOne of our members will give it to you.\nCome back and show me if you get it.\pWe’ll accept you as a member and sell\nyou good stuff in secrecy.$"
