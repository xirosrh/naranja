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
	msgbox Naranja_Route111_G00_M26_Text_0816FA54, MSGBOX_YESNO
# 67 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 68 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_0815005F
# 69 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11E
# 70 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 71 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 72 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 73 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL
# 74 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL_2
# 75 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL
# 76 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay 0x1E
# 77 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_FOSSIL_2, Naranja_Route111_G00_M26_Movement_081500AF
# 78 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 79 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL_2
# 80 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_0815005F::
# 85 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FACE, MSGBOX_DEFAULT
# 86 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_FOSSIL_LocalId35::
# 91 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 92 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FAED, MSGBOX_YESNO
# 93 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 94 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081500A5
# 95 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11F
# 96 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 97 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 98 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 99 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL_2
# 100 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_FOSSIL
# 101 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL_2
# 102 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay 0x1E
# 103 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_FOSSIL, Naranja_Route111_G00_M26_Movement_081500AF
# 104 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 105 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_FOSSIL
# 106 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_081500A5::
# 111 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FB67, MSGBOX_DEFAULT
# 112 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId17::
# 117 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 118 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 119 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	dotimebasedevents
# 120 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_08CC
# 121 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150100
# 122 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081C56F0, MSGBOX_DEFAULT
# 123 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x94
# 124 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 125 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 126 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 127 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 128 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_08CC
# 129 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GetPlayerBigGuyGirlString
# 130 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081C5781, MSGBOX_DEFAULT
# 131 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150100::
# 136 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081C57D2, MSGBOX_DEFAULT
# 137 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Trigger_2::
# 142 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 143 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_0x8004, 1
# 144 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_0815013A
	return


Naranja_Route111_G00_M26_EventScript_Trigger_6::
# 148 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lockall
# 149 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_0x8004, 2
# 150 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_0815013A
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815013A::
# 154 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkitem ITEM_GO_GOGGLES, 1
# 155 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 156 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150151
# 157 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_TEMP_3, 1
# 158 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150151::
# 163 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081A0F93, MSGBOX_DEFAULT
# 164 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 165 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 166 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150188
# 167 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 168 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_08150193
# 169 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 170 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_0815019E
# 171 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 172 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081501A9
# 173 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	releaseall
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150188::
# 178 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501B4
# 179 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_08150193::
# 184 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501B6
# 185 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815019E::
# 190 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501B8
# 191 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081501A9::
# 196 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_081501BA
# 197 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Trigger_5::
# 202 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setweather 2
# 203 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 204 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	doweather
# 205 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_TEMP_3, 0
	end


Naranja_Route111_G00_M26_EventScript_Trigger_1::
# 210 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setweather 8
# 211 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	fadenewbgm MUS_DESERT
# 212 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	doweather
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 217 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 218 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 219 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_NARANJA_ROUTE111_EVENT_COMPLETE_0843
# 220 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F705, MSGBOX_YESNO
# 221 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 222 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081501F3
# 223 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F785, MSGBOX_DEFAULT
# 224 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081501F3::
# 229 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F7B3, MSGBOX_DEFAULT
# 230 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_292, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F7D2
# 231 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_MAN_1_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 232 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 233 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 234 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F7FF, MSGBOX_DEFAULT
# 235 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 236 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_MAN_1_1, Naranja_Route111_G00_M26_Movement_08150356
# 237 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 238 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_MAN_1_1
# 239 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 240 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_0815035B
# 241 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 242 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 243 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	addobject LOCALID_ROUTE111_G00_M26_WOMAN_2
# 244 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_WOMAN_2, Naranja_Route111_G00_M26_Movement_08150359
# 245 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 246 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 247 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F82D, MSGBOX_DEFAULT
# 248 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_299, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F8A6
# 249 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_WOMAN_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 250 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 251 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 252 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F8D5, MSGBOX_DEFAULT
# 253 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 254 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_WOMAN_2, Naranja_Route111_G00_M26_Movement_08150356
# 255 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_WOMAN_2
# 257 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 258 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_0815035B
# 259 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 260 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 261 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	addobject LOCALID_ROUTE111_G00_M26_LASS
# 262 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_LASS, Naranja_Route111_G00_M26_Movement_08150359
# 263 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 264 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 265 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F90E, MSGBOX_DEFAULT
# 266 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_606, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F956
# 267 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_LASS, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 268 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 269 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 270 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F96C, MSGBOX_DEFAULT
# 271 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 272 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_LASS, Naranja_Route111_G00_M26_Movement_08150356
# 273 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 274 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_LASS
# 275 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 276 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route111_G00_M26_Movement_0815035B
# 277 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 278 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 279 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	addobject LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1
# 280 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1, Naranja_Route111_G00_M26_Movement_08150359
# 281 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 282 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 283 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816F991, MSGBOX_DEFAULT
# 284 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_ROUTE111_312, LOCALID_NONE, Naranja_Route111_G00_M26_Text_0816F9EC
# 285 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FA22, MSGBOX_DEFAULT
# 286 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 287 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 288 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 289 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_08150348
# 290 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1, Naranja_Route111_G00_M26_Movement_08150356
# 291 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
# 292 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject LOCALID_ROUTE111_G00_M26_OLD_WOMAN_1
# 293 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_0815034F
# 294 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_08150348::
# 299 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	opendoor 0xD, 0x71
# 300 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitdooranim
	return


Naranja_Route111_G00_M26_EventScript_Sub_0815034F::
# 305 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closedoor 0xD, 0x71
# 306 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitdooranim
	return


Naranja_Route111_G00_M26_EventScript_Sign_2::
# 311 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FC9C, MSGBOX_SIGN
	end


Naranja_Route111_G00_M26_EventScript_Sign_1::
# 316 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FCB6, MSGBOX_SIGN
	end


Naranja_Route111_G00_M26_EventScript_Sign_3::
# 321 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FCEF, MSGBOX_SIGN
	end


Naranja_Route111_G00_M26_EventScript_Sign_4::
# 326 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FD05, MSGBOX_SIGN
	end


Naranja_Route111_G00_M26_EventScript_Sign_8::
# 331 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FD1B, MSGBOX_SIGN
	end


Naranja_Route111_G00_M26_EventScript_Sign_13::
# 336 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FD55, MSGBOX_SIGN
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId8::
# 341 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FB86, MSGBOX_NPC
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId36::
# 346 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_0816FC3A, MSGBOX_NPC
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId9::
# 351 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_211, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAB4B, Naranja_Route111_G00_M26_Text_081BABC7
# 352 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BAC10, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId5::
# 357 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_469, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAC60, Naranja_Route111_G00_M26_Text_081BACC5
# 358 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BACD8, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId11::
# 363 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_212, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAD4B, Naranja_Route111_G00_M26_Text_081BADA3
# 364 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BADC2, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId12::
# 369 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_470, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAE24, Naranja_Route111_G00_M26_Text_081BAE6E
# 370 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BAE81, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_HIKER_LocalId10::
# 375 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_044, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAEC9, Naranja_Route111_G00_M26_Text_081BAF14
# 376 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 377 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 378 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_0815042A
# 379 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BAF5B, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_Sub_0815042A::
# 384 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE111_044, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BAFC1, Naranja_Route111_G00_M26_Text_081BB034
# 385 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB070, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId29::
# 390 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_218, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB111, Naranja_Route111_G00_M26_Text_081BB140
# 391 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB15B, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId28::
# 396 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_476, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB199, Naranja_Route111_G00_M26_Text_081BB1D8
# 397 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB1F6, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId30::
# 402 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_189, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB250, Naranja_Route111_G00_M26_Text_081BB27E
# 403 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB290, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId32::
# 408 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_078, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB2E3, Naranja_Route111_G00_M26_Text_081BB313
# 409 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 410 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 411 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081504AD
# 412 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB33E, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_Sub_081504AD::
# 417 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE111_078, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB3A7, Naranja_Route111_G00_M26_Text_081BB3FA
# 418 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB40E, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId31::
# 423 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE111_094, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB44F, Naranja_Route111_G00_M26_Text_081BB49F
# 424 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 425 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 426 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081504EB
# 427 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB4CE, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_Sub_081504EB::
# 432 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE111_094, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081BB529, Naranja_Route111_G00_M26_Text_081BB5A2
# 433 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081BB5C1, MSGBOX_AUTOCLOSE
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId33::
# 438 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 439 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 440 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081A3520, MSGBOX_YESNO
# 441 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 442 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A3877
# 443 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081A37B5, MSGBOX_DEFAULT
# 444 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081A3877::
# 449 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14B
# 450 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 451 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 0
# 452 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 453 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38D9
# 454 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081A35C5, MSGBOX_DEFAULT
# 455 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	closemessage
# 456 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 457 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G00_M01_MART_EMPLOYEE
# 458 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 459 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38C3
# 460 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 461 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38C3
# 462 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 463 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081A38CE
# 464 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	removeobject 32783
# 465 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081A38C3::
# 470 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32783, Naranja_Route111_G00_M26_Movement_081A38E3
# 471 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081A38CE::
# 476 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32783, Naranja_Route111_G00_M26_Movement_081A38EF
# 477 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081A38D9::
# 482 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081A37F6, MSGBOX_DEFAULT
# 483 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE313::
# 488 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	cleartrainerflag 0x38
# 489 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, GabbyAndTyGetBattleNum
# 490 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 491 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 492 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE384
# 493 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 494 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE38A
# 495 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 496 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE395
# 497 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 498 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3A0
# 499 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 500 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3AB
# 501 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 502 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3B6
# 503 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 504 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3C1
# 505 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 506 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3CC
# 507 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 508 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE3D7
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE384::
# 513 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3E6
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE38A::
# 518 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3EE
# 519 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3E2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE395::
# 524 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3F6
# 525 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3EA
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3A0::
# 530 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3FE
# 531 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3F2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3AB::
# 536 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE406
# 537 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE3FA
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3B6::
# 542 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE40E
# 543 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE402
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3C1::
# 548 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE416
# 549 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE40A
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3CC::
# 554 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE41E
# 555 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE412
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3D7::
# 560 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE40E
# 561 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_Sub_081AE41A
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3E2::
# 566 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3E6::
# 571 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3EA::
# 576 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3EE::
# 581 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3F2::
# 586 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_CAMERAMAN
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3F6::
# 591 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE120_G00_M35_CAMERAMAN
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3FA::
# 596 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE3FE::
# 601 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE402::
# 606 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE406::
# 611 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE40A::
# 616 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE120_G00_M35_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE40E::
# 621 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE120_G00_M35_REPORTER_F
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE412::
# 626 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE416::
# 631 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE111_G00_M26_REPORTER_F_2
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE41A::
# 636 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE41E::
# 641 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	clearflag FLAG_HIDE_ROUTE118_G00_M33_REPORTER_F_3
	return


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId14::
# 646 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_051, LOCALID_NONE, Naranja_Route111_G00_M26_Text_086B4C10, Naranja_Route111_G00_M26_Text_081ABFD3, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE5A2
# 647 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 648 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId21::
# 653 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_054, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 654 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 655 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId22::
# 660 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_054, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 661 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC015, MSGBOX_DEFAULT
# 662 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId23::
# 667 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_056, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081ABF50, Naranja_Route111_G00_M26_Text_081AC6F8, Naranja_Route111_G00_M26_Text_081AC5CA, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 668 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 669 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId24::
# 674 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, TRAINER_NARANJA_ROUTE111_056, LOCALID_NONE, Naranja_Route111_G00_M26_Text_081AC790, Naranja_Route111_G00_M26_Text_081AC8D7, Naranja_Route111_G00_M26_Text_081AC820, Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F
# 675 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC015, MSGBOX_DEFAULT
# 676 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE5A2::
# 681 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GabbyAndTyBeforeInterview
# 682 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GetGabbyAndTyLocalIds
# 683 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 684 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5E0
# 685 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 686 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5EB
# 687 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 688 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5FD
# 689 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_TEMP_1
# 690 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE73A
# 691 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC7E4, MSGBOX_YESNO
# 692 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE5E0::
# 696 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32772, Naranja_Route111_G00_M26_Movement_081AE699
# 697 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE5EB::
# 702 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32772, Naranja_Route111_G00_M26_Movement_081AE69B
# 703 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32773, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 704 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE5FD::
# 709 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32772, Naranja_Route111_G00_M26_Movement_081AE69D
# 710 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 711 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route111_G00_M26_EventScript_AfterBattle_081AE60F::
# 716 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GabbyAndTyBeforeInterview
# 717 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GetGabbyAndTyLocalIds
# 718 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 719 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5E0
# 720 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 721 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5EB
# 722 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 723 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE5FD
# 724 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	checkflag FLAG_TEMP_1
# 725 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE73A
# 726 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, GabbyAndTyGetLastQuote
# 727 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 728 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE69F
# 729 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC10A, MSGBOX_DEFAULT
# 730 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	specialvar VAR_RESULT, GabbyAndTyGetLastBattleTrivia
# 731 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 732 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 733 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6AD
# 734 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 735 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6BB
# 736 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 737 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6C9
# 738 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 739 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6D7
# 740 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 741 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE6E5
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE69F::
# 746 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC60B, MSGBOX_YESNO
# 747 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6AD::
# 751 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC3CF, MSGBOX_YESNO
# 752 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6BB::
# 756 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC18D, MSGBOX_YESNO
# 757 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6C9::
# 761 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC219, MSGBOX_YESNO
# 762 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6D7::
# 766 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC2D6, MSGBOX_YESNO
# 767 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6E5::
# 771 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC355, MSGBOX_YESNO
# 772 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3
	return


Naranja_Route111_G00_M26_EventScript_Sub_081AE6F3::
# 776 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 777 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE72D
# 778 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC40F, MSGBOX_DEFAULT
# 779 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setvar VAR_0x8004, 0xA
# 780 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 781 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	lock
# 782 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	faceplayer
# 783 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 784 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	goto_if EQUAL, Naranja_Route111_G00_M26_EventScript_Sub_081AE72D
# 785 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC487, MSGBOX_DEFAULT
# 786 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	special GabbyAndTyAfterInterview
# 787 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_TEMP_1
# 788 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE72D::
# 793 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC553, MSGBOX_DEFAULT
# 794 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setflag FLAG_TEMP_1
# 795 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_Sub_081AE73A::
# 800 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	msgbox Naranja_Route111_G00_M26_Text_081AC59E, MSGBOX_DEFAULT
# 801 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	release
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId18::
# 806 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x145
# 807 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 808 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 1
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId25::
# 813 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6C
# 814 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 815 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 1
	end


Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId26::
# 820 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8000, 0x3F
# 821 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 822 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	callstd 1
	end


# 826 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081500AF:
# 827 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 828 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 829 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 830 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 831 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 832 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 833 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 834 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_4
# 835 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 836 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 837 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 838 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 839 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 840 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 841 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 842 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_8
# 843 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
# 844 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 845 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_invisible
# 846 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 847 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	set_visible
	step_end

# 850 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501B4:
# 851 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_up
	step_end

# 854 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501B6:
# 855 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 858 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501B8:
# 859 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
	step_end

# 862 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081501BA:
# 863 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_right
	step_end

# 866 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_08150356:
# 867 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_faster_up
# 868 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_up
	step_end

# 871 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_08150359:
# 872 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 875 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_0815035B:
# 876 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 877 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
# 878 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	delay_16
	step_end

# 881 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081A38E3:
# 882 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 883 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 884 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 885 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 886 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 887 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 888 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 889 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 890 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 891 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 892 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 895 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081A38EF:
# 896 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 897 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 898 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 899 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 900 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 901 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 902 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 903 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 904 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_left
# 905 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
# 906 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_down
	step_end

# 909 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081AE699:
# 910 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_down
	step_end

# 913 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081AE69B:
# 914 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_up
	step_end

# 917 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
Naranja_Route111_G00_M26_Movement_081AE69D:
# 918 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	walk_in_place_left
	step_end

Naranja_Route111_G00_M26_Text_0816F705::
# 921 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Hello! I take it you’re a traveler.\pHow’s this? What do you say to taking\non our family of four in a series of\lPOKéMON battles?$"

Naranja_Route111_G00_M26_Text_0816F785::
# 925 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Is that so?\nDrop in, if you change your mind!$"

Naranja_Route111_G00_M26_Text_0816F7B3::
# 929 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "That’s the spirit! I like you!$"

Naranja_Route111_G00_M26_Text_0816F7D2::
# 933 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Aiyah!\nYou’re a lot tougher than I expected!$"

Naranja_Route111_G00_M26_Text_0816F7FF::
# 937 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Hey, all!\nI’ve found a pretty strong TRAINER!$"

Naranja_Route111_G00_M26_Text_0816F82D::
# 941 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, my goodness! Aren’t you young?\pYou must be quite the TRAINER to beat\nmy husband, though.\pIt’s my turn to battle now!$"

Naranja_Route111_G00_M26_Text_0816F8A6::
# 945 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, gosh!\nI can’t get over how strong you are!$"

Naranja_Route111_G00_M26_Text_0816F8D5::
# 949 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "There’s a strong TRAINER here!\nThis one’s really strong!$"

Naranja_Route111_G00_M26_Text_0816F90E::
# 953 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You’re stronger than Mommy? Wow!\pBut I’m strong, too!\nReally! Honestly!$"

Naranja_Route111_G00_M26_Text_0816F956::
# 957 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Huh? Did I just lose?$"

Naranja_Route111_G00_M26_Text_0816F96C::
# 961 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "This stinks...\p...Snivel... Grandma!$"

Naranja_Route111_G00_M26_Text_0816F991::
# 965 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "How dare you make my granddaughter\ncry!\pFor that, I’m going to smack you!\nPrepare to lose!$"

Naranja_Route111_G00_M26_Text_0816F9EC::
# 969 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Kwah! You are strong...\nMy granddaughter was right...$"

Naranja_Route111_G00_M26_Text_0816FA22::
# 973 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "If you’re not in any hurry, visit with\nus awhile.$"

Naranja_Route111_G00_M26_Text_0816FA54::
# 977 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You found the ROOT FOSSIL.\pIf this FOSSIL is taken, the other\none will sink into the sand...\pTake the ROOT FOSSIL anyway?$"

Naranja_Route111_G00_M26_Text_0816FACE::
# 981 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"

Naranja_Route111_G00_M26_Text_0816FAED::
# 985 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You found the CLAW FOSSIL.\pIf this FOSSIL is taken, the other\none will sink into the sand...\pTake the CLAW FOSSIL anyway?$"

Naranja_Route111_G00_M26_Text_0816FB67::
# 989 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"

Naranja_Route111_G00_M26_Text_0816FB86::
# 993 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "If you don’t raise your POKéMON some\nmore, it could be tough to keep winning\lup through the ranks.\pI’ve heard the POKéMON LEAGUE’s\nELITE FOUR are far stronger than\lany GYM LEADER.$"

Naranja_Route111_G00_M26_Text_0816FC3A::
# 997 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I challenged the WINSTRATE family,\nbut four matches in a row is tough\lgoing... They destroyed me.$"

Naranja_Route111_G00_M26_Text_0816FC9C::
# 1001 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "ROUTE 111\nレ MAUVILLE CITY$"

Naranja_Route111_G00_M26_Text_0816FCB6::
# 1005 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "“Our family’s hearts beat as one!”\nTHE WINSTRATE’S HOUSE$"

Naranja_Route111_G00_M26_Text_0816FCEF::
# 1009 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "ROUTE 111\nロ ROUTE 112$"

Naranja_Route111_G00_M26_Text_0816FD05::
# 1013 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "ROUTE 111\nロ ROUTE 113$"

Naranja_Route111_G00_M26_Text_0816FD1B::
# 1017 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "OLD LADY’S REST STOP\n“Come in and rest your tired bones.”$"

Naranja_Route111_G00_M26_Text_0816FD55::
# 1021 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "TRAINER TIPS\pOne of the indicators of a POKéMON’s\npowerfulness is SP. ATK. It stands for\l“SPECIAL ATTACK.”\pLikewise, SP. DEF stands for “SPECIAL\nDEFENSE.”$"

Naranja_Route111_G00_M26_Text_081A0F93::
# 1025 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The sandstorm is vicious.\nIt’s impossible to keep going.$"

Naranja_Route111_G00_M26_Text_081A3520::
# 1029 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "What’s that?\nWhat am I doing?\pI’m thinking about making my own room\nhere using a POKéMON move.\pI know! I’ll give you this TM.\nWill you use it to make your own room?$"

Naranja_Route111_G00_M26_Text_081A35C5::
# 1033 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Find a big tree that looks like it might\ndrop some vines.\pUse SECRET POWER in front of the tree.\nSome vines should get free and drop\ldown, so you can climb the tree.\pYou’ll find a lot of space for putting\nyour favorite things.\pIt’ll be your own secret room...\nA SECRET BASE!\pYou should make one, too.\pAnother thing, you don’t always have\nto make your SECRET BASE in a tree.\pTry using SECRET POWER on rock walls\nthat have small indents in them.\pI’m going to look for other places, too.\nOkay, bye!$"

Naranja_Route111_G00_M26_Text_081A37B5::
# 1037 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, you don’t want this?\nIf you change your mind, tell me, okay?$"

Naranja_Route111_G00_M26_Text_081A37F6::
# 1041 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, you don’t have any room for this.\pI’ll hold on to it, so come back for it\nanother time, okay?$"

Naranja_Route111_G00_M26_Text_081ABF50::
# 1045 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Oh! You’re {PLAYER}! Hi!\nDo you remember us from last time?\pCan you show us how much stronger\nyou’ve become? Okay, cue interview!$"

Naranja_Route111_G00_M26_Text_081ABFD3::
# 1049 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Hemos presenciado una lucha magnífica\nque nunca podremos olvidar.$"

Naranja_Route111_G00_M26_Text_081AC015::
# 1053 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Awesome! Awesome!\nWho are you?!\pI knew we were onto something wild\nwhen we spotted you!\pOh, please let me explain. We travel\naround everywhere interviewing all\lsorts of TRAINERS.\pSo, would you give us a bit of your time\nfor an interview?$"

Naranja_Route111_G00_M26_Text_081AC10A::
# 1057 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: “{STR_VAR_1}!”\pDo you remember? That’s the quote you\ngave us as the battle clincher last time.\pI never, ever forget stuff like that!$"

Naranja_Route111_G00_M26_Text_081AC18D::
# 1061 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, you stomped\nus before we could brace ourselves...\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC219::
# 1065 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, didn’t you\nthrow a POKé BALL at us?\pWe were shocked! So we told everyone,\njust everyone, about it!\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC2D6::
# 1069 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, your item\nskills cleverly did us in.\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC355::
# 1073 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The last time we battled, we managed\nto look respectable.\pAnyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC3CF::
# 1077 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Anyway, what do you think?\nDo you want to be interviewed again?$"

Naranja_Route111_G00_M26_Text_081AC40F::
# 1081 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¿Lo harás?\p¿Serás capaz de resumir esta compleja\namalgama de sentimientos que ha sido\lesta pelea… en una sola palabra?$"

Naranja_Route111_G00_M26_Text_081AC487::
# 1085 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Ehhh…\nBonita palabra…\l…creo.\pA pesar de ella seguiremos\nmuy de cerca tu carrera.\pPero todavìa hay mucho que ver\nen esta isla.\pY seguiremos el reportaje\ntras una breve pausa…\pEsperadnos hasta entonces.$"

Naranja_Route111_G00_M26_Text_081AC553::
# 1089 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¿No dices nada?\pEs igual, no creas que voy a llorar.\nEl reportaje sigue.$"

Naranja_Route111_G00_M26_Text_081AC59E::
# 1093 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: We’ll be keeping an eye out\nfor you!$"

Naranja_Route111_G00_M26_Text_081AC5CA::
# 1097 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Is there a strong TRAINER\nanywhere with a lot of POKéMON?$"

Naranja_Route111_G00_M26_Text_081AC60B::
# 1101 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: Wow, you are something!\pYou’ve gotten a lot stronger - a lot -\nsince we last battled.\pWe were right about you when we\nspotted you as a hot TRAINER.\pSo, anyway, what do you think?\nAre you willing to give us an interview\lthis time?$"

Naranja_Route111_G00_M26_Text_081AC6F8::
# 1105 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "GABBY: That was an intense battle!\nDid you get all that on camera?$"

Naranja_Route111_G00_M26_Text_081AC790::
# 1109 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "TY: Hey, lookie here!\nI remember you!\pI’ll get this battle all on this\nhere camera!$"

Naranja_Route111_G00_M26_Text_081AC7E4::
# 1113 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¡Gran batalla!\pAhora… \n¿Podrías dedicarnos unas palabritas?$"

Naranja_Route111_G00_M26_Text_081AC820::
# 1117 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "TY: Do you only have the one POKéMON\nand that’s it?\pIf you had more POKéMON, it’d make for\nbetter footage, but...$"

Naranja_Route111_G00_M26_Text_081AC8D7::
# 1121 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string " \nÇÀ\nep, I got it all.\nThat whole battle’s on camera.$"

Naranja_Route111_G00_M26_Text_081BAB4B::
# 1125 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, hey! Those GO-GOGGLES suit you.\nBut I think they look better on me.\pLet’s decide who they look better on\nwith a battle!$"

Naranja_Route111_G00_M26_Text_081BABC7::
# 1129 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I couldn’t see what was happening at my\nsides because of the GO-GOGGLES.$"

Naranja_Route111_G00_M26_Text_081BAC10::
# 1133 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "The GO-GOGGLES make it possible to\nget through sandstorms.\lThat makes me happy!$"

Naranja_Route111_G00_M26_Text_081BAC60::
# 1137 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m having a picnic in the desert.\pYou can always find a TRAINER, so\nI can enjoy a battle here, too!$"

Naranja_Route111_G00_M26_Text_081BACC5::
# 1141 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Ohhh! You’re mean!$"

Naranja_Route111_G00_M26_Text_081BACD8::
# 1145 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "When you’re battling in a sandstorm,\nwatch out for your POKéMON’s HP.\pIt can faint if you don’t keep an eye\non it!$"

Naranja_Route111_G00_M26_Text_081BAD4B::
# 1149 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Wearing these GO-GOGGLES makes me\nfeel like a superhero.\lRight now, nobody can beat me!$"

Naranja_Route111_G00_M26_Text_081BADA3::
# 1153 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I can’t win on spirit alone...$"

Naranja_Route111_G00_M26_Text_081BADC2::
# 1157 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m going to be a real hero one day.\nI’m going to work harder to make me\land my POKéMON stronger.$"

Naranja_Route111_G00_M26_Text_081BAE24::
# 1161 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I heard there are fossils to be found\nin the desert. Where could they be?$"

Naranja_Route111_G00_M26_Text_081BAE6E::
# 1165 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I came up short...$"

Naranja_Route111_G00_M26_Text_081BAE81::
# 1169 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "If they can find fossils in the desert,\nit must have been a sea before.$"

Naranja_Route111_G00_M26_Text_081BAEC9::
# 1173 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\lI am to be challenged?$"

Naranja_Route111_G00_M26_Text_081BAF14::
# 1177 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "While I have searched for ruins, I’ve\nnot searched for strong POKéMON.$"

Naranja_Route111_G00_M26_Text_081BAF5B::
# 1181 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\pNo, wait, was that forty years?\nWhich was it now?$"

Naranja_Route111_G00_M26_Text_081BAFC1::
# 1185 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\pNo, wait, was that forty years?\nAnyway, am I to be challenged?$"

Naranja_Route111_G00_M26_Text_081BB034::
# 1189 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’ve found no ruins, nor have I found\nany strong POKéMON...$"

Naranja_Route111_G00_M26_Text_081BB070::
# 1193 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "For thirty years I have searched for\nancient ruins!\pNo, wait, was that forty years I’ve\nsearched?\pHmm... It could even be fifty...\nHow long have I been at this?$"

Naranja_Route111_G00_M26_Text_081BB111::
# 1197 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m full of pep!\nAnd my POKéMON is peppy, too!$"

Naranja_Route111_G00_M26_Text_081BB140::
# 1201 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "My POKéMON lost its pep...$"

Naranja_Route111_G00_M26_Text_081BB15B::
# 1205 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "When I see a TRAINER with a lot of pep,\nI can’t help looking.$"

Naranja_Route111_G00_M26_Text_081BB199::
# 1209 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I don’t know where you’re going, but\nwould you like to battle?$"

Naranja_Route111_G00_M26_Text_081BB1D8::
# 1213 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, you’re disgustingly good!$"

Naranja_Route111_G00_M26_Text_081BB1F6::
# 1217 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m thinking that I should go to\nMT. CHIMNEY, but the view around\lhere is very nice, too.$"

Naranja_Route111_G00_M26_Text_081BB250::
# 1221 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "To train myself, I challenge all\nwhom I meet!$"

Naranja_Route111_G00_M26_Text_081BB27E::
# 1225 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Uncle! I give up!$"

Naranja_Route111_G00_M26_Text_081BB290::
# 1229 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "All I can do is keep training until\nI can defeat strong TRAINERS such\las yourself.$"

Naranja_Route111_G00_M26_Text_081BB2E3::
# 1233 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Show me how much you’ve toughened\nyour POKéMON.$"

Naranja_Route111_G00_M26_Text_081BB313::
# 1237 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I see, you’ve toughened them\nconsiderably.$"

Naranja_Route111_G00_M26_Text_081BB33E::
# 1241 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "POKéMON and TRAINERS learn much\nthrough battling.\pWhat’s important is to never give up\neven if you lose.$"

Naranja_Route111_G00_M26_Text_081BB3A7::
# 1245 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "We’re training here to elevate our\ngame to the next level.\lStay and train with us!$"

Naranja_Route111_G00_M26_Text_081BB3FA::
# 1249 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Ooh, you’re decent!$"

Naranja_Route111_G00_M26_Text_081BB40E::
# 1253 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Since you’re that strong, you should\naim for the POKéMON LEAGUE.$"

Naranja_Route111_G00_M26_Text_081BB44F::
# 1257 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Oh, your POKéMON look like serious\nactors.\lI have to ask you for an engagement.$"

Naranja_Route111_G00_M26_Text_081BB49F::
# 1261 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "They didn’t just look strong, they\nare strong!$"

Naranja_Route111_G00_M26_Text_081BB4CE::
# 1265 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I thought I was raising my POKéMON\ndiligently, but, oh no, there is still\lmuch to be done.$"

Naranja_Route111_G00_M26_Text_081BB529::
# 1269 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You can make POKéMON stronger or\nweaker depending on the moves you\lteach them.\pWhat kinds of moves do your POKéMON\nknow?$"

Naranja_Route111_G00_M26_Text_081BB5A2::
# 1273 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "You’ve taught them good moves!$"

Naranja_Route111_G00_M26_Text_081BB5C1::
# 1277 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "Maybe I should have stopped my\nPOKéMON from evolving until they\llearned better moves...$"

Naranja_Route111_G00_M26_Text_081C56F0::
# 1281 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I watered my plants lots and lots!\nA whole bunch of flowers bloomed!\pAnd then a whole bunch of BERRIES\nappeared!\pHere you go!\nYou can have this!$"

Naranja_Route111_G00_M26_Text_081C5781::
# 1285 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I’m going to try really hard and make\nsome RED オカキクケS!\pI hope you try hard, too!$"

Naranja_Route111_G00_M26_Text_081C57D2::
# 1289 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "I wonder what color BERRIES I’ll look\nfor today?$"

Naranja_Route111_G00_M26_Text_086B4C10::
# 1293 "data/maps/Naranja_Route111_G00_M26/scripts.pory"
	.string "¡Buenos días audiencia!\pHoy nos situamos en una isla al norte\nde Trovita, con un gran equipo y con el \lcampeón de la liga Añil: {PLAYER}.\pVamos, lucha {PLAYER}.\n¡Ahora el protagonista eres tù!$"
