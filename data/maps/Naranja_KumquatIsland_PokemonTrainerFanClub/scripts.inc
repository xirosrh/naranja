Naranja_KumquatIsland_PokemonTrainerFanClub_MapScripts::
# 8 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_KumquatIsland_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_KumquatIsland_PokemonTrainerFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_KumquatIsland_PokemonTrainerFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 1, Naranja_KumquatIsland_PokemonTrainerFanClub_OnFrame_1
	.2byte 0


Naranja_KumquatIsland_PokemonTrainerFanClub_OnFrame_1::
# 12 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lockall
# 13 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LASS, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 14 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 15 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A1D6, MSGBOX_DEFAULT
# 16 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LITTLE_GIRL_2, Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_08159402
# 17 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_MAN_5, Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_081593FA
# 18 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 19 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 20 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 21 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A1E8, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LITTLE_GIRL_2, Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_08159409
# 23 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 24 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 25 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LITTLE_GIRL_2, Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_0815940C
# 27 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 2
# 29 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_OnTransition::
# 34 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 1
# 35 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159515
# 36 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 2
# 37 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159429
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159429::
# 42 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special TryLoseFansFromPlayTime
# 43 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 8
# 44 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 45 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 46 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594D5
# 47 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 9
# 48 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 49 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 50 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594DD
# 51 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xA
# 52 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 53 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 54 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594E5
# 55 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xB
# 56 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 57 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 58 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594ED
# 59 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xC
# 60 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 61 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 62 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594F5
# 63 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xD
# 64 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 65 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 66 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594FD
# 67 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xE
# 68 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 69 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 70 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159505
# 71 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xF
# 72 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 73 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 74 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815950D
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594D5::
# 79 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LASS, 7, 5
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594DD::
# 84 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_MAN_3, 3, 4
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594E5::
# 89 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LITTLE_GIRL_2, 7, 2
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594ED::
# 94 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_LITTLE_BOY_1, 5, 5
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594F5::
# 99 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_BOY_2, 5, 2
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594FD::
# 104 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_MAN_5, 8, 4
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159505::
# 109 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_WOMAN_4, 3, 3
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815950D::
# 114 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_KUMQUAT_ISLAND_POKEMON_TRAINER_FAN_CLUB_OLD_WOMAN_1, 8, 3
	return


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159515::
# 119 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594DD
# 120 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594ED
# 121 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081594F5
# 122 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159505
# 123 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	call Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815950D
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Man5::
# 128 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 129 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 130 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xD
# 131 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 132 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 0
# 133 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815959C
# 134 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 135 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 136 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815956E
# 137 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 138 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 139 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159592
# 140 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A400, MSGBOX_DEFAULT
# 141 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815956E::
# 146 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 147 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 148 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159588
# 149 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A36A, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159588::
# 155 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A391, MSGBOX_DEFAULT
# 156 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159592::
# 161 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A48D, MSGBOX_DEFAULT
# 162 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815959C::
# 167 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A4EA, MSGBOX_DEFAULT
# 168 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Lass::
# 173 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 174 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 175 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 8
# 176 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 177 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 0
# 178 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159613
# 179 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 180 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 181 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081595E5
# 182 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 183 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 184 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159609
# 185 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A629, MSGBOX_DEFAULT
# 186 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081595E5::
# 191 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 192 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 193 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081595FF
# 194 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A584, MSGBOX_DEFAULT
# 195 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081595FF::
# 200 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A5AC, MSGBOX_DEFAULT
# 201 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159609::
# 206 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A65B, MSGBOX_DEFAULT
# 207 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159613::
# 212 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A6D4, MSGBOX_DEFAULT
# 213 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Man3::
# 218 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 219 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 220 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 9
# 221 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 222 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 0
# 223 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815968A
# 224 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 225 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 226 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815965C
# 227 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 228 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 229 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159680
# 230 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A814, MSGBOX_DEFAULT
# 231 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815965C::
# 236 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 237 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 238 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159676
# 239 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A71E, MSGBOX_DEFAULT
# 240 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159676::
# 245 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A789, MSGBOX_DEFAULT
# 246 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159680::
# 251 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A8C4, MSGBOX_DEFAULT
# 252 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815968A::
# 257 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A984, MSGBOX_DEFAULT
# 258 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_LittleGirl2::
# 263 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 264 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 265 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xA
# 266 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 267 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_3, 0
# 268 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159701
# 269 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 270 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 271 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081596D3
# 272 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 273 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 274 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081596F7
# 275 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AB0A, MSGBOX_DEFAULT
# 276 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081596D3::
# 281 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 282 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 283 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081596ED
# 284 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AA39, MSGBOX_DEFAULT
# 285 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081596ED::
# 290 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AA83, MSGBOX_DEFAULT
# 291 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081596F7::
# 296 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AB41, MSGBOX_DEFAULT
# 297 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159701::
# 302 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818ABAE, MSGBOX_DEFAULT
# 303 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_LittleBoy1::
# 308 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 309 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 310 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xB
# 311 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 312 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 313 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 314 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815973F
# 315 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 316 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 317 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159763
# 318 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818ACC7, MSGBOX_DEFAULT
# 319 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815973F::
# 324 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 325 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 326 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159759
# 327 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AC15, MSGBOX_DEFAULT
# 328 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159759::
# 333 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AC5E, MSGBOX_DEFAULT
# 334 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159763::
# 339 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AD05, MSGBOX_DEFAULT
# 340 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Boy2::
# 345 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 346 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 347 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xC
# 348 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 349 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 350 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 351 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081597A1
# 352 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 353 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 354 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081597C5
# 355 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AE63, MSGBOX_DEFAULT
# 356 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081597A1::
# 361 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 362 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 363 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081597BB
# 364 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AD6D, MSGBOX_DEFAULT
# 365 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081597BB::
# 370 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818ADEF, MSGBOX_DEFAULT
# 371 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_081597C5::
# 376 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AEF5, MSGBOX_DEFAULT
# 377 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Woman4::
# 382 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 383 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 384 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xE
# 385 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 386 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 387 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 388 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159803
# 389 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 390 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 391 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159827
# 392 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B030, MSGBOX_DEFAULT
# 393 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159803::
# 398 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 399 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 400 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815981D
# 401 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AF62, MSGBOX_DEFAULT
# 402 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815981D::
# 407 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AFD0, MSGBOX_DEFAULT
# 408 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159827::
# 413 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B0C8, MSGBOX_DEFAULT
# 414 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_OldWoman1::
# 419 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	lock
# 420 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 421 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, 0xF
# 422 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 423 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 424 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 425 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159865
# 426 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 427 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 428 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159889
# 429 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B1FD, MSGBOX_DEFAULT
# 430 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159865::
# 435 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 436 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 437 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815987F
# 438 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B16E, MSGBOX_DEFAULT
# 439 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_0815987F::
# 444 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B181, MSGBOX_DEFAULT
# 445 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


Naranja_KumquatIsland_PokemonTrainerFanClub_EventScript_Sub_08159889::
# 450 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	msgbox Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B24F, MSGBOX_DEFAULT
# 451 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	release
	end


# 455 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_081593FA:
# 456 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 457 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 458 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 459 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 460 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 461 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 462 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_left
	step_end

# 465 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_08159402:
# 466 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 467 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 468 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 469 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 470 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 471 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
	step_end

# 474 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_08159409:
# 475 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 476 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
	step_end

# 479 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
Naranja_KumquatIsland_PokemonTrainerFanClub_Movement_0815940C:
# 480 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 481 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 482 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 483 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 484 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A1D6::
# 487 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, wow!\nIt’s {PLAYER}!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A1E8::
# 491 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "I’ve heard the news!\nYou’re really strong, aren’t you?\pWe always argue about who is the\nstrongest of all TRAINERS here.\pSo when I heard about you, I decided\nto be your fan!\pI hope you’ll keep on battling other\ntough TRAINERS.\pThat way, we’ll be able to see more\nof your hot, hot battles.\pThat will make the others here see\nexactly how great you are.\pRemember, I’m cheering for you,\n{PLAYER}!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A36A::
# 495 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Yo, {PLAYER}!\nYou’re the one we want to win!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A391::
# 499 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "The others, they don’t know that\nyou’re the best of the best!\pIsn’t that right, {PLAYER}?\nShow them you’ve got guts!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A400::
# 503 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "I hate to say this, but the TRAINER\neverybody’s talking about is\l{STR_VAR_1}, no question about it!\pThat TRAINER’s power...\nIt’s out of the ordinary.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A48D::
# 507 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Darn it... I’ve been telling people\nthat {STR_VAR_1} is the best now...\pBut no one wants to listen...$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A4EA::
# 511 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "I’ve been hearing things about a\ntough new TRAINER.\pThis TRAINER’s supposed to be beating\nGYM LEADERS, even.\pDo you know anything about this\nnew TRAINER?$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A584::
# 515 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Oh!\n{PLAYER}!\pGo for it!\nI’m pulling for you!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A5AC::
# 519 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Sigh...\nBRAWLY...\pOh, no! Wait!\nThat’s not right! No, no, no!\pI’m your fan through and through!\pSo make me proud!\nGo for it!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A629::
# 523 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "I can’t help it, I can only get to\nlike BRAWLY...$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A65B::
# 527 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Nobody understands the charm of\nBRAWLY...\pI don’t care!\pEven if I’m the only one, I’m going\nto keep cheering for BRAWLY!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A6D4::
# 531 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Whatever anyone says, my favorite\nTRAINER is DEWFORD’s GYM LEADER\lBRAWLY!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A71E::
# 535 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "You’ve surpassed your own father in\nevery regard!\pI’m telling you, so there’s no question\nabout it at all!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A789::
# 539 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Even when things turned bleak, your\nfather never gave up.\pThis I know to be true.\pYou never give up even if you lose!\nSo keep on battling!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A814::
# 543 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "NORMAN battled with more power,\ncharisma, and showmanship than you.\pEven though people may say that\nyou’re strong...\pYou’ve still got a long way to go\ncompared to your father.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A8C4::
# 547 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "You’re beginning to get the same\nair of awe NORMAN exudes.\pBut there’s something conclusively\ndifferent between you and NORMAN.\pI can’t tell you what that is.\nYou’ll have to find it yourself.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818A984::
# 551 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Everyone here, we’re all huge fans\nof POKéMON battles.\pWe discuss who we consider to be\nthe strongest of all TRAINERS.\pIf you were to become famous, we\nmight even become your fans!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AA39::
# 555 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, woweee! It’s {PLAYER}!\nFor real, too!\pPlease, shake my hand, shake my hand!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AA83::
# 559 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "I’ll always cheer for you, {PLAYER}!\nAlways, always!\pI don’t want to see you lose ever,\n{PLAYER}.\pBecause I know you’re really, really\nstrong, {PLAYER}!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AB0A::
# 563 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is really cool...\pEveryone thinks so, right, right?$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AB41::
# 567 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} really is cool, don’t\nyou think so?\pEven if it’s just me, I’m going to keep\ncheering my favorite TRAINER.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818ABAE::
# 571 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "My favorite TRAINER is...\pCool...\pStrong...\pAnd really nice...\pI wish there was a TRAINER like that...$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AC15::
# 575 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Whoa! It’s {PLAYER}!\nWicked!\pWhen I grow up, I want to be strong\nlike you, {PLAYER}!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AC5E::
# 579 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I’m the only one...\pYou’ll always be the only one I\ncheer for, {PLAYER}!\pBecause I believe in you, {PLAYER}!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818ACC7::
# 583 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is so wickedly cool...\nI want to shake hands with my hero.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AD05::
# 587 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I’m the only one...\pI’m never going to stop being\n{STR_VAR_1}’s fan!\pBecause I’ve heard, {STR_VAR_1}\nnever loses!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AD6D::
# 591 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\nYou are amazing after all!\pEver since I set eyes on you, I knew\nthat you were great.\pIt looks like my eyes didn’t deceive me.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818ADEF::
# 595 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Who cares about the others.\nI’m in your corner!\pYou don’t need to worry. Just get\nout there and battle like always.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AE63::
# 599 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "You’re a pretty decent TRAINER,\nI think.\pBut I also think that {STR_VAR_1}\nis number one right now.\pThat’s just my opinion.\nDon’t worry about it too much.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AEF5::
# 603 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Wow, you really are strong.\nMaybe even stronger than {STR_VAR_1}.\pBut {STR_VAR_1} needs me.\pIf I don’t cheer for {STR_VAR_1},\nwho will?$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AF62::
# 607 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "You’ve changed my mind!\nYou are strong, aren’t you?\pI’d like you to tell me how you managed\nto get so strong!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818AFD0::
# 611 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "The tougher the situation, the more\nattractively you battle.\pI can’t wait for your next battle!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B030::
# 615 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Among the recently hot TRAINERS,\n{STR_VAR_1} is the standout.\pThat toughness, it’s simply not normal.\pYou’re doing okay, but you’re not in\nthe same class as {STR_VAR_1}.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B0C8::
# 619 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "You are really popular...\pYou’re strong, and you’re caring to\nPOKéMON. No one can knock you.\pBut, you know, I believe in {STR_VAR_1}.\p{STR_VAR_1} is definitely stronger!\nI’m positive!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B16E::
# 623 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "You...\pImpressive!$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B181::
# 627 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Your true worth, it is fine if only\nI recognized it.\pThe others I doubt will understand\nthe hidden power that beats within.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B1FD::
# 631 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "Yes, I see strength in your eyes.\pBut!\pYou still haven’t realized your\npotential.$"

Naranja_KumquatIsland_PokemonTrainerFanClub_Text_0818B24F::
# 635 "data/maps/Naranja_KumquatIsland_PokemonTrainerFanClub/scripts.pory"
	.string "It is true that you are tremendously\npowerful.\pBut!\nI can tell...\pThat strength cannot be considered\ntrue strength yet!\pTrue strength is...!\n... ...\pActually, I have no idea, either.$"
