Naranja_GraniteCave_G24_M00_MapScripts::
# 5 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_GraniteCave_G24_M00_OnTransition
	.byte 0


Naranja_GraniteCave_G24_M00_EventScript_Sign_1::
# 9 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_0816CA83
# 10 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 3
	end


Naranja_GraniteCave_G24_M00_OnTransition::
# 15 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_GraniteCave_G24_M00_EventScript_Trigger_1::
# 20 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	lockall
# 21 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 22 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay 0x1E
# 24 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 25 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_08193237
# 27 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	closemessage
# 29 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 30 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 31 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	playse SE_PIN
# 33 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 34 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 35 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 36 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 37 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_08193268
# 38 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	closemessage
# 40 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_0815C5EE
# 41 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 42 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_081932C5
# 43 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 44 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	closemessage
# 45 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 46 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 47 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241_2, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 48 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 49 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	addobject LOCALID_GRANITE_CAVE_G24_M00_247
# 50 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	addobject LOCALID_GRANITE_CAVE_G24_M00_244
# 51 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	addobject LOCALID_GRANITE_CAVE_G24_M00_244_2
# 52 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_247, Naranja_GraniteCave_G24_M00_Movement_0815C608
# 53 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_244, Naranja_GraniteCave_G24_M00_Movement_0815C60F
# 54 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_244_2, Naranja_GraniteCave_G24_M00_Movement_0815C617
# 55 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 56 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 57 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241_2, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 58 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 59 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_08193320
# 60 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	closemessage
# 62 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_0815C64F
# 63 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241, Naranja_GraniteCave_G24_M00_Movement_0815C5F1
# 64 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_241_2, Naranja_GraniteCave_G24_M00_Movement_0815C5FC
# 65 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 66 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_G24_M00_241
# 67 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_G24_M00_241_2
# 68 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_247, Naranja_GraniteCave_G24_M00_Movement_0815C628
# 69 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_08193584
# 71 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	closemessage
# 73 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_244, Naranja_GraniteCave_G24_M00_Movement_0815C639
# 74 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_244_2, Naranja_GraniteCave_G24_M00_Movement_0815C64A
# 75 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 76 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_08193720
# 77 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 78 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_247, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 79 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 80 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_08193747
# 81 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_247, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 83 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_081937AA
# 85 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 86 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	closemessage
# 87 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_247, Naranja_GraniteCave_G24_M00_Movement_0815C61F
# 88 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_244, Naranja_GraniteCave_G24_M00_Movement_0815C62E
# 89 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_G24_M00_244_2, Naranja_GraniteCave_G24_M00_Movement_0815C63E
# 90 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 91 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_G24_M00_247
# 92 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_G24_M00_244
# 93 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_G24_M00_244_2
# 94 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setflag FLAG_HIDE_ROUTE112_G00_M27_241
# 95 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setvar VAR_NARANJA_GRANITE_CAVE_STORY_STATE, 1
# 96 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	releaseall
	end


Naranja_GraniteCave_G24_M00_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId10::
# 101 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	lock
# 102 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	faceplayer
# 103 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	checkflag FLAG_NARANJA_GRANITE_CAVE_EVENT_COMPLETE_00F4
# 104 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	goto_if EQUAL, Naranja_GraniteCave_G24_M00_EventScript_Sub_0815C66E
# 105 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setflag FLAG_NARANJA_GRANITE_CAVE_EVENT_COMPLETE_00F4
# 106 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_081937EB
# 107 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 108 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	release
	end


Naranja_GraniteCave_G24_M00_EventScript_Sub_0815C66E::
# 113 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	loadword 0, Naranja_GraniteCave_G24_M00_Text_0819396A
# 114 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 4
# 115 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	release
	end


Naranja_GraniteCave_G24_M00_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 120 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x137
# 121 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 122 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 1
	end


Naranja_GraniteCave_G24_M00_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 127 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x17
# 128 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 129 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 1
	end


Naranja_GraniteCave_G24_M00_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 134 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5E
# 135 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 136 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 1
	end


Naranja_GraniteCave_G24_M00_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 141 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 142 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 143 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	callstd 1
	end


# 147 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C5EE:
# 148 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 149 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 152 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C5F1:
# 153 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_up
# 154 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_up
# 155 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 156 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 157 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 158 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 159 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 160 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 161 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 162 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
	step_end

# 165 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C5FC:
# 166 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_up
# 167 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_up
# 168 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_up
# 169 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 170 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 171 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 172 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 173 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 174 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 175 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
# 176 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_fast_right
	step_end

# 179 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C608:
# 180 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 181 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 182 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 183 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 184 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 185 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 188 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C60F:
# 189 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
# 190 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
# 191 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 192 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 193 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 194 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 195 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 198 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C617:
# 199 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
# 200 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
# 201 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 202 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 203 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 204 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 205 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C61F:
# 209 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 210 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 211 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 212 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 213 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 214 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 215 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 216 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 219 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C628:
# 220 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 221 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 222 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 223 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 224 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_left
	step_end

# 227 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C62E:
# 228 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 229 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 230 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 231 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 232 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 233 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 234 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 235 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 236 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 237 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 240 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C639:
# 241 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 242 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 243 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 244 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_up
	step_end

# 247 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C63E:
# 248 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 249 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 250 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_up
# 251 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 252 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 253 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 254 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 255 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 256 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 257 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 258 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
	step_end

# 261 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C64A:
# 262 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 263 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 264 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_right
# 265 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_up
	step_end

# 268 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_0815C64F:
# 269 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_down
# 270 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_4
# 271 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_right
# 272 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	lock_facing_direction
# 273 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_left
# 274 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	unlock_facing_direction
	step_end

# 277 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_081A0833:
# 278 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	emote_exclamation_mark
	step_end

# 281 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_081A0835:
# 282 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
# 283 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
# 284 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	delay_16
	step_end

# 287 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_081A083F:
# 288 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_left
	step_end

# 291 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
Naranja_GraniteCave_G24_M00_Movement_081A0845:
# 292 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_GraniteCave_G24_M00_Text_0816CA83::
# 295 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "{COLOR 0x0D}Isla NAVEL \n{COLOR 0x09}“Con tanto frìo no tenemos ni lema”$"

Naranja_GraniteCave_G24_M00_Text_08193237::
# 299 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "Hehehe!\pWith this METEORITE, MT. CHIMNEY\nwill...$"

Naranja_GraniteCave_G24_M00_Text_08193268::
# 303 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "Heh?\pI don’t know who you are, but if you get\nin the way of TEAM {AQUA}, don’t\lexpect any mercy!$"

Naranja_GraniteCave_G24_M00_Text_081932C5::
# 307 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "Hold it right there, TEAM {AQUA}!\pWe, TEAM {MAGMA}, won’t allow you to\nget away with your misdeeds!$"

Naranja_GraniteCave_G24_M00_Text_08193320::
# 311 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "Hehehe!\nEven TEAM {MAGMA} joins us!\pBut it’s too much trouble to deal with\nyou all...\pHeh, it doesn’t matter!\pWe’ve got the METEORITE, so off to\nMT. CHIMNEY we go!\pHehehe! Be seeing you, you TEAM\n{MAGMA} dingbats!$"

Naranja_GraniteCave_G24_M00_Text_08193584::
# 315 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "Who might you be?\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pAh, so you are {PLAYER}{KUN}.\pI am ARCHIE. As the head of TEAM AQUA,\nI have dedicated myself to thwarting\lthe dangerous plans of TEAM MAGMA.\pWhy? Because TEAM MAGMA is a grave\nthreat to us all.\pThey have committed many destructive\nacts in their bid to expand the land.\pWe, TEAM AQUA, love the sea above\nall! TEAM MAGMA is our sworn enemy!$"

Naranja_GraniteCave_G24_M00_Text_08193720::
# 319 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "{MAXIE}, we should give chase to\nTEAM {AQUA}...$"

Naranja_GraniteCave_G24_M00_Text_08193747::
# 323 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "{MAXIE}: Yes, yes, we must!\nWe’ve got to hurry.\pThere’s no telling what TEAM {AQUA}\nwill do at MT. CHIMNEY!$"

Naranja_GraniteCave_G24_M00_Text_081937AA::
# 327 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "{MAXIE}: {PLAYER}{KUN}, you should keep\nan eye out for TEAM {AQUA}, too.\pFarewell!$"

Naranja_GraniteCave_G24_M00_Text_081937EB::
# 331 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "I... I’m COZMO...\nI’m a PROFESSOR...\pI usually study METEORITES in\nFALLARBOR TOWN...\pThen some people from TEAM {AQUA}\nmade me guide them to METEOR FALLS...\pThey promised me that they would\nexcavate METEORITES for me...\pBut, I...\nTEAM {AQUA} tricked me...\pOh... That METEORITE...\nIt will never be mine now...\pBut that TEAM {AQUA}...\pWhat are they going to do with that\nMETEORITE at MT. CHIMNEY?$"

Naranja_GraniteCave_G24_M00_Text_0819396A::
# 335 "data/maps/Naranja_GraniteCave_G24_M00/scripts.pory"
	.string "PROF. COZMO: That TEAM {AQUA}...\pWhat are they going to do with that\nMETEORITE at MT. CHIMNEY?$"
