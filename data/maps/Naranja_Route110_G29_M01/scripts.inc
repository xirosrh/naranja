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
	loadword 0, Naranja_Route110_G29_M01_Text_0819C281
# 51 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_TEMP_2, 1
# 53 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_TRICK_HOUSE_LEVEL
# 54 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 55 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161A0B
# 56 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 57 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161A47
# 58 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 59 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161A83
# 60 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 61 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161ABF
# 62 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 63 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161AFB
# 64 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 65 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161B37
# 66 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 67 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161B73
# 68 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 69 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161BAF
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161A0B::
# 74 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C2B2
# 75 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 77 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 78 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 79 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 80 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 81 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 82 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 83 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 84 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 85 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 86 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 87 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 88 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161A47::
# 93 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C333
# 94 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 96 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 98 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xA
# 99 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 100 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 101 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 102 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 103 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 104 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 105 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 106 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 107 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161A83::
# 112 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C3A7
# 113 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 115 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 117 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xCC
# 118 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 119 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 120 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 121 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 122 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 123 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 124 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 125 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 126 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161ABF::
# 131 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C41F
# 132 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 133 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 134 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 135 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 136 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC2
# 137 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 138 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 139 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 140 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 141 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 142 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 143 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 144 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 145 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161AFB::
# 150 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C491
# 151 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 152 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 153 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 154 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 155 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12C
# 156 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 157 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 158 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 159 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 160 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 161 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 162 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 163 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 164 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161B37::
# 169 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C515
# 170 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 171 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 172 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 173 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 174 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD0
# 175 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 176 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 177 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 178 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 179 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 180 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 181 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 182 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 183 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161B73::
# 188 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C567
# 189 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 190 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C90B
# 191 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 192 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 193 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x47
# 194 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 195 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 0
# 196 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 197 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C4E
# 198 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C9BD
# 199 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 200 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 201 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 202 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161BAF::
# 207 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C5AF
# 208 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 209 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 210 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 211 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C74
# 212 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 213 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C7F
# 214 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 215 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C8A
# 216 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 217 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C95
# 218 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 0x1E
# 219 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C602
# 220 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 221 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 222 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 223 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 224 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 0x1E
# 225 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C691
# 226 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 227 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 0
# 228 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1F
# 229 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 7
# 230 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 231 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M01_EventScript_Sub_08161C61
# 232 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C85C
# 233 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 234 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M01_EventScript_Sub_08161C2E
# 235 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	special ResetTrickHouseNuggetFlag
# 236 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	release
	end


Naranja_Route110_G29_M01_EventScript_Sub_08161C2E::
# 241 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_Route110_G29_M00_Movement_08161315
# 242 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 243 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	playse SE_M_EXPLOSION
# 244 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_Route110_G29_M00_Movement_0816131E
# 245 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 246 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	removeobject LOCALID_ROUTE110_G29_M01_MAN_1_1
# 247 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C4E::
# 252 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 253 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C92E
# 254 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 255 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 1
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C61::
# 260 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 261 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819C7D7
# 262 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 263 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_15, 1
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C74::
# 268 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 269 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C7F::
# 274 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 275 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C8A::
# 280 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 281 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Sub_08161C95::
# 286 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 287 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_Route110_G29_M01_EventScript_Trigger_1::
# 292 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	lockall
# 293 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M01_MAN_1_1, 3
# 294 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	playse SE_PIN
# 295 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 296 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 297 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 0x14
# 298 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_ROUTE110_G29_M01_MAN_1_1, Naranja_Route110_G29_M01_Movement_08161CEA
# 299 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 300 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	playse SE_M_EXPLOSION
# 301 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 302 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 303 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	loadword 0, Naranja_Route110_G29_M01_Text_0819CA8B
# 304 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	callstd 4
# 305 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	closemessage
# 306 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route110_G29_M01_Movement_08161CE8
# 307 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 308 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	delay 4
# 309 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	turnobject LOCALID_ROUTE110_G29_M01_MAN_1_1, 4
# 310 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	releaseall
	end


# 314 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
Naranja_Route110_G29_M01_Movement_08161CE8:
# 315 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	walk_down
	step_end

# 318 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
Naranja_Route110_G29_M01_Movement_08161CEA:
# 319 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	jump_in_place_left
	step_end

Naranja_Route110_G29_M01_Text_0819C281::
# 322 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Aak!\nYou’ve made it to me?\lHmmm... You’re sharp!$"

Naranja_Route110_G29_M01_Text_0819C2B2::
# 326 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to plant all those\ntrees...\pYou’re almost my equal in greatness by\none, two, three, four, five, six places!$"

Naranja_Route110_G29_M01_Text_0819C333::
# 330 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to make the maze...\pYou’re almost my equal in greatness by\none, two, three, four, five places!$"

Naranja_Route110_G29_M01_Text_0819C3A7::
# 334 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to bring in those\nboulders...\pYou’re almost my equal in greatness by\none, two, three, four places!$"

Naranja_Route110_G29_M01_Text_0819C41F::
# 338 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to shove in those\nboulders...\pYou’re almost my equal in greatness by\none, two, three places!$"

Naranja_Route110_G29_M01_Text_0819C491::
# 342 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to make MECHADOLLS\nand another to think up the quiz...\pYou’re almost my equal in greatness by\none, two places!$"

Naranja_Route110_G29_M01_Text_0819C515::
# 346 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night to install\nthe doors...\pYou’re almost my equal in greatness!$"

Naranja_Route110_G29_M01_Text_0819C567::
# 350 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night setting up arrows...\pYou’re my equal in greatness!$"

Naranja_Route110_G29_M01_Text_0819C5AF::
# 354 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "It took me all night polishing floors...\pYou’re above me in greatness!\nPossibly...$"

Naranja_Route110_G29_M01_Text_0819C602::
# 358 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Wh-what should I do?\nMy fountain of ideas for tricks has\lrun dry...\pPerhaps it is time I toured the country\non a quest to devise new tricks...$"

Naranja_Route110_G29_M01_Text_0819C691::
# 362 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "I hate to admit defeat, but you have\nbested me!\pStill, you must have been reeled in by\nmy charisma for you to visit me again\land again. Yes, you must have!\pBut that has nothing to do with my\nlosing!\pIn recognition of the friendship\nbetween you, the driven, and the genius\lthat is myself, I demand that you take\lthis keepsake!$"

Naranja_Route110_G29_M01_Text_0819C7D7::
# 366 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "What? No room in your PC?\nWhat am I to make of that?\pI wish I could say that, but I am much\ntoo kind and caring, so come back later!$"

Naranja_Route110_G29_M01_Text_0819C85C::
# 370 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "... ... ... ... ... ...\pI am leaving on a journey of discovery.\nA quest in search of new tricks.\pI wish that you will one day visit and\nentertain me again.\pAnd now, farewell!$"

Naranja_Route110_G29_M01_Text_0819C90B::
# 374 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Fine!\nYou have earned this reward!$"

Naranja_Route110_G29_M01_Text_0819C92E::
# 378 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "What? Have you no room for this?\nWhat manner of items do you carry?\pBut fine, since you’ve reached me,\nyour reward will be with me till later.$"

Naranja_Route110_G29_M01_Text_0819C9BD::
# 382 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Scrub that smug smirk from your face!\nIt’s much too early to think you’ve won!\pI’ll make new tricks to stump you, I will.\nYou may mock me only when you’re done.\pCome back for the next exciting\ninstallment!$"

Naranja_Route110_G29_M01_Text_0819CA8B::
# 386 "data/maps/Naranja_Route110_G29_M01/scripts.pory"
	.string "Now, now! You’re ignoring me now?\nNow that, I consider heartbreaking!$"
