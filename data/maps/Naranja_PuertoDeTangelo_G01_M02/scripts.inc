Naranja_PuertoDeTangelo_G01_M02_MapScripts::
# 5 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_PuertoDeTangelo_G01_M02_OnLoad
# 6 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuertoDeTangelo_G01_M02_OnTransition
# 7 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuertoDeTangelo_G01_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_PuertoDeTangelo_G01_M02_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 3, Naranja_PuertoDeTangelo_G01_M02_OnFrame_1
# 9 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 5, Naranja_PuertoDeTangelo_G01_M02_OnFrame_2
# 10 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6, Naranja_PuertoDeTangelo_G01_M02_OnFrame_3
# 11 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 1, Naranja_PuertoDeTangelo_G01_M02_OnFrame_4
# 12 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PALLET_TOWN_OAK_SCENE_STATE, 3, Naranja_PuebloPaleta_G01_M00_OnFrame_5
	.2byte 0


Naranja_PuertoDeTangelo_G01_M02_OnLoad::
# 17 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6
# 18 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if LESS_THAN, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_0815289E
# 19 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0112
# 20 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528B1
	end


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_0815289E::
# 25 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setmetatile 5, 4, 0x270, 1
# 26 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setmetatile 5, 2, 0x268, 1
	return


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528B1::
# 31 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	checkplayergender
# 32 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 33 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528BE
	return


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528BE::
# 38 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setmetatile 6, 7, 0x293, 1
	return


Naranja_PuertoDeTangelo_G01_M02_OnTransition::
# 43 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 3
# 44 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_08152902
# 45 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 5
# 46 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528EA
# 47 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PALLET_TANGELO_TRAVEL_STATE, 6
# 48 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528F6
	end


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528EA::
# 53 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, 2, 4
# 54 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, 7
	return


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528F6::
# 59 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, 6, 5
# 60 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, 7
	return


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_08152902::
# 65 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setobjectxyperm LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, 1, 8
# 66 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setobjectmovementtype LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, 7
	return


Naranja_PuertoDeTangelo_G01_M02_OnFrame_2::
# 71 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 72 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172574, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	closemessage
# 74 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G01_M02_Movement_0815295E
# 75 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, Naranja_PuertoDeTangelo_G01_M02_Movement_0815295E
# 76 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 77 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	warp MAP_NARANJA_PUERTO_DE_TANGELO_G01_M03, 0xFF, 1, 1
# 78 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitstate
# 79 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M02_OnFrame_1::
# 84 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 85 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8004, 1
# 86 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8005, 1
# 87 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6956
	return


Naranja_PuertoDeTangelo_G01_M02_OnFrame_3::
# 91 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 92 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8004, 1
# 93 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8005, 1
# 94 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081B6B2E
	return


Naranja_PuertoDeTangelo_G01_M02_OnFrame_4::
# 98 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 99 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	playse SE_PIN
# 100 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_WOMAN_5, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 101 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 102 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_WOMAN_5, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 103 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 104 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 105 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_WOMAN_5, Naranja_PuertoDeTangelo_G01_M02_Movement_081529C0
# 106 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 107 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	special GetRivalSonDaughterString
# 108 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081730C2, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0057
# 110 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 2
# 111 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M02_EventScript_Trigger_1::
# 116 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 117 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8004, 1
# 118 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8005, 1
# 119 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32772, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 120 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 121 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69B7
	return


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081B6B2E::
# 125 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 126 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 127 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6B9D
# 128 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CD4
# 129 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 130 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, 0
# 131 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081725C9, MSGBOX_DEFAULT
# 132 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	closemessage
# 133 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32773, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BDE
# 134 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 135 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CDA
# 136 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 137 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6BBE
# 138 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 139 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 140 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_081725FE, MSGBOX_DEFAULT
# 141 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M00_Text_08172644, MSGBOX_DEFAULT
# 142 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	closemessage
# 143 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_TEMP_1, 1
# 144 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32773, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BE5
# 145 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 146 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6AB8
	return


# 149 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_0815295E:
# 150 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_up
	step_end

# 153 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081529C0:
# 154 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 155 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 156 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 157 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 158 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 159 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
	step_end

# 162 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BDE:
# 163 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 164 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 167 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BE5:
# 168 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 169 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 170 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 173 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CD4:
# 174 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 175 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 176 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 177 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 178 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
	step_end

# 181 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CDA:
# 182 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
	step_end
