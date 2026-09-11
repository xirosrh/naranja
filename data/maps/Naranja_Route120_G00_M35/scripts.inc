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
	loadword 0, Naranja_Route120_G00_M35_Text_081C58F1
# 139 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 5
# 140 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 141 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151841
# 142 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 143 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815184A
# 144 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 145 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 146 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 147 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517DC
# 148 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 149 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517DC
# 150 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 151 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517E7
# 152 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 153 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517E7
# 154 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 155 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517F2
# 156 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 157 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517F2
# 158 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 159 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517FD
# 160 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 161 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081517FD
# 162 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 163 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151808
# 164 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 165 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151808
	end


Naranja_Route120_G00_M35_EventScript_Sub_081517DC::
# 170 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x8F
# 171 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_081517E7::
# 175 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x90
# 176 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_081517F2::
# 180 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x91
# 181 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_081517FD::
# 185 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x92
# 186 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151808::
# 190 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0x93
# 191 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151813
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151813::
# 195 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8004
# 196 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 197 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 0
# 198 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 199 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 200 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_08CE
# 201 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081C5A0B
# 202 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 203 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151837::
# 208 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081C5A4D
# 209 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 210 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151841::
# 215 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081C5979
# 216 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815184A::
# 221 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081C59B5
# 222 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_STEVEN_LocalId31::
# 227 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 228 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 229 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_0122
# 230 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151884
# 231 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171827
# 232 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 5
# 233 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 234 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151877
# 235 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_0815189D
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151877::
# 239 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_0817193D
# 240 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 241 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_0122
# 242 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151884::
# 247 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_0817196F
# 248 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 5
# 249 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 250 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151877
# 251 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_0815189D
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815189D::
# 255 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081719A0
# 256 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 257 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	closemessage
# 258 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 259 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815197F
# 260 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 261 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	call_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_0815198A
# 262 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 263 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 264 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0x14
# 265 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081719D4
# 266 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 267 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	closemessage
# 268 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_KECLEON_1, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 269 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 270 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_KECLEON_1, Naranja_Route120_G00_M35_Movement_081A0662
# 271 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 272 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitse
# 273 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 274 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0x28
# 275 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmoncry
# 276 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setwildbattle SPECIES_KECLEON, 0x1E, 0
# 277 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 0
# 278 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 279 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	dowildbattle
# 280 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 281 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route120_G00_M35_EventScript_Sub_08151908
	return


Naranja_Route120_G00_M35_EventScript_Sub_08151908::
# 285 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 286 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 287 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 288 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171A40
# 289 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 290 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x120
# 291 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 292 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 0
# 293 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setflag FLAG_NARANJA_ROUTE120_EVENT_COMPLETE_011D
# 294 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171B0E
# 295 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 296 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	closemessage
# 297 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_ROUTE120_G00_M35_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 298 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
# 299 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0x32
# 300 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setfieldeffectargument 0, 1
# 301 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	dofieldeffect 0x1E
# 302 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay 0xF
# 303 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	removeobject LOCALID_ROUTE120_G00_M35_STEVEN
# 304 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitfieldeffect 0x1E
# 305 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xD, 0xF, 0x297, 0
# 306 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xC, 0x10, 0x29F, 0
# 307 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xC, 0x11, 0xA1, 0
# 308 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setmetatile 0xD, 0x11, 0xA1, 0
# 309 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	special DrawWholeMapView
# 310 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_Sub_0815197F::
# 315 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 316 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route120_G00_M35_EventScript_Sub_0815198A::
# 321 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route120_G00_M35_Movement_08151995
# 322 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId30::
# 327 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171B93
# 328 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 2
	end


Naranja_Route120_G00_M35_EventScript_Sign_1::
# 333 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171C5E
# 334 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 3
	end


Naranja_Route120_G00_M35_EventScript_Sign_2::
# 339 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_08171C77
# 340 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 3
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId12::
# 345 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_406, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF07E, Naranja_Route120_G00_M35_Text_081BF0A5
# 346 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 347 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 348 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_081519F1
# 349 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF0C3
# 350 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_Sub_081519F1::
# 355 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE120_406, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF0FA, Naranja_Route120_G00_M35_Text_081BF131
# 356 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF154
# 357 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId13::
# 362 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_227, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF193, Naranja_Route120_G00_M35_Text_081BF1D4
# 363 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF215
# 364 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId14::
# 369 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_560, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF26E, Naranja_Route120_G00_M35_Text_081BF2D2
# 370 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF2EA
# 371 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId15::
# 376 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_226, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF32B, Naranja_Route120_G00_M35_Text_081BF36B
# 377 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 378 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 379 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto_if EQUAL, Naranja_Route120_G00_M35_EventScript_Sub_08151A5D
# 380 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF38D
# 381 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_Sub_08151A5D::
# 386 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE120_226, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF3D0, Naranja_Route120_G00_M35_Text_081BF416
# 387 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF43E
# 388 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId24::
# 393 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_095, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF4A0, Naranja_Route120_G00_M35_Text_081BF504
# 394 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF51F
# 395 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_HIKER_LocalId25::
# 400 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_045, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF560, Naranja_Route120_G00_M35_Text_081BF5D6
# 401 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF5F4
# 402 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId26::
# 407 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_435, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF65B, Naranja_Route120_G00_M35_Text_081BF6A4
# 408 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF6D0
# 409 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId27::
# 414 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_436, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF728, Naranja_Route120_G00_M35_Text_081BF78C
# 415 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF7B2
# 416 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId34::
# 421 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_652, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF80B, Naranja_Route120_G00_M35_Text_081BF852
# 422 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF891
# 423 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId35::
# 428 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE120_653, LOCALID_NONE, Naranja_Route120_G00_M35_Text_081BF8C5, Naranja_Route120_G00_M35_Text_081BF920
# 429 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route120_G00_M35_Text_081BF946
# 430 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 6
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId37::
# 435 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 436 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 437 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 1
# 438 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId38::
# 442 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 443 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 444 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 2
# 445 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId39::
# 449 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 450 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 451 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 3
# 452 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId41::
# 456 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 457 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 458 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 4
# 459 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId40::
# 463 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	lock
# 464 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	faceplayer
# 465 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setvar VAR_0x8004, 5
# 466 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	goto Naranja_Route119_G00_M34_EventScript_Sub_081A0594
	return


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId18::
# 470 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE120_053, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 471 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 472 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 473 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId17::
# 478 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE120_053, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 479 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC015
# 480 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 4
# 481 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	release
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId16::
# 486 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 487 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 488 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId22::
# 493 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x17
# 494 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 495 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId29::
# 500 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 0x15
# 501 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 502 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


Naranja_Route120_G00_M35_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId28::
# 507 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8000, 8
# 508 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 509 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	callstd 1
	end


# 513 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
Naranja_Route120_G00_M35_Movement_08151995:
# 514 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	walk_down
# 515 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	walk_left
	step_end

# 518 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
Naranja_Route120_G00_M35_Movement_081A0662:
# 519 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 520 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 521 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 522 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 523 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 524 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 525 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 526 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_4
# 527 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 528 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 529 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 530 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 531 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 532 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 533 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 534 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_8
# 535 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
# 536 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_16
# 537 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_invisible
# 538 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	delay_16
# 539 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	set_visible
	step_end

Naranja_Route120_G00_M35_Text_08171827::
# 542 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\nIt’s been a while.\pThere’s something here that you can’t\nsee, right?\pNow, if I were to use this device on\nthe invisible obstacle...\pNo, no. Rather than describing it,\nI should just show you.\lThat would be more fun.\p{PLAYER}{KUN}, are your POKéMON ready for\nbattle?$"

Naranja_Route120_G00_M35_Text_0817193D::
# 546 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: No?\pI’ll wait here, so you can get ready.$"

Naranja_Route120_G00_M35_Text_0817196F::
# 550 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\nready for battle?$"

Naranja_Route120_G00_M35_Text_081719A0::
# 554 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\npower as a TRAINER!$"

Naranja_Route120_G00_M35_Text_081719D4::
# 558 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\pAn invisible POKéMON became completely\nvisible!\pThe startled POKéMON attacked!$"

Naranja_Route120_G00_M35_Text_08171A40::
# 562 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: I see...\nYour battle style is intriguing.\pYour POKéMON have obviously grown\nsince I first met you in DEWFORD.\pI’d like you to have this\nDEVON SCOPE.\pWho knows, there may be other\nconcealed POKéMON.$"

Naranja_Route120_G00_M35_Text_08171B0E::
# 566 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\pI enjoy seeing POKéMON and TRAINERS\nwho strive together.\pI think you’re doing great.\pWell, let’s meet again somewhere.$"

Naranja_Route120_G00_M35_Text_08171B93::
# 570 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Something unseeable is in the way.$"

Naranja_Route120_G00_M35_Text_08171C5E::
# 574 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "ROUTE 120\nロ FORTREE CITY$"

Naranja_Route120_G00_M35_Text_08171C77::
# 578 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "ワ ROUTE 121\nロ ROUTE 120$"

Naranja_Route120_G00_M35_Text_081BF07E::
# 582 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "My POKéMON is strong!\nHow about yours?$"

Naranja_Route120_G00_M35_Text_081BF0A5::
# 586 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Your POKéMON were stronger...$"

Naranja_Route120_G00_M35_Text_081BF0C3::
# 590 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A POKéMON that grows steadily is one\nyou can count on.$"

Naranja_Route120_G00_M35_Text_081BF0FA::
# 594 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A POKéMON that grows steadily is one\nyou can count on.$"

Naranja_Route120_G00_M35_Text_081BF131::
# 598 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Your POKéMON are seriously strong.$"

Naranja_Route120_G00_M35_Text_081BF154::
# 602 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "My POKéMON are growing stronger.\nI have to grow stronger, too.$"

Naranja_Route120_G00_M35_Text_081BF193::
# 606 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I’ll check your POKéMON and see if\nthey’re fit for the outdoors.$"

Naranja_Route120_G00_M35_Text_081BF1D4::
# 610 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "With POKéMON that strong, you’re in\nno danger of needing rescue!$"

Naranja_Route120_G00_M35_Text_081BF215::
# 614 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "To travel wherever your heart desires\nwith POKéMON...\lThat’s the joy of being a TRAINER.$"

Naranja_Route120_G00_M35_Text_081BF26E::
# 618 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "How’s your physical fitness?\nIf you’re not fit, you could have a\lrough time in critical situations.$"

Naranja_Route120_G00_M35_Text_081BF2D2::
# 622 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I’m totally fit, but...$"

Naranja_Route120_G00_M35_Text_081BF2EA::
# 626 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Fitness training is in my routine.\nI always run with my POKéMON.$"

Naranja_Route120_G00_M35_Text_081BF32B::
# 630 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lWant to battle?$"

Naranja_Route120_G00_M35_Text_081BF36B::
# 634 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\nI lost...$"

Naranja_Route120_G00_M35_Text_081BF38D::
# 638 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lI’ll try harder...$"

Naranja_Route120_G00_M35_Text_081BF3D0::
# 642 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lWant to battle again?$"

Naranja_Route120_G00_M35_Text_081BF416::
# 646 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\nI lost again...$"

Naranja_Route120_G00_M35_Text_081BF43E::
# 650 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "... ... ... ... ... ...\n... ... ... ... ... ...\lI’ll try harder...\lFor my precious BUG POKéMON...$"

Naranja_Route120_G00_M35_Text_081BF4A0::
# 654 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "POKéMON have many special abilities.\nIf you want to become a first-class\lTRAINER, learn about them.$"

Naranja_Route120_G00_M35_Text_081BF504::
# 658 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "You’re obviously thinking.$"

Naranja_Route120_G00_M35_Text_081BF51F::
# 662 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "The special abilities of POKéMON\nwill make battle styles change.$"

Naranja_Route120_G00_M35_Text_081BF560::
# 666 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Who might you be?\pAre you perhaps searching for ancient\nruins that are rumored to possibly\lexist according to legend?$"

Naranja_Route120_G00_M35_Text_081BF5D6::
# 670 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "What a disgraceful setback...$"

Naranja_Route120_G00_M35_Text_081BF5F4::
# 674 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "That giant rock... I would like to\nbelieve it may indeed contain ancient\lruins. But I see no entrance.$"

Naranja_Route120_G00_M35_Text_081BF65B::
# 678 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Why am I carrying this parasol?\pI’ll tell you if you can win against me.$"

Naranja_Route120_G00_M35_Text_081BF6A4::
# 682 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A parasol can’t ward off POKéMON\nattacks...$"

Naranja_Route120_G00_M35_Text_081BF6D0::
# 686 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I don’t think strong sunlight is good\nfor my POKéMON.\lSo I shield them with my parasol.$"

Naranja_Route120_G00_M35_Text_081BF728::
# 690 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Me, POKéMON, and my parasol...\pIf any one of them is missing, the\npicture of beauty will be ruined.$"

Naranja_Route120_G00_M35_Text_081BF78C::
# 694 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "You’ve completely ruined my beauty...$"

Naranja_Route120_G00_M35_Text_081BF7B2::
# 698 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "A parasol wouldn’t suit you at all.\pWhy, something like this would only\nget in your way.$"

Naranja_Route120_G00_M35_Text_081BF80B::
# 702 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I will adopt the movements of POKéMON\nand create new ninja techniques.$"

Naranja_Route120_G00_M35_Text_081BF852::
# 706 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "The creation of new ninja techniques\nis but a distant dream...$"

Naranja_Route120_G00_M35_Text_081BF891::
# 710 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Perhaps I ought to apprentice under\na ninja sensei.$"

Naranja_Route120_G00_M35_Text_081BF8C5::
# 714 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "We ninja conceal ourselves under our\ncamouflage cloaks.\lI bet you didn’t know where I was!$"

Naranja_Route120_G00_M35_Text_081BF920::
# 718 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I lost!\nI should camouflage my shame!$"

Naranja_Route120_G00_M35_Text_081BF946::
# 722 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Our camouflage cloaks are all\nhandmade.$"

Naranja_Route120_G00_M35_Text_081C58F1::
# 726 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Give the case a shake, and out pops\na オカキクケ...\pAnd that オカキクケ is caught and eaten\nby a POKéMON...\pIt’s an expression of love, isn’t it?$"

Naranja_Route120_G00_M35_Text_081C5979::
# 730 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Yes, yes.\nYou understand what I mean.\pYou should take this.$"

Naranja_Route120_G00_M35_Text_081C59B5::
# 734 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "Oh... But it is important to make your\nown impressions, I guess...\pYou can have this.$"

Naranja_Route120_G00_M35_Text_081C5A0B::
# 738 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I think that BERRY is rare.\nI hope you raise it with loving care.$"

Naranja_Route120_G00_M35_Text_081C5A4D::
# 742 "data/maps/Naranja_Route120_G00_M35/scripts.pory"
	.string "I’ll get more BERRIES from the\nBERRY MASTER.$"
