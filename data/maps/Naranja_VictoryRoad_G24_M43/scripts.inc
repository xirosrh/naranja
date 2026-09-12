Naranja_VictoryRoad_G24_M43_MapScripts::
# 5 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_VictoryRoad_G24_M43_OnTransition
	.byte 0


Naranja_VictoryRoad_G24_M43_OnTransition::
# 9 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	checkflag FLAG_NARANJA_VICTORY_ROAD_EVENT_COMPLETE_007E
# 10 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	call_if EQUAL, Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DE93
	end


Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DE93::
# 15 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_G24_M43_WALLY
	return


Naranja_VictoryRoad_G24_M43_EventScript_Trigger_1::
# 20 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	lockall
# 21 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_G24_M43_WALLY
# 22 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_G24_M43_WALLY, Naranja_VictoryRoad_G24_M43_Movement_0815DF07
# 23 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 24 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	goto Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DED3
	return


Naranja_VictoryRoad_G24_M43_EventScript_Trigger_2::
# 28 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	lockall
# 29 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_G24_M43_WALLY
# 30 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_G24_M43_WALLY, Naranja_VictoryRoad_G24_M43_Movement_0815DF13
# 31 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	goto Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DED3
	return


Naranja_VictoryRoad_G24_M43_EventScript_Trigger_3::
# 36 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	lockall
# 37 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_G24_M43_WALLY
# 38 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_G24_M43_WALLY, Naranja_VictoryRoad_G24_M43_Movement_0815DF1E
# 39 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	goto Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DED3
	return


Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DED3::
# 44 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 45 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_0819782B, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_VICTORY_ROAD_519, Naranja_VictoryRoad_G24_M43_Text_08197943
# 48 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197967, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_G24_M43_WALLY
# 50 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_G24_M43_WALLY
# 51 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setflag FLAG_NARANJA_VICTORY_ROAD_EVENT_COMPLETE_007E
# 52 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setvar VAR_NARANJA_VICTORY_ROAD_STORY_STATE, 1
# 53 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	releaseall
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_TRACEY_LocalId4::
# 58 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197967, MSGBOX_NPC
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_TRACEY_LocalId7::
# 63 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_657, Naranja_VictoryRoad_G24_M43_Text_081979BA, Naranja_VictoryRoad_G24_M43_Text_08197A23
# 64 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 65 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 66 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	goto_if EQUAL, Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DF58
# 67 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197A47, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M43_EventScript_Sub_0815DF58::
# 72 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_VICTORY_ROAD_657, Naranja_VictoryRoad_G24_M43_Text_081979BA, Naranja_VictoryRoad_G24_M43_Text_08197A23
# 73 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197A47, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 78 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_079, Naranja_VictoryRoad_G24_M43_Text_08197AD1, Naranja_VictoryRoad_G24_M43_Text_08197B1A
# 79 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197B36, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 84 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_080, Naranja_VictoryRoad_G24_M43_Text_08197B99, Naranja_VictoryRoad_G24_M43_Text_08197BE1
# 85 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197BF7, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 90 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_096, Naranja_VictoryRoad_G24_M43_Text_08197C45, Naranja_VictoryRoad_G24_M43_Text_08197C8D
# 91 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M43_Text_08197CAF, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 96 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setorcopyvar VAR_0x8000, 0x25
# 97 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 98 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	callstd 1
	end


Naranja_VictoryRoad_G24_M43_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 103 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 104 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 105 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	callstd 1
	end


# 109 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
Naranja_VictoryRoad_G24_M43_Movement_0815DF07:
# 110 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 111 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 112 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 113 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 114 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 115 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 116 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 117 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 118 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 119 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_right
# 120 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_right
	step_end

# 123 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
Naranja_VictoryRoad_G24_M43_Movement_0815DF13:
# 124 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 125 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 126 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 127 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 128 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 129 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 130 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 131 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 132 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_right
# 133 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_right
	step_end

# 136 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
Naranja_VictoryRoad_G24_M43_Movement_0815DF1E:
# 137 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 138 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 139 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 140 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 141 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 142 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 143 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_up
# 144 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_right
# 145 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	walk_right
	step_end

Naranja_VictoryRoad_G24_M43_Text_0819782B::
# 148 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\pI bet you’re surprised to see me here!\pI made it all the way here, and it’s\nall thanks to you!\p{PLAYER}, losing to you that time\nmade me stronger!\pBut I’m not going to lose anymore!\pI’m going to win! For the POKéMON who\ngave me courage and strength!\pOkay... Here I come!$"

Naranja_VictoryRoad_G24_M43_Text_08197943::
# 152 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "Wow!\n{PLAYER}, you are strong, after all!$"

Naranja_VictoryRoad_G24_M43_Text_08197967::
# 156 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "WALLY: I couldn’t beat you today,\n{PLAYER}, but one of these days, I’ll\lcatch up to you!$"

Naranja_VictoryRoad_G24_M43_Text_081979BA::
# 160 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\pI’ve gotten stronger since that last\ntime! I wanted to show you, {PLAYER}!\pOkay... Here I come!$"

Naranja_VictoryRoad_G24_M43_Text_08197A23::
# 164 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "Wow!\n{PLAYER}, you are strong, after all!$"

Naranja_VictoryRoad_G24_M43_Text_08197A47::
# 168 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "WALLY: I couldn’t beat you this time,\ntoo... But one of these days, {PLAYER},\lI’m going to catch up to you...\pAnd challenge the POKéMON LEAGUE!$"

Naranja_VictoryRoad_G24_M43_Text_08197AD1::
# 172 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "I’ve made it this far a couple times,\nbut the last stretch is so long...$"

Naranja_VictoryRoad_G24_M43_Text_08197B1A::
# 176 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "My dream ends here again...$"

Naranja_VictoryRoad_G24_M43_Text_08197B36::
# 180 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "You’ve made it this far. Keep the\nmomentum going and become the\lCHAMPION! If anyone can, it’s you!$"

Naranja_VictoryRoad_G24_M43_Text_08197B99::
# 184 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "I didn’t come all this way to lose now.\nThat possibility doesn’t exist!$"

Naranja_VictoryRoad_G24_M43_Text_08197BE1::
# 188 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "Impossible...\nI lost?$"

Naranja_VictoryRoad_G24_M43_Text_08197BF7::
# 192 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "I lost here...\pThat means I lack the qualifications\nto become the CHAMPION...$"

Naranja_VictoryRoad_G24_M43_Text_08197C45::
# 196 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "This seemingly infinite and harsh road\nlives up to its name of VICTORY.$"

Naranja_VictoryRoad_G24_M43_Text_08197C8D::
# 200 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "Your battle style is fantastic...$"

Naranja_VictoryRoad_G24_M43_Text_08197CAF::
# 204 "data/maps/Naranja_VictoryRoad_G24_M43/scripts.pory"
	.string "You seem to have the potential for\nbecoming the CHAMPION.$"
