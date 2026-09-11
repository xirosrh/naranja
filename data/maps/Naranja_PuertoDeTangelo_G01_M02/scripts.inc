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
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 3, Naranja_PuertoDeTangelo_G01_M02_OnFrame_1
# 9 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 5, Naranja_PuertoDeTangelo_G01_M02_OnFrame_2
# 10 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6, Naranja_PuertoDeTangelo_G01_M02_OnFrame_3
# 11 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 1, Naranja_PuertoDeTangelo_G01_M02_OnFrame_4
# 12 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	map_script_2 VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_2, 3, Naranja_PuebloPaleta_G01_M00_OnFrame_5
	.2byte 0


Naranja_PuertoDeTangelo_G01_M02_OnLoad::
# 17 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6
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
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 3
# 44 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_08152902
# 45 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 5
# 46 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call_if EQUAL, Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081528EA
# 47 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_5, 6
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
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172574
# 73 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	closemessage
# 75 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G01_M02_Movement_0815295E
# 76 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_MOM, Naranja_PuertoDeTangelo_G01_M02_Movement_0815295E
# 77 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 78 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	warp MAP_NARANJA_PUERTO_DE_TANGELO_G01_M03, 0xFF, 1, 1
# 79 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitstate
# 80 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M02_OnFrame_1::
# 85 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 86 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8004, 1
# 87 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8005, 1
# 88 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6956
	return


Naranja_PuertoDeTangelo_G01_M02_OnFrame_3::
# 92 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 93 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8004, 1
# 94 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8005, 1
# 95 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081B6B2E
	return


Naranja_PuertoDeTangelo_G01_M02_OnFrame_4::
# 99 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 100 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	playse SE_PIN
# 101 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_WOMAN_5, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 102 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 103 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_WOMAN_5, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 104 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 105 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 106 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PUERTO_DE_TANGELO_G01_M02_WOMAN_5, Naranja_PuertoDeTangelo_G01_M02_Movement_081529C0
# 107 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 108 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	special GetRivalSonDaughterString
# 109 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081730C2
# 110 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	callstd 4
# 111 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0057
# 112 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_2, 2
# 113 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	releaseall
	end


Naranja_PuertoDeTangelo_G01_M02_EventScript_Trigger_1::
# 118 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	lockall
# 119 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8004, 1
# 120 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_0x8005, 1
# 121 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32772, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 122 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 123 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B69B7
	return


Naranja_PuertoDeTangelo_G01_M02_EventScript_Sub_081B6B2E::
# 127 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32773, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 128 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 129 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6B9D
# 130 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CD4
# 131 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 132 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, 0
# 133 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081725C9
# 134 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	callstd 4
# 135 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	closemessage
# 136 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32773, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BDE
# 137 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 138 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CDA
# 139 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 140 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	call Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6BBE
# 141 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 142 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 143 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_081725FE
# 144 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G01_M00_Text_08172644
# 146 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	callstd 4
# 147 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	closemessage
# 148 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	setvar VAR_TEMP_1, 1
# 149 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	applymovement 32773, Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BE5
# 150 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	waitmovement LOCALID_NONE
# 151 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	goto Naranja_PuebloPaleta_G01_M00_EventScript_Sub_081B6AB8
	return


# 154 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_0815295E:
# 155 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081529C0:
# 159 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 160 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 161 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 162 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 163 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
# 164 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_left
	step_end

# 167 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BDE:
# 168 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 169 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 172 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6BE5:
# 173 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 174 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 175 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_in_place_faster_left
	step_end

# 178 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CD4:
# 179 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 180 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_down
# 181 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 182 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
# 183 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
	step_end

# 186 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
Naranja_PuertoDeTangelo_G01_M02_Movement_081B6CDA:
# 187 "data/maps/Naranja_PuertoDeTangelo_G01_M02/scripts.pory"
	walk_right
	step_end
