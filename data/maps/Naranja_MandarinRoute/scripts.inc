Naranja_MandarinRoute_MapScripts::
# 5 "data/maps/Naranja_MandarinRoute/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MandarinRoute_OnTransition
	.byte 0


Naranja_MandarinRoute_EventScript_Sign_4::
	return


Naranja_MandarinRoute_EventScript_Woman7::
# 13 "data/maps/Naranja_MandarinRoute/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MANDARIN_ROUTE_ROUTE_434, Naranja_MandarinRoute_Text_081BBB27, Naranja_MandarinRoute_Text_081BBB7A
# 14 "data/maps/Naranja_MandarinRoute/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 15 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 16 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150690
# 17 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081BBB9A, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinRoute_EventScript_Sub_08150690::
# 22 "data/maps/Naranja_MandarinRoute/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_MANDARIN_ROUTE_ROUTE_434, Naranja_MandarinRoute_Text_081BBBCE, Naranja_MandarinRoute_Text_081BBC0D
# 23 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081BBC1C, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinRoute_OnTransition::
# 28 "data/maps/Naranja_MandarinRoute/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_TEAM_ROCKET_IN_CRYSTAL_CAVE
# 29 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150A41
	end


Naranja_MandarinRoute_EventScript_Sub_08150A41::
# 34 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_MANDARIN_ROUTE_ROUTE_SWIMMER_M, 0x29, 0xA
	return


Naranja_MandarinRoute_EventScript_SwimmerM::
# 39 "data/maps/Naranja_MandarinRoute/scripts.pory"
	lock
# 40 "data/maps/Naranja_MandarinRoute/scripts.pory"
	faceplayer
# 41 "data/maps/Naranja_MandarinRoute/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_TEAM_ROCKET_IN_CRYSTAL_CAVE
# 42 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150A67
# 43 "data/maps/Naranja_MandarinRoute/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_PINKAN_ISLAND_G00_M30_LATIAS
# 44 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150A71
# 45 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081703CF, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sub_08150A67::
# 51 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170556, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sub_08150A71::
# 57 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081703F7, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Man2::
# 63 "data/maps/Naranja_MandarinRoute/scripts.pory"
	lock
# 64 "data/maps/Naranja_MandarinRoute/scripts.pory"
	faceplayer
# 65 "data/maps/Naranja_MandarinRoute/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTE_EVENT_COMPLETE_011F
# 66 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150B04
# 67 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081705AE, MSGBOX_DEFAULT
# 68 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto Naranja_MandarinRoute_EventScript_Sub_08150A94
	return


Naranja_MandarinRoute_EventScript_Sub_08150A94::
# 72 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTE_EVENT_COMPLETE_011F
# 73 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8000, 9
# 74 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 75 "data/maps/Naranja_MandarinRoute/scripts.pory"
	callstd 0
# 76 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 77 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150B12
# 78 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081707B8, MSGBOX_DEFAULT
# 79 "data/maps/Naranja_MandarinRoute/scripts.pory"
	closemessage
# 80 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 81 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150AEE
# 82 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 83 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150AEE
# 84 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 85 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150AEE
# 86 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 87 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150AF9
# 88 "data/maps/Naranja_MandarinRoute/scripts.pory"
	removeobject 32783
# 89 "data/maps/Naranja_MandarinRoute/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TROVITA_ISLAND_G11_M02_TEALA
# 90 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTE_EVENT_COMPLETE_0100
# 91 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sub_08150AEE::
# 96 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement 32783, Naranja_MandarinRoute_Movement_08150B1C
# 97 "data/maps/Naranja_MandarinRoute/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MandarinRoute_EventScript_Sub_08150AF9::
# 102 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement 32783, Naranja_MandarinRoute_Movement_08150B25
# 103 "data/maps/Naranja_MandarinRoute/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MandarinRoute_EventScript_Sub_08150B04::
# 108 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170865, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto Naranja_MandarinRoute_EventScript_Sub_08150A94
	return


Naranja_MandarinRoute_EventScript_Sub_08150B12::
# 113 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_0817082A, MSGBOX_DEFAULT
# 114 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sign_1::
# 119 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170A46, MSGBOX_SIGN
	end


Naranja_MandarinRoute_EventScript_Sign_2::
# 124 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170A60, MSGBOX_SIGN
	end


Naranja_MandarinRoute_EventScript_Sign_3::
# 129 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170AB8, MSGBOX_SIGN
	end


Naranja_MandarinRoute_EventScript_Sign_6::
# 134 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170ACE, MSGBOX_SIGN
	end


Naranja_MandarinRoute_EventScript_Sign_7::
# 139 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170B7D, MSGBOX_SIGN
	end


Naranja_MandarinRoute_EventScript_OldMan1::
# 144 "data/maps/Naranja_MandarinRoute/scripts.pory"
	lock
# 145 "data/maps/Naranja_MandarinRoute/scripts.pory"
	faceplayer
# 146 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_0817032A, MSGBOX_DEFAULT
# 147 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_CLUE_SEARCH_STATE, 2
# 148 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Maniac::
# 153 "data/maps/Naranja_MandarinRoute/scripts.pory"
	lock
# 154 "data/maps/Naranja_MandarinRoute/scripts.pory"
	faceplayer
# 155 "data/maps/Naranja_MandarinRoute/scripts.pory"
	checkitem ITEM_BLACK_GLASSES, 1
# 156 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 157 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150BCA
# 158 "data/maps/Naranja_MandarinRoute/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 159 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 160 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150BBB
# 161 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081708EE, MSGBOX_DEFAULT
# 162 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sub_08150BBB::
# 167 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081709B7, MSGBOX_DEFAULT
# 168 "data/maps/Naranja_MandarinRoute/scripts.pory"
	closemessage
# 169 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto Naranja_MandarinRoute_EventScript_Sub_08150C03
	return


Naranja_MandarinRoute_EventScript_Sub_08150BCA::
# 173 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081708EE, MSGBOX_DEFAULT
# 174 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170921, MSGBOX_DEFAULT
# 175 "data/maps/Naranja_MandarinRoute/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 176 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 177 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150BF4
# 178 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08170A03, MSGBOX_DEFAULT
# 179 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sub_08150BF4::
# 184 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_0817094D, MSGBOX_DEFAULT
# 185 "data/maps/Naranja_MandarinRoute/scripts.pory"
	closemessage
# 186 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto Naranja_MandarinRoute_EventScript_Sub_08150C03
	return


Naranja_MandarinRoute_EventScript_Sub_08150C03::
# 190 "data/maps/Naranja_MandarinRoute/scripts.pory"
	delay 0x14
# 191 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 192 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150C37
# 193 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 194 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150C37
# 195 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 196 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150C37
# 197 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 198 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150C42
# 199 "data/maps/Naranja_MandarinRoute/scripts.pory"
	removeobject 32783
# 200 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


Naranja_MandarinRoute_EventScript_Sub_08150C37::
# 205 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement 32783, Naranja_MandarinRoute_Movement_08150C4D
# 206 "data/maps/Naranja_MandarinRoute/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MandarinRoute_EventScript_Sub_08150C42::
# 211 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement 32783, Naranja_MandarinRoute_Movement_08150C57
# 212 "data/maps/Naranja_MandarinRoute/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MandarinRoute_EventScript_ReporterF::
# 217 "data/maps/Naranja_MandarinRoute/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MANDARIN_ROUTE_ROUTE_631, Naranja_MandarinRoute_Text_081BCF79, Naranja_MandarinRoute_Text_081BCFBB
# 218 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081BCFE3, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinRoute_EventScript_SwimmerF::
# 223 "data/maps/Naranja_MandarinRoute/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MANDARIN_ROUTE_ROUTE_280, Naranja_MandarinRoute_Text_081BD377, Naranja_MandarinRoute_Text_081BD3AC
# 224 "data/maps/Naranja_MandarinRoute/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 225 "data/maps/Naranja_MandarinRoute/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 226 "data/maps/Naranja_MandarinRoute/scripts.pory"
	goto_if EQUAL, Naranja_MandarinRoute_EventScript_Sub_08150D23
# 227 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081BD3C3, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinRoute_EventScript_Sub_08150D23::
# 232 "data/maps/Naranja_MandarinRoute/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_MANDARIN_ROUTE_ROUTE_280, Naranja_MandarinRoute_Text_081BD405, Naranja_MandarinRoute_Text_081BD44A
# 233 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_081BD466, MSGBOX_AUTOCLOSE
	end


Naranja_MandarinRoute_EventScript_ItemBall_4::
# 238 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4F
# 239 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 240 "data/maps/Naranja_MandarinRoute/scripts.pory"
	callstd 1
	end


Naranja_MandarinRoute_EventScript_ItemBall::
# 245 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8000, 0x22
# 246 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 247 "data/maps/Naranja_MandarinRoute/scripts.pory"
	callstd 1
	end


Naranja_MandarinRoute_EventScript_ItemBall_2::
# 252 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8000, 0x56
# 253 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 254 "data/maps/Naranja_MandarinRoute/scripts.pory"
	callstd 1
	end


Naranja_MandarinRoute_EventScript_ItemBall_3::
# 259 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8000, 0x3F
# 260 "data/maps/Naranja_MandarinRoute/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 261 "data/maps/Naranja_MandarinRoute/scripts.pory"
	callstd 1
	end


Naranja_MandarinRoute_EventScript_Trigger_1::
# 266 "data/maps/Naranja_MandarinRoute/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ROUTE_G00_M31_LITTLE_GIRL_1
# 267 "data/maps/Naranja_MandarinRoute/scripts.pory"
	call_if EQUAL, Naranja_ColdPath_EventScript_Sub_086B7E7E
# 268 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ROUTE_LITTLE_GIRL_1, Naranja_MandarinRoute_Movement_086B65E0
# 269 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MandarinRoute_Movement_086B65E6
# 270 "data/maps/Naranja_MandarinRoute/scripts.pory"
	msgbox Naranja_MandarinRoute_Text_08166EC6, MSGBOX_AUTOCLOSE
# 271 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MandarinRoute_Movement_086B65F0
# 272 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ROUTE_LITTLE_GIRL_1, Naranja_MandarinRoute_Movement_086B6600
# 273 "data/maps/Naranja_MandarinRoute/scripts.pory"
	delay 0xB0
# 274 "data/maps/Naranja_MandarinRoute/scripts.pory"
	applymovement LOCALID_NARANJA_MANDARIN_ROUTE_ROUTE_LITTLE_GIRL_1, Naranja_MandarinRoute_Movement_086B6610
# 275 "data/maps/Naranja_MandarinRoute/scripts.pory"
	delay 0x70
# 276 "data/maps/Naranja_MandarinRoute/scripts.pory"
	release
	end


# 280 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_08150B1C:
# 281 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 282 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 283 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 284 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 285 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 286 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 287 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 288 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
	step_end

# 291 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_08150B25:
# 292 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_down
# 293 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 294 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 295 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 296 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 297 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 298 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 299 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 300 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 301 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
	step_end

# 304 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_08150C4D:
# 305 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 306 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 307 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 308 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 309 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 310 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 311 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 312 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 313 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
	step_end

# 316 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_08150C57:
# 317 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_up
# 318 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 319 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 320 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 321 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 322 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 323 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 324 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 325 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 326 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
	step_end

# 329 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_086B65E0:
# 330 "data/maps/Naranja_MandarinRoute/scripts.pory"
	jump_in_place_down
# 331 "data/maps/Naranja_MandarinRoute/scripts.pory"
	emote_exclamation_mark
# 332 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_down
# 333 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_down
# 334 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
	step_end

# 337 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_086B65E6:
# 338 "data/maps/Naranja_MandarinRoute/scripts.pory"
	delay_16
# 339 "data/maps/Naranja_MandarinRoute/scripts.pory"
	delay_16
# 340 "data/maps/Naranja_MandarinRoute/scripts.pory"
	face_right
	step_end

# 343 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_086B65F0:
# 344 "data/maps/Naranja_MandarinRoute/scripts.pory"
	delay_8
# 345 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 346 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_up
# 347 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 348 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 349 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 350 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 351 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 352 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 353 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 354 "data/maps/Naranja_MandarinRoute/scripts.pory"
	face_up
	step_end

# 357 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_086B6600:
# 358 "data/maps/Naranja_MandarinRoute/scripts.pory"
	face_up
# 359 "data/maps/Naranja_MandarinRoute/scripts.pory"
	lock_facing_direction
# 360 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_down
# 361 "data/maps/Naranja_MandarinRoute/scripts.pory"
	unlock_facing_direction
# 362 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_up
# 363 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_up
# 364 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 365 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 366 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 367 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 368 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
# 369 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_right
	step_end

# 372 "data/maps/Naranja_MandarinRoute/scripts.pory"
Naranja_MandarinRoute_Movement_086B6610:
# 373 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 374 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 375 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 376 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 377 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_left
# 378 "data/maps/Naranja_MandarinRoute/scripts.pory"
	walk_up
# 379 "data/maps/Naranja_MandarinRoute/scripts.pory"
	face_down
	step_end

Naranja_MandarinRoute_Text_08166EC6::
# 382 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "¡No te vayas todavìa!\pQuedaste conmigo en que ayudarìas\na mi hermanito encontrando el Onix.\pVen a nuestra y ofrécele tu ayuda.\p¡Eso le animará muchìsimo!\p¡Arreando!$"

Naranja_MandarinRoute_Text_0817032A::
# 386 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Ohhh, what am I to do?\pWe were on our walk, PEEKO and I, when\nwe were jumped by an odd thug...\pThe scoundrel made off with my\ndarling PEEKO!\pWrrrooooooaaaar! PEEKO!$"

Naranja_MandarinRoute_Text_081703CF::
# 390 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Nnn... Roar!\pI want to dig that tunnel!$"

Naranja_MandarinRoute_Text_081703F7::
# 394 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Nnn... Roar!\nWhat’s going on?\pI was digging the tunnel without any\ntools when some goon ordered me out!\pThat tunnel’s filled with POKéMON\nthat react badly to loud noises.\lThey could cause an uproar.\pThat’s why we stopped using heavy\nequipment for tunneling...\pI’m worried that the goon will do\nsomething stupid and startle the\lPOKéMON into an uproar.$"

Naranja_MandarinRoute_Text_08170556::
# 398 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Nnn... Roar!\pThat goofy goon hightailed it out of\nthe tunnel! I can go back to digging!$"

Naranja_MandarinRoute_Text_081705AE::
# 402 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Oh! It’s you!\pYou’re that person who not only helped\nme in PETALBURG WOODS, but also got\lback my stolen package and then even\lgraciously delivered it to SLATEPORT!\pCAPT. STERN informed us that the\npackage arrived, too!\pI thank you very, very much!\pWhy, if I were a rain cloud, I would\nshower you with gratitude and hail\lyou as a hero!\pFor you, the most wonderful TRAINER,\nI bear good news!\pRecently, our company developed a new\nkind of POKé BALL.\pAs a token of our appreciation, this\nis our gift to our wonderful TRAINER!$"

Naranja_MandarinRoute_Text_081707B8::
# 406 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Our new POKé BALL will be available\nat the POKéMON MART in RUSTBORO.\pPlease do try it out!\nThank you and bye-bye!$"

Naranja_MandarinRoute_Text_0817082A::
# 410 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Your BAG is jam-packed.\nI can’t give you this REPEAT BALL.$"

Naranja_MandarinRoute_Text_08170865::
# 414 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "As a token of our appreciation for\nyour delivering our package, I have a\lgift of a new kind of POKé BALL for our\lmost wonderful TRAINER!$"

Naranja_MandarinRoute_Text_081708EE::
# 418 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "I dropped my glasses...\nCan you help me find them?$"

Naranja_MandarinRoute_Text_08170921::
# 422 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Those glasses!\nMay I see them for a second?$"

Naranja_MandarinRoute_Text_0817094D::
# 426 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Hmm...\nThese are BLACKGLASSES.\lThey’re not what I’m looking for...\pMaybe my glasses aren’t around\nhere...$"

Naranja_MandarinRoute_Text_081709B7::
# 430 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Hmm...\nI can’t find my glasses anywhere...\lMaybe they’re not around here...$"

Naranja_MandarinRoute_Text_08170A03::
# 434 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Hmm...\nThese are BLACKGLASSES.\lThey’re not what I’m looking for...$"

Naranja_MandarinRoute_Text_08170A46::
# 438 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "ROUTE 116\nロ RUSTBORO CITY$"

Naranja_MandarinRoute_Text_08170A60::
# 442 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "RUSTURF TUNNEL\n“Linking RUSTBORO and VERDANTURF\p“The tunnel project has been\ncanceled.”$"

Naranja_MandarinRoute_Text_08170AB8::
# 446 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Cueva de {COLOR 0x0D}Isla SUNBURST$"

Naranja_MandarinRoute_Text_08170ACE::
# 450 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "RST$"

Naranja_MandarinRoute_Text_08170B7D::
# 454 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "TRAINER TIPS\pYour BAG has several POCKETS.\pItems you obtain are automatically\nplaced in the appropriate POCKETS.\pNo TRAINER can afford to be without\na BAG of their own.$"

Naranja_MandarinRoute_Text_081BBB27::
# 458 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "I use this parasol to ward off this\nfilthy, yucky volcanic ash from my\ldear NUMEL.$"

Naranja_MandarinRoute_Text_081BBB7A::
# 462 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Huff, huff...\nI am exhausted...$"

Naranja_MandarinRoute_Text_081BBB9A::
# 466 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "You’re very good at this.\nI must say I’m impressed!$"

Naranja_MandarinRoute_Text_081BBBCE::
# 470 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Oh, hello, hasn’t it been a while?\nMay I invite you to battle?$"

Naranja_MandarinRoute_Text_081BBC0D::
# 474 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Oh, how super!$"

Naranja_MandarinRoute_Text_081BBC1C::
# 478 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "You’ve remained very good at this.\nI must say I’m impressed!$"

Naranja_MandarinRoute_Text_081BCF79::
# 482 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "If the tunnel doesn’t go through, then\nI’ll just go over the top.$"

Naranja_MandarinRoute_Text_081BCFBB::
# 486 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Gasp... Gasp...\nLosing made me tired...$"

Naranja_MandarinRoute_Text_081BCFE3::
# 490 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "It’s no big deal if there’s no tunnel.\nTo a HIKER, mountains are roads!$"

Naranja_MandarinRoute_Text_081BD377::
# 494 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "I study at school, and I study on the\nway home, too!$"

Naranja_MandarinRoute_Text_081BD3AC::
# 498 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "I’m in shock - I lost?$"

Naranja_MandarinRoute_Text_081BD3C3::
# 502 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "Awww, I’ll never become an elegant\nTRAINER like ROXANNE this way!$"

Naranja_MandarinRoute_Text_081BD405::
# 506 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "I studied a whole lot since I saw you.\nYou must see my achievements!$"

Naranja_MandarinRoute_Text_081BD44A::
# 510 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "I’m in shock. I lost again?$"

Naranja_MandarinRoute_Text_081BD466::
# 514 "data/maps/Naranja_MandarinRoute/scripts.pory"
	.string "You’ve beaten ROXANNE?\nI can’t beat you, then. Not yet.$"
