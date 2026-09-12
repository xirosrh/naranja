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
	msgbox Naranja_ValnTang_G09_M00_Text_0817C14B, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086B4970, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	closemessage
# 21 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x114
# 22 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 23 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	callstd 0
# 24 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_0094
# 25 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_ISLA_MURCOTT_G00_M01_VARS
# 26 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_08155388::
# 31 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 32 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 33 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_0817C472, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_0815539C::
# 39 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 40 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 41 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_0817C3F7, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_081553B0::
# 47 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 48 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 49 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_0817C2F2, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	closemessage
# 51 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 52 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 53 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_081553CF::
# 58 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 59 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 60 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_0817C360, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	releaseall
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_081553EC::
# 66 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_0817C764, MSGBOX_NPC
	end


Naranja_ValnTang_G09_M00_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId4::
# 71 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_0817C53D, MSGBOX_NPC
	end


Naranja_ValnTang_G09_M00_EventScript_Trigger_1::
# 76 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 77 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_086B31B5
# 78 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ValnTang_G09_M00_Movement_086B31C2
# 79 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086B321B, MSGBOX_AUTOCLOSE
# 80 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_MAN_7, Naranja_ValnTang_G09_M00_Movement_086B31C4
# 81 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x90
# 82 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086B3254, MSGBOX_DEFAULT
# 83 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HIPSTER, Naranja_ValnTang_G09_M00_Movement_086B31D4
# 84 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_BARD, Naranja_ValnTang_G09_M00_Movement_086B31D8
# 85 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_ValnTang_G09_M00_Movement_086B31DF
# 86 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x90
# 87 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_MAN_7, Naranja_ValnTang_G09_M00_Movement_086B31E4
# 88 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xFF
# 89 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xFF
# 90 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xC0
# 91 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086B329E, MSGBOX_SIGN
# 92 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_HEX_MANIAC, Naranja_ValnTang_G09_M00_Movement_086B3204
# 93 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x90
# 94 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086B32E1, MSGBOX_DEFAULT
# 95 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	applymovement LOCALID_VALN_TANG_G09_M00_MAN_7, Naranja_ValnTang_G09_M00_Movement_086B3210
# 96 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0xFF
# 97 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay 0x40
# 98 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086C0295, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto Naranja_ValnTang_G09_M00_EventScript_Sub_086B3531
	return


Naranja_ValnTang_G09_M00_EventScript_Sub_086B31B5::
# 103 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	release
	end


Naranja_ValnTang_G09_M00_EventScript_Sub_086B3531::
# 108 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200F
# 109 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_200D
# 110 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G09_M00_HEX_MANIAC
# 111 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER
# 112 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_VALN_TANG_G09_M01_TRADER
# 113 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_MANDARIN_G21_M00_LITTLE_GIRL_1
# 114 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G00_M29_NURSE
# 115 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 116 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 117 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G00_M31_LITTLE_GIRL_1
# 118 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARINA_G00_M14_LITTLE_GIRL_1
# 119 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	clearflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_010A
# 120 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	release
	end


Naranja_ValnTang_G09_M00_EventScript_OBJ_EVENT_GFX_BARD_LocalId2::
# 125 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	faceplayer
# 126 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_HIDE_VALN_TANG_G07_M02_TRADER_2
# 127 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_ValnTang_G09_M00_EventScript_Sub_081553EC
# 128 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 129 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	goto_if EQUAL, Naranja_ValnTang_G09_M00_EventScript_Sub_081553EC
# 130 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	setflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 131 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	nop
# 132 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	msgbox Naranja_ValnTang_G09_M00_Text_086B36B1, MSGBOX_NPC
	end


# 136 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31C2:
# 137 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
	step_end

# 140 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31C4:
# 141 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 142 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 143 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 144 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 145 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 146 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 147 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 148 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 149 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_left
# 150 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 151 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_right
# 152 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 153 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_up
# 154 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 155 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_down
	step_end

# 158 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31D4:
# 159 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_exclamation_mark
# 160 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 161 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
	step_end

# 164 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31D8:
# 165 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 167 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 168 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 169 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 170 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_up
	step_end

# 173 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31DF:
# 174 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_exclamation_mark
# 175 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_left
	step_end

# 178 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B31E4:
# 179 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 180 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 181 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 182 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 183 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 184 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 185 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_up
# 186 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 187 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_down
# 188 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 189 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 190 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 191 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 192 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 193 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 194 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 195 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 196 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 197 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 198 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 199 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 200 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	delay_16
# 201 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 202 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 203 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 204 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 205 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 206 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 207 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 208 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	emote_heart
# 209 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	face_down
	step_end

# 212 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B3204:
# 213 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_right
# 214 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 215 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 216 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 217 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 218 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 219 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 220 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 221 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 222 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 223 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	set_invisible
	step_end

# 226 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
Naranja_ValnTang_G09_M00_Movement_086B3210:
# 227 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 228 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 229 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_left
# 230 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 231 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 232 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 233 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	walk_slow_up
# 234 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	set_invisible
	step_end

Naranja_ValnTang_G09_M00_Text_0817C14B::
# 237 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x09}Ivy: Vaya aventura estùpida…\pTenía que haber tenido cuidado de no\nacercarme a un Vileplume que estuviese\lmarcando su territorio con esporas.\p¡Vaya susto!$"

Naranja_ValnTang_G09_M00_Text_0817C2F2::
# 241 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x09}¿Viste los extraños colores \nde los pokemon de las islas?\pSe debe al diferente clima,\nesto los hace ùnicos$"

Naranja_ValnTang_G09_M00_Text_0817C360::
# 245 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "DOCK: Shipbuilding is an art.\pA lot of things can’t be figured out\njust by calculating.\pI really could use advice from a veteran\nwho knows the seas...$"

Naranja_ValnTang_G09_M00_Text_0817C3F7::
# 249 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "DOCK: Hi! MR. BRINEY’s joined us to\nlend us his help.\pThanks to the veteran sailor, the\nferry is steadily coming together.$"

Naranja_ValnTang_G09_M00_Text_0817C472::
# 253 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "DOCK: The ferry is finally ready!\pThe new S.S. TIDAL is truly a marvel\nof technology!\pBut, I get the feeling that we can\nmake something even better.\pYou know, there’s never an end to\ntechnology’s march.$"

Naranja_ValnTang_G09_M00_Text_0817C53D::
# 257 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "MR. BRINEY: Ah, {PLAYER}{KUN}!\nIt’s been too long!\pAye, since I met you, this old seadog’s\nbeen feeling frisky!\pSo I’ve decided to help DOCK make a\nferry.\pAye, after all, a ferry would be able\nto carry a lot of people.\pBut, you know, that DOCK is really\nsomething special.\pWith his knack for technology and\nmy experience, I’m sure that we can\lbuild one great ship, aye!$"

Naranja_ValnTang_G09_M00_Text_0817C764::
# 261 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "Me dedico a estudiar las aguas\ny sus pokémon…\p…y me encanta !$"

Naranja_ValnTang_G09_M00_Text_086B321B::
# 265 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Guau!  \n¡¡ El laboratorio de la profesora Ivy !!$"

Naranja_ValnTang_G09_M00_Text_086B3254::
# 269 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "Aquí debe estar el laboratorio de la\nprof. Ivy\p¡¡Cuántas chicas bonitas!!$"

Naranja_ValnTang_G09_M00_Text_086B329E::
# 273 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "Hola preciosa.\p{COLOR 0x0A}Ivy: Yo…Ehh…\n…creo que tenía que ir…\lal jardín.$"

Naranja_ValnTang_G09_M00_Text_086B32E1::
# 277 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "¡No te dejaré sola!!\n¡Espera!$"

Naranja_ValnTang_G09_M00_Text_086B36B1::
# 281 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "¡Guau!\nSalvaste a la profesora de una parálisis\p¿Así que piensas viajar\npor las {COLOR 0x0E}Islas Naranjas {COLOR 0x01}?\p¿Y como piensas moverte entre\nlas distintas islas?\p{COLOR 0x04}{PLAYER}: Ehh…\n…no lo había pensado\p{COLOR 0x01}En el centro de recuperación pokemon\nbuscaban un dueño para\lun lapras curado.\pHas demostrado lo que vales.\nVe allí de mi parte y así te ayudara\la desplazarte por el archipiélago.$"

Naranja_ValnTang_G09_M00_Text_086B4970::
# 285 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x04}¡Pero la culpa la tuvo Brock!\n¡Usted no hizo nada!\p{COLOR 0x09}Jaja, menos mal\nque avisaste a Joy, {PLAYER}.\p{COLOR 0x04}Verás venimos por un recado de OAK.\p{COLOR 0x09}¿La こgsBallこ?\n{COLOR 0x04}Así es.\l{COLOR 0x09}La hemos estado investigando…\lpero no podemos ni abrirla.\lTe la daré para que se la lleves a OAK,\lnuestra especialidad son los pokemon,\lsu alimentación, vida, cría…\lOAK seguro que tendrá maquinaria\lmas sofisticada para abrirla…\p…y yo tengo mucho trabajo que hacer\ntodavía.\p¡Llévasela!\nÉl continuará la investigación.$"

Naranja_ValnTang_G09_M00_Text_086C0295::
# 289 "data/maps/Naranja_ValnTang_G09_M00/scripts.pory"
	.string "{COLOR 0x04}{PLAYER}: ¡Brock!\nQue chico más tonto…\pA ver como le digo yo ahora a la prof. Ivy\nque vengo a recoger la {COLOR 0x0D}gsBall.\p{COLOR 0x04}Será mejor encontrarla cuanto antes.$"
