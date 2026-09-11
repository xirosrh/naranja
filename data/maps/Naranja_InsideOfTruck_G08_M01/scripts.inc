Naranja_InsideOfTruck_G08_M01_MapScripts::
	.byte 0


Naranja_InsideOfTruck_G08_M01_EventScript_Trigger_2::
# 8 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 9 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 10 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 11 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 12 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151004
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Trigger_1::
# 16 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 17 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 2
# 18 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 19 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 20 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_08151069
# 21 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151004
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151004::
# 26 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playse SE_LEDGE
# 27 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_0815106D
# 28 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay 0x1E
# 30 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_086BF602
# 31 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 33 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 34 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151048
# 35 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 36 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151053
# 37 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 38 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815105E
# 39 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_STORY_STATE, 1
# 40 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN
# 41 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151048::
# 46 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_08151071
# 47 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151053::
# 52 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_0815107C
# 53 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815105E::
# 58 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_08151086
# 59 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08153103::
# 64 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 65 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	animateflash 2
# 66 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071
	return


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_BRAWLY_LocalId8::
# 71 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_NARANJA_INSIDE_OF_TRUCK_268, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_08175182, Naranja_InsideOfTruck_G08_M01_Text_08175246, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_081565DB
# 72 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A6
# 73 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081531B5
# 74 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08175412
# 75 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08153177::
# 81 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08153103
# 82 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	message Naranja_InsideOfTruck_G08_M01_Text_086BEDB0
# 83 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmessage
# 84 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 85 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08180DDA
# 86 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_04B4
# 88 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 89 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	addvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 90 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 91 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB
# 92 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 2
# 93 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 94 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081531B5
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081531B5::
# 98 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x41
# 99 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 100 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 101 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 102 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 103 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_086BFB30
# 104 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 105 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A7
# 106 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081544ED::
# 111 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 1
# 112 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F9A
# 113 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FBB
# 114 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FDC
# 115 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FFD
# 116 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815501E
# 117 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815503F
# 118 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155060
# 119 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155081
	return


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_NORMAN_LocalId1::
# 124 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lock
# 125 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	faceplayer
# 126 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2
# 127 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 128 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154907
# 129 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 130 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154911
# 131 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 132 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815491B
# 133 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 134 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154925
# 135 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 136 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549D6
# 137 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 138 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493D
# 139 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08179DF6
# 140 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 141 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 142 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 143 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 144 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815463D
# 145 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 146 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154648
# 147 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 148 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154653
# 149 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 150 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815465E
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815463D::
# 155 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 0
# 156 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154648::
# 160 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 161 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154653::
# 165 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 2
# 166 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815465E::
# 170 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 3
# 171 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669::
# 175 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	addobject LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY
# 176 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playse SE_DOOR
# 177 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 178 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081547EE
# 179 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 180 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154800
# 181 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 182 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815481C
# 183 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 184 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815481C
# 185 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08179F07
# 186 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 187 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08179F37
# 188 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 189 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08179F70
# 190 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 191 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A03A
# 192 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 193 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 194 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154884
# 195 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 196 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815488F
# 197 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 198 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548A1
# 199 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 200 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548B3
# 201 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A04A
# 202 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 203 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 204 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548C5
# 205 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 206 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548D0
# 207 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 208 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548DB
# 209 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 210 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548E6
# 211 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A0A8
# 212 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 213 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A0EB
# 214 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 215 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A156
# 216 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 217 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 218 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815492F
# 219 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 220 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154930
# 221 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 222 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493B
# 223 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 224 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493C
# 225 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 226 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1
# 227 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 228 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548FC
# 229 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 230 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1
# 231 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 232 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1
# 233 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A171
# 234 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 235 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 236 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_4001
# 237 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 238 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 239 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154835
# 240 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 241 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815484E
# 242 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 243 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154860
# 244 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 245 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154872
# 246 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY
# 247 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02D8
# 248 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 249 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_VALENCIA_STORY_STATE, 2
# 250 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02D6
# 251 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_WALLY
# 252 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH_2
# 253 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special InitBirchState
# 254 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	warp MAP_NARANJA_ISLA_VALENCIA_G00_M00, 0xFF, 0xF, 8
# 255 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitstate
# 256 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081547EE::
# 261 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 262 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B27
# 263 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154800::
# 268 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B1D
# 269 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 270 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 271 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 272 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815481C::
# 277 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 278 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 279 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B27
# 280 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154835::
# 285 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 286 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B3E
# 287 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B4D
# 288 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815484E::
# 293 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B2E
# 294 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B45
# 295 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154860::
# 300 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B3E
# 301 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B57
# 302 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154872::
# 307 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B36
# 308 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B5F
# 309 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154884::
# 314 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 315 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815488F::
# 320 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 321 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 322 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548A1::
# 327 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 328 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 329 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548B3::
# 334 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 335 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 336 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548C5::
# 341 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 342 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548D0::
# 347 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 348 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548DB::
# 353 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 354 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548E6::
# 359 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 360 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1::
# 365 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 366 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548FC::
# 371 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 372 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154907::
# 377 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A41E
# 378 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 379 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154911::
# 384 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A518
# 385 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 386 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815491B::
# 391 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A5F3
# 392 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 393 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154925::
# 398 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A5F3
# 399 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 400 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815492F::
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154930::
# 409 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 410 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493B::
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493C::
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493D::
# 423 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154969
# 424 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 425 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B8
# 426 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A9
# 427 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154A2C
# 428 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 429 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B69
# 430 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AA6B
# 431 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 432 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154969::
# 437 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 438 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 439 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 440 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY, 1
# 441 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 442 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 443 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY, 1
# 444 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 445 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 446 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_ENIGMA_BERRY_AVAILABLE, 0
# 447 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 448 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_081C5570
# 449 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 450 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2::
# 455 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_RESULT, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B8::
# 460 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xAF
# 461 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 462 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 463 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 464 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 465 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 466 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549D6::
# 471 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A653
# 472 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 473 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_INSIDE_OF_TRUCK_269, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817A77A
# 474 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	message Naranja_InsideOfTruck_G08_M01_Text_0817A7DD
# 475 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmessage
# 476 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 477 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A805
# 478 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 479 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 480 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 7
# 481 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 482 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0424
# 483 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARIN_G10_M00_WATTSON
# 484 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARIN_G00_M02_WATTSON
# 485 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 5
# 486 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 487 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_7ISLAS_POMELO_G03_M04_MANIAC
# 488 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081544ED
# 489 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 490 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154A2C
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154A2C::
# 494 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14A
# 495 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 496 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 497 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 498 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 499 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A9
# 500 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A8CF
# 501 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 502 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A976
# 503 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 504 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 505 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 506 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ABC
# 507 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 508 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AC7
# 509 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 510 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AD2
# 511 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 512 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ADD
# 513 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay 0x46
# 514 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 515 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AE8
# 516 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 517 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AF3
# 518 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 519 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AFE
# 520 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 521 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B09
# 522 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A9F6
# 523 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 524 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ABC::
# 529 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 530 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AC7::
# 535 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 536 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AD2::
# 541 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 542 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ADD::
# 547 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 548 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AE8::
# 553 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 554 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AF3::
# 559 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 560 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AFE::
# 565 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 566 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B09::
# 571 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 572 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B69::
# 577 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AB17
# 578 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 579 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_1::
# 584 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 585 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 586 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 587 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 588 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x55
# 589 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B870
# 590 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 591 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 592 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 593 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 594 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8::
# 599 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 600 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay 0x1E
# 601 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	warpdoor MAP_NARANJA_INSIDE_OF_TRUCK_G08_M01, 0xFF, 0x8008, 0x8009
# 602 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitstate
# 603 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7::
# 608 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9::
# 613 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B844
# 614 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 615 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_2::
# 620 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 621 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 622 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 623 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 624 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x62
# 625 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B8D4
# 626 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 627 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 628 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 629 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 630 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_3::
# 635 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 636 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x47
# 637 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 638 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 639 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x2E
# 640 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B90F
# 641 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 642 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 643 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 644 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 645 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_4::
# 650 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 651 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x47
# 652 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 653 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 654 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x3B
# 655 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B950
# 656 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 657 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 658 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 659 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 660 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_5::
# 665 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 666 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x59
# 667 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 668 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 669 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x3B
# 670 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B950
# 671 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 672 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 673 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 674 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 675 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_6::
# 680 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 681 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x59
# 682 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 683 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 684 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x48
# 685 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B98A
# 686 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 687 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 688 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 689 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 690 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_9::
# 695 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 696 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x5A
# 697 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 698 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 699 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x21
# 700 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817BA00
# 701 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 702 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 703 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 704 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 705 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_10::
# 710 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 711 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x49
# 712 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 713 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 714 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x21
# 715 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817BA00
# 716 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 5
# 717 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 718 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 719 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 720 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 725 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_071, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817ADA5, Naranja_InsideOfTruck_G08_M01_Text_0817AE11, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E1A
# 726 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 727 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E29
# 728 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AE30
# 729 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 6
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E1A::
# 734 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 735 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FBB
# 736 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 737 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E29::
# 742 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AEBB
# 743 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 2
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId4::
# 748 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_072, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817AF5A, Naranja_InsideOfTruck_G08_M01_Text_0817AF98, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E56
# 749 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 750 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E65
# 751 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AFD3
# 752 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 6
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E56::
# 757 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 758 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FFD
# 759 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 760 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E65::
# 765 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B016
# 766 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 2
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId6::
# 771 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_073, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B058, Naranja_InsideOfTruck_G08_M01_Text_0817B0F7, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E92
# 772 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 773 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154EA1
# 774 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B12C
# 775 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 6
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E92::
# 780 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 781 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815503F
# 782 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 783 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154EA1::
# 788 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B1F4
# 789 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 2
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 794 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_089, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B3F7, Naranja_InsideOfTruck_G08_M01_Text_0817B454, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F0A
# 795 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 796 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F19
# 797 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B46F
# 798 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 6
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F0A::
# 803 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 804 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FDC
# 805 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 806 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F19::
# 811 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B521
# 812 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 2
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId5::
# 817 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_090, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B58D, Naranja_InsideOfTruck_G08_M01_Text_0817B5CB, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F46
# 818 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 819 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F55
# 820 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B5EA
# 821 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 6
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F46::
# 826 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 827 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815501E
# 828 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 829 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F55::
# 834 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B6B5
# 835 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 2
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId7::
# 840 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_091, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B6D4, Naranja_InsideOfTruck_G08_M01_Text_0817B732, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F82
# 841 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 842 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F91
# 843 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B749
# 844 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 6
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F82::
# 849 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 850 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155060
# 851 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 852 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F91::
# 857 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817B7C0
# 858 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 2
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F9A::
# 863 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 1
# 864 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 865 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 866 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 867 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 868 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550A2
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FBB::
# 873 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 2
# 874 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 875 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 876 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 877 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 878 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550C7
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FDC::
# 883 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 3
# 884 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 885 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 886 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 887 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 888 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550EC
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FFD::
# 893 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 4
# 894 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 895 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 896 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 897 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 898 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155111
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815501E::
# 903 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 5
# 904 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 905 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 906 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 907 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 908 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155124
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815503F::
# 913 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 6
# 914 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 915 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 916 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 917 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 918 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155149
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155060::
# 923 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 7
# 924 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 925 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 926 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 927 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 928 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815515C
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155081::
# 933 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 8
# 934 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 935 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 936 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 937 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 938 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815516F
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550A2::
# 943 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x55, 0x210, 0
# 944 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x55, 0x211, 0
# 945 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x62, 0x210, 0
# 946 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x62, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550C7::
# 951 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x2E, 0x210, 0
# 952 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x2E, 0x211, 0
# 953 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x3B, 0x210, 0
# 954 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x3B, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550EC::
# 959 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x3B, 0x210, 0
# 960 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x3B, 0x211, 0
# 961 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x48, 0x210, 0
# 962 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x48, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155111::
# 967 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x14, 0x210, 0
# 968 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x14, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155124::
# 973 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x14, 0x210, 0
# 974 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x14, 0x211, 0
# 975 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x21, 0x210, 0
# 976 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x21, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155149::
# 981 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x21, 0x210, 0
# 982 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x21, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815515C::
# 987 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 7, 0x210, 0
# 988 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 7, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815516F::
# 993 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 7, 0x210, 0
# 994 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 7, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182::
# 999 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1000 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitstate
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187::
# 1005 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special PetalburgGymUnlockRoomDoors
	return


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId9::
# 1010 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lock
# 1011 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	faceplayer
# 1012 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 1013 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551A0
# 1014 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AB96
# 1015 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1016 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551A0::
# 1021 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817AD49
# 1022 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1023 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_13::
# 1028 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 1029 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 1030 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551CA
# 1031 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551D4
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_14::
# 1035 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 1036 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 1037 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551CA
# 1038 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551D4
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551CA::
# 1042 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817BAC0
# 1043 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1044 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551D4::
# 1049 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817BAA5
# 1050 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1051 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_HOT_SPRINGS_OLD_WOMAN_LocalId19::
# 1056 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_NARANJA_INSIDE_OF_TRUCK_267, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_08180C32, Naranja_InsideOfTruck_G08_M01_Text_08180D64, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08153177
# 1057 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A7
# 1058 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815661D
# 1059 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 1060 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08156641
# 1061 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08180EDB
# 1062 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1063 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_081565DB::
# 1068 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	message Naranja_InsideOfTruck_G08_M01_Text_086BFCE3
# 1069 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmessage
# 1070 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 1071 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_081752E6
# 1072 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1073 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1074 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1075 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1076 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 1077 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	addvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 1078 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 1079 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB
# 1080 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1081 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1082 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1083 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1084 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1085 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1086 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1087 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1088 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1089 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1090 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1091 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1092 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1093 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1094 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1095 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1096 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playse SE_UNLOCK
# 1097 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815661D
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815661D::
# 1101 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x42
# 1102 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 1103 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 1104 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1105 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 1106 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_0817A2A4
# 1107 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1108 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A6
# 1109 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08156641::
# 1114 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	loadword 0, Naranja_InsideOfTruck_G08_M01_Text_08180F1D
# 1115 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 4
# 1116 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB::
# 1121 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_MAN_2
# 1122 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_0128
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0::
# 1127 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8008
# 1128 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1129 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A021E
# 1130 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1131 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0225
# 1132 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1133 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A022F
# 1134 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 1135 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A023C
# 1136 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 1137 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A024C
# 1138 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 1139 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0262
# 1140 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 1141 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A026F
# 1142 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 1143 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0282
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A021E::
# 1148 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x140
# 1149 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x141
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0225::
# 1154 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xB3
# 1155 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x1A9
# 1156 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x1AA
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A022F::
# 1161 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xBF
# 1162 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xC2
# 1163 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x143
# 1164 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x289
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A023C::
# 1169 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xC9
# 1170 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xCB
# 1171 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xCD
# 1172 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x288
# 1173 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x28A
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A024C::
# 1178 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x47
# 1179 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x48
# 1180 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x49
# 1181 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x4A
# 1182 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x59
# 1183 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x5A
# 1184 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x5B
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0262::
# 1189 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x191
# 1190 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x28E
# 1191 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x28F
# 1192 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x194
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A026F::
# 1197 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xE9
# 1198 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xEA
# 1199 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xEB
# 1200 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xF4
# 1201 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xF5
# 1202 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xF6
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0282::
# 1207 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x265
# 1208 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x266
# 1209 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x76
# 1210 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x80
# 1211 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x81
# 1212 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x82
# 1213 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x83
# 1214 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x12D
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5::
# 1219 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 1220 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitfanfare
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0424::
# 1225 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 1226 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT
# 1227 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_G00_M24_OLD_MAN_1
# 1228 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_G00_M24_MR_BRINEYS_BOAT
# 1229 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G00_M20_OLD_MAN_1
# 1230 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G00_M19_SPIN_CUSHION
# 1231 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 1232 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 1233 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 0
	return


# 1237 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08151069:
# 1238 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_left
	step_end

# 1241 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_0815106D:
# 1242 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1243 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1244 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
	step_end

# 1247 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08151071:
# 1248 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1249 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1250 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1251 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1252 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1253 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1254 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1255 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1256 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1257 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
	step_end

# 1260 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_0815107C:
# 1261 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1262 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1263 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1264 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1265 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1266 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1267 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1268 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1269 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
	step_end

# 1272 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08151086:
# 1273 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1274 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1275 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1276 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1277 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1278 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1279 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1280 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
	step_end

# 1283 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B1D:
# 1284 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1285 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1286 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1287 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
# 1288 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1289 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1290 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1291 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1292 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1295 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B27:
# 1296 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1297 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1298 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1299 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
# 1300 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1301 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
	step_end

# 1304 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B2E:
# 1305 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1306 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1307 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1308 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1309 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_up
# 1310 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1311 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_down
	step_end

# 1314 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B36:
# 1315 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1316 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1317 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1318 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1319 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_up
# 1320 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1321 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_down
	step_end

# 1324 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B3E:
# 1325 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1326 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1327 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1328 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_up
# 1329 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1330 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_down
	step_end

# 1333 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B45:
# 1334 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1335 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1336 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1337 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1338 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1339 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1340 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

# 1343 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B4D:
# 1344 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1345 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1346 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1347 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1348 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1349 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1350 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1351 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1352 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

# 1355 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B57:
# 1356 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1357 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1358 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1359 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1360 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1361 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1362 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

# 1365 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B5F:
# 1366 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_down
# 1367 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1368 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1369 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1370 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1371 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1372 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1373 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1374 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

Naranja_InsideOfTruck_G08_M01_Text_08175182::
# 1377 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "¡Éste es el final {PLAYER}!\pHemos congelado agua hirviendo\ny arrojado de una ladera nevada.\pPerdiste al principio  \ny te costó ganar ganar después.\p¿Sigues dispuest{RIVAL} a luchar?\n¡Empecemos el desempate!$"

Naranja_InsideOfTruck_G08_M01_Text_08175246::
# 1381 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Sin prisa pero sin pausa   \nmantuviste un ritmo constante.\pEsa es la clave de la velocidad.\p¡Esta medalla será tuya!$"

Naranja_InsideOfTruck_G08_M01_Text_081752E6::
# 1385 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Con esa medalla te obedecerán   \nPOKéMON de nivel superior a 30,\lpodrás iluminar la oscuridad \lusando DESTELLO\ly recibirás también algo.\pEstas cinco dósis de CARBURANTE\nacelerarán tus POKéMON\la niveles insospechados.$"

Naranja_InsideOfTruck_G08_M01_Text_08175412::
# 1389 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Por cierto, si traes algo que me guste\nte dejo pasar cuando quieras\lecharte una carrera nevada, ¿va?$"

Naranja_InsideOfTruck_G08_M01_Text_08179DF6::
# 1393 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm?\pWell, if it isn’t {PLAYER}!\nSo you’re all finished moving in?\pI’m surprised that you managed to\nget here by yourself.\pOh, I see.\nYou’re with your POKéMON.\pHm... Then I guess you’re going to\nbecome a TRAINER like me, {PLAYER}.\pThat’s great news!\nI’ll be looking forward to it!$"

Naranja_InsideOfTruck_G08_M01_Text_08179F07::
# 1397 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Um... I... I’d like to get a\nPOKéMON, please...$"

Naranja_InsideOfTruck_G08_M01_Text_08179F37::
# 1401 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm? You’re... Uh... Oh, right.\nYou’re WALLY, right?$"

Naranja_InsideOfTruck_G08_M01_Text_08179F70::
# 1405 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY: I’m going to go stay with my\nrelatives in VERDANTURF TOWN.\pI thought I would be lonely by myself,\nso I wanted to take a POKéMON along.\pBut I’ve never caught a POKéMON before.\nI don’t know how...$"

Naranja_InsideOfTruck_G08_M01_Text_0817A03A::
# 1409 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm. I see.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A04A::
# 1413 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\nright?\pGo with WALLY and make sure that he\nsafely catches a POKéMON.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A0A8::
# 1417 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY, here, I’ll loan you my POKéMON.\pWALLY received a ZIGZAGOON!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A0EB::
# 1421 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY: Oh, wow!\nA POKéMON!\pDAD: Hm. I’ll give you a POKé BALL, too.\nGo for it!\pWALLY received a POKé BALL!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A156::
# 1425 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY: Oh, wow!\nThank you!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A171::
# 1429 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER}... Would you really come\nwith me?$"

Naranja_InsideOfTruck_G08_M01_Text_0817A2A4::
# 1433 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¿Este es el fin de la BETA 2\nde POKéMON NARANJA?\p¿Que me recomiendas ahora Danny?\p{COLOR 0x01}Lo es oficialmente, {PLAYER}.\nLa 2ª medalla, la 2ª beta.\pSin embargo ve al Sur\nque quedan muchas aventuras:\pJOY buscaba ayuda,\nen KABUTO hay problemas.\pY en esta beta puedes\nconseguir hasta 100 pokémon.\pEspera…\n…con paciencia…\l…a este juego le queda mucha historia\lpor continuar…$"

Naranja_InsideOfTruck_G08_M01_Text_0817A41E::
# 1437 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm? Aren’t you going to the\nPOKéMON GYM in RUSTBORO CITY?\pThere’s no challenge for me to\nbattle a greenhorn TRAINER.\p{PLAYER}, I want you to challenge me\nwhen you become a lot stronger.\pI’ll battle you, {PLAYER}, when you\ncan show me four GYM BADGES, okay?$"

Naranja_InsideOfTruck_G08_M01_Text_0817A518::
# 1441 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: I see... So, you’ve beaten the\nGYM LEADER in RUSTBORO CITY.\pBut there are many more TRAINERS\nwho are stronger than you, {PLAYER}.\pAcross the sea in DEWFORD TOWN is a\nGYM LEADER named BRAWLY.\pYou should go challenge him.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A5F3::
# 1445 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm... {PLAYER}, you have gotten\nstronger.\pI can tell by the number of BADGES\nthat you’ve earned.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A653::
# 1449 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm...\nSo, you did get four GYM BADGES.\pFine, as I promised, we will have a\nPOKéMON battle.\p{PLAYER}...\pI’m so happy that I can have a \nreal battle with my own child.\pBut, a battle is a battle!\pI will do everything in my power as\na GYM LEADER to win.\p{PLAYER}, you’d better give it your\nbest shot, too!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A77A::
# 1453 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "...\pI... I can’t...\pI can’t believe it. {PLAYER}...\pI lost to {PLAYER}?\pBut, rules are rules!\nHere, take this.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A7DD::
# 1457 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\nfrom DAD!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A805::
# 1461 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\nof all your POKéMON will increase.\pPOKéMON that know the HM move SURF\nwill be able to travel over water.\pThis is my gift to you. {PLAYER}, I’m\nsure you can use it correctly.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A8CF::
# 1465 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: TM42 contains FACADE.\pIt doubles the power of moves if\nthe POKéMON is poisoned, paralyzed,\lor burned.\pIt might be able to turn a bad\nsituation into an advantage.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A976::
# 1469 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: As the GYM LEADER, I can’t\nexpress how upset I am...\pBut as a father, it makes me both\nhappy and a little sad. It’s odd...$"

Naranja_InsideOfTruck_G08_M01_Text_0817A9F6::
# 1473 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Oh, yes...\pWALLY’s parents came calling\nearlier.\pThey said that they had something\nthey wanted to give you, {PLAYER}.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AA6B::
# 1477 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\nyour mother every so often.\pI’m going to stay here and redouble\nmy training.\pIt would bother me as a TRAINER to\nnot avenge my loss to you, {PLAYER}!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AB17::
# 1481 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\pThe world of POKéMON is deep.\pI honestly think that no amount of\ntraining would ever be enough.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AB96::
# 1485 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Hey, how’s it going, CHAMPION-\nbound {PLAYER}?\pThe doors in this GYM open when you\nbeat the awaiting TRAINERS.\pWhoops! The doors in this room are\nalready open, so don’t attack me!\pThe TRAINERS of PETALBURG GYM use\nall kinds of items.\pThe door at the left leads to the\nSPEED ROOM.\pThe door at the right leads to the\nACCURACY ROOM.\pThe room’s name will be on the\ndoor, so choose carefully.\pOnce you’ve chosen the door...\nWell, hey, go for it!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AD49::
# 1489 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER}! Whoa! You’ve overcome even\nyour own father!\pLike, whoa!\nWhat a stunning turn of events!$"

Naranja_InsideOfTruck_G08_M01_Text_0817ADA5::
# 1493 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The ability to attack before the\nopponent...\pJust that alone puts me at a great\nadvantage, don’t you agree?$"

Naranja_InsideOfTruck_G08_M01_Text_0817AE11::
# 1497 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "That was a magnificent battle!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AE30::
# 1501 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Go on to the next room where a new\nchallenge awaits you.\pAt the left is the ZERO REDUCTION\nROOM.\pThe right door leads to the DEFENSE\nROOM.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AEBB::
# 1505 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Whomever you beat, and whomever you\nmay lose to, you never shirk from\ltraining yourself and your POKéMON.\pThat’s what I think being a\nGYM LEADER is all about.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AF5A::
# 1509 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Don’t waste your time trying to\nlower my POKéMON’s abilities!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AF98::
# 1513 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "My POKéMON’s abilities weren’t\nharmed, but I still lost...$"

Naranja_InsideOfTruck_G08_M01_Text_0817AFD3::
# 1517 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\nCan you withstand brute force?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B016::
# 1521 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "After you beat our LEADER, the\ntraining has become a lot tougher.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B058::
# 1525 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Just when you think you’re going to\nwin, your opponent restores HP...\pCan you just imagine how awful that\nmust feel?\pI’ll show you exactly how awful it\nfeels!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B0F7::
# 1529 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I couldn’t restore HP enough...\nWhat ATTACK power...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B12C::
# 1533 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I should have expected no less from\nour LEADER’s kid.\pNo, wait! A TRAINER’s abilities are\nearned only through effort.\pI lost because my own efforts\nweren’t enough.\pGo on! The ONE-HIT KO ROOM is next.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B1F4::
# 1537 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I’m going to keep training at GYMS.\nOne day, I’ll become a LEADER.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B3F7::
# 1541 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Giggle...\nThis is the ACCURACY ROOM.\pIt’s pretty nasty when every attack\nlands without fail.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B454::
# 1545 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "You were a cut above me...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B46F::
# 1549 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "There are some even stronger\nTRAINERS waiting for you.\pThe left is the DEFENSE ROOM, and\nthe right is the RECOVERY ROOM.\pYour POKéMON’s ATTACK power will be\non trial either way.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B521::
# 1553 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Do you know what we’re trying to\nachieve as TRAINERS?\pWe’re striving to become soul mates\nwith our POKéMON.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B58D::
# 1557 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The higher the DEFENSE, the more\nreckless I can be in attack.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B5CB::
# 1561 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Our defenses weren’t enough...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B5EA::
# 1565 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I think you’ve taught me a valuable\nlesson here.\pNow, go on! The left door goes to\nthe STRENGTH ROOM.\pThe right door opens to the\nONE-HIT KO ROOM.\pBoth of them have TRAINERS who are\noffensively skilled.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B6B5::
# 1569 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Hi! Have you tried using SURF?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B6D4::
# 1573 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Our GYM LEADER told us to go all out\nand beat you.\pEven if you happen to be the\nLEADER’s kid!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B732::
# 1577 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "But... I went all out!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B749::
# 1581 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The way you use your POKéMON...\nIt’s like your father’s style.\pGo on through! The GYM LEADER, your\nfather, is waiting!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B7C0::
# 1585 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Sure, it’s fine to make your POKéMON\nstronger.\pBut what decides the winner?\pWhy, it’s the feelings TRAINERS have for\ntheir POKéMON.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B844::
# 1589 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "This door appears to be locked\nright now...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B870::
# 1593 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B8D4::
# 1597 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B90F::
# 1601 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“ZERO REDUCTION ROOM,” the sign\nsays.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B950::
# 1605 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B98A::
# 1609 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817BA00::
# 1613 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817BAA5::
# 1617 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"

Naranja_InsideOfTruck_G08_M01_Text_0817BAC0::
# 1621 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\pNORMAN’S CERTIFIED TRAINERS:\n{PLAYER}$"

Naranja_InsideOfTruck_G08_M01_Text_08180C32::
# 1625 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Superaste muy bien la prueba.\pAsí que ahora te mereces un combate\ncontra mí.\pNo será fácil.\pAsí que preparate.\p¡En guardia!$"

Naranja_InsideOfTruck_G08_M01_Text_08180D64::
# 1629 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "No me lo esperaba.\pEres buen{RIVAL} {PLAYER}…\p…y  llegarás lejos.\p¡Toma esta medalla!$"

Naranja_InsideOfTruck_G08_M01_Text_08180DDA::
# 1633 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Has empezado con muy buen pie \nla Liga Naranja consiguiendo\lla medalla de la Isla MIKAN.\pHiciste una gran carrera y también\nuna gran batalla.\p¡Ten  esto!$"

Naranja_InsideOfTruck_G08_M01_Text_08180EDB::
# 1637 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "¡Disfruta cada instante y cada lugar!   \nY recuerda ser el mejor.$"

Naranja_InsideOfTruck_G08_M01_Text_08180F1D::
# 1641 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Wahahahah!\nGo forth and endeavor, youngster!$"

Naranja_InsideOfTruck_G08_M01_Text_081C5570::
# 1645 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hi, {PLAYER}!\pI just received a very rare BERRY.\nI’d like you to have it.$"

Naranja_InsideOfTruck_G08_M01_Text_086BEDB0::
# 1649 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER} recibió la medalla\nOJO de CORAL de SISSY.$"

Naranja_InsideOfTruck_G08_M01_Text_086BF602::
# 1653 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "¡Hola foraster{RIVAL}!    \nSoy SISSY, la lìder de isla MIKAN.\p{COLOR 0x04}{PLAYER}: Yo soy {PLAYER},\ny vine para desafiarte a un combate.\p{COLOR 0x01}SISSY: Me parece que no conoces\nel mecanismo de la ÉLITE NARANJA.\pPara desafiar a un lìder tienes que\naceptar la prueba que él decida.\pSi tienes éxito podrás\ndesafiarle a un combate.\p{COLOR 0x04}{PLAYER}: Ahh… \n¿Entonces ahora?\p{COLOR 0x01}SISSY: Deberás ganarme en una\n“Carrera sobre las olas” con tu\lPOKéMON acuatico.\p¿Aceptas?$"

Naranja_InsideOfTruck_G08_M01_Text_086BFB30::
# 1657 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Eran cinco dósis de HIERRO \nque aumenta la defensa POKéMON,\lbásica para que resistan\lcualquier situación.\pCon la medalla que te di\npodrás deshacer los remolinos\lmarinos que verás.$"

Naranja_InsideOfTruck_G08_M01_Text_086BFCE3::
# 1661 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER} recibió la medalla\nRUBÍ ESPINOSO de DANNY.$"
