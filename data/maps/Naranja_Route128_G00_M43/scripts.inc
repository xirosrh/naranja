Naranja_Route128_G00_M43_MapScripts::
# 5 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route128_G00_M43_OnTransition
# 6 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route128_G00_M43_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route128_G00_M43_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE128_STORY_STATE, 1, Naranja_Route128_G00_M43_OnFrame_1
	.2byte 0


Naranja_Route128_G00_M43_OnTransition::
# 12 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 13 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
# 14 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_Route128_G00_M43_OnFrame_1::
# 19 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	lockall
# 20 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay 0x14
# 21 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	special StartDroughtWeatherBlend
# 22 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitstate
# 23 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_246, Naranja_Route128_G00_M43_Movement_08152271
# 24 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_08171EE0
# 26 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_246, Naranja_Route128_G00_M43_Movement_08152279
# 28 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_08171F35
# 30 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 31 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	closemessage
# 32 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_247, Naranja_Route128_G00_M43_Movement_08152293
# 33 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_246, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 35 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_08171F4B
# 37 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	closemessage
# 39 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_247, Naranja_Route128_G00_M43_Movement_081522A1
# 40 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 42 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_08172008
# 44 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	closemessage
# 46 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_246, Naranja_Route128_G00_M43_Movement_0815227E
# 47 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 48 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_247, Naranja_Route128_G00_M43_Movement_08152290
# 49 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_0817210B
# 51 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	closemessage
# 53 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay 0x28
# 54 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_247, Naranja_Route128_G00_M43_Movement_08152296
# 55 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_246, Naranja_Route128_G00_M43_Movement_08152283
# 56 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 57 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	removeobject LOCALID_ROUTE128_G00_M43_247
# 58 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	removeobject LOCALID_ROUTE128_G00_M43_246
# 59 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay 0x64
# 60 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	setfieldeffectargument 0, 1
# 61 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	dofieldeffect 0x1E
# 62 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitfieldeffect 0x1E
# 63 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	addobject LOCALID_ROUTE128_G00_M43_STEVEN
# 64 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_STEVEN, Naranja_Route128_G00_M43_Movement_0815226F
# 65 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 66 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 67 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 68 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_08172181
# 69 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 70 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	closemessage
# 71 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_STEVEN, Naranja_Route128_G00_M43_Movement_0815226D
# 72 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 73 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 74 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081722A1
# 75 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 77 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 78 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081723BE
# 79 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	closemessage
# 81 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	applymovement LOCALID_ROUTE128_G00_M43_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 82 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 83 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay 0x32
# 84 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	setfieldeffectargument 0, 1
# 85 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	dofieldeffect 0x1E
# 86 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay 0xF
# 87 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	removeobject LOCALID_ROUTE128_G00_M43_STEVEN
# 88 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	waitfieldeffect 0x1E
# 89 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	setvar VAR_NARANJA_ROUTE128_STORY_STATE, 2
# 90 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	releaseall
	end


Naranja_Route128_G00_M43_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 95 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE128_386, LOCALID_NONE, Naranja_Route128_G00_M43_Text_081C1DB0, Naranja_Route128_G00_M43_Text_081C1E25
# 96 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 97 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 98 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	goto_if EQUAL, Naranja_Route128_G00_M43_EventScript_Sub_08152309
# 99 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081C1E4A
# 100 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 6
	end


Naranja_Route128_G00_M43_EventScript_Sub_08152309::
# 105 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE128_386, LOCALID_NONE, Naranja_Route128_G00_M43_Text_081C1E90, Naranja_Route128_G00_M43_Text_081C1EFA
# 106 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081C1F2E
# 107 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 6
	end


Naranja_Route128_G00_M43_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId8::
# 112 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE128_670, LOCALID_NONE, Naranja_Route128_G00_M43_Text_081C1F6D, Naranja_Route128_G00_M43_Text_081C1FCC
# 113 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081C1FE8
# 114 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 6
	end


Naranja_Route128_G00_M43_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId7::
# 119 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE128_671, LOCALID_NONE, Naranja_Route128_G00_M43_Text_081C202C, Naranja_Route128_G00_M43_Text_081C2051
# 120 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081C2060
# 121 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 6
	end


Naranja_Route128_G00_M43_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId6::
# 126 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE128_673, LOCALID_NONE, Naranja_Route128_G00_M43_Text_081C2090, Naranja_Route128_G00_M43_Text_081C20FC
# 127 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	loadword 0, Naranja_Route128_G00_M43_Text_081C210D
# 128 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	callstd 6
	end


# 132 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_0815226D:
# 133 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_0815226F:
# 137 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
	step_end

# 140 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_08152271:
# 141 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_down
# 142 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_in_place_faster_left
# 143 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay_16
# 144 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_in_place_faster_right
# 145 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay_16
# 146 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay_16
# 147 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_in_place_faster_down
	step_end

# 150 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_08152279:
# 151 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	lock_facing_direction
# 152 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_slow_up
# 153 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay_16
# 154 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	unlock_facing_direction
	step_end

# 157 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_0815227E:
# 158 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 159 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 160 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 161 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_in_place_faster_right
	step_end

# 164 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_08152283:
# 165 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay_16
# 166 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	delay_16
# 167 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 168 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 169 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 170 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 171 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 172 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 173 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 174 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 175 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 176 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
	step_end

# 179 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_08152290:
# 180 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_left
# 181 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_left
	step_end

# 184 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_08152293:
# 185 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_left
# 186 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_in_place_faster_down
	step_end

# 189 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_08152296:
# 190 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 191 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 192 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_left
# 193 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 194 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 195 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 196 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 197 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 198 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
# 199 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_fast_up
	step_end

# 202 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
Naranja_Route128_G00_M43_Movement_081522A1:
# 203 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_right
# 204 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_Route128_G00_M43_Text_08171EE0::
# 207 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "{ARCHIE}: What happened...\nWhat is this wretched scene...\pDid I...make a horrible mistake?$"

Naranja_Route128_G00_M43_Text_08171F35::
# 211 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "I...\nI only wanted...$"

Naranja_Route128_G00_M43_Text_08171F4B::
# 215 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "{MAXIE}: Do you understand now,\n{ARCHIE}?\pDo you finally see how disastrous\nyour dream turned out to be?\pWe have to hurry! We have to do\nsomething before the situation goes\lcompletely out of control!$"

Naranja_Route128_G00_M43_Text_08172008::
# 219 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "{MAXIE}: {PLAYER}{KUN}...\pWe, TEAM {MAGMA}, had been pursuing TEAM\n{AQUA} to prevent this from happening.\pYou’ve been very helpful, but I fear\nthe worst has happened...\pIt’s gone too far for a child like you\nto manage...\pLeave things to us, and get out of\nhere while you still can!$"

Naranja_Route128_G00_M43_Text_0817210B::
# 223 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "{MAXIE}: This defies belief...\pA super-ancient POKéMON...\pIts power is unbelievable.\nIt has upset the balance of nature...$"

Naranja_Route128_G00_M43_Text_08172181::
# 227 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\nWhat is happening?$"

Naranja_Route128_G00_M43_Text_081722A1::
# 231 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "This is terrible...\pIf this doesn’t stop, all of HOENN...\nNo, the whole world will be parched.\pThe cause of this calamity, the blazing\nsun, is in the sky above SOOTOPOLIS...\pWhat in the world is taking place there?\pThere’s no point arguing here...\nSOOTOPOLIS should provide answers...$"

Naranja_Route128_G00_M43_Text_081723BE::
# 235 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "{PLAYER}{KUN}...\nI don’t know what you intend to do,\lbut don’t do anything reckless.\pOkay.\nI’m going to SOOTOPOLIS.$"

Naranja_Route128_G00_M43_Text_081C1DB0::
# 239 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "You have to swim, cycle, and then run\na marathon in a triathlon.\pIt’s a grueling race that consists\nof three events.$"

Naranja_Route128_G00_M43_Text_081C1E25::
# 243 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "A POKéMON battle is grueling, too...$"

Naranja_Route128_G00_M43_Text_081C1E4A::
# 247 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "I have to ride a BIKE next, but...\nI’m about to throw in the towel...$"

Naranja_Route128_G00_M43_Text_081C1E90::
# 251 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "A triathlon is long. But I guess the\nroad to become the POKéMON CHAMPION\lis also a long and grueling one.$"

Naranja_Route128_G00_M43_Text_081C1EFA::
# 255 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "A POKéMON battle really is harsh\nand unforgiving...$"

Naranja_Route128_G00_M43_Text_081C1F2E::
# 259 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "You should give serious thought to\nchallenges on VICTORY ROAD.$"

Naranja_Route128_G00_M43_Text_081C1F6D::
# 263 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "We’ve been working so hard to mount\na POKéMON LEAGUE challenge...\pWe can’t afford to lose now!$"

Naranja_Route128_G00_M43_Text_081C1FCC::
# 267 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "Oh!\nHow could this happen?!$"

Naranja_Route128_G00_M43_Text_081C1FE8::
# 271 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "After all I’ve done to get here, I won’t\ngive up after one setback.$"

Naranja_Route128_G00_M43_Text_081C202C::
# 275 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "There is no stronger TRAINER than I!$"

Naranja_Route128_G00_M43_Text_081C2051::
# 279 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "This can’t be!$"

Naranja_Route128_G00_M43_Text_081C2060::
# 283 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "There probably is no stronger TRAINER\nthan you!$"

Naranja_Route128_G00_M43_Text_081C2090::
# 287 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "I want to visit EVER GRANDE, so I\ncaught myself a POKéMON that knows\lthe move WATERFALL to crest the falls.$"

Naranja_Route128_G00_M43_Text_081C20FC::
# 291 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "I’m crestfallen!$"

Naranja_Route128_G00_M43_Text_081C210D::
# 295 "data/maps/Naranja_Route128_G00_M43/scripts.pory"
	.string "Awww, phooey!\pMy POKéMON know WATERFALL, but\nI don’t have the SOOTOPOLIS GYM BADGE!$"
