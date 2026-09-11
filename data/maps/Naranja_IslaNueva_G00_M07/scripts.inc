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
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081696A4
# 86 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D183::
# 92 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A455
# 93 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 94 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 99 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A2B2
# 100 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId2::
# 105 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A2FB
# 106 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId6::
# 111 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 112 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 113 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	dotimebasedevents
# 114 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	special GetPlayerBigGuyGirlString
# 115 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_08D2
# 116 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D241
# 117 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C63F2
# 118 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	random 0xA
# 120 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	addvar VAR_RESULT, 0x14
# 121 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	addvar VAR_RESULT, 0x85
# 122 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 123 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 124 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 0
# 125 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 126 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 127 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_08D2
# 128 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C64D0
# 129 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	random 2
# 131 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 132 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D1FF
# 133 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 134 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D220
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D1FF::
# 139 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x8F
# 140 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 141 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 0
# 142 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 143 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 144 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C650B
# 145 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 146 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D220::
# 151 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8000, 0x93
# 152 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 153 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 0
# 154 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 155 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 156 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C650B
# 157 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 158 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D241::
# 163 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C6540
# 164 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 5
# 165 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 166 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D25E
# 167 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C6626
# 168 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 169 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D25E::
# 174 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081C65D4
# 175 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 176 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 181 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 182 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 183 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_04D4
# 184 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D27D
# 185 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A4D6
# 186 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 187 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D27D::
# 192 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A531
# 193 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 194 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId9::
# 199 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 200 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 201 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 202 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D29C
# 203 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_08169813
# 204 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 205 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D29C::
# 210 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A587
# 211 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 212 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId11::
# 217 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 218 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 219 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 220 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2BB
# 221 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081698A0
# 222 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 223 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2BB::
# 228 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A614
# 229 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 230 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId7::
# 235 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 236 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 237 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 238 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2DA
# 239 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_081697A7
# 240 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 241 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D2DA::
# 246 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A6AE
# 247 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 248 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId8::
# 253 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816972B
# 254 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G00_M07_EventScript_Sign_1::
# 259 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A6C7
# 260 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaNueva_G00_M07_EventScript_Sign_6::
# 265 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A711
# 266 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 3
	end


Naranja_IslaNueva_G00_M07_EventScript_Trigger_1::
# 271 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lockall
# 272 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 273 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 274 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 275 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	playse SE_PIN
# 276 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 277 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 278 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 279 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 280 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D413
# 281 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 282 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_08169E0F
# 283 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 284 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 285 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D417
# 286 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNueva_G00_M07_Movement_0814D440
# 287 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN
# 288 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_08169E82
# 289 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 290 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	playse SE_PIN
# 291 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 292 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 293 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 294 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 295 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_08169F3C
# 296 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 297 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 298 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x1E
# 299 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_IslaNueva_G00_M07_Movement_0814D46A
# 300 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D41D
# 301 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNueva_G00_M07_Movement_0814D445
# 302 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 303 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 304 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 305 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 306 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x1E
# 307 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 308 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 309 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_08169F6B
# 310 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 311 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 312 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x1E
# 313 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_IslaNueva_G00_M07_Movement_0814D47C
# 314 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNueva_G00_M07_Movement_0814D457
# 315 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_STEVEN, Naranja_IslaNueva_G00_M07_Movement_0814D42D
# 316 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 317 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_ISLA_NUEVA_G00_M07_WALLACE, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 318 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 319 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A06C
# 320 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 321 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 322 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 323 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A13E
# 324 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 325 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_NUEVA_G00_M07_WALLACE
# 326 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_WALLACE, 9
# 327 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_NUEVA_G00_M07_STEVEN
# 328 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_NUEVA_G00_M07_STEVEN, 0xA
# 329 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setvar VAR_NARANJA_ISLA_NUEVA_STORY_STATE, 2
# 330 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	releaseall
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_WALLACE_LocalId5::
# 335 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A1DB
# 336 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 2
	end


Naranja_IslaNueva_G00_M07_EventScript_OBJ_EVENT_GFX_STEVEN_LocalId10::
# 341 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	lock
# 342 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	faceplayer
# 343 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0071
# 344 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D4AD
# 345 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A249
# 346 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 347 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


Naranja_IslaNueva_G00_M07_EventScript_Sub_0814D4AD::
# 352 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	loadword 0, Naranja_IslaNueva_G00_M07_Text_0816A33E
# 353 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	callstd 4
# 354 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	closemessage
# 355 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 356 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitmovement LOCALID_NONE
# 357 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0x32
# 358 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	setfieldeffectargument 0, 1
# 359 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	dofieldeffect 0x1E
# 360 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay 0xF
# 361 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	removeobject 32783
# 362 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	waitfieldeffect 0x1E
# 363 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	release
	end


# 367 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D413:
# 368 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 369 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 370 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 373 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D417:
# 374 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 375 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 376 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 377 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_up
# 378 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_in_place_faster_down
	step_end

# 381 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D41D:
# 382 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 383 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 384 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 385 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 386 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 387 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 388 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 389 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 390 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 391 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 392 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 393 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 394 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 395 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 396 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 399 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D42D:
# 400 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 401 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 402 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 403 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 404 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 405 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 406 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 407 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 408 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 409 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 410 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 411 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 412 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 413 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 414 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 415 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 416 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 417 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

# 420 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D440:
# 421 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 422 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 423 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 424 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

# 427 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D445:
# 428 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 429 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 430 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 431 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 432 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 433 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 434 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 435 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 436 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 437 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 438 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 439 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 440 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 441 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 442 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 443 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 444 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 447 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D457:
# 448 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 449 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 450 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 451 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 452 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 453 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 454 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 455 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 456 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 457 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 458 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 459 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 460 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 461 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 462 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 463 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 464 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 465 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

# 468 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D46A:
# 469 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 470 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 471 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 472 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 473 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 474 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 475 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 476 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 477 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 478 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 479 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 480 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 481 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 482 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 483 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 484 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 485 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
	step_end

# 488 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
Naranja_IslaNueva_G00_M07_Movement_0814D47C:
# 489 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 490 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	delay_16
# 491 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 492 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_left
# 493 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 494 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 495 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 496 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 497 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 498 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 499 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 500 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_down
# 501 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 502 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 503 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 504 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 505 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
# 506 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	walk_right
	step_end

Naranja_IslaNueva_G00_M07_Text_081696A4::
# 509 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Who might you be?\pThis is the CAVE OF ORIGIN.\pThe spirits of POKéMON, becalmed at\nMT. PYRE, are said to be revived here.\pPlease leave.$"

Naranja_IslaNueva_G00_M07_Text_0816972B::
# 513 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Diving in the sea. Climbing up and\ndown stairs all the time...\pIf you live in this town, you end up\ngetting physically fit.$"

Naranja_IslaNueva_G00_M07_Text_081697A7::
# 517 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "I... I’ve never been out of this city.\pI wonder what the world is like on the\nother side of this round sky?$"

Naranja_IslaNueva_G00_M07_Text_08169813::
# 521 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hm!\nYou’ve come all the way to SOOTOPOLIS?\lYou’re no ordinary tourist.\pBut I suppose that doesn’t make you an\nextraordinary tourist, either.$"

Naranja_IslaNueva_G00_M07_Text_081698A0::
# 525 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in the\ncrater of a volcano.\pIf you look up at the sky, the lip of\nthe crater is also visible.\lSo, all you see is the sky in a circle.\pBut that’s what makes the sky above\nSOOTOPOLIS the most beautiful.$"

Naranja_IslaNueva_G00_M07_Text_08169E0F::
# 529 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, you came, too?\nUnder this scorching sun, yet...\pOh, yes, can you hear out what my\nfriend has to say?$"

Naranja_IslaNueva_G00_M07_Text_08169E82::
# 533 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "My name is WALLACE.\nI’m this town’s GYM LEADER.\pI’ve also been entrusted with the\nprotection of the CAVE OF ORIGIN.\pThis sunshine is caused by a power\nemanating from the CAVE OF ORIGIN.$"

Naranja_IslaNueva_G00_M07_Text_08169F3C::
# 537 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "That... That is the RED ORB.\pI see.\nFollow me.$"

Naranja_IslaNueva_G00_M07_Text_08169F6B::
# 541 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: This sunlight...\pPeople and POKéMON need sunlight\nto live...\pBut why does this sunlight fill us\nwith so much dread?\pThe blazing sun over SOOTOPOLIS is\nintensifying... Soon, all of HOENN\lwill be under its withering glare...\pIf that were to happen...$"

Naranja_IslaNueva_G00_M07_Text_0816A06C::
# 545 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN is ahead.\pNo one from SOOTOPOLIS is permitted\nto enter the CAVE OF ORIGIN.\pBut you must go. \nTogether with your RED ORB.\pYou must go regardless of what awaits\nyou inside the CAVE...$"

Naranja_IslaNueva_G00_M07_Text_0816A13E::
# 549 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, I never expected you\nto be holding the RED ORB.\pYou’ll be okay. With your POKéMON,\nyou’ll get things done no matter what.\pI’m convinced of it!$"

Naranja_IslaNueva_G00_M07_Text_0816A1DB::
# 553 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "WALLACE: You must go together with\nyour RED ORB.\pYou must go regardless of what awaits\nyou inside the CAVE...$"

Naranja_IslaNueva_G00_M07_Text_0816A249::
# 557 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: You’ll be okay. With your\nPOKéMON, you’ll get things done\lwhatever happens.\pI’m convinced of it!$"

Naranja_IslaNueva_G00_M07_Text_0816A2B2::
# 561 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "The legend told by the old man on\nMT. PYRE... It wasn’t a made-up story.$"

Naranja_IslaNueva_G00_M07_Text_0816A2FB::
# 565 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "The natural balance of HOENN is going\nthrough a wrenching shift...$"

Naranja_IslaNueva_G00_M07_Text_0816A33E::
# 569 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, we owe it all to you.\pThe sky above SOOTOPOLIS has returned\nto normal. For that, WALLACE sends his\lthanks, too.\pAnd, that same WALLACE is waiting for\nyou inside.\pHe’s strong.\nBut the way you are now, you should be\lon equal footing with him.\pGive it your best shot.$"

Naranja_IslaNueva_G00_M07_Text_0816A455::
# 573 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "All life starts at the CAVE OF ORIGIN,\nand it all ends on MT. PYRE...\pWhere do people and POKéMON come\nfrom? Where are we bound?$"

Naranja_IslaNueva_G00_M07_Text_0816A4D6::
# 577 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Let me guess, you’re going to challenge\nWALLACE?\pOh, you are really?\nYou’re awfully brave!$"

Naranja_IslaNueva_G00_M07_Text_0816A531::
# 581 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Let me guess, you’ve beaten WALLACE!\nOh, you did, really?\pMaybe I’ll become your fan!$"

Naranja_IslaNueva_G00_M07_Text_0816A587::
# 585 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hm!\nYou’ve come all the way to SOOTOPOLIS?\lYou’re no ordinary tourist.\pBut I suppose that doesn’t make you an\nextraordinary tourist, either.$"

Naranja_IslaNueva_G00_M07_Text_0816A614::
# 589 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "A circle of a night sky framed by the\ncrater of a volcano...\pAnd in that ring, stars flicker and\nblink as if they were alive...\lIt’s my favorite scenery.$"

Naranja_IslaNueva_G00_M07_Text_0816A6AE::
# 593 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hunh? Where is my house?$"

Naranja_IslaNueva_G00_M07_Text_0816A6C7::
# 597 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\nLEADER: WALLACE\p“Artist, and lover of WATER.”$"

Naranja_IslaNueva_G00_M07_Text_0816A711::
# 601 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "SOOTOPOLIS CITY\p“The mystical city where history\nslumbers.”$"

Naranja_IslaNueva_G00_M07_Text_081C63F2::
# 605 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Hi, what’s your name?\p... ... ...  ... ... ...  ... ... ...\nOkay. That’s nice!\pMy name is KIRI.\pMy mommy and daddy named me that so\nI would grow healthy and warmhearted.\lThat’s what they wished.\pYou can have one of these.$"

Naranja_IslaNueva_G00_M07_Text_081C64D0::
# 609 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "KIRI will give you this BERRY, too!\nI really like it lots!$"

Naranja_IslaNueva_G00_M07_Text_081C650B::
# 613 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "I wonder what kind of wish is included\nin your name.$"

Naranja_IslaNueva_G00_M07_Text_081C6540::
# 617 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Spring, summer, autumn, and winter.\pIf you’re born in springtime, do you like\nthe spring, and if you’re born in the\lsummer, do you like the summer?$"

Naranja_IslaNueva_G00_M07_Text_081C65D4::
# 621 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Then KIRI was born in the autumn,\nso I love the autumn!\pWhich season do you like?$"

Naranja_IslaNueva_G00_M07_Text_081C6626::
# 625 "data/maps/Naranja_IslaNueva_G00_M07/scripts.pory"
	.string "Oh...\nIt doesn’t matter...\pThere’s so much that I want to know...$"
