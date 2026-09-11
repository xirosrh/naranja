Naranja_IslaKumquat_G13_M09_MapScripts::
# 8 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaKumquat_G13_M09_OnTransition
# 5 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaKumquat_G13_M09_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaKumquat_G13_M09_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 1, Naranja_IslaKumquat_G13_M09_OnFrame_1
	.2byte 0


Naranja_IslaKumquat_G13_M09_OnFrame_1::
# 12 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lockall
# 13 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M09_LASS, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 14 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 15 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A1D6
# 16 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 17 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M09_LITTLE_GIRL_2, Naranja_IslaKumquat_G13_M09_Movement_08159402
# 18 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M09_MAN_5, Naranja_IslaKumquat_G13_M09_Movement_081593FA
# 19 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 20 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 21 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A1E8
# 23 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 24 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M09_LITTLE_GIRL_2, Naranja_IslaKumquat_G13_M09_Movement_08159409
# 25 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 27 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M09_LITTLE_GIRL_2, Naranja_IslaKumquat_G13_M09_Movement_0815940C
# 29 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 2
# 31 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M09_OnTransition::
# 36 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 1
# 37 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159515
# 38 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 2
# 39 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159429
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159429::
# 44 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special TryLoseFansFromPlayTime
# 45 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 8
# 46 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 47 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 48 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594D5
# 49 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 9
# 50 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 51 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 52 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594DD
# 53 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xA
# 54 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 55 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 56 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594E5
# 57 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xB
# 58 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 59 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 60 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594ED
# 61 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xC
# 62 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 63 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 64 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594F5
# 65 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xD
# 66 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 67 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 68 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594FD
# 69 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xE
# 70 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 71 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 72 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159505
# 73 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xF
# 74 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 75 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 76 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815950D
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594D5::
# 81 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_LASS, 7, 5
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594DD::
# 86 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_MAN_3, 3, 4
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594E5::
# 91 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_LITTLE_GIRL_2, 7, 2
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594ED::
# 96 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_LITTLE_BOY_1, 5, 5
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594F5::
# 101 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_BOY_2, 5, 2
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594FD::
# 106 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_MAN_5, 8, 4
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159505::
# 111 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_WOMAN_4, 3, 3
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815950D::
# 116 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setobjectxyperm LOCALID_ISLA_KUMQUAT_G13_M09_OLD_WOMAN_1, 8, 3
	return


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159515::
# 121 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594DD
# 122 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594ED
# 123 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M09_EventScript_Sub_081594F5
# 124 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159505
# 125 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	call Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815950D
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId2::
# 130 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 131 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 132 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xD
# 133 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 134 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 0
# 135 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815959C
# 136 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 137 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 138 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815956E
# 139 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 140 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 141 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159592
# 142 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A400
# 143 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 144 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815956E::
# 149 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 150 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 151 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159588
# 152 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A36A
# 153 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 154 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159588::
# 159 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A391
# 160 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 161 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159592::
# 166 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A48D
# 167 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 168 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815959C::
# 173 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A4EA
# 174 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 175 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_LASS_LocalId1::
# 180 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 181 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 182 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 8
# 183 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 184 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 0
# 185 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159613
# 186 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 187 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 188 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081595E5
# 189 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 190 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 191 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159609
# 192 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A629
# 193 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 194 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081595E5::
# 199 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 200 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 201 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081595FF
# 202 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A584
# 203 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 204 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081595FF::
# 209 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A5AC
# 210 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 211 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159609::
# 216 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A65B
# 217 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 218 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159613::
# 223 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A6D4
# 224 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 225 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId3::
# 230 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 231 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 232 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 9
# 233 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 234 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 0
# 235 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815968A
# 236 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 237 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 238 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815965C
# 239 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 240 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 241 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159680
# 242 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A814
# 243 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 244 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815965C::
# 249 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 250 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 251 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159676
# 252 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A71E
# 253 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 254 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159676::
# 259 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A789
# 260 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 261 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159680::
# 266 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A8C4
# 267 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 268 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815968A::
# 273 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818A984
# 274 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 275 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_2_LocalId4::
# 280 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 281 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 282 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xA
# 283 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 284 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_3, 0
# 285 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159701
# 286 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 287 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 288 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081596D3
# 289 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 290 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 291 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081596F7
# 292 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AB0A
# 293 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 294 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081596D3::
# 299 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 300 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 301 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081596ED
# 302 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AA39
# 303 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 304 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081596ED::
# 309 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AA83
# 310 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 311 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081596F7::
# 316 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AB41
# 317 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 318 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159701::
# 323 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818ABAE
# 324 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 325 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId5::
# 330 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 331 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 332 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xB
# 333 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 334 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 335 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 336 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815973F
# 337 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 338 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 339 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159763
# 340 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818ACC7
# 341 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 342 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815973F::
# 347 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 348 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 349 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159759
# 350 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AC15
# 351 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 352 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159759::
# 357 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AC5E
# 358 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 359 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159763::
# 364 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AD05
# 365 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 366 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId6::
# 371 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 372 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 373 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xC
# 374 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 375 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 376 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 377 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081597A1
# 378 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 379 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 380 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081597C5
# 381 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AE63
# 382 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 383 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081597A1::
# 388 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 389 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 390 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_081597BB
# 391 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AD6D
# 392 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 393 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081597BB::
# 398 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818ADEF
# 399 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 400 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_081597C5::
# 405 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AEF5
# 406 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 407 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId7::
# 412 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 413 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 414 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xE
# 415 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 416 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 417 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 418 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159803
# 419 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 420 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 421 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159827
# 422 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818B030
# 423 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 424 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159803::
# 429 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 430 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 431 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815981D
# 432 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AF62
# 433 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 434 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815981D::
# 439 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818AFD0
# 440 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 441 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159827::
# 446 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818B0C8
# 447 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 448 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_1_LocalId8::
# 453 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	lock
# 454 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	faceplayer
# 455 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	setvar VAR_0x8004, 0xF
# 456 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	special BufferFanClubTrainerName
# 457 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 458 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 459 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159865
# 460 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 461 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 462 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159889
# 463 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818B1FD
# 464 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 465 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159865::
# 470 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 471 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 472 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815987F
# 473 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818B16E
# 474 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 475 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_0815987F::
# 480 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818B181
# 481 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 482 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M09_EventScript_Sub_08159889::
# 487 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M09_Text_0818B24F
# 488 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	callstd 4
# 489 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	release
	end


# 493 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
Naranja_IslaKumquat_G13_M09_Movement_081593FA:
# 494 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	delay_8
# 495 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_in_place_faster_down
# 496 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_down
# 497 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_down
# 498 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_down
# 499 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_left
# 500 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_left
	step_end

# 503 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
Naranja_IslaKumquat_G13_M09_Movement_08159402:
# 504 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_left
# 505 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_left
# 506 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_down
# 507 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_down
# 508 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_left
# 509 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_down
	step_end

# 512 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
Naranja_IslaKumquat_G13_M09_Movement_08159409:
# 513 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_down
# 514 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_in_place_faster_right
	step_end

# 517 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
Naranja_IslaKumquat_G13_M09_Movement_0815940C:
# 518 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	jump_in_place_right
# 519 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_up
# 520 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_up
# 521 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_fast_right
# 522 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_IslaKumquat_G13_M09_Text_0818A1D6::
# 525 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Oh, wow!\nIt’s {PLAYER}!$"

Naranja_IslaKumquat_G13_M09_Text_0818A1E8::
# 529 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "I’ve heard the news!\nYou’re really strong, aren’t you?\pWe always argue about who is the\nstrongest of all TRAINERS here.\pSo when I heard about you, I decided\nto be your fan!\pI hope you’ll keep on battling other\ntough TRAINERS.\pThat way, we’ll be able to see more\nof your hot, hot battles.\pThat will make the others here see\nexactly how great you are.\pRemember, I’m cheering for you,\n{PLAYER}!$"

Naranja_IslaKumquat_G13_M09_Text_0818A36A::
# 533 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Yo, {PLAYER}!\nYou’re the one we want to win!$"

Naranja_IslaKumquat_G13_M09_Text_0818A391::
# 537 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "The others, they don’t know that\nyou’re the best of the best!\pIsn’t that right, {PLAYER}?\nShow them you’ve got guts!$"

Naranja_IslaKumquat_G13_M09_Text_0818A400::
# 541 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "I hate to say this, but the TRAINER\neverybody’s talking about is\l{STR_VAR_1}, no question about it!\pThat TRAINER’s power...\nIt’s out of the ordinary.$"

Naranja_IslaKumquat_G13_M09_Text_0818A48D::
# 545 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Darn it... I’ve been telling people\nthat {STR_VAR_1} is the best now...\pBut no one wants to listen...$"

Naranja_IslaKumquat_G13_M09_Text_0818A4EA::
# 549 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "I’ve been hearing things about a\ntough new TRAINER.\pThis TRAINER’s supposed to be beating\nGYM LEADERS, even.\pDo you know anything about this\nnew TRAINER?$"

Naranja_IslaKumquat_G13_M09_Text_0818A584::
# 553 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Oh!\n{PLAYER}!\pGo for it!\nI’m pulling for you!$"

Naranja_IslaKumquat_G13_M09_Text_0818A5AC::
# 557 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Sigh...\nBRAWLY...\pOh, no! Wait!\nThat’s not right! No, no, no!\pI’m your fan through and through!\pSo make me proud!\nGo for it!$"

Naranja_IslaKumquat_G13_M09_Text_0818A629::
# 561 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "I can’t help it, I can only get to\nlike BRAWLY...$"

Naranja_IslaKumquat_G13_M09_Text_0818A65B::
# 565 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Nobody understands the charm of\nBRAWLY...\pI don’t care!\pEven if I’m the only one, I’m going\nto keep cheering for BRAWLY!$"

Naranja_IslaKumquat_G13_M09_Text_0818A6D4::
# 569 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Whatever anyone says, my favorite\nTRAINER is DEWFORD’s GYM LEADER\lBRAWLY!$"

Naranja_IslaKumquat_G13_M09_Text_0818A71E::
# 573 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "You’ve surpassed your own father in\nevery regard!\pI’m telling you, so there’s no question\nabout it at all!$"

Naranja_IslaKumquat_G13_M09_Text_0818A789::
# 577 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Even when things turned bleak, your\nfather never gave up.\pThis I know to be true.\pYou never give up even if you lose!\nSo keep on battling!$"

Naranja_IslaKumquat_G13_M09_Text_0818A814::
# 581 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "NORMAN battled with more power,\ncharisma, and showmanship than you.\pEven though people may say that\nyou’re strong...\pYou’ve still got a long way to go\ncompared to your father.$"

Naranja_IslaKumquat_G13_M09_Text_0818A8C4::
# 585 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "You’re beginning to get the same\nair of awe NORMAN exudes.\pBut there’s something conclusively\ndifferent between you and NORMAN.\pI can’t tell you what that is.\nYou’ll have to find it yourself.$"

Naranja_IslaKumquat_G13_M09_Text_0818A984::
# 589 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Everyone here, we’re all huge fans\nof POKéMON battles.\pWe discuss who we consider to be\nthe strongest of all TRAINERS.\pIf you were to become famous, we\nmight even become your fans!$"

Naranja_IslaKumquat_G13_M09_Text_0818AA39::
# 593 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Oh, woweee! It’s {PLAYER}!\nFor real, too!\pPlease, shake my hand, shake my hand!$"

Naranja_IslaKumquat_G13_M09_Text_0818AA83::
# 597 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "I’ll always cheer for you, {PLAYER}!\nAlways, always!\pI don’t want to see you lose ever,\n{PLAYER}.\pBecause I know you’re really, really\nstrong, {PLAYER}!$"

Naranja_IslaKumquat_G13_M09_Text_0818AB0A::
# 601 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "{STR_VAR_1} is really cool...\pEveryone thinks so, right, right?$"

Naranja_IslaKumquat_G13_M09_Text_0818AB41::
# 605 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "{STR_VAR_1} really is cool, don’t\nyou think so?\pEven if it’s just me, I’m going to keep\ncheering my favorite TRAINER.$"

Naranja_IslaKumquat_G13_M09_Text_0818ABAE::
# 609 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "My favorite TRAINER is...\pCool...\pStrong...\pAnd really nice...\pI wish there was a TRAINER like that...$"

Naranja_IslaKumquat_G13_M09_Text_0818AC15::
# 613 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Whoa! It’s {PLAYER}!\nWicked!\pWhen I grow up, I want to be strong\nlike you, {PLAYER}!$"

Naranja_IslaKumquat_G13_M09_Text_0818AC5E::
# 617 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Even if I’m the only one...\pYou’ll always be the only one I\ncheer for, {PLAYER}!\pBecause I believe in you, {PLAYER}!$"

Naranja_IslaKumquat_G13_M09_Text_0818ACC7::
# 621 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "{STR_VAR_1} is so wickedly cool...\nI want to shake hands with my hero.$"

Naranja_IslaKumquat_G13_M09_Text_0818AD05::
# 625 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Even if I’m the only one...\pI’m never going to stop being\n{STR_VAR_1}’s fan!\pBecause I’ve heard, {STR_VAR_1}\nnever loses!$"

Naranja_IslaKumquat_G13_M09_Text_0818AD6D::
# 629 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "{PLAYER}!\nYou are amazing after all!\pEver since I set eyes on you, I knew\nthat you were great.\pIt looks like my eyes didn’t deceive me.$"

Naranja_IslaKumquat_G13_M09_Text_0818ADEF::
# 633 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Who cares about the others.\nI’m in your corner!\pYou don’t need to worry. Just get\nout there and battle like always.$"

Naranja_IslaKumquat_G13_M09_Text_0818AE63::
# 637 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "You’re a pretty decent TRAINER,\nI think.\pBut I also think that {STR_VAR_1}\nis number one right now.\pThat’s just my opinion.\nDon’t worry about it too much.$"

Naranja_IslaKumquat_G13_M09_Text_0818AEF5::
# 641 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Wow, you really are strong.\nMaybe even stronger than {STR_VAR_1}.\pBut {STR_VAR_1} needs me.\pIf I don’t cheer for {STR_VAR_1},\nwho will?$"

Naranja_IslaKumquat_G13_M09_Text_0818AF62::
# 645 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "You’ve changed my mind!\nYou are strong, aren’t you?\pI’d like you to tell me how you managed\nto get so strong!$"

Naranja_IslaKumquat_G13_M09_Text_0818AFD0::
# 649 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "The tougher the situation, the more\nattractively you battle.\pI can’t wait for your next battle!$"

Naranja_IslaKumquat_G13_M09_Text_0818B030::
# 653 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Among the recently hot TRAINERS,\n{STR_VAR_1} is the standout.\pThat toughness, it’s simply not normal.\pYou’re doing okay, but you’re not in\nthe same class as {STR_VAR_1}.$"

Naranja_IslaKumquat_G13_M09_Text_0818B0C8::
# 657 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "You are really popular...\pYou’re strong, and you’re caring to\nPOKéMON. No one can knock you.\pBut, you know, I believe in {STR_VAR_1}.\p{STR_VAR_1} is definitely stronger!\nI’m positive!$"

Naranja_IslaKumquat_G13_M09_Text_0818B16E::
# 661 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "You...\pImpressive!$"

Naranja_IslaKumquat_G13_M09_Text_0818B181::
# 665 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Your true worth, it is fine if only\nI recognized it.\pThe others I doubt will understand\nthe hidden power that beats within.$"

Naranja_IslaKumquat_G13_M09_Text_0818B1FD::
# 669 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "Yes, I see strength in your eyes.\pBut!\pYou still haven’t realized your\npotential.$"

Naranja_IslaKumquat_G13_M09_Text_0818B24F::
# 673 "data/maps/Naranja_IslaKumquat_G13_M09/scripts.pory"
	.string "It is true that you are tremendously\npowerful.\pBut!\nI can tell...\pThat strength cannot be considered\ntrue strength yet!\pTrue strength is...!\n... ...\pActually, I have no idea, either.$"
