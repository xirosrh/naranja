Naranja_IslaNueva_G00_M07_MapScripts::
# 5 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaNueva_G00_M07_OnLoad
# 6 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNueva_G00_M07_OnTransition
# 7 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_IslaNueva_G00_M07_OnResume
	.byte 0


Naranja_IslaNueva_G00_M07_OnLoad::
# 11 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 12 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call_if LESS_THAN, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D0A0
# 13 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 14 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D0B1
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D0A0::
# 19 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_NUEVA_G00_M07_OLD_MAN_1, 0x1F, 0x12
# 20 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 0x1F, 0x20, 0x250, 1
	return


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D0B1::
# 25 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 26 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call_if LESS_THAN, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D0BB
	return


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D0BB::
# 31 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 9, 6, 0x248, 1
# 32 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 9, 0x11, 0x248, 1
# 33 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 9, 0x1A, 0x248, 1
# 34 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 0x2C, 0x11, 0x248, 1
# 35 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 8, 0x23, 0x248, 1
# 36 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 0x35, 0x1C, 0x248, 1
# 37 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 0x2D, 6, 0x248, 1
# 38 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 0x30, 0x19, 0x248, 1
# 39 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setmetatile 0x1F, 0x20, 0x250, 1
	return


Naranja_IslaNueva_G00_M07_OnTransition::
# 44 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_081D
# 45 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 46 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D159
# 47 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 48 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D123
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D123::
# 53 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
# 54 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_NUEVA_G00_M07_BEAUTY, 0x1D, 0x13
# 55 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_NUEVA_G00_M07_BEAUTY_2, 0x21, 0x13
# 56 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_NUEVA_STORY_STATE, 1
# 57 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	call_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D142
	return


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D142::
# 62 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_NUEVA_G00_M07_STEVEN, 0x1D, 6
# 63 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_STEVEN, 0xA
# 64 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_NUEVA_G00_M07_WALLACE, 0x1E, 6
# 65 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_WALLACE, 9
	return


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D159::
# 70 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectxyperm LOCALID_ISLA_NUEVA_G00_M07_STEVEN, 0x1F, 0x21
# 71 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_STEVEN, 8
	return


Naranja_IslaNueva_G00_M07_OnResume::
# 76 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setdivewarp MAP_NARANJA_UNDERWATER_G24_M05, 0xFF, 9, 6
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 81 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 82 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 83 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 84 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D183
# 85 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081696A4, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D183::
# 91 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A455, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 97 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A2B2, MSGBOX_NPC
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId2::
# 102 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A2FB, MSGBOX_NPC
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId6::
# 107 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 108 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 109 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	dotimebasedevents
# 110 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	special GetPlayerBigGuyGirlString
# 111 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_08D2
# 112 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D241
# 113 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C63F2, MSGBOX_DEFAULT
# 114 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	random 0xA
# 115 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	addvar VAR_RESULT, 0x14
# 116 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	addvar VAR_RESULT, 0x85
# 117 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 118 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 119 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 0
# 120 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 121 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 122 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_08D2
# 123 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C64D0, MSGBOX_DEFAULT
# 124 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	random 2
# 125 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 126 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D1FF
# 127 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 128 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D220
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D1FF::
# 133 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x8F
# 134 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 135 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 0
# 136 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 137 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 138 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C650B, MSGBOX_DEFAULT
# 139 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D220::
# 144 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x93
# 145 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 146 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 0
# 147 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 148 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 149 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C650B, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D241::
# 155 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C6540, MSGBOX_YESNO
# 156 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 157 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D25E
# 158 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C6626, MSGBOX_DEFAULT
# 159 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D25E::
# 164 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081C65D4, MSGBOX_DEFAULT
# 165 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 170 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 171 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 172 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_04D4
# 173 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D27D
# 174 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A4D6, MSGBOX_DEFAULT
# 175 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D27D::
# 180 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A531, MSGBOX_DEFAULT
# 181 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId9::
# 186 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 187 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 188 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 189 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D29C
# 190 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_08169813, MSGBOX_DEFAULT
# 191 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D29C::
# 196 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A587, MSGBOX_DEFAULT
# 197 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId11::
# 202 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 203 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 204 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 205 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2BB
# 206 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081698A0, MSGBOX_DEFAULT
# 207 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2BB::
# 212 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A614, MSGBOX_DEFAULT
# 213 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId7::
# 218 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 219 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 220 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 221 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2DA
# 222 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_081697A7, MSGBOX_DEFAULT
# 223 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2DA::
# 228 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A6AE, MSGBOX_DEFAULT
# 229 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId8::
# 234 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816972B, MSGBOX_NPC
	end


Naranja_IslaNueva_G00_M07_EventScript_Sign_1::
# 239 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A6C7, MSGBOX_SIGN
	end


Naranja_IslaNueva_G00_M07_EventScript_Sign_6::
# 244 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A711, MSGBOX_SIGN
	end


Naranja_IslaNueva_G00_M07_EventScript_Trigger_1::
# 249 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lockall
# 250 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 251 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 252 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 253 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	playse SE_PIN
# 254 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 255 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 257 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 258 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D413
# 259 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 260 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_08169E0F, MSGBOX_DEFAULT
# 261 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 262 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D417
# 263 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNueva_G00_M07_Movement_0814D440
# 264 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN
# 265 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_08169E82, MSGBOX_DEFAULT
# 266 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	playse SE_PIN
# 267 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 268 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 269 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 270 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 271 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_08169F3C, MSGBOX_DEFAULT
# 272 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 273 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x1E
# 274 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_IslaNueva_G00_M07_Movement_0814D46A
# 275 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D41D
# 276 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNueva_G00_M07_Movement_0814D445
# 277 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 278 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 279 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 280 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 281 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x1E
# 282 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 283 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 284 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_08169F6B, MSGBOX_DEFAULT
# 285 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 286 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x1E
# 287 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_IslaNueva_G00_M07_Movement_0814D47C
# 288 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNueva_G00_M07_Movement_0814D457
# 289 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D42D
# 290 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 291 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 292 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 293 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A06C, MSGBOX_DEFAULT
# 294 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 295 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 296 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A13E, MSGBOX_DEFAULT
# 297 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_NUEVA_G00_M07_WALLACE
# 298 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_WALLACE, 9
# 299 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_NUEVA_G00_M07_STEVEN
# 300 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_STEVEN, 0xA
# 301 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setvar VAR_NARANJA_ISLA_NUEVA_STORY_STATE, 2
# 302 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	releaseall
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_WALLACE_LocalId5::
# 307 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A1DB, MSGBOX_NPC
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_GARY_LocalId10::
# 312 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 313 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 314 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 315 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D4AD
# 316 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A249, MSGBOX_DEFAULT
# 317 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D4AD::
# 322 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	msgbox Naranja_IslaNueva_G00_M07_Text_0816A33E, MSGBOX_DEFAULT
# 323 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 324 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 325 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 326 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x32
# 327 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setfieldeffectargument 0, 1
# 328 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	dofieldeffect 0x1E
# 329 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0xF
# 330 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	removeobject 32783
# 331 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitfieldeffect 0x1E
# 332 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


# 336 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D413:
# 337 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 338 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 339 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 342 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D417:
# 343 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 344 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 345 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 346 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_up
# 347 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_in_place_faster_down
	step_end

# 350 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D41D:
# 351 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 352 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 353 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 354 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 355 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 356 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 357 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 358 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 359 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 360 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 361 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 362 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 363 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 364 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 365 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 368 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D42D:
# 369 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 370 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 371 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 372 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 373 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 374 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 375 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 376 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 377 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 378 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 379 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 380 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 381 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 382 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 383 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 384 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 385 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 386 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

# 389 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D440:
# 390 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 391 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 392 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 393 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

# 396 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D445:
# 397 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 398 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 399 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 400 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 401 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 402 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 403 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 404 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 405 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 406 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 407 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 408 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 409 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 410 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 411 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 412 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 413 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 416 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D457:
# 417 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 418 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 419 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 420 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 421 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 422 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 423 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 424 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 425 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 426 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 427 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 428 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 429 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 430 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 431 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 432 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 433 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 434 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

# 437 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D46A:
# 438 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 439 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 440 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 441 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 442 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 443 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 444 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 445 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 446 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 447 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 448 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 449 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 450 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 451 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 452 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 453 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 454 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 457 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D47C:
# 458 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 459 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 460 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 461 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 462 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 463 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 464 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 465 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 466 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 467 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 468 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 469 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 470 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 471 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 472 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 473 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 474 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 475 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

Naranja_IslaNueva_G00_M07_Text_081696A4::
# 478 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Who might you be?\pThis is the CAVE OF ORIGIN.\pThe spirits of POKéMON, becalmed at\nMT. PYRE, are said to be revived here.\pPlease leave.$"

Naranja_IslaNueva_G00_M07_Text_0816972B::
# 482 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Diving in the sea. Climbing up and\ndown stairs all the time...\pIf you live in this town, you end up\ngetting physically fit.$"

Naranja_IslaNueva_G00_M07_Text_081697A7::
# 486 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "I... I’ve never been out of this city.\pI wonder what the world is like on the\nother side of this round sky?$"

Naranja_IslaNueva_G00_M07_Text_08169813::
# 490 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hm!\nYou’ve come all the way to SOOTOPOLIS?\lYou’re no ordinary tourist.\pBut I suppose that doesn’t make you an\nextraordinary tourist, either.$"

Naranja_IslaNueva_G00_M07_Text_081698A0::
# 494 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in the\ncrater of a volcano.\pIf you look up at the sky, the lip of\nthe crater is also visible.\lSo, all you see is the sky in a circle.\pBut that’s what makes the sky above\nSOOTOPOLIS the most beautiful.$"

Naranja_IslaNueva_G00_M07_Text_08169E0F::
# 498 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, you came, too?\nUnder this scorching sun, yet...\pOh, yes, can you hear out what my\nfriend has to say?$"

Naranja_IslaNueva_G00_M07_Text_08169E82::
# 502 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "My name is WALLACE.\nI’m this town’s GYM LEADER.\pI’ve also been entrusted with the\nprotection of the CAVE OF ORIGIN.\pThis sunshine is caused by a power\nemanating from the CAVE OF ORIGIN.$"

Naranja_IslaNueva_G00_M07_Text_08169F3C::
# 506 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "That... That is the RED ORB.\pI see.\nFollow me.$"

Naranja_IslaNueva_G00_M07_Text_08169F6B::
# 510 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: This sunlight...\pPeople and POKéMON need sunlight\nto live...\pBut why does this sunlight fill us\nwith so much dread?\pThe blazing sun over SOOTOPOLIS is\nintensifying... Soon, all of HOENN\lwill be under its withering glare...\pIf that were to happen...$"

Naranja_IslaNueva_G00_M07_Text_0816A06C::
# 514 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN is ahead.\pNo one from SOOTOPOLIS is permitted\nto enter the CAVE OF ORIGIN.\pBut you must go. \nTogether with your RED ORB.\pYou must go regardless of what awaits\nyou inside the CAVE...$"

Naranja_IslaNueva_G00_M07_Text_0816A13E::
# 518 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, I never expected you\nto be holding the RED ORB.\pYou’ll be okay. With your POKéMON,\nyou’ll get things done no matter what.\pI’m convinced of it!$"

Naranja_IslaNueva_G00_M07_Text_0816A1DB::
# 522 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "WALLACE: You must go together with\nyour RED ORB.\pYou must go regardless of what awaits\nyou inside the CAVE...$"

Naranja_IslaNueva_G00_M07_Text_0816A249::
# 526 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: You’ll be okay. With your\nPOKéMON, you’ll get things done\lwhatever happens.\pI’m convinced of it!$"

Naranja_IslaNueva_G00_M07_Text_0816A2B2::
# 530 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "The legend told by the old man on\nMT. PYRE... It wasn’t a made-up story.$"

Naranja_IslaNueva_G00_M07_Text_0816A2FB::
# 534 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "The natural balance of HOENN is going\nthrough a wrenching shift...$"

Naranja_IslaNueva_G00_M07_Text_0816A33E::
# 538 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, we owe it all to you.\pThe sky above SOOTOPOLIS has returned\nto normal. For that, WALLACE sends his\lthanks, too.\pAnd, that same WALLACE is waiting for\nyou inside.\pHe’s strong.\nBut the way you are now, you should be\lon equal footing with him.\pGive it your best shot.$"

Naranja_IslaNueva_G00_M07_Text_0816A455::
# 542 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "All life starts at the CAVE OF ORIGIN,\nand it all ends on MT. PYRE...\pWhere do people and POKéMON come\nfrom? Where are we bound?$"

Naranja_IslaNueva_G00_M07_Text_0816A4D6::
# 546 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Let me guess, you’re going to challenge\nWALLACE?\pOh, you are really?\nYou’re awfully brave!$"

Naranja_IslaNueva_G00_M07_Text_0816A531::
# 550 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Let me guess, you’ve beaten WALLACE!\nOh, you did, really?\pMaybe I’ll become your fan!$"

Naranja_IslaNueva_G00_M07_Text_0816A587::
# 554 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hm!\nYou’ve come all the way to SOOTOPOLIS?\lYou’re no ordinary tourist.\pBut I suppose that doesn’t make you an\nextraordinary tourist, either.$"

Naranja_IslaNueva_G00_M07_Text_0816A614::
# 558 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "A circle of a night sky framed by the\ncrater of a volcano...\pAnd in that ring, stars flicker and\nblink as if they were alive...\lIt’s my favorite scenery.$"

Naranja_IslaNueva_G00_M07_Text_0816A6AE::
# 562 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hunh? Where is my house?$"

Naranja_IslaNueva_G00_M07_Text_0816A6C7::
# 566 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\nLEADER: WALLACE\p“Artist, and lover of WATER.”$"

Naranja_IslaNueva_G00_M07_Text_0816A711::
# 570 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "SOOTOPOLIS CITY\p“The mystical city where history\nslumbers.”$"

Naranja_IslaNueva_G00_M07_Text_081C63F2::
# 574 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hi, what’s your name?\p... ... ...  ... ... ...  ... ... ...\nOkay. That’s nice!\pMy name is KIRI.\pMy mommy and daddy named me that so\nI would grow healthy and warmhearted.\lThat’s what they wished.\pYou can have one of these.$"

Naranja_IslaNueva_G00_M07_Text_081C64D0::
# 578 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "KIRI will give you this BERRY, too!\nI really like it lots!$"

Naranja_IslaNueva_G00_M07_Text_081C650B::
# 582 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "I wonder what kind of wish is included\nin your name.$"

Naranja_IslaNueva_G00_M07_Text_081C6540::
# 586 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Spring, summer, autumn, and winter.\pIf you’re born in springtime, do you like\nthe spring, and if you’re born in the\lsummer, do you like the summer?$"

Naranja_IslaNueva_G00_M07_Text_081C65D4::
# 590 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Then KIRI was born in the autumn,\nso I love the autumn!\pWhich season do you like?$"

Naranja_IslaNueva_G00_M07_Text_081C6626::
# 594 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Oh...\nIt doesn’t matter...\pThere’s so much that I want to know...$"
