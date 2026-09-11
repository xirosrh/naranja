Naranja_ValnTang_G09_M00_MapScripts::
	.byte 0


Naranja_ValnTang_G09_M00_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId1::
# 8 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	lockall
# 9 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 10 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	call_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_08155388
# 11 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 12 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	call_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_0815539C
# 13 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 14 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	call_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_081553CF
# 15 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_0094
# 16 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	call_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_081553B0
# 17 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	faceplayer
# 18 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C14B
# 19 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086B4970
# 21 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	closemessage
# 23 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x114
# 24 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 25 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 0
# 26 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_0094
# 27 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G00_M01_VARS
# 28 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_08155388::
# 33 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 34 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 35 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C472
# 36 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_0815539C::
# 42 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 43 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C3F7
# 45 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_081553B0::
# 51 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 52 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 53 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C2F2
# 54 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 55 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	closemessage
# 56 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 57 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 58 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_081553CF::
# 63 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 64 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 65 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C360
# 66 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_081553EC::
# 72 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C764
# 73 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 2
	end


Naranja_ValnTang_G09_M00_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId4::
# 78 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_0817C53D
# 79 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 2
	end


Naranja_ValnTang_G09_M00_EventScript_Trigger_1::
# 84 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 85 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_086B31B5
# 86 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ValnTang_G09_M00_Movement_086B31C2
# 87 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086B321B
# 88 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 6
# 89 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_MAN_7, Naranja_ValnTang_G09_M00_Movement_086B31C4
# 90 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x90
# 91 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086B3254
# 92 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 93 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HIPSTER, Naranja_ValnTang_G09_M00_Movement_086B31D4
# 94 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_BARD, Naranja_ValnTang_G09_M00_Movement_086B31D8
# 95 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_ValnTang_G09_M00_Movement_086B31DF
# 96 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x90
# 97 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_MAN_7, Naranja_ValnTang_G09_M00_Movement_086B31E4
# 98 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xFF
# 99 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xFF
# 100 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xC0
# 101 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086B329E
# 102 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 3
# 103 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_ValnTang_G09_M00_Movement_086B3204
# 104 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x90
# 105 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086B32E1
# 106 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 107 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_MAN_7, Naranja_ValnTang_G09_M00_Movement_086B3210
# 108 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xFF
# 109 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x40
# 110 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086C0295
# 111 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 4
# 112 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto Naranja_ValnTang_G09_M00_EventScript_Sub_086B3531
	return


Naranja_ValnTang_G09_M00_EventScript_Sub_086B31B5::
# 116 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	release
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_086B3531::
# 121 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 122 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200D
# 123 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G09_M00_HEX_MANIAC
# 124 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER
# 125 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G09_M01_TRADER
# 126 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 127 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 128 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 129 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 130 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 131 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARINA_G00_M14_LITTLE_GIRL_1
# 132 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 133 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	release
	end


Naranja_ValnTang_G09_M00_EventScript_OBJ_EVENT_GFX_BARD_LocalId2::
# 138 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	faceplayer
# 139 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 140 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_ValnTang_G09_M00_EventScript_Sub_081553EC
# 141 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 142 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_081553EC
# 143 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 144 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	nop
# 145 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	loadword 0, Naranja_ValnTang_G09_M00_Text_086B36B1
# 146 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 2
	end


# 150 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31C2:
# 151 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
	step_end

# 154 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31C4:
# 155 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 156 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 157 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 158 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 159 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 160 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 161 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 162 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 163 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_left
# 164 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 165 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_right
# 166 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 167 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_up
# 168 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 169 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_down
	step_end

# 172 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31D4:
# 173 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_exclamation_mark
# 174 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 175 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
	step_end

# 178 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31D8:
# 179 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_exclamation_mark
# 180 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 181 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 182 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 183 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 184 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_up
	step_end

# 187 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31DF:
# 188 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_exclamation_mark
# 189 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_left
	step_end

# 192 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31E4:
# 193 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 194 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 195 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 196 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 197 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 198 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 199 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_up
# 200 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 201 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_down
# 202 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 203 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 204 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 205 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 206 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 207 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 208 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 209 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 210 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 211 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 212 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 213 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 214 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 215 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 216 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 217 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 218 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 219 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 220 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 221 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 222 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 223 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_down
	step_end

# 226 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B3204:
# 227 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 228 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 229 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 230 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 231 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 232 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 233 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 234 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 235 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 236 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 237 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	set_invisible
	step_end

# 240 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B3210:
# 241 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 242 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 243 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 244 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 245 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 246 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 247 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 248 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	set_invisible
	step_end

Naranja_ValnTang_G09_M00_Text_0817C14B::
# 251 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x09}Ivy: Vaya aventura estùpida…\pTenía que haber tenido cuidado de no\nacercarme a un Vileplume que estuviese\lmarcando su territorio con esporas.\p¡Vaya susto!$"

Naranja_ValnTang_G09_M00_Text_0817C2F2::
# 255 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x09}¿Viste los extraños colores \nde los pokemon de las islas?\pSe debe al diferente clima,\nesto los hace ùnicos$"

Naranja_ValnTang_G09_M00_Text_0817C360::
# 259 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "DOCK: Shipbuilding is an art.\pA lot of things can’t be figured out\njust by calculating.\pI really could use advice from a veteran\nwho knows the seas...$"

Naranja_ValnTang_G09_M00_Text_0817C3F7::
# 263 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "DOCK: Hi! MR. BRINEY’s joined us to\nlend us his help.\pThanks to the veteran sailor, the\nferry is steadily coming together.$"

Naranja_ValnTang_G09_M00_Text_0817C472::
# 267 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "DOCK: The ferry is finally ready!\pThe new S.S. TIDAL is truly a marvel\nof technology!\pBut, I get the feeling that we can\nmake something even better.\pYou know, there’s never an end to\ntechnology’s march.$"

Naranja_ValnTang_G09_M00_Text_0817C53D::
# 271 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "MR. BRINEY: Ah, {PLAYER}{KUN}!\nIt’s been too long!\pAye, since I met you, this old seadog’s\nbeen feeling frisky!\pSo I’ve decided to help DOCK make a\nferry.\pAye, after all, a ferry would be able\nto carry a lot of people.\pBut, you know, that DOCK is really\nsomething special.\pWith his knack for technology and\nmy experience, I’m sure that we can\lbuild one great ship, aye!$"

Naranja_ValnTang_G09_M00_Text_0817C764::
# 275 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "Me dedico a estudiar las aguas\ny sus pokémon…\p…y me encanta !$"

Naranja_ValnTang_G09_M00_Text_086B321B::
# 279 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Guau!  \n¡¡ El laboratorio de la profesora Ivy !!$"

Naranja_ValnTang_G09_M00_Text_086B3254::
# 283 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "Aquí debe estar el laboratorio de la\nprof. Ivy\p¡¡Cuántas chicas bonitas!!$"

Naranja_ValnTang_G09_M00_Text_086B329E::
# 287 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "Hola preciosa.\p{COLOR 0x0A}Ivy: Yo…Ehh…\n…creo que tenía que ir…\lal jardín.$"

Naranja_ValnTang_G09_M00_Text_086B32E1::
# 291 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "¡No te dejaré sola!!\n¡Espera!$"

Naranja_ValnTang_G09_M00_Text_086B36B1::
# 295 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "¡Guau!\nSalvaste a la profesora de una parálisis\p¿Así que piensas viajar\npor las {COLOR 0x0E}Islas Naranjas {COLOR 0x01}?\p¿Y como piensas moverte entre\nlas distintas islas?\p{COLOR 0x04}{PLAYER}: Ehh…\n…no lo había pensado\p{COLOR 0x01}En el centro de recuperación pokemon\nbuscaban un dueño para\lun lapras curado.\pHas demostrado lo que vales.\nVe allí de mi parte y así te ayudara\la desplazarte por el archipiélago.$"

Naranja_ValnTang_G09_M00_Text_086B4970::
# 299 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x04}¡Pero la culpa la tuvo Brock!\n¡Usted no hizo nada!\p{COLOR 0x09}Jaja, menos mal\nque avisaste a Joy, {PLAYER}.\p{COLOR 0x04}Verás venimos por un recado de OAK.\p{COLOR 0x09}¿La こgsBallこ?\n{COLOR 0x04}Así es.\l{COLOR 0x09}La hemos estado investigando…\lpero no podemos ni abrirla.\lTe la daré para que se la lleves a OAK,\lnuestra especialidad son los pokemon,\lsu alimentación, vida, cría…\lOAK seguro que tendrá maquinaria\lmas sofisticada para abrirla…\p…y yo tengo mucho trabajo que hacer\ntodavía.\p¡Llévasela!\nÉl continuará la investigación.$"

Naranja_ValnTang_G09_M00_Text_086C0295::
# 303 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Brock!\nQue chico más tonto…\pA ver como le digo yo ahora a la prof. Ivy\nque vengo a recoger la {COLOR 0x0D}gsBall.\p{COLOR 0x04}Será mejor encontrarla cuanto antes.$"
