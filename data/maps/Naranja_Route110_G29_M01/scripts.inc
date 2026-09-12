Naranja_Route110_G29_M01_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route110_G29_M01_OnResume
# 6 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M01_OnTransition
# 7 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route110_G29_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 10 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_Route110_G29_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_Route110_G29_M01_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_Route110_G29_M01_OnFrame_1
	.2byte 0

Naranja_Route110_G29_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 11 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Naranja_Route110_G29_M01_OnWarp_1
	.2byte 0


Naranja_Route110_G29_M01_OnResume::
# 16 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 17 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161994
	end


Naranja_Route110_G29_M01_OnTransition::
# 22 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_TEMP_1, 0
# 23 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_TEMP_2, 0
# 24 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	special SetTrickHouseNuggetFlag
	end


Naranja_Route110_G29_M01_OnWarp_1::
# 29 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	addobject LOCALID_ROUTE110_G29_M01_MAN_1_1
# 30 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	showobjectat LOCALID_ROUTE110_G29_M01_MAN_1_1, MAP_NARANJA_ROUTE_110_G29_M01
# 31 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M01_MAN_1_1, 4
	end


Naranja_Route110_G29_M01_OnFrame_1::
# 36 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161994
# 38 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	special DrawWholeMapView
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161994::
# 43 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setmetatile 0xA, 1, 0x21B, 1
	return


Naranja_Route110_G29_M01_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 48 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	lock
# 49 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	faceplayer
# 50 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C281, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_TEMP_2, 1
# 52 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_TRICK_HOUSE_LEVEL
# 53 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 54 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161A0B
# 55 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 56 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161A47
# 57 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 58 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161A83
# 59 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 60 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161ABF
# 61 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 62 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161AFB
# 63 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 64 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161B37
# 65 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 66 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161B73
# 67 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 68 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161BAF
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161A0B::
# 73 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C2B2, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 75 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 76 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 77 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 78 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 79 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 80 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 81 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 83 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 84 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161A47::
# 89 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C333, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 92 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA
# 93 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 94 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 95 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 96 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 97 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 99 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 100 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161A83::
# 105 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C3A7, MSGBOX_DEFAULT
# 106 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 107 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 108 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCC
# 109 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 110 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 111 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 112 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 113 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 114 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 115 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 116 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161ABF::
# 121 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C41F, MSGBOX_DEFAULT
# 122 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 123 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 124 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC2
# 125 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 126 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 127 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 128 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 129 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 130 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 131 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 132 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161AFB::
# 137 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C491, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 139 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 140 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12C
# 141 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 142 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 143 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 144 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 145 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 146 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 147 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 148 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161B37::
# 153 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C515, MSGBOX_DEFAULT
# 154 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 155 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 156 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD0
# 157 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 158 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 159 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 160 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 161 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 162 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 163 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 164 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161B73::
# 169 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C567, MSGBOX_DEFAULT
# 170 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C90B, MSGBOX_DEFAULT
# 171 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 172 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x47
# 173 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 174 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 175 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 176 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 177 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C9BD, MSGBOX_DEFAULT
# 178 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 179 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 180 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161BAF::
# 185 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C5AF, MSGBOX_DEFAULT
# 186 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 187 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 188 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C74
# 189 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 190 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C7F
# 191 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 192 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C8A
# 193 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 194 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C95
# 195 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 0x1E
# 196 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C602, MSGBOX_DEFAULT
# 197 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 198 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 199 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 200 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 0x1E
# 201 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C691, MSGBOX_DEFAULT
# 202 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 203 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1F
# 204 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 7
# 205 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 206 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C61
# 207 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C85C, MSGBOX_DEFAULT
# 208 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 209 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	special ResetTrickHouseNuggetFlag
# 210 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161C2E::
# 215 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_Route110_G29_M00_Movement_08161315
# 216 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 217 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	playse SE_M_EXPLOSION
# 218 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816131E
# 219 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 220 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	removeobject LOCALID_ROUTE110_G29_M01_MAN_1_1
# 221 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C4E::
# 226 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 227 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C92E, MSGBOX_DEFAULT
# 228 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 1
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C61::
# 233 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 234 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819C7D7, MSGBOX_DEFAULT
# 235 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 1
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C74::
# 240 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 241 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C7F::
# 246 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 247 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C8A::
# 252 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 253 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C95::
# 258 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 259 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Trigger_1::
# 264 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	lockall
# 265 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M01_MAN_1_1, 3
# 266 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	playse SE_PIN
# 267 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 268 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 269 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 0x14
# 270 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_Route110_G29_M01_Movement_08161CEA
# 271 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 272 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	playse SE_M_EXPLOSION
# 273 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 274 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 275 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	msgbox Naranja_Route110_G29_M01_Text_0819CA8B, MSGBOX_DEFAULT
# 276 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 277 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route110_G29_M01_Movement_08161CE8
# 278 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 279 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 4
# 280 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M01_MAN_1_1, 4
# 281 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	releaseall
	end


# 285 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
Naranja_Route110_G29_M01_Movement_08161CE8:
# 286 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	walk_down
	step_end

# 289 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
Naranja_Route110_G29_M01_Movement_08161CEA:
# 290 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	jump_in_place_left
	step_end

Naranja_Route110_G29_M01_Text_0819C281::
# 293 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Aak!\nYou’ve made it to me?\lHmmm... You’re sharp!$"

Naranja_Route110_G29_M01_Text_0819C2B2::
# 297 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to plant all those\ntrees...\pYou’re almost my equal in greatness by\none, two, three, four, five, six places!$"

Naranja_Route110_G29_M01_Text_0819C333::
# 301 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to make the maze...\pYou’re almost my equal in greatness by\none, two, three, four, five places!$"

Naranja_Route110_G29_M01_Text_0819C3A7::
# 305 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to bring in those\nboulders...\pYou’re almost my equal in greatness by\none, two, three, four places!$"

Naranja_Route110_G29_M01_Text_0819C41F::
# 309 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to shove in those\nboulders...\pYou’re almost my equal in greatness by\none, two, three places!$"

Naranja_Route110_G29_M01_Text_0819C491::
# 313 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to make MECHADOLLS\nand another to think up the quiz...\pYou’re almost my equal in greatness by\none, two places!$"

Naranja_Route110_G29_M01_Text_0819C515::
# 317 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to install\nthe doors...\pYou’re almost my equal in greatness!$"

Naranja_Route110_G29_M01_Text_0819C567::
# 321 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night setting up arrows...\pYou’re my equal in greatness!$"

Naranja_Route110_G29_M01_Text_0819C5AF::
# 325 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night polishing floors...\pYou’re above me in greatness!\nPossibly...$"

Naranja_Route110_G29_M01_Text_0819C602::
# 329 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Wh-what should I do?\nMy fountain of ideas for tricks has\lrun dry...\pPerhaps it is time I toured the country\non a quest to devise new tricks...$"

Naranja_Route110_G29_M01_Text_0819C691::
# 333 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "I hate to admit defeat, but you have\nbested me!\pStill, you must have been reeled in by\nmy charisma for you to visit me again\land again. Yes, you must have!\pBut that has nothing to do with my\nlosing!\pIn recognition of the friendship\nbetween you, the driven, and the genius\lthat is myself, I demand that you take\lthis keepsake!$"

Naranja_Route110_G29_M01_Text_0819C7D7::
# 337 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "What? No room in your PC?\nWhat am I to make of that?\pI wish I could say that, but I am much\ntoo kind and caring, so come back later!$"

Naranja_Route110_G29_M01_Text_0819C85C::
# 341 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "... ... ... ... ... ...\pI am leaving on a journey of discovery.\nA quest in search of new tricks.\pI wish that you will one day visit and\nentertain me again.\pAnd now, farewell!$"

Naranja_Route110_G29_M01_Text_0819C90B::
# 345 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Fine!\nYou have earned this reward!$"

Naranja_Route110_G29_M01_Text_0819C92E::
# 349 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "What? Have you no room for this?\nWhat manner of items do you carry?\pBut fine, since you’ve reached me,\nyour reward will be with me till later.$"

Naranja_Route110_G29_M01_Text_0819C9BD::
# 353 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Scrub that smug smirk from your face!\nIt’s much too early to think you’ve won!\pI’ll make new tricks to stump you, I will.\nYou may mock me only when you’re done.\pCome back for the next exciting\ninstallment!$"

Naranja_Route110_G29_M01_Text_0819CA8B::
# 357 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Now, now! You’re ignoring me now?\nNow that, I consider heartbreaking!$"
