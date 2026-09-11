Naranja_IslaPinkan_G00_M30_MapScripts::
	.byte 0


Naranja_IslaPinkan_G00_M30_EventScript_Sign_13::
# 8 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	gotonative 0x81C0988B
	return


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_LATIAS_LocalId9::
# 12 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lockall
# 13 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setobjectxyperm LOCALID_ISLA_PINKAN_G00_M30_LATIAS, 0xE, 0x15
# 14 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setobjectmovementtype 2057, 0xA
# 15 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_0x8004, 1
# 16 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4
	return


Naranja_IslaPinkan_G00_M30_EventScript_Sub_0814C4F4::
# 20 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_08166E65
# 21 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	closemessage
# 23 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	addobject LOCALID_ISLA_PINKAN_G00_M30_ITEM_BALL
# 24 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	addobject LOCALID_ISLA_PINKAN_G00_M30_LATIAS
# 25 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_LATIAS, Naranja_IslaPinkan_G00_M30_Movement_0814C5D3
# 26 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmovement LOCALID_NONE
# 27 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeobject LOCALID_ISLA_PINKAN_G00_M30_ITEM_BALL
# 28 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_LATIAS, Naranja_IslaPinkan_G00_M30_Movement_0814C5C2
# 29 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_08166E7E
# 31 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	closemessage
# 33 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 34 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 35 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 36 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setobjectxyperm LOCALID_ISLA_PINKAN_G00_M30_LATIAS, 0x1E, 0xA
# 37 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TROVITA_G00_M03_MAN_2
# 38 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 39 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_STORY_STATE, 2
# 40 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 2
# 41 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_MANDARIN_STORY_STATE, 1
# 42 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G00_M31_OLD_MAN_1
# 43 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_WINGULL
# 44 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_241
# 45 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 46 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 47 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	releaseall
# 48 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B5300
	return


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_LASS_LocalId2::
# 52 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_PINKAN_046, LOCALID_NONE, Naranja_IslaPinkan_G00_M30_Text_081B8B40, Naranja_IslaPinkan_G00_M30_Text_081B8B93
# 53 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_081B8BDE
# 54 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 6
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_WALLY_LocalId1::
# 59 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_08170273
# 60 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sign_3::
# 65 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_081702E7
# 66 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 3
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId13::
# 71 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_08170301
# 72 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 3
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_08152F2E::
# 77 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_08174945
# 78 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
	end


Naranja_IslaPinkan_G00_M30_EventScript_Trigger_2::
# 83 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lockall
# 84 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_08194159
# 85 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 4
# 86 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	closemessage
# 87 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_MAGMA_MEMBER_M, Naranja_IslaPinkan_G00_M30_Movement_0815C9D3
# 88 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_ZIGZAGOON, Naranja_IslaPinkan_G00_M30_Movement_0815CA8A
# 89 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmovement LOCALID_NONE
# 90 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_PINKAN_G00_M30_MAGMA_MEMBER_M
# 91 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_PINKAN_G00_M30_NURSE
# 92 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_CUEVA_DE_CRISTAL_STORY_STATE, 3
# 93 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	releaseall
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId18::
# 98 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 99 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 100 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId10::
# 105 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 0x16
# 106 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 107 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId11::
# 112 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 0x121
# 113 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 114 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId16::
# 119 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 120 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 121 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4060::
# 126 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkitem ITEM_ROOM_1_KEY, 0
# 127 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 128 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4095
# 129 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 130 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lock
# 131 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 132 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4214
# 133 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 5
# 134 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 135 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4520
# 136 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4386
# 137 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 138 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4095::
# 143 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B40B3
# 144 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 145 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4520::
# 150 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 151 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4437
# 152 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 153 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_CAMERAMAN, Naranja_IslaPinkan_G00_M30_Movement_0845D6E1
# 154 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 155 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x10
# 156 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
# 157 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4544
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4544::
# 162 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeitem ITEM_ROOM_1_KEY, 1
# 163 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId14
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4550::
# 168 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 169 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkitem ITEM_ROOM_1_KEY, 0
# 170 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 171 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B456E
# 172 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 173 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4145
# 174 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 175 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B456E::
# 180 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4319
# 181 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 182 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId3::
# 187 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
# 188 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 189 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4060
# 190 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 191 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4BA2
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId8::
# 196 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
# 197 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 198 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4550
# 199 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 200 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_IslaPinkan_G00_M30_EventScript_Sub_08152F2E
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4BA2::
# 205 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_IslaPinkan_G00_M30_Movement_083E76C6
# 206 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4CD0
# 207 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 208 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 209 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_NURSE, Naranja_IslaPinkan_G00_M30_Movement_086B5420
# 210 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4EDB
# 211 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 212 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPinkan_G00_M30_Movement_084700A7
# 213 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x20
# 214 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_IslaPinkan_G00_M30_Movement_086B4F51
# 215 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_CAMERAMAN, Naranja_IslaPinkan_G00_M30_Movement_086B4F58
# 216 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086C0384
# 217 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 218 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_NURSE, Naranja_IslaPinkan_G00_M30_Movement_086B541C
# 219 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x20
# 220 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_IslaPinkan_G00_M30_Movement_086B5400
# 221 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_CAMERAMAN, Naranja_IslaPinkan_G00_M30_Movement_086B5408
# 222 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x60
# 223 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 224 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B5410
# 225 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 2
# 226 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 227 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLA_PINKAN_G00_M30_BEAUTY
# 228 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeobject LOCALID_ISLA_PINKAN_G00_M30_DITTO_DOLL
# 229 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId5::
# 234 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lock
# 235 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B4FC0
# 236 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 5
# 237 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 238 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_CuevaKabuto_G24_M07_EventScript_Sub_086B38F4
# 239 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_BEAUTY
# 240 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FB0
# 241 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 242 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B5068
# 243 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 5
# 244 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 245 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FA2
# 246 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_KECLEON_1, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 247 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B510E
# 248 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 6
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FA2::
# 253 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B50C2
# 254 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 6
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FB0::
# 259 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_086B502A
# 260 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 6
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_MAGMA_MEMBER_M_LocalId6::
# 265 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_WINGULL
# 266 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 267 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto Naranja_CuevaDeCristal_G24_M04_EventScript_OBJECT_6_LocalId6
	return


Naranja_IslaPinkan_G00_M30_EventScript_Trigger_1::
# 271 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 272 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_LATIAS_LocalId9
# 273 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B5300::
# 278 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setwildbattle SPECIES_RHYHORN, 0x14, 0
# 279 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special BattleSetup_StartLatiBattle
# 280 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 281 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x80
# 282 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 283 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	fadescreen 1
# 284 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x58
# 285 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeobject 7689
# 286 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 287 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	fadescreen 0
# 288 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_NURSE_LocalId7::
# 293 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 294 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	loadword 0, Naranja_IslaPinkan_G00_M30_Text_0816E35B
# 295 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 6
# 296 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPinkan_G00_M30_Movement_086B544D
# 297 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9280::
# 302 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_PINKAN_EVENT_COMPLETE_2136
# 303 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 304 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 305 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 306 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 307 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ISLA_PINKAN_EVENT_COMPLETE_2136
# 308 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 309 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x90
# 310 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 311 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitse
# 312 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	playmoncry SPECIES_AIPOM, 0
# 313 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 314 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x40
# 315 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 316 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setwildbattle SPECIES_AIPOM, 0x14, 0
# 317 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9300::
# 322 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_PINKAN_EVENT_COMPLETE_2138
# 323 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 324 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 325 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 326 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 327 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ISLA_PINKAN_EVENT_COMPLETE_2138
# 328 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 329 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x90
# 330 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 331 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitse
# 332 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	playmoncry SPECIES_SLAKOTH, 0
# 333 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 334 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x40
# 335 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 336 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setwildbattle SPECIES_SLAKOTH, 0x14, 0
# 337 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_PICHU_DOLL_LocalId12::
# 342 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 343 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F10
# 344 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 345 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73
# 346 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2142
# 347 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43
# 348 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_PINKAN_EVENT_COMPLETE_213F
# 349 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9300
# 350 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 351 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9280
# 352 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 353 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2133
# 354 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2134
# 355 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 356 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x90
# 357 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 358 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 359 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special RockSmashWildEncounter
# 360 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 361 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A
# 362 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitstate
# 363 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	releaseall
# 364 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 365 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x40
# 366 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 367 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


# 371 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0800A854:
# 372 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 375 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0814C5C2:
# 376 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 377 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	acro_wheelie_hop_face_right
# 378 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
	step_end

# 382 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0814C5D3:
# 383 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 384 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 385 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	acro_wheelie_hop_face_left
# 386 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	acro_wheelie_hop_face_left
# 387 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 388 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 389 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
	step_end

# 392 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0815C9D3:
# 393 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lock_facing_direction
# 394 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_right
# 395 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	unlock_facing_direction
	step_end

# 398 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0815CA8A:
# 399 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	emote_exclamation_mark
# 400 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	jump_2_right
# 401 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_left
	step_end

# 404 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_083E76C6:
# 405 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 406 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_down
	step_end

# 409 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0845D6E1:
# 410 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 411 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 414 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_084700A7:
# 415 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_down
# 416 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 419 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B4F51:
# 420 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_left
# 421 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 422 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 423 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 424 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 425 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_right
	step_end

# 428 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B4F58:
# 429 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 430 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 431 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_right
# 432 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 435 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B5400:
# 436 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_right
# 437 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 438 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 439 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_invisible
# 440 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 441 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 442 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
	step_end

# 445 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B5408:
# 446 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 447 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 448 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 449 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_invisible
# 450 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 451 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
	step_end

# 454 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B541C:
# 455 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	emote_exclamation_mark
# 456 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_right
# 457 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_left
	step_end

# 460 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B5420:
# 461 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_invisible
# 462 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 463 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 464 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 465 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_visible
# 466 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
	step_end

# 469 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B544D:
# 470 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
# 471 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
	step_end

Naranja_IslaPinkan_G00_M30_Text_08166E65::
# 474 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Qué es eso rosa?$"

Naranja_IslaPinkan_G00_M30_Text_08166E7E::
# 478 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "...es un rhyhorn\p¡Y parece furioso!$"

Naranja_IslaPinkan_G00_M30_Text_0816E35B::
# 482 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Esta gente no sabe lo que hace...\n…pero ya que estamos…\p¿Le echamos una ojeada a la cueva?\pTe llamarán la atención todos los\nfósiles que puedes encontrar ahì dentro.$"

Naranja_IslaPinkan_G00_M30_Text_08170273::
# 486 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Exploring a cave isn’t like walking\non a road.\pYou never know when wild POKéMON will\nappear. It’s full of suspense.$"

Naranja_IslaPinkan_G00_M30_Text_081702E7::
# 490 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Reserva POKéMON {COLOR 0x02}PINKAN$"

Naranja_IslaPinkan_G00_M30_Text_08170301::
# 494 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Isla KABUTO:\nProhibido arrancar fósiles.$"

Naranja_IslaPinkan_G00_M30_Text_08174945::
# 498 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Jeje…\pEl reportaje está saliendo \na pedir de boca.\p¡Prepárate!\pEn unos momentos lo retomaremos\ncon un reportaje del fosil.$"

Naranja_IslaPinkan_G00_M30_Text_08194159::
# 502 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡Eh!  \nViene hacia aquì.\p¡Escóndete! \n¡Rápido!$"

Naranja_IslaPinkan_G00_M30_Text_081B8B40::
# 506 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Con los pokemon…\pno soy demasiado bueno.\p¡Pero en una excavación\nte machaco! jaja…$"

Naranja_IslaPinkan_G00_M30_Text_081B8B93::
# 510 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Estaba claro desde el principio\npero eso no le quitó emoción.\p¡¿Verdad?!$"

Naranja_IslaPinkan_G00_M30_Text_081B8BDE::
# 514 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Puedo estar horas y horas ayudando a mis\nPOKéMON a excavar sin aburrirme.$"

Naranja_IslaPinkan_G00_M30_Text_086B40B3::
# 518 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Ves que estamos ocupados?\pHemos tenido un problema técnico,\ny mientras no pueda hacer MI reportaje\lno habrá tiempo para batallitas.\p¿Te enteras?$"

Naranja_IslaPinkan_G00_M30_Text_086B4145::
# 522 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Hablaste con la corresponsal?\pA veces cari parece un poco borde,\npero merece la pena…\pEs que nuestra cámara ha quedado\nsin energía y necesitamos un \lgenerador para hacer el reportaje\lsobre esta isla fósil.$"

Naranja_IslaPinkan_G00_M30_Text_086B4214::
# 526 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Que pasa aho…    \n¡Tienes un generador!\pSiendo una gran y famosa persona\nen el fascinante mundo\ldel entrenamiento pokemon sabía \lque lo conseguirías…\pehh…\p{COLOR 0x04}{PLAYER}, \nme llamo {PLAYER}.\p{COLOR 0x01}¡ Sabía que ibas a conseguir \nel generador {PLAYER} !\p{COLOR 0x04}Yaa…\p{COLOR 0x01}Ahora…\p¿Nos lo dejas?$"

Naranja_IslaPinkan_G00_M30_Text_086B4319::
# 530 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Vaya… necesitamos un generador como\nel que llevas para cargar el equipo.\pPor favor déjaselo a la reportera.$"

Naranja_IslaPinkan_G00_M30_Text_086B4386::
# 534 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "(mordiendose la lengua):\n{COLOR 0x0B}(grrr) (…)(grrr)\l{COLOR 0x04}¿Como dices?\p{COLOR 0x01}Decía que los entrenadores pokemon\ndeben ser solidarios.\p(Guiñando un ojo)\nY tu eres de los mejores que conozco.$"

Naranja_IslaPinkan_G00_M30_Text_086B4437::
# 538 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Le diste el generador.\p¡Cámara! ¡Coloca esto!\pPreparados para entrar.$"

Naranja_IslaPinkan_G00_M30_Text_086B4CD0::
# 542 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡Y seguimos!\pEn vuestras casas os preguntareis\nqué hacemos en esta isla.\pVereis…\p…aquí…\p¡Se acaba de hacer uno de los mayores\ndescubrimientos de la humanidad!\pLa piedra que tengo detrás mía es en\nrealidad lo que queda de un pokemon\lque se movía por el mar hace eones.\pEs el fosil pokemon descubierto más\nantiguo, más incluso que los que se \ldescubrieron cerca de Ciudad Plateada\ly hoy se conservan en su museo.\pBla, bla, bla…\pAhora estamos esperando aparezca\nla directora de esta expedición.$"

Naranja_IslaPinkan_G00_M30_Text_086B4EDB::
# 546 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "\pY ahora hablaremos con ella…\p…\p…si nuestro ambicioso chupacámara\nnos lo permite.\p{COLOR 0x04}¿Ehh?\pAh… yo…\pYa voy simpática…$"

Naranja_IslaPinkan_G00_M30_Text_086B4FC0::
# 550 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡Que extraña roca!\pPor este lado no se puede ver\nclaramente lo que es.\p¿Quieres moverla para verla mejor?$"

Naranja_IslaPinkan_G00_M30_Text_086B502A::
# 554 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡¡ Ni se te ocurra tocar el fosil\nmientras esté yo delante !!$"

Naranja_IslaPinkan_G00_M30_Text_086B5068::
# 558 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "De frente también parece\nuna roca bastante extraña.\p¿Quieres dejarla como la encontraste?$"

Naranja_IslaPinkan_G00_M30_Text_086B50C2::
# 562 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Mejor moverlo lo mìnimo posible.\pEs muy antiguo y no aguantará\nmucha traca.$"

Naranja_IslaPinkan_G00_M30_Text_086B510E::
# 566 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Mejor no dejar huellas…$"

Naranja_IslaPinkan_G00_M30_Text_086B5410::
# 570 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "d.Joy: Ehh…$"

Naranja_IslaPinkan_G00_M30_Text_086C0384::
# 574 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Texto no recuperable del ROM original.$"
