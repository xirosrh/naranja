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
	msgbox Naranja_IslaPinkan_G00_M30_Text_08166E65, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	closemessage
# 22 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	addobject LOCALID_ISLA_PINKAN_G00_M30_ITEM_BALL
# 23 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	addobject LOCALID_ISLA_PINKAN_G00_M30_LATIAS
# 24 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_LATIAS, Naranja_IslaPinkan_G00_M30_Movement_0814C5D3
# 25 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmovement LOCALID_NONE
# 26 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeobject LOCALID_ISLA_PINKAN_G00_M30_ITEM_BALL
# 27 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_LATIAS, Naranja_IslaPinkan_G00_M30_Movement_0814C5C2
# 28 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmovement LOCALID_NONE
# 29 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_08166E7E, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	closemessage
# 31 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 32 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 33 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 34 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setobjectxyperm LOCALID_ISLA_PINKAN_G00_M30_LATIAS, 0x1E, 0xA
# 35 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TROVITA_G00_M03_MAN_2
# 36 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 37 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_QUEST_STATE, 2
# 38 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_CAVE_SCENE_STATE, 2
# 39 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_MANDARIN_STORY_STATE, 1
# 40 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_MANDARIN_G00_M31_OLD_MAN_1
# 41 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_WINGULL
# 42 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_241
# 43 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_OLD_MAN_1
# 44 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLAS_G17_M00_WINGULL
# 45 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	releaseall
# 46 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B5300
	return


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_LASS_LocalId2::
# 50 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_PINKAN_046, Naranja_IslaPinkan_G00_M30_Text_081B8B40, Naranja_IslaPinkan_G00_M30_Text_081B8B93
# 51 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_081B8BDE, MSGBOX_AUTOCLOSE
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_TRACEY_LocalId1::
# 56 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_08170273, MSGBOX_NPC
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sign_3::
# 61 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_081702E7, MSGBOX_SIGN
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId13::
# 66 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_08170301, MSGBOX_SIGN
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_08152F2E::
# 71 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_08174945, MSGBOX_NPC
	end


Naranja_IslaPinkan_G00_M30_EventScript_Trigger_2::
# 76 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lockall
# 77 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_08194159, MSGBOX_DEFAULT
# 78 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	closemessage
# 79 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_MAGMA_MEMBER_M, Naranja_IslaPinkan_G00_M30_Movement_0815C9D3
# 80 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_ZIGZAGOON, Naranja_IslaPinkan_G00_M30_Movement_0815CA8A
# 81 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmovement LOCALID_NONE
# 82 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_PINKAN_G00_M30_MAGMA_MEMBER_M
# 83 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_PINKAN_G00_M30_NURSE
# 84 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setvar VAR_NARANJA_CRYSTAL_ONIX_CAVE_SCENE_STATE, 3
# 85 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	releaseall
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId18::
# 90 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 91 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 92 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId10::
# 97 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 0x16
# 98 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 99 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId11::
# 104 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 0x121
# 105 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 106 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId16::
# 111 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8000, 3
# 112 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 113 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	callstd 1
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4060::
# 118 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_1, 0
# 119 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 120 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4095
# 121 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 122 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lock
# 123 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 124 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4214, MSGBOX_YESNO
# 125 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 126 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4520
# 127 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4386, MSGBOX_NPC
# 128 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4095::
# 133 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B40B3, MSGBOX_NPC
# 134 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4520::
# 139 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_CaminoFrio_G00_M29_Movement_080008A0
# 140 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4437, MSGBOX_NPC
# 141 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_CAMERAMAN, Naranja_IslaPinkan_G00_M30_Movement_0845D6E1
# 142 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 143 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x10
# 144 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
# 145 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4544
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4544::
# 150 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_1, 1
# 151 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_Route111_G00_M26_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId14
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4550::
# 156 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 157 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_1, 0
# 158 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 159 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B456E
# 160 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 161 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4145, MSGBOX_NPC
# 162 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B456E::
# 167 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4319, MSGBOX_NPC
# 168 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId3::
# 173 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
# 174 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 175 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4060
# 176 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 177 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4BA2
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_CAMERAMAN_LocalId8::
# 182 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ROUTE111_G00_M26_DITTO_DOLL
# 183 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 184 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4550
# 185 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 186 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call Naranja_IslaPinkan_G00_M30_EventScript_Sub_08152F2E
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4BA2::
# 191 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_IslaPinkan_G00_M30_Movement_083E76C6
# 192 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4CD0, MSGBOX_NPC
# 193 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 194 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_NURSE, Naranja_IslaPinkan_G00_M30_Movement_086B5420
# 195 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4EDB, MSGBOX_NPC
# 196 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPinkan_G00_M30_Movement_084700A7
# 197 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x20
# 198 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_IslaPinkan_G00_M30_Movement_086B4F51
# 199 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_CAMERAMAN, Naranja_IslaPinkan_G00_M30_Movement_086B4F58
# 200 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086C0384, MSGBOX_NPC
# 201 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_NURSE, Naranja_IslaPinkan_G00_M30_Movement_086B541C
# 202 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x20
# 203 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_BEAUTY, Naranja_IslaPinkan_G00_M30_Movement_086B5400
# 204 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_CAMERAMAN, Naranja_IslaPinkan_G00_M30_Movement_086B5408
# 205 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x60
# 206 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 207 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B5410, MSGBOX_NPC
# 208 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 209 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_ISLA_PINKAN_G00_M30_BEAUTY
# 210 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeobject LOCALID_ISLA_PINKAN_G00_M30_DITTO_DOLL
# 211 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId5::
# 216 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lock
# 217 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B4FC0, MSGBOX_YESNO
# 218 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 219 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_CuevaKabuto_G24_M07_EventScript_Sub_086B38F4
# 220 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_BEAUTY
# 221 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FB0
# 222 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 223 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B5068, MSGBOX_YESNO
# 224 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 225 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FA2
# 226 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_ISLA_PINKAN_G00_M30_KECLEON_1, Naranja_IslaPinkan_G00_M30_Movement_0800A854
# 227 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B510E, MSGBOX_AUTOCLOSE
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FA2::
# 232 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B50C2, MSGBOX_AUTOCLOSE
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B4FB0::
# 237 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_086B502A, MSGBOX_AUTOCLOSE
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_JAMES_LocalId6::
# 242 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_HIDE_CUEVA_DE_CRISTAL_G24_M04_WINGULL
# 243 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 244 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto Naranja_CuevaDeCristal_G24_M04_EventScript_OBJECT_6_LocalId6
	return


Naranja_IslaPinkan_G00_M30_EventScript_Trigger_1::
# 248 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_ISLA_PINKAN_G00_M30_LATIAS
# 249 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_LATIAS_LocalId9
# 250 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B5300::
# 255 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setwildbattle SPECIES_RHYHORN, 0x14, 0
# 256 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special BattleSetup_StartLatiBattle
# 257 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 258 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x80
# 259 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 260 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	fadescreen 1
# 261 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x58
# 262 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	removeobject 7689
# 263 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 264 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	fadescreen 0
# 265 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_NURSE_LocalId7::
# 270 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	faceplayer
# 271 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	msgbox Naranja_IslaPinkan_G00_M30_Text_0816E35B, MSGBOX_AUTOCLOSE
# 272 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaPinkan_G00_M30_Movement_086B544D
# 273 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9280::
# 278 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ENCOUNTERED_PINKAN_POKE_DRINKER_AIPOM
# 279 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 280 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_POKE_DRINKER_EMPTY
# 281 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_MILK
# 282 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_WATER
# 283 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ENCOUNTERED_PINKAN_POKE_DRINKER_AIPOM
# 284 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 285 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x90
# 286 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 287 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitse
# 288 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	playmoncry SPECIES_AIPOM, 0
# 289 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 290 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x40
# 291 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 292 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setwildbattle SPECIES_AIPOM, 0x14, 0
# 293 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9300::
# 298 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ENCOUNTERED_PINKAN_POKE_DRINKER_SLAKOTH
# 299 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B920A
# 300 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_POKE_DRINKER_EMPTY
# 301 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_MILK
# 302 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_WATER
# 303 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_ENCOUNTERED_PINKAN_POKE_DRINKER_SLAKOTH
# 304 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 305 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x90
# 306 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 307 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitse
# 308 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	playmoncry SPECIES_SLAKOTH, 0
# 309 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 310 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x40
# 311 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 312 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setwildbattle SPECIES_SLAKOTH, 0x14, 0
# 313 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special BattleSetup_StartLatiBattle
	end


Naranja_IslaPinkan_G00_M30_EventScript_OBJ_EVENT_GFX_PICHU_DOLL_LocalId12::
# 318 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_MILK
# 319 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F10
# 320 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_POKE_DRINKER_EMPTY
# 321 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F73
# 322 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_POKE_DRINKERS_UNLOCKED
# 323 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMikan_G00_M20_EventScript_Sub_086B8F43
# 324 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_PINKAN_EVENT_COMPLETE_213F
# 325 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9300
# 326 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 327 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaPinkan_G00_M30_EventScript_Sub_086B9280
# 328 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	setflag FLAG_NARANJA_POKE_DRINKER_EMPTY
# 329 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_MILK
# 330 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	clearflag FLAG_NARANJA_POKE_DRINKER_FILLED_WITH_WATER
# 331 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B917F
# 332 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x90
# 333 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 334 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	nop
# 335 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	special RockSmashWildEncounter
# 336 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 337 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	goto_if EQUAL, Naranja_IslaMikan_G00_M20_EventScript_Sub_081B0F3A
# 338 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitstate
# 339 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	releaseall
# 340 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	message Naranja_IslaMikan_G00_M20_Text_086B91B6
# 341 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay 0x40
# 342 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	waitmessage
# 343 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	release
	end


# 347 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0800A854:
# 348 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 351 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0814C5C2:
# 352 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 353 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	acro_wheelie_hop_face_right
# 354 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 355 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
	step_end

# 358 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0814C5D3:
# 359 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 360 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	acro_wheelie_hop_face_left
# 362 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	acro_wheelie_hop_face_left
# 363 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 364 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
# 365 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_in_place_faster_up
	step_end

# 368 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0815C9D3:
# 369 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	lock_facing_direction
# 370 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_right
# 371 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	unlock_facing_direction
	step_end

# 374 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0815CA8A:
# 375 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	emote_exclamation_mark
# 376 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	jump_2_right
# 377 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_left
	step_end

# 380 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_083E76C6:
# 381 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 382 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_down
	step_end

# 385 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_0845D6E1:
# 386 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 387 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 390 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_084700A7:
# 391 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_down
# 392 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 395 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B4F51:
# 396 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_left
# 397 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 398 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 399 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 400 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 401 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_right
	step_end

# 404 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B4F58:
# 405 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 406 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 407 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_right
# 408 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
	step_end

# 411 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B5400:
# 412 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_right
# 413 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	delay_16
# 414 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 415 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_invisible
# 416 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 417 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 418 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
	step_end

# 421 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B5408:
# 422 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 423 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 424 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 425 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_invisible
# 426 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
# 427 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
	step_end

# 430 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B541C:
# 431 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	emote_exclamation_mark
# 432 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_right
# 433 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_left
	step_end

# 436 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B5420:
# 437 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_invisible
# 438 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 439 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 440 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
# 441 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	set_visible
# 442 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_down
	step_end

# 445 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
Naranja_IslaPinkan_G00_M30_Movement_086B544D:
# 446 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	face_up
# 447 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	walk_slow_up
	step_end

Naranja_IslaPinkan_G00_M30_Text_08166E65::
# 450 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Qué es eso rosa?$"

Naranja_IslaPinkan_G00_M30_Text_08166E7E::
# 454 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "...es un rhyhorn\p¡Y parece furioso!$"

Naranja_IslaPinkan_G00_M30_Text_0816E35B::
# 458 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Esta gente no sabe lo que hace...\n…pero ya que estamos…\p¿Le echamos una ojeada a la cueva?\pTe llamarán la atención todos los\nfósiles que puedes encontrar ahì dentro.$"

Naranja_IslaPinkan_G00_M30_Text_08170273::
# 462 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Exploring a cave isn’t like walking\non a road.\pYou never know when wild POKéMON will\nappear. It’s full of suspense.$"

Naranja_IslaPinkan_G00_M30_Text_081702E7::
# 466 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Reserva POKéMON {COLOR 0x02}PINKAN$"

Naranja_IslaPinkan_G00_M30_Text_08170301::
# 470 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Isla KABUTO:\nProhibido arrancar fósiles.$"

Naranja_IslaPinkan_G00_M30_Text_08174945::
# 474 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Jeje…\pEl reportaje está saliendo \na pedir de boca.\p¡Prepárate!\pEn unos momentos lo retomaremos\ncon un reportaje del fosil.$"

Naranja_IslaPinkan_G00_M30_Text_08194159::
# 478 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡Eh!  \nViene hacia aquì.\p¡Escóndete! \n¡Rápido!$"

Naranja_IslaPinkan_G00_M30_Text_081B8B40::
# 482 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Con los pokemon…\pno soy demasiado bueno.\p¡Pero en una excavación\nte machaco! jaja…$"

Naranja_IslaPinkan_G00_M30_Text_081B8B93::
# 486 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Estaba claro desde el principio\npero eso no le quitó emoción.\p¡¿Verdad?!$"

Naranja_IslaPinkan_G00_M30_Text_081B8BDE::
# 490 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Puedo estar horas y horas ayudando a mis\nPOKéMON a excavar sin aburrirme.$"

Naranja_IslaPinkan_G00_M30_Text_086B40B3::
# 494 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Ves que estamos ocupados?\pHemos tenido un problema técnico,\ny mientras no pueda hacer MI reportaje\lno habrá tiempo para batallitas.\p¿Te enteras?$"

Naranja_IslaPinkan_G00_M30_Text_086B4145::
# 498 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Hablaste con la corresponsal?\pA veces cari parece un poco borde,\npero merece la pena…\pEs que nuestra cámara ha quedado\nsin energía y necesitamos un \lgenerador para hacer el reportaje\lsobre esta isla fósil.$"

Naranja_IslaPinkan_G00_M30_Text_086B4214::
# 502 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¿Que pasa aho…    \n¡Tienes un generador!\pSiendo una gran y famosa persona\nen el fascinante mundo\ldel entrenamiento pokemon sabía \lque lo conseguirías…\pehh…\p{COLOR 0x04}{PLAYER}, \nme llamo {PLAYER}.\p{COLOR 0x01}¡ Sabía que ibas a conseguir \nel generador {PLAYER} !\p{COLOR 0x04}Yaa…\p{COLOR 0x01}Ahora…\p¿Nos lo dejas?$"

Naranja_IslaPinkan_G00_M30_Text_086B4319::
# 506 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Vaya… necesitamos un generador como\nel que llevas para cargar el equipo.\pPor favor déjaselo a la reportera.$"

Naranja_IslaPinkan_G00_M30_Text_086B4386::
# 510 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "(mordiendose la lengua):\n{COLOR 0x0B}(grrr) (…)(grrr)\l{COLOR 0x04}¿Como dices?\p{COLOR 0x01}Decía que los entrenadores pokemon\ndeben ser solidarios.\p(Guiñando un ojo)\nY tu eres de los mejores que conozco.$"

Naranja_IslaPinkan_G00_M30_Text_086B4437::
# 514 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Le diste el generador.\p¡Cámara! ¡Coloca esto!\pPreparados para entrar.$"

Naranja_IslaPinkan_G00_M30_Text_086B4CD0::
# 518 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡Y seguimos!\pEn vuestras casas os preguntareis\nqué hacemos en esta isla.\pVereis…\p…aquí…\p¡Se acaba de hacer uno de los mayores\ndescubrimientos de la humanidad!\pLa piedra que tengo detrás mía es en\nrealidad lo que queda de un pokemon\lque se movía por el mar hace eones.\pEs el fosil pokemon descubierto más\nantiguo, más incluso que los que se \ldescubrieron cerca de Ciudad Plateada\ly hoy se conservan en su museo.\pBla, bla, bla…\pAhora estamos esperando aparezca\nla directora de esta expedición.$"

Naranja_IslaPinkan_G00_M30_Text_086B4EDB::
# 522 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "\pY ahora hablaremos con ella…\p…\p…si nuestro ambicioso chupacámara\nnos lo permite.\p{COLOR 0x04}¿Ehh?\pAh… yo…\pYa voy simpática…$"

Naranja_IslaPinkan_G00_M30_Text_086B4FC0::
# 526 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡Que extraña roca!\pPor este lado no se puede ver\nclaramente lo que es.\p¿Quieres moverla para verla mejor?$"

Naranja_IslaPinkan_G00_M30_Text_086B502A::
# 530 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "¡¡ Ni se te ocurra tocar el fosil\nmientras esté yo delante !!$"

Naranja_IslaPinkan_G00_M30_Text_086B5068::
# 534 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "De frente también parece\nuna roca bastante extraña.\p¿Quieres dejarla como la encontraste?$"

Naranja_IslaPinkan_G00_M30_Text_086B50C2::
# 538 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Mejor moverlo lo mìnimo posible.\pEs muy antiguo y no aguantará\nmucha traca.$"

Naranja_IslaPinkan_G00_M30_Text_086B510E::
# 542 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Mejor no dejar huellas…$"

Naranja_IslaPinkan_G00_M30_Text_086B5410::
# 546 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "d.Joy: Ehh…$"

Naranja_IslaPinkan_G00_M30_Text_086C0384::
# 550 "data/maps/Naranja_IslaPinkan_G00_M30/scripts.pory"
	.string "Texto no recuperable del ROM original.$"
