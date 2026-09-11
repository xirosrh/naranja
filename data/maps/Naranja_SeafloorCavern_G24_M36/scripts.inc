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
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4850
# 26 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 28 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32772
# 29 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 30 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 31 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_SeafloorCavern_G24_M36_Movement_0815DD36
# 32 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 33 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B486C
# 34 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 36 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 37 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4897
# 38 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 40 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B491F
# 42 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 43 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_SEAFLOOR_CAVERN_601, LOCALID_NONE, Naranja_SeafloorCavern_G24_M36_Text_081B49AE
# 44 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B49C1
# 45 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setweather 0
# 47 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	doweather
# 48 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special Script_FadeOutMapMusic
# 49 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 50 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4A5A
# 51 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special WaitWeather
# 53 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 54 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_RESULT, 0
# 55 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_M_DETECT
# 56 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setfieldeffectargument 0, 0x10
# 57 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setfieldeffectargument 1, 0x2A
# 58 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setfieldeffectargument 2, 0
# 59 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	dofieldeffect 0x36
# 60 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitfieldeffect 0x36
# 61 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_RESULT, 1
# 62 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 63 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_ORB
# 64 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special DoOrbEffect
# 65 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 66 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 67 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 68 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x96
# 69 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_G24_M36_249
# 70 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_G24_M36_248
# 71 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 72 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x3C
# 73 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_G24_M36_248, Naranja_SeafloorCavern_G24_M36_Movement_0815DD4C
# 74 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special DoOrbEffect
# 76 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 77 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 1
# 78 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 1
# 79 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special ShakeCamera
# 80 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 81 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_G24_M36_248, Naranja_SeafloorCavern_G24_M36_Movement_0815DD57
# 82 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 83 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_G24_M36_248
# 84 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 4
# 85 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 2
# 86 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 2
# 87 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	special ShakeCamera
# 88 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 89 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x1E
# 90 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8004, 2
# 91 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8005, 3
# 92 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8006, 4
# 93 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_0x8007, 5
# 94 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4A89
# 95 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 96 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_PC_LOGIN
# 97 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 98 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4ADB
# 100 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 102 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_SeafloorCavern_G24_M36_Movement_0815DD41
# 103 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 104 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4B11
# 105 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 107 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_PC_OFF
# 108 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay 0x14
# 109 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 110 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 111 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4C79
# 112 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 113 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 114 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32773
# 115 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32774
# 116 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	addobject 32775
# 117 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32775, Naranja_SeafloorCavern_G24_M36_Movement_0815DD63
# 118 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32774, Naranja_SeafloorCavern_G24_M36_Movement_0815DD63
# 119 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32773, Naranja_SeafloorCavern_G24_M36_Movement_0815DD5A
# 120 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 122 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 123 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4D02
# 124 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 125 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 127 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 128 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 129 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 130 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4DD3
# 131 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 132 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4E37
# 133 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 134 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	closemessage
# 135 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32773, Naranja_SeafloorCavern_G24_M36_Movement_0815DD60
# 136 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	applymovement 32772, Naranja_SeafloorCavern_G24_M36_Movement_0815DD46
# 137 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 138 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	loadword 0, Naranja_SeafloorCavern_G24_M36_Text_081B4ECA
# 139 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 4
# 140 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_ROUTE128_STORY_STATE, 1
# 141 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_BEAUTY
# 142 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_BEAUTY_2
# 143 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_WALLACE
# 144 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NUEVA_G00_M07_STEVEN
# 145 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_ISLA_NUEVA_STORY_STATE, 1
# 146 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ROUTE128_G00_M43_246
# 147 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	clearflag FLAG_HIDE_ROUTE128_G00_M43_247
# 148 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 149 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_ISLA_NUEVA_G00_M07_OLD_MAN_1
# 150 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NUEVA_EVENT_COMPLETE_0081
# 151 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_ISLA_MELLSWEET_G14_M07_STEVEN
# 152 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_EVENT_STATE_2, 1
# 153 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setvar VAR_NARANJA_SEAFLOOR_CAVERN_STORY_STATE, 1
# 154 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_246
# 155 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_247
# 156 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_244
# 157 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M36_248
# 158 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_G24_M28_241
# 159 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	warp MAP_NARANJA_ROUTE_128_G00_M43, 0xFF, 0x26, 0x16
# 160 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	waitstate
# 161 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	releaseall
	end


Naranja_SeafloorCavern_G24_M36_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 166 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13A
# 167 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 168 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	callstd 1
	end


# 172 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD36:
# 173 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 174 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 175 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 176 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 177 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 178 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 179 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
	step_end

# 182 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD41:
# 183 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_left
# 184 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
	step_end

# 187 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD46:
# 188 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	face_up
# 189 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	lock_facing_direction
# 190 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_down
# 191 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	unlock_facing_direction
# 192 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_in_place_faster_right
	step_end

# 195 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD4C:
# 196 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 197 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 198 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_slow_down
# 199 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 200 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 201 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 202 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_slow_down
# 203 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 204 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 205 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
	step_end

# 208 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD57:
# 209 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	slide_up
# 210 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	slide_up
	step_end

# 213 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD5A:
# 214 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 215 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 216 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 217 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 218 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
	step_end

# 221 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD60:
# 222 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
# 223 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_right
	step_end

# 226 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD63:
# 227 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 228 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 229 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
# 230 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	walk_fast_right
	step_end

# 233 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
Naranja_SeafloorCavern_G24_M36_Movement_0815DD68:
# 234 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
# 235 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	delay_16
	step_end

Naranja_SeafloorCavern_G24_M36_Text_081B4850::
# 238 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Hold it right there.$"

Naranja_SeafloorCavern_G24_M36_Text_081B486C::
# 242 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Fufufu...\nSo it was you, after all.$"

Naranja_SeafloorCavern_G24_M36_Text_081B4897::
# 246 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Behold!\pSee how beautiful it is, the sleeping\nform of the ancient POKéMON GROUDON!\pI have waited so long for this day to\ncome...$"

Naranja_SeafloorCavern_G24_M36_Text_081B491F::
# 250 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: It surprises me, how you’ve\nmanaged to chase me here.\pBut that’s all over now.\pFor the realization of my dream,\nyou must disappear now!$"

Naranja_SeafloorCavern_G24_M36_Text_081B49AE::
# 254 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "I...\nI lost again?$"

Naranja_SeafloorCavern_G24_M36_Text_081B49C1::
# 258 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Fufufu...\pI commend you. I must recognize that\nyou are truly gifted.\pBut!\nI have this in my possession!\pWith this BLUE ORB, I can make\nGROUDON...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4A5A::
# 262 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "The BLUE ORB suddenly began shining\nby itself!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4A89::
# 266 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: What?!\pI didn’t do anything.\nWhy did the BLUE ORB...\pWhere did GROUDON go?$"

Naranja_SeafloorCavern_G24_M36_Text_081B4ADB::
# 270 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Hm? It’s a message from our\nmembers outside...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4B11::
# 274 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: Yes, what is it?\pHm...\nThe sun is burning brightly?\pGood... That should have happened.\nThat is why we awakened GROUDON,\lto realize TEAM MAGMA’s vision of\lexpanding the world’s landmass.\pWhat?!\pIt’s far hotter than we envisioned?\nIt’s so hot that it’s dangerous?\pThat can’t be...\nThat’s just not possible...\pHold your position and monitor the\nsituation!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4C79::
# 278 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: There’s something wrong...\pThe BLUE ORB is supposed to awaken\nand control GROUDON...\pBut... Why?\nWhy did GROUDON disappear?\pWhy?!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4D02::
# 282 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "ARCHIE: What have you wrought?\pMAXIE... You’ve finally awoken GROUDON,\nhaven’t you?\pWhat will happen to the world if this\nsunshine continues for all eternity?\pThe world’s seas will all dry up and\ndisappear...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4DD3::
# 286 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "MAXIE: What are you saying?\pThe BLUE ORB should let me control\nGROUDON...\lThat can’t be possible...$"

Naranja_SeafloorCavern_G24_M36_Text_081B4E37::
# 290 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "ARCHIE: We don’t have the time to\nargue about it here!\pGet outside and see for yourself!\pSee if what you’ve wrought is the\nworld that you desired!$"

Naranja_SeafloorCavern_G24_M36_Text_081B4ECA::
# 294 "data/maps/Naranja_SeafloorCavern_G24_M36/scripts.pory"
	.string "ARCHIE: {PLAYER}{KUN}, come on, you have\nto get out of here, too!$"
