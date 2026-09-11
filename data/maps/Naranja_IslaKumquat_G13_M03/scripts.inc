Naranja_IslaKumquat_G13_M03_MapScripts::
# 5 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaKumquat_G13_M03_OnLoad
# 6 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaKumquat_G13_M03_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaKumquat_G13_M03_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_2, 0, Naranja_IslaKumquat_G13_M03_OnFrame_1
	.2byte 0


Naranja_IslaKumquat_G13_M03_OnLoad::
# 12 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A0
# 13 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585FD
# 14 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585C6
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585C6::
# 18 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A1
# 19 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158615
# 20 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585D5
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585D5::
# 24 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A2
# 25 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815862D
# 26 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585E4
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585E4::
# 30 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A3
# 31 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158645
# 32 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585F3
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585F3::
# 36 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A4
# 37 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815865D
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585FD::
# 42 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 0xA, 6, 0x25E, 1
# 43 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 0xB, 6, 0x25F, 1
# 44 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585C6
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158615::
# 48 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 0x12, 6, 0x25C, 1
# 49 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 0x13, 6, 0x25D, 1
# 50 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585D5
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815862D::
# 54 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 0xE, 0xA, 0x260, 1
# 55 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 0xF, 0xA, 0x261, 1
# 56 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585E4
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158645::
# 60 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 6, 0xA, 0x25A, 1
# 61 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 7, 0xA, 0x25B, 1
# 62 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_081585F3
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815865D::
# 66 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 2, 6, 0x262, 1
# 67 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setmetatile 3, 6, 0x263, 1
	end


Naranja_IslaKumquat_G13_M03_OnFrame_1::
# 72 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 73 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 74 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M03_Movement_081586D3
# 75 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 76 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08187C42
# 77 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 78 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_Norte_G00_M28_Movement_081586D5
# 79 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 80 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Norte_G00_M28_Movement_081586D5
# 81 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 82 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08187C64
# 83 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 84 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 85 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M03_Movement_081586D3
# 87 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 88 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08187E1D
# 89 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 90 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_2, 1
# 91 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId1::
# 96 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 97 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00EC
# 98 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158793
# 99 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 100 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 101 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 102 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 103 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 104 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 105 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 106 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 107 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 108 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 109 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 110 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158735
# 111 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08187F4E
# 112 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C::
# 117 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08187F9D
# 118 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158735::
# 123 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 124 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 125 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818802F
# 126 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 4
# 127 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_Norte_G00_M28_Movement_081586D5
# 128 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188041
# 129 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815875C
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815875C::
# 134 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 135 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188120
# 136 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2C
# 138 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 7
# 139 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 140 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158783
# 141 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00EC
# 142 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	closemessage
# 143 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158783::
# 148 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 149 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188166
# 150 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 4
# 151 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	closemessage
# 152 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158793::
# 157 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188194
# 158 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 2
# 159 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_1::
# 164 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 165 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A2
# 166 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815883C
# 167 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188219
# 168 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_3::
# 173 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 174 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A4
# 175 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158858
# 176 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818824C
# 177 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_5::
# 182 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 183 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A0
# 184 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158820
# 185 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_081882B4
# 186 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_7::
# 191 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 192 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A1
# 193 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815882E
# 194 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188281
# 195 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_9::
# 200 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 201 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A3
# 202 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815884A
# 203 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_081882E6
# 204 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId2::
# 209 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188336
# 210 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 215 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_081883AB
# 216 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId4::
# 221 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_08188423
# 222 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158820::
# 227 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818831A
# 228 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 229 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 230 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 9
# 231 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815882E::
# 236 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818831A
# 237 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 238 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 239 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xA
# 240 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815883C::
# 245 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818831A
# 246 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 247 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 248 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xB
# 249 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815884A::
# 254 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818831A
# 255 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 256 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 257 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xC
# 258 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158858::
# 263 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M03_Text_0818831A
# 264 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 3
# 265 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 266 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xD
# 267 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


# 271 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
Naranja_IslaKumquat_G13_M03_Movement_081586D3:
# 272 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_IslaKumquat_G13_M03_Text_08187C42::
# 275 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "This is our special exhibit hall.$"

Naranja_IslaKumquat_G13_M03_Text_08187C64::
# 279 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "As you can plainly see, there is not a\nsingle painting on exhibit.\pHere, I don’t wish to exhibit works of\nso-called classical art.\pSuch classical works you can see on\nour ground floor.\pI wish to exhibit work that is far\ndifferent from the classics.\pArt, after all, is not restricted to old,\nfamous works!\pThis exhibit hall, I wish to fill it with...\pModern and vibrant artworks of\nPOKéMON seemingly ready to spring\lforth into glorious life!$"

Naranja_IslaKumquat_G13_M03_Text_08187E1D::
# 283 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I beg your pardon. I didn’t intend\nto monopolize the conversation.\pNow, as you are young, and yet\nobviously well traveled...\pYou must encounter lively POKéMON\nand works of art depicting them.\pIf you were to come across such a\npainting, may we ask you to obtain\lthe artist’s permission to exhibit\lit here?$"

Naranja_IslaKumquat_G13_M03_Text_08187F4E::
# 287 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I wish to fill this exhibit hall with\nmodern and vibrant paintings of\lPOKéMON.$"

Naranja_IslaKumquat_G13_M03_Text_08187F9D::
# 291 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Thanks to you, we’ve added a new\npainting to our collection!\pI’ve heard it depicts your POKéMON.\nTruly magnificent!\pThank you so very, very much!$"

Naranja_IslaKumquat_G13_M03_Text_0818802F::
# 295 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Ah! It’s you!\n{PLAYER}!$"

Naranja_IslaKumquat_G13_M03_Text_08188041::
# 299 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Isn’t this marvelous?\nThis collection of paintings!\pEach one of them flawless!\nNone better than another!\pThese paintings have attracted\nmore guests to our ART MUSEUM.\pSincerely, I thank you, {PLAYER}.\nThis is my dream come true!$"

Naranja_IslaKumquat_G13_M03_Text_08188120::
# 303 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "This is merely a token of my gratitude.$"

Naranja_IslaKumquat_G13_M03_Text_08188166::
# 307 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I will keep this for you until we\nmeet again.$"

Naranja_IslaKumquat_G13_M03_Text_08188194::
# 311 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Ah, so good to see you, {PLAYER}!\pIt’s an honor to have you visit us\non your busy journeys.\pPlease, relax and do enjoy your\nvisit with us.$"

Naranja_IslaKumquat_G13_M03_Text_08188219::
# 315 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with pink-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_0818824C::
# 319 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with yellow-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_08188281::
# 323 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with blue-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_081882B4::
# 327 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with red-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_081882E6::
# 331 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with green-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_0818831A::
# 335 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a painting of POKéMON.$"

Naranja_IslaKumquat_G13_M03_Text_08188336::
# 339 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I’ve been away awhile, so the new\npaintings up here surprised me.\pI wish someone would paint my POKéMON\nthis pretty.$"

Naranja_IslaKumquat_G13_M03_Text_081883AB::
# 343 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Well... So this is where they show the\ntopical POKéMON paintings.\pI see, these new paintings are indeed\nrather amusing.$"

Naranja_IslaKumquat_G13_M03_Text_08188423::
# 347 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Wow, is that right?\nThese paintings are of your POKéMON.\pIsn’t that just the ultimate joy for\na TRAINER?$"
