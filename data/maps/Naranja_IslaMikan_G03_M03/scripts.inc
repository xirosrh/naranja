Naranja_IslaMikan_G03_M03_MapScripts::
# 5 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMikan_G03_M03_OnTransition
	.byte 0


Naranja_IslaMikan_G03_M03_OnTransition::
# 9 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071
	end


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071::
# 14 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checktrainerflag 0x10A
# 15 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_081530AA
# 16 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153122
# 17 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 18 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 19 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_081530BA
# 20 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 21 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_081530B6
# 22 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 23 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_081530B2
# 24 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_081530AE
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530AA::
# 28 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setflashlevel 0
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530AE::
# 33 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setflashlevel 1
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530B2::
# 38 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setflashlevel 2
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530B6::
# 43 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setflashlevel 3
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530BA::
# 48 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setflashlevel 4
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530BE::
# 53 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153122
# 54 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	nop1
# 55 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_var VAR_0x8000, VAR_0x8001
# 56 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_081530F5
# 57 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 58 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 59 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_081530F6
# 60 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 61 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_08153101
# 62 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 63 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_0815310C
# 64 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_081530F5
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530F5::
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_081530F6::
# 72 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	playse SE_SWITCH
# 73 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	animateflash 3
# 74 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153101::
# 79 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	playse SE_SWITCH
# 80 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	animateflash 2
# 81 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_0815310C::
# 86 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	playse SE_SWITCH
# 87 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	animateflash 1
# 88 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153122::
# 93 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setvar VAR_0x8000, 0
# 94 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checktrainerflag 0xB3
# 95 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G03_M03_EventScript_Sub_08153135
# 96 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	addvar VAR_0x8000, 1
# 97 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_08153135
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153135::
# 101 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checktrainerflag 0x1A9
# 102 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G03_M03_EventScript_Sub_08153143
# 103 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	addvar VAR_0x8000, 1
# 104 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_08153143
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153143::
# 108 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checktrainerflag 0x1AA
# 109 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G03_M03_EventScript_Sub_08153151
# 110 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	addvar VAR_0x8000, 1
# 111 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_08153151
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153151::
	return


Naranja_IslaMikan_G03_M03_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId2::
# 119 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_ISLA_MIKAN_179, LOCALID_NONE, Naranja_IslaMikan_G03_M03_Text_08174F61, Naranja_IslaMikan_G03_M03_Text_08174F7A, Naranja_IslaMikan_G03_M03_EventScript_AfterBattle_081531F4
# 120 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08174F8E
# 121 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G03_M03_EventScript_AfterBattle_081531F4::
# 126 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_081530BE
# 127 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	release
	end


Naranja_IslaMikan_G03_M03_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 132 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_ISLA_MIKAN_425, LOCALID_NONE, Naranja_IslaMikan_G03_M03_Text_08174FCE, Naranja_IslaMikan_G03_M03_Text_08175009, Naranja_IslaMikan_G03_M03_EventScript_AfterBattle_08153216
# 133 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08175031
# 134 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G03_M03_EventScript_AfterBattle_08153216::
# 139 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_081530BE
# 140 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	release
	end


Naranja_IslaMikan_G03_M03_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId4::
# 145 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_ISLA_MIKAN_426, LOCALID_NONE, Naranja_IslaMikan_G03_M03_Text_081750C9, Naranja_IslaMikan_G03_M03_Text_08175104, Naranja_IslaMikan_G03_M03_EventScript_AfterBattle_08153238
# 146 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08175117
# 147 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G03_M03_EventScript_AfterBattle_08153238::
# 152 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_081530BE
# 153 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	release
	end


Naranja_IslaMikan_G03_M03_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId5::
# 158 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	lock
# 159 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	faceplayer
# 160 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_04B4
# 161 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_08153254
# 162 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08174D98
# 163 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 4
# 164 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	release
	end


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153254::
# 169 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08174F1E
# 170 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 4
# 171 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	release
	end


Naranja_IslaMikan_G03_M03_EventScript_Sign_1::
# 176 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	lockall
# 177 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 178 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_0815327E
# 179 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_08153288
	return


Naranja_IslaMikan_G03_M03_EventScript_Sign_4::
# 183 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	lockall
# 184 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 185 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G03_M03_EventScript_Sub_0815327E
# 186 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	goto Naranja_IslaMikan_G03_M03_EventScript_Sub_08153288
	return


Naranja_IslaMikan_G03_M03_EventScript_Sub_0815327E::
# 190 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08175490
# 191 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 4
# 192 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G03_M03_EventScript_Sub_08153288::
# 197 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_08175477
# 198 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 4
# 199 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	releaseall
	end


Naranja_IslaMikan_G03_M03_EventScript_OBJ_EVENT_GFX_MR_BRINEYS_BOAT_LocalId1::
# 204 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	lock
# 205 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G03_M03_MR_BRINEYS_BOAT
# 206 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	clearflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN
# 207 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	loadword 0, Naranja_IslaMikan_G03_M03_Text_0817BCB1
# 208 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	callstd 6
	end


Naranja_IslaMikan_G03_M03_Text_08174D98::
# 212 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Hey, how’s it going, CHAMPION-\nbound {PLAYER}?\pDEWFORD’s GYM LEADER BRAWLY commands\nFIGHTING-type POKéMON.\pGoing against him with NORMAL-type\nPOKéMON is asking for trouble.\pFIGHTING POKéMON will lay a serious\nsmack down on NORMAL POKéMON,\lso be careful!\pWhat’s worse, the GYM is as dark as\nthe ocean floor.\pBut it will get brighter after defeating\nthe TRAINERS in your way.\pHey, okay, go for it!$"

Naranja_IslaMikan_G03_M03_Text_08174F1E::
# 216 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Whoah! It’s turned too bright in here!\pYour future is bright, too!$"

Naranja_IslaMikan_G03_M03_Text_08174F61::
# 220 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Might is right!\nCome on!$"

Naranja_IslaMikan_G03_M03_Text_08174F7A::
# 224 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Not enough power...$"

Naranja_IslaMikan_G03_M03_Text_08174F8E::
# 228 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Your skill overcame my strength!\nYour technique is commendable!$"

Naranja_IslaMikan_G03_M03_Text_08174FCE::
# 232 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "There’s no need for BRAWLY to be\ninvolved!\pI’ll crush you!$"

Naranja_IslaMikan_G03_M03_Text_08175009::
# 236 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "But... How?\nHow could I lose so easily?$"

Naranja_IslaMikan_G03_M03_Text_08175031::
# 240 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "I’m not going to waste this loss.\nI’ll use it to motivate me to train!\pOne day I’ll become a GYM LEADER...\pNo, I’ll become the POKéMON LEAGUE\nCHAMPION!$"

Naranja_IslaMikan_G03_M03_Text_081750C9::
# 244 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Don’t you dare brush me off!\nIt’s not my fault if you cry!$"

Naranja_IslaMikan_G03_M03_Text_08175104::
# 248 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "Waaaaaaah!\nI lost!$"

Naranja_IslaMikan_G03_M03_Text_08175117::
# 252 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "I battle in the dark to make my heart\nstronger.\pBut because it’s so dark, I can never\nsee BRAWLY’s face...$"

Naranja_IslaMikan_G03_M03_Text_08175477::
# 256 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"

Naranja_IslaMikan_G03_M03_Text_08175490::
# 260 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\pBRAWLY’S CERTIFIED TRAINERS:\n{PLAYER}$"

Naranja_IslaMikan_G03_M03_Text_0817BCB1::
# 264 "data/maps/Naranja_IslaMikan_G03_M03/scripts.pory"
	.string "¡Vaya! Tu Lapras es rápido,\nte mereces un combate,\lespérame en mi gimnasio.$"
