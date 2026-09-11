Naranja_IslaTrovita_G00_M03_MapScripts::
# 5 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTrovita_G00_M03_OnTransition
	.byte 0


Naranja_IslaTrovita_G00_M03_OnTransition::
# 9 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0819
# 10 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 11 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId2::
# 16 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 17 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 18 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 19 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C39B
# 20 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_0816689D
# 21 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C39B::
# 27 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_0816690C
# 28 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_MAN_7_LocalId11::
# 34 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 35 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 36 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166A67
# 37 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId1::
# 43 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166AE0
# 44 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId6::
# 49 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 50 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 51 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0807
# 52 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3CF
# 53 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_0816696D
# 54 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3CF::
# 60 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_081669FE
# 61 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 62 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId5::
# 67 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 68 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 69 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 70 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3EE
# 71 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166B86
# 72 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 73 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3EE::
# 78 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166BEF
# 79 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId4::
# 85 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166C98
# 86 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId3::
# 91 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166CFA
# 92 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_9::
# 97 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08167374
# 98 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_8::
# 103 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_081673FA
# 104 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_1::
# 109 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08167439
# 110 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_5::
# 115 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_081674DD
# 116 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_2::
# 121 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08167525
# 122 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_10::
# 127 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08167568
# 128 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_2_LocalId7::
# 133 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 134 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 135 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166D59
# 136 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_LITTLE_BOY_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 138 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 139 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId8::
# 144 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 145 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 146 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166DB0
# 147 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 148 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_LITTLE_GIRL_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 149 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 150 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId13::
# 155 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 156 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 157 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166DEE
# 158 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 159 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_1::
# 164 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 165 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 166 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 167 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 168 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_3::
# 172 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 173 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 174 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 175 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 2
# 176 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_4::
# 180 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 181 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 182 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 183 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 3
# 184 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_5::
# 188 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 189 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 190 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 191 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 4
# 192 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_6::
# 196 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 197 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 198 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_7::
# 202 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 203 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 204 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_8::
# 208 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 209 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 210 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_9::
# 214 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 215 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 216 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650::
# 220 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 221 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C691
# 222 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 223 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6BD
# 224 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 225 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6E9
# 226 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 227 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C715
# 228 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_009F
# 229 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_STORY_STATE, 3
# 230 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2
# 231 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166EA5
# 232 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 233 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C691::
# 238 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 239 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 240 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 241 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 242 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 243 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 244 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 245 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 246 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6BD::
# 251 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 252 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 253 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 254 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 255 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 257 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 258 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 259 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6E9::
# 264 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 265 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 266 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 267 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 268 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 269 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 270 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 271 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 272 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C715::
# 277 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 278 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 279 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 280 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 281 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 282 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 283 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 284 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_IslaTrovita_G00_M03_Movement_0814C74B
# 285 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 286 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 287 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_10::
# 292 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 293 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 294 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_11::
# 298 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 299 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 300 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_12::
# 304 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 305 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 306 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_13::
# 310 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 311 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 312 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D::
# 316 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 317 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7FE
# 318 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 319 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C82A
# 320 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 321 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C856
# 322 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 323 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C882
# 324 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 4
# 325 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8B8
# 326 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08166FB4
# 327 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 328 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x16
# 329 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 330 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 0
# 331 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 332 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7F5
# 333 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_0816707F
# 334 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 335 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	closemessage
# 336 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0090
# 337 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_HIDE_ISLA_TROVITA_G00_M03_MAN_2
# 338 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_STORY_STATE, 5
# 339 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	delay 0x1E
# 340 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	warp MAP_NARANJA_ISLA_TROVITA_G11_M02, 0xFF, 2, 2
# 341 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitstate
# 342 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7F5::
# 347 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_0816704C
# 348 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7FE::
# 353 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 354 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 355 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 356 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 357 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 358 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 359 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 360 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 361 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C82A::
# 366 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 367 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 368 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 369 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 370 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 371 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 372 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 373 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 374 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C856::
# 379 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 380 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 381 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 382 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 383 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 384 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 385 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 386 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 387 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C882::
# 392 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 393 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 394 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 395 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 396 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 397 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 398 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 399 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_IslaTrovita_G00_M03_Movement_0814C74B
# 400 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 401 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 402 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8B8::
# 407 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 408 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 409 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 410 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 411 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 412 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 413 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_VARS_LocalId14::
# 418 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 419 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 420 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0120
# 421 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C917
# 422 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkplayergender
# 423 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 424 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8FD
# 425 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 426 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C90A
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8FD::
# 431 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0120
# 432 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_081670A7
# 433 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 434 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C90A::
# 439 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0120
# 440 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_08167213
# 441 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 442 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C917::
# 447 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkplayergender
# 448 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 449 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C92F
# 450 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 451 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C939
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C92F::
# 456 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_0816713C
# 457 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 458 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C939::
# 463 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G00_M03_Text_081672B8
# 464 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 4
# 465 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId12::
# 470 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4C
# 471 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 472 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 1
	end


# 476 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
Naranja_IslaTrovita_G00_M03_Movement_0814C74B:
# 477 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	walk_down
	step_end

Naranja_IslaTrovita_G00_M03_Text_0816689D::
# 480 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "The DEVON CORPORATION...\nWe all just shorten it to DEVON.\pThat company makes all sorts of\nconvenient products.$"

Naranja_IslaTrovita_G00_M03_Text_0816690C::
# 484 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Hm? A sneaky-looking man?\pCome to think of it, yes, a shady-\nlooking guy went around the corner.$"

Naranja_IslaTrovita_G00_M03_Text_0816696D::
# 488 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Have you taken the POKéMON GYM\nchallenge?\pWhen you get that shiny GYM BADGE\nin hand, I guess TRAINERS begin to\lrealize what is required of them.$"

Naranja_IslaTrovita_G00_M03_Text_081669FE::
# 492 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Hey, that’s RUSTBORO’s GYM BADGE!\pOut of all the POKéMON GYM BADGES,\nRUSTBORO’s is the coolest, I’d say.$"

Naranja_IslaTrovita_G00_M03_Text_08166A67::
# 496 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Oh? Who might you be?\nYou’re a new face around these parts.\pHave you just transferred into the\nPOKéMON TRAINER’S SCHOOL?$"

Naranja_IslaTrovita_G00_M03_Text_08166AE0::
# 500 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "I challenged the GYM LEADER, but...\pIt’s not going to be easy winning with\nmy FIRE-type POKéMON...\pFIRE-type POKéMON don’t match up\nwell against ROCK-type POKéMON...$"

Naranja_IslaTrovita_G00_M03_Text_08166B86::
# 504 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "The old sailor MR. BRINEY lives in a\ncottage by the sea.\pHe goes for walks in the tunnel every\nso often.$"

Naranja_IslaTrovita_G00_M03_Text_08166BEF::
# 508 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "The old sailor MR. BRINEY lives in a\ncottage by the sea.\pHe said he was going shopping in\nSLATEPORT for his pet, PEEKO.\pThat old seadog, he must really love\nthat PEEKO.$"

Naranja_IslaTrovita_G00_M03_Text_08166C98::
# 512 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\pWhen I get bigger, I’m going to go\nplaces with POKéMON, too.$"

Naranja_IslaTrovita_G00_M03_Text_08166CFA::
# 516 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "POKéMON TRAINER’S SCHOOL!\pIf I go to this school, will I be able\nto catch rare POKéMON easily?$"

Naranja_IslaTrovita_G00_M03_Text_08166D59::
# 520 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "If a POKéMON gains experience in\nbattles, it can sometimes change in\lthe way it looks.$"

Naranja_IslaTrovita_G00_M03_Text_08166DB0::
# 524 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "A POKéMON changes shape?\nIf one did that, I would be shocked!$"

Naranja_IslaTrovita_G00_M03_Text_08166DEE::
# 528 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "A POKéMON you get in a trade from\nsomeone grows fast.\pBut if you don’t have certain GYM\nBADGES, it may not obey you...$"

Naranja_IslaTrovita_G00_M03_Text_08166EA5::
# 532 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Ñラùù\nùùヨメùùù\nÑÈカ\nÎÎÎÎÎÎù\nÌÌÌÌÌÌÌ\n¡No te vayas todavìa!\pQuedaste conmigo en que ayudarìas\na mi hermanito encontrando el Onix.\pVen a nuestra y ofrécele tu ayuda.\p¡Eso le animará muchìsimo!\p¡Arreando!$"

Naranja_IslaTrovita_G00_M03_Text_08166FB4::
# 536 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Sto. MARA: ¿{PLAYER}?\p¡Ah!\pMi prima de Isla VALENCIA\nme habló de tì.\pPor lo visto liaste una buena\nestrellándote con un Zépelin.\p…remolinos…\pCúrate con esto.$"

Naranja_IslaTrovita_G00_M03_Text_0816704C::
# 540 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Vaya… tú mochila esta llena. \nNo podrás guardarlo.$"

Naranja_IslaTrovita_G00_M03_Text_0816707F::
# 544 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Bueno… ven por aquì.\n¡Te enseñaré algo!$"

Naranja_IslaTrovita_G00_M03_Text_081670A7::
# 548 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\nHow’s your POKéDEX coming along?\pMine’s looking pretty decent.\pI caught POKéMON in PETALBURG WOODS\nuntil I ran out of POKé BALLS.$"

Naranja_IslaTrovita_G00_M03_Text_0816713C::
# 552 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "MAY: Oh, by the way, I passed MR. BRINEY\nin PETALBURG WOODS.\pI guess he’s on his way home to his\ncottage by the sea.\p{PLAYER}{KUN}, you just moved here so you\nmight not know this, but MR. BRINEY\lwas once a revered seafarer.$"

Naranja_IslaTrovita_G00_M03_Text_08167213::
# 556 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "BRENDAN: {PLAYER}, how’s your POKéDEX?\nHave you filled in any pages yet?\pMine rules.\pI went on a POKéMON-catching frenzy\nin PETALBURG WOODS until I ran out\lof POKé BALLS.$"

Naranja_IslaTrovita_G00_M03_Text_081672B8::
# 560 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "BRENDAN: By the way, I walked by MR.\nBRINEY in PETALBURG WOODS.\pI bet he was on his way home to his\ncottage by the sea.\pI bet you didn’t know this, but he’s\nalways got a POKéMON with him.$"

Naranja_IslaTrovita_G00_M03_Text_08167374::
# 564 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "“Timesaving tunnel nearing\ncompletion!”\p...Is what it says on the sign, but\nthere’s also a big “X” splashed\lacross it in red paint...$"

Naranja_IslaTrovita_G00_M03_Text_081673FA::
# 568 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "DEVON CORPORATION\p“For all your living needs, we make\nit all.”$"

Naranja_IslaTrovita_G00_M03_Text_08167439::
# 572 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\nLEADER: ROXANNE\p“The ROCK-loving honors student!”$"

Naranja_IslaTrovita_G00_M03_Text_081674DD::
# 576 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "RUSTBORO CITY\p“The city probing the integration of\nnature and science.”$"

Naranja_IslaTrovita_G00_M03_Text_08167525::
# 580 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "POKéMON TRAINER’S SCHOOL\p“We’ll teach you anything about\nPOKéMON!”$"

Naranja_IslaTrovita_G00_M03_Text_08167568::
# 584 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "CUTTER’S HOUSE$"
