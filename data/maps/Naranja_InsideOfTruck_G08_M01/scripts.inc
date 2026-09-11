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
	msgbox Naranja_InsideOfTruck_G08_M01_Text_086BF602, MSGBOX_DEFAULT
# 31 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 32 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 33 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151048
# 34 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 35 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151053
# 36 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 37 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815105E
# 38 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_STORY_STATE, 1
# 39 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN
# 40 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151048::
# 45 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_08151071
# 46 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08151053::
# 51 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_0815107C
# 52 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815105E::
# 57 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_HOT_SPRINGS_OLD_WOMAN, Naranja_InsideOfTruck_G08_M01_Movement_08151086
# 58 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08153103::
# 63 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 64 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	animateflash 2
# 65 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_IslaMikan_G03_M03_EventScript_Sub_08153071
	return


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_BRAWLY_LocalId8::
# 70 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_NARANJA_INSIDE_OF_TRUCK_268, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_08175182, Naranja_InsideOfTruck_G08_M01_Text_08175246, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_081565DB
# 71 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A6
# 72 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081531B5
# 73 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08175412, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08153177::
# 79 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08153103
# 80 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	message Naranja_InsideOfTruck_G08_M01_Text_086BEDB0
# 81 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmessage
# 82 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 83 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08180DDA, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_04B4
# 85 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_0809
# 86 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	addvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 87 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 88 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB
# 89 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 2
# 90 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 91 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081531B5
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081531B5::
# 95 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x41
# 96 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 97 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 98 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 99 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 100 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_086BFB30, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A7
# 102 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081544ED::
# 107 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 1
# 108 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F9A
# 109 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FBB
# 110 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FDC
# 111 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FFD
# 112 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815501E
# 113 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815503F
# 114 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155060
# 115 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155081
	return


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_NORMAN_LocalId1::
# 120 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lock
# 121 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	faceplayer
# 122 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2
# 123 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 124 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154907
# 125 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 126 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154911
# 127 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 128 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815491B
# 129 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 130 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154925
# 131 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 132 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549D6
# 133 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 134 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493D
# 135 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08179DF6, MSGBOX_DEFAULT
# 136 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 137 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 138 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 139 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815463D
# 140 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 141 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154648
# 142 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 143 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154653
# 144 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 145 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815465E
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815463D::
# 150 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 0
# 151 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154648::
# 155 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 156 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154653::
# 160 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 2
# 161 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815465E::
# 165 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 3
# 166 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154669::
# 170 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	addobject LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY
# 171 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playse SE_DOOR
# 172 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 173 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081547EE
# 174 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 175 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154800
# 176 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 177 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815481C
# 178 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 179 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815481C
# 180 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08179F07, MSGBOX_DEFAULT
# 181 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08179F37, MSGBOX_DEFAULT
# 182 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08179F70, MSGBOX_DEFAULT
# 183 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A03A, MSGBOX_DEFAULT
# 184 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 185 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154884
# 186 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 187 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815488F
# 188 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 189 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548A1
# 190 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 191 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548B3
# 192 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A04A, MSGBOX_DEFAULT
# 193 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 194 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548C5
# 195 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 196 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548D0
# 197 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 198 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548DB
# 199 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 200 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548E6
# 201 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A0A8, MSGBOX_DEFAULT
# 202 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A0EB, MSGBOX_DEFAULT
# 203 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A156, MSGBOX_DEFAULT
# 204 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 205 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815492F
# 206 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 207 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154930
# 208 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 209 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493B
# 210 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 211 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493C
# 212 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 213 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1
# 214 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 215 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548FC
# 216 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 217 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1
# 218 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 219 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1
# 220 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A171, MSGBOX_DEFAULT
# 221 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 222 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_4001
# 223 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 224 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 225 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154835
# 226 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 227 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815484E
# 228 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 229 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154860
# 230 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8008, 3
# 231 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154872
# 232 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	removeobject LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY
# 233 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02D8
# 234 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 235 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_VALENCIA_STORY_STATE, 2
# 236 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_02D6
# 237 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_WALLY
# 238 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH_2
# 239 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special InitBirchState
# 240 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	warp MAP_NARANJA_ISLA_VALENCIA_G00_M00, 0xFF, 0xF, 8
# 241 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitstate
# 242 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081547EE::
# 247 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 248 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B27
# 249 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154800::
# 254 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B1D
# 255 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 257 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 258 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815481C::
# 263 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 264 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 265 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B27
# 266 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154835::
# 271 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 272 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B3E
# 273 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B4D
# 274 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815484E::
# 279 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B2E
# 280 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B45
# 281 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154860::
# 286 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B3E
# 287 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B57
# 288 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154872::
# 293 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_InsideOfTruck_G08_M01_Movement_08154B36
# 294 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_InsideOfTruck_G08_M01_Movement_08154B5F
# 295 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154884::
# 300 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 301 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815488F::
# 306 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 307 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 308 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548A1::
# 313 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 314 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 315 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548B3::
# 320 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 321 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 322 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548C5::
# 327 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 328 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548D0::
# 333 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 334 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548DB::
# 339 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 340 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548E6::
# 345 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 346 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548F1::
# 351 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 352 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081548FC::
# 357 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_WALLY, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 358 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154907::
# 363 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A41E, MSGBOX_DEFAULT
# 364 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154911::
# 369 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A518, MSGBOX_DEFAULT
# 370 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815491B::
# 375 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A5F3, MSGBOX_DEFAULT
# 376 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154925::
# 381 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A5F3, MSGBOX_DEFAULT
# 382 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815492F::
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154930::
# 391 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 392 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493B::
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493C::
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815493D::
# 405 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154969
# 406 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 407 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B8
# 408 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A9
# 409 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154A2C
# 410 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 411 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B69
# 412 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AA6B, MSGBOX_DEFAULT
# 413 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154969::
# 418 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 419 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 420 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 421 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY, 1
# 422 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 423 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 424 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY, 1
# 425 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 426 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 427 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_ENIGMA_BERRY_AVAILABLE, 0
# 428 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2
# 429 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_081C5570, MSGBOX_DEFAULT
# 430 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B2::
# 435 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_RESULT, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549B8::
# 440 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xAF
# 441 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 442 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 443 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 444 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 445 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 446 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081549D6::
# 451 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A653, MSGBOX_DEFAULT
# 452 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_INSIDE_OF_TRUCK_269, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817A77A
# 453 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	message Naranja_InsideOfTruck_G08_M01_Text_0817A7DD
# 454 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmessage
# 455 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 456 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A805, MSGBOX_DEFAULT
# 457 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 458 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 7
# 459 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 460 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0424
# 461 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLA_MANDARIN_G10_M00_WATTSON
# 462 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARIN_G00_M02_WATTSON
# 463 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 5
# 464 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 465 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_7ISLAS_POMELO_G03_M04_MANIAC
# 466 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081544ED
# 467 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 468 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154A2C
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154A2C::
# 472 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14A
# 473 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 474 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 475 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 476 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 477 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A9
# 478 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A8CF, MSGBOX_DEFAULT
# 479 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A976, MSGBOX_DEFAULT
# 480 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 481 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 482 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ABC
# 483 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 484 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AC7
# 485 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 486 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AD2
# 487 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 488 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ADD
# 489 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay 0x46
# 490 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 491 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AE8
# 492 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 493 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AF3
# 494 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 495 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AFE
# 496 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 497 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B09
# 498 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A9F6, MSGBOX_DEFAULT
# 499 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ABC::
# 504 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 505 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AC7::
# 510 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 511 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AD2::
# 516 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 517 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154ADD::
# 522 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 523 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AE8::
# 528 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 529 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AF3::
# 534 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 535 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154AFE::
# 540 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 541 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B09::
# 546 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	applymovement LOCALID_INSIDE_OF_TRUCK_G08_M01_NORMAN, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 547 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154B69::
# 552 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AB17, MSGBOX_DEFAULT
# 553 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_1::
# 558 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 559 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 560 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 561 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 562 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x55
# 563 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B870, MSGBOX_YESNO
# 564 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 565 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 566 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 567 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8::
# 572 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	closemessage
# 573 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay 0x1E
# 574 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	warpdoor MAP_NARANJA_INSIDE_OF_TRUCK_G08_M01, 0xFF, 0x8008, 0x8009
# 575 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitstate
# 576 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7::
# 581 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9::
# 586 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B844, MSGBOX_DEFAULT
# 587 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_2::
# 592 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 593 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 594 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 595 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 596 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x62
# 597 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B8D4, MSGBOX_YESNO
# 598 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 599 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 600 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 601 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_3::
# 606 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 607 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x47
# 608 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 609 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 610 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x2E
# 611 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B90F, MSGBOX_YESNO
# 612 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 613 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 614 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 615 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_4::
# 620 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 621 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x47
# 622 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 623 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 624 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x3B
# 625 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B950, MSGBOX_YESNO
# 626 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 627 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 628 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 629 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_5::
# 634 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 635 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x59
# 636 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 637 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 638 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x3B
# 639 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B950, MSGBOX_YESNO
# 640 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 641 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 642 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 643 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_6::
# 648 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 649 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x59
# 650 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 651 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 652 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x48
# 653 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B98A, MSGBOX_YESNO
# 654 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 655 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 656 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 657 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_9::
# 662 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 663 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x5A
# 664 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 665 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 1
# 666 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x21
# 667 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817BA00, MSGBOX_YESNO
# 668 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 669 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 670 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 671 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_10::
# 676 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 677 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checktrainerflag 0x49
# 678 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB9
# 679 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8008, 7
# 680 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8009, 0x21
# 681 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817BA00, MSGBOX_YESNO
# 682 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 683 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BA8
# 684 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 685 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154BB7
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 690 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_071, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817ADA5, Naranja_InsideOfTruck_G08_M01_Text_0817AE11, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E1A
# 691 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 692 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E29
# 693 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AE30, MSGBOX_AUTOCLOSE
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E1A::
# 698 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 699 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FBB
# 700 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 701 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E29::
# 706 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AEBB, MSGBOX_NPC
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId4::
# 711 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_072, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817AF5A, Naranja_InsideOfTruck_G08_M01_Text_0817AF98, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E56
# 712 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 713 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E65
# 714 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AFD3, MSGBOX_AUTOCLOSE
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E56::
# 719 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 720 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FFD
# 721 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 722 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154E65::
# 727 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B016, MSGBOX_NPC
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId6::
# 732 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_073, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B058, Naranja_InsideOfTruck_G08_M01_Text_0817B0F7, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E92
# 733 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 734 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154EA1
# 735 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B12C, MSGBOX_AUTOCLOSE
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154E92::
# 740 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 741 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815503F
# 742 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 743 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154EA1::
# 748 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B1F4, MSGBOX_NPC
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 753 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_089, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B3F7, Naranja_InsideOfTruck_G08_M01_Text_0817B454, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F0A
# 754 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 755 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F19
# 756 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B46F, MSGBOX_AUTOCLOSE
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F0A::
# 761 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 762 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FDC
# 763 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 764 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F19::
# 769 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B521, MSGBOX_NPC
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId5::
# 774 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_090, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B58D, Naranja_InsideOfTruck_G08_M01_Text_0817B5CB, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F46
# 775 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 776 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F55
# 777 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B5EA, MSGBOX_AUTOCLOSE
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F46::
# 782 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 783 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815501E
# 784 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 785 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F55::
# 790 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B6B5, MSGBOX_NPC
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId7::
# 795 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_INSIDE_OF_TRUCK_091, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_0817B6D4, Naranja_InsideOfTruck_G08_M01_Text_0817B732, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F82
# 796 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 797 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F91
# 798 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B749, MSGBOX_AUTOCLOSE
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08154F82::
# 803 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8005, 0
# 804 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155060
# 805 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special DrawWholeMapView
# 806 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F91::
# 811 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817B7C0, MSGBOX_NPC
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154F9A::
# 816 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 1
# 817 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 818 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 819 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 820 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 821 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550A2
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FBB::
# 826 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 2
# 827 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 828 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 829 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 830 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 831 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550C7
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FDC::
# 836 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 3
# 837 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 838 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 839 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 840 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 841 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550EC
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08154FFD::
# 846 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 4
# 847 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 848 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 849 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 850 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 851 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155111
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815501E::
# 856 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 5
# 857 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 858 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 859 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 860 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 861 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155124
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815503F::
# 866 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 6
# 867 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 868 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 869 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 870 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 871 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155149
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155060::
# 876 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 7
# 877 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 878 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 879 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 880 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 881 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815515C
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155081::
# 886 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_0x8004, 8
# 887 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 0
# 888 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182
# 889 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8005, 1
# 890 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187
# 891 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815516F
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550A2::
# 896 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x55, 0x210, 0
# 897 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x55, 0x211, 0
# 898 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x62, 0x210, 0
# 899 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x62, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550C7::
# 904 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x2E, 0x210, 0
# 905 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x2E, 0x211, 0
# 906 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x3B, 0x210, 0
# 907 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x3B, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081550EC::
# 912 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x3B, 0x210, 0
# 913 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x3B, 0x211, 0
# 914 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x48, 0x210, 0
# 915 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x48, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155111::
# 920 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x14, 0x210, 0
# 921 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x14, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155124::
# 926 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x14, 0x210, 0
# 927 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x14, 0x211, 0
# 928 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 0x21, 0x210, 0
# 929 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 0x21, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155149::
# 934 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 0x21, 0x210, 0
# 935 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 0x21, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815515C::
# 940 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 1, 7, 0x210, 0
# 941 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 2, 7, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815516F::
# 946 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 6, 7, 0x210, 0
# 947 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setmetatile 7, 7, 0x211, 0
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155182::
# 952 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 953 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitstate
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08155187::
# 958 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	special PetalburgGymUnlockRoomDoors
	return


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId9::
# 963 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lock
# 964 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	faceplayer
# 965 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 966 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551A0
# 967 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AB96, MSGBOX_DEFAULT
# 968 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551A0::
# 973 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817AD49, MSGBOX_DEFAULT
# 974 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_13::
# 979 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 980 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 981 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551CA
# 982 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551D4
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sign_14::
# 986 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	lockall
# 987 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 988 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551CA
# 989 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551D4
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551CA::
# 993 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817BAC0, MSGBOX_DEFAULT
# 994 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081551D4::
# 999 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817BAA5, MSGBOX_DEFAULT
# 1000 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	releaseall
	end


Naranja_InsideOfTruck_G08_M01_EventScript_OBJ_EVENT_GFX_HOT_SPRINGS_OLD_WOMAN_LocalId19::
# 1005 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_NARANJA_INSIDE_OF_TRUCK_267, LOCALID_NONE, Naranja_InsideOfTruck_G08_M01_Text_08180C32, Naranja_InsideOfTruck_G08_M01_Text_08180D64, Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_08153177
# 1006 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A7
# 1007 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815661D
# 1008 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_NEW_MAUVILLE_STORY_STATE, 2
# 1009 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08156641
# 1010 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08180EDB, MSGBOX_DEFAULT
# 1011 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_AfterBattle_081565DB::
# 1016 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	message Naranja_InsideOfTruck_G08_M01_Text_086BFCE3
# 1017 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitmessage
# 1018 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 1019 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_081752E6, MSGBOX_DEFAULT
# 1020 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1021 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1022 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1023 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 1024 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	addvar VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 1
# 1025 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_INSIDE_OF_TRUCK_EVENT_STATE_2, 6
# 1026 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	call_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB
# 1027 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1028 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1029 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1030 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1031 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1032 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1033 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1034 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1035 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1036 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1037 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1038 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1039 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1040 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1041 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1042 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	nop
# 1043 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playse SE_UNLOCK
# 1044 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815661D
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_0815661D::
# 1048 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x42
# 1049 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 5
# 1050 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	callstd 0
# 1051 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1052 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 1053 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_0817A2A4, MSGBOX_DEFAULT
# 1054 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_00A6
# 1055 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_08156641::
# 1060 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	msgbox Naranja_InsideOfTruck_G08_M01_Text_08180F1D, MSGBOX_DEFAULT
# 1061 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	release
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A00FB::
# 1066 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	clearflag FLAG_HIDE_INSIDE_OF_TRUCK_G08_M01_MAN_2
# 1067 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_0128
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0::
# 1072 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8008
# 1073 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1074 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A021E
# 1075 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1076 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0225
# 1077 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1078 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A022F
# 1079 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 1080 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A023C
# 1081 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 1082 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A024C
# 1083 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 1084 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0262
# 1085 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 1086 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A026F
# 1087 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 1088 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	goto_if EQUAL, Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0282
	end


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A021E::
# 1093 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x140
# 1094 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x141
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0225::
# 1099 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xB3
# 1100 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x1A9
# 1101 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x1AA
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A022F::
# 1106 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xBF
# 1107 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xC2
# 1108 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x143
# 1109 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x289
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A023C::
# 1114 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xC9
# 1115 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xCB
# 1116 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xCD
# 1117 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x288
# 1118 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x28A
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A024C::
# 1123 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x47
# 1124 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x48
# 1125 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x49
# 1126 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x4A
# 1127 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x59
# 1128 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x5A
# 1129 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x5B
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0262::
# 1134 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x191
# 1135 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x28E
# 1136 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x28F
# 1137 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x194
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A026F::
# 1142 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xE9
# 1143 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xEA
# 1144 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xEB
# 1145 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xF4
# 1146 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xF5
# 1147 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0xF6
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0282::
# 1152 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x265
# 1153 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x266
# 1154 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x76
# 1155 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x80
# 1156 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x81
# 1157 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x82
# 1158 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x83
# 1159 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	settrainerflag 0x12D
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5::
# 1164 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 1165 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	waitfanfare
	return


Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A0424::
# 1170 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 1171 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_MR_BRINEYS_BOAT
# 1172 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_G00_M24_OLD_MAN_1
# 1173 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ROUTE109_G00_M24_MR_BRINEYS_BOAT
# 1174 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G00_M20_OLD_MAN_1
# 1175 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G00_M19_SPIN_CUSHION
# 1176 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 1177 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 1178 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 0
	return


# 1182 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08151069:
# 1183 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_left
	step_end

# 1186 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_0815106D:
# 1187 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1188 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1189 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
	step_end

# 1192 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08151071:
# 1193 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1194 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1195 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1196 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1197 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1198 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1199 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1200 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1201 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1202 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
	step_end

# 1205 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_0815107C:
# 1206 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1207 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1208 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1209 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1210 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1211 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1212 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1213 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1214 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
	step_end

# 1217 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08151086:
# 1218 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1219 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1220 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1221 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1222 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1223 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1224 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1225 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
	step_end

# 1228 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B1D:
# 1229 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1230 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1231 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1232 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
# 1233 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1234 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1235 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1236 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1237 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1240 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B27:
# 1241 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1242 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1243 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1244 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
# 1245 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
# 1246 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_up
	step_end

# 1249 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B2E:
# 1250 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1251 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1252 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1253 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1254 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_up
# 1255 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1256 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_down
	step_end

# 1259 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B36:
# 1260 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1261 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1262 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1263 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1264 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_up
# 1265 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1266 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_down
	step_end

# 1269 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B3E:
# 1270 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1271 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1272 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1273 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_up
# 1274 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1275 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_down
	step_end

# 1278 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B45:
# 1279 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1280 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1281 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1282 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1283 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1284 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1285 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

# 1288 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B4D:
# 1289 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1290 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1291 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1292 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1293 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1294 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1295 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1296 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1297 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

# 1300 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B57:
# 1301 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1302 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1303 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1304 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1305 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1306 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1307 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

# 1310 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
Naranja_InsideOfTruck_G08_M01_Movement_08154B5F:
# 1311 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_in_place_faster_down
# 1312 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1313 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_16
# 1314 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1315 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1316 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1317 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_right
# 1318 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	walk_down
# 1319 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	delay_8
	step_end

Naranja_InsideOfTruck_G08_M01_Text_08175182::
# 1322 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "¡Éste es el final {PLAYER}!\pHemos congelado agua hirviendo\ny arrojado de una ladera nevada.\pPerdiste al principio  \ny te costó ganar ganar después.\p¿Sigues dispuest{RIVAL} a luchar?\n¡Empecemos el desempate!$"

Naranja_InsideOfTruck_G08_M01_Text_08175246::
# 1326 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Sin prisa pero sin pausa   \nmantuviste un ritmo constante.\pEsa es la clave de la velocidad.\p¡Esta medalla será tuya!$"

Naranja_InsideOfTruck_G08_M01_Text_081752E6::
# 1330 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Con esa medalla te obedecerán   \nPOKéMON de nivel superior a 30,\lpodrás iluminar la oscuridad \lusando DESTELLO\ly recibirás también algo.\pEstas cinco dósis de CARBURANTE\nacelerarán tus POKéMON\la niveles insospechados.$"

Naranja_InsideOfTruck_G08_M01_Text_08175412::
# 1334 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Por cierto, si traes algo que me guste\nte dejo pasar cuando quieras\lecharte una carrera nevada, ¿va?$"

Naranja_InsideOfTruck_G08_M01_Text_08179DF6::
# 1338 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm?\pWell, if it isn’t {PLAYER}!\nSo you’re all finished moving in?\pI’m surprised that you managed to\nget here by yourself.\pOh, I see.\nYou’re with your POKéMON.\pHm... Then I guess you’re going to\nbecome a TRAINER like me, {PLAYER}.\pThat’s great news!\nI’ll be looking forward to it!$"

Naranja_InsideOfTruck_G08_M01_Text_08179F07::
# 1342 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Um... I... I’d like to get a\nPOKéMON, please...$"

Naranja_InsideOfTruck_G08_M01_Text_08179F37::
# 1346 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm? You’re... Uh... Oh, right.\nYou’re WALLY, right?$"

Naranja_InsideOfTruck_G08_M01_Text_08179F70::
# 1350 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY: I’m going to go stay with my\nrelatives in VERDANTURF TOWN.\pI thought I would be lonely by myself,\nso I wanted to take a POKéMON along.\pBut I’ve never caught a POKéMON before.\nI don’t know how...$"

Naranja_InsideOfTruck_G08_M01_Text_0817A03A::
# 1354 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm. I see.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A04A::
# 1358 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\nright?\pGo with WALLY and make sure that he\nsafely catches a POKéMON.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A0A8::
# 1362 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY, here, I’ll loan you my POKéMON.\pWALLY received a ZIGZAGOON!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A0EB::
# 1366 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY: Oh, wow!\nA POKéMON!\pDAD: Hm. I’ll give you a POKé BALL, too.\nGo for it!\pWALLY received a POKé BALL!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A156::
# 1370 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "WALLY: Oh, wow!\nThank you!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A171::
# 1374 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER}... Would you really come\nwith me?$"

Naranja_InsideOfTruck_G08_M01_Text_0817A2A4::
# 1378 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¿Este es el fin de la BETA 2\nde POKéMON NARANJA?\p¿Que me recomiendas ahora Danny?\p{COLOR 0x01}Lo es oficialmente, {PLAYER}.\nLa 2ª medalla, la 2ª beta.\pSin embargo ve al Sur\nque quedan muchas aventuras:\pJOY buscaba ayuda,\nen KABUTO hay problemas.\pY en esta beta puedes\nconseguir hasta 100 pokémon.\pEspera…\n…con paciencia…\l…a este juego le queda mucha historia\lpor continuar…$"

Naranja_InsideOfTruck_G08_M01_Text_0817A41E::
# 1382 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm? Aren’t you going to the\nPOKéMON GYM in RUSTBORO CITY?\pThere’s no challenge for me to\nbattle a greenhorn TRAINER.\p{PLAYER}, I want you to challenge me\nwhen you become a lot stronger.\pI’ll battle you, {PLAYER}, when you\ncan show me four GYM BADGES, okay?$"

Naranja_InsideOfTruck_G08_M01_Text_0817A518::
# 1386 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: I see... So, you’ve beaten the\nGYM LEADER in RUSTBORO CITY.\pBut there are many more TRAINERS\nwho are stronger than you, {PLAYER}.\pAcross the sea in DEWFORD TOWN is a\nGYM LEADER named BRAWLY.\pYou should go challenge him.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A5F3::
# 1390 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm... {PLAYER}, you have gotten\nstronger.\pI can tell by the number of BADGES\nthat you’ve earned.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A653::
# 1394 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hm...\nSo, you did get four GYM BADGES.\pFine, as I promised, we will have a\nPOKéMON battle.\p{PLAYER}...\pI’m so happy that I can have a \nreal battle with my own child.\pBut, a battle is a battle!\pI will do everything in my power as\na GYM LEADER to win.\p{PLAYER}, you’d better give it your\nbest shot, too!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A77A::
# 1398 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "...\pI... I can’t...\pI can’t believe it. {PLAYER}...\pI lost to {PLAYER}?\pBut, rules are rules!\nHere, take this.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A7DD::
# 1402 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\nfrom DAD!$"

Naranja_InsideOfTruck_G08_M01_Text_0817A805::
# 1406 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\nof all your POKéMON will increase.\pPOKéMON that know the HM move SURF\nwill be able to travel over water.\pThis is my gift to you. {PLAYER}, I’m\nsure you can use it correctly.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A8CF::
# 1410 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: TM42 contains FACADE.\pIt doubles the power of moves if\nthe POKéMON is poisoned, paralyzed,\lor burned.\pIt might be able to turn a bad\nsituation into an advantage.$"

Naranja_InsideOfTruck_G08_M01_Text_0817A976::
# 1414 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: As the GYM LEADER, I can’t\nexpress how upset I am...\pBut as a father, it makes me both\nhappy and a little sad. It’s odd...$"

Naranja_InsideOfTruck_G08_M01_Text_0817A9F6::
# 1418 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Oh, yes...\pWALLY’s parents came calling\nearlier.\pThey said that they had something\nthey wanted to give you, {PLAYER}.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AA6B::
# 1422 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\nyour mother every so often.\pI’m going to stay here and redouble\nmy training.\pIt would bother me as a TRAINER to\nnot avenge my loss to you, {PLAYER}!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AB17::
# 1426 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\pThe world of POKéMON is deep.\pI honestly think that no amount of\ntraining would ever be enough.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AB96::
# 1430 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Hey, how’s it going, CHAMPION-\nbound {PLAYER}?\pThe doors in this GYM open when you\nbeat the awaiting TRAINERS.\pWhoops! The doors in this room are\nalready open, so don’t attack me!\pThe TRAINERS of PETALBURG GYM use\nall kinds of items.\pThe door at the left leads to the\nSPEED ROOM.\pThe door at the right leads to the\nACCURACY ROOM.\pThe room’s name will be on the\ndoor, so choose carefully.\pOnce you’ve chosen the door...\nWell, hey, go for it!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AD49::
# 1434 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER}! Whoa! You’ve overcome even\nyour own father!\pLike, whoa!\nWhat a stunning turn of events!$"

Naranja_InsideOfTruck_G08_M01_Text_0817ADA5::
# 1438 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The ability to attack before the\nopponent...\pJust that alone puts me at a great\nadvantage, don’t you agree?$"

Naranja_InsideOfTruck_G08_M01_Text_0817AE11::
# 1442 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "That was a magnificent battle!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AE30::
# 1446 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Go on to the next room where a new\nchallenge awaits you.\pAt the left is the ZERO REDUCTION\nROOM.\pThe right door leads to the DEFENSE\nROOM.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AEBB::
# 1450 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Whomever you beat, and whomever you\nmay lose to, you never shirk from\ltraining yourself and your POKéMON.\pThat’s what I think being a\nGYM LEADER is all about.$"

Naranja_InsideOfTruck_G08_M01_Text_0817AF5A::
# 1454 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Don’t waste your time trying to\nlower my POKéMON’s abilities!$"

Naranja_InsideOfTruck_G08_M01_Text_0817AF98::
# 1458 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "My POKéMON’s abilities weren’t\nharmed, but I still lost...$"

Naranja_InsideOfTruck_G08_M01_Text_0817AFD3::
# 1462 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\nCan you withstand brute force?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B016::
# 1466 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "After you beat our LEADER, the\ntraining has become a lot tougher.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B058::
# 1470 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Just when you think you’re going to\nwin, your opponent restores HP...\pCan you just imagine how awful that\nmust feel?\pI’ll show you exactly how awful it\nfeels!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B0F7::
# 1474 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I couldn’t restore HP enough...\nWhat ATTACK power...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B12C::
# 1478 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I should have expected no less from\nour LEADER’s kid.\pNo, wait! A TRAINER’s abilities are\nearned only through effort.\pI lost because my own efforts\nweren’t enough.\pGo on! The ONE-HIT KO ROOM is next.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B1F4::
# 1482 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I’m going to keep training at GYMS.\nOne day, I’ll become a LEADER.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B3F7::
# 1486 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Giggle...\nThis is the ACCURACY ROOM.\pIt’s pretty nasty when every attack\nlands without fail.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B454::
# 1490 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "You were a cut above me...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B46F::
# 1494 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "There are some even stronger\nTRAINERS waiting for you.\pThe left is the DEFENSE ROOM, and\nthe right is the RECOVERY ROOM.\pYour POKéMON’s ATTACK power will be\non trial either way.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B521::
# 1498 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Do you know what we’re trying to\nachieve as TRAINERS?\pWe’re striving to become soul mates\nwith our POKéMON.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B58D::
# 1502 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The higher the DEFENSE, the more\nreckless I can be in attack.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B5CB::
# 1506 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Our defenses weren’t enough...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B5EA::
# 1510 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "I think you’ve taught me a valuable\nlesson here.\pNow, go on! The left door goes to\nthe STRENGTH ROOM.\pThe right door opens to the\nONE-HIT KO ROOM.\pBoth of them have TRAINERS who are\noffensively skilled.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B6B5::
# 1514 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Hi! Have you tried using SURF?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B6D4::
# 1518 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Our GYM LEADER told us to go all out\nand beat you.\pEven if you happen to be the\nLEADER’s kid!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B732::
# 1522 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "But... I went all out!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B749::
# 1526 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "The way you use your POKéMON...\nIt’s like your father’s style.\pGo on through! The GYM LEADER, your\nfather, is waiting!$"

Naranja_InsideOfTruck_G08_M01_Text_0817B7C0::
# 1530 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Sure, it’s fine to make your POKéMON\nstronger.\pBut what decides the winner?\pWhy, it’s the feelings TRAINERS have for\ntheir POKéMON.$"

Naranja_InsideOfTruck_G08_M01_Text_0817B844::
# 1534 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "This door appears to be locked\nright now...$"

Naranja_InsideOfTruck_G08_M01_Text_0817B870::
# 1538 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B8D4::
# 1542 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B90F::
# 1546 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“ZERO REDUCTION ROOM,” the sign\nsays.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B950::
# 1550 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817B98A::
# 1554 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817BA00::
# 1558 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\pDo you want to go through?$"

Naranja_InsideOfTruck_G08_M01_Text_0817BAA5::
# 1562 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"

Naranja_InsideOfTruck_G08_M01_Text_0817BAC0::
# 1566 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\pNORMAN’S CERTIFIED TRAINERS:\n{PLAYER}$"

Naranja_InsideOfTruck_G08_M01_Text_08180C32::
# 1570 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Superaste muy bien la prueba.\pAsí que ahora te mereces un combate\ncontra mí.\pNo será fácil.\pAsí que preparate.\p¡En guardia!$"

Naranja_InsideOfTruck_G08_M01_Text_08180D64::
# 1574 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "No me lo esperaba.\pEres buen{RIVAL} {PLAYER}…\p…y  llegarás lejos.\p¡Toma esta medalla!$"

Naranja_InsideOfTruck_G08_M01_Text_08180DDA::
# 1578 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Has empezado con muy buen pie \nla Liga Naranja consiguiendo\lla medalla de la Isla MIKAN.\pHiciste una gran carrera y también\nuna gran batalla.\p¡Ten  esto!$"

Naranja_InsideOfTruck_G08_M01_Text_08180EDB::
# 1582 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "¡Disfruta cada instante y cada lugar!   \nY recuerda ser el mejor.$"

Naranja_InsideOfTruck_G08_M01_Text_08180F1D::
# 1586 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Wahahahah!\nGo forth and endeavor, youngster!$"

Naranja_InsideOfTruck_G08_M01_Text_081C5570::
# 1590 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "DAD: Hi, {PLAYER}!\pI just received a very rare BERRY.\nI’d like you to have it.$"

Naranja_InsideOfTruck_G08_M01_Text_086BEDB0::
# 1594 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER} recibió la medalla\nOJO de CORAL de SISSY.$"

Naranja_InsideOfTruck_G08_M01_Text_086BF602::
# 1598 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "¡Hola foraster{RIVAL}!    \nSoy SISSY, la lìder de isla MIKAN.\p{COLOR 0x04}{PLAYER}: Yo soy {PLAYER},\ny vine para desafiarte a un combate.\p{COLOR 0x01}SISSY: Me parece que no conoces\nel mecanismo de la ÉLITE NARANJA.\pPara desafiar a un lìder tienes que\naceptar la prueba que él decida.\pSi tienes éxito podrás\ndesafiarle a un combate.\p{COLOR 0x04}{PLAYER}: Ahh… \n¿Entonces ahora?\p{COLOR 0x01}SISSY: Deberás ganarme en una\n“Carrera sobre las olas” con tu\lPOKéMON acuatico.\p¿Aceptas?$"

Naranja_InsideOfTruck_G08_M01_Text_086BFB30::
# 1602 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "Eran cinco dósis de HIERRO \nque aumenta la defensa POKéMON,\lbásica para que resistan\lcualquier situación.\pCon la medalla que te di\npodrás deshacer los remolinos\lmarinos que verás.$"

Naranja_InsideOfTruck_G08_M01_Text_086BFCE3::
# 1606 "data/maps/Naranja_InsideOfTruck_G08_M01/scripts.pory"
	.string "{PLAYER} recibió la medalla\nRUBÍ ESPINOSO de DANNY.$"
