Naranja_Route111_G00_M26_MapScripts::
# 5 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_Route111_G00_M26_OnLoad
# 6 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route111_G00_M26_OnTransition
	.byte 0


Naranja_Route111_G00_M26_OnLoad::
# 10 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_00E4
# 11 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if LESS_THAN, Naranja_Route111_G00_M26_EventScript_Sub_0814FFA6
	end


Naranja_Route111_G00_M26_EventScript_Sub_0814FFA6::
# 16 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setmetatile 0x1D, 0x56, 0x7C, 1
# 17 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setmetatile 0x1D, 0x57, 0x91, 1
	return


Naranja_Route111_G00_M26_OnTransition::
# 22 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0814FFCD
# 23 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE313
# 24 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checktrainerflag 0x138
# 25 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if LESS_THAN, Naranja_Route111_G00_M26_EventScript_Sub_0815000D
	end


Naranja_Route111_G00_M26_EventScript_Sub_0814FFCD::
# 30 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 31 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x22
# 32 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if LESS_THAN, Naranja_Route111_G00_M26_EventScript_Sub_0815000C
# 33 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x6B
# 34 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if GREATER_THAN, Naranja_Route111_G00_M26_EventScript_Sub_0815000C
# 35 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0x48
# 36 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if GREATER_THAN, Naranja_Route111_G00_M26_EventScript_Sub_08150009
# 37 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0x7D0
# 38 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if GREATER_THAN, Naranja_Route111_G00_M26_EventScript_Sub_0815000C
# 39 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 8
# 40 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if LESS_THAN, Naranja_Route111_G00_M26_EventScript_Sub_0815000C
# 41 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_08150009
	return


Naranja_Route111_G00_M26_EventScript_Sub_08150009::
# 45 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setweather 8
# 46 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_0815000C
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815000C::
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815000D::
# 54 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_MAN_1_1
# 55 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_WOMAN_2
# 56 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_LASS
# 57 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_OLD_WOMAN_1
# 58 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	cleartrainerflag 0x124
# 59 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	cleartrainerflag 0x12B
# 60 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	cleartrainerflag 0x25E
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_FOSSIL_LocalId34::
# 65 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 66 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FA54
# 67 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 68 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 69 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_0815005F
# 70 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11E
# 71 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 72 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 73 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 74 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL
# 75 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL_2
# 76 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL
# 77 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay 0x1E
# 78 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_FOSSIL_2, Naranja_Route111_G00_M26_Movement_081500AF
# 79 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 80 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL_2
# 81 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_0815005F::
# 86 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FACE
# 87 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 88 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_FOSSIL_LocalId35::
# 93 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 94 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FAED
# 95 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 96 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 97 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081500A5
# 98 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11F
# 99 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 100 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 101 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 102 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL_2
# 103 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL
# 104 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL_2
# 105 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay 0x1E
# 106 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_FOSSIL, Naranja_Route111_G00_M26_Movement_081500AF
# 107 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL
# 109 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_081500A5::
# 114 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FB67
# 115 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId17::
# 121 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 122 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 123 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	dotimebasedevents
# 124 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_08CC
# 125 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150100
# 126 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081C56F0
# 127 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 128 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x94
# 129 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 130 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 131 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 132 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 133 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_08CC
# 134 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GetPlayerBigGuyGirlString
# 135 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081C5781
# 136 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150100::
# 142 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081C57D2
# 143 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 144 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Trigger_2::
# 149 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 150 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_0x8004, 1
# 151 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_0815013A
	return


Naranja_Route111_G00_M26_EventScript_Trigger_6::
# 155 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 156 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_0x8004, 2
# 157 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_0815013A
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815013A::
# 161 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkitem ITEM_GO_GOGGLES, 1
# 162 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 163 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150151
# 164 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_TEMP_3, 1
# 165 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150151::
# 170 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081A0F93
# 171 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 172 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 173 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 174 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150188
# 175 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 176 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150193
# 177 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 178 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_0815019E
# 179 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 180 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081501A9
# 181 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150188::
# 186 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501B4
# 187 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_08150193::
# 192 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501B6
# 193 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815019E::
# 198 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501B8
# 199 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081501A9::
# 204 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501BA
# 205 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Trigger_5::
# 210 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setweather 2
# 211 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 212 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	doweather
# 213 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_TEMP_3, 0
	end


Naranja_Route111_G00_M26_EventScript_Trigger_1::
# 218 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setweather 8
# 219 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	fadenewbgm MUS_DESERT
# 220 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	doweather
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 225 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 226 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 227 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0843
# 228 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F705
# 229 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 230 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 231 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081501F3
# 232 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F785
# 233 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 234 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081501F3::
# 239 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F7B3
# 240 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 241 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_292, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F7D2
# 242 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_MAN_1_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 243 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 244 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 245 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F7FF
# 246 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 247 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 248 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_MAN_1_1, Naranja_Route111_G00_M26_Movement_08150356
# 249 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 250 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_MAN_1_1
# 251 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 252 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_0815035B
# 253 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 254 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 255 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	addobject LOCALID_ROUTE111_G00_M26_WOMAN_2
# 256 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_WOMAN_2, Naranja_Route111_G00_M26_Movement_08150359
# 257 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 258 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 259 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F82D
# 260 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 261 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_299, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F8A6
# 262 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_WOMAN_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 263 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 264 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 265 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F8D5
# 266 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 267 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 268 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_WOMAN_2, Naranja_Route111_G00_M26_Movement_08150356
# 269 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 270 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_WOMAN_2
# 271 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 272 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_0815035B
# 273 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 274 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 275 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	addobject LOCALID_ROUTE111_G00_M26_LASS
# 276 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_LASS, Naranja_Route111_G00_M26_Movement_08150359
# 277 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 278 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 279 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F90E
# 280 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 281 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_606, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F956
# 282 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_LASS, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 283 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 284 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 285 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F96C
# 286 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 287 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 288 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_LASS, Naranja_Route111_G00_M26_Movement_08150356
# 289 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 290 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_LASS
# 291 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 292 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_0815035B
# 293 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 294 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 295 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	addobject LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1
# 296 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1, Naranja_Route111_G00_M26_Movement_08150359
# 297 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 298 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 299 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816F991
# 300 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 301 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_312, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F9EC
# 302 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FA22
# 303 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 304 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 305 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 306 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 307 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 308 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1, Naranja_Route111_G00_M26_Movement_08150356
# 309 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 310 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1
# 311 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 312 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150348::
# 317 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	opendoor 0xD, 0x71
# 318 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitdooranim
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815034F::
# 323 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closedoor 0xD, 0x71
# 324 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitdooranim
	return


Naranja_Route111_G00_M26_EventScript_Sign_2::
# 329 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FC9C
# 330 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 3
	end


Naranja_Route111_G00_M26_EventScript_Sign_1::
# 335 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FCB6
# 336 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 3
	end


Naranja_Route111_G00_M26_EventScript_Sign_3::
# 341 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FCEF
# 342 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 3
	end


Naranja_Route111_G00_M26_EventScript_Sign_4::
# 347 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FD05
# 348 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 3
	end


Naranja_Route111_G00_M26_EventScript_Sign_8::
# 353 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FD1B
# 354 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 3
	end


Naranja_Route111_G00_M26_EventScript_Sign_13::
# 359 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FD55
# 360 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 3
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId8::
# 365 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FB86
# 366 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 2
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId36::
# 371 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_0816FC3A
# 372 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 2
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId9::
# 377 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_211, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAB4B, Naranja_Route111_G00_M26_Text_081BABC7
# 378 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BAC10
# 379 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId5::
# 384 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_469, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAC60, Naranja_Route111_G00_M26_Text_081BACC5
# 385 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BACD8
# 386 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId11::
# 391 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_212, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAD4B, Naranja_Route111_G00_M26_Text_081BADA3
# 392 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BADC2
# 393 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId12::
# 398 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_470, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAE24, Naranja_Route111_G00_M26_Text_081BAE6E
# 399 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BAE81
# 400 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_HIKER_LocalId10::
# 405 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_044, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAEC9, Naranja_Route111_G00_M26_Text_081BAF14
# 406 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 407 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 408 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_0815042A
# 409 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BAF5B
# 410 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_Sub_0815042A::
# 415 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE111_044, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAFC1, Naranja_Route111_G00_M26_Text_081BB034
# 416 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB070
# 417 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId29::
# 422 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_218, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB111, Naranja_Route111_G00_M26_Text_081BB140
# 423 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB15B
# 424 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId28::
# 429 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_476, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB199, Naranja_Route111_G00_M26_Text_081BB1D8
# 430 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB1F6
# 431 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId30::
# 436 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_189, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB250, Naranja_Route111_G00_M26_Text_081BB27E
# 437 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB290
# 438 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId32::
# 443 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_078, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB2E3, Naranja_Route111_G00_M26_Text_081BB313
# 444 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 445 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 446 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081504AD
# 447 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB33E
# 448 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_Sub_081504AD::
# 453 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE111_078, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB3A7, Naranja_Route111_G00_M26_Text_081BB3FA
# 454 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB40E
# 455 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId31::
# 460 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_094, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB44F, Naranja_Route111_G00_M26_Text_081BB49F
# 461 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 462 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 463 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081504EB
# 464 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB4CE
# 465 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_Sub_081504EB::
# 470 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE111_094, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB529, Naranja_Route111_G00_M26_Text_081BB5A2
# 471 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081BB5C1
# 472 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 6
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId33::
# 477 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 478 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 479 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081A3520
# 480 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 481 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 482 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A3877
# 483 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081A37B5
# 484 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 485 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081A3877::
# 490 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14B
# 491 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 492 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 493 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 494 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38D9
# 495 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081A35C5
# 496 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 497 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 498 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 499 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G00_M01_MART_EMPLOYEE
# 500 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 501 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38C3
# 502 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 503 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38C3
# 504 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 505 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38CE
# 506 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject 32783
# 507 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081A38C3::
# 512 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32783, Naranja_Route111_G00_M26_Movement_081A38E3
# 513 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081A38CE::
# 518 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32783, Naranja_Route111_G00_M26_Movement_081A38EF
# 519 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081A38D9::
# 524 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081A37F6
# 525 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 526 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE313::
# 531 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	cleartrainerflag 0x38
# 532 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, GabbyAndTyGetBattleNum
# 533 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 534 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 535 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE384
# 536 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 537 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE38A
# 538 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 539 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE395
# 540 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 541 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3A0
# 542 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 543 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3AB
# 544 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 545 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3B6
# 546 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 547 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3C1
# 548 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 549 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3CC
# 550 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 551 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3D7
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE384::
# 556 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3E6
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE38A::
# 561 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3EE
# 562 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3E2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE395::
# 567 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3F6
# 568 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3EA
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3A0::
# 573 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3FE
# 574 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3F2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3AB::
# 579 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE406
# 580 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3FA
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3B6::
# 585 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE40E
# 586 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE402
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3C1::
# 591 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE416
# 592 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE40A
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3CC::
# 597 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE41E
# 598 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE412
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3D7::
# 603 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE40E
# 604 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE41A
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3E2::
# 609 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3E6::
# 614 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3EA::
# 619 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3EE::
# 624 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3F2::
# 629 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_CAMERAMAN
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3F6::
# 634 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE120_G00_M35_CAMERAMAN
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3FA::
# 639 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3FE::
# 644 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE402::
# 649 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE406::
# 654 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE40A::
# 659 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE40E::
# 664 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE120_G00_M35_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE412::
# 669 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE416::
# 674 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE41A::
# 679 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE41E::
# 684 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_3
	return


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId14::
# 689 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_051, LOCALID_NONE, Naranja_Route111_G00_M26_Text_086B4C10, Naranja_Route111_G00_M26_Text_081ABFD3, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE5A2
# 690 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 691 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 692 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId21::
# 697 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_054, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 698 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 699 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 700 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId22::
# 705 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_054, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 706 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC015
# 707 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 708 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId23::
# 713 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_056, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 714 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 715 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 716 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId24::
# 721 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_056, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 722 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC015
# 723 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 724 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE5A2::
# 729 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GabbyAndTyBeforeInterview
# 730 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GetGabbyAndTyLocalIds
# 731 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 732 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5E0
# 733 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 734 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5EB
# 735 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 736 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5FD
# 737 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_TEMP_1
# 738 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE73A
# 739 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC7E4
# 740 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 741 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE5E0::
# 745 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32772, Naranja_Route111_G00_M26_Movement_081AE699
# 746 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE5EB::
# 751 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32772, Naranja_Route111_G00_M26_Movement_081AE69B
# 752 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32773, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 753 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE5FD::
# 758 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32772, Naranja_Route111_G00_M26_Movement_081AE69D
# 759 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 760 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F::
# 765 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GabbyAndTyBeforeInterview
# 766 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GetGabbyAndTyLocalIds
# 767 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 768 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5E0
# 769 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 770 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5EB
# 771 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 772 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5FD
# 773 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_TEMP_1
# 774 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE73A
# 775 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, GabbyAndTyGetLastQuote
# 776 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 777 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE69F
# 778 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC10A
# 779 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 780 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, GabbyAndTyGetLastBattleTrivia
# 781 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 782 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 783 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6AD
# 784 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 785 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6BB
# 786 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 787 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6C9
# 788 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 789 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6D7
# 790 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 791 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6E5
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE69F::
# 796 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC60B
# 797 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 798 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6AD::
# 802 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC3CF
# 803 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 804 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6BB::
# 808 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC18D
# 809 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 810 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6C9::
# 814 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC219
# 815 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 816 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6D7::
# 820 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC2D6
# 821 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 822 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6E5::
# 826 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC355
# 827 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 5
# 828 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3::
# 832 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 833 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE72D
# 834 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC40F
# 835 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 836 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_0x8004, 0xA
# 837 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 838 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 839 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 840 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 841 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE72D
# 842 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC487
# 843 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 844 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GabbyAndTyAfterInterview
# 845 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_TEMP_1
# 846 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE72D::
# 851 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC553
# 852 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 853 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_TEMP_1
# 854 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE73A::
# 859 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	loadword 0, Naranja_Route111_G00_M26_Text_081AC59E
# 860 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 4
# 861 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId18::
# 866 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x145
# 867 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 868 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 1
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId25::
# 873 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6C
# 874 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 875 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 1
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId26::
# 880 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x3F
# 881 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 882 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 1
	end


# 886 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081500AF:
# 887 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 888 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 889 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 890 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 891 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 892 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 893 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 894 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 895 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 896 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 897 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 898 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 899 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 900 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 901 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 902 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 903 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 904 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 905 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 906 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 907 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
	step_end

# 910 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501B4:
# 911 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_up
	step_end

# 914 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501B6:
# 915 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 918 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501B8:
# 919 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
	step_end

# 922 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501BA:
# 923 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_right
	step_end

# 926 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_08150356:
# 927 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_faster_up
# 928 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_up
	step_end

# 931 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_08150359:
# 932 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 935 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_0815035B:
# 936 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 937 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 938 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
	step_end

# 941 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081A38E3:
# 942 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 943 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 944 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 945 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 946 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 947 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 948 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 949 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 950 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 951 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 952 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 955 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081A38EF:
# 956 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 957 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 958 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 959 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 960 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 961 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 962 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 963 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 964 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 965 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 966 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 969 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081AE699:
# 970 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_down
	step_end

# 973 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081AE69B:
# 974 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_up
	step_end

# 977 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081AE69D:
# 978 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_left
	step_end

Naranja_Route111_G00_M26_Text_0816F705::
# 981 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Hello! I take it you’re a traveler.\pHow’s this? What do you say to taking\non our family of four in a series of\lPOKéMON battles?$"

Naranja_Route111_G00_M26_Text_0816F785::
# 985 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Is that so?\nDrop in, if you change your mind!$"

Naranja_Route111_G00_M26_Text_0816F7B3::
# 989 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "That’s the spirit! I like you!$"

Naranja_Route111_G00_M26_Text_0816F7D2::
# 993 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Aiyah!\nYou’re a lot tougher than I expected!$"

Naranja_Route111_G00_M26_Text_0816F7FF::
# 997 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Hey, all!\nI’ve found a pretty strong TRAINER!$"

Naranja_Route111_G00_M26_Text_0816F82D::
# 1001 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, my goodness! Aren’t you young?\pYou must be quite the TRAINER to beat\nmy husband, though.\pIt’s my turn to battle now!$"

Naranja_Route111_G00_M26_Text_0816F8A6::
# 1005 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, gosh!\nI can’t get over how strong you are!$"

Naranja_Route111_G00_M26_Text_0816F8D5::
# 1009 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "There’s a strong TRAINER here!\nThis one’s really strong!$"

Naranja_Route111_G00_M26_Text_0816F90E::
# 1013 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You’re stronger than Mommy? Wow!\pBut I’m strong, too!\nReally! Honestly!$"

Naranja_Route111_G00_M26_Text_0816F956::
# 1017 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Huh? Did I just lose?$"

Naranja_Route111_G00_M26_Text_0816F96C::
# 1021 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "This stinks...\p...Snivel... Grandma!$"

Naranja_Route111_G00_M26_Text_0816F991::
# 1025 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "How dare you make my granddaughter\ncry!\pFor that, I’m going to smack you!\nPrepare to lose!$"

Naranja_Route111_G00_M26_Text_0816F9EC::
# 1029 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Kwah! You are strong...\nMy granddaughter was right...$"

Naranja_Route111_G00_M26_Text_0816FA22::
# 1033 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "If you’re not in any hurry, visit with\nus awhile.$"

Naranja_Route111_G00_M26_Text_0816FA54::
# 1037 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You found the ROOT FOSSIL.\pIf this FOSSIL is taken, the other\none will sink into the sand...\pTake the ROOT FOSSIL anyway?$"

Naranja_Route111_G00_M26_Text_0816FACE::
# 1041 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"

Naranja_Route111_G00_M26_Text_0816FAED::
# 1045 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You found the CLAW FOSSIL.\pIf this FOSSIL is taken, the other\none will sink into the sand...\pTake the CLAW FOSSIL anyway?$"

Naranja_Route111_G00_M26_Text_0816FB67::
# 1049 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"

Naranja_Route111_G00_M26_Text_0816FB86::
# 1053 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "If you don’t raise your POKéMON some\nmore, it could be tough to keep winning\lup through the ranks.\pI’ve heard the POKéMON LEAGUE’s\nELITE FOUR are far stronger than\lany GYM LEADER.$"

Naranja_Route111_G00_M26_Text_0816FC3A::
# 1057 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I challenged the WINSTRATE family,\nbut four matches in a row is tough\lgoing... They destroyed me.$"

Naranja_Route111_G00_M26_Text_0816FC9C::
# 1061 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "ROUTE 111\nレ MAUVILLE CITY$"

Naranja_Route111_G00_M26_Text_0816FCB6::
# 1065 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "“Our family’s hearts beat as one!”\nTHE WINSTRATE’S HOUSE$"

Naranja_Route111_G00_M26_Text_0816FCEF::
# 1069 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "ROUTE 111\nロ ROUTE 112$"

Naranja_Route111_G00_M26_Text_0816FD05::
# 1073 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "ROUTE 111\nロ ROUTE 113$"

Naranja_Route111_G00_M26_Text_0816FD1B::
# 1077 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "OLD LADY’S REST STOP\n“Come in and rest your tired bones.”$"

Naranja_Route111_G00_M26_Text_0816FD55::
# 1081 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "TRAINER TIPS\pOne of the indicators of a POKéMON’s\npowerfulness is SP. ATK. It stands for\l“SPECIAL ATTACK.”\pLikewise, SP. DEF stands for “SPECIAL\nDEFENSE.”$"

Naranja_Route111_G00_M26_Text_081A0F93::
# 1085 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The sandstorm is vicious.\nIt’s impossible to keep going.$"

Naranja_Route111_G00_M26_Text_081A3520::
# 1089 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "What’s that?\nWhat am I doing?\pI’m thinking about making my own room\nhere using a POKéMON move.\pI know! I’ll give you this TM.\nWill you use it to make your own room?$"

Naranja_Route111_G00_M26_Text_081A35C5::
# 1093 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Find a big tree that looks like it might\ndrop some vines.\pUse SECRET POWER in front of the tree.\nSome vines should get free and drop\ldown, so you can climb the tree.\pYou’ll find a lot of space for putting\nyour favorite things.\pIt’ll be your own secret room...\nA SECRET BASE!\pYou should make one, too.\pAnother thing, you don’t always have\nto make your SECRET BASE in a tree.\pTry using SECRET POWER on rock walls\nthat have small indents in them.\pI’m going to look for other places, too.\nOkay, bye!$"

Naranja_Route111_G00_M26_Text_081A37B5::
# 1097 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, you don’t want this?\nIf you change your mind, tell me, okay?$"

Naranja_Route111_G00_M26_Text_081A37F6::
# 1101 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, you don’t have any room for this.\pI’ll hold on to it, so come back for it\nanother time, okay?$"

Naranja_Route111_G00_M26_Text_081ABF50::
# 1105 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Oh! You’re {PLAYER}! Hi!\nDo you remember us from last time?\pCan you show us how much stronger\nyou’ve become? Okay, cue interview!$"

Naranja_Route111_G00_M26_Text_081ABFD3::
# 1109 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Hemos presenciado una lucha magnífica\nque nunca podremos olvidar.$"

Naranja_Route111_G00_M26_Text_081AC015::
# 1113 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Awesome! Awesome!\nWho are you?!\pI knew we were onto something wild\nwhen we spotted you!\pOh, please let me explain. We travel\naround everywhere interviewing all\lsorts of TRAINERS.\pSo, would you give us a bit of your time\nfor an interview?$"

Naranja_Route111_G00_M26_Text_081AC10A::
# 1117 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: “{STR_VAR_1}!”\pDo you remember? That’s the quote you\ngave us as the battle clincher last time.\pI never, ever forget stuff like that!$"

Naranja_Route111_G00_M26_Text_081AC18D::
# 1121 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, you stomped\nus before we could brace ourselves...\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC219::
# 1125 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, didn’t you\nthrow a POKé BALL at us?\pWe were shocked! So we told everyone,\njust everyone, about it!\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC2D6::
# 1129 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, your item\nskills cleverly did us in.\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC355::
# 1133 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, we managed\nto look respectable.\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC3CF::
# 1137 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Anyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC40F::
# 1141 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¿Lo harás?\p¿Serás capaz de resumir esta compleja\namalgama de sentimientos que ha sido\lesta pelea… en una sola palabra?$"

Naranja_Route111_G00_M26_Text_081AC487::
# 1145 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Ehhh…\nBonita palabra…\l…creo.\pA pesar de ella seguiremos\nmuy de cerca tu carrera.\pPero todavìa hay mucho que ver\nen esta isla.\pY seguiremos el reportaje\ntras una breve pausa…\pEsperadnos hasta entonces.$"

Naranja_Route111_G00_M26_Text_081AC553::
# 1149 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¿No dices nada?\pEs igual, no creas que voy a llorar.\nEl reportaje sigue.$"

Naranja_Route111_G00_M26_Text_081AC59E::
# 1153 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: We’ll be keeping an eye out\nfor you!$"

Naranja_Route111_G00_M26_Text_081AC5CA::
# 1157 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Is there a strong TRAINER\nanywhere with a lot of POKéMON?$"

Naranja_Route111_G00_M26_Text_081AC60B::
# 1161 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Wow, you are something!\pYou’ve gotten a lot stronger - a lot -\nsince we last battled.\pWe were right about you when we\nspotted you as a hot TRAINER.\pSo, anyway, what do you think?\nAre you willing to give us an interview\lthis time?$"

Naranja_Route111_G00_M26_Text_081AC6F8::
# 1165 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: That was an intense battle!\nDid you get all that on camera?$"

Naranja_Route111_G00_M26_Text_081AC790::
# 1169 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "TY: Hey, lookie here!\nI remember you!\pI’ll get this battle all on this\nhere camera!$"

Naranja_Route111_G00_M26_Text_081AC7E4::
# 1173 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¡Gran batalla!\pAhora… \n¿Podrías dedicarnos unas palabritas?$"

Naranja_Route111_G00_M26_Text_081AC820::
# 1177 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "TY: Do you only have the one POKéMON\nand that’s it?\pIf you had more POKéMON, it’d make for\nbetter footage, but...$"

Naranja_Route111_G00_M26_Text_081AC8D7::
# 1181 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string " \nÇÀ\nep, I got it all.\nThat whole battle’s on camera.$"

Naranja_Route111_G00_M26_Text_081BAB4B::
# 1185 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, hey! Those GO-GOGGLES suit you.\nBut I think they look better on me.\pLet’s decide who they look better on\nwith a battle!$"

Naranja_Route111_G00_M26_Text_081BABC7::
# 1189 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I couldn’t see what was happening at my\nsides because of the GO-GOGGLES.$"

Naranja_Route111_G00_M26_Text_081BAC10::
# 1193 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The GO-GOGGLES make it possible to\nget through sandstorms.\lThat makes me happy!$"

Naranja_Route111_G00_M26_Text_081BAC60::
# 1197 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m having a picnic in the desert.\pYou can always find a TRAINER, so\nI can enjoy a battle here, too!$"

Naranja_Route111_G00_M26_Text_081BACC5::
# 1201 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Ohhh! You’re mean!$"

Naranja_Route111_G00_M26_Text_081BACD8::
# 1205 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "When you’re battling in a sandstorm,\nwatch out for your POKéMON’s HP.\pIt can faint if you don’t keep an eye\non it!$"

Naranja_Route111_G00_M26_Text_081BAD4B::
# 1209 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Wearing these GO-GOGGLES makes me\nfeel like a superhero.\lRight now, nobody can beat me!$"

Naranja_Route111_G00_M26_Text_081BADA3::
# 1213 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I can’t win on spirit alone...$"

Naranja_Route111_G00_M26_Text_081BADC2::
# 1217 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m going to be a real hero one day.\nI’m going to work harder to make me\land my POKéMON stronger.$"

Naranja_Route111_G00_M26_Text_081BAE24::
# 1221 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I heard there are fossils to be found\nin the desert. Where could they be?$"

Naranja_Route111_G00_M26_Text_081BAE6E::
# 1225 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I came up short...$"

Naranja_Route111_G00_M26_Text_081BAE81::
# 1229 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "If they can find fossils in the desert,\nit must have been a sea before.$"

Naranja_Route111_G00_M26_Text_081BAEC9::
# 1233 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\lI am to be challenged?$"

Naranja_Route111_G00_M26_Text_081BAF14::
# 1237 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "While I have searched for ruins, I’ve\nnot searched for strong POKéMON.$"

Naranja_Route111_G00_M26_Text_081BAF5B::
# 1241 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\pNo, wait, was that forty years?\nWhich was it now?$"

Naranja_Route111_G00_M26_Text_081BAFC1::
# 1245 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\pNo, wait, was that forty years?\nAnyway, am I to be challenged?$"

Naranja_Route111_G00_M26_Text_081BB034::
# 1249 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’ve found no ruins, nor have I found\nany strong POKéMON...$"

Naranja_Route111_G00_M26_Text_081BB070::
# 1253 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\pNo, wait, was that forty years I’ve\nsearched?\pHmm... It could even be fifty...\nHow long have I been at this?$"

Naranja_Route111_G00_M26_Text_081BB111::
# 1257 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m full of pep!\nAnd my POKéMON is peppy, too!$"

Naranja_Route111_G00_M26_Text_081BB140::
# 1261 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "My POKéMON lost its pep...$"

Naranja_Route111_G00_M26_Text_081BB15B::
# 1265 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "When I see a TRAINER with a lot of pep,\nI can’t help looking.$"

Naranja_Route111_G00_M26_Text_081BB199::
# 1269 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I don’t know where you’re going, but\nwould you like to battle?$"

Naranja_Route111_G00_M26_Text_081BB1D8::
# 1273 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, you’re disgustingly good!$"

Naranja_Route111_G00_M26_Text_081BB1F6::
# 1277 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m thinking that I should go to\nMT. CHIMNEY, but the view around\lhere is very nice, too.$"

Naranja_Route111_G00_M26_Text_081BB250::
# 1281 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "To train myself, I challenge all\nwhom I meet!$"

Naranja_Route111_G00_M26_Text_081BB27E::
# 1285 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Uncle! I give up!$"

Naranja_Route111_G00_M26_Text_081BB290::
# 1289 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "All I can do is keep training until\nI can defeat strong TRAINERS such\las yourself.$"

Naranja_Route111_G00_M26_Text_081BB2E3::
# 1293 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Show me how much you’ve toughened\nyour POKéMON.$"

Naranja_Route111_G00_M26_Text_081BB313::
# 1297 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I see, you’ve toughened them\nconsiderably.$"

Naranja_Route111_G00_M26_Text_081BB33E::
# 1301 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "POKéMON and TRAINERS learn much\nthrough battling.\pWhat’s important is to never give up\neven if you lose.$"

Naranja_Route111_G00_M26_Text_081BB3A7::
# 1305 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "We’re training here to elevate our\ngame to the next level.\lStay and train with us!$"

Naranja_Route111_G00_M26_Text_081BB3FA::
# 1309 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Ooh, you’re decent!$"

Naranja_Route111_G00_M26_Text_081BB40E::
# 1313 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Since you’re that strong, you should\naim for the POKéMON LEAGUE.$"

Naranja_Route111_G00_M26_Text_081BB44F::
# 1317 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, your POKéMON look like serious\nactors.\lI have to ask you for an engagement.$"

Naranja_Route111_G00_M26_Text_081BB49F::
# 1321 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "They didn’t just look strong, they\nare strong!$"

Naranja_Route111_G00_M26_Text_081BB4CE::
# 1325 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I thought I was raising my POKéMON\ndiligently, but, oh no, there is still\lmuch to be done.$"

Naranja_Route111_G00_M26_Text_081BB529::
# 1329 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You can make POKéMON stronger or\nweaker depending on the moves you\lteach them.\pWhat kinds of moves do your POKéMON\nknow?$"

Naranja_Route111_G00_M26_Text_081BB5A2::
# 1333 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You’ve taught them good moves!$"

Naranja_Route111_G00_M26_Text_081BB5C1::
# 1337 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Maybe I should have stopped my\nPOKéMON from evolving until they\llearned better moves...$"

Naranja_Route111_G00_M26_Text_081C56F0::
# 1341 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I watered my plants lots and lots!\nA whole bunch of flowers bloomed!\pAnd then a whole bunch of BERRIES\nappeared!\pHere you go!\nYou can have this!$"

Naranja_Route111_G00_M26_Text_081C5781::
# 1345 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m going to try really hard and make\nsome RED オカキクケS!\pI hope you try hard, too!$"

Naranja_Route111_G00_M26_Text_081C57D2::
# 1349 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I wonder what color BERRIES I’ll look\nfor today?$"

Naranja_Route111_G00_M26_Text_086B4C10::
# 1353 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¡Buenos días audiencia!\pHoy nos situamos en una isla al norte\nde Trovita, con un gran equipo y con el \lcampeón de la liga Añil: {PLAYER}.\pVamos, lucha {PLAYER}.\n¡Ahora el protagonista eres tù!$"
