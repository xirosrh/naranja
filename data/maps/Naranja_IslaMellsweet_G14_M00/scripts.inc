Naranja_IslaMellsweet_G14_M00_MapScripts::
# 5 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaMellsweet_G14_M00_OnLoad
	.byte 0


Naranja_IslaMellsweet_G14_M00_OnLoad::
# 9 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 10 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A510
# 11 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A4E8
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A4E8::
# 15 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 16 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A528
# 17 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A4F7
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A4F7::
# 21 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 22 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A540
# 23 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A506
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A506::
# 27 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 28 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A558
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A510::
# 33 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 5, 0x204, 0
# 34 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 2, 7, 0x239, 1
# 35 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A4E8
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A528::
# 39 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xE, 0x204, 0
# 40 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xA, 0x239, 1
# 41 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A4F7
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A540::
# 45 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0xF, 0x11, 0x20C, 0
# 46 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0x11, 0xF, 0x239, 1
# 47 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A506
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A558::
# 51 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 1, 0x17, 0x20D, 0
# 52 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 0x18, 0x239, 1
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_TATE_LocalId1::
# 57 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, TRAINER_NARANJA_ISLA_MELLSWEET_271, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818CF02, Naranja_IslaMellsweet_G14_M00_Text_0818D077, Naranja_IslaMellsweet_G14_M00_Text_0818D324, Naranja_IslaMellsweet_G14_M00_EventScript_AfterBattle_0815A594
# 58 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00AB
# 59 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A5C6
# 60 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818D273
# 61 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 62 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_AfterBattle_0815A594::
# 67 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	message Naranja_IslaMellsweet_G14_M00_Text_0818D0F9
# 68 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmessage
# 69 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 70 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818D128
# 71 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_04CD
# 73 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 74 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_HIDE_VALN_TANG_G09_M00_OLD_MAN_1
# 75 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0393
# 76 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setvar VAR_0x8008, 7
# 77 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 78 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_BEAUTY
# 79 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A5C6
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A5C6::
# 83 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x124
# 84 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 85 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 0
# 86 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 87 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 88 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818D1CF
# 89 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00AB
# 91 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_1::
# 96 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 97 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 98 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A621
# 99 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 100 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 101 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 102 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 5, 0x204, 0
# 103 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 2, 7, 0x239, 1
# 104 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619::
# 108 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	special DrawWholeMapView
# 109 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	playse SE_CLICK
# 110 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A621::
# 115 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 116 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 117 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 118 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 5, 0x20C, 0
# 119 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 2, 7, 0x238, 1
# 120 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_2::
# 124 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 125 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 126 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A675
# 127 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 128 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 129 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 130 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xE, 0x204, 0
# 131 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xA, 0x239, 1
# 132 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A675::
# 136 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 137 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 138 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 139 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xE, 0x205, 0
# 140 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xA, 0x238, 1
# 141 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_3::
# 145 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 146 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 147 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A6C9
# 148 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 149 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 150 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 151 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0xF, 0x11, 0x20C, 0
# 152 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0x11, 0xF, 0x239, 1
# 153 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A6C9::
# 157 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 158 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 159 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 160 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0xF, 0x11, 0x204, 0
# 161 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0x11, 0xF, 0x238, 1
# 162 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_4::
# 166 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 167 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 168 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A71D
# 169 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 170 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 171 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 172 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 1, 0x17, 0x20D, 0
# 173 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 0x18, 0x239, 1
# 174 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A71D::
# 178 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 179 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 180 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 181 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 1, 0x17, 0x204, 0
# 182 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 0x18, 0x238, 1
# 183 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Trigger_1::
# 187 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 188 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	warpteleport MAP_NARANJA_ISLA_MELLSWEET_G14_M00, 0xFF, 0xE, 0x1D
# 189 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitstate
# 190 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId2::
# 195 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MELLSWEET_233, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818C96A, Naranja_IslaMellsweet_G14_M00_Text_0818C9BA
# 196 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818C9E1
# 197 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 6
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId6::
# 202 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MELLSWEET_234, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818CA10, Naranja_IslaMellsweet_G14_M00_Text_0818CA28
# 203 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818CA48
# 204 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 6
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId3::
# 209 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MELLSWEET_235, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818CAC0, Naranja_IslaMellsweet_G14_M00_Text_0818CB46
# 210 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818CB77
# 211 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 6
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId7::
# 216 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MELLSWEET_244, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818CC1E, Naranja_IslaMellsweet_G14_M00_Text_0818CC83
# 217 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818CC9B
# 218 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 6
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId5::
# 223 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MELLSWEET_245, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818CD14, Naranja_IslaMellsweet_G14_M00_Text_0818CD66
# 224 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818CD73
# 225 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 6
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId4::
# 230 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_MELLSWEET_246, LOCALID_NONE, Naranja_IslaMellsweet_G14_M00_Text_0818CDE0, Naranja_IslaMellsweet_G14_M00_Text_0818CE47
# 231 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818CE6C
# 232 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 6
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId8::
# 237 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lock
# 238 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	faceplayer
# 239 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_04CD
# 240 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A7ED
# 241 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818C7E3
# 242 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 243 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A7ED::
# 248 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818C938
# 249 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 250 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_5::
# 255 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 256 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 257 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A81A
# 258 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A824
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_6::
# 262 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 263 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 264 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A81A
# 265 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A824
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A81A::
# 269 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818D424
# 270 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 271 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A824::
# 276 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M00_Text_0818D40A
# 277 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 4
# 278 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


# 282 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7:
# 283 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	delay_16
# 284 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	delay_16
	step_end

Naranja_IslaMellsweet_G14_M00_Text_0818C7E3::
# 287 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Yo, how’s it going, CHAMPION-bound\n{PLAYER}?\pThe GYM LEADERS here use PSYCHIC-type\nPOKéMON.\pIf you go up against them with\nFIGHTING- or POISON-type POKéMON,\lthey’ll inflict horrible damage!\pPlus, they’ll come at you with\noutstanding combination attacks.\pIf you want to win, you’ll need to show\nthem how tight you are with your\lPOKéMON. Go for it!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C938::
# 291 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Wow, you’re astounding!\nYou’re one great TRAINER!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C96A::
# 295 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Battles hinge on the strength of your\nspirit! The weak-spirited will never win!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C9BA::
# 299 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I lost! I must temper my spirit again!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C9E1::
# 303 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "The indecisive lose.\nThat’s my warning to you.$"

Naranja_IslaMellsweet_G14_M00_Text_0818CA10::
# 307 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Let me see your talent!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CA28::
# 311 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You possess spectacular talent!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CA48::
# 315 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "If there are prodigies in the world,\nthen our GYM LEADERS are them!\pHowever, you may be even more talented\nthan them...$"

Naranja_IslaMellsweet_G14_M00_Text_0818CAC0::
# 319 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Fufufufu... Watch me levitate a POKé\nBALL telekinetically!\pWrooooooooaaaar!\n... ... ... ... ... ... ...\pSometimes, I’m out of sync...$"

Naranja_IslaMellsweet_G14_M00_Text_0818CB46::
# 323 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "My POKéMON battling skills are out\nof sync, too!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CB77::
# 327 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "A POKé BALL was too heavy to lift\npsychically. But this dust bunny...\pWhoooooooooooooooh!\n... ... ... ... ... ...\pNo, I’m not cheating!\nI didn’t blow on it! Honestly!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CC1E::
# 331 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "When you lose to me, don’t be too hard\non yourself.\pIt’s not that you’re weak - I’m just\ntoo strong!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CC83::
# 335 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You’re just too strong!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CC9B::
# 339 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I’m not going to get down on myself for\nlosing. I just need to train harder.\pPositive thinking - that’s my strong\npoint!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CD14::
# 343 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I see it...\nI see your future...\pIf you can beat me, I will tell you\nyour future!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CD66::
# 347 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I surrender!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CD73::
# 351 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You will wage a terrifically intense\nbattle with our GYM LEADERS...\pThe result...\nYou won’t hear it from me!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CDE0::
# 355 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "The roads you have traveled...\nWhat you have experienced...\pCome at me with everything you’ve\nlearned!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CE47::
# 359 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You’ve traveled a path of greatness!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CE6C::
# 363 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "A bright future awaits those who have\nworked diligently.\pFor those who lazed idly, there is\nonly despair at the end.\pWhat goes around comes around...$"

Naranja_IslaMellsweet_G14_M00_Text_0818CF02::
# 367 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: Hehehe... Were you surprised?\pLIZA: Fufufu... Were you surprised?\pTATE: That there are two GYM LEADERS?\nLIZA: That there are two GYM LEADERS?\pTATE: We’re twins!\nLIZA: We’re twins!\pTATE: We don’t need to talk because...\nLIZA: We can each determine what...\pTATE: The other is thinking...\nLIZA: All in our minds!\pTATE: This combination of ours...\nLIZA: Can you beat it?$"

Naranja_IslaMellsweet_G14_M00_Text_0818D077::
# 371 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: What?! Our combination...\nLIZA: Was shattered!\pTATE: It can’t be helped. You’ve won...\nLIZA: So, in recognition, take this.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D0F9::
# 375 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\nfrom LIZA and TATE.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D128::
# 379 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\nSP. ATK and SP. DEF of POKéMON.\pLIZA: It also lets you use the HM move\nDIVE outside of battle.\pTATE: You should also take this, too.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D1CF::
# 383 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: That TM04 contains...\nLIZA: CALM MIND!\pTATE: It raises SP. ATK and...\nLIZA: It raises SP. DEF!\pTATE: It’s a move that’s perfect...\nLIZA: For PSYCHIC POKéMON!$"

Naranja_IslaMellsweet_G14_M00_Text_0818D273::
# 387 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: Looks like the bond between you\nand your POKéMON is far stronger than\lthe bond that we share as twins.\pLIZA: You will become even stronger!\nWe’ve battled you, so we know.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D324::
# 391 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: Hehehe... Were you surprised?\pLIZA: That there are two GYM LEADERS?\pTATE: Oops, you have only one...\nLIZA: POKéMON that can battle.\pTATE: We can’t battle that way!\pLIZA: If you want to challenge us,\nbring some more POKéMON.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D40A::
# 395 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"

Naranja_IslaMellsweet_G14_M00_Text_0818D424::
# 399 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\pLIZA AND TATE’S CERTIFIED TRAINERS:\n{PLAYER}$"
