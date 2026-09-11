Naranja_Mandarin_G00_M31_MapScripts::
# 5 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Mandarin_G00_M31_OnTransition
	.byte 0


Naranja_Mandarin_G00_M31_EventScript_Sign_4::
	return


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId9::
# 13 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MANDARIN_434, LOCALID_NONE, Naranja_Mandarin_G00_M31_Text_081BBB27, Naranja_Mandarin_G00_M31_Text_081BBB7A
# 14 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 15 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 16 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150690
# 17 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081BBB9A
# 18 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 6
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150690::
# 23 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_MANDARIN_434, LOCALID_NONE, Naranja_Mandarin_G00_M31_Text_081BBBCE, Naranja_Mandarin_G00_M31_Text_081BBC0D
# 24 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081BBC1C
# 25 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 6
	end


Naranja_Mandarin_G00_M31_OnTransition::
# 30 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 31 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150A41
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150A41::
# 36 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setobjectxyperm LOCALID_MANDARIN_G00_M31_SWIMMER_M, 0x29, 0xA
	return


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId21::
# 41 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	lock
# 42 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	faceplayer
# 43 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_008F
# 44 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150A67
# 45 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 46 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150A71
# 47 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081703CF
# 48 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150A67::
# 54 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170556
# 55 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150A71::
# 61 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081703F7
# 62 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId19::
# 68 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	lock
# 69 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	faceplayer
# 70 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_011F
# 71 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150B04
# 72 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081705AE
# 73 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto Naranja_Mandarin_G00_M31_EventScript_Sub_08150A94
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150A94::
# 78 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_011F
# 79 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8000, 9
# 80 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 81 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 0
# 82 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 83 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150B12
# 84 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081707B8
# 85 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 86 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	closemessage
# 87 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 88 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150AEE
# 89 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 90 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150AEE
# 91 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 92 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150AEE
# 93 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 94 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150AF9
# 95 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	removeobject 32783
# 96 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TROVITA_G11_M02_TEALA
# 97 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_0100
# 98 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150AEE::
# 103 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement 32783, Naranja_Mandarin_G00_M31_Movement_08150B1C
# 104 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150AF9::
# 109 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement 32783, Naranja_Mandarin_G00_M31_Movement_08150B25
# 110 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150B04::
# 115 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170865
# 116 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 117 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto Naranja_Mandarin_G00_M31_EventScript_Sub_08150A94
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150B12::
# 121 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_0817082A
# 122 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 123 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sign_1::
# 128 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170A46
# 129 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 3
	end


Naranja_Mandarin_G00_M31_EventScript_Sign_2::
# 134 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170A60
# 135 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 3
	end


Naranja_Mandarin_G00_M31_EventScript_Sign_3::
# 140 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170AB8
# 141 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 3
	end


Naranja_Mandarin_G00_M31_EventScript_Sign_6::
# 146 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170ACE
# 147 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 3
	end


Naranja_Mandarin_G00_M31_EventScript_Sign_7::
# 152 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170B7D
# 153 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 3
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId11::
# 158 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	lock
# 159 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	faceplayer
# 160 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_0817032A
# 161 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 162 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setvar VAR_NARANJA_MANDARIN_STORY_STATE, 2
# 163 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId22::
# 168 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	lock
# 169 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	faceplayer
# 170 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	checkitem ITEM_BLACK_GLASSES, 1
# 171 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 172 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150BCA
# 173 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 174 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 175 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150BBB
# 176 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081708EE
# 177 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 178 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150BBB::
# 183 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081709B7
# 184 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 185 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	closemessage
# 186 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto Naranja_Mandarin_G00_M31_EventScript_Sub_08150C03
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150BCA::
# 190 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081708EE
# 191 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 192 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170921
# 193 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 194 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 195 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 196 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150BF4
# 197 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08170A03
# 198 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 199 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150BF4::
# 204 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_0817094D
# 205 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 4
# 206 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	closemessage
# 207 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto Naranja_Mandarin_G00_M31_EventScript_Sub_08150C03
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150C03::
# 211 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	delay 0x14
# 212 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 213 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150C37
# 214 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 215 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150C37
# 216 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 217 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150C37
# 218 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 219 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150C42
# 220 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	removeobject 32783
# 221 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150C37::
# 226 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement 32783, Naranja_Mandarin_G00_M31_Movement_08150C4D
# 227 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Mandarin_G00_M31_EventScript_Sub_08150C42::
# 232 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement 32783, Naranja_Mandarin_G00_M31_Movement_08150C57
# 233 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId13::
# 238 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MANDARIN_631, LOCALID_NONE, Naranja_Mandarin_G00_M31_Text_081BCF79, Naranja_Mandarin_G00_M31_Text_081BCFBB
# 239 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081BCFE3
# 240 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 6
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId17::
# 245 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_MANDARIN_280, LOCALID_NONE, Naranja_Mandarin_G00_M31_Text_081BD377, Naranja_Mandarin_G00_M31_Text_081BD3AC
# 246 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 247 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 248 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	goto_if EQUAL, Naranja_Mandarin_G00_M31_EventScript_Sub_08150D23
# 249 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081BD3C3
# 250 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 6
	end


Naranja_Mandarin_G00_M31_EventScript_Sub_08150D23::
# 255 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_MANDARIN_280, LOCALID_NONE, Naranja_Mandarin_G00_M31_Text_081BD405, Naranja_Mandarin_G00_M31_Text_081BD44A
# 256 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_081BD466
# 257 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 6
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId20::
# 262 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8000, 0x4F
# 263 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 264 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 1
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 269 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8000, 0x22
# 270 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 271 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 1
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId8::
# 276 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8000, 0x56
# 277 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 278 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 1
	end


Naranja_Mandarin_G00_M31_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId15::
# 283 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8000, 0x3F
# 284 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 285 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 1
	end


Naranja_Mandarin_G00_M31_EventScript_Trigger_1::
# 290 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	checkflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 291 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 292 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement LOCALID_MANDARIN_G00_M31_LITTLE_GIRL_1, Naranja_Mandarin_G00_M31_Movement_086B65E0
# 293 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Mandarin_G00_M31_Movement_086B65E6
# 294 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	loadword 0, Naranja_Mandarin_G00_M31_Text_08166EC6
# 295 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	callstd 6
# 296 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Mandarin_G00_M31_Movement_086B65F0
# 297 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement LOCALID_MANDARIN_G00_M31_LITTLE_GIRL_1, Naranja_Mandarin_G00_M31_Movement_086B6600
# 298 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	delay 0xB0
# 299 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	applymovement LOCALID_MANDARIN_G00_M31_LITTLE_GIRL_1, Naranja_Mandarin_G00_M31_Movement_086B6610
# 300 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	delay 0x70
# 301 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	release
	end


# 305 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_08150B1C:
# 306 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 307 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 308 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 309 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 310 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 311 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 312 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 313 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
	step_end

# 316 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_08150B25:
# 317 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_down
# 318 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 319 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 320 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 321 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 322 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 323 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 324 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 325 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 326 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
	step_end

# 329 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_08150C4D:
# 330 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 331 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 332 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 333 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 334 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 335 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 336 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 337 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 338 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
	step_end

# 341 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_08150C57:
# 342 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_up
# 343 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 344 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 345 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 346 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 347 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 348 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 349 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 350 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 351 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
	step_end

# 354 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_086B65E0:
# 355 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	jump_in_place_down
# 356 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	emote_exclamation_mark
# 357 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_down
# 358 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_down
# 359 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
	step_end

# 362 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_086B65E6:
# 363 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	delay_16
# 364 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	delay_16
# 365 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	face_right
	step_end

# 368 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_086B65F0:
# 369 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	delay_8
# 370 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 371 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_up
# 372 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 373 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 374 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 375 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 376 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 377 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 378 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 379 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	face_up
	step_end

# 382 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_086B6600:
# 383 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	face_up
# 384 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	lock_facing_direction
# 385 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_down
# 386 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	unlock_facing_direction
# 387 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_up
# 388 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_up
# 389 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 390 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 391 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 392 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 393 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
# 394 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_right
	step_end

# 397 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
Naranja_Mandarin_G00_M31_Movement_086B6610:
# 398 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 399 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 400 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 401 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 402 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_left
# 403 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	walk_up
# 404 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	face_down
	step_end

Naranja_Mandarin_G00_M31_Text_08166EC6::
# 407 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "¡No te vayas todavìa!\pQuedaste conmigo en que ayudarìas\na mi hermanito encontrando el Onix.\pVen a nuestra y ofrécele tu ayuda.\p¡Eso le animará muchìsimo!\p¡Arreando!$"

Naranja_Mandarin_G00_M31_Text_0817032A::
# 411 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Ohhh, what am I to do?\pWe were on our walk, PEEKO and I, when\nwe were jumped by an odd thug...\pThe scoundrel made off with my\ndarling PEEKO!\pWrrrooooooaaaar! PEEKO!$"

Naranja_Mandarin_G00_M31_Text_081703CF::
# 415 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Nnn... Roar!\pI want to dig that tunnel!$"

Naranja_Mandarin_G00_M31_Text_081703F7::
# 419 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Nnn... Roar!\nWhat’s going on?\pI was digging the tunnel without any\ntools when some goon ordered me out!\pThat tunnel’s filled with POKéMON\nthat react badly to loud noises.\lThey could cause an uproar.\pThat’s why we stopped using heavy\nequipment for tunneling...\pI’m worried that the goon will do\nsomething stupid and startle the\lPOKéMON into an uproar.$"

Naranja_Mandarin_G00_M31_Text_08170556::
# 423 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Nnn... Roar!\pThat goofy goon hightailed it out of\nthe tunnel! I can go back to digging!$"

Naranja_Mandarin_G00_M31_Text_081705AE::
# 427 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Oh! It’s you!\pYou’re that person who not only helped\nme in PETALBURG WOODS, but also got\lback my stolen package and then even\lgraciously delivered it to SLATEPORT!\pCAPT. STERN informed us that the\npackage arrived, too!\pI thank you very, very much!\pWhy, if I were a rain cloud, I would\nshower you with gratitude and hail\lyou as a hero!\pFor you, the most wonderful TRAINER,\nI bear good news!\pRecently, our company developed a new\nkind of POKé BALL.\pAs a token of our appreciation, this\nis our gift to our wonderful TRAINER!$"

Naranja_Mandarin_G00_M31_Text_081707B8::
# 431 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Our new POKé BALL will be available\nat the POKéMON MART in RUSTBORO.\pPlease do try it out!\nThank you and bye-bye!$"

Naranja_Mandarin_G00_M31_Text_0817082A::
# 435 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Your BAG is jam-packed.\nI can’t give you this REPEAT BALL.$"

Naranja_Mandarin_G00_M31_Text_08170865::
# 439 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "As a token of our appreciation for\nyour delivering our package, I have a\lgift of a new kind of POKé BALL for our\lmost wonderful TRAINER!$"

Naranja_Mandarin_G00_M31_Text_081708EE::
# 443 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "I dropped my glasses...\nCan you help me find them?$"

Naranja_Mandarin_G00_M31_Text_08170921::
# 447 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Those glasses!\nMay I see them for a second?$"

Naranja_Mandarin_G00_M31_Text_0817094D::
# 451 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Hmm...\nThese are BLACKGLASSES.\lThey’re not what I’m looking for...\pMaybe my glasses aren’t around\nhere...$"

Naranja_Mandarin_G00_M31_Text_081709B7::
# 455 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Hmm...\nI can’t find my glasses anywhere...\lMaybe they’re not around here...$"

Naranja_Mandarin_G00_M31_Text_08170A03::
# 459 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Hmm...\nThese are BLACKGLASSES.\lThey’re not what I’m looking for...$"

Naranja_Mandarin_G00_M31_Text_08170A46::
# 463 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "ROUTE 116\nロ RUSTBORO CITY$"

Naranja_Mandarin_G00_M31_Text_08170A60::
# 467 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "RUSTURF TUNNEL\n“Linking RUSTBORO and VERDANTURF\p“The tunnel project has been\ncanceled.”$"

Naranja_Mandarin_G00_M31_Text_08170AB8::
# 471 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Cueva de {COLOR 0x0D}Isla SUNBURST$"

Naranja_Mandarin_G00_M31_Text_08170ACE::
# 475 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "RST$"

Naranja_Mandarin_G00_M31_Text_08170B7D::
# 479 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "TRAINER TIPS\pYour BAG has several POCKETS.\pItems you obtain are automatically\nplaced in the appropriate POCKETS.\pNo TRAINER can afford to be without\na BAG of their own.$"

Naranja_Mandarin_G00_M31_Text_081BBB27::
# 483 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "I use this parasol to ward off this\nfilthy, yucky volcanic ash from my\ldear NUMEL.$"

Naranja_Mandarin_G00_M31_Text_081BBB7A::
# 487 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Huff, huff...\nI am exhausted...$"

Naranja_Mandarin_G00_M31_Text_081BBB9A::
# 491 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "You’re very good at this.\nI must say I’m impressed!$"

Naranja_Mandarin_G00_M31_Text_081BBBCE::
# 495 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Oh, hello, hasn’t it been a while?\nMay I invite you to battle?$"

Naranja_Mandarin_G00_M31_Text_081BBC0D::
# 499 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Oh, how super!$"

Naranja_Mandarin_G00_M31_Text_081BBC1C::
# 503 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "You’ve remained very good at this.\nI must say I’m impressed!$"

Naranja_Mandarin_G00_M31_Text_081BCF79::
# 507 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "If the tunnel doesn’t go through, then\nI’ll just go over the top.$"

Naranja_Mandarin_G00_M31_Text_081BCFBB::
# 511 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Gasp... Gasp...\nLosing made me tired...$"

Naranja_Mandarin_G00_M31_Text_081BCFE3::
# 515 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "It’s no big deal if there’s no tunnel.\nTo a HIKER, mountains are roads!$"

Naranja_Mandarin_G00_M31_Text_081BD377::
# 519 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "I study at school, and I study on the\nway home, too!$"

Naranja_Mandarin_G00_M31_Text_081BD3AC::
# 523 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "I’m in shock - I lost?$"

Naranja_Mandarin_G00_M31_Text_081BD3C3::
# 527 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "Awww, I’ll never become an elegant\nTRAINER like ROXANNE this way!$"

Naranja_Mandarin_G00_M31_Text_081BD405::
# 531 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "I studied a whole lot since I saw you.\nYou must see my achievements!$"

Naranja_Mandarin_G00_M31_Text_081BD44A::
# 535 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "I’m in shock. I lost again?$"

Naranja_Mandarin_G00_M31_Text_081BD466::
# 539 "data/maps/Naranja_Mandarin_G00_M31/scripts.pory"
	.string "You’ve beaten ROXANNE?\nI can’t beat you, then. Not yet.$"
