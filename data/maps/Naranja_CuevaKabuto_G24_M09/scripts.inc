Naranja_CuevaKabuto_G24_M09_MapScripts::
	.byte 0


Naranja_CuevaKabuto_G24_M09_EventScript_Sub_081B17BA::
# 8 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setorcopyvar VAR_0x8000, 0x11E
# 9 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 10 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 1
	end


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 15 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 16 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 17 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 1
	end


Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_1::
# 22 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	checkflag FLAG_NARANJA_DEFEATED_CUEVA_KABUTO_MAWILE
# 23 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	goto_if LESS_THAN, Naranja_CuevaKabuto_G24_M09_EventScript_Sub_086B513B
# 24 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	release
	end


Naranja_CuevaKabuto_G24_M09_EventScript_Sub_086B513B::
# 29 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock
# 30 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitse
# 31 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playmoncry SPECIES_MAWILE, 0x2800
# 32 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitse
# 33 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 34 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitse
# 35 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playmoncry SPECIES_MAWILE, 0x528
# 36 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 37 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitse
# 38 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playmoncry SPECIES_MAWILE, 0x2A28
# 39 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 40 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 41 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	goto_if EQUAL, Naranja_CuevaKabuto_G24_M09_EventScript_Sub_086B5170
# 42 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 43 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B51BC
# 44 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x10
# 45 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 46 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M09_Text_086B5C30, MSGBOX_AUTOCLOSE
	end


Naranja_CuevaKabuto_G24_M09_EventScript_Sub_086B5170::
# 51 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 52 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 53 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 54 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 55 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_08009606
# 56 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 57 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M09_Text_086B5C8A, MSGBOX_AUTOCLOSE
# 58 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x20
# 59 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setwildbattle SPECIES_MAWILE, 0x14, 0
# 60 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	special BattleSetup_StartLatiBattle
# 61 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x80
# 62 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setflag FLAG_NARANJA_DEFEATED_CUEVA_KABUTO_MAWILE
# 63 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
	end


Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_4::
# 68 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock
# 69 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	checkflag FLAG_HIDE_CUEVA_KABUTO_G24_M07_KECLEON_1
# 70 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 71 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 72 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	call_if LESS_THAN, Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_2
# 73 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 74 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B854F
# 75 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x20
# 76 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M09_Text_086B8420, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 78 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 1
# 79 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B8530
# 80 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x50
# 81 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 0
# 82 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	animateflash 2
# 83 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M09_Text_086B8580, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 85 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 86 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B8551
# 87 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B855B
# 88 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_F, Naranja_CuevaKabuto_G24_M09_Movement_086B855A
# 89 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_M, Naranja_CuevaKabuto_G24_M09_Movement_086B8559
# 90 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x40
# 91 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B8642
# 92 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 93 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B8560
# 94 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_M, Naranja_CuevaKabuto_G24_M09_Movement_086B8563
# 95 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 96 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B8697
# 97 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 98 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_F, Naranja_CuevaKabuto_G24_M09_Movement_086B8570
# 99 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B8573
# 100 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 101 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M09_Text_086B86F9, MSGBOX_DEFAULT
# 102 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 103 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_CAMERAMAN, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 104 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 105 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 106 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_F, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 107 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_M, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 108 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M09_Text_086B876E, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 110 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 1
# 111 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B8540
# 112 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 113 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 0
# 114 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	release
	end


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId5::
# 119 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x2F2F
# 120 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x5555
# 121 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x2F2F
# 122 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x2E2F
# 123 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	gettime
	return


Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_2::
# 128 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B87AD
# 129 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B87C4
# 130 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 131 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 132 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	release
	end


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId4::
# 137 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B88ED
# 138 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_CAMERAMAN, Naranja_CuevaKabuto_G24_M09_Movement_086B88ED
# 139 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	goto Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId2
	return


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId1::
# 143 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	msgbox Naranja_CuevaKabuto_G24_M07_Text_086B8B67, MSGBOX_YESNO
# 144 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 145 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M07_EventScript_Sub_086B38F4
# 146 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 147 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitse
# 148 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playmoncry SPECIES_KIRLIA, 0
# 149 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x20
# 150 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B8BB7
# 151 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 152 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	goto Naranja_CuevaKabuto_G24_M09_EventScript_Sub_081B17BA
	return


# 155 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_08009606:
# 156 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	emote_exclamation_mark
	step_end

# 159 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B51BC:
# 160 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	emote_exclamation_mark
# 161 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	jump_in_place_left
# 162 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_right
	step_end

# 165 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8530:
# 166 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 167 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 168 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 169 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 170 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 171 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	set_invisible
# 172 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 173 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 174 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 175 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 176 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 177 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_down
# 178 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_down
# 179 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_up
# 180 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_up
	step_end

# 183 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8540:
# 184 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 185 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 186 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 187 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 188 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	set_visible
# 189 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	set_visible
# 190 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 191 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 192 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 193 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 194 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 195 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_up
# 196 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_up
# 197 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_right
	step_end

# 200 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B854F:
	step_end

# 203 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8551:
# 204 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_down
# 205 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 206 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_in_place_faster_right
# 207 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock_facing_direction
# 208 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_slow_left
# 209 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 212 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8559:
# 213 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 214 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 215 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 216 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 219 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B855A:
# 220 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 221 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 222 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B855B:
# 226 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 227 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 230 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8560:
# 231 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_left
# 232 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 235 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8563:
# 236 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 237 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock_facing_direction
# 239 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_fast_down
# 240 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_right
# 241 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 244 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8570:
# 245 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_right
# 246 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 249 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8573:
# 250 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 251 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_in_place_faster_up
# 252 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock_facing_direction
# 253 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_fast_down
# 254 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_left
# 255 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 258 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B857C:
# 259 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 260 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 261 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_left
	step_end

# 264 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B87AD:
# 265 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_slow_right
	step_end

# 268 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B88ED:
# 269 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_down
	step_end

Naranja_CuevaKabuto_G24_M09_Text_086B5C30::
# 272 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x04}¿Qué fue ese grito?\pSeguro que será algun tipo \nde monstruo extraño.\pCreo que… me voy.$"

Naranja_CuevaKabuto_G24_M09_Text_086B5C8A::
# 276 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x04}Ahh vaya… \nEra un mawile…\pEstá bien\p¿Querìas fiesta?\p¡Pues la tendrás!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8420::
# 280 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "¡El TEAM ROCKET está\nrobando los fósiles!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8580::
# 284 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x09}Reportera:{COLOR 0x01}\n¡Espectacularmente secuestrados\len este oscuro lugar\lpor la también oscura banda de villanos\lTEAM ROCKET,\lpodemos ver como se intentan hacer\lcon los Fósiles DOMO de esta cueva!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8642::
# 288 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "JAMES: {COLOR 0x07}¡Enfócame bien!\pPues le dedicamos este robo\na nuestro jefe Giovanni, jeje.$"

Naranja_CuevaKabuto_G24_M09_Text_086B8697::
# 292 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "MEOWTH: {COLOR 0x07}¡Quita! ¡So pelota!\p¡Jefe! Cuando veas esto que sepas\nque el plan entero fue idea mìa.$"

Naranja_CuevaKabuto_G24_M09_Text_086B86F9::
# 296 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "JESSIE: {COLOR 0x07}¿De un gato? ¡Venga ya!\pAdemás el jefe me prefiere a mi\ly como aquì soy la que manda\lla que salgo soy yo.$"

Naranja_CuevaKabuto_G24_M09_Text_086B876E::
# 300 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x04}¿Queréis dejar ya de grabar\nese reportaje tan penoso?$"

Naranja_CuevaKabuto_G24_M09_Text_086B87C4::
# 304 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "¡No puedo dejarles!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8BB7::
# 308 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "Desprendiste el fósil fácilmente.$"
