Naranja_SSTidalCorridor_MapScripts::
# 5 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 1, Naranja_SSTidalCorridor_OnFrame_1
# 7 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 5, Naranja_SSTidalCorridor_OnFrame_2
# 8 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 9, Naranja_SSTidalCorridor_OnFrame_3
# 9 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 10, Naranja_SSTidalCorridor_OnFrame_4
	.2byte 0


Naranja_SSTidalCorridor_OnFrame_1::
# 14 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 15 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 2
# 16 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lockall
# 17 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 18 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199007, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	releaseall
	end


Naranja_SSTidalCorridor_OnFrame_2::
# 24 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 6
# 25 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lockall
# 26 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 27 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199088, MSGBOX_DEFAULT
# 28 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	releaseall
	end


Naranja_SSTidalCorridor_OnFrame_3::
# 33 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 34 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 3
# 35 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lockall
# 36 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 37 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199088, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	releaseall
	end


Naranja_SSTidalCorridor_OnFrame_4::
# 43 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 44 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 8
# 45 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lockall
# 46 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 47 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081990B4, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	releaseall
	end


Naranja_SSTidalCorridor_EventScript_OldMan1::
# 53 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199291, MSGBOX_NPC
	end


Naranja_SSTidalCorridor_EventScript_Wingull::
# 58 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lock
# 59 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	faceplayer
# 60 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	waitse
# 61 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 62 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199388, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	waitmoncry
# 64 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	release
	end


Naranja_SSTidalCorridor_EventScript_Sign_9::
# 69 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081993A1, MSGBOX_SIGN
	end


Naranja_SSTidalCorridor_EventScript_Sign_10::
# 74 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081993A9, MSGBOX_SIGN
	end


Naranja_SSTidalCorridor_EventScript_Sign_11::
# 79 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081993B1, MSGBOX_SIGN
	end


Naranja_SSTidalCorridor_EventScript_Sign_12::
# 84 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081993B9, MSGBOX_SIGN
	end


Naranja_SSTidalCorridor_EventScript_Sailor::
# 89 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lock
# 90 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	faceplayer
# 91 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 4
# 92 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FDF8
# 93 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 8
# 94 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FE17
# 95 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_0819913B, MSGBOX_DEFAULT
# 96 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	release
	end


Naranja_SSTidalCorridor_EventScript_Sub_0815FDF8::
# 101 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setrespawn 8
# 102 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081991F4, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 104 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	call_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FE36
# 105 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	warp MAP_NARANJA_KUMQUAT_ISLAND_HARBOR, 0xFF, 8, 0xB
# 106 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	waitstate
# 107 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	release
	end


Naranja_SSTidalCorridor_EventScript_Sub_0815FE17::
# 112 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setrespawn 4
# 113 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_081991F4, MSGBOX_DEFAULT
# 114 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_0104
# 115 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	call_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FE36
# 116 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	warp MAP_NARANJA_MURCOTT_ISLAND_HARBOR, 0xFF, 8, 0xB
# 117 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	waitstate
# 118 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	release
	end


Naranja_SSTidalCorridor_EventScript_Sub_0815FE36::
# 123 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setflag FLAG_HIDE_NARANJA_SSTIDAL_ROOMS_MANIAC
	return


Naranja_SSTidalCorridor_EventScript_Sign_1::
# 128 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lockall
# 129 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 2
# 130 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FE5B
# 131 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 7
# 132 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FE5B
# 133 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199268, MSGBOX_DEFAULT
# 134 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	releaseall
	end


Naranja_SSTidalCorridor_EventScript_Sub_0815FE5B::
# 139 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	special LookThroughPorthole
# 140 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	waitstate
	end


Naranja_SSTidalCorridor_EventScript_Sailor_2::
# 145 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	lock
# 146 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	faceplayer
# 147 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checkflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_00F7
# 148 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if EQUAL, Naranja_SSTidalCorridor_EventScript_Sub_0815FE7A
# 149 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	call Naranja_SSTidalCorridor_EventScript_Sub_0815FE84
# 150 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199203, MSGBOX_DEFAULT
# 151 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	release
	end


Naranja_SSTidalCorridor_EventScript_Sub_0815FE7A::
# 156 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	msgbox Naranja_SSTidalCorridor_Text_08199255, MSGBOX_DEFAULT
# 157 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	release
	end


Naranja_SSTidalCorridor_EventScript_Sub_0815FE84::
# 162 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x1EE
# 163 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 164 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x1EF
# 165 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 166 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x126
# 167 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 168 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0xFF
# 169 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 170 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x100
# 171 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 172 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x281
# 173 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 174 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x8A
# 175 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 176 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	checktrainerflag 0x77
# 177 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto_if LESS_THAN, Naranja_SSTidalCorridor_EventScript_Sub_0815FED5
# 178 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_00F7
# 179 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	goto Naranja_SSTidalCorridor_EventScript_Sub_0815FE7A
	return


Naranja_SSTidalCorridor_EventScript_Sub_0815FED5::
	return


Naranja_SSTidalCorridor_Text_08199007::
# 186 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "This ferry is built to plow through\nfast-running currents.\pWe hope you enjoy your voyage with us.\nFeel free to explore the ship.$"

Naranja_SSTidalCorridor_Text_08199088::
# 190 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "We hope you enjoy your voyage on\nour ferry.$"

Naranja_SSTidalCorridor_Text_081990B4::
# 194 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "We have made land in SLATEPORT CITY.\nThank you for sailing with us.$"

Naranja_SSTidalCorridor_Text_0819913B::
# 198 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "It’ll be some time before we make land,\nI reckon.\pYou can rest up in your cabin if you’d\nlike. Your cabin’s No. 2.\pThe bed in there is soft and plushy.\nI can attest to how comfy it is!$"

Naranja_SSTidalCorridor_Text_081991F4::
# 202 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "We’ve arrived!$"

Naranja_SSTidalCorridor_Text_08199203::
# 206 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "Go visit other cabins.\nTRAINERS bored of the boat trip will\lbe itching to battle.$"

Naranja_SSTidalCorridor_Text_08199255::
# 210 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "Enjoy your cruise!$"

Naranja_SSTidalCorridor_Text_08199268::
# 214 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "The horizon spreads beyond the\nporthole.$"

Naranja_SSTidalCorridor_Text_08199291::
# 218 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "MR. BRINEY: Welcome aboard, {PLAYER}{KUN}!\pThey made me honorary captain of the\nS.S. TIDAL!\pYou can call me CAPTAIN BRINEY now!\pYou know, I retired once before, but\nwhen I saw this majestic ship...\pLet me just say, it stirred my sleeping\nsoul as a sailor!$"

Naranja_SSTidalCorridor_Text_08199388::
# 222 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "PEEKO: Pihyo pihyohyo...$"

Naranja_SSTidalCorridor_Text_081993A1::
# 226 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "Cabin 1$"

Naranja_SSTidalCorridor_Text_081993A9::
# 230 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "Cabin 2$"

Naranja_SSTidalCorridor_Text_081993B1::
# 234 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "Cabin 3$"

Naranja_SSTidalCorridor_Text_081993B9::
# 238 "data/maps/Naranja_SSTidalCorridor/scripts.pory"
	.string "Cabin 4$"
