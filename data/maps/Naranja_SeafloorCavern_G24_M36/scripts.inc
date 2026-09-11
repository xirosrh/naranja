Naranja_SeafloorCavern_G24_M36_MapScripts::
# 5 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SeafloorCavern_G24_M36_OnTransition
	.byte 0


Naranja_SeafloorCavern_G24_M36_OnTransition::
# 9 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 10 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	call Naranja_CaveOfOrigin_G24_M42_EventScript_Sub_081A01B5
# 11 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setmaplayoutindex 0x147
	end


Naranja_SeafloorCavern_G24_M36_EventScript_Trigger_1::
# 16 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	lockall
# 17 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 2
# 18 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 3
# 19 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8006, 4
# 20 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8007, 5
# 21 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 22 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SeafloorCavern_G24_M36_Movement_0815DD68
# 24 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4850, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 27 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32772
# 28 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 29 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_SeafloorCavern_G24_M36_Movement_0815DD36
# 31 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B486C, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 34 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 35 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4897, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 37 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 38 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B491F, MSGBOX_DEFAULT
# 39 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_SEAFLOOR_CAVERN_601, LOCALID_NONE, Naranja_SeafloorCavern_G24_M36_Text_081B49AE
# 40 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B49C1, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setweather 0
# 42 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	doweather
# 43 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special Script_FadeOutMapMusic
# 44 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 45 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4A5A, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special WaitWeather
# 47 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 48 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_RESULT, 0
# 49 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_M_DETECT
# 50 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setfieldeffectargument 0, 0x10
# 51 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setfieldeffectargument 1, 0x2A
# 52 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setfieldeffectargument 2, 0
# 53 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	dofieldeffect 0x36
# 54 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitfieldeffect 0x36
# 55 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_RESULT, 1
# 56 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 57 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_ORB
# 58 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special DoOrbEffect
# 59 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 60 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 61 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 62 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x96
# 63 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_G24_M36_249
# 64 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_G24_M36_248
# 65 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 66 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x3C
# 67 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_G24_M36_248, Naranja_SeafloorCavern_G24_M36_Movement_0815DD4C
# 68 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special DoOrbEffect
# 70 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 71 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 1
# 72 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 1
# 73 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special ShakeCamera
# 74 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 75 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_G24_M36_248, Naranja_SeafloorCavern_G24_M36_Movement_0815DD57
# 76 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 77 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_G24_M36_248
# 78 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 4
# 79 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 2
# 80 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 2
# 81 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special ShakeCamera
# 82 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 83 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x1E
# 84 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 2
# 85 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 3
# 86 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8006, 4
# 87 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8007, 5
# 88 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4A89, MSGBOX_DEFAULT
# 89 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_PC_LOGIN
# 90 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 91 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 92 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4ADB, MSGBOX_DEFAULT
# 93 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 94 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_SeafloorCavern_G24_M36_Movement_0815DD41
# 95 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 96 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4B11, MSGBOX_DEFAULT
# 97 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 98 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_PC_OFF
# 99 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x14
# 100 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 101 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 102 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4C79, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 104 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32773
# 105 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32774
# 106 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32775
# 107 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32775, Naranja_SeafloorCavern_G24_M36_Movement_0815DD63
# 108 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32774, Naranja_SeafloorCavern_G24_M36_Movement_0815DD63
# 109 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32773, Naranja_SeafloorCavern_G24_M36_Movement_0815DD5A
# 110 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 111 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 112 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 113 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4D02, MSGBOX_DEFAULT
# 114 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_PIN
# 115 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 116 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 117 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 118 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 119 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4DD3, MSGBOX_DEFAULT
# 120 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4E37, MSGBOX_DEFAULT
# 121 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 122 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32773, Naranja_SeafloorCavern_G24_M36_Movement_0815DD60
# 123 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_SeafloorCavern_G24_M36_Movement_0815DD46
# 124 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 125 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	msgbox Naranja_SeafloorCavern_G24_M36_Text_081B4ECA, MSGBOX_DEFAULT
# 126 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_ROUTE128_STORY_STATE, 1
# 127 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_BEAUTY
# 128 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_BEAUTY_2
# 129 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_WALLACE
# 130 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_STEVEN
# 131 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_ISLA_NUEVA_STORY_STATE, 1
# 132 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ROUTE128_G00_M43_246
# 133 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ROUTE128_G00_M43_247
# 134 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 135 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_ISLA_NUEVA_G00_M07_OLD_MAN_1
# 136 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 137 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_STEVEN
# 138 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 1
# 139 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_SEAFLOOR_CAVERN_STORY_STATE, 1
# 140 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_246
# 141 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_247
# 142 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_244
# 143 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_248
# 144 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M28_241
# 145 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	warp MAP_NARANJA_ROUTE_128_G00_M43, 0xFF, 0x26, 0x16
# 146 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 147 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	releaseall
	end


Naranja_SeafloorCavern_G24_M36_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 152 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13A
# 153 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 154 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 1
	end


# 158 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD36:
# 159 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 160 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 161 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 162 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 163 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 164 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 165 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD41:
# 169 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_left
# 170 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
	step_end

# 173 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD46:
# 174 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	face_up
# 175 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	lock_facing_direction
# 176 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_down
# 177 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	unlock_facing_direction
# 178 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_in_place_faster_right
	step_end

# 181 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD4C:
# 182 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 183 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 184 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_slow_down
# 185 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 186 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 187 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 188 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_slow_down
# 189 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 190 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 191 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
	step_end

# 194 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD57:
# 195 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	slide_up
# 196 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	slide_up
	step_end

# 199 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD5A:
# 200 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 201 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 202 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 203 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 204 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
	step_end

# 207 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD60:
# 208 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 209 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
	step_end

# 212 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD63:
# 213 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 214 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 215 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 216 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
	step_end

# 219 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD68:
# 220 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 221 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
	step_end

Naranja_SeafloorCavern_G24_M36_Text_081B4850::
# 224 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Hold it right there.$"

Naranja_SeafloorCavern_G24_M36_Text_081B486C::
# 228 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Fufufu...\nSo it was you, after all.$"

Naranja_SeafloorCavern_G24_M36_Text_081B4897::
# 232 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Behold!\pSee how beautiful it is, the sleeping\nform of the ancient POKéMON GROUDON!\pI have waited so long for this day to\ncome...$"

Naranja_SeafloorCavern_G24_M36_Text_081B491F::
# 236 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: It surprises me, how you’ve\nmanaged to chase me here.\pBut that’s all over now.\pFor the realization of my dream,\nyou must disappear now!$"

Naranja_SeafloorCavern_G24_M36_Text_081B49AE::
# 240 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "I...\nI lost again?$"

Naranja_SeafloorCavern_G24_M36_Text_081B49C1::
# 244 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Fufufu...\pI commend you. I must recognize that\nyou are truly gifted.\pBut!\nI have this in my possession!\pWith this BLUE ORB, I can make\nGROUDON...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4A5A::
# 248 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "The BLUE ORB suddenly began shining\nby itself!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4A89::
# 252 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: What?!\pI didn’t do anything.\nWhy did the BLUE ORB...\pWhere did GROUDON go?$"

Naranja_SeafloorCavern_G24_M36_Text_081B4ADB::
# 256 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Hm? It’s a message from our\nmembers outside...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4B11::
# 260 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Yes, what is it?\pHm...\nThe sun is burning brightly?\pGood... That should have happened.\nThat is why we awakened GROUDON,\lto realize TEAM MAGMA’s vision of\lexpanding the world’s landmass.\pWhat?!\pIt’s far hotter than we envisioned?\nIt’s so hot that it’s dangerous?\pThat can’t be...\nThat’s just not possible...\pHold your position and monitor the\nsituation!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4C79::
# 264 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: There’s something wrong...\pThe BLUE ORB is supposed to awaken\nand control GROUDON...\pBut... Why?\nWhy did GROUDON disappear?\pWhy?!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4D02::
# 268 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "ARCHIE: What have you wrought?\pMAXIE... You’ve finally awoken GROUDON,\nhaven’t you?\pWhat will happen to the world if this\nsunshine continues for all eternity?\pThe world’s seas will all dry up and\ndisappear...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4DD3::
# 272 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: What are you saying?\pThe BLUE ORB should let me control\nGROUDON...\lThat can’t be possible...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4E37::
# 276 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "ARCHIE: We don’t have the time to\nargue about it here!\pGet outside and see for yourself!\pSee if what you’ve wrought is the\nworld that you desired!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4ECA::
# 280 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "ARCHIE: {PLAYER}{KUN}, come on, you have\nto get out of here, too!$"
