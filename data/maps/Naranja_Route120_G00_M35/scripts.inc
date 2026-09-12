Naranja_Route120_G00_M35_MapScripts::
# 5 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route120_G00_M35_OnResume
# 6 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route120_G00_M35_OnTransition
# 7 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_Route120_G00_M35_OnLoad
	.byte 0


Naranja_Route120_G00_M35_OnResume::
# 11 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151628
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151628::
# 17 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 18 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815166B
# 19 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 20 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151672
# 21 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 22 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151676
# 23 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 24 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815167A
# 25 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 26 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815167E
# 27 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 28 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151682
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815166B::
# 33 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_1
# 34 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_2
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151672::
# 39 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_1_2
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151676::
# 44 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_1_3
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815167A::
# 49 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_1_4
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815167E::
# 54 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_1_6
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151682::
# 59 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_KECLEON_1_5
	return


Naranja_Route120_G00_M35_OnLoad::
# 64 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_00E4
# 65 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if LESS_THAN, Naranja_Route120_G00_M35_EventScript_Sub_081516A2
# 66 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_011D
# 67 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081516B5
# 68 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_011D
# 69 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if LESS_THAN, Naranja_Route120_G00_M35_EventScript_Sub_081516DA
	end


Naranja_Route120_G00_M35_EventScript_Sub_081516A2::
# 74 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 7, 0x36, 0x7C, 1
# 75 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 7, 0x37, 0x91, 1
	return


Naranja_Route120_G00_M35_EventScript_Sub_081516B5::
# 80 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xD, 0xF, 0x297, 0
# 81 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xC, 0x10, 0x29F, 0
# 82 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xC, 0x11, 0xA1, 0
# 83 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xD, 0x11, 0xA1, 0
	return


Naranja_Route120_G00_M35_EventScript_Sub_081516DA::
# 88 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE120_G00_M35_KECLEON_2, 0xA
	return


Naranja_Route120_G00_M35_OnTransition::
# 93 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE313
# 94 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call Naranja_Route120_G00_M35_EventScript_Sub_081516EA
	end


Naranja_Route120_G00_M35_EventScript_Sub_081516EA::
# 99 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 100 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0xE
# 101 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if LESS_THAN_OR_EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151715
# 102 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x3C
# 103 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if LESS_THAN_OR_EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151719
# 104 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x3D
# 105 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151711
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151711::
# 110 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setweather 1
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151715::
# 115 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setweather 2
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151719::
# 120 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 7
# 121 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if LESS_THAN_OR_EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151735
# 122 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0x13
# 123 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if LESS_THAN_OR_EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151715
# 124 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151735
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151735::
# 128 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setweather 3
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId23::
# 133 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 134 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 135 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	dotimebasedevents
# 136 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_08CE
# 137 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151837
# 138 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081C58F1, MSGBOX_YESNO
# 139 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 140 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151841
# 141 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 142 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815184A
# 143 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 144 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 145 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 146 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517DC
# 147 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 148 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517DC
# 149 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 150 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517E7
# 151 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 152 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517E7
# 153 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 154 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517F2
# 155 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 156 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517F2
# 157 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 158 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517FD
# 159 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 160 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517FD
# 161 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 162 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151808
# 163 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 164 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151808
	end


Naranja_Route120_G00_M35_EventScript_Sub_081517DC::
# 169 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x8F
# 170 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_081517E7::
# 174 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x90
# 175 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_081517F2::
# 179 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x91
# 180 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_081517FD::
# 184 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x92
# 185 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151808::
# 189 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x93
# 190 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151813::
# 194 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8004
# 195 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 196 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 0
# 197 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 198 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 199 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_08CE
# 200 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081C5A0B, MSGBOX_DEFAULT
# 201 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151837::
# 206 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081C5A4D, MSGBOX_DEFAULT
# 207 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151841::
# 212 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081C5979, MSGBOX_DEFAULT
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815184A::
# 217 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081C59B5, MSGBOX_DEFAULT
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_GARY_LocalId31::
# 222 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 223 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 224 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_0122
# 225 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151884
# 226 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171827, MSGBOX_YESNO
# 227 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 228 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151877
# 229 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_0815189D
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151877::
# 233 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_0817193D, MSGBOX_DEFAULT
# 234 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_0122
# 235 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151884::
# 240 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_0817196F, MSGBOX_YESNO
# 241 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 242 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151877
# 243 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_0815189D
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815189D::
# 247 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081719A0, MSGBOX_DEFAULT
# 248 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	closemessage
# 249 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 250 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815197F
# 251 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 252 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815198A
# 253 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 254 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 255 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0x14
# 256 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081719D4, MSGBOX_DEFAULT
# 257 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	closemessage
# 258 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_KECLEON_1, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 259 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 260 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_KECLEON_1, Naranja_Route120_G00_M35_Movement_081A0662
# 261 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 262 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitse
# 263 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 264 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0x28
# 265 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmoncry
# 266 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setwildbattle SPECIES_KECLEON, 0x1E, 0
# 267 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0
# 268 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 269 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	dowildbattle
# 270 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 271 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151908
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151908::
# 275 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 276 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 277 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 278 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171A40, MSGBOX_DEFAULT
# 279 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x120
# 280 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 281 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 0
# 282 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_011D
# 283 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171B0E, MSGBOX_DEFAULT
# 284 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	closemessage
# 285 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 286 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 287 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0x32
# 288 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setfieldeffectargument 0, 1
# 289 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	dofieldeffect 0x1E
# 290 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0xF
# 291 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_STEVEN
# 292 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitfieldeffect 0x1E
# 293 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xD, 0xF, 0x297, 0
# 294 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xC, 0x10, 0x29F, 0
# 295 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xC, 0x11, 0xA1, 0
# 296 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xD, 0x11, 0xA1, 0
# 297 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	special DrawWholeMapView
# 298 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_0815197F::
# 303 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 304 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815198A::
# 309 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route120_G00_M35_Movement_08151995
# 310 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId30::
# 315 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171B93, MSGBOX_NPC
	end


Naranja_Route120_G00_M35_EventScript_Sign_1::
# 320 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171C5E, MSGBOX_SIGN
	end


Naranja_Route120_G00_M35_EventScript_Sign_2::
# 325 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_08171C77, MSGBOX_SIGN
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId12::
# 330 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_406, Naranja_Route120_G00_M35_Text_081BF07E, Naranja_Route120_G00_M35_Text_081BF0A5
# 331 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 332 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 333 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081519F1
# 334 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF0C3, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_Sub_081519F1::
# 339 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE120_406, Naranja_Route120_G00_M35_Text_081BF0FA, Naranja_Route120_G00_M35_Text_081BF131
# 340 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF154, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId13::
# 345 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_227, Naranja_Route120_G00_M35_Text_081BF193, Naranja_Route120_G00_M35_Text_081BF1D4
# 346 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF215, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId14::
# 351 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_560, Naranja_Route120_G00_M35_Text_081BF26E, Naranja_Route120_G00_M35_Text_081BF2D2
# 352 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF2EA, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId15::
# 357 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_226, Naranja_Route120_G00_M35_Text_081BF32B, Naranja_Route120_G00_M35_Text_081BF36B
# 358 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 359 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 360 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151A5D
# 361 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF38D, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151A5D::
# 366 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE120_226, Naranja_Route120_G00_M35_Text_081BF3D0, Naranja_Route120_G00_M35_Text_081BF416
# 367 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF43E, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId24::
# 372 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_095, Naranja_Route120_G00_M35_Text_081BF4A0, Naranja_Route120_G00_M35_Text_081BF504
# 373 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF51F, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_HIKER_LocalId25::
# 378 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_045, Naranja_Route120_G00_M35_Text_081BF560, Naranja_Route120_G00_M35_Text_081BF5D6
# 379 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF5F4, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId26::
# 384 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_435, Naranja_Route120_G00_M35_Text_081BF65B, Naranja_Route120_G00_M35_Text_081BF6A4
# 385 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF6D0, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId27::
# 390 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_436, Naranja_Route120_G00_M35_Text_081BF728, Naranja_Route120_G00_M35_Text_081BF78C
# 391 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF7B2, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId34::
# 396 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_652, Naranja_Route120_G00_M35_Text_081BF80B, Naranja_Route120_G00_M35_Text_081BF852
# 397 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF891, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId35::
# 402 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE120_653, Naranja_Route120_G00_M35_Text_081BF8C5, Naranja_Route120_G00_M35_Text_081BF920
# 403 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route120_G00_M35_Text_081BF946, MSGBOX_AUTOCLOSE
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId37::
# 408 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 409 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 410 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 1
# 411 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId38::
# 415 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 416 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 417 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 2
# 418 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId39::
# 422 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 423 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 424 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 3
# 425 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId41::
# 429 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 430 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 431 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 4
# 432 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId40::
# 436 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 437 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 438 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 5
# 439 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId18::
# 443 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE120_053, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 444 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 445 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId17::
# 450 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE120_053, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 451 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC015, MSGBOX_DEFAULT
# 452 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId16::
# 457 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 458 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 459 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId22::
# 464 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x17
# 465 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 466 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId29::
# 471 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 472 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 473 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId28::
# 478 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 8
# 479 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 480 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


# 484 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
Naranja_Route120_G00_M35_Movement_08151995:
# 485 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	walk_down
# 486 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	walk_left
	step_end

# 489 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
Naranja_Route120_G00_M35_Movement_081A0662:
# 490 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 491 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 492 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 493 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 494 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 495 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 496 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 497 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 498 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 499 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 500 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 501 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 502 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 503 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 504 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 505 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 506 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 507 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_16
# 508 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 509 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_16
# 510 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
	step_end

Naranja_Route120_G00_M35_Text_08171827::
# 513 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\nIt’s been a while.\pThere’s something here that you can’t\nsee, right?\pNow, if I were to use this device on\nthe invisible obstacle...\pNo, no. Rather than describing it,\nI should just show you.\lThat would be more fun.\p{PLAYER}{KUN}, are your POKéMON ready for\nbattle?$"

Naranja_Route120_G00_M35_Text_0817193D::
# 517 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: No?\pI’ll wait here, so you can get ready.$"

Naranja_Route120_G00_M35_Text_0817196F::
# 521 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\nready for battle?$"

Naranja_Route120_G00_M35_Text_081719A0::
# 525 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\npower as a TRAINER!$"

Naranja_Route120_G00_M35_Text_081719D4::
# 529 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\pAn invisible POKéMON became completely\nvisible!\pThe startled POKéMON attacked!$"

Naranja_Route120_G00_M35_Text_08171A40::
# 533 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: I see...\nYour battle style is intriguing.\pYour POKéMON have obviously grown\nsince I first met you in DEWFORD.\pI’d like you to have this\nDEVON SCOPE.\pWho knows, there may be other\nconcealed POKéMON.$"

Naranja_Route120_G00_M35_Text_08171B0E::
# 537 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\pI enjoy seeing POKéMON and TRAINERS\nwho strive together.\pI think you’re doing great.\pWell, let’s meet again somewhere.$"

Naranja_Route120_G00_M35_Text_08171B93::
# 541 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Something unseeable is in the way.$"

Naranja_Route120_G00_M35_Text_08171C5E::
# 545 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "ROUTE 120\nロ FORTREE CITY$"

Naranja_Route120_G00_M35_Text_08171C77::
# 549 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "ワ ROUTE 121\nロ ROUTE 120$"

Naranja_Route120_G00_M35_Text_081BF07E::
# 553 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "My POKéMON is strong!\nHow about yours?$"

Naranja_Route120_G00_M35_Text_081BF0A5::
# 557 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Your POKéMON were stronger...$"

Naranja_Route120_G00_M35_Text_081BF0C3::
# 561 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A POKéMON that grows steadily is one\nyou can count on.$"

Naranja_Route120_G00_M35_Text_081BF0FA::
# 565 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A POKéMON that grows steadily is one\nyou can count on.$"

Naranja_Route120_G00_M35_Text_081BF131::
# 569 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Your POKéMON are seriously strong.$"

Naranja_Route120_G00_M35_Text_081BF154::
# 573 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "My POKéMON are growing stronger.\nI have to grow stronger, too.$"

Naranja_Route120_G00_M35_Text_081BF193::
# 577 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I’ll check your POKéMON and see if\nthey’re fit for the outdoors.$"

Naranja_Route120_G00_M35_Text_081BF1D4::
# 581 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "With POKéMON that strong, you’re in\nno danger of needing rescue!$"

Naranja_Route120_G00_M35_Text_081BF215::
# 585 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "To travel wherever your heart desires\nwith POKéMON...\lThat’s the joy of being a TRAINER.$"

Naranja_Route120_G00_M35_Text_081BF26E::
# 589 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "How’s your physical fitness?\nIf you’re not fit, you could have a\lrough time in critical situations.$"

Naranja_Route120_G00_M35_Text_081BF2D2::
# 593 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I’m totally fit, but...$"

Naranja_Route120_G00_M35_Text_081BF2EA::
# 597 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Fitness training is in my routine.\nI always run with my POKéMON.$"

Naranja_Route120_G00_M35_Text_081BF32B::
# 601 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lWant to battle?$"

Naranja_Route120_G00_M35_Text_081BF36B::
# 605 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\nI lost...$"

Naranja_Route120_G00_M35_Text_081BF38D::
# 609 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lI’ll try harder...$"

Naranja_Route120_G00_M35_Text_081BF3D0::
# 613 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lWant to battle again?$"

Naranja_Route120_G00_M35_Text_081BF416::
# 617 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\nI lost again...$"

Naranja_Route120_G00_M35_Text_081BF43E::
# 621 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lI’ll try harder...\lFor my precious BUG POKéMON...$"

Naranja_Route120_G00_M35_Text_081BF4A0::
# 625 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "POKéMON have many special abilities.\nIf you want to become a first-class\lTRAINER, learn about them.$"

Naranja_Route120_G00_M35_Text_081BF504::
# 629 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "You’re obviously thinking.$"

Naranja_Route120_G00_M35_Text_081BF51F::
# 633 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "The special abilities of POKéMON\nwill make battle styles change.$"

Naranja_Route120_G00_M35_Text_081BF560::
# 637 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Who might you be?\pAre you perhaps searching for ancient\nruins that are rumored to possibly\lexist according to legend?$"

Naranja_Route120_G00_M35_Text_081BF5D6::
# 641 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "What a disgraceful setback...$"

Naranja_Route120_G00_M35_Text_081BF5F4::
# 645 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "That giant rock... I would like to\nbelieve it may indeed contain ancient\lruins. But I see no entrance.$"

Naranja_Route120_G00_M35_Text_081BF65B::
# 649 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Why am I carrying this parasol?\pI’ll tell you if you can win against me.$"

Naranja_Route120_G00_M35_Text_081BF6A4::
# 653 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A parasol can’t ward off POKéMON\nattacks...$"

Naranja_Route120_G00_M35_Text_081BF6D0::
# 657 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I don’t think strong sunlight is good\nfor my POKéMON.\lSo I shield them with my parasol.$"

Naranja_Route120_G00_M35_Text_081BF728::
# 661 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Me, POKéMON, and my parasol...\pIf any one of them is missing, the\npicture of beauty will be ruined.$"

Naranja_Route120_G00_M35_Text_081BF78C::
# 665 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "You’ve completely ruined my beauty...$"

Naranja_Route120_G00_M35_Text_081BF7B2::
# 669 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A parasol wouldn’t suit you at all.\pWhy, something like this would only\nget in your way.$"

Naranja_Route120_G00_M35_Text_081BF80B::
# 673 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I will adopt the movements of POKéMON\nand create new ninja techniques.$"

Naranja_Route120_G00_M35_Text_081BF852::
# 677 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "The creation of new ninja techniques\nis but a distant dream...$"

Naranja_Route120_G00_M35_Text_081BF891::
# 681 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Perhaps I ought to apprentice under\na ninja sensei.$"

Naranja_Route120_G00_M35_Text_081BF8C5::
# 685 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "We ninja conceal ourselves under our\ncamouflage cloaks.\lI bet you didn’t know where I was!$"

Naranja_Route120_G00_M35_Text_081BF920::
# 689 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I lost!\nI should camouflage my shame!$"

Naranja_Route120_G00_M35_Text_081BF946::
# 693 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Our camouflage cloaks are all\nhandmade.$"

Naranja_Route120_G00_M35_Text_081C58F1::
# 697 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Give the case a shake, and out pops\na オカキクケ...\pAnd that オカキクケ is caught and eaten\nby a POKéMON...\pIt’s an expression of love, isn’t it?$"

Naranja_Route120_G00_M35_Text_081C5979::
# 701 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Yes, yes.\nYou understand what I mean.\pYou should take this.$"

Naranja_Route120_G00_M35_Text_081C59B5::
# 705 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Oh... But it is important to make your\nown impressions, I guess...\pYou can have this.$"

Naranja_Route120_G00_M35_Text_081C5A0B::
# 709 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I think that BERRY is rare.\nI hope you raise it with loving care.$"

Naranja_Route120_G00_M35_Text_081C5A4D::
# 713 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I’ll get more BERRIES from the\nBERRY MASTER.$"
