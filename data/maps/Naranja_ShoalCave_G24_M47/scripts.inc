Naranja_ShoalCave_G24_M47_MapScripts::
# 5 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_ShoalCave_G24_M47_OnLoad
# 6 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ShoalCave_G24_M47_OnTransition
	.byte 0


Naranja_ShoalCave_G24_M47_OnTransition::
# 10 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_083A
# 11 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1AB
# 12 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1AF
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1AB::
# 16 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmaplayoutindex 0xAA
	end


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1AF::
# 21 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmaplayoutindex 0xA6
	end


Naranja_ShoalCave_G24_M47_OnLoad::
# 26 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	call Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1B9
	end


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1B9::
# 31 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B8
# 32 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1DA
# 33 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_083A
# 34 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1DA
# 35 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x1F, 8, 0x358, 1
# 36 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1DA
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1DA::
# 40 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B9
# 41 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1FB
# 42 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_083A
# 43 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1FB
# 44 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0xE, 0x1A, 0x358, 1
# 45 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1FB
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E1FB::
# 49 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BC
# 50 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E213
# 51 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x29, 0x14, 0x359, 1
# 52 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E213
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E213::
# 56 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BD
# 57 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E22B
# 58 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x29, 0xA, 0x359, 1
# 59 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E22B
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E22B::
# 63 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BE
# 64 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E243
# 65 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 6, 9, 0x359, 1
# 66 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E243
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E243::
# 70 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BF
# 71 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E256
# 72 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x10, 0xD, 0x359, 1
	return


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E256::
	return


Naranja_ShoalCave_G24_M47_EventScript_Sign_3::
# 81 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	lockall
# 82 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BC
# 83 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E289
# 84 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2F
# 85 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 86 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 0
# 87 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 88 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 89 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x29, 0x14, 0x35B, 0
# 90 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	special DrawWholeMapView
# 91 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BC
# 92 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E289::
# 97 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M47_Text_081C69B8
# 98 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sign_4::
# 104 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	lockall
# 105 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BD
# 106 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E289
# 107 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2F
# 108 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 109 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 0
# 110 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 111 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 112 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x29, 0xA, 0x35B, 0
# 113 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BD
# 115 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sign_5::
# 120 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	lockall
# 121 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BE
# 122 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E289
# 123 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2F
# 124 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 125 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 0
# 126 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 127 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 128 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 6, 9, 0x35B, 0
# 129 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	special DrawWholeMapView
# 130 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BE
# 131 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sign_6::
# 136 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	lockall
# 137 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BF
# 138 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E289
# 139 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2F
# 140 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 141 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 0
# 142 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 143 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 144 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x10, 0xD, 0x35B, 0
# 145 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	special DrawWholeMapView
# 146 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03BF
# 147 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sign_1::
# 152 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	lockall
# 153 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B8
# 154 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E35B
# 155 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2E
# 156 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 157 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 0
# 158 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 159 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 160 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0x1F, 8, 0x35A, 0
# 161 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	special DrawWholeMapView
# 162 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B8
# 163 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E35B::
# 168 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	loadword 0, Naranja_ShoalCave_G24_M47_Text_081C6979
# 169 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 4
# 170 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_Sign_2::
# 175 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	lockall
# 176 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	checkflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B9
# 177 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_ShoalCave_G24_M47_EventScript_Sub_0815E35B
# 178 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2E
# 179 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 180 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 0
# 181 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 182 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 183 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setmetatile 0xE, 0x1A, 0x35A, 0
# 184 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	special DrawWholeMapView
# 185 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setflag FLAG_NARANJA_SHOAL_CAVE_EVENT_COMPLETE_03B9
# 186 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	releaseall
	end


Naranja_ShoalCave_G24_M47_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 191 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 192 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 193 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	callstd 1
	end


Naranja_ShoalCave_G24_M47_Text_081C6979::
# 197 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	.string "There was some SHOAL SALT here.\nBut, there’s nothing here now.$"

Naranja_ShoalCave_G24_M47_Text_081C69B8::
# 201 "data/maps/Naranja_ShoalCave_G24_M47/scripts.pory"
	.string "There was a SHOAL SHELL here.\nBut, there’s nothing here now.$"
