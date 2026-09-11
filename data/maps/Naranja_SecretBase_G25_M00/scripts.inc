Naranja_SecretBase_G25_M00_MapScripts::
# 8 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SecretBase_G25_M00_OnTransition
# 12 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SecretBase_G25_M00_OnResume
# 5 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_SecretBase_G25_M00_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_SecretBase_G25_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_SecretBase_G25_M00_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_STORY_STATE, 0, Naranja_SecretBase_G25_M00_OnWarp_1
	.2byte 0

Naranja_SecretBase_G25_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	map_script_2 VAR_NARANJA_SECRET_BASE_EVENT_STATE_2, 0, Naranja_SecretBase_G25_M00_OnFrame_1
	.2byte 0


Naranja_SecretBase_G25_M00_OnResume::
# 16 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setstepcallback 6
	end


Naranja_SecretBase_G25_M00_OnTransition::
# 21 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuertoDeTangelo_G01_M01_EventScript_Sub_081A2F3D
# 22 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetSecretBaseOwnerGfxId
	end


Naranja_SecretBase_G25_M00_OnFrame_1::
# 27 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SecretBase_G25_M00_Movement_081A2E11
# 28 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_NARANJA_SECRET_BASE_EVENT_STATE_2, 1
# 30 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_08198F89
# 31 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 32 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 33 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A2E08
# 34 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	closemessage
# 35 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	playse SE_EXIT
# 36 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special ClearAndLeaveSecretBase
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A2E08::
# 41 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	closemessage
# 42 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 43 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special EnterNewlyCreatedSecretBase
# 44 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	waitstate
	end


Naranja_SecretBase_G25_M00_OnWarp_1::
# 49 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 50 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 51 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special InitSecretBaseDecorationSprites
# 52 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_NARANJA_SECRET_BASE_STORY_STATE, 1
	end


Naranja_SecretBase_G25_M00_EventScript_OBJECT_1_LocalId1::
# 57 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special GetSecretBaseOwnerAndState
# 58 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 59 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3032
# 60 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 61 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A30AE
# 62 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 63 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A312A
# 64 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 65 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A31A6
# 66 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 67 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3222
# 68 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 69 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A329E
# 70 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 6
# 71 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A331A
# 72 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 7
# 73 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3396
# 74 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 8
# 75 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3412
# 76 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 9
# 77 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A348E
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3032::
# 82 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 83 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3086
# 84 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 85 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A30A5
# 86 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 87 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 88 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1AEA
# 89 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 90 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 91 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A308F
# 92 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 93 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 94 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 95 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 96 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A308F
# 97 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 98 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1B83
# 99 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3086::
# 104 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1C3B
# 105 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A308F::
# 110 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 111 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 112 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 113 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1B97
# 114 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A30A5::
# 119 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1BF8
# 120 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A30AE::
# 125 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 126 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3102
# 127 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 128 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3121
# 129 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 130 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 131 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1E67
# 132 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 133 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 134 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A310B
# 135 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 136 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 137 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 138 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 139 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A310B
# 140 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 141 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1F04
# 142 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 143 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3102::
# 147 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1FBD
# 148 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A310B::
# 153 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 154 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 155 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 156 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1F2E
# 157 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3121::
# 162 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1F88
# 163 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A312A::
# 168 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 169 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A317E
# 170 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 171 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A319D
# 172 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 173 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 174 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A218F
# 175 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 176 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 177 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3187
# 178 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 179 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 180 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 181 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 182 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3187
# 183 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 184 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2220
# 185 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 186 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A317E::
# 190 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A22FA
# 191 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3187::
# 196 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 197 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 198 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 199 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2230
# 200 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A319D::
# 205 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2280
# 206 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A31A6::
# 211 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 212 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A31FA
# 213 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 214 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3219
# 215 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 216 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 217 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A24E1
# 218 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 219 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 220 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3203
# 221 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 222 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 223 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 224 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 225 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3203
# 226 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 227 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A256F
# 228 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 229 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A31FA::
# 233 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2609
# 234 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3203::
# 239 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 240 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 241 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 242 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A258A
# 243 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3219::
# 248 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A25D2
# 249 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3222::
# 254 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 255 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3276
# 256 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 257 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3295
# 258 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 259 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 260 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2830
# 261 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 262 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 263 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A327F
# 264 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 265 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 266 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 267 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 268 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A327F
# 269 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 270 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A28D7
# 271 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 272 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3276::
# 276 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A297C
# 277 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A327F::
# 282 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 283 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 284 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 285 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A28F4
# 286 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3295::
# 291 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A294D
# 292 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A329E::
# 297 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 298 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A32F2
# 299 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 300 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3311
# 301 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 302 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 303 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1CB2
# 304 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 305 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 306 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A32FB
# 307 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 308 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 309 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 310 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 311 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A32FB
# 312 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 313 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1D48
# 314 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 315 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A32F2::
# 319 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1DF6
# 320 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A32FB::
# 325 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 326 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 327 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 328 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1D59
# 329 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3311::
# 334 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A1DC0
# 335 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A331A::
# 340 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 341 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A336E
# 342 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 343 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A338D
# 344 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 345 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 346 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2026
# 347 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 348 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 349 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3377
# 350 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 351 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 352 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 353 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 354 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3377
# 355 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 356 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2095
# 357 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 358 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A336E::
# 362 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2147
# 363 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3377::
# 368 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 369 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 370 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 371 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A20AE
# 372 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A338D::
# 377 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2109
# 378 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3396::
# 383 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 384 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A33EA
# 385 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 386 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3409
# 387 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 388 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 389 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A236A
# 390 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 391 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 392 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A33F3
# 393 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 394 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 395 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 396 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 397 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A33F3
# 398 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 399 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2405
# 400 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 401 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A33EA::
# 405 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2480
# 406 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A33F3::
# 411 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 412 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 413 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 414 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2420
# 415 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3409::
# 420 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2446
# 421 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3412::
# 426 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 427 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3466
# 428 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 429 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3485
# 430 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 431 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 432 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2663
# 433 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 434 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 435 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A346F
# 436 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 437 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 438 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 439 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 440 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A346F
# 441 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 442 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2710
# 443 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 444 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3466::
# 448 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A27A4
# 449 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A346F::
# 454 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 455 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 456 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 457 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2736
# 458 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3485::
# 463 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A276A
# 464 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A348E::
# 469 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 470 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A34E2
# 471 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 472 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3501
# 473 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 474 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 475 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2A13
# 476 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 5
# 477 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 478 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A34EB
# 479 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 480 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 481 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 482 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 483 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A34EB
# 484 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 485 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2AE2
# 486 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 4
# 487 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A34E2::
# 491 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2BA4
# 492 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A34EB::
# 497 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 498 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 499 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 500 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2AFB
# 501 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3501::
# 506 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	loadword 0, Naranja_SecretBase_G25_M00_Text_081A2B69
# 507 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	callstd 2
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A::
# 512 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special PrepSecretBaseBattleFlags
# 513 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 514 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 515 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special DoSpecialTrainerBattle
# 516 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	waitstate
# 517 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special HealPlayerParty
# 518 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	release
	end


# 522 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
Naranja_SecretBase_G25_M00_Movement_081A2E11:
# 523 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	walk_up
# 524 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	walk_up
	step_end

Naranja_SecretBase_G25_M00_Text_08198F89::
# 527 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Want to make your SECRET BASE here?$"

Naranja_SecretBase_G25_M00_Text_081A1AEA::
# 531 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Have you made a SECRET BASE already?\pI went here, there, everywhere before\nchoosing this place.\pSince you’re already here, how would\nyou like to battle?$"

Naranja_SecretBase_G25_M00_Text_081A1B83::
# 535 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay!\nHere we come!$"

Naranja_SecretBase_G25_M00_Text_081A1B97::
# 539 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Hunh?\nOh, you can’t now...$"

Naranja_SecretBase_G25_M00_Text_081A1BF8::
# 543 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "What do you think of my SECRET BASE?\nCome visit me again tomorrow.$"

Naranja_SecretBase_G25_M00_Text_081A1C3B::
# 547 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Have you made a SECRET BASE already?\pI went here, there, everywhere before\nchoosing this place.\pFeel free to hang out!$"

Naranja_SecretBase_G25_M00_Text_081A1CB2::
# 551 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "There’re a lot of places where you can\nmake a SECRET BASE.\pBut I like this spot best.\nDon’t you think it’s nice?\pOh, would you like to have a battle?$"

Naranja_SecretBase_G25_M00_Text_081A1D48::
# 555 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay, here goes!$"

Naranja_SecretBase_G25_M00_Text_081A1D59::
# 559 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh...\nYou can’t now, okay.$"

Naranja_SecretBase_G25_M00_Text_081A1DC0::
# 563 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "If you’re in this area again, I hope\nyou’ll visit me.$"

Naranja_SecretBase_G25_M00_Text_081A1DF6::
# 567 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "There’re a lot of places where you can\nmake a SECRET BASE.\pBut I like this spot best.\nDon’t you think it’s nice?$"

Naranja_SecretBase_G25_M00_Text_081A1E67::
# 571 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "This is a popular spot.\nIt’s always taken.\pOh! Were you thinking about taking this\nspot, too?\pI’ll tell you what, you can have this\nspot if you can beat me.$"

Naranja_SecretBase_G25_M00_Text_081A1F04::
# 575 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay!\nI’m going to defend my SECRET BASE!$"

Naranja_SecretBase_G25_M00_Text_081A1F2E::
# 579 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Hunh? Is that right?\nYou’re not interested in this spot?$"

Naranja_SecretBase_G25_M00_Text_081A1F88::
# 583 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay, when I move one day, this place\nwill be yours!$"

Naranja_SecretBase_G25_M00_Text_081A1FBD::
# 587 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "This is a popular spot.\nIt’s always taken.\pI waited a long time for it to open.\nI finally got to use it!$"

Naranja_SecretBase_G25_M00_Text_081A2026::
# 591 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Welcome to my POKéMON LAB.\pI carry out research on battling in\nsecrecy.\pWould you like to see how strong I am?$"

Naranja_SecretBase_G25_M00_Text_081A2095::
# 595 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’m going to go all out!$"

Naranja_SecretBase_G25_M00_Text_081A20AE::
# 599 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh.\nSome other time, then!$"

Naranja_SecretBase_G25_M00_Text_081A2109::
# 603 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Thanks for battling with me.\nPlease come back again tomorrow.$"

Naranja_SecretBase_G25_M00_Text_081A2147::
# 607 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Welcome to my POKéMON LAB.\pI carry out research on battling in\nsecrecy.$"

Naranja_SecretBase_G25_M00_Text_081A218F::
# 611 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "A big mansion is nice, but I like this\nsort of place more.\pI like it because all kinds of people\ncome visit me.\pSo, how would you like a battle?$"

Naranja_SecretBase_G25_M00_Text_081A2220::
# 615 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "That’s the way!$"

Naranja_SecretBase_G25_M00_Text_081A2230::
# 619 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "When you’re ready, give me a shout!$"

Naranja_SecretBase_G25_M00_Text_081A2280::
# 623 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Well, anyway, I should go buy some\ndecorations and furniture.\pI want my SECRET BASE to be a place\nother people can enjoy.$"

Naranja_SecretBase_G25_M00_Text_081A22FA::
# 627 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "A big mansion is nice, but I like this\nsort of place more.\pI like it because all kinds of people\ncome visit me.$"

Naranja_SecretBase_G25_M00_Text_081A236A::
# 631 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I simply adore shopping for decorations\nand furniture.\pI also love raising POKéMON just\nas much.\pIf you would be so kind, will you battle\nwith my POKéMON?$"

Naranja_SecretBase_G25_M00_Text_081A2405::
# 635 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Thank you.\nShall we begin?$"

Naranja_SecretBase_G25_M00_Text_081A2420::
# 639 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh.\nHow disappointing...$"

Naranja_SecretBase_G25_M00_Text_081A2446::
# 643 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "That was all in good fun!\nI should go enjoy shopping now.$"

Naranja_SecretBase_G25_M00_Text_081A2480::
# 647 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I simply adore shopping for decorations\nand furniture.\pI also love raising POKéMON just\nas much.$"

Naranja_SecretBase_G25_M00_Text_081A24E1::
# 651 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Some people make their SECRET BASES in\nhard-to-find places.\lDo they want to just lie low?\pBut since you found me, how about we\nhave a battle?$"

Naranja_SecretBase_G25_M00_Text_081A256F::
# 655 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’m not going down easily!$"

Naranja_SecretBase_G25_M00_Text_081A258A::
# 659 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh... Are you maybe tired from searching\nfor this place?$"

Naranja_SecretBase_G25_M00_Text_081A25D2::
# 663 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Where’s your SECRET BASE?\nI should go visit you there.$"

Naranja_SecretBase_G25_M00_Text_081A2609::
# 667 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Some people make their SECRET BASES in\nhard-to-find places.\lDo they want to just lie low?$"

Naranja_SecretBase_G25_M00_Text_081A2663::
# 671 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "People have told me that you can get\ndecorations in several ways.\pWe should have a race to see who can\nget nicer decorations and furniture!\pIn the meantime, want to battle?$"

Naranja_SecretBase_G25_M00_Text_081A2710::
# 675 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "This is my SECRET BASE.\nI can’t lose!$"

Naranja_SecretBase_G25_M00_Text_081A2736::
# 679 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’ll battle with you anytime.$"

Naranja_SecretBase_G25_M00_Text_081A276A::
# 683 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I won’t lose at collecting decorations.\nCome visit again!$"

Naranja_SecretBase_G25_M00_Text_081A27A4::
# 687 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "People have told me that you can get\ndecorations in several ways.\pWe should have a race to see who can\nget nicer decorations and furniture!$"

Naranja_SecretBase_G25_M00_Text_081A2830::
# 691 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I found a spot I liked, and I did it up\nwith my favorite decorations.\pI raise my favorite POKéMON and grow\nstronger with it.\pThat’s what I do.\nWant to battle with me?$"

Naranja_SecretBase_G25_M00_Text_081A28D7::
# 695 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Show me what you’re made of!$"

Naranja_SecretBase_G25_M00_Text_081A28F4::
# 699 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I guess there are times when you’re not\ninto it.$"

Naranja_SecretBase_G25_M00_Text_081A294D::
# 703 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "We can both become stronger.\nLet’s keep at it!$"

Naranja_SecretBase_G25_M00_Text_081A297C::
# 707 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I found a spot I liked, and I did it up\nwith my favorite decorations.\pI raise my favorite POKéMON and grow\nstronger with it.\pEvery day is a great day.$"

Naranja_SecretBase_G25_M00_Text_081A2A13::
# 711 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "You can learn a lot about the taste\nand sense of people by the kinds of\ldecorations they have, and how they\ldisplay them.\pWhat do you think of my taste?\nAre you speechless?\pWant to see my taste in battling?$"

Naranja_SecretBase_G25_M00_Text_081A2AE2::
# 715 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "There’s no holding back!$"

Naranja_SecretBase_G25_M00_Text_081A2AFB::
# 719 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’ll be happy to demonstrate my style\nanytime.$"

Naranja_SecretBase_G25_M00_Text_081A2B69::
# 723 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "What did you think of my style?\nI’ll keep on polishing it!$"

Naranja_SecretBase_G25_M00_Text_081A2BA4::
# 727 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "You can learn a lot about the taste\nand sense of people by the kinds of\ldecorations they have, and how they\ldisplay them.\pWhat do you think of my taste?\nAre you speechless?$"
