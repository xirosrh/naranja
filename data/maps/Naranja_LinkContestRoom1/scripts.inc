Naranja_LinkContestRoom1_MapScripts::
# 11 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_LinkContestRoom1_OnTransition
# 12 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_LinkContestRoom1_OnResume
# 5 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_LinkContestRoom1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_LinkContestRoom1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_LinkContestRoom1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_LinkContestRoom1_OnWarp_1
	.2byte 0

Naranja_LinkContestRoom1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	map_script_2 VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1, Naranja_LinkContestRoom1_OnFrame_1
	.2byte 0


Naranja_LinkContestRoom1_OnTransition::
# 16 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815F5A5
# 17 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815F630
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815F5A5::
# 23 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestMultiplayerId
# 24 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 25 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F5E0
# 26 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 27 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F5E4
# 28 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 29 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F5E8
# 30 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 31 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F5EC
# 32 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 33 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F5F0
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F5E0::
# 38 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	savebgm MUS_LINK_CONTEST_P1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F5E4::
# 43 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	savebgm MUS_LINK_CONTEST_P2
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F5E8::
# 48 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	savebgm MUS_LINK_CONTEST_P3
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F5EC::
# 53 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	savebgm MUS_LINK_CONTEST_P4
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F5F0::
# 58 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	savebgm MUS_CONTEST
	return


Naranja_LinkContestRoom1_OnResume::
# 63 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 64 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F600
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815F600::
# 69 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815F919
	return


Naranja_LinkContestRoom1_OnFrame_1::
# 74 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A514D
# 75 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815FB64
	end


Naranja_LinkContestRoom1_OnWarp_1::
# 80 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_TANGELO_PORT
# 81 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815F919
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815F630::
# 86 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815F6E6
# 87 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_0815F646
# 88 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 8
# 89 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if LESS_THAN, Naranja_LinkContestRoom1_EventScript_Sub_0815F630
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F646::
# 94 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_0
# 95 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 96 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F699
# 97 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 98 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F6A4
# 99 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 100 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F6AF
# 101 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 102 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F6BA
# 103 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 104 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F6C5
# 105 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 106 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F6D0
# 107 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 108 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F6DB
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815F699::
# 113 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_4, VAR_TEMP_1
# 114 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6A4::
# 119 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_5, VAR_TEMP_1
# 120 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6AF::
# 125 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_6, VAR_TEMP_1
# 126 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6BA::
# 131 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_7, VAR_TEMP_1
# 132 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6C5::
# 137 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_8, VAR_TEMP_1
# 138 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6D0::
# 143 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_9, VAR_TEMP_1
# 144 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6DB::
# 149 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_A, VAR_TEMP_1
# 150 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F6E6::
# 155 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_RESULT, 0x20
# 156 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GenerateContestRand
# 157 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_RESULT, 1
# 158 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 159 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 160 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F859
# 161 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 162 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F85F
# 163 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 164 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F865
# 165 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 166 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F86B
# 167 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 168 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F871
# 169 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 170 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F877
# 171 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 172 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F87D
# 173 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 174 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F883
# 175 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 176 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F889
# 177 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 178 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F88F
# 179 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xB
# 180 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F895
# 181 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xC
# 182 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F89B
# 183 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xD
# 184 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8A1
# 185 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xE
# 186 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8A7
# 187 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xF
# 188 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8AD
# 189 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x10
# 190 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8B3
# 191 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x11
# 192 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8B9
# 193 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x12
# 194 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8BF
# 195 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x13
# 196 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8C5
# 197 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x14
# 198 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8CB
# 199 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x15
# 200 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8D1
# 201 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x16
# 202 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8D7
# 203 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x17
# 204 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8DD
# 205 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x18
# 206 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8E3
# 207 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x19
# 208 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8E9
# 209 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1A
# 210 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8EF
# 211 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1B
# 212 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8F5
# 213 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1C
# 214 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F8FB
# 215 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1D
# 216 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F901
# 217 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1E
# 218 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F907
# 219 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x1F
# 220 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F90D
# 221 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x20
# 222 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F913
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815F859::
# 227 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 5
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F85F::
# 232 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 6
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F865::
# 237 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 7
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F86B::
# 242 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 8
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F871::
# 247 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0xA
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F877::
# 252 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0xB
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F87D::
# 257 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0xC
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F883::
# 262 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0xD
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F889::
# 267 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0xE
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F88F::
# 272 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0xF
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F895::
# 277 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x11
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F89B::
# 282 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x12
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8A1::
# 287 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x13
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8A7::
# 292 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x14
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8AD::
# 297 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x15
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8B3::
# 302 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x16
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8B9::
# 307 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x19
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8BF::
# 312 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x1A
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8C5::
# 317 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x1B
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8CB::
# 322 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x2F
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8D1::
# 327 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x1E
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8D7::
# 332 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x1F
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8DD::
# 337 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x20
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8E3::
# 342 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x21
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8E9::
# 347 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x22
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8EF::
# 352 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x23
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8F5::
# 357 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x24
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F8FB::
# 362 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x25
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F901::
# 367 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x26
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F907::
# 372 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x2C
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F90D::
# 377 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x2D
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F913::
# 382 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0x2E
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F919::
# 387 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2
# 388 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 389 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F956
# 390 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 391 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F969
# 392 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 393 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815F9C4
# 394 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 395 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FA70
# 396 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 397 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FA70
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F956::
# 402 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 5, 0x14, 3, 2, 3, 1
# 403 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2E, 0x18, 0xB, 2, 3, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F969::
# 408 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2D, 0, 2, 3, 3, 4
# 409 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x42, 1, 2, 4, 3, 4
# 410 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x37, 2, 2, 7, 3, 4
# 411 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2E, 3, 2, 8, 3, 4
# 412 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 5, 0xA, 0xC, 3, 3, 3
# 413 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x14, 0xB, 0xC, 4, 3, 3
# 414 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x18, 0xC, 0xC, 7, 3, 3
# 415 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0xC, 0xD, 0xC, 8, 3, 3
# 416 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2F, 0x14, 3, 2, 3, 1
# 417 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2E, 0x18, 0xB, 2, 3, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815F9C4::
# 422 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2D, 0, 2, 3, 3, 4
# 423 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x42, 1, 2, 4, 3, 4
# 424 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x37, 2, 2, 7, 3, 4
# 425 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x30, 3, 2, 8, 3, 4
# 426 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 5, 0xA, 0xC, 3, 3, 3
# 427 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x14, 0xB, 0xC, 4, 3, 3
# 428 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x18, 0xC, 0xC, 7, 3, 3
# 429 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2D, 0xD, 0xC, 8, 3, 3
# 430 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x16, 0x14, 3, 2, 3, 1
# 431 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x17, 0x14, 6, 2, 3, 1
# 432 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x22, 0x14, 7, 2, 3, 1
# 433 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2E, 0x18, 8, 2, 3, 1
# 434 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x30, 0x18, 0xB, 2, 3, 1
# 435 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0xB, 0x19, 3, 9, 3, 2
# 436 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x23, 0x1A, 4, 9, 3, 2
# 437 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x11, 0x1B, 5, 9, 3, 2
# 438 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x29, 0x1C, 9, 9, 3, 2
# 439 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x26, 0x1D, 0xA, 9, 3, 2
# 440 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x53, 0x1E, 0xB, 9, 3, 2
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815FA70::
# 445 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2D, 0, 2, 3, 3, 4
# 446 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x42, 1, 2, 4, 3, 4
# 447 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x37, 2, 2, 7, 3, 4
# 448 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0xC, 3, 2, 8, 3, 4
# 449 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x27, 4, 1, 3, 3, 4
# 450 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x22, 6, 1, 5, 3, 4
# 451 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x1A, 7, 1, 6, 3, 4
# 452 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x30, 9, 1, 8, 3, 4
# 453 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 5, 0xA, 0xC, 3, 3, 3
# 454 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x14, 0xB, 0xC, 4, 3, 3
# 455 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x18, 0xC, 0xC, 7, 3, 3
# 456 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2D, 0xD, 0xC, 8, 3, 3
# 457 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x32, 0xE, 0xD, 3, 3, 3
# 458 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x34, 0xF, 0xD, 4, 3, 3
# 459 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x41, 0x11, 0xD, 6, 3, 3
# 460 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x53, 0x12, 0xD, 7, 3, 3
# 461 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x74, 0x13, 0xD, 8, 3, 3
# 462 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x19, 0x14, 3, 2, 3, 1
# 463 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x1F, 0x15, 6, 2, 3, 1
# 464 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x21, 0x16, 7, 2, 3, 1
# 465 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x2E, 0x18, 0xB, 2, 3, 1
# 466 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x31, 0x19, 3, 9, 3, 2
# 467 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x23, 0x1A, 4, 9, 3, 2
# 468 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x30, 0x1B, 5, 9, 3, 2
# 469 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x29, 0x1C, 9, 9, 3, 2
# 470 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x26, 0x1D, 0xA, 9, 3, 2
# 471 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	createvobject 0x53, 0x1E, 0xB, 9, 3, 2
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815FB64::
# 476 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2
# 477 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 478 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FBA1
# 479 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 480 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FBAD
# 481 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 482 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FBB9
# 483 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 484 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FBC5
# 485 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 486 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_0815FBD1
	return


Naranja_LinkContestRoom1_EventScript_Sub_0815FBA1::
# 491 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x24
# 492 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	warp MAP_NARANJA_MANDARIN_ISLAND_SOUTH_CONTEST_LOBBY, 0xFF, 5, 4
# 493 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitstate
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815FBAD::
# 498 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x24
# 499 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	warp MAP_NARANJA_NAVEL_ISLAND_CONTEST_LOBBY, 0xFF, 5, 4
# 500 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitstate
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815FBB9::
# 505 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x24
# 506 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	warp MAP_NARANJA_MURCOTT_ISLAND_CONTEST_LOBBY, 0xFF, 5, 4
# 507 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitstate
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815FBC5::
# 512 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x24
# 513 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	warp MAP_NARANJA_KUMQUAT_ISLAND_CONTEST_LOBBY, 0xFF, 6, 4
# 514 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitstate
	end


Naranja_LinkContestRoom1_EventScript_Sub_0815FBD1::
# 519 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	warp MAP_NARANJA_KUMQUAT_ISLAND_CONTEST_LOBBY, 0xFF, 7, 4
# 520 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitstate
	end


Naranja_LinkContestRoom1_EventScript_Sub_081A514D::
# 525 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8006, 0
# 526 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 527 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_243, Naranja_LinkContestRoom1_Movement_081A5DBF
# 528 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 529 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D85
# 530 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 531 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 532 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A51A0
# 533 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A51EA
# 534 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5245
# 535 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A527A
# 536 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A58EE
# 537 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A594A
# 538 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A59FC
# 539 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5A49
# 540 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5A90
# 541 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5BAB
# 542 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 2
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A51A0::
# 547 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_RANK
# 548 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 549 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A51D2
# 550 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 551 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A51D8
# 552 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 553 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A51DE
# 554 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 555 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A51E4
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A51D2::
# 560 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8009, 5
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A51D8::
# 565 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8009, 6
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A51DE::
# 570 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8009, 7
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A51E4::
# 575 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8009, 8
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A51EA::
# 580 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_CATEGORY
# 581 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 582 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5227
# 583 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 584 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A522D
# 585 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 586 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5233
# 587 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 588 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5239
# 589 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 590 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A523F
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5227::
# 595 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8008, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A522D::
# 600 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8008, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5233::
# 605 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8008, 2
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5239::
# 610 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8008, 3
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A523F::
# 615 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x8008, 4
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5245::
# 620 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	bufferstdstring 1, 0x8008
# 621 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	bufferstdstring 2, 0x8009
# 622 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A525F
# 623 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 624 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D87
# 625 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 626 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A525F::
# 631 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 632 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5273
# 633 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A68F0, MSGBOX_SIGN
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5273::
# 638 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6976
# 639 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A527A::
# 644 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A52AE
# 645 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5323
# 646 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5455
# 647 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A53E5
# 648 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5880
# 649 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_0x8006, 1
# 650 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8006, 4
# 651 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if NOT_EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A527A
# 652 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5377
# 653 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 6
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A52AE::
# 658 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8006, 0
# 659 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A52DB
# 660 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8006, 1
# 661 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A52ED
# 662 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8006, 2
# 663 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A52FF
# 664 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8006, 3
# 665 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5311
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A52DB::
# 670 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 671 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_VARS, Naranja_LinkContestRoom1_Movement_081A5DCE
# 672 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 673 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 674 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x800B, 3
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A52ED::
# 679 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 680 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_241, Naranja_LinkContestRoom1_Movement_081A5DDA
# 681 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 682 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 683 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x800B, 4
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A52FF::
# 688 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 689 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_242, Naranja_LinkContestRoom1_Movement_081A5DE2
# 690 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 691 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 692 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x800B, 5
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5311::
# 697 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 698 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_243, Naranja_LinkContestRoom1_Movement_081A5DEA
# 699 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 700 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 701 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_0x800B, 0xE
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5323::
# 706 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special BufferContestTrainerAndMonNames
# 707 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_0x8006, 1
# 708 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	buffernumberstring 1, VAR_0x8006
# 709 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 710 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 32779, Naranja_LinkContestRoom1_Movement_081A5D9C
# 711 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 712 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 713 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addobject LOCALID_NARANJA_LINK_CONTEST_ROOM1_ITEM_BALL
# 714 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_LEDGE
# 715 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 716 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 32779, Naranja_LinkContestRoom1_Movement_081A5D9C
# 717 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 718 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 719 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_0x8006, 0xFFFF
# 720 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 721 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special ShowContestEntryMonPic
# 722 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A535E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A535E::
# 727 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 728 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5370
# 729 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	message Naranja_LinkContestRoom1_Text_081A6A04
# 730 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5370::
# 735 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6A04
# 736 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5377::
# 741 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A53B3
# 742 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A53CE
# 743 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_M_ENCORE2
# 744 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 745 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5A90
# 746 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D9F
# 747 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 748 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_CONTEST_JUDGE, Naranja_LinkContestRoom1_Movement_081A5DA1
# 749 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 750 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x14
# 751 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D8F
# 752 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_CONTEST_JUDGE, Naranja_LinkContestRoom1_Movement_081A5D8F
# 753 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A53B3::
# 758 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 759 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A53C7
# 760 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6A1F, MSGBOX_DEFAULT
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A53C7::
# 765 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6A1F
# 766 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A53CE::
# 771 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 772 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A53DF
# 773 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	message Naranja_LinkContestRoom1_Text_081A6AE1
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A53DF::
# 778 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6AE1
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A53E5::
# 783 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5DAF
# 784 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 785 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_M_ENCORE2
# 786 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5AE4
# 787 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_248, Naranja_LinkContestRoom1_Movement_081A5DB7
# 788 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_245, Naranja_LinkContestRoom1_Movement_081A5DBB
# 789 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_246, Naranja_LinkContestRoom1_Movement_081A5DB7
# 790 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 791 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5DB7
# 792 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 793 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_249, Naranja_LinkContestRoom1_Movement_081A5DAF
# 794 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_250, Naranja_LinkContestRoom1_Movement_081A5DBB
# 795 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_244, Naranja_LinkContestRoom1_Movement_081A5DB3
# 796 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_247, Naranja_LinkContestRoom1_Movement_081A5DAF
# 797 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 798 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5DC1
# 799 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 800 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5DCA
# 801 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_CONTEST_JUDGE, Naranja_LinkContestRoom1_Movement_081A5DC5
# 802 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 803 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5455::
# 808 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestMonCondition
# 809 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 1
# 810 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A555A
# 811 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 2
# 812 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A55B8
# 813 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 3
# 814 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5616
# 815 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 4
# 816 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5674
# 817 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 818 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A56D2
# 819 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 9
# 820 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_2, 9
# 821 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 9
# 822 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_4, 9
# 823 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_5, 9
# 824 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_6, 9
# 825 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_7, 9
# 826 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_8, 9
# 827 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0
# 828 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A54EB
# 829 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0
# 830 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_2, 0
# 831 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 0
# 832 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_4, 0
# 833 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_5, 0
# 834 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_6, 0
# 835 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_7, 0
# 836 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_8, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A54EB::
# 841 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_RESULT, 8
# 842 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GenerateContestRand
# 843 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 844 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5760
# 845 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 846 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5784
# 847 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 848 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A57A8
# 849 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 850 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A57CC
# 851 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 852 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A57F0
# 853 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 854 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5814
# 855 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 856 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5838
# 857 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 7
# 858 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A585C
# 859 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0
# 860 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A54EB
# 861 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A555A::
# 866 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x50
# 867 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A575A
# 868 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x46
# 869 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5754
# 870 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x3C
# 871 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A574E
# 872 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x32
# 873 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5748
# 874 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x28
# 875 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5742
# 876 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1E
# 877 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A573C
# 878 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x14
# 879 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5736
# 880 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xA
# 881 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5730
# 882 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A55B8::
# 887 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xE6
# 888 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A575A
# 889 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xD2
# 890 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5754
# 891 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xBE
# 892 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A574E
# 893 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xAA
# 894 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5748
# 895 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x96
# 896 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5742
# 897 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x82
# 898 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A573C
# 899 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x6E
# 900 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5736
# 901 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x5A
# 902 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5730
# 903 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5616::
# 908 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x17C
# 909 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A575A
# 910 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x15E
# 911 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5754
# 912 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x140
# 913 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A574E
# 914 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x122
# 915 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5748
# 916 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x104
# 917 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5742
# 918 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xE6
# 919 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A573C
# 920 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xC8
# 921 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5736
# 922 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xAA
# 923 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5730
# 924 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5674::
# 929 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x258
# 930 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A575A
# 931 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x230
# 932 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5754
# 933 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x208
# 934 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A574E
# 935 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1E0
# 936 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5748
# 937 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1B8
# 938 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5742
# 939 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x190
# 940 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A573C
# 941 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x168
# 942 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5736
# 943 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x140
# 944 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5730
# 945 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A56D2::
# 950 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x258
# 951 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A575A
# 952 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x226
# 953 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5754
# 954 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1F4
# 955 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A574E
# 956 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x1C2
# 957 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5748
# 958 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x190
# 959 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5742
# 960 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x12C
# 961 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A573C
# 962 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xC8
# 963 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5736
# 964 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 0x64
# 965 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5730
# 966 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5730::
# 971 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5736::
# 976 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 2
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A573C::
# 981 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 3
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5742::
# 986 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 4
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5748::
# 991 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 5
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A574E::
# 996 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 6
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5754::
# 1001 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 7
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A575A::
# 1006 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_0, 8
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5760::
# 1011 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 1012 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5783
# 1013 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_244, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1014 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1015 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1016 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1017 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5783::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5784::
# 1026 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 1
# 1027 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A57A7
# 1028 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_245, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1029 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1030 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1031 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 1032 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A57A7::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A57A8::
# 1041 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_3, 1
# 1042 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A57CB
# 1043 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_246, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1044 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1045 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1046 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 1
# 1047 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A57CB::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A57CC::
# 1056 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_4, 1
# 1057 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A57EF
# 1058 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_247, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1059 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1060 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1061 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1062 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A57EF::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A57F0::
# 1071 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_5, 1
# 1072 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5813
# 1073 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_248, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1074 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1075 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1076 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1077 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5813::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5814::
# 1086 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_6, 1
# 1087 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5837
# 1088 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_249, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1089 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1090 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1091 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_6, 1
# 1092 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5837::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5838::
# 1101 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_7, 1
# 1102 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A585B
# 1103 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_250, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1104 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1105 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1106 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_7, 1
# 1107 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A585B::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A585C::
# 1116 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 1117 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A587F
# 1118 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_ARTIST, Naranja_LinkContestRoom1_Movement_081A5D8D
# 1119 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_PIN
# 1120 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xE
# 1121 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_8, 1
# 1122 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_0, 0xFFFF
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A587F::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5880::
# 1131 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	closemessage
# 1132 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	release
# 1133 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	removeobject LOCALID_NARANJA_LINK_CONTEST_ROOM1_ITEM_BALL
# 1134 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special HideContestEntryMonPic
# 1135 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8006
# 1136 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1137 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A58BA
# 1138 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1139 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A58C7
# 1140 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1141 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A58D4
# 1142 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1143 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A58E1
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A58BA::
# 1148 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1149 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 32779, Naranja_LinkContestRoom1_Movement_081A5DD4
# 1150 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1151 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A58C7::
# 1156 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1157 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 32779, Naranja_LinkContestRoom1_Movement_081A5DDE
# 1158 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1159 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A58D4::
# 1164 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1165 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 32779, Naranja_LinkContestRoom1_Movement_081A5DE6
# 1166 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1167 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A58E1::
# 1172 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1173 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 32779, Naranja_LinkContestRoom1_Movement_081A5DF0
# 1174 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1175 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A58EE::
# 1180 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1181 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5DA3
# 1182 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1183 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5930
# 1184 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 1185 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D91
# 1186 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_CONTEST_JUDGE, Naranja_LinkContestRoom1_Movement_081A5D95
# 1187 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1188 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 1189 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1190 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	startcontest
# 1191 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1192 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1193 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D95
# 1194 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_CONTEST_JUDGE, Naranja_LinkContestRoom1_Movement_081A5D91
# 1195 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1196 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5930::
# 1201 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1202 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5944
# 1203 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6AF5, MSGBOX_SIGN
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5944::
# 1208 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6AF5
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A594A::
# 1213 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5984
# 1214 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A59A2
# 1215 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D8B
# 1216 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1217 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A59C0
# 1218 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A59DE
# 1219 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_WOMAN_4, Naranja_LinkContestRoom1_Movement_081A5D8F
# 1220 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1221 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	closemessage
# 1222 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
# 1223 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1224 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	showcontestresults
# 1225 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1226 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playbgm MUS_CONTEST_WINNER, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5984::
# 1231 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1232 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5998
# 1233 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6C06, MSGBOX_DEFAULT
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5998::
# 1238 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6C06
# 1239 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 1240 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59A2::
# 1245 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1246 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A59B6
# 1247 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6C21, MSGBOX_DEFAULT
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59B6::
# 1252 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6C21
# 1253 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 1254 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59C0::
# 1259 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1260 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A59D4
# 1261 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6C9D, MSGBOX_DEFAULT
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59D4::
# 1266 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6C9D
# 1267 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 1268 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59DE::
# 1273 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1274 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A59F2
# 1275 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6D16, MSGBOX_DEFAULT
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59F2::
# 1280 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6D16
# 1281 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 1282 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A59FC::
# 1287 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestWinnerId
# 1288 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8005
# 1289 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1290 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5A31
# 1291 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1292 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5A37
# 1293 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1294 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5A3D
# 1295 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1296 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5A43
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A31::
# 1301 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 3
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A37::
# 1306 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 4
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A3D::
# 1311 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 5
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A43::
# 1316 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_3, 0xE
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A49::
# 1321 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special BufferContestWinnerTrainerName
# 1322 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special BufferContestWinnerMonName
# 1323 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_0x8005, 1
# 1324 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	buffernumberstring 1, VAR_0x8005
# 1325 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_0x8005, 0xFFFF
# 1326 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5A75
# 1327 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 16387, Naranja_LinkContestRoom1_Movement_081A5D99
# 1328 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1329 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_M_ENCORE2
# 1330 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A75::
# 1335 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1336 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5A89
# 1337 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6D3C, MSGBOX_DEFAULT
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A89::
# 1342 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	messageautoscroll Naranja_LinkContestRoom1_Text_081A6D3C
# 1343 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5A90::
# 1348 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	addvar VAR_TEMP_1, 1
# 1349 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1350 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 1
# 1351 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if GREATER_THAN, Naranja_LinkContestRoom1_EventScript_Sub_081A5AE4
# 1352 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_248, Naranja_LinkContestRoom1_Movement_081A5DB7
# 1353 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_245, Naranja_LinkContestRoom1_Movement_081A5DBB
# 1354 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_246, Naranja_LinkContestRoom1_Movement_081A5DB7
# 1355 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
# 1356 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_249, Naranja_LinkContestRoom1_Movement_081A5DAF
# 1357 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_250, Naranja_LinkContestRoom1_Movement_081A5DBB
# 1358 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_244, Naranja_LinkContestRoom1_Movement_081A5DB3
# 1359 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement LOCALID_NARANJA_LINK_CONTEST_ROOM1_247, Naranja_LinkContestRoom1_Movement_081A5DAF
# 1360 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 4
# 1361 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if NOT_EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5A90
# 1362 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5AE4::
# 1367 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0, 1
# 1368 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 2, 1
# 1369 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 4, 4
# 1370 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 6, 1
# 1371 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 8, 1
# 1372 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xA, 1
# 1373 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xC, 1
# 1374 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xE, 1
# 1375 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x10, 1
# 1376 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x12, 1
# 1377 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x14, 4
# 1378 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x16, 4
# 1379 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x19, 4
# 1380 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1B, 3
# 1381 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1C, 4
# 1382 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xA
# 1383 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0, 4
# 1384 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 2, 4
# 1385 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 4, 4
# 1386 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 6, 4
# 1387 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 8, 4
# 1388 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xA, 3
# 1389 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xC, 3
# 1390 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xE, 3
# 1391 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x10, 3
# 1392 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x12, 3
# 1393 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x14, 1
# 1394 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x16, 1
# 1395 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x19, 2
# 1396 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1B, 2
# 1397 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1C, 2
# 1398 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xA
# 1399 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 1, 2
# 1400 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 3, 2
# 1401 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 5, 2
# 1402 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 7, 2
# 1403 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 9, 4
# 1404 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xB, 2
# 1405 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xF, 2
# 1406 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xD, 2
# 1407 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x11, 2
# 1408 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x13, 2
# 1409 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x15, 3
# 1410 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x17, 3
# 1411 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x18, 3
# 1412 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1A, 4
# 1413 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1D, 3
# 1414 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1E, 3
# 1415 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xA
# 1416 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 1, 4
# 1417 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 3, 4
# 1418 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 5, 4
# 1419 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 7, 4
# 1420 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 9, 4
# 1421 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xB, 3
# 1422 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xF, 3
# 1423 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0xD, 3
# 1424 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x11, 3
# 1425 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x13, 3
# 1426 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x15, 1
# 1427 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x17, 1
# 1428 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x18, 1
# 1429 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1A, 2
# 1430 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1D, 2
# 1431 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	turnvobject 0x1E, 2
# 1432 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0xA
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5BAB::
# 1437 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 1438 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C4C
# 1439 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5C12
# 1440 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	checkflag FLAG_TEMP_2
# 1441 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5BF6
# 1442 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6DC5, MSGBOX_SIGN
# 1443 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmessage
# 1444 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5C7F
# 1445 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5CE5
# 1446 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playse SE_M_ENCORE2
# 1447 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1448 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5A90
# 1449 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x1E
# 1450 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special ShouldReadyContestArtist
# 1451 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 1452 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C46
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5BF6::
# 1457 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x25
# 1458 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6DF1, MSGBOX_SIGN
# 1459 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x5A
# 1460 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special ShouldReadyContestArtist
# 1461 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 1462 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C46
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C12::
# 1467 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	specialvar VAR_RESULT, HasMonWonThisContestBefore
# 1468 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1469 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C23
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C23::
# 1474 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestWinnerId
# 1475 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8005, 3
# 1476 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C32
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C32::
# 1481 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_CONTEST_RANK, 3
# 1482 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C41
# 1483 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setflag FLAG_TEMP_2
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C41::
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C42::
# 1492 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_010E
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C46::
# 1497 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_4, 1
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C4C::
# 1502 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay 0x3C
# 1503 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call Naranja_LinkContestRoom1_EventScript_Sub_081A5C6A
# 1504 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special ShouldReadyContestArtist
# 1505 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 1506 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C64
# 1507 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	closemessage
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C64::
# 1512 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_NARANJA_KUMQUAT_ISLAND_EVENT_STATE_4, 2
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C6A::
# 1517 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestPlayerId
# 1518 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestWinnerId
# 1519 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_var VAR_0x8004, VAR_0x8005
# 1520 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C7C
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C7C::
# 1525 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x23
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5C7F::
# 1530 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8005
# 1531 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1532 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5CB1
# 1533 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1534 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5CBE
# 1535 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1536 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5CCB
# 1537 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1538 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5CD8
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5CB1::
# 1543 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1544 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 16387, Naranja_LinkContestRoom1_Movement_081A5DF6
# 1545 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1546 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5CBE::
# 1551 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1552 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 16387, Naranja_LinkContestRoom1_Movement_081A5DFA
# 1553 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1554 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5CCB::
# 1559 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1560 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 16387, Naranja_LinkContestRoom1_Movement_081A5DA5
# 1561 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1562 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5CD8::
# 1567 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1568 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	applymovement 16387, Naranja_LinkContestRoom1_Movement_081A5DA9
# 1569 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitmovement LOCALID_NONE
# 1570 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5CE5::
# 1575 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GetContestWinnerId
# 1576 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_0x8005, 3
# 1577 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5CFC
# 1578 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6DF1, MSGBOX_SIGN
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5CFC::
# 1583 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 2
# 1584 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	call_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5C42
# 1585 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x25
# 1586 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	specialvar VAR_RESULT, HasMonWonThisContestBefore
# 1587 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1588 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5D5B
# 1589 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_CONTEST_RANK, 3
# 1590 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5D3B
# 1591 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6DF1, MSGBOX_SIGN
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5D2D::
# 1596 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6E1F, MSGBOX_SIGN
# 1597 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setvar VAR_NARANJA_KUMQUAT_ISLAND_STORY_STATE, 4
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5D3B::
# 1602 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB
# 1603 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 1604 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	callstd 0
# 1605 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1606 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	goto_if EQUAL, Naranja_LinkContestRoom1_EventScript_Sub_081A5D2D
# 1607 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6DF1, MSGBOX_SIGN
	return


Naranja_LinkContestRoom1_EventScript_Sub_081A5D5B::
# 1612 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special GiveMonContestRibbon
# 1613 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	incrementgamestat 0x2A
# 1614 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_083B
# 1615 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lockall
# 1616 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6D6A, MSGBOX_DEFAULT
# 1617 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1618 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6D96, MSGBOX_DEFAULT
# 1619 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	waitfanfare
# 1620 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	special BufferContestWinnerMonName
# 1621 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	msgbox Naranja_LinkContestRoom1_Text_081A6DAC, MSGBOX_DEFAULT
# 1622 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	releaseall
	return


# 1626 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D85:
# 1627 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_down
	step_end

# 1630 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D87:
# 1631 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	lock_facing_direction
# 1632 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
# 1633 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	unlock_facing_direction
	step_end

# 1636 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D8B:
# 1637 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1640 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D8D:
# 1641 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	emote_heart
	step_end

# 1644 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D8F:
# 1645 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1648 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D91:
# 1649 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1650 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1651 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1654 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D95:
# 1655 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1656 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1657 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1660 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D99:
# 1661 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
# 1662 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1665 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D9C:
# 1666 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1667 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
	step_end

# 1670 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5D9F:
# 1671 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1674 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DA1:
# 1675 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1678 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DA3:
# 1679 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1682 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DA5:
# 1683 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1684 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1685 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
	step_end

# 1688 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DA9:
# 1689 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1690 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1691 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1692 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1693 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
	step_end

# 1696 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DAF:
# 1697 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_left
# 1698 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1699 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_original_direction
	step_end

# 1702 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DB3:
# 1703 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_up
# 1704 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1705 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_original_direction
	step_end

# 1708 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DB7:
# 1709 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_right
# 1710 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1711 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_original_direction
	step_end

# 1714 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DBB:
# 1715 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_down
# 1716 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1717 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_original_direction
	step_end

# 1720 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DBF:
# 1721 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_up
	step_end

# 1724 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DC1:
# 1725 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	face_up
# 1726 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1727 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1730 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DC5:
# 1731 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_left
# 1732 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1733 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1734 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1737 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DCA:
# 1738 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1739 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	delay_16
# 1740 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1743 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DCE:
# 1744 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
# 1745 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1746 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1747 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1748 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1751 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DD4:
# 1752 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_left
# 1753 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_left
# 1754 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_left
# 1755 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_down
# 1756 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1759 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DDA:
# 1760 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
# 1761 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1762 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1765 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DDE:
# 1766 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_left
# 1767 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_down
# 1768 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1771 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DE2:
# 1772 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
# 1773 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1774 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1777 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DE6:
# 1778 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_right
# 1779 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_down
# 1780 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1783 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DEA:
# 1784 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
# 1785 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1786 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1787 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_left
# 1788 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1791 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DF0:
# 1792 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_right
# 1793 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_right
# 1794 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_right
# 1795 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_fast_down
# 1796 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1799 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DF6:
# 1800 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1801 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_right
# 1802 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
	step_end

# 1805 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
Naranja_LinkContestRoom1_Movement_081A5DFA:
# 1806 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	walk_up
	step_end

Naranja_LinkContestRoom1_Text_081A68F0::
# 1809 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: Hello! We’re just getting started\nwith a {STR_VAR_3} Rank POKéMON\l{STR_VAR_2} CONTEST!\pThe participating TRAINERS and their\nPOKéMON are as follows:$"

Naranja_LinkContestRoom1_Text_081A6976::
# 1813 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: Hello! We’re just getting started\nwith a 4-player linked POKéMON\l{STR_VAR_2} CONTEST!\pThe participating TRAINERS and their\nPOKéMON are as follows:$"

Naranja_LinkContestRoom1_Text_081A6A04::
# 1817 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: Entry No. {STR_VAR_2}!\n{STR_VAR_1}’s {STR_VAR_3}!$"

Naranja_LinkContestRoom1_Text_081A6A1F::
# 1821 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: We’ve just seen the four POKéMON\ncontestants.\pNow it’s time for primary judging!\pThe audience will vote on their\nfavorite POKéMON contestants.\pWithout any further ado, let the\nvoting begin!$"

Naranja_LinkContestRoom1_Text_081A6AE1::
# 1825 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "Voting under way...$"

Naranja_LinkContestRoom1_Text_081A6AF5::
# 1829 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "Voting is now complete!\pWhile the votes are being tallied,\nlet’s move on to secondary judging!\pThe second stage of judging is the\nmuch anticipated appeal time!\pMay the contestants amaze us with\nsuperb appeals of dazzling moves!\pLet’s see a little enthusiasm!\nLet’s appeal!$"

Naranja_LinkContestRoom1_Text_081A6C06::
# 1833 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: That’s it for judging!$"

Naranja_LinkContestRoom1_Text_081A6C21::
# 1837 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "Thank you all for a most wonderful\ndisplay of quality appeals!\pThis concludes all judging!\nThank you for your fine efforts!$"

Naranja_LinkContestRoom1_Text_081A6C9D::
# 1841 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "Now, all that remains is the pulse-\npounding proclamation of the winner.\pThe JUDGE looks ready to make the\nannouncement!$"

Naranja_LinkContestRoom1_Text_081A6D16::
# 1845 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "JUDGE: I will now declare the winner!$"

Naranja_LinkContestRoom1_Text_081A6D3C::
# 1849 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: Entry No. {STR_VAR_2}!\p{STR_VAR_3} and {STR_VAR_1},\ncongratulations!$"

Naranja_LinkContestRoom1_Text_081A6D6A::
# 1853 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "We confer on you this RIBBON as your\nprize!$"

Naranja_LinkContestRoom1_Text_081A6D96::
# 1857 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"

Naranja_LinkContestRoom1_Text_081A6DAC::
# 1861 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n{STR_VAR_1}.$"

Naranja_LinkContestRoom1_Text_081A6DC5::
# 1865 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: Here you are!\nPlease accept your prize!$"

Naranja_LinkContestRoom1_Text_081A6DF1::
# 1869 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "MC: Congratulations!\nPlease do compete again!$"

Naranja_LinkContestRoom1_Text_081A6E1F::
# 1873 "data/maps/Naranja_LinkContestRoom1/scripts.pory"
	.string "Please pick up your prize at the\nreception counter later.\lPlease do compete again!$"
