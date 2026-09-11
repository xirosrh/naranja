Naranja_SinNombre_G25_M41_MapScripts::
# 5 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SinNombre_G25_M41_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SinNombre_G25_M41_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 1, Naranja_SinNombre_G25_M41_OnFrame_1
# 7 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 5, Naranja_SinNombre_G25_M41_OnFrame_2
# 8 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 9, Naranja_SinNombre_G25_M41_OnFrame_3
# 9 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 10, Naranja_SinNombre_G25_M41_OnFrame_4
	.2byte 0


Naranja_SinNombre_G25_M41_OnFrame_1::
# 14 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	special SetSSTidalFlag
# 15 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 2
# 16 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lockall
# 17 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	playse SE_DING_DONG
# 18 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199007
# 19 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M41_OnFrame_2::
# 25 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 6
# 26 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lockall
# 27 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	playse SE_DING_DONG
# 28 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199088
# 29 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 30 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M41_OnFrame_3::
# 35 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	special ResetSSTidalFlag
# 36 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 3
# 37 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lockall
# 38 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	playse SE_DING_DONG
# 39 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199088
# 40 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M41_OnFrame_4::
# 46 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	special ResetSSTidalFlag
# 47 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 8
# 48 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lockall
# 49 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	playse SE_DING_DONG
# 50 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081990B4
# 51 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M41_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 57 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199291
# 58 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 2
	end


Naranja_SinNombre_G25_M41_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId4::
# 63 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lock
# 64 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	faceplayer
# 65 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	waitse
# 66 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 67 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199388
# 68 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 69 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	waitmoncry
# 70 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M41_EventScript_Sign_9::
# 75 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081993A1
# 76 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 3
	end


Naranja_SinNombre_G25_M41_EventScript_Sign_10::
# 81 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081993A9
# 82 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 3
	end


Naranja_SinNombre_G25_M41_EventScript_Sign_11::
# 87 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081993B1
# 88 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 3
	end


Naranja_SinNombre_G25_M41_EventScript_Sign_12::
# 93 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081993B9
# 94 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 3
	end


Naranja_SinNombre_G25_M41_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId1::
# 99 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lock
# 100 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	faceplayer
# 101 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 4
# 102 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FDF8
# 103 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 8
# 104 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE17
# 105 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_0819913B
# 106 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 107 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FDF8::
# 112 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setrespawn 8
# 113 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081991F4
# 114 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 115 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 116 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE36
# 117 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M10, 0xFF, 8, 0xB
# 118 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	waitstate
# 119 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE17::
# 124 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setrespawn 4
# 125 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_081991F4
# 126 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 127 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 128 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE36
# 129 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	warp MAP_NARANJA_ISLA_MURCOTT_G09_M08, 0xFF, 8, 0xB
# 130 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	waitstate
# 131 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE36::
# 136 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setflag FLAG_HIDE_SIN_NOMBRE_G25_M43_MANIAC
	return


Naranja_SinNombre_G25_M41_EventScript_Sign_1::
# 141 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lockall
# 142 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 2
# 143 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE5B
# 144 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 7
# 145 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE5B
# 146 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199268
# 147 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 148 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE5B::
# 153 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	special LookThroughPorthole
# 154 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	waitstate
	end


Naranja_SinNombre_G25_M41_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId2::
# 159 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	lock
# 160 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	faceplayer
# 161 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_00F7
# 162 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE7A
# 163 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	call Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE84
# 164 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199203
# 165 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 166 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE7A::
# 171 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M41_Text_08199255
# 172 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	callstd 4
# 173 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	release
	end


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE84::
# 178 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x1EE
# 179 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 180 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x1EF
# 181 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 182 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x126
# 183 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 184 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0xFF
# 185 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 186 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x100
# 187 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 188 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x281
# 189 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 190 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x8A
# 191 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 192 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	checktrainerflag 0x77
# 193 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5
# 194 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_00F7
# 195 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	goto Naranja_SinNombre_G25_M41_EventScript_Sub_0815FE7A
	return


Naranja_SinNombre_G25_M41_EventScript_Sub_0815FED5::
	return


Naranja_SinNombre_G25_M41_Text_08199007::
# 202 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "This ferry is built to plow through\nfast-running currents.\pWe hope you enjoy your voyage with us.\nFeel free to explore the ship.$"

Naranja_SinNombre_G25_M41_Text_08199088::
# 206 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "We hope you enjoy your voyage on\nour ferry.$"

Naranja_SinNombre_G25_M41_Text_081990B4::
# 210 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "We have made land in SLATEPORT CITY.\nThank you for sailing with us.$"

Naranja_SinNombre_G25_M41_Text_0819913B::
# 214 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "It’ll be some time before we make land,\nI reckon.\pYou can rest up in your cabin if you’d\nlike. Your cabin’s No. 2.\pThe bed in there is soft and plushy.\nI can attest to how comfy it is!$"

Naranja_SinNombre_G25_M41_Text_081991F4::
# 218 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "We’ve arrived!$"

Naranja_SinNombre_G25_M41_Text_08199203::
# 222 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "Go visit other cabins.\nTRAINERS bored of the boat trip will\lbe itching to battle.$"

Naranja_SinNombre_G25_M41_Text_08199255::
# 226 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "Enjoy your cruise!$"

Naranja_SinNombre_G25_M41_Text_08199268::
# 230 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "The horizon spreads beyond the\nporthole.$"

Naranja_SinNombre_G25_M41_Text_08199291::
# 234 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "MR. BRINEY: Welcome aboard, {PLAYER}{KUN}!\pThey made me honorary captain of the\nS.S. TIDAL!\pYou can call me CAPTAIN BRINEY now!\pYou know, I retired once before, but\nwhen I saw this majestic ship...\pLet me just say, it stirred my sleeping\nsoul as a sailor!$"

Naranja_SinNombre_G25_M41_Text_08199388::
# 238 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "PEEKO: Pihyo pihyohyo...$"

Naranja_SinNombre_G25_M41_Text_081993A1::
# 242 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "Cabin 1$"

Naranja_SinNombre_G25_M41_Text_081993A9::
# 246 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "Cabin 2$"

Naranja_SinNombre_G25_M41_Text_081993B1::
# 250 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "Cabin 3$"

Naranja_SinNombre_G25_M41_Text_081993B9::
# 254 "data/maps/Naranja_SinNombre_G25_M41/scripts.pory"
	.string "Cabin 4$"
