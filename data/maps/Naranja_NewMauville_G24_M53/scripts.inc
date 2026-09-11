Naranja_NewMauville_G24_M53_MapScripts::
# 5 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_NewMauville_G24_M53_OnResume
# 6 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NewMauville_G24_M53_OnTransition
# 7 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_NewMauville_G24_M53_OnLoad
	.byte 0


Naranja_NewMauville_G24_M53_OnResume::
# 11 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 12 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call_if EQUAL, Naranja_NewMauville_G24_M53_EventScript_Sub_0815E5DA
# 13 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 1
# 14 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call_if EQUAL, Naranja_NewMauville_G24_M53_EventScript_Sub_0815E728
# 15 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 16 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call_if EQUAL, Naranja_NewMauville_G24_M53_EventScript_Sub_0815E58F
	end


Naranja_NewMauville_G24_M53_EventScript_Sub_0815E58F::
# 21 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	removeobject 32783
	return


Naranja_NewMauville_G24_M53_OnTransition::
# 26 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_TEMP_2, 0
	end


Naranja_NewMauville_G24_M53_OnLoad::
# 32 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 33 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call_if EQUAL, Naranja_NewMauville_G24_M53_EventScript_Sub_0815E88B
	end


Naranja_NewMauville_G24_M53_EventScript_Trigger_1::
# 38 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lockall
# 39 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_TEMP_2, 0
# 41 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call Naranja_NewMauville_G24_M53_EventScript_Sub_0815E5DA
# 43 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	special DrawWholeMapView
# 44 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M53_EventScript_Trigger_2::
# 49 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lockall
# 50 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_TEMP_1, 0
# 51 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_TEMP_2, 1
# 52 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call Naranja_NewMauville_G24_M53_EventScript_Sub_0815E728
# 54 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	special DrawWholeMapView
# 55 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M53_EventScript_Sub_0815E5DA::
# 60 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x22, 0x269, 1
# 61 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x23, 0x271, 1
# 62 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x24, 0x26D, 0
# 63 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x25, 0x281, 0
# 64 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x10, 0x269, 1
# 65 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x11, 0x271, 1
# 66 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x12, 0x26D, 0
# 67 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x13, 0x281, 0
# 68 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0, 0x269, 1
# 69 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 1, 0x271, 1
# 70 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 2, 0x26D, 0
# 71 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 3, 0x281, 0
# 72 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x21, 0x2B6, 1
# 73 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x22, 0x2BE, 1
# 74 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x23, 0x2C6, 1
# 75 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x24, 0x2CE, 1
# 76 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x16, 0x2B6, 1
# 77 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x17, 0x2BE, 1
# 78 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x18, 0x2C6, 1
# 79 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x19, 0x2CE, 1
# 80 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x18, 0x2B6, 1
# 81 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x19, 0x2BE, 1
# 82 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x1A, 0x2C6, 1
# 83 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x1B, 0x2CE, 1
# 84 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 2, 0x2B6, 1
# 85 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 3, 0x2BE, 1
# 86 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 4, 0x2C6, 1
# 87 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 5, 0x2CE, 1
# 88 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 6, 0xB, 0x24F, 0
# 89 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xD, 0xA, 0x24F, 0
# 90 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x10, 0x16, 0x24F, 0
# 91 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 4, 0x1A, 0x24F, 0
# 92 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1E, 0x26, 0x24F, 0
# 93 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 2, 0xB, 0x22E, 0
# 94 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x11, 0xA, 0x22E, 0
# 95 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x19, 0x12, 0x22E, 0
# 96 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x12, 0x24, 0x22E, 0
	return


Naranja_NewMauville_G24_M53_EventScript_Sub_0815E728::
# 101 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x22, 0x2B7, 1
# 102 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x23, 0x2BF, 1
# 103 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x24, 0x2C7, 1
# 104 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x17, 0x25, 0x2CF, 1
# 105 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x10, 0x2B7, 1
# 106 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x11, 0x2BF, 1
# 107 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x12, 0x2C7, 1
# 108 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x13, 0x2CF, 1
# 109 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0, 0x2B7, 1
# 110 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 1, 0x2BF, 1
# 111 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 2, 0x2C7, 1
# 112 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 3, 0x2CF, 1
# 113 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x21, 0x269, 1
# 114 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x22, 0x271, 1
# 115 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x23, 0x26D, 0
# 116 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x25, 0x24, 0x281, 0
# 117 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x16, 0x269, 1
# 118 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x17, 0x271, 1
# 119 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x18, 0x26D, 0
# 120 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1C, 0x19, 0x281, 0
# 121 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x18, 0x269, 1
# 122 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x19, 0x271, 1
# 123 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x1A, 0x26D, 0
# 124 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xA, 0x1B, 0x281, 0
# 125 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 2, 0x269, 1
# 126 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 3, 0x271, 1
# 127 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 4, 0x26D, 0
# 128 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x15, 5, 0x281, 0
# 129 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 2, 0xB, 0x24F, 0
# 130 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x11, 0xA, 0x24F, 0
# 131 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x19, 0x12, 0x24F, 0
# 132 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x12, 0x24, 0x24F, 0
# 133 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 6, 0xB, 0x236, 0
# 134 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0xD, 0xA, 0x236, 0
# 135 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x10, 0x16, 0x236, 0
# 136 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 4, 0x1A, 0x236, 0
# 137 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x1E, 0x26, 0x236, 0
	return


Naranja_NewMauville_G24_M53_EventScript_Trigger_10::
# 142 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lockall
# 143 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	loadword 0, Naranja_NewMauville_G24_M53_Text_081983B1
# 144 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	call Naranja_NewMauville_G24_M53_EventScript_Sub_0815E88B
# 146 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setvar VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 147 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M53_EventScript_Sub_0815E88B::
# 152 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x21, 6, 0x24F, 0
# 153 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x20, 2, 0x2F0, 1
# 154 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x21, 2, 0x2F1, 1
# 155 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x22, 2, 0x2F2, 1
# 156 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x23, 2, 0x2F3, 1
# 157 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x20, 3, 0x2F4, 1
# 158 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x21, 3, 0x2F5, 1
# 159 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x22, 3, 0x2F6, 1
# 160 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setmetatile 0x23, 3, 0x2F7, 1
# 161 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	special DrawWholeMapView
	return


Naranja_NewMauville_G24_M53_EventScript_Sign_1::
# 166 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lockall
# 167 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 168 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	goto_if EQUAL, Naranja_NewMauville_G24_M53_EventScript_Sub_0815E8F6
# 169 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	loadword 0, Naranja_NewMauville_G24_M53_Text_08198315
# 170 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 4
# 171 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M53_EventScript_Sub_0815E8F6::
# 176 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	loadword 0, Naranja_NewMauville_G24_M53_Text_08198395
# 177 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 4
# 178 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	releaseall
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 183 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lock
# 184 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	faceplayer
# 185 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 0x19, 0
# 186 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	waitse
# 187 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	playmoncry SPECIES_VOLTORB, 2
# 188 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	delay 0x28
# 189 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	waitmoncry
# 190 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setflag FLAG_HIDE_NEW_MAUVILLE_G24_M53_ITEM_BALL_6
# 191 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 192 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	dowildbattle
# 193 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 194 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	release
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 199 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lock
# 200 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	faceplayer
# 201 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 0x19, 0
# 202 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	waitse
# 203 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	playmoncry SPECIES_VOLTORB, 2
# 204 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	delay 0x28
# 205 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	waitmoncry
# 206 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setflag FLAG_HIDE_NEW_MAUVILLE_G24_M53_ITEM_BALL_7
# 207 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 208 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	dowildbattle
# 209 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 210 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	release
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId8::
# 215 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	lock
# 216 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	faceplayer
# 217 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 0x19, 0
# 218 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	waitse
# 219 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	playmoncry SPECIES_VOLTORB, 2
# 220 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	delay 0x28
# 221 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	waitmoncry
# 222 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setflag FLAG_HIDE_NEW_MAUVILLE_G24_M53_ITEM_BALL_8
# 223 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 224 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	dowildbattle
# 225 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 226 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	release
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 231 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8000, 2
# 232 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 233 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 1
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 238 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8000, 0x55
# 239 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 240 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 1
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 245 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8000, 0x60
# 246 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 247 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 1
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 252 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8000, 0x17
# 253 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 254 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 1
	end


Naranja_NewMauville_G24_M53_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 259 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12
# 260 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 261 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	callstd 1
	end


Naranja_NewMauville_G24_M53_Text_08198315::
# 265 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	.string "The generator is radiating heat that\ncan be felt even at a distance.\pIt looks like it should be turned off\nas soon as possible.$"

Naranja_NewMauville_G24_M53_Text_08198395::
# 269 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	.string "The generator quieted down.$"

Naranja_NewMauville_G24_M53_Text_081983B1::
# 273 "data/maps/Naranja_NewMauville_G24_M53/scripts.pory"
	.string "{PLAYER} stepped on the switch.\pClick...\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pThe generator appears to have\nstopped...$"
