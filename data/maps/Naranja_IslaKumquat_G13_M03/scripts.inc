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
	msgbox Naranja_IslaKumquat_G13_M03_Text_08187C42, MSGBOX_SIGN
# 77 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_Norte_G00_M28_Movement_081586D5
# 78 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 79 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Norte_G00_M28_Movement_081586D5
# 80 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 81 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08187C64, MSGBOX_SIGN
# 82 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 83 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M03_Movement_081586D3
# 85 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08187E1D, MSGBOX_SIGN
# 87 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_2, 1
# 88 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId1::
# 93 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 94 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00EC
# 95 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158793
# 96 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 97 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 98 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 99 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 100 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 101 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 102 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 103 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 104 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 105 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C
# 106 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 107 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158735
# 108 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08187F4E, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815872C::
# 113 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08187F9D, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158735::
# 118 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 119 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 120 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818802F, MSGBOX_DEFAULT
# 121 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_Norte_G00_M28_Movement_081586D5
# 122 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188041, MSGBOX_DEFAULT
# 123 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815875C
	return


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815875C::
# 127 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M03_GENTLEMAN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 128 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188120, MSGBOX_DEFAULT
# 129 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2C
# 130 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	callstd 7
# 131 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 132 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158783
# 133 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00EC
# 134 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	closemessage
# 135 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158783::
# 140 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 141 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188166, MSGBOX_DEFAULT
# 142 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	closemessage
# 143 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158793::
# 148 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188194, MSGBOX_NPC
# 149 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_1::
# 154 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 155 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A2
# 156 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815883C
# 157 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188219, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_3::
# 162 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 163 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A4
# 164 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158858
# 165 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818824C, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_5::
# 170 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 171 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A0
# 172 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158820
# 173 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_081882B4, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_7::
# 178 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 179 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A1
# 180 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815882E
# 181 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188281, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sign_9::
# 186 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	lockall
# 187 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A3
# 188 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815884A
# 189 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_081882E6, MSGBOX_SIGN
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId2::
# 194 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188336, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 199 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_081883AB, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M03_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId4::
# 204 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_08188423, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158820::
# 209 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818831A, MSGBOX_SIGN
# 210 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 211 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 9
# 212 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815882E::
# 217 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818831A, MSGBOX_SIGN
# 218 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 219 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xA
# 220 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815883C::
# 225 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818831A, MSGBOX_SIGN
# 226 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 227 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xB
# 228 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_0815884A::
# 233 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818831A, MSGBOX_SIGN
# 234 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 235 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xC
# 236 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M03_EventScript_Sub_08158858::
# 241 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M03_Text_0818831A, MSGBOX_SIGN
# 242 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	fadescreen 1
# 243 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	showcontestpainting 0xD
# 244 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	releaseall
	end


# 248 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
Naranja_IslaKumquat_G13_M03_Movement_081586D3:
# 249 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_IslaKumquat_G13_M03_Text_08187C42::
# 252 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "This is our special exhibit hall.$"

Naranja_IslaKumquat_G13_M03_Text_08187C64::
# 256 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "As you can plainly see, there is not a\nsingle painting on exhibit.\pHere, I don’t wish to exhibit works of\nso-called classical art.\pSuch classical works you can see on\nour ground floor.\pI wish to exhibit work that is far\ndifferent from the classics.\pArt, after all, is not restricted to old,\nfamous works!\pThis exhibit hall, I wish to fill it with...\pModern and vibrant artworks of\nPOKéMON seemingly ready to spring\lforth into glorious life!$"

Naranja_IslaKumquat_G13_M03_Text_08187E1D::
# 260 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I beg your pardon. I didn’t intend\nto monopolize the conversation.\pNow, as you are young, and yet\nobviously well traveled...\pYou must encounter lively POKéMON\nand works of art depicting them.\pIf you were to come across such a\npainting, may we ask you to obtain\lthe artist’s permission to exhibit\lit here?$"

Naranja_IslaKumquat_G13_M03_Text_08187F4E::
# 264 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I wish to fill this exhibit hall with\nmodern and vibrant paintings of\lPOKéMON.$"

Naranja_IslaKumquat_G13_M03_Text_08187F9D::
# 268 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Thanks to you, we’ve added a new\npainting to our collection!\pI’ve heard it depicts your POKéMON.\nTruly magnificent!\pThank you so very, very much!$"

Naranja_IslaKumquat_G13_M03_Text_0818802F::
# 272 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Ah! It’s you!\n{PLAYER}!$"

Naranja_IslaKumquat_G13_M03_Text_08188041::
# 276 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Isn’t this marvelous?\nThis collection of paintings!\pEach one of them flawless!\nNone better than another!\pThese paintings have attracted\nmore guests to our ART MUSEUM.\pSincerely, I thank you, {PLAYER}.\nThis is my dream come true!$"

Naranja_IslaKumquat_G13_M03_Text_08188120::
# 280 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "This is merely a token of my gratitude.$"

Naranja_IslaKumquat_G13_M03_Text_08188166::
# 284 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I will keep this for you until we\nmeet again.$"

Naranja_IslaKumquat_G13_M03_Text_08188194::
# 288 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Ah, so good to see you, {PLAYER}!\pIt’s an honor to have you visit us\non your busy journeys.\pPlease, relax and do enjoy your\nvisit with us.$"

Naranja_IslaKumquat_G13_M03_Text_08188219::
# 292 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with pink-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_0818824C::
# 296 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with yellow-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_08188281::
# 300 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with blue-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_081882B4::
# 304 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with red-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_081882E6::
# 308 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a picture frame with green-colored\nadornments.$"

Naranja_IslaKumquat_G13_M03_Text_0818831A::
# 312 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "It’s a painting of POKéMON.$"

Naranja_IslaKumquat_G13_M03_Text_08188336::
# 316 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "I’ve been away awhile, so the new\npaintings up here surprised me.\pI wish someone would paint my POKéMON\nthis pretty.$"

Naranja_IslaKumquat_G13_M03_Text_081883AB::
# 320 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Well... So this is where they show the\ntopical POKéMON paintings.\pI see, these new paintings are indeed\nrather amusing.$"

Naranja_IslaKumquat_G13_M03_Text_08188423::
# 324 "data/maps/Naranja_IslaKumquat_G13_M03/scripts.pory"
	.string "Wow, is that right?\nThese paintings are of your POKéMON.\pIsn’t that just the ultimate joy for\na TRAINER?$"
