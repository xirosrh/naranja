Naranja_Route128_MapScripts::
# 5 "data/maps/Naranja_Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route128_OnTransition
# 6 "data/maps/Naranja_Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Route128/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE128_STORY_STATE, 1, Naranja_Route128_OnFrame_1
	.2byte 0


Naranja_Route128_OnTransition::
# 12 "data/maps/Naranja_Route128/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 13 "data/maps/Naranja_Route128/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_081A02C1
# 14 "data/maps/Naranja_Route128/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_Route128_OnFrame_1::
# 19 "data/maps/Naranja_Route128/scripts.pory"
	lockall
# 20 "data/maps/Naranja_Route128/scripts.pory"
	delay 0x14
# 21 "data/maps/Naranja_Route128/scripts.pory"
	special StartDroughtWeatherBlend
# 22 "data/maps/Naranja_Route128/scripts.pory"
	waitstate
# 23 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_246, Naranja_Route128_Movement_08152271
# 24 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_08171EE0, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_246, Naranja_Route128_Movement_08152279
# 27 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_08171F35, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_Route128/scripts.pory"
	closemessage
# 30 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_247, Naranja_Route128_Movement_08152293
# 31 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_246, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 33 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_08171F4B, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_Route128/scripts.pory"
	closemessage
# 36 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_247, Naranja_Route128_Movement_081522A1
# 37 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 39 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_08172008, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_Route128/scripts.pory"
	closemessage
# 42 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_246, Naranja_Route128_Movement_0815227E
# 43 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 44 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_247, Naranja_Route128_Movement_08152290
# 45 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_0817210B, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_Route128/scripts.pory"
	closemessage
# 48 "data/maps/Naranja_Route128/scripts.pory"
	delay 0x28
# 49 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_247, Naranja_Route128_Movement_08152296
# 50 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_246, Naranja_Route128_Movement_08152283
# 51 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_Route128/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE128_247
# 53 "data/maps/Naranja_Route128/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE128_246
# 54 "data/maps/Naranja_Route128/scripts.pory"
	delay 0x64
# 55 "data/maps/Naranja_Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 56 "data/maps/Naranja_Route128/scripts.pory"
	dofieldeffect 0x1E
# 57 "data/maps/Naranja_Route128/scripts.pory"
	waitfieldeffect 0x1E
# 58 "data/maps/Naranja_Route128/scripts.pory"
	addobject LOCALID_NARANJA_ROUTE128_STEVEN
# 59 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_STEVEN, Naranja_Route128_Movement_0815226F
# 60 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 61 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 62 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 63 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_08172181, MSGBOX_DEFAULT
# 64 "data/maps/Naranja_Route128/scripts.pory"
	closemessage
# 65 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_STEVEN, Naranja_Route128_Movement_0815226D
# 66 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 67 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 68 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081722A1, MSGBOX_DEFAULT
# 69 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_STEVEN, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 70 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 71 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081723BE, MSGBOX_DEFAULT
# 72 "data/maps/Naranja_Route128/scripts.pory"
	closemessage
# 73 "data/maps/Naranja_Route128/scripts.pory"
	applymovement LOCALID_NARANJA_ROUTE128_STEVEN, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 74 "data/maps/Naranja_Route128/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_Route128/scripts.pory"
	delay 0x32
# 76 "data/maps/Naranja_Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 77 "data/maps/Naranja_Route128/scripts.pory"
	dofieldeffect 0x1E
# 78 "data/maps/Naranja_Route128/scripts.pory"
	delay 0xF
# 79 "data/maps/Naranja_Route128/scripts.pory"
	removeobject LOCALID_NARANJA_ROUTE128_STEVEN
# 80 "data/maps/Naranja_Route128/scripts.pory"
	waitfieldeffect 0x1E
# 81 "data/maps/Naranja_Route128/scripts.pory"
	setvar VAR_NARANJA_ROUTE128_STORY_STATE, 2
# 82 "data/maps/Naranja_Route128/scripts.pory"
	releaseall
	end


Naranja_Route128_EventScript_SwimmerF::
# 87 "data/maps/Naranja_Route128/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE128_386, Naranja_Route128_Text_081C1DB0, Naranja_Route128_Text_081C1E25
# 88 "data/maps/Naranja_Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 89 "data/maps/Naranja_Route128/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 90 "data/maps/Naranja_Route128/scripts.pory"
	goto_if EQUAL, Naranja_Route128_EventScript_Sub_08152309
# 91 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081C1E4A, MSGBOX_AUTOCLOSE
	end


Naranja_Route128_EventScript_Sub_08152309::
# 96 "data/maps/Naranja_Route128/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE128_386, Naranja_Route128_Text_081C1E90, Naranja_Route128_Text_081C1EFA
# 97 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081C1F2E, MSGBOX_AUTOCLOSE
	end


Naranja_Route128_EventScript_Woman7::
# 102 "data/maps/Naranja_Route128/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE128_670, Naranja_Route128_Text_081C1F6D, Naranja_Route128_Text_081C1FCC
# 103 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081C1FE8, MSGBOX_AUTOCLOSE
	end


Naranja_Route128_EventScript_Man4::
# 108 "data/maps/Naranja_Route128/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE128_671, Naranja_Route128_Text_081C202C, Naranja_Route128_Text_081C2051
# 109 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081C2060, MSGBOX_AUTOCLOSE
	end


Naranja_Route128_EventScript_Fisherman::
# 114 "data/maps/Naranja_Route128/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE128_673, Naranja_Route128_Text_081C2090, Naranja_Route128_Text_081C20FC
# 115 "data/maps/Naranja_Route128/scripts.pory"
	msgbox Naranja_Route128_Text_081C210D, MSGBOX_AUTOCLOSE
	end


# 119 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_0815226D:
# 120 "data/maps/Naranja_Route128/scripts.pory"
	walk_up
	step_end

# 123 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_0815226F:
# 124 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
	step_end

# 127 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_08152271:
# 128 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_down
# 129 "data/maps/Naranja_Route128/scripts.pory"
	walk_in_place_faster_left
# 130 "data/maps/Naranja_Route128/scripts.pory"
	delay_16
# 131 "data/maps/Naranja_Route128/scripts.pory"
	walk_in_place_faster_right
# 132 "data/maps/Naranja_Route128/scripts.pory"
	delay_16
# 133 "data/maps/Naranja_Route128/scripts.pory"
	delay_16
# 134 "data/maps/Naranja_Route128/scripts.pory"
	walk_in_place_faster_down
	step_end

# 137 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_08152279:
# 138 "data/maps/Naranja_Route128/scripts.pory"
	lock_facing_direction
# 139 "data/maps/Naranja_Route128/scripts.pory"
	walk_slow_up
# 140 "data/maps/Naranja_Route128/scripts.pory"
	delay_16
# 141 "data/maps/Naranja_Route128/scripts.pory"
	unlock_facing_direction
	step_end

# 144 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_0815227E:
# 145 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 146 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 147 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 148 "data/maps/Naranja_Route128/scripts.pory"
	walk_in_place_faster_right
	step_end

# 151 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_08152283:
# 152 "data/maps/Naranja_Route128/scripts.pory"
	delay_16
# 153 "data/maps/Naranja_Route128/scripts.pory"
	delay_16
# 154 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 155 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 156 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 157 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 158 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 159 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 160 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 161 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 162 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 163 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
	step_end

# 166 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_08152290:
# 167 "data/maps/Naranja_Route128/scripts.pory"
	walk_left
# 168 "data/maps/Naranja_Route128/scripts.pory"
	walk_left
	step_end

# 171 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_08152293:
# 172 "data/maps/Naranja_Route128/scripts.pory"
	walk_left
# 173 "data/maps/Naranja_Route128/scripts.pory"
	walk_in_place_faster_down
	step_end

# 176 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_08152296:
# 177 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 178 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 179 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_left
# 180 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 181 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 182 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 183 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 184 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 185 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
# 186 "data/maps/Naranja_Route128/scripts.pory"
	walk_fast_up
	step_end

# 189 "data/maps/Naranja_Route128/scripts.pory"
Naranja_Route128_Movement_081522A1:
# 190 "data/maps/Naranja_Route128/scripts.pory"
	walk_right
# 191 "data/maps/Naranja_Route128/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_Route128_Text_08171EE0::
# 194 "data/maps/Naranja_Route128/scripts.pory"
	.string "{ARCHIE}: What happened...\nWhat is this wretched scene...\pDid I...make a horrible mistake?$"

Naranja_Route128_Text_08171F35::
# 198 "data/maps/Naranja_Route128/scripts.pory"
	.string "I...\nI only wanted...$"

Naranja_Route128_Text_08171F4B::
# 202 "data/maps/Naranja_Route128/scripts.pory"
	.string "{MAXIE}: Do you understand now,\n{ARCHIE}?\pDo you finally see how disastrous\nyour dream turned out to be?\pWe have to hurry! We have to do\nsomething before the situation goes\lcompletely out of control!$"

Naranja_Route128_Text_08172008::
# 206 "data/maps/Naranja_Route128/scripts.pory"
	.string "{MAXIE}: {PLAYER}{KUN}...\pWe, TEAM {MAGMA}, had been pursuing TEAM\n{AQUA} to prevent this from happening.\pYou’ve been very helpful, but I fear\nthe worst has happened...\pIt’s gone too far for a child like you\nto manage...\pLeave things to us, and get out of\nhere while you still can!$"

Naranja_Route128_Text_0817210B::
# 210 "data/maps/Naranja_Route128/scripts.pory"
	.string "{MAXIE}: This defies belief...\pA super-ancient POKéMON...\pIts power is unbelievable.\nIt has upset the balance of nature...$"

Naranja_Route128_Text_08172181::
# 214 "data/maps/Naranja_Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\nWhat is happening?$"

Naranja_Route128_Text_081722A1::
# 218 "data/maps/Naranja_Route128/scripts.pory"
	.string "This is terrible...\pIf this doesn’t stop, all of HOENN...\nNo, the whole world will be parched.\pThe cause of this calamity, the blazing\nsun, is in the sky above SOOTOPOLIS...\pWhat in the world is taking place there?\pThere’s no point arguing here...\nSOOTOPOLIS should provide answers...$"

Naranja_Route128_Text_081723BE::
# 222 "data/maps/Naranja_Route128/scripts.pory"
	.string "{PLAYER}{KUN}...\nI don’t know what you intend to do,\lbut don’t do anything reckless.\pOkay.\nI’m going to SOOTOPOLIS.$"

Naranja_Route128_Text_081C1DB0::
# 226 "data/maps/Naranja_Route128/scripts.pory"
	.string "You have to swim, cycle, and then run\na marathon in a triathlon.\pIt’s a grueling race that consists\nof three events.$"

Naranja_Route128_Text_081C1E25::
# 230 "data/maps/Naranja_Route128/scripts.pory"
	.string "A POKéMON battle is grueling, too...$"

Naranja_Route128_Text_081C1E4A::
# 234 "data/maps/Naranja_Route128/scripts.pory"
	.string "I have to ride a BIKE next, but...\nI’m about to throw in the towel...$"

Naranja_Route128_Text_081C1E90::
# 238 "data/maps/Naranja_Route128/scripts.pory"
	.string "A triathlon is long. But I guess the\nroad to become the POKéMON CHAMPION\lis also a long and grueling one.$"

Naranja_Route128_Text_081C1EFA::
# 242 "data/maps/Naranja_Route128/scripts.pory"
	.string "A POKéMON battle really is harsh\nand unforgiving...$"

Naranja_Route128_Text_081C1F2E::
# 246 "data/maps/Naranja_Route128/scripts.pory"
	.string "You should give serious thought to\nchallenges on VICTORY ROAD.$"

Naranja_Route128_Text_081C1F6D::
# 250 "data/maps/Naranja_Route128/scripts.pory"
	.string "We’ve been working so hard to mount\na POKéMON LEAGUE challenge...\pWe can’t afford to lose now!$"

Naranja_Route128_Text_081C1FCC::
# 254 "data/maps/Naranja_Route128/scripts.pory"
	.string "Oh!\nHow could this happen?!$"

Naranja_Route128_Text_081C1FE8::
# 258 "data/maps/Naranja_Route128/scripts.pory"
	.string "After all I’ve done to get here, I won’t\ngive up after one setback.$"

Naranja_Route128_Text_081C202C::
# 262 "data/maps/Naranja_Route128/scripts.pory"
	.string "There is no stronger TRAINER than I!$"

Naranja_Route128_Text_081C2051::
# 266 "data/maps/Naranja_Route128/scripts.pory"
	.string "This can’t be!$"

Naranja_Route128_Text_081C2060::
# 270 "data/maps/Naranja_Route128/scripts.pory"
	.string "There probably is no stronger TRAINER\nthan you!$"

Naranja_Route128_Text_081C2090::
# 274 "data/maps/Naranja_Route128/scripts.pory"
	.string "I want to visit EVER GRANDE, so I\ncaught myself a POKéMON that knows\lthe move WATERFALL to crest the falls.$"

Naranja_Route128_Text_081C20FC::
# 278 "data/maps/Naranja_Route128/scripts.pory"
	.string "I’m crestfallen!$"

Naranja_Route128_Text_081C210D::
# 282 "data/maps/Naranja_Route128/scripts.pory"
	.string "Awww, phooey!\pMy POKéMON know WATERFALL, but\nI don’t have the SOOTOPOLIS GYM BADGE!$"
