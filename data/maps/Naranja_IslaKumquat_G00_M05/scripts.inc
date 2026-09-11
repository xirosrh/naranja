Naranja_IslaKumquat_G00_M05_MapScripts::
# 5 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaKumquat_G00_M05_OnTransition
# 6 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaKumquat_G00_M05_OnLoad
	.byte 0


Naranja_IslaKumquat_G00_M05_OnTransition::
# 10 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_081B
# 11 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 0
# 12 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_HIDE_ISLA_KUMQUAT_G13_M04_REPORTER_M
# 13 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 14 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
# 15 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 16 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
	end


Naranja_IslaKumquat_G00_M05_OnLoad::
# 21 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x45, 4, 0xA9, 1
# 22 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x46, 4, 0x2A8, 1
# 23 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x47, 4, 0x2A9, 1
# 24 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x48, 4, 0x2AA, 1
# 25 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x45, 5, 0x91, 1
# 26 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x46, 5, 0x2B0, 1
# 27 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x47, 5, 0x2B1, 0
# 28 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x48, 5, 0x2B2, 1
# 29 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x45, 6, 0x1BE, 0
# 30 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x46, 6, 0x1BF, 0
# 31 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x47, 6, 0x170, 0
# 32 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x48, 6, 0x1BD, 0
# 33 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0070
# 34 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CABE
# 35 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 36 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CB2B
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CABE::
# 41 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4C, 0xC, 0x290, 1
# 42 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4D, 0xC, 0x291, 1
# 43 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4C, 0xD, 0x2A0, 1
# 44 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4D, 0xD, 0x2A1, 1
# 45 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4C, 0xE, 0x298, 1
# 46 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4D, 0xE, 0x299, 1
# 47 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4C, 0xF, 0x2A0, 1
# 48 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4D, 0xF, 0x2A1, 1
# 49 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4D, 0x10, 0x298, 1
# 50 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4E, 0x10, 0x299, 1
# 51 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4D, 0x11, 0x2A0, 1
# 52 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x4E, 0x11, 0x2A1, 1
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CB2B::
# 57 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x45, 4, 0xA9, 1
# 58 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x46, 4, 0xA9, 1
# 59 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x47, 4, 0xA9, 1
# 60 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x48, 4, 0xA9, 1
# 61 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x45, 5, 0x91, 1
# 62 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x46, 5, 0x91, 1
# 63 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x47, 5, 0x91, 1
# 64 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setmetatile 0x48, 5, 0x91, 1
	return


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId16::
# 69 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lock
# 70 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	faceplayer
# 71 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	dotimebasedevents
# 72 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08CF
# 73 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CBB4
# 74 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081C5A7A
# 75 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	random 0xA
# 77 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	addvar VAR_RESULT, 0x85
# 78 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 79 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 80 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 0
# 81 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 82 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 83 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08CF
# 84 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081C5B1D
# 85 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 86 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CBB4::
# 91 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081C5B5D
# 92 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 93 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId3::
# 98 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081686C9
# 99 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId4::
# 104 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168819
# 105 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId1::
# 110 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lock
# 111 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	faceplayer
# 112 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0070
# 113 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CC04
# 114 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081688C1
# 115 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CC04::
# 121 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168934
# 122 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 123 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId6::
# 128 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168A55
# 129 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId5::
# 135 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168A8D
# 136 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId7::
# 141 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168B1F
# 142 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId8::
# 147 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168B9B
# 148 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId9::
# 153 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lock
# 154 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	faceplayer
# 155 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 156 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CC5D
# 157 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168C16
# 158 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 159 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CC5D::
# 164 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168D15
# 165 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 166 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_5::
# 171 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168DA9
# 172 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_6::
# 177 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168DE1
# 178 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_7::
# 183 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168E2F
# 184 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_1::
# 189 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lockall
# 190 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 191 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 192 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 193 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CCA2
# 194 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168EA4
# 195 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 196 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CCA2::
# 201 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168E67
# 202 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 203 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_8::
# 208 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lockall
# 209 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 210 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CCC0
# 211 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168EDA
# 212 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 213 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CCC0::
# 218 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168F57
# 219 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 220 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_9::
# 225 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168FA1
# 226 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_3::
# 231 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168FF3
# 232 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sign_10::
# 237 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08169072
# 238 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJECT_10_LocalId10::
# 243 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lockall
# 244 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00DA
# 245 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CD18
# 246 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_0816864A
# 247 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 248 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	applymovement 32783, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 249 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 250 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168675
# 251 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 252 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 253 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 254 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00DA
# 255 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CD18::
# 260 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_0816864A
# 261 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 262 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJECT_13_LocalId13::
# 267 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168455
# 268 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJECT_14_LocalId14::
# 273 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081684C2
# 274 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJECT_15_LocalId15::
# 279 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168573
# 280 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJECT_12_LocalId12::
# 285 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081685EB
# 286 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_VARS_LocalId17::
# 291 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	lock
# 292 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	faceplayer
# 293 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkplayergender
# 294 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 295 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CD60
# 296 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 297 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDD3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CD60::
# 302 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 303 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_011E
# 304 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDB0
# 305 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_011E
# 306 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDB9
# 307 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 308 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDC2
# 309 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167B94
# 310 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 311 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 312 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 313 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE46
# 314 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 315 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE56
# 316 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 317 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE66
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDB0::
# 322 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167B55
# 323 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 5
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDB9::
# 328 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081679BF
# 329 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 5
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDC2::
# 334 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_011E
# 335 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167AEB
# 336 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 337 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	savebgm MUS_DUMMY
# 338 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	fadedefaultbgm
# 339 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CDD3::
# 344 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 345 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_011E
# 346 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE23
# 347 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_011E
# 348 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE2C
# 349 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 350 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE35
# 351 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081680A9
# 352 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 353 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 354 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 355 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE76
# 356 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 357 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE86
# 358 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 359 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE96
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE23::
# 364 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168067
# 365 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 5
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE2C::
# 370 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167F75
# 371 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 5
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE35::
# 376 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_011E
# 377 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_0816802C
# 378 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 379 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	savebgm MUS_DUMMY
# 380 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	fadedefaultbgm
# 381 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE46::
# 386 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_KUMQUAT_665, LOCALID_NONE, Naranja_IslaKumquat_G00_M05_Text_08167BD5
# 387 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEA6
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE56::
# 391 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_KUMQUAT_666, LOCALID_NONE, Naranja_IslaKumquat_G00_M05_Text_08167BD5
# 392 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEA6
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE66::
# 396 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_KUMQUAT_664, LOCALID_NONE, Naranja_IslaKumquat_G00_M05_Text_08167BD5
# 397 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEA6
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE76::
# 401 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_KUMQUAT_662, LOCALID_NONE, Naranja_IslaKumquat_G00_M05_Text_081680E4
# 402 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF12
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE86::
# 406 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_KUMQUAT_663, LOCALID_NONE, Naranja_IslaKumquat_G00_M05_Text_081680E4
# 407 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF12
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CE96::
# 411 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ISLA_KUMQUAT_661, LOCALID_NONE, Naranja_IslaKumquat_G00_M05_Text_081680E4
# 412 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF12
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEA6::
# 416 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167C6B
# 417 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 418 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setvar VAR_RESULT, 0
# 419 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 420 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEDE
# 421 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 422 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEEE
# 423 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 424 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEF7
# 425 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	clearflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M03_RIVAL_MAY_NORMAL
# 426 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	clearflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M03_PICHU_DOLL
# 427 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF6B
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEDE::
# 431 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_080E
# 432 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEE8
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEE8::
# 437 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEEE::
# 442 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167D08
# 443 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEF7::
# 448 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 449 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF09
# 450 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167DDD
# 451 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF09::
# 456 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08167EAA
# 457 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF12::
# 462 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168149
# 463 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
# 464 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setvar VAR_RESULT, 0
# 465 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 466 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CEDE
# 467 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 468 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF47
# 469 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 470 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF50
# 471 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	clearflag FLAG_HIDE_PUERTO_DE_TANGELO_G01_M01_RIVAL_BRENDAN_NORMAL
# 472 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF6B
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF47::
# 476 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_081681EA
# 477 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF50::
# 482 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 483 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF62
# 484 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_08168282
# 485 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF62::
# 490 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_0816835A
# 491 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 4
	return


Naranja_IslaKumquat_G00_M05_EventScript_Sub_0814CF6B::
# 496 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	closemessage
# 497 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 498 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 499 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	delay 0x32
# 500 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setfieldeffectargument 0, 1
# 501 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	dofieldeffect 0x1E
# 502 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	delay 0xF
# 503 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	removeobject 32783
# 504 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	waitfieldeffect 0x1E
# 505 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	savebgm MUS_DUMMY
# 506 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	fadedefaultbgm
# 507 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0124
# 508 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	release
	end


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId2::
# 513 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G00_M05_Text_0816DA89
# 514 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1::
# 519 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setweather 0xC
	return


Naranja_IslaKumquat_G00_M05_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId11::
# 524 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x54
# 525 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 526 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	callstd 1
	end


# 530 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
Naranja_IslaKumquat_G00_M05_Movement_081A0839:
# 531 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	face_player
	step_end

Naranja_IslaKumquat_G00_M05_Text_081679BF::
# 534 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "MAY: Oh, hey?\n{PLAYER}{KUN}, are you shopping, too?\pI bought a whole bunch of DOLLS and\nPOSTERS.\pOf course, I’ve also caught a lot of\nPOKéMON, and I’m raising them\lproperly, too.\pActually, I’m more worried if you’re\nraising POKéMON properly, {PLAYER}{KUN}.\pI’ll battle with you, so you can show\nme your POKéMON, {PLAYER}{KUN}.$"

Naranja_IslaKumquat_G00_M05_Text_08167AEB::
# 538 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven’t you\nbeen raising your POKéMON?\pThat’s not a very good showing as a\nTRAINER...$"

Naranja_IslaKumquat_G00_M05_Text_08167B55::
# 542 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\ncheck out your POKéMON!$"

Naranja_IslaKumquat_G00_M05_Text_08167B94::
# 546 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "MAY: The POKéMON I raised won’t be\nbeaten by your POKéMON, {PLAYER}{KUN}!$"

Naranja_IslaKumquat_G00_M05_Text_08167BD5::
# 550 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "... ... ... ... ... ... ... ...\pI remember the battle I had with you,\n{PLAYER}{KUN}, on ROUTE 103.\pThat battle helped you become this\nstrong, {PLAYER}{KUN}, didn’t it?$"

Naranja_IslaKumquat_G00_M05_Text_08167C6B::
# 554 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "MAY: I’m thinking of going back to\nLITTLEROOT soon.\pI’ve caught a decent group of POKéMON,\nand my POKéDEX is coming along, so\lI’m going home to show my dad.$"

Naranja_IslaKumquat_G00_M05_Text_08167D08::
# 558 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\pCollect all the GYM BADGES and take\nthe POKéMON LEAGUE challenge?\pWell, while you’re collecting BADGES,\n{PLAYER}{KUN}, I’m going to work on my\lPOKéDEX. I’ll complete it before you!\pSee you!$"

Naranja_IslaKumquat_G00_M05_Text_08167DDD::
# 562 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\pAre you taking the POKéMON LEAGUE\nchallenge?\pOr, are you going to complete your\nPOKéDEX?\pI might’ve lost to you in battling,\nbut I’ll finish my POKéDEX before you!\pSee you!$"

Naranja_IslaKumquat_G00_M05_Text_08167EAA::
# 566 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\pAre you taking the BATTLE TOWER\nchallenge?\pOr, are you going to complete your\nPOKéDEX?\pI might’ve lost to you in battling,\nbut I’ll finish my POKéDEX before you!\pSee you!$"

Naranja_IslaKumquat_G00_M05_Text_08167F75::
# 570 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "BRENDAN: Oh, hey, it’s {PLAYER}.\pI’m running an errand for my dad.\nNo, I’m not buying any DOLLS.\pAnyways, it’s been a while.\pWant to have a battle to see who’s been\nraising POKéMON better?$"

Naranja_IslaKumquat_G00_M05_Text_0816802C::
# 574 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "BRENDAN: Oh, what’s the matter?\nDon’t have the confidence?$"

Naranja_IslaKumquat_G00_M05_Text_08168067::
# 578 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "BRENDAN: Want to battle to see who’s\nbeen raising POKéMON better?$"

Naranja_IslaKumquat_G00_M05_Text_081680A9::
# 582 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "BRENDAN: Aww, but you know I’m not\ngoing to lose to no {PLAYER}.$"

Naranja_IslaKumquat_G00_M05_Text_081680E4::
# 586 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Humph...\nYou’ve done a lot of raising.\pThat stings a bit - I had a head start\non you as a TRAINER...$"

Naranja_IslaKumquat_G00_M05_Text_08168149::
# 590 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "BRENDAN: I...\nI plan on going home to LITTLEROOT.\pYou know I’m helping out my dad on his\nPOKéDEX. It’s coming together pretty\ldecently, so I should go show him.$"

Naranja_IslaKumquat_G00_M05_Text_081681EA::
# 594 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "{PLAYER}, what are you going to do?\pCollect all the GYM BADGES and take\nthe POKéMON LEAGUE challenge?\pMaybe I’ll do that, too...\pWell, anyway, hang in there!$"

Naranja_IslaKumquat_G00_M05_Text_08168282::
# 598 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "{PLAYER}, what are you going to do?\pSince you’re that strong, are you\ntaking the POKéMON LEAGUE challenge?\pHeh, even me - if I trained my POKéMON\na bit more, I should be stronger than\lyou, {PLAYER}.\pWell, anyway, hang in there!$"

Naranja_IslaKumquat_G00_M05_Text_0816835A::
# 602 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "{PLAYER}, what are you going to do?\pSince you’re that strong, are you\ntaking the BATTLE TOWER challenge?\pHeh, even me - if I trained my POKéMON\na bit more, I should be stronger than\lyou, {PLAYER}.\lMaybe I will go to the BATTLE TOWER.\pWell, anyway, hang in there!$"

Naranja_IslaKumquat_G00_M05_Text_08168455::
# 606 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Fufufu...\pWe moved more loot into our secret\nHIDEOUT today...\pWh-who are you?!\nI was just talking to myself!$"

Naranja_IslaKumquat_G00_M05_Text_081684C2::
# 610 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "I’m just a GRUNT, so I don’t know what\nthe BOSS is thinking...\pBut being on TEAM {AQUA}, I know I’ll get\nthe chance to do big things!\pWh-who are you?!\nI was just talking to myself!$"

Naranja_IslaKumquat_G00_M05_Text_08168573::
# 614 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Hey, you!\pDon’t go near the cave in the cove!\pWhy? You don’t need a reason why!\nI’m an adult, so you just listen to me!$"

Naranja_IslaKumquat_G00_M05_Text_081685EB::
# 618 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "If this whole wide world becomes ours,\nTEAM {AQUA}’s, it will be a happier\lplace for POKéMON, too.$"

Naranja_IslaKumquat_G00_M05_Text_0816864A::
# 622 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "There! WAILMER!\nLeap out of the water now!$"

Naranja_IslaKumquat_G00_M05_Text_08168675::
# 626 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Hunh? What do you want?\pYou’re messing up our training, so can\nyou, like, get lost?$"

Naranja_IslaKumquat_G00_M05_Text_081686C9::
# 630 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "The POKéMON that come to this CONTEST\nHALL are all prizewinners.\lThey come from all over the country.\pMy heart swells with excitement!$"

Naranja_IslaKumquat_G00_M05_Text_08168819::
# 634 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "I came from KANTO.\pThe HOENN region is beautiful with\nall its water and verdant nature.\pHunh? Wait a second...\pCould there be rare POKéMON that live\nonly in this area?$"

Naranja_IslaKumquat_G00_M05_Text_081688C1::
# 638 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "TEAM {AQUA}’s been training their\nWAILMER in the cove.\pWe SAILORS can’t get our boats out\nto sea with them in the way!$"

Naranja_IslaKumquat_G00_M05_Text_08168934::
# 642 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Ahoy, did you know?\pSomeone punted TEAM {AQUA} out of the\nway for us!\pThat got the WAILMER out of the cove,\nso we can get our boats out again.$"

Naranja_IslaKumquat_G00_M05_Text_08168A55::
# 646 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "El transporte marìtimo de fuel   \nsiempre es peligroso.$"

Naranja_IslaKumquat_G00_M05_Text_08168A8D::
# 650 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "I’m an ART DEALER.\pI am a buyer and seller of fine art,\nespecially paintings.\pI’ve heard that the MUSEUM here has\nmagnificent works on exhibit...$"

Naranja_IslaKumquat_G00_M05_Text_08168B1F::
# 654 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Even as we grow old and wrinkled, the\nsea remains forever young with the\lvivid brilliance of life...\pFwohoho fwohohohoho...$"

Naranja_IslaKumquat_G00_M05_Text_08168B9B::
# 658 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "It was sixty years ago that my husband\nproposed to me here.\lThe sea remains as beautiful as ever.\pMufufufu mufufufufufu...$"

Naranja_IslaKumquat_G00_M05_Text_08168C16::
# 662 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "Hm, you know of the peculiar cavern\nin this cove?\pThat had been a natural formation, but\nthen that TEAM {AQUA} lot came along\land made their renovations.\pThey call themselves the “nature-loving\nTEAM {AQUA}”!\pBut what they do and what they say\ndon’t match at all!$"

Naranja_IslaKumquat_G00_M05_Text_08168D15::
# 666 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "That cave in the cove...\nIt seems someone sealed the entrance,\lso no one can enter it anymore.\pThat TEAM {AQUA} lot, they must\nhave gone away for good.$"

Naranja_IslaKumquat_G00_M05_Text_08168DA9::
# 670 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "LILYCOVE CITY\p“Where the land ends and the\nsea begins.”$"

Naranja_IslaKumquat_G00_M05_Text_08168DE1::
# 674 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "POKéMON CONTESTS\nMASTER RANK REGISTRATION\p“Enter CONTESTS with your friends!”$"

Naranja_IslaKumquat_G00_M05_Text_08168E2F::
# 678 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "COVE LILY MOTEL\p“Remember us as COVE LILY of\nLILYCOVE.”$"

Naranja_IslaKumquat_G00_M05_Text_08168E67::
# 682 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "LILYCOVE MUSEUM\p“POKéMON Masterpiece Collection\non exhibit!”$"

Naranja_IslaKumquat_G00_M05_Text_08168EA4::
# 686 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "LILYCOVE MUSEUM\p“{PLAYER}’s POKéMON Collection\non exhibit!”$"

Naranja_IslaKumquat_G00_M05_Text_08168EDA::
# 690 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p“The ferry S.S. TIDAL is under\nconstruction in SLATEPORT CITY.\p“Service is scheduled to begin\nshortly.”$"

Naranja_IslaKumquat_G00_M05_Text_08168F57::
# 694 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p“Enjoy a delightful cruise on the\nferry S.S. TIDAL.”$"

Naranja_IslaKumquat_G00_M05_Text_08168FA1::
# 698 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\pThe names of TRAINERS are scribbled\nall over the sign...$"

Naranja_IslaKumquat_G00_M05_Text_08168FF3::
# 702 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p“Overflowing with great merchandise\nand excitement!\p“A great place to find that something\nyou need!”$"

Naranja_IslaKumquat_G00_M05_Text_08169072::
# 706 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "MOVE DELETER’S HOUSE\p“Unwanted POKéMON moves deleted.”$"

Naranja_IslaKumquat_G00_M05_Text_0816DA89::
# 710 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "The sea, huh?\pI wonder what it’s like at the bottom\nof the sea?$"

Naranja_IslaKumquat_G00_M05_Text_081C5A7A::
# 714 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "When it gets right down to it...\pThe same way suits suit me perfectly,\na crisp breeze suits the sea.\pAnd you, a BERRY suits you to a “T”...\pWhy should that be so?$"

Naranja_IslaKumquat_G00_M05_Text_081C5B1D::
# 718 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "When it gets right down to it...\pIt’s because you’re a TRAINER!$"

Naranja_IslaKumquat_G00_M05_Text_081C5B5D::
# 722 "data/maps/Naranja_IslaKumquat_G00_M05/scripts.pory"
	.string "When it gets right down to it...\pThe way dignified simplicity suits me,\nオカキクケS perfectly suit POKéMON.$"
