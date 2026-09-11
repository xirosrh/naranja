Naranja_SinNombre_G25_M28_MapScripts::
# 11 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SinNombre_G25_M28_OnTransition
# 12 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SinNombre_G25_M28_OnResume
# 5 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_SinNombre_G25_M28_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SinNombre_G25_M28_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SinNombre_G25_M28_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_SinNombre_G25_M28_OnWarp_1
	.2byte 0

Naranja_SinNombre_G25_M28_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_SinNombre_G25_M28_OnFrame_1
	.2byte 0


Naranja_SinNombre_G25_M28_OnTransition::
# 16 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5A5
# 17 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815F630
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5A5::
# 23 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestMultiplayerId
# 24 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 25 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5E0
# 26 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 27 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5E4
# 28 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 29 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5E8
# 30 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 31 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5EC
# 32 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 33 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5F0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5E0::
# 38 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	savebgm MUS_LINK_CONTEST_P1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5E4::
# 43 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	savebgm MUS_LINK_CONTEST_P2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5E8::
# 48 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	savebgm MUS_LINK_CONTEST_P3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5EC::
# 53 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	savebgm MUS_LINK_CONTEST_P4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F5F0::
# 58 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	savebgm MUS_CONTEST
	return


Naranja_SinNombre_G25_M28_OnResume::
# 63 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 64 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F600
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F600::
# 69 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815F919
	return


Naranja_SinNombre_G25_M28_OnFrame_1::
# 74 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A514D
# 75 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815FB64
	end


Naranja_SinNombre_G25_M28_OnWarp_1::
# 80 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_PUERTO_DE_TANGELO_G00_M09
# 81 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815F919
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F630::
# 86 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6E6
# 87 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_0815F646
# 88 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 8
# 89 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if LESS_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F630
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F646::
# 94 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_0
# 95 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 96 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F699
# 97 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 98 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6A4
# 99 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 100 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6AF
# 101 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 102 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6BA
# 103 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 104 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6C5
# 105 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 106 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6D0
# 107 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 108 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6DB
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F699::
# 113 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_4, VAR_TEMP_1
# 114 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6A4::
# 119 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_5, VAR_TEMP_1
# 120 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6AF::
# 125 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_6, VAR_TEMP_1
# 126 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6BA::
# 131 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_7, VAR_TEMP_1
# 132 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6C5::
# 137 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_8, VAR_TEMP_1
# 138 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6D0::
# 143 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_9, VAR_TEMP_1
# 144 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6DB::
# 149 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_A, VAR_TEMP_1
# 150 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F6E6::
# 155 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_RESULT, 0x20
# 156 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GenerateContestRand
# 157 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_RESULT, 1
# 158 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 159 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 160 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F859
# 161 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 162 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F85F
# 163 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 164 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F865
# 165 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 166 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F86B
# 167 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 168 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F871
# 169 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 170 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F877
# 171 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 172 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F87D
# 173 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 174 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F883
# 175 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 176 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F889
# 177 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 178 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F88F
# 179 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xB
# 180 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F895
# 181 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xC
# 182 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F89B
# 183 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xD
# 184 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8A1
# 185 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xE
# 186 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8A7
# 187 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xF
# 188 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8AD
# 189 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x10
# 190 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8B3
# 191 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x11
# 192 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8B9
# 193 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x12
# 194 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8BF
# 195 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x13
# 196 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8C5
# 197 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x14
# 198 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8CB
# 199 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x15
# 200 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8D1
# 201 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x16
# 202 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8D7
# 203 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x17
# 204 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8DD
# 205 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x18
# 206 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8E3
# 207 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x19
# 208 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8E9
# 209 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1A
# 210 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8EF
# 211 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1B
# 212 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8F5
# 213 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1C
# 214 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8FB
# 215 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1D
# 216 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F901
# 217 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1E
# 218 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F907
# 219 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1F
# 220 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F90D
# 221 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x20
# 222 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F913
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F859::
# 227 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 5
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F85F::
# 232 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 6
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F865::
# 237 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 7
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F86B::
# 242 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 8
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F871::
# 247 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0xA
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F877::
# 252 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0xB
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F87D::
# 257 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0xC
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F883::
# 262 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0xD
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F889::
# 267 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0xE
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F88F::
# 272 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0xF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F895::
# 277 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x11
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F89B::
# 282 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x12
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8A1::
# 287 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x13
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8A7::
# 292 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x14
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8AD::
# 297 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x15
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8B3::
# 302 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x16
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8B9::
# 307 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x19
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8BF::
# 312 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x1A
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8C5::
# 317 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x1B
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8CB::
# 322 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x2F
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8D1::
# 327 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x1E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8D7::
# 332 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x1F
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8DD::
# 337 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x20
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8E3::
# 342 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x21
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8E9::
# 347 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x22
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8EF::
# 352 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x23
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8F5::
# 357 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x24
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F8FB::
# 362 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x25
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F901::
# 367 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x26
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F907::
# 372 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x2C
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F90D::
# 377 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x2D
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F913::
# 382 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0x2E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F919::
# 387 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2
# 388 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 389 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F956
# 390 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 391 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F969
# 392 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 393 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815F9C4
# 394 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 395 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FA70
# 396 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 397 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FA70
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F956::
# 402 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 5, 0x14, 3, 2, 3, 1
# 403 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2E, 0x18, 0xB, 2, 3, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F969::
# 408 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2D, 0, 2, 3, 3, 4
# 409 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x42, 1, 2, 4, 3, 4
# 410 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x37, 2, 2, 7, 3, 4
# 411 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2E, 3, 2, 8, 3, 4
# 412 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 5, 0xA, 0xC, 3, 3, 3
# 413 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x14, 0xB, 0xC, 4, 3, 3
# 414 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x18, 0xC, 0xC, 7, 3, 3
# 415 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0xC, 0xD, 0xC, 8, 3, 3
# 416 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2F, 0x14, 3, 2, 3, 1
# 417 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2E, 0x18, 0xB, 2, 3, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815F9C4::
# 422 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2D, 0, 2, 3, 3, 4
# 423 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x42, 1, 2, 4, 3, 4
# 424 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x37, 2, 2, 7, 3, 4
# 425 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x30, 3, 2, 8, 3, 4
# 426 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 5, 0xA, 0xC, 3, 3, 3
# 427 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x14, 0xB, 0xC, 4, 3, 3
# 428 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x18, 0xC, 0xC, 7, 3, 3
# 429 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2D, 0xD, 0xC, 8, 3, 3
# 430 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x16, 0x14, 3, 2, 3, 1
# 431 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x17, 0x14, 6, 2, 3, 1
# 432 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x22, 0x14, 7, 2, 3, 1
# 433 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2E, 0x18, 8, 2, 3, 1
# 434 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x30, 0x18, 0xB, 2, 3, 1
# 435 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0xB, 0x19, 3, 9, 3, 2
# 436 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x23, 0x1A, 4, 9, 3, 2
# 437 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x11, 0x1B, 5, 9, 3, 2
# 438 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x29, 0x1C, 9, 9, 3, 2
# 439 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x26, 0x1D, 0xA, 9, 3, 2
# 440 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x53, 0x1E, 0xB, 9, 3, 2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FA70::
# 445 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2D, 0, 2, 3, 3, 4
# 446 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x42, 1, 2, 4, 3, 4
# 447 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x37, 2, 2, 7, 3, 4
# 448 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0xC, 3, 2, 8, 3, 4
# 449 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x27, 4, 1, 3, 3, 4
# 450 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x22, 6, 1, 5, 3, 4
# 451 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x1A, 7, 1, 6, 3, 4
# 452 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x30, 9, 1, 8, 3, 4
# 453 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 5, 0xA, 0xC, 3, 3, 3
# 454 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x14, 0xB, 0xC, 4, 3, 3
# 455 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x18, 0xC, 0xC, 7, 3, 3
# 456 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2D, 0xD, 0xC, 8, 3, 3
# 457 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x32, 0xE, 0xD, 3, 3, 3
# 458 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x34, 0xF, 0xD, 4, 3, 3
# 459 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x41, 0x11, 0xD, 6, 3, 3
# 460 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x53, 0x12, 0xD, 7, 3, 3
# 461 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x74, 0x13, 0xD, 8, 3, 3
# 462 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x19, 0x14, 3, 2, 3, 1
# 463 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x1F, 0x15, 6, 2, 3, 1
# 464 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x21, 0x16, 7, 2, 3, 1
# 465 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x2E, 0x18, 0xB, 2, 3, 1
# 466 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x31, 0x19, 3, 9, 3, 2
# 467 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x23, 0x1A, 4, 9, 3, 2
# 468 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x30, 0x1B, 5, 9, 3, 2
# 469 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x29, 0x1C, 9, 9, 3, 2
# 470 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x26, 0x1D, 0xA, 9, 3, 2
# 471 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	createvobject 0x53, 0x1E, 0xB, 9, 3, 2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FB64::
# 476 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2
# 477 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 478 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBA1
# 479 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 480 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBAD
# 481 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 482 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBB9
# 483 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 484 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBC5
# 485 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 486 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBD1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBA1::
# 491 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x24
# 492 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	warp MAP_NARANJA_ISLA_MANDARINA_G06_M00, 0xFF, 5, 4
# 493 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitstate
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBAD::
# 498 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x24
# 499 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	warp MAP_NARANJA_ISLA_NAVEL_G05_M01, 0xFF, 5, 4
# 500 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitstate
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBB9::
# 505 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x24
# 506 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	warp MAP_NARANJA_ISLA_MURCOTT_G09_M02, 0xFF, 5, 4
# 507 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitstate
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBC5::
# 512 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x24
# 513 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M04, 0xFF, 6, 4
# 514 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitstate
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_0815FBD1::
# 519 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M04, 0xFF, 7, 4
# 520 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitstate
	end


Naranja_SinNombre_G25_M28_EventScript_Sub_081A514D::
# 525 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8006, 0
# 526 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 527 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_243, Naranja_SinNombre_G25_M28_Movement_081A5DBF
# 528 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 529 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D85
# 530 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 531 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 532 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A51A0
# 533 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A51EA
# 534 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5245
# 535 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A527A
# 536 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A58EE
# 537 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A594A
# 538 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A59FC
# 539 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A49
# 540 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A90
# 541 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5BAB
# 542 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A51A0::
# 547 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_RANK
# 548 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 549 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A51D2
# 550 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 551 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A51D8
# 552 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 553 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A51DE
# 554 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 555 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A51E4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A51D2::
# 560 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8009, 5
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A51D8::
# 565 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8009, 6
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A51DE::
# 570 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8009, 7
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A51E4::
# 575 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8009, 8
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A51EA::
# 580 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_CATEGORY
# 581 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 582 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5227
# 583 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 584 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A522D
# 585 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 586 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5233
# 587 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 588 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5239
# 589 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 590 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A523F
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5227::
# 595 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8008, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A522D::
# 600 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8008, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5233::
# 605 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8008, 2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5239::
# 610 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8008, 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A523F::
# 615 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x8008, 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5245::
# 620 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	bufferstdstring 1, 0x8008
# 621 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	bufferstdstring 2, 0x8009
# 622 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A525F
# 623 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 624 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D87
# 625 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 626 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A525F::
# 631 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 632 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5273
# 633 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A68F0
# 634 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5273::
# 639 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6976
# 640 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A527A::
# 645 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A52AE
# 646 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5323
# 647 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5455
# 648 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A53E5
# 649 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5880
# 650 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_0x8006, 1
# 651 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8006, 4
# 652 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A527A
# 653 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5377
# 654 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 6
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A52AE::
# 659 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8006, 0
# 660 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A52DB
# 661 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8006, 1
# 662 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A52ED
# 663 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8006, 2
# 664 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A52FF
# 665 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8006, 3
# 666 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5311
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A52DB::
# 671 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 672 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_VARS, Naranja_SinNombre_G25_M28_Movement_081A5DCE
# 673 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 674 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 675 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x800B, 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A52ED::
# 680 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 681 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_241, Naranja_SinNombre_G25_M28_Movement_081A5DDA
# 682 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 683 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 684 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x800B, 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A52FF::
# 689 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 690 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_242, Naranja_SinNombre_G25_M28_Movement_081A5DE2
# 691 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 692 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 693 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x800B, 5
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5311::
# 698 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 699 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_243, Naranja_SinNombre_G25_M28_Movement_081A5DEA
# 700 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 701 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 702 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_0x800B, 0xE
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5323::
# 707 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special BufferContestTrainerAndMonNames
# 708 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_0x8006, 1
# 709 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	buffernumberstring 1, VAR_0x8006
# 710 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 711 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 32779, Naranja_SinNombre_G25_M28_Movement_081A5D9C
# 712 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 713 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 714 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addobject LOCALID_SIN_NOMBRE_G25_M28_ITEM_BALL
# 715 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_LEDGE
# 716 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 717 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 32779, Naranja_SinNombre_G25_M28_Movement_081A5D9C
# 718 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 719 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 720 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_0x8006, 0xFFFF
# 721 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_BALL_OPEN
# 722 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special ShowContestEntryMonPic
# 723 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A535E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A535E::
# 728 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 729 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5370
# 730 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	message Naranja_SinNombre_G25_M28_Text_081A6A04
# 731 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5370::
# 736 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6A04
# 737 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5377::
# 742 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A53B3
# 743 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A53CE
# 744 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_M_ENCORE2
# 745 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 746 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A90
# 747 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D9F
# 748 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 749 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_CONTEST_JUDGE, Naranja_SinNombre_G25_M28_Movement_081A5DA1
# 750 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 751 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x14
# 752 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D8F
# 753 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_CONTEST_JUDGE, Naranja_SinNombre_G25_M28_Movement_081A5D8F
# 754 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A53B3::
# 759 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 760 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A53C7
# 761 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6A1F
# 762 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A53C7::
# 767 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6A1F
# 768 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A53CE::
# 773 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 774 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A53DF
# 775 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	message Naranja_SinNombre_G25_M28_Text_081A6AE1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A53DF::
# 780 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6AE1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A53E5::
# 785 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5DAF
# 786 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 787 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_M_ENCORE2
# 788 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5AE4
# 789 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_248, Naranja_SinNombre_G25_M28_Movement_081A5DB7
# 790 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_245, Naranja_SinNombre_G25_M28_Movement_081A5DBB
# 791 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_246, Naranja_SinNombre_G25_M28_Movement_081A5DB7
# 792 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 793 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5DB7
# 794 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 795 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_249, Naranja_SinNombre_G25_M28_Movement_081A5DAF
# 796 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_250, Naranja_SinNombre_G25_M28_Movement_081A5DBB
# 797 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_244, Naranja_SinNombre_G25_M28_Movement_081A5DB3
# 798 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_247, Naranja_SinNombre_G25_M28_Movement_081A5DAF
# 799 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 800 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5DC1
# 801 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 802 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5DCA
# 803 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_CONTEST_JUDGE, Naranja_SinNombre_G25_M28_Movement_081A5DC5
# 804 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 805 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5455::
# 810 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestMonCondition
# 811 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 1
# 812 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A555A
# 813 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 2
# 814 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A55B8
# 815 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 3
# 816 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5616
# 817 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 4
# 818 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5674
# 819 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 820 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A56D2
# 821 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 9
# 822 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_2, 9
# 823 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 9
# 824 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_4, 9
# 825 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_5, 9
# 826 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_6, 9
# 827 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_7, 9
# 828 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_8, 9
# 829 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0
# 830 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A54EB
# 831 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0
# 832 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_2, 0
# 833 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 0
# 834 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_4, 0
# 835 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_5, 0
# 836 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_6, 0
# 837 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_7, 0
# 838 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_8, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A54EB::
# 843 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_RESULT, 8
# 844 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GenerateContestRand
# 845 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 846 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5760
# 847 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 848 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5784
# 849 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 850 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A57A8
# 851 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 852 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A57CC
# 853 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 854 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A57F0
# 855 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 856 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5814
# 857 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 858 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5838
# 859 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 860 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A585C
# 861 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0
# 862 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A54EB
# 863 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A555A::
# 868 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x50
# 869 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A575A
# 870 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x46
# 871 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5754
# 872 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x3C
# 873 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A574E
# 874 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x32
# 875 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5748
# 876 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x28
# 877 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5742
# 878 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1E
# 879 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A573C
# 880 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x14
# 881 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5736
# 882 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xA
# 883 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5730
# 884 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A55B8::
# 889 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xE6
# 890 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A575A
# 891 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xD2
# 892 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5754
# 893 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xBE
# 894 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A574E
# 895 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xAA
# 896 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5748
# 897 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x96
# 898 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5742
# 899 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x82
# 900 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A573C
# 901 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x6E
# 902 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5736
# 903 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x5A
# 904 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5730
# 905 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5616::
# 910 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x17C
# 911 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A575A
# 912 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x15E
# 913 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5754
# 914 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x140
# 915 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A574E
# 916 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x122
# 917 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5748
# 918 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x104
# 919 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5742
# 920 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xE6
# 921 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A573C
# 922 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xC8
# 923 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5736
# 924 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xAA
# 925 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5730
# 926 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5674::
# 931 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x258
# 932 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A575A
# 933 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x230
# 934 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5754
# 935 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x208
# 936 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A574E
# 937 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1E0
# 938 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5748
# 939 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1B8
# 940 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5742
# 941 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x190
# 942 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A573C
# 943 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x168
# 944 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5736
# 945 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x140
# 946 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5730
# 947 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A56D2::
# 952 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x258
# 953 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A575A
# 954 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x226
# 955 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5754
# 956 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1F4
# 957 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A574E
# 958 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1C2
# 959 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5748
# 960 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x190
# 961 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5742
# 962 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x12C
# 963 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A573C
# 964 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xC8
# 965 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5736
# 966 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x64
# 967 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5730
# 968 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5730::
# 973 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5736::
# 978 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A573C::
# 983 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5742::
# 988 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5748::
# 993 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 5
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A574E::
# 998 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 6
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5754::
# 1003 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 7
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A575A::
# 1008 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_0, 8
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5760::
# 1013 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 1014 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5783
# 1015 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_244, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1016 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1017 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1018 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1019 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5783::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5784::
# 1028 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 1
# 1029 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A57A7
# 1030 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_245, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1031 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1032 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1033 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_2, 1
# 1034 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A57A7::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A57A8::
# 1043 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_3, 1
# 1044 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A57CB
# 1045 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_246, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1046 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1047 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1048 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 1
# 1049 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A57CB::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A57CC::
# 1058 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_4, 1
# 1059 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A57EF
# 1060 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_247, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1061 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1062 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1063 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1064 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A57EF::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A57F0::
# 1073 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_5, 1
# 1074 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5813
# 1075 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_248, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1076 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1077 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1078 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1079 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5813::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5814::
# 1088 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_6, 1
# 1089 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5837
# 1090 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_249, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1091 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1092 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1093 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_6, 1
# 1094 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5837::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5838::
# 1103 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_7, 1
# 1104 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A585B
# 1105 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_250, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1106 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1107 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1108 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_7, 1
# 1109 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A585B::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A585C::
# 1118 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 1119 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A587F
# 1120 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_ARTIST, Naranja_SinNombre_G25_M28_Movement_081A5D8D
# 1121 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_PIN
# 1122 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xE
# 1123 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_8, 1
# 1124 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A587F::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5880::
# 1133 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	closemessage
# 1134 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	release
# 1135 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	removeobject LOCALID_SIN_NOMBRE_G25_M28_ITEM_BALL
# 1136 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special HideContestEntryMonPic
# 1137 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8006
# 1138 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1139 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A58BA
# 1140 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1141 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A58C7
# 1142 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1143 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A58D4
# 1144 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1145 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A58E1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A58BA::
# 1150 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1151 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 32779, Naranja_SinNombre_G25_M28_Movement_081A5DD4
# 1152 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1153 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A58C7::
# 1158 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1159 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 32779, Naranja_SinNombre_G25_M28_Movement_081A5DDE
# 1160 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1161 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A58D4::
# 1166 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1167 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 32779, Naranja_SinNombre_G25_M28_Movement_081A5DE6
# 1168 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1169 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A58E1::
# 1174 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1175 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 32779, Naranja_SinNombre_G25_M28_Movement_081A5DF0
# 1176 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1177 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A58EE::
# 1182 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1183 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5DA3
# 1184 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1185 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5930
# 1186 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 1187 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D91
# 1188 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_CONTEST_JUDGE, Naranja_SinNombre_G25_M28_Movement_081A5D95
# 1189 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1190 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 1191 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1192 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	startcontest
# 1193 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1194 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1195 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D95
# 1196 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_CONTEST_JUDGE, Naranja_SinNombre_G25_M28_Movement_081A5D91
# 1197 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1198 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5930::
# 1203 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1204 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5944
# 1205 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6AF5
# 1206 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5944::
# 1211 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6AF5
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A594A::
# 1216 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5984
# 1217 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A59A2
# 1218 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D8B
# 1219 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1220 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A59C0
# 1221 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A59DE
# 1222 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_WOMAN_4, Naranja_SinNombre_G25_M28_Movement_081A5D8F
# 1223 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1224 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	closemessage
# 1225 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
# 1226 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1227 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	showcontestresults
# 1228 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1229 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playbgm MUS_CONTEST_WINNER, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5984::
# 1234 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1235 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5998
# 1236 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6C06
# 1237 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5998::
# 1242 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6C06
# 1243 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 1244 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59A2::
# 1249 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1250 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A59B6
# 1251 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6C21
# 1252 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59B6::
# 1257 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6C21
# 1258 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 1259 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59C0::
# 1264 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1265 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A59D4
# 1266 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6C9D
# 1267 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59D4::
# 1272 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6C9D
# 1273 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 1274 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59DE::
# 1279 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1280 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A59F2
# 1281 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6D16
# 1282 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59F2::
# 1287 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6D16
# 1288 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 1289 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A59FC::
# 1294 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestWinnerId
# 1295 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8005
# 1296 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1297 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A31
# 1298 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1299 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A37
# 1300 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1301 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A3D
# 1302 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1303 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A43
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A31::
# 1308 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A37::
# 1313 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A3D::
# 1318 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 5
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A43::
# 1323 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_3, 0xE
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A49::
# 1328 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special BufferContestWinnerTrainerName
# 1329 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special BufferContestWinnerMonName
# 1330 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_0x8005, 1
# 1331 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	buffernumberstring 1, VAR_0x8005
# 1332 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_0x8005, 0xFFFF
# 1333 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A75
# 1334 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 16387, Naranja_SinNombre_G25_M28_Movement_081A5D99
# 1335 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1336 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_M_ENCORE2
# 1337 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A75::
# 1342 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1343 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A89
# 1344 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6D3C
# 1345 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A89::
# 1350 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	messageautoscroll Naranja_SinNombre_G25_M28_Text_081A6D3C
# 1351 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A90::
# 1356 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	addvar VAR_TEMP_1, 1
# 1357 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1358 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 1
# 1359 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if GREATER_THAN, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5AE4
# 1360 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_248, Naranja_SinNombre_G25_M28_Movement_081A5DB7
# 1361 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_245, Naranja_SinNombre_G25_M28_Movement_081A5DBB
# 1362 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_246, Naranja_SinNombre_G25_M28_Movement_081A5DB7
# 1363 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
# 1364 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_249, Naranja_SinNombre_G25_M28_Movement_081A5DAF
# 1365 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_250, Naranja_SinNombre_G25_M28_Movement_081A5DBB
# 1366 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_244, Naranja_SinNombre_G25_M28_Movement_081A5DB3
# 1367 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement LOCALID_SIN_NOMBRE_G25_M28_247, Naranja_SinNombre_G25_M28_Movement_081A5DAF
# 1368 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 4
# 1369 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A90
# 1370 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5AE4::
# 1375 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0, 1
# 1376 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 2, 1
# 1377 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 4, 4
# 1378 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 6, 1
# 1379 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 8, 1
# 1380 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xA, 1
# 1381 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xC, 1
# 1382 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xE, 1
# 1383 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x10, 1
# 1384 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x12, 1
# 1385 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x14, 4
# 1386 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x16, 4
# 1387 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x19, 4
# 1388 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1B, 3
# 1389 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1C, 4
# 1390 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xA
# 1391 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0, 4
# 1392 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 2, 4
# 1393 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 4, 4
# 1394 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 6, 4
# 1395 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 8, 4
# 1396 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xA, 3
# 1397 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xC, 3
# 1398 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xE, 3
# 1399 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x10, 3
# 1400 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x12, 3
# 1401 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x14, 1
# 1402 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x16, 1
# 1403 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x19, 2
# 1404 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1B, 2
# 1405 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1C, 2
# 1406 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xA
# 1407 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 1, 2
# 1408 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 3, 2
# 1409 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 5, 2
# 1410 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 7, 2
# 1411 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 9, 4
# 1412 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xB, 2
# 1413 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xF, 2
# 1414 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xD, 2
# 1415 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x11, 2
# 1416 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x13, 2
# 1417 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x15, 3
# 1418 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x17, 3
# 1419 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x18, 3
# 1420 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1A, 4
# 1421 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1D, 3
# 1422 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1E, 3
# 1423 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xA
# 1424 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 1, 4
# 1425 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 3, 4
# 1426 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 5, 4
# 1427 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 7, 4
# 1428 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 9, 4
# 1429 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xB, 3
# 1430 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xF, 3
# 1431 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0xD, 3
# 1432 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x11, 3
# 1433 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x13, 3
# 1434 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x15, 1
# 1435 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x17, 1
# 1436 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x18, 1
# 1437 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1A, 2
# 1438 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1D, 2
# 1439 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	turnvobject 0x1E, 2
# 1440 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0xA
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5BAB::
# 1445 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1446 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C4C
# 1447 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C12
# 1448 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	checkflag FLAG_TEMP_2
# 1449 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5BF6
# 1450 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6DC5
# 1451 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
# 1452 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmessage
# 1453 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C7F
# 1454 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CE5
# 1455 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playse SE_M_ENCORE2
# 1456 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1457 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5A90
# 1458 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x1E
# 1459 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special ShouldReadyContestArtist
# 1460 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 1461 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C46
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5BF6::
# 1466 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x25
# 1467 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6DF1
# 1468 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
# 1469 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x5A
# 1470 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special ShouldReadyContestArtist
# 1471 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 1472 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C46
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C12::
# 1477 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	specialvar VAR_RESULT, HasMonWonThisContestBefore
# 1478 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1479 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C23
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C23::
# 1484 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestWinnerId
# 1485 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8005, 3
# 1486 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C32
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C32::
# 1491 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_CONTEST_RANK, 3
# 1492 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C41
# 1493 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setflag FLAG_TEMP_2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C41::
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C42::
# 1502 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_010E
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C46::
# 1507 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 1
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C4C::
# 1512 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay 0x3C
# 1513 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C6A
# 1514 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special ShouldReadyContestArtist
# 1515 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 1516 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C64
# 1517 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	closemessage
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C64::
# 1522 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 2
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C6A::
# 1527 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestPlayerId
# 1528 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestWinnerId
# 1529 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_var VAR_0x8004, VAR_0x8005
# 1530 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C7C
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C7C::
# 1535 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x23
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C7F::
# 1540 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8005
# 1541 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1542 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CB1
# 1543 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1544 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CBE
# 1545 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1546 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CCB
# 1547 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1548 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CD8
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CB1::
# 1553 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1554 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 16387, Naranja_SinNombre_G25_M28_Movement_081A5DF6
# 1555 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1556 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CBE::
# 1561 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1562 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 16387, Naranja_SinNombre_G25_M28_Movement_081A5DFA
# 1563 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1564 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CCB::
# 1569 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1570 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 16387, Naranja_SinNombre_G25_M28_Movement_081A5DA5
# 1571 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1572 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CD8::
# 1577 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1578 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	applymovement 16387, Naranja_SinNombre_G25_M28_Movement_081A5DA9
# 1579 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitmovement LOCALID_NONE
# 1580 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CE5::
# 1585 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GetContestWinnerId
# 1586 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_0x8005, 3
# 1587 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CFC
# 1588 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6DF1
# 1589 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5CFC::
# 1594 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 2
# 1595 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	call_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5C42
# 1596 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x25
# 1597 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	specialvar VAR_RESULT, HasMonWonThisContestBefore
# 1598 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1599 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5D5B
# 1600 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_CONTEST_RANK, 3
# 1601 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5D3B
# 1602 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6DF1
# 1603 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5D2D::
# 1608 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6E1F
# 1609 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
# 1610 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE, 4
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5D3B::
# 1615 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB
# 1616 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 1617 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 0
# 1618 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1619 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	goto_if EQUAL, Naranja_SinNombre_G25_M28_EventScript_Sub_081A5D2D
# 1620 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6DF1
# 1621 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 3
	return


Naranja_SinNombre_G25_M28_EventScript_Sub_081A5D5B::
# 1626 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special GiveMonContestRibbon
# 1627 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	incrementgamestat 0x2A
# 1628 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_083B
# 1629 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lockall
# 1630 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6D6A
# 1631 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
# 1632 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1633 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6D96
# 1634 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
# 1635 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	waitfanfare
# 1636 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	special BufferContestWinnerMonName
# 1637 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	loadword 0, Naranja_SinNombre_G25_M28_Text_081A6DAC
# 1638 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	callstd 4
# 1639 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	releaseall
	return


# 1643 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D85:
# 1644 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_down
	step_end

# 1647 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D87:
# 1648 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	lock_facing_direction
# 1649 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
# 1650 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	unlock_facing_direction
	step_end

# 1653 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D8B:
# 1654 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1657 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D8D:
# 1658 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	emote_heart
	step_end

# 1661 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D8F:
# 1662 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1665 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D91:
# 1666 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1667 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1668 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1671 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D95:
# 1672 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1673 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1674 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1677 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D99:
# 1678 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
# 1679 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1682 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D9C:
# 1683 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1684 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
	step_end

# 1687 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5D9F:
# 1688 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1691 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DA1:
# 1692 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1695 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DA3:
# 1696 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1699 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DA5:
# 1700 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1701 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1702 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
	step_end

# 1705 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DA9:
# 1706 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1707 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1708 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1709 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1710 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
	step_end

# 1713 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DAF:
# 1714 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_left
# 1715 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1716 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_original_direction
	step_end

# 1719 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DB3:
# 1720 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_up
# 1721 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1722 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_original_direction
	step_end

# 1725 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DB7:
# 1726 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_right
# 1727 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1728 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_original_direction
	step_end

# 1731 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DBB:
# 1732 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_down
# 1733 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1734 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_original_direction
	step_end

# 1737 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DBF:
# 1738 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_up
	step_end

# 1741 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DC1:
# 1742 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	face_up
# 1743 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1744 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1747 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DC5:
# 1748 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_left
# 1749 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1750 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1751 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1754 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DCA:
# 1755 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1756 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	delay_16
# 1757 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1760 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DCE:
# 1761 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
# 1762 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1763 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1764 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1765 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1768 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DD4:
# 1769 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_left
# 1770 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_left
# 1771 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_left
# 1772 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_down
# 1773 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1776 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DDA:
# 1777 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
# 1778 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1779 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1782 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DDE:
# 1783 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_left
# 1784 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_down
# 1785 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1788 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DE2:
# 1789 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
# 1790 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1791 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1794 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DE6:
# 1795 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_right
# 1796 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_down
# 1797 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1800 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DEA:
# 1801 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
# 1802 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1803 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1804 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_left
# 1805 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1808 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DF0:
# 1809 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_right
# 1810 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_right
# 1811 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_right
# 1812 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_fast_down
# 1813 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1816 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DF6:
# 1817 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1818 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_right
# 1819 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
	step_end

# 1822 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
Naranja_SinNombre_G25_M28_Movement_081A5DFA:
# 1823 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	walk_up
	step_end

Naranja_SinNombre_G25_M28_Text_081A68F0::
# 1826 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: Hello! We’re just getting started\nwith a {STR_VAR_3} Rank POKéMON\l{STR_VAR_2} CONTEST!\pThe participating TRAINERS and their\nPOKéMON are as follows:$"

Naranja_SinNombre_G25_M28_Text_081A6976::
# 1830 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: Hello! We’re just getting started\nwith a 4-player linked POKéMON\l{STR_VAR_2} CONTEST!\pThe participating TRAINERS and their\nPOKéMON are as follows:$"

Naranja_SinNombre_G25_M28_Text_081A6A04::
# 1834 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: Entry No. {STR_VAR_2}!\n{STR_VAR_1}’s {STR_VAR_3}!$"

Naranja_SinNombre_G25_M28_Text_081A6A1F::
# 1838 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: We’ve just seen the four POKéMON\ncontestants.\pNow it’s time for primary judging!\pThe audience will vote on their\nfavorite POKéMON contestants.\pWithout any further ado, let the\nvoting begin!$"

Naranja_SinNombre_G25_M28_Text_081A6AE1::
# 1842 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "Voting under way...$"

Naranja_SinNombre_G25_M28_Text_081A6AF5::
# 1846 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "Voting is now complete!\pWhile the votes are being tallied,\nlet’s move on to secondary judging!\pThe second stage of judging is the\nmuch anticipated appeal time!\pMay the contestants amaze us with\nsuperb appeals of dazzling moves!\pLet’s see a little enthusiasm!\nLet’s appeal!$"

Naranja_SinNombre_G25_M28_Text_081A6C06::
# 1850 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: That’s it for judging!$"

Naranja_SinNombre_G25_M28_Text_081A6C21::
# 1854 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "Thank you all for a most wonderful\ndisplay of quality appeals!\pThis concludes all judging!\nThank you for your fine efforts!$"

Naranja_SinNombre_G25_M28_Text_081A6C9D::
# 1858 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "Now, all that remains is the pulse-\npounding proclamation of the winner.\pThe JUDGE looks ready to make the\nannouncement!$"

Naranja_SinNombre_G25_M28_Text_081A6D16::
# 1862 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "JUDGE: I will now declare the winner!$"

Naranja_SinNombre_G25_M28_Text_081A6D3C::
# 1866 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: Entry No. {STR_VAR_2}!\p{STR_VAR_3} and {STR_VAR_1},\ncongratulations!$"

Naranja_SinNombre_G25_M28_Text_081A6D6A::
# 1870 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "We confer on you this RIBBON as your\nprize!$"

Naranja_SinNombre_G25_M28_Text_081A6D96::
# 1874 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"

Naranja_SinNombre_G25_M28_Text_081A6DAC::
# 1878 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n{STR_VAR_1}.$"

Naranja_SinNombre_G25_M28_Text_081A6DC5::
# 1882 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: Here you are!\nPlease accept your prize!$"

Naranja_SinNombre_G25_M28_Text_081A6DF1::
# 1886 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "MC: Congratulations!\nPlease do compete again!$"

Naranja_SinNombre_G25_M28_Text_081A6E1F::
# 1890 "data/maps/Naranja_SinNombre_G25_M28/scripts.pory"
	.string "Please pick up your prize at the\nreception counter later.\lPlease do compete again!$"
