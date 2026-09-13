Naranja_KumquatIsland_House3_MapScripts::
# 5 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_KumquatIsland_House3_OnTransition
	.byte 0


Naranja_KumquatIsland_House3_OnTransition::
# 9 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	random 4
# 10 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	end


Naranja_KumquatIsland_House3_EventScript_Woman2::
# 15 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	lock
# 16 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	faceplayer
# 17 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818B8CC, MSGBOX_YESNO
# 18 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159C1D
# 20 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818BA2B, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	closemessage
# 22 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	applymovement 32783, Naranja_RusturfTunnel_Movement_081A083D
# 23 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	waitmovement LOCALID_NONE
# 24 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_EventScript_Sub_08159C1D::
# 29 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818B9DC, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	closemessage
# 31 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	applymovement 32783, Naranja_RusturfTunnel_Movement_081A083D
# 32 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	waitmovement LOCALID_NONE
# 33 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_EventScript_Man1::
# 38 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	lock
# 39 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	faceplayer
# 40 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818BD64, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	closemessage
# 42 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	applymovement 32783, Naranja_RusturfTunnel_Movement_081A083D
# 43 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_EventScript_Boy5_4::
# 49 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	lock
# 50 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	faceplayer
# 51 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 52 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 53 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D19
# 54 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 55 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D23
# 56 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 57 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D2D
# 58 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 59 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D37
	end


Naranja_KumquatIsland_House3_EventScript_Boy5_2::
# 64 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	lock
# 65 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	faceplayer
# 66 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 67 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 68 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D19
# 69 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 70 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D23
# 71 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 72 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D2D
# 73 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 74 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D37
	end


Naranja_KumquatIsland_House3_EventScript_Boy5_3::
# 79 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	lock
# 80 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	faceplayer
# 81 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 82 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 83 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D19
# 84 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 85 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D23
# 86 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 87 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D2D
# 88 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 89 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D37
	end


Naranja_KumquatIsland_House3_EventScript_Boy5::
# 94 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	lock
# 95 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	faceplayer
# 96 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 97 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 98 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D19
# 99 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 100 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D23
# 101 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 102 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D2D
# 103 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 104 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_House3_EventScript_Sub_08159D37
	end


Naranja_KumquatIsland_House3_EventScript_Sub_08159D19::
# 109 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818BDDB, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_EventScript_Sub_08159D23::
# 115 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818BE14, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_EventScript_Sub_08159D2D::
# 121 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818BE57, MSGBOX_DEFAULT
# 122 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_EventScript_Sub_08159D37::
# 127 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	msgbox Naranja_KumquatIsland_House3_Text_0818BE8E, MSGBOX_DEFAULT
# 128 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	release
	end


Naranja_KumquatIsland_House3_Text_0818B8CC::
# 132 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "Oh, my, my! Are you traveling alone?\nBut you’re so young! Good for you!\pI’m sure my kids could learn a thing\nor two from you!\pMe? I’m a master of オカキクケS.\pIf I get serious just a little, why, I\ncan concoct great オカキクケS.\pWould you like to learn from me, a\nmaster of オカキクケS?$"

Naranja_KumquatIsland_House3_Text_0818B9DC::
# 136 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "Oh? Are you sure?\pYou shouldn’t always try to do\neverything by yourself, dear!$"

Naranja_KumquatIsland_House3_Text_0818BA2B::
# 140 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "Oh, good! You’re a smart soul!\nThis is a bit long, so listen up!\pAre you ready?\pIf you look at オカキクケS, you should see\nthat they are rated on how they feel.\pThe lower the feel rating,\nthe better it is. Don’t forget this!\pA good オカキクケ has a low feel\nrating and a high level.\pA POKéMON can eat more good\nオカキクケS than ordinary ones, too.\pAnd this is important.\pIf you want to make smooth オカキクケS,\nuse different kinds of BERRIES.\pDon’t be stingy - the kinds of BERRIES\naffect the smoothness of オカキクケS.\pAnd another thing.\pThe more people blending BERRIES, the\nsmoother the オカキクケS.\pThat’s why you should talk to other\npeople and make オカキクケS together.\pThat’s about all you need to know to\nmake good オカキクケS.\pIf everyone had POKéMON they love,\nsmooth オカキクケS, and a loving family,\lthe world would be a happier place.\pDon’t give up, dear!$"

Naranja_KumquatIsland_House3_Text_0818BD64::
# 144 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "When my wife gave birth to quadruplets,\nyou bet I was shocked.\pBut, now, seeing them play together,\nit makes me happy.$"

Naranja_KumquatIsland_House3_Text_0818BDDB::
# 148 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "We’re having MULTI BATTLES, but I know\nI’m going to win.$"

Naranja_KumquatIsland_House3_Text_0818BE14::
# 152 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "We like mixing stuff at the RECORD\nCORNER.\pBut what gets mixed up?$"

Naranja_KumquatIsland_House3_Text_0818BE57::
# 156 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "We’re going to make super オカキクケS\nwith a BERRY BLENDER!$"

Naranja_KumquatIsland_House3_Text_0818BE8E::
# 160 "data/maps/Naranja_KumquatIsland_House3/scripts.pory"
	.string "I want to brag about how tough my\nPOKéMON is, so we’re going to enter a\lCONTEST together.$"
