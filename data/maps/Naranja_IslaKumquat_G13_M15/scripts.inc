Naranja_IslaKumquat_G13_M15_MapScripts::
# 5 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaKumquat_G13_M15_OnTransition
	.byte 0


Naranja_IslaKumquat_G13_M15_OnTransition::
# 9 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	random 4
# 10 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	end


Naranja_IslaKumquat_G13_M15_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId2::
# 15 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	lock
# 16 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	faceplayer
# 17 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818B8CC
# 18 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 5
# 19 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 20 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159C1D
# 21 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818BA2B
# 22 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 23 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	closemessage
# 24 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 25 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159C1D::
# 31 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818B9DC
# 32 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	closemessage
# 34 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 35 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId6::
# 41 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	lock
# 42 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	faceplayer
# 43 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818BD64
# 44 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	closemessage
# 46 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	applymovement 32783, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 47 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId5::
# 53 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	lock
# 54 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	faceplayer
# 55 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 56 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 57 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D19
# 58 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 59 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D23
# 60 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 61 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D2D
# 62 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 63 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D37
	end


Naranja_IslaKumquat_G13_M15_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId3::
# 68 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	lock
# 69 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	faceplayer
# 70 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 71 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 72 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D19
# 73 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 74 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D23
# 75 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 76 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D2D
# 77 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 78 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D37
	end


Naranja_IslaKumquat_G13_M15_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId4::
# 83 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	lock
# 84 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	faceplayer
# 85 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 86 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 87 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D19
# 88 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 89 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D23
# 90 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 91 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D2D
# 92 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 93 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D37
	end


Naranja_IslaKumquat_G13_M15_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId1::
# 98 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	lock
# 99 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	faceplayer
# 100 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 101 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 102 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D19
# 103 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 104 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D23
# 105 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 106 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D2D
# 107 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 108 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D37
	end


Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D19::
# 113 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818BDDB
# 114 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 115 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D23::
# 120 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818BE14
# 121 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 122 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D2D::
# 127 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818BE57
# 128 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 129 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_EventScript_Sub_08159D37::
# 134 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M15_Text_0818BE8E
# 135 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	callstd 4
# 136 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M15_Text_0818B8CC::
# 140 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "Oh, my, my! Are you traveling alone?\nBut you’re so young! Good for you!\pI’m sure my kids could learn a thing\nor two from you!\pMe? I’m a master of オカキクケS.\pIf I get serious just a little, why, I\ncan concoct great オカキクケS.\pWould you like to learn from me, a\nmaster of オカキクケS?$"

Naranja_IslaKumquat_G13_M15_Text_0818B9DC::
# 144 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "Oh? Are you sure?\pYou shouldn’t always try to do\neverything by yourself, dear!$"

Naranja_IslaKumquat_G13_M15_Text_0818BA2B::
# 148 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "Oh, good! You’re a smart soul!\nThis is a bit long, so listen up!\pAre you ready?\pIf you look at オカキクケS, you should see\nthat they are rated on how they feel.\pThe lower the feel rating,\nthe better it is. Don’t forget this!\pA good オカキクケ has a low feel\nrating and a high level.\pA POKéMON can eat more good\nオカキクケS than ordinary ones, too.\pAnd this is important.\pIf you want to make smooth オカキクケS,\nuse different kinds of BERRIES.\pDon’t be stingy - the kinds of BERRIES\naffect the smoothness of オカキクケS.\pAnd another thing.\pThe more people blending BERRIES, the\nsmoother the オカキクケS.\pThat’s why you should talk to other\npeople and make オカキクケS together.\pThat’s about all you need to know to\nmake good オカキクケS.\pIf everyone had POKéMON they love,\nsmooth オカキクケS, and a loving family,\lthe world would be a happier place.\pDon’t give up, dear!$"

Naranja_IslaKumquat_G13_M15_Text_0818BD64::
# 152 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "When my wife gave birth to quadruplets,\nyou bet I was shocked.\pBut, now, seeing them play together,\nit makes me happy.$"

Naranja_IslaKumquat_G13_M15_Text_0818BDDB::
# 156 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "We’re having MULTI BATTLES, but I know\nI’m going to win.$"

Naranja_IslaKumquat_G13_M15_Text_0818BE14::
# 160 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "We like mixing stuff at the RECORD\nCORNER.\pBut what gets mixed up?$"

Naranja_IslaKumquat_G13_M15_Text_0818BE57::
# 164 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "We’re going to make super オカキクケS\nwith a BERRY BLENDER!$"

Naranja_IslaKumquat_G13_M15_Text_0818BE8E::
# 168 "data/maps/Naranja_IslaKumquat_G13_M15/scripts.pory"
	.string "I want to brag about how tough my\nPOKéMON is, so we’re going to enter a\lCONTEST together.$"
