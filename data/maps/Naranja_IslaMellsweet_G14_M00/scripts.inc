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
	trainerbattle_double TRAINER_NARANJA_ISLA_MELLSWEET_271, Naranja_IslaMellsweet_G14_M00_Text_0818CF02, Naranja_IslaMellsweet_G14_M00_Text_0818D077, Naranja_IslaMellsweet_G14_M00_Text_0818D324, Naranja_IslaMellsweet_G14_M00_EventScript_AfterBattle_0815A594, NO_MUSIC
# 58 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00AB
# 59 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A5C6
# 60 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818D273, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_AfterBattle_0815A594::
# 66 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	message Naranja_IslaMellsweet_G14_M00_Text_0818D0F9
# 67 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmessage
# 68 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 69 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818D128, MSGBOX_DEFAULT
# 70 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_04CD
# 71 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 72 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_HIDE_VALN_TANG_G09_M00_OLD_MAN_1
# 73 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0393
# 74 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setvar VAR_0x8008, 7
# 75 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 76 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M08_BEAUTY
# 77 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A5C6
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A5C6::
# 81 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x124
# 82 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 83 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	callstd 0
# 84 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 85 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 86 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818D1CF, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_00AB
# 88 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_1::
# 93 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 94 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 95 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A621
# 96 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 97 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 98 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 5, 0x204, 0
# 100 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 2, 7, 0x239, 1
# 101 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619::
# 105 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	playse SE_CLICK
# 107 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A621::
# 112 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0064
# 113 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 114 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 115 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 5, 0x20C, 0
# 116 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 2, 7, 0x238, 1
# 117 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_2::
# 121 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 122 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 123 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A675
# 124 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 125 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 126 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 127 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xE, 0x204, 0
# 128 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xA, 0x239, 1
# 129 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A675::
# 133 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0065
# 134 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 135 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 136 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xE, 0x205, 0
# 137 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 8, 0xA, 0x238, 1
# 138 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_3::
# 142 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 143 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 144 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A6C9
# 145 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 146 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 147 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 148 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0xF, 0x11, 0x20C, 0
# 149 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0x11, 0xF, 0x239, 1
# 150 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A6C9::
# 154 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0066
# 155 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 156 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 157 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0xF, 0x11, 0x204, 0
# 158 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 0x11, 0xF, 0x238, 1
# 159 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_4::
# 163 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 164 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 165 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A71D
# 166 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 167 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 168 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 169 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 1, 0x17, 0x20D, 0
# 170 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 0x18, 0x239, 1
# 171 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A71D::
# 175 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_0067
# 176 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7
# 177 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 178 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 1, 0x17, 0x204, 0
# 179 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	setmetatile 5, 0x18, 0x238, 1
# 180 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A619
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Trigger_1::
# 184 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 185 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	warpteleport MAP_NARANJA_ISLA_MELLSWEET_G14_M00, 0xFF, 0xE, 0x1D
# 186 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	waitstate
# 187 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId2::
# 192 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MELLSWEET_233, Naranja_IslaMellsweet_G14_M00_Text_0818C96A, Naranja_IslaMellsweet_G14_M00_Text_0818C9BA
# 193 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818C9E1, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId6::
# 198 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MELLSWEET_234, Naranja_IslaMellsweet_G14_M00_Text_0818CA10, Naranja_IslaMellsweet_G14_M00_Text_0818CA28
# 199 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818CA48, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId3::
# 204 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MELLSWEET_235, Naranja_IslaMellsweet_G14_M00_Text_0818CAC0, Naranja_IslaMellsweet_G14_M00_Text_0818CB46
# 205 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818CB77, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId7::
# 210 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MELLSWEET_244, Naranja_IslaMellsweet_G14_M00_Text_0818CC1E, Naranja_IslaMellsweet_G14_M00_Text_0818CC83
# 211 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818CC9B, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId5::
# 216 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MELLSWEET_245, Naranja_IslaMellsweet_G14_M00_Text_0818CD14, Naranja_IslaMellsweet_G14_M00_Text_0818CD66
# 217 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818CD73, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_LASS_LocalId4::
# 222 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MELLSWEET_246, Naranja_IslaMellsweet_G14_M00_Text_0818CDE0, Naranja_IslaMellsweet_G14_M00_Text_0818CE47
# 223 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818CE6C, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMellsweet_G14_M00_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId8::
# 228 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lock
# 229 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	faceplayer
# 230 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_04CD
# 231 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A7ED
# 232 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818C7E3, MSGBOX_DEFAULT
# 233 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A7ED::
# 238 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818C938, MSGBOX_DEFAULT
# 239 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_5::
# 244 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 245 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 246 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A81A
# 247 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A824
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sign_6::
# 251 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	lockall
# 252 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 253 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A81A
# 254 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	goto Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A824
	return


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A81A::
# 258 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818D424, MSGBOX_DEFAULT
# 259 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M00_EventScript_Sub_0815A824::
# 264 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M00_Text_0818D40A, MSGBOX_DEFAULT
# 265 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	releaseall
	end


# 269 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
Naranja_IslaMellsweet_G14_M00_Movement_0815A7F7:
# 270 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	delay_16
# 271 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	delay_16
	step_end

Naranja_IslaMellsweet_G14_M00_Text_0818C7E3::
# 274 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Yo, how’s it going, CHAMPION-bound\n{PLAYER}?\pThe GYM LEADERS here use PSYCHIC-type\nPOKéMON.\pIf you go up against them with\nFIGHTING- or POISON-type POKéMON,\lthey’ll inflict horrible damage!\pPlus, they’ll come at you with\noutstanding combination attacks.\pIf you want to win, you’ll need to show\nthem how tight you are with your\lPOKéMON. Go for it!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C938::
# 278 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Wow, you’re astounding!\nYou’re one great TRAINER!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C96A::
# 282 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Battles hinge on the strength of your\nspirit! The weak-spirited will never win!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C9BA::
# 286 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I lost! I must temper my spirit again!$"

Naranja_IslaMellsweet_G14_M00_Text_0818C9E1::
# 290 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "The indecisive lose.\nThat’s my warning to you.$"

Naranja_IslaMellsweet_G14_M00_Text_0818CA10::
# 294 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Let me see your talent!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CA28::
# 298 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You possess spectacular talent!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CA48::
# 302 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "If there are prodigies in the world,\nthen our GYM LEADERS are them!\pHowever, you may be even more talented\nthan them...$"

Naranja_IslaMellsweet_G14_M00_Text_0818CAC0::
# 306 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "Fufufufu... Watch me levitate a POKé\nBALL telekinetically!\pWrooooooooaaaar!\n... ... ... ... ... ... ...\pSometimes, I’m out of sync...$"

Naranja_IslaMellsweet_G14_M00_Text_0818CB46::
# 310 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "My POKéMON battling skills are out\nof sync, too!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CB77::
# 314 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "A POKé BALL was too heavy to lift\npsychically. But this dust bunny...\pWhoooooooooooooooh!\n... ... ... ... ... ...\pNo, I’m not cheating!\nI didn’t blow on it! Honestly!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CC1E::
# 318 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "When you lose to me, don’t be too hard\non yourself.\pIt’s not that you’re weak - I’m just\ntoo strong!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CC83::
# 322 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You’re just too strong!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CC9B::
# 326 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I’m not going to get down on myself for\nlosing. I just need to train harder.\pPositive thinking - that’s my strong\npoint!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CD14::
# 330 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I see it...\nI see your future...\pIf you can beat me, I will tell you\nyour future!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CD66::
# 334 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "I surrender!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CD73::
# 338 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You will wage a terrifically intense\nbattle with our GYM LEADERS...\pThe result...\nYou won’t hear it from me!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CDE0::
# 342 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "The roads you have traveled...\nWhat you have experienced...\pCome at me with everything you’ve\nlearned!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CE47::
# 346 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "You’ve traveled a path of greatness!$"

Naranja_IslaMellsweet_G14_M00_Text_0818CE6C::
# 350 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "A bright future awaits those who have\nworked diligently.\pFor those who lazed idly, there is\nonly despair at the end.\pWhat goes around comes around...$"

Naranja_IslaMellsweet_G14_M00_Text_0818CF02::
# 354 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: Hehehe... Were you surprised?\pLIZA: Fufufu... Were you surprised?\pTATE: That there are two GYM LEADERS?\nLIZA: That there are two GYM LEADERS?\pTATE: We’re twins!\nLIZA: We’re twins!\pTATE: We don’t need to talk because...\nLIZA: We can each determine what...\pTATE: The other is thinking...\nLIZA: All in our minds!\pTATE: This combination of ours...\nLIZA: Can you beat it?$"

Naranja_IslaMellsweet_G14_M00_Text_0818D077::
# 358 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: What?! Our combination...\nLIZA: Was shattered!\pTATE: It can’t be helped. You’ve won...\nLIZA: So, in recognition, take this.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D0F9::
# 362 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\nfrom LIZA and TATE.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D128::
# 366 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\nSP. ATK and SP. DEF of POKéMON.\pLIZA: It also lets you use the HM move\nDIVE outside of battle.\pTATE: You should also take this, too.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D1CF::
# 370 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: That TM04 contains...\nLIZA: CALM MIND!\pTATE: It raises SP. ATK and...\nLIZA: It raises SP. DEF!\pTATE: It’s a move that’s perfect...\nLIZA: For PSYCHIC POKéMON!$"

Naranja_IslaMellsweet_G14_M00_Text_0818D273::
# 374 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: Looks like the bond between you\nand your POKéMON is far stronger than\lthe bond that we share as twins.\pLIZA: You will become even stronger!\nWe’ve battled you, so we know.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D324::
# 378 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "TATE: Hehehe... Were you surprised?\pLIZA: That there are two GYM LEADERS?\pTATE: Oops, you have only one...\nLIZA: POKéMON that can battle.\pTATE: We can’t battle that way!\pLIZA: If you want to challenge us,\nbring some more POKéMON.$"

Naranja_IslaMellsweet_G14_M00_Text_0818D40A::
# 382 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"

Naranja_IslaMellsweet_G14_M00_Text_0818D424::
# 386 "data/maps/Naranja_IslaMellsweet_G14_M00/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\pLIZA AND TATE’S CERTIFIED TRAINERS:\n{PLAYER}$"
