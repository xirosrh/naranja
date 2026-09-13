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
	msgbox Naranja_IslaTrovita_G00_M03_Text_0816689D, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C39B::
# 26 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_0816690C, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_MAN_7_LocalId11::
# 32 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 33 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166A67, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId1::
# 40 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166AE0, MSGBOX_NPC
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId6::
# 45 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 46 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 47 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0807
# 48 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3CF
# 49 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_0816696D, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3CF::
# 55 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_081669FE, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId5::
# 61 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 62 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 63 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 64 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3EE
# 65 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166B86, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C3EE::
# 71 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166BEF, MSGBOX_DEFAULT
# 72 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId4::
# 77 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166C98, MSGBOX_NPC
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId3::
# 82 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166CFA, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_9::
# 87 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08167374, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_8::
# 92 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_081673FA, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_1::
# 97 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08167439, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_5::
# 102 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_081674DD, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_2::
# 107 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08167525, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sign_10::
# 112 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08167568, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_2_LocalId7::
# 117 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 118 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 119 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166D59, MSGBOX_DEFAULT
# 120 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_LITTLE_BOY_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 121 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 122 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId8::
# 127 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 128 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 129 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166DB0, MSGBOX_DEFAULT
# 130 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_LITTLE_GIRL_2, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 131 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 132 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId13::
# 137 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 138 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 139 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166DEE, MSGBOX_DEFAULT
# 140 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_1::
# 145 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 146 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 147 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 148 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 0
# 149 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_3::
# 153 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 154 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 155 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 156 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 2
# 157 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_4::
# 161 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 162 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 163 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 164 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 3
# 165 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_5::
# 169 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 170 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectxyperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xE, 0x15
# 171 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_TROVITA_G00_M03_MAN_2, 0xA
# 172 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_0x8004, 4
# 173 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_6::
# 177 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 178 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 179 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_7::
# 183 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 184 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 185 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_8::
# 189 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 190 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 191 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_9::
# 195 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 196 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 197 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C650::
# 201 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 202 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C691
# 203 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 204 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6BD
# 205 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 206 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6E9
# 207 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 208 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C715
# 209 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_PROMISED_TO_FIND_CRYSTAL_ONIX
# 210 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_QUEST_STATE, 3
# 211 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_TROVITA_G00_M03_MAN_2
# 212 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166EA5, MSGBOX_DEFAULT
# 213 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C691::
# 218 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 219 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 220 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 221 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 222 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 223 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 224 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 225 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 226 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6BD::
# 231 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 232 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 233 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 234 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 235 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 236 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 237 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 238 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 239 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C6E9::
# 244 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 245 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 246 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 247 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 248 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 249 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 250 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 251 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 252 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C715::
# 257 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 258 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 259 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 260 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 261 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 262 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 263 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 264 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_IslaTrovita_G00_M03_Movement_0814C74B
# 265 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 266 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 267 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_10::
# 272 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 273 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 0
# 274 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_11::
# 278 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 279 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 280 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_12::
# 284 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 285 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 2
# 286 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Trigger_13::
# 290 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lockall
# 291 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_TEMP_1, 3
# 292 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C77D::
# 296 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 297 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7FE
# 298 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 299 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C82A
# 300 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 2
# 301 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C856
# 302 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 3
# 303 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C882
# 304 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 4
# 305 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8B8
# 306 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08166FB4, MSGBOX_DEFAULT
# 307 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x16
# 308 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 309 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 0
# 310 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 311 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7F5
# 312 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_0816707F, MSGBOX_DEFAULT
# 313 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	closemessage
# 314 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_MET_MARA_ON_TROVITA
# 315 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_HIDE_ISLA_TROVITA_G00_M03_MAN_2
# 316 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_QUEST_STATE, 5
# 317 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	delay 0x1E
# 318 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	warp MAP_NARANJA_ISLA_TROVITA_G11_M02, 0xFF, 2, 2
# 319 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitstate
# 320 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7F5::
# 325 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_0816704C, MSGBOX_DEFAULT
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C7FE::
# 330 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 331 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 332 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 333 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 334 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 335 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 336 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 337 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 338 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C82A::
# 343 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 344 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 345 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 346 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 347 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 348 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 349 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 350 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 351 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C856::
# 356 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 357 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 358 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 359 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 360 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 361 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 362 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 363 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 364 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C882::
# 369 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 370 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 371 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 372 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 373 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 374 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 375 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 376 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_IslaTrovita_G00_M03_Movement_0814C74B
# 377 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 378 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 379 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8B8::
# 384 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 385 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 386 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	playse SE_PIN
# 387 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 388 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 389 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G00_M03_MAN_2, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 390 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_VARS_LocalId14::
# 395 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	lock
# 396 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	faceplayer
# 397 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0120
# 398 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C917
# 399 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkplayergender
# 400 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 401 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8FD
# 402 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 403 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C90A
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C8FD::
# 408 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0120
# 409 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_081670A7, MSGBOX_DEFAULT
# 410 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C90A::
# 415 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0120
# 416 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_08167213, MSGBOX_DEFAULT
# 417 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C917::
# 422 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	checkplayergender
# 423 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 424 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C92F
# 425 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 426 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C939
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C92F::
# 431 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_0816713C, MSGBOX_DEFAULT
# 432 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_Sub_0814C939::
# 437 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	msgbox Naranja_IslaTrovita_G00_M03_Text_081672B8, MSGBOX_DEFAULT
# 438 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	release
	end


Naranja_IslaTrovita_G00_M03_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId12::
# 443 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4C
# 444 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 445 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	callstd 1
	end


# 449 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
Naranja_IslaTrovita_G00_M03_Movement_0814C74B:
# 450 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	walk_down
	step_end

Naranja_IslaTrovita_G00_M03_Text_0816689D::
# 453 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "The DEVON CORPORATION...\nWe all just shorten it to DEVON.\pThat company makes all sorts of\nconvenient products.$"

Naranja_IslaTrovita_G00_M03_Text_0816690C::
# 457 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Hm? A sneaky-looking man?\pCome to think of it, yes, a shady-\nlooking guy went around the corner.$"

Naranja_IslaTrovita_G00_M03_Text_0816696D::
# 461 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Have you taken the POKéMON GYM\nchallenge?\pWhen you get that shiny GYM BADGE\nin hand, I guess TRAINERS begin to\lrealize what is required of them.$"

Naranja_IslaTrovita_G00_M03_Text_081669FE::
# 465 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Hey, that’s RUSTBORO’s GYM BADGE!\pOut of all the POKéMON GYM BADGES,\nRUSTBORO’s is the coolest, I’d say.$"

Naranja_IslaTrovita_G00_M03_Text_08166A67::
# 469 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Oh? Who might you be?\nYou’re a new face around these parts.\pHave you just transferred into the\nPOKéMON TRAINER’S SCHOOL?$"

Naranja_IslaTrovita_G00_M03_Text_08166AE0::
# 473 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "I challenged the GYM LEADER, but...\pIt’s not going to be easy winning with\nmy FIRE-type POKéMON...\pFIRE-type POKéMON don’t match up\nwell against ROCK-type POKéMON...$"

Naranja_IslaTrovita_G00_M03_Text_08166B86::
# 477 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "The old sailor MR. BRINEY lives in a\ncottage by the sea.\pHe goes for walks in the tunnel every\nso often.$"

Naranja_IslaTrovita_G00_M03_Text_08166BEF::
# 481 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "The old sailor MR. BRINEY lives in a\ncottage by the sea.\pHe said he was going shopping in\nSLATEPORT for his pet, PEEKO.\pThat old seadog, he must really love\nthat PEEKO.$"

Naranja_IslaTrovita_G00_M03_Text_08166C98::
# 485 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\pWhen I get bigger, I’m going to go\nplaces with POKéMON, too.$"

Naranja_IslaTrovita_G00_M03_Text_08166CFA::
# 489 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "POKéMON TRAINER’S SCHOOL!\pIf I go to this school, will I be able\nto catch rare POKéMON easily?$"

Naranja_IslaTrovita_G00_M03_Text_08166D59::
# 493 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "If a POKéMON gains experience in\nbattles, it can sometimes change in\lthe way it looks.$"

Naranja_IslaTrovita_G00_M03_Text_08166DB0::
# 497 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "A POKéMON changes shape?\nIf one did that, I would be shocked!$"

Naranja_IslaTrovita_G00_M03_Text_08166DEE::
# 501 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "A POKéMON you get in a trade from\nsomeone grows fast.\pBut if you don’t have certain GYM\nBADGES, it may not obey you...$"

Naranja_IslaTrovita_G00_M03_Text_08166EA5::
# 505 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Ñラùù\nùùヨメùùù\nÑÈカ\nÎÎÎÎÎÎù\nÌÌÌÌÌÌÌ\n¡No te vayas todavìa!\pQuedaste conmigo en que ayudarìas\na mi hermanito encontrando el Onix.\pVen a nuestra y ofrécele tu ayuda.\p¡Eso le animará muchìsimo!\p¡Arreando!$"

Naranja_IslaTrovita_G00_M03_Text_08166FB4::
# 509 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Sto. MARA: ¿{PLAYER}?\p¡Ah!\pMi prima de Isla VALENCIA\nme habló de tì.\pPor lo visto liaste una buena\nestrellándote con un Zépelin.\p…remolinos…\pCúrate con esto.$"

Naranja_IslaTrovita_G00_M03_Text_0816704C::
# 513 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Vaya… tú mochila esta llena. \nNo podrás guardarlo.$"

Naranja_IslaTrovita_G00_M03_Text_0816707F::
# 517 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "Bueno… ven por aquì.\n¡Te enseñaré algo!$"

Naranja_IslaTrovita_G00_M03_Text_081670A7::
# 521 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\nHow’s your POKéDEX coming along?\pMine’s looking pretty decent.\pI caught POKéMON in PETALBURG WOODS\nuntil I ran out of POKé BALLS.$"

Naranja_IslaTrovita_G00_M03_Text_0816713C::
# 525 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "MAY: Oh, by the way, I passed MR. BRINEY\nin PETALBURG WOODS.\pI guess he’s on his way home to his\ncottage by the sea.\p{PLAYER}{KUN}, you just moved here so you\nmight not know this, but MR. BRINEY\lwas once a revered seafarer.$"

Naranja_IslaTrovita_G00_M03_Text_08167213::
# 529 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "BRENDAN: {PLAYER}, how’s your POKéDEX?\nHave you filled in any pages yet?\pMine rules.\pI went on a POKéMON-catching frenzy\nin PETALBURG WOODS until I ran out\lof POKé BALLS.$"

Naranja_IslaTrovita_G00_M03_Text_081672B8::
# 533 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "BRENDAN: By the way, I walked by MR.\nBRINEY in PETALBURG WOODS.\pI bet he was on his way home to his\ncottage by the sea.\pI bet you didn’t know this, but he’s\nalways got a POKéMON with him.$"

Naranja_IslaTrovita_G00_M03_Text_08167374::
# 537 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "“Timesaving tunnel nearing\ncompletion!”\p...Is what it says on the sign, but\nthere’s also a big “X” splashed\lacross it in red paint...$"

Naranja_IslaTrovita_G00_M03_Text_081673FA::
# 541 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "DEVON CORPORATION\p“For all your living needs, we make\nit all.”$"

Naranja_IslaTrovita_G00_M03_Text_08167439::
# 545 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\nLEADER: ROXANNE\p“The ROCK-loving honors student!”$"

Naranja_IslaTrovita_G00_M03_Text_081674DD::
# 549 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "RUSTBORO CITY\p“The city probing the integration of\nnature and science.”$"

Naranja_IslaTrovita_G00_M03_Text_08167525::
# 553 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "POKéMON TRAINER’S SCHOOL\p“We’ll teach you anything about\nPOKéMON!”$"

Naranja_IslaTrovita_G00_M03_Text_08167568::
# 557 "data/maps/Naranja_IslaTrovita_G00_M03/scripts.pory"
	.string "CUTTER’S HOUSE$"
