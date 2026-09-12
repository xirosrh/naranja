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
	msgbox Naranja_SecretBase_G25_M00_Text_08198F89, MSGBOX_YESNO
# 31 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 32 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A2E08
# 33 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	closemessage
# 34 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	playse SE_EXIT
# 35 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special ClearAndLeaveSecretBase
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A2E08::
# 40 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	closemessage
# 41 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0060
# 42 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special EnterNewlyCreatedSecretBase
# 43 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	waitstate
	end


Naranja_SecretBase_G25_M00_OnWarp_1::
# 48 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 49 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 50 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special InitSecretBaseDecorationSprites
# 51 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_NARANJA_SECRET_BASE_STORY_STATE, 1
	end


Naranja_SecretBase_G25_M00_EventScript_OBJECT_1_LocalId1::
# 56 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special GetSecretBaseOwnerAndState
# 57 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 58 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3032
# 59 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 60 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A30AE
# 61 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 2
# 62 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A312A
# 63 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 3
# 64 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A31A6
# 65 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 4
# 66 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3222
# 67 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 5
# 68 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A329E
# 69 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 6
# 70 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A331A
# 71 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 7
# 72 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3396
# 73 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 8
# 74 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3412
# 75 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 9
# 76 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A348E
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3032::
# 81 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 82 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3086
# 83 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 84 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A30A5
# 85 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 86 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 87 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1AEA, MSGBOX_YESNO
# 88 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 89 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A308F
# 90 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 91 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 92 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 93 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 94 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A308F
# 95 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 96 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1B83, MSGBOX_DEFAULT
# 97 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3086::
# 101 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1C3B, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A308F::
# 106 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 107 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 108 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 109 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1B97, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A30A5::
# 114 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1BF8, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A30AE::
# 119 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 120 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3102
# 121 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 122 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3121
# 123 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 124 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 125 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1E67, MSGBOX_YESNO
# 126 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 127 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A310B
# 128 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 129 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 130 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 131 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 132 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A310B
# 133 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 134 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1F04, MSGBOX_DEFAULT
# 135 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3102::
# 139 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1FBD, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A310B::
# 144 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 145 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 146 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 147 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1F2E, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3121::
# 152 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1F88, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A312A::
# 157 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 158 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A317E
# 159 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 160 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A319D
# 161 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 162 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 163 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A218F, MSGBOX_YESNO
# 164 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 165 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3187
# 166 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 167 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 168 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 169 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 170 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3187
# 171 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 172 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2220, MSGBOX_DEFAULT
# 173 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A317E::
# 177 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A22FA, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3187::
# 182 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 183 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 184 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 185 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2230, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A319D::
# 190 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2280, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A31A6::
# 195 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 196 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A31FA
# 197 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 198 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3219
# 199 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 200 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 201 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A24E1, MSGBOX_YESNO
# 202 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 203 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3203
# 204 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 205 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 206 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 207 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 208 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3203
# 209 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 210 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A256F, MSGBOX_DEFAULT
# 211 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A31FA::
# 215 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2609, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3203::
# 220 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 221 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 222 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 223 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A258A, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3219::
# 228 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A25D2, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3222::
# 233 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 234 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3276
# 235 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 236 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3295
# 237 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 238 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 239 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2830, MSGBOX_YESNO
# 240 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 241 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A327F
# 242 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 243 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 244 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 245 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 246 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A327F
# 247 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 248 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A28D7, MSGBOX_DEFAULT
# 249 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3276::
# 253 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A297C, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A327F::
# 258 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 259 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 260 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 261 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A28F4, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3295::
# 266 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A294D, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A329E::
# 271 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 272 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A32F2
# 273 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 274 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3311
# 275 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 276 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 277 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1CB2, MSGBOX_YESNO
# 278 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 279 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A32FB
# 280 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 281 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 282 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 283 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 284 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A32FB
# 285 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 286 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1D48, MSGBOX_DEFAULT
# 287 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A32F2::
# 291 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1DF6, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A32FB::
# 296 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 297 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 298 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 299 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1D59, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3311::
# 304 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A1DC0, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A331A::
# 309 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 310 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A336E
# 311 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 312 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A338D
# 313 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 314 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 315 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2026, MSGBOX_YESNO
# 316 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 317 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3377
# 318 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 319 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 320 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 321 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 322 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3377
# 323 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 324 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2095, MSGBOX_DEFAULT
# 325 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A336E::
# 329 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2147, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3377::
# 334 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 335 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 336 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 337 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A20AE, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A338D::
# 342 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2109, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3396::
# 347 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 348 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A33EA
# 349 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 350 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3409
# 351 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 352 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 353 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A236A, MSGBOX_YESNO
# 354 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 355 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A33F3
# 356 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 357 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 358 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 359 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 360 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A33F3
# 361 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 362 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2405, MSGBOX_DEFAULT
# 363 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A33EA::
# 367 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2480, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A33F3::
# 372 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 373 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 374 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 375 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2420, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3409::
# 380 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2446, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3412::
# 385 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 386 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3466
# 387 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 388 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3485
# 389 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 390 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 391 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2663, MSGBOX_YESNO
# 392 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 393 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A346F
# 394 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 395 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 396 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 397 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 398 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A346F
# 399 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 400 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2710, MSGBOX_DEFAULT
# 401 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3466::
# 405 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A27A4, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A346F::
# 410 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 411 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 412 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 413 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2736, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3485::
# 418 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A276A, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A348E::
# 423 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 424 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_SecretBase_G25_M00_EventScript_Sub_081A34E2
# 425 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 426 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A3501
# 427 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	lock
# 428 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	faceplayer
# 429 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2A13, MSGBOX_YESNO
# 430 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 431 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A34EB
# 432 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 1
# 433 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 434 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 435 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 436 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto_if EQUAL, Naranja_SecretBase_G25_M00_EventScript_Sub_081A34EB
# 437 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 438 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2AE2, MSGBOX_DEFAULT
# 439 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	goto Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A
	return


Naranja_SecretBase_G25_M00_EventScript_Sub_081A34E2::
# 443 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2BA4, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A34EB::
# 448 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_RESULT, 0
# 449 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special SetBattledOwnerFromResult
# 450 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 451 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2AFB, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A3501::
# 456 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	msgbox Naranja_SecretBase_G25_M00_Text_081A2B69, MSGBOX_NPC
	end


Naranja_SecretBase_G25_M00_EventScript_Sub_081A350A::
# 461 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special PrepSecretBaseBattleFlags
# 462 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 463 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	setvar VAR_0x8005, 0
# 464 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special DoSpecialTrainerBattle
# 465 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	waitstate
# 466 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	special HealPlayerParty
# 467 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	release
	end


# 471 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
Naranja_SecretBase_G25_M00_Movement_081A2E11:
# 472 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	walk_up
# 473 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	walk_up
	step_end

Naranja_SecretBase_G25_M00_Text_08198F89::
# 476 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Want to make your SECRET BASE here?$"

Naranja_SecretBase_G25_M00_Text_081A1AEA::
# 480 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Have you made a SECRET BASE already?\pI went here, there, everywhere before\nchoosing this place.\pSince you’re already here, how would\nyou like to battle?$"

Naranja_SecretBase_G25_M00_Text_081A1B83::
# 484 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay!\nHere we come!$"

Naranja_SecretBase_G25_M00_Text_081A1B97::
# 488 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Hunh?\nOh, you can’t now...$"

Naranja_SecretBase_G25_M00_Text_081A1BF8::
# 492 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "What do you think of my SECRET BASE?\nCome visit me again tomorrow.$"

Naranja_SecretBase_G25_M00_Text_081A1C3B::
# 496 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Have you made a SECRET BASE already?\pI went here, there, everywhere before\nchoosing this place.\pFeel free to hang out!$"

Naranja_SecretBase_G25_M00_Text_081A1CB2::
# 500 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "There’re a lot of places where you can\nmake a SECRET BASE.\pBut I like this spot best.\nDon’t you think it’s nice?\pOh, would you like to have a battle?$"

Naranja_SecretBase_G25_M00_Text_081A1D48::
# 504 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay, here goes!$"

Naranja_SecretBase_G25_M00_Text_081A1D59::
# 508 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh...\nYou can’t now, okay.$"

Naranja_SecretBase_G25_M00_Text_081A1DC0::
# 512 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "If you’re in this area again, I hope\nyou’ll visit me.$"

Naranja_SecretBase_G25_M00_Text_081A1DF6::
# 516 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "There’re a lot of places where you can\nmake a SECRET BASE.\pBut I like this spot best.\nDon’t you think it’s nice?$"

Naranja_SecretBase_G25_M00_Text_081A1E67::
# 520 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "This is a popular spot.\nIt’s always taken.\pOh! Were you thinking about taking this\nspot, too?\pI’ll tell you what, you can have this\nspot if you can beat me.$"

Naranja_SecretBase_G25_M00_Text_081A1F04::
# 524 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay!\nI’m going to defend my SECRET BASE!$"

Naranja_SecretBase_G25_M00_Text_081A1F2E::
# 528 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Hunh? Is that right?\nYou’re not interested in this spot?$"

Naranja_SecretBase_G25_M00_Text_081A1F88::
# 532 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Okay, when I move one day, this place\nwill be yours!$"

Naranja_SecretBase_G25_M00_Text_081A1FBD::
# 536 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "This is a popular spot.\nIt’s always taken.\pI waited a long time for it to open.\nI finally got to use it!$"

Naranja_SecretBase_G25_M00_Text_081A2026::
# 540 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Welcome to my POKéMON LAB.\pI carry out research on battling in\nsecrecy.\pWould you like to see how strong I am?$"

Naranja_SecretBase_G25_M00_Text_081A2095::
# 544 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’m going to go all out!$"

Naranja_SecretBase_G25_M00_Text_081A20AE::
# 548 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh.\nSome other time, then!$"

Naranja_SecretBase_G25_M00_Text_081A2109::
# 552 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Thanks for battling with me.\nPlease come back again tomorrow.$"

Naranja_SecretBase_G25_M00_Text_081A2147::
# 556 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Welcome to my POKéMON LAB.\pI carry out research on battling in\nsecrecy.$"

Naranja_SecretBase_G25_M00_Text_081A218F::
# 560 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "A big mansion is nice, but I like this\nsort of place more.\pI like it because all kinds of people\ncome visit me.\pSo, how would you like a battle?$"

Naranja_SecretBase_G25_M00_Text_081A2220::
# 564 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "That’s the way!$"

Naranja_SecretBase_G25_M00_Text_081A2230::
# 568 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "When you’re ready, give me a shout!$"

Naranja_SecretBase_G25_M00_Text_081A2280::
# 572 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Well, anyway, I should go buy some\ndecorations and furniture.\pI want my SECRET BASE to be a place\nother people can enjoy.$"

Naranja_SecretBase_G25_M00_Text_081A22FA::
# 576 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "A big mansion is nice, but I like this\nsort of place more.\pI like it because all kinds of people\ncome visit me.$"

Naranja_SecretBase_G25_M00_Text_081A236A::
# 580 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I simply adore shopping for decorations\nand furniture.\pI also love raising POKéMON just\nas much.\pIf you would be so kind, will you battle\nwith my POKéMON?$"

Naranja_SecretBase_G25_M00_Text_081A2405::
# 584 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Thank you.\nShall we begin?$"

Naranja_SecretBase_G25_M00_Text_081A2420::
# 588 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh.\nHow disappointing...$"

Naranja_SecretBase_G25_M00_Text_081A2446::
# 592 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "That was all in good fun!\nI should go enjoy shopping now.$"

Naranja_SecretBase_G25_M00_Text_081A2480::
# 596 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I simply adore shopping for decorations\nand furniture.\pI also love raising POKéMON just\nas much.$"

Naranja_SecretBase_G25_M00_Text_081A24E1::
# 600 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Some people make their SECRET BASES in\nhard-to-find places.\lDo they want to just lie low?\pBut since you found me, how about we\nhave a battle?$"

Naranja_SecretBase_G25_M00_Text_081A256F::
# 604 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’m not going down easily!$"

Naranja_SecretBase_G25_M00_Text_081A258A::
# 608 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Oh... Are you maybe tired from searching\nfor this place?$"

Naranja_SecretBase_G25_M00_Text_081A25D2::
# 612 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Where’s your SECRET BASE?\nI should go visit you there.$"

Naranja_SecretBase_G25_M00_Text_081A2609::
# 616 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Some people make their SECRET BASES in\nhard-to-find places.\lDo they want to just lie low?$"

Naranja_SecretBase_G25_M00_Text_081A2663::
# 620 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "People have told me that you can get\ndecorations in several ways.\pWe should have a race to see who can\nget nicer decorations and furniture!\pIn the meantime, want to battle?$"

Naranja_SecretBase_G25_M00_Text_081A2710::
# 624 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "This is my SECRET BASE.\nI can’t lose!$"

Naranja_SecretBase_G25_M00_Text_081A2736::
# 628 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’ll battle with you anytime.$"

Naranja_SecretBase_G25_M00_Text_081A276A::
# 632 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I won’t lose at collecting decorations.\nCome visit again!$"

Naranja_SecretBase_G25_M00_Text_081A27A4::
# 636 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "People have told me that you can get\ndecorations in several ways.\pWe should have a race to see who can\nget nicer decorations and furniture!$"

Naranja_SecretBase_G25_M00_Text_081A2830::
# 640 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I found a spot I liked, and I did it up\nwith my favorite decorations.\pI raise my favorite POKéMON and grow\nstronger with it.\pThat’s what I do.\nWant to battle with me?$"

Naranja_SecretBase_G25_M00_Text_081A28D7::
# 644 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "Show me what you’re made of!$"

Naranja_SecretBase_G25_M00_Text_081A28F4::
# 648 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I guess there are times when you’re not\ninto it.$"

Naranja_SecretBase_G25_M00_Text_081A294D::
# 652 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "We can both become stronger.\nLet’s keep at it!$"

Naranja_SecretBase_G25_M00_Text_081A297C::
# 656 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I found a spot I liked, and I did it up\nwith my favorite decorations.\pI raise my favorite POKéMON and grow\nstronger with it.\pEvery day is a great day.$"

Naranja_SecretBase_G25_M00_Text_081A2A13::
# 660 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "You can learn a lot about the taste\nand sense of people by the kinds of\ldecorations they have, and how they\ldisplay them.\pWhat do you think of my taste?\nAre you speechless?\pWant to see my taste in battling?$"

Naranja_SecretBase_G25_M00_Text_081A2AE2::
# 664 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "There’s no holding back!$"

Naranja_SecretBase_G25_M00_Text_081A2AFB::
# 668 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "I’ll be happy to demonstrate my style\nanytime.$"

Naranja_SecretBase_G25_M00_Text_081A2B69::
# 672 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "What did you think of my style?\nI’ll keep on polishing it!$"

Naranja_SecretBase_G25_M00_Text_081A2BA4::
# 676 "data/maps/Naranja_SecretBase_G25_M00/scripts.pory"
	.string "You can learn a lot about the taste\nand sense of people by the kinds of\ldecorations they have, and how they\ldisplay them.\pWhat do you think of my taste?\nAre you speechless?$"
