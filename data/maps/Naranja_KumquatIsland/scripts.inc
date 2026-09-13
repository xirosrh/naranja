Naranja_KumquatIsland_MapScripts::
# 5 "data/maps/Naranja_KumquatIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_KumquatIsland_OnTransition
# 6 "data/maps/Naranja_KumquatIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_KumquatIsland_OnLoad
	.byte 0


Naranja_KumquatIsland_OnTransition::
# 10 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_081B
# 11 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 0
# 12 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_HIDE_NARANJA_KUMQUAT_ISLAND_G13_M04_REPORTER_M
# 13 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 14 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_081A02C1
# 15 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
# 16 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call Naranja_ColdPath_FossilManiacsTunnel_EventScript_Sub_081A014E
	end


Naranja_KumquatIsland_OnLoad::
# 21 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x45, 4, 0xA9, 1
# 22 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x46, 4, 0x2A8, 1
# 23 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x47, 4, 0x2A9, 1
# 24 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x48, 4, 0x2AA, 1
# 25 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x45, 5, 0x91, 1
# 26 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x46, 5, 0x2B0, 1
# 27 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x47, 5, 0x2B1, 0
# 28 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x48, 5, 0x2B2, 1
# 29 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x45, 6, 0x1BE, 0
# 30 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x46, 6, 0x1BF, 0
# 31 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x47, 6, 0x170, 0
# 32 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x48, 6, 0x1BD, 0
# 33 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_0070
# 34 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if LESS_THAN, Naranja_KumquatIsland_EventScript_Sub_0814CABE
# 35 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_080D
# 36 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CB2B
	end


Naranja_KumquatIsland_EventScript_Sub_0814CABE::
# 41 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4C, 0xC, 0x290, 1
# 42 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4D, 0xC, 0x291, 1
# 43 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4C, 0xD, 0x2A0, 1
# 44 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4D, 0xD, 0x2A1, 1
# 45 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4C, 0xE, 0x298, 1
# 46 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4D, 0xE, 0x299, 1
# 47 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4C, 0xF, 0x2A0, 1
# 48 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4D, 0xF, 0x2A1, 1
# 49 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4D, 0x10, 0x298, 1
# 50 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4E, 0x10, 0x299, 1
# 51 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4D, 0x11, 0x2A0, 1
# 52 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x4E, 0x11, 0x2A1, 1
	return


Naranja_KumquatIsland_EventScript_Sub_0814CB2B::
# 57 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x45, 4, 0xA9, 1
# 58 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x46, 4, 0xA9, 1
# 59 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x47, 4, 0xA9, 1
# 60 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x48, 4, 0xA9, 1
# 61 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x45, 5, 0x91, 1
# 62 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x46, 5, 0x91, 1
# 63 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x47, 5, 0x91, 1
# 64 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setmetatile 0x48, 5, 0x91, 1
	return


Naranja_KumquatIsland_EventScript_Gentleman::
# 69 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lock
# 70 "data/maps/Naranja_KumquatIsland/scripts.pory"
	faceplayer
# 71 "data/maps/Naranja_KumquatIsland/scripts.pory"
	dotimebasedevents
# 72 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_08CF
# 73 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CBB4
# 74 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081C5A7A, MSGBOX_DEFAULT
# 75 "data/maps/Naranja_KumquatIsland/scripts.pory"
	random 0xA
# 76 "data/maps/Naranja_KumquatIsland/scripts.pory"
	addvar VAR_RESULT, 0x85
# 77 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_RESULT
# 78 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 79 "data/maps/Naranja_KumquatIsland/scripts.pory"
	callstd 0
# 80 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 81 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 82 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_08CF
# 83 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081C5B1D, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Sub_0814CBB4::
# 89 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081C5B5D, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Man1::
# 95 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081686C9, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_Boy4::
# 100 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168819, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_Sailor::
# 105 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lock
# 106 "data/maps/Naranja_KumquatIsland/scripts.pory"
	faceplayer
# 107 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_0070
# 108 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CC04
# 109 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081688C1, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Sub_0814CC04::
# 115 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168934, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Woman3::
# 121 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168A55, MSGBOX_DEFAULT
# 122 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Man2::
# 127 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168A8D, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_OldMan1::
# 132 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168B1F, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_OldWoman1::
# 137 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168B9B, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_OldMan1_2::
# 142 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lock
# 143 "data/maps/Naranja_KumquatIsland/scripts.pory"
	faceplayer
# 144 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_MELLSWEET_ISLAND_EVENT_COMPLETE_080D
# 145 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CC5D
# 146 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168C16, MSGBOX_DEFAULT
# 147 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Sub_0814CC5D::
# 152 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168D15, MSGBOX_DEFAULT
# 153 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Sign_5::
# 158 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168DA9, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Sign_6::
# 163 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168DE1, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Sign_7::
# 168 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168E2F, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Sign_1::
# 173 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lockall
# 174 "data/maps/Naranja_KumquatIsland/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 175 "data/maps/Naranja_KumquatIsland/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 176 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 177 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CCA2
# 178 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168EA4, MSGBOX_DEFAULT
# 179 "data/maps/Naranja_KumquatIsland/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_EventScript_Sub_0814CCA2::
# 184 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168E67, MSGBOX_DEFAULT
# 185 "data/maps/Naranja_KumquatIsland/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_EventScript_Sign_8::
# 190 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lockall
# 191 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 192 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CCC0
# 193 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168EDA, MSGBOX_DEFAULT
# 194 "data/maps/Naranja_KumquatIsland/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_EventScript_Sub_0814CCC0::
# 199 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168F57, MSGBOX_DEFAULT
# 200 "data/maps/Naranja_KumquatIsland/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_EventScript_Sign_9::
# 205 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168FA1, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Sign_3::
# 210 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168FF3, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Sign_10::
# 215 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08169072, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Object10::
# 220 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lockall
# 221 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_00DA
# 222 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CD18
# 223 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_0816864A, MSGBOX_DEFAULT
# 224 "data/maps/Naranja_KumquatIsland/scripts.pory"
	applymovement 32783, Naranja_KumquatIsland_Movement_081A0839
# 225 "data/maps/Naranja_KumquatIsland/scripts.pory"
	waitmovement LOCALID_NONE
# 226 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168675, MSGBOX_DEFAULT
# 227 "data/maps/Naranja_KumquatIsland/scripts.pory"
	applymovement 32783, Naranja_RusturfTunnel_Movement_081A083D
# 228 "data/maps/Naranja_KumquatIsland/scripts.pory"
	waitmovement LOCALID_NONE
# 229 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_00DA
# 230 "data/maps/Naranja_KumquatIsland/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_EventScript_Sub_0814CD18::
# 235 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_0816864A, MSGBOX_DEFAULT
# 236 "data/maps/Naranja_KumquatIsland/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_EventScript_Object13::
# 241 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168455, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_Object14::
# 246 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081684C2, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_Object15::
# 251 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168573, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_Object12::
# 256 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081685EB, MSGBOX_NPC
	end


Naranja_KumquatIsland_EventScript_Vars::
# 261 "data/maps/Naranja_KumquatIsland/scripts.pory"
	lock
# 262 "data/maps/Naranja_KumquatIsland/scripts.pory"
	faceplayer
# 263 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkplayergender
# 264 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 265 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CD60
# 266 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 267 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CDD3
	end


Naranja_KumquatIsland_EventScript_Sub_0814CD60::
# 272 "data/maps/Naranja_KumquatIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 273 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_011E
# 274 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CDB0
# 275 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_011E
# 276 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if LESS_THAN, Naranja_KumquatIsland_EventScript_Sub_0814CDB9
# 277 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 278 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CDC2
# 279 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167B94, MSGBOX_DEFAULT
# 280 "data/maps/Naranja_KumquatIsland/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 281 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 282 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE46
# 283 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 284 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE56
# 285 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 286 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE66
	end


Naranja_KumquatIsland_EventScript_Sub_0814CDB0::
# 291 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167B55, MSGBOX_YESNO
	return


Naranja_KumquatIsland_EventScript_Sub_0814CDB9::
# 296 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081679BF, MSGBOX_YESNO
	return


Naranja_KumquatIsland_EventScript_Sub_0814CDC2::
# 301 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_011E
# 302 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167AEB, MSGBOX_DEFAULT
# 303 "data/maps/Naranja_KumquatIsland/scripts.pory"
	savebgm MUS_DUMMY
# 304 "data/maps/Naranja_KumquatIsland/scripts.pory"
	fadedefaultbgm
# 305 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Sub_0814CDD3::
# 310 "data/maps/Naranja_KumquatIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 311 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_011E
# 312 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE23
# 313 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_011E
# 314 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if LESS_THAN, Naranja_KumquatIsland_EventScript_Sub_0814CE2C
# 315 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 316 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE35
# 317 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081680A9, MSGBOX_DEFAULT
# 318 "data/maps/Naranja_KumquatIsland/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 319 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 320 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE76
# 321 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 322 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE86
# 323 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 324 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CE96
	end


Naranja_KumquatIsland_EventScript_Sub_0814CE23::
# 329 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168067, MSGBOX_YESNO
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE2C::
# 334 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167F75, MSGBOX_YESNO
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE35::
# 339 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_011E
# 340 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_0816802C, MSGBOX_DEFAULT
# 341 "data/maps/Naranja_KumquatIsland/scripts.pory"
	savebgm MUS_DUMMY
# 342 "data/maps/Naranja_KumquatIsland/scripts.pory"
	fadedefaultbgm
# 343 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Sub_0814CE46::
# 348 "data/maps/Naranja_KumquatIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_KUMQUAT_ISLAND_665, Naranja_KumquatIsland_Text_08167BD5
# 349 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CEA6
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE56::
# 353 "data/maps/Naranja_KumquatIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_KUMQUAT_ISLAND_666, Naranja_KumquatIsland_Text_08167BD5
# 354 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CEA6
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE66::
# 358 "data/maps/Naranja_KumquatIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_KUMQUAT_ISLAND_664, Naranja_KumquatIsland_Text_08167BD5
# 359 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CEA6
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE76::
# 363 "data/maps/Naranja_KumquatIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_KUMQUAT_ISLAND_662, Naranja_KumquatIsland_Text_081680E4
# 364 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CF12
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE86::
# 368 "data/maps/Naranja_KumquatIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_KUMQUAT_ISLAND_663, Naranja_KumquatIsland_Text_081680E4
# 369 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CF12
	return


Naranja_KumquatIsland_EventScript_Sub_0814CE96::
# 373 "data/maps/Naranja_KumquatIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_KUMQUAT_ISLAND_661, Naranja_KumquatIsland_Text_081680E4
# 374 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CF12
	return


Naranja_KumquatIsland_EventScript_Sub_0814CEA6::
# 378 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167C6B, MSGBOX_DEFAULT
# 379 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setvar VAR_RESULT, 0
# 380 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 381 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CEDE
# 382 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 383 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CEEE
# 384 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 385 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CEF7
# 386 "data/maps/Naranja_KumquatIsland/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TANGELO_TOWN_PORT_G01_M03_RIVAL_MAY_NORMAL
# 387 "data/maps/Naranja_KumquatIsland/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TANGELO_TOWN_PORT_G01_M03_PICHU_DOLL
# 388 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CF6B
	return


Naranja_KumquatIsland_EventScript_Sub_0814CEDE::
# 392 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_080E
# 393 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CEE8
	return


Naranja_KumquatIsland_EventScript_Sub_0814CEE8::
# 398 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setvar VAR_RESULT, 1
	return


Naranja_KumquatIsland_EventScript_Sub_0814CEEE::
# 403 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167D08, MSGBOX_DEFAULT
	return


Naranja_KumquatIsland_EventScript_Sub_0814CEF7::
# 408 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 409 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CF09
# 410 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167DDD, MSGBOX_DEFAULT
	return


Naranja_KumquatIsland_EventScript_Sub_0814CF09::
# 415 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08167EAA, MSGBOX_DEFAULT
	return


Naranja_KumquatIsland_EventScript_Sub_0814CF12::
# 420 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168149, MSGBOX_DEFAULT
# 421 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setvar VAR_RESULT, 0
# 422 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 423 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CEDE
# 424 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 425 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CF47
# 426 "data/maps/Naranja_KumquatIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 427 "data/maps/Naranja_KumquatIsland/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CF50
# 428 "data/maps/Naranja_KumquatIsland/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TANGELO_TOWN_PORT_G01_M01_RIVAL_BRENDAN_NORMAL
# 429 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto Naranja_KumquatIsland_EventScript_Sub_0814CF6B
	return


Naranja_KumquatIsland_EventScript_Sub_0814CF47::
# 433 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_081681EA, MSGBOX_DEFAULT
	return


Naranja_KumquatIsland_EventScript_Sub_0814CF50::
# 438 "data/maps/Naranja_KumquatIsland/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 439 "data/maps/Naranja_KumquatIsland/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_0814CF62
# 440 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_08168282, MSGBOX_DEFAULT
	return


Naranja_KumquatIsland_EventScript_Sub_0814CF62::
# 445 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_0816835A, MSGBOX_DEFAULT
	return


Naranja_KumquatIsland_EventScript_Sub_0814CF6B::
# 450 "data/maps/Naranja_KumquatIsland/scripts.pory"
	closemessage
# 451 "data/maps/Naranja_KumquatIsland/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 452 "data/maps/Naranja_KumquatIsland/scripts.pory"
	waitmovement LOCALID_NONE
# 453 "data/maps/Naranja_KumquatIsland/scripts.pory"
	delay 0x32
# 454 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 455 "data/maps/Naranja_KumquatIsland/scripts.pory"
	dofieldeffect 0x1E
# 456 "data/maps/Naranja_KumquatIsland/scripts.pory"
	delay 0xF
# 457 "data/maps/Naranja_KumquatIsland/scripts.pory"
	removeobject 32783
# 458 "data/maps/Naranja_KumquatIsland/scripts.pory"
	waitfieldeffect 0x1E
# 459 "data/maps/Naranja_KumquatIsland/scripts.pory"
	savebgm MUS_DUMMY
# 460 "data/maps/Naranja_KumquatIsland/scripts.pory"
	fadedefaultbgm
# 461 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_0124
# 462 "data/maps/Naranja_KumquatIsland/scripts.pory"
	release
	end


Naranja_KumquatIsland_EventScript_Girl1::
# 467 "data/maps/Naranja_KumquatIsland/scripts.pory"
	msgbox Naranja_KumquatIsland_Text_0816DA89, MSGBOX_SIGN
	end


Naranja_KumquatIsland_EventScript_Sub_081A02C1::
# 472 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setweather 0xC
	return


Naranja_KumquatIsland_EventScript_ItemBall::
# 477 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setorcopyvar VAR_0x8000, 0x54
# 478 "data/maps/Naranja_KumquatIsland/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 479 "data/maps/Naranja_KumquatIsland/scripts.pory"
	callstd 1
	end


# 483 "data/maps/Naranja_KumquatIsland/scripts.pory"
Naranja_KumquatIsland_Movement_081A0839:
# 484 "data/maps/Naranja_KumquatIsland/scripts.pory"
	face_player
	step_end

Naranja_KumquatIsland_Text_081679BF::
# 487 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "MAY: Oh, hey?\n{PLAYER}{KUN}, are you shopping, too?\pI bought a whole bunch of DOLLS and\nPOSTERS.\pOf course, I’ve also caught a lot of\nPOKéMON, and I’m raising them\lproperly, too.\pActually, I’m more worried if you’re\nraising POKéMON properly, {PLAYER}{KUN}.\pI’ll battle with you, so you can show\nme your POKéMON, {PLAYER}{KUN}.$"

Naranja_KumquatIsland_Text_08167AEB::
# 491 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven’t you\nbeen raising your POKéMON?\pThat’s not a very good showing as a\nTRAINER...$"

Naranja_KumquatIsland_Text_08167B55::
# 495 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\ncheck out your POKéMON!$"

Naranja_KumquatIsland_Text_08167B94::
# 499 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "MAY: The POKéMON I raised won’t be\nbeaten by your POKéMON, {PLAYER}{KUN}!$"

Naranja_KumquatIsland_Text_08167BD5::
# 503 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "... ... ... ... ... ... ... ...\pI remember the battle I had with you,\n{PLAYER}{KUN}, on ROUTE 103.\pThat battle helped you become this\nstrong, {PLAYER}{KUN}, didn’t it?$"

Naranja_KumquatIsland_Text_08167C6B::
# 507 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "MAY: I’m thinking of going back to\nLITTLEROOT soon.\pI’ve caught a decent group of POKéMON,\nand my POKéDEX is coming along, so\lI’m going home to show my dad.$"

Naranja_KumquatIsland_Text_08167D08::
# 511 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\pCollect all the GYM BADGES and take\nthe POKéMON LEAGUE challenge?\pWell, while you’re collecting BADGES,\n{PLAYER}{KUN}, I’m going to work on my\lPOKéDEX. I’ll complete it before you!\pSee you!$"

Naranja_KumquatIsland_Text_08167DDD::
# 515 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\pAre you taking the POKéMON LEAGUE\nchallenge?\pOr, are you going to complete your\nPOKéDEX?\pI might’ve lost to you in battling,\nbut I’ll finish my POKéDEX before you!\pSee you!$"

Naranja_KumquatIsland_Text_08167EAA::
# 519 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\pAre you taking the BATTLE TOWER\nchallenge?\pOr, are you going to complete your\nPOKéDEX?\pI might’ve lost to you in battling,\nbut I’ll finish my POKéDEX before you!\pSee you!$"

Naranja_KumquatIsland_Text_08167F75::
# 523 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "BRENDAN: Oh, hey, it’s {PLAYER}.\pI’m running an errand for my dad.\nNo, I’m not buying any DOLLS.\pAnyways, it’s been a while.\pWant to have a battle to see who’s been\nraising POKéMON better?$"

Naranja_KumquatIsland_Text_0816802C::
# 527 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "BRENDAN: Oh, what’s the matter?\nDon’t have the confidence?$"

Naranja_KumquatIsland_Text_08168067::
# 531 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "BRENDAN: Want to battle to see who’s\nbeen raising POKéMON better?$"

Naranja_KumquatIsland_Text_081680A9::
# 535 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "BRENDAN: Aww, but you know I’m not\ngoing to lose to no {PLAYER}.$"

Naranja_KumquatIsland_Text_081680E4::
# 539 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Humph...\nYou’ve done a lot of raising.\pThat stings a bit - I had a head start\non you as a TRAINER...$"

Naranja_KumquatIsland_Text_08168149::
# 543 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "BRENDAN: I...\nI plan on going home to LITTLEROOT.\pYou know I’m helping out my dad on his\nPOKéDEX. It’s coming together pretty\ldecently, so I should go show him.$"

Naranja_KumquatIsland_Text_081681EA::
# 547 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "{PLAYER}, what are you going to do?\pCollect all the GYM BADGES and take\nthe POKéMON LEAGUE challenge?\pMaybe I’ll do that, too...\pWell, anyway, hang in there!$"

Naranja_KumquatIsland_Text_08168282::
# 551 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "{PLAYER}, what are you going to do?\pSince you’re that strong, are you\ntaking the POKéMON LEAGUE challenge?\pHeh, even me - if I trained my POKéMON\na bit more, I should be stronger than\lyou, {PLAYER}.\pWell, anyway, hang in there!$"

Naranja_KumquatIsland_Text_0816835A::
# 555 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "{PLAYER}, what are you going to do?\pSince you’re that strong, are you\ntaking the BATTLE TOWER challenge?\pHeh, even me - if I trained my POKéMON\na bit more, I should be stronger than\lyou, {PLAYER}.\lMaybe I will go to the BATTLE TOWER.\pWell, anyway, hang in there!$"

Naranja_KumquatIsland_Text_08168455::
# 559 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Fufufu...\pWe moved more loot into our secret\nHIDEOUT today...\pWh-who are you?!\nI was just talking to myself!$"

Naranja_KumquatIsland_Text_081684C2::
# 563 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "I’m just a GRUNT, so I don’t know what\nthe BOSS is thinking...\pBut being on TEAM {AQUA}, I know I’ll get\nthe chance to do big things!\pWh-who are you?!\nI was just talking to myself!$"

Naranja_KumquatIsland_Text_08168573::
# 567 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Hey, you!\pDon’t go near the cave in the cove!\pWhy? You don’t need a reason why!\nI’m an adult, so you just listen to me!$"

Naranja_KumquatIsland_Text_081685EB::
# 571 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "If this whole wide world becomes ours,\nTEAM {AQUA}’s, it will be a happier\lplace for POKéMON, too.$"

Naranja_KumquatIsland_Text_0816864A::
# 575 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "There! WAILMER!\nLeap out of the water now!$"

Naranja_KumquatIsland_Text_08168675::
# 579 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Hunh? What do you want?\pYou’re messing up our training, so can\nyou, like, get lost?$"

Naranja_KumquatIsland_Text_081686C9::
# 583 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "The POKéMON that come to this CONTEST\nHALL are all prizewinners.\lThey come from all over the country.\pMy heart swells with excitement!$"

Naranja_KumquatIsland_Text_08168819::
# 587 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "I came from KANTO.\pThe HOENN region is beautiful with\nall its water and verdant nature.\pHunh? Wait a second...\pCould there be rare POKéMON that live\nonly in this area?$"

Naranja_KumquatIsland_Text_081688C1::
# 591 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "TEAM {AQUA}’s been training their\nWAILMER in the cove.\pWe SAILORS can’t get our boats out\nto sea with them in the way!$"

Naranja_KumquatIsland_Text_08168934::
# 595 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Ahoy, did you know?\pSomeone punted TEAM {AQUA} out of the\nway for us!\pThat got the WAILMER out of the cove,\nso we can get our boats out again.$"

Naranja_KumquatIsland_Text_08168A55::
# 599 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "El transporte marìtimo de fuel   \nsiempre es peligroso.$"

Naranja_KumquatIsland_Text_08168A8D::
# 603 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "I’m an ART DEALER.\pI am a buyer and seller of fine art,\nespecially paintings.\pI’ve heard that the MUSEUM here has\nmagnificent works on exhibit...$"

Naranja_KumquatIsland_Text_08168B1F::
# 607 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Even as we grow old and wrinkled, the\nsea remains forever young with the\lvivid brilliance of life...\pFwohoho fwohohohoho...$"

Naranja_KumquatIsland_Text_08168B9B::
# 611 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "It was sixty years ago that my husband\nproposed to me here.\lThe sea remains as beautiful as ever.\pMufufufu mufufufufufu...$"

Naranja_KumquatIsland_Text_08168C16::
# 615 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "Hm, you know of the peculiar cavern\nin this cove?\pThat had been a natural formation, but\nthen that TEAM {AQUA} lot came along\land made their renovations.\pThey call themselves the “nature-loving\nTEAM {AQUA}”!\pBut what they do and what they say\ndon’t match at all!$"

Naranja_KumquatIsland_Text_08168D15::
# 619 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "That cave in the cove...\nIt seems someone sealed the entrance,\lso no one can enter it anymore.\pThat TEAM {AQUA} lot, they must\nhave gone away for good.$"

Naranja_KumquatIsland_Text_08168DA9::
# 623 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "LILYCOVE CITY\p“Where the land ends and the\nsea begins.”$"

Naranja_KumquatIsland_Text_08168DE1::
# 627 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "POKéMON CONTESTS\nMASTER RANK REGISTRATION\p“Enter CONTESTS with your friends!”$"

Naranja_KumquatIsland_Text_08168E2F::
# 631 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "COVE LILY MOTEL\p“Remember us as COVE LILY of\nLILYCOVE.”$"

Naranja_KumquatIsland_Text_08168E67::
# 635 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "LILYCOVE MUSEUM\p“POKéMON Masterpiece Collection\non exhibit!”$"

Naranja_KumquatIsland_Text_08168EA4::
# 639 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "LILYCOVE MUSEUM\p“{PLAYER}’s POKéMON Collection\non exhibit!”$"

Naranja_KumquatIsland_Text_08168EDA::
# 643 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p“The ferry S.S. TIDAL is under\nconstruction in SLATEPORT CITY.\p“Service is scheduled to begin\nshortly.”$"

Naranja_KumquatIsland_Text_08168F57::
# 647 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p“Enjoy a delightful cruise on the\nferry S.S. TIDAL.”$"

Naranja_KumquatIsland_Text_08168FA1::
# 651 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\pThe names of TRAINERS are scribbled\nall over the sign...$"

Naranja_KumquatIsland_Text_08168FF3::
# 655 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p“Overflowing with great merchandise\nand excitement!\p“A great place to find that something\nyou need!”$"

Naranja_KumquatIsland_Text_08169072::
# 659 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "MOVE DELETER’S HOUSE\p“Unwanted POKéMON moves deleted.”$"

Naranja_KumquatIsland_Text_0816DA89::
# 663 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "The sea, huh?\pI wonder what it’s like at the bottom\nof the sea?$"

Naranja_KumquatIsland_Text_081C5A7A::
# 667 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "When it gets right down to it...\pThe same way suits suit me perfectly,\na crisp breeze suits the sea.\pAnd you, a BERRY suits you to a “T”...\pWhy should that be so?$"

Naranja_KumquatIsland_Text_081C5B1D::
# 671 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "When it gets right down to it...\pIt’s because you’re a TRAINER!$"

Naranja_KumquatIsland_Text_081C5B5D::
# 675 "data/maps/Naranja_KumquatIsland/scripts.pory"
	.string "When it gets right down to it...\pThe way dignified simplicity suits me,\nオカキクケS perfectly suit POKéMON.$"
