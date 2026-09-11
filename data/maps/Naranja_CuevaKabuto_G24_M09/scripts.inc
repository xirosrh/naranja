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
	checkflag FLAG_NARANJA_CUEVA_KABUTO_EVENT_COMPLETE_2128
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
	loadword 0, Naranja_CuevaKabuto_G24_M09_Text_086B5C30
# 47 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 6
	end


Naranja_CuevaKabuto_G24_M09_EventScript_Sub_086B5170::
# 52 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 53 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 54 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 55 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 56 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_08009606
# 57 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
# 58 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M09_Text_086B5C8A
# 59 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 6
# 60 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x20
# 61 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setwildbattle SPECIES_MAWILE, 0x14, 0
# 62 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	special BattleSetup_StartLatiBattle
# 63 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x80
# 64 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	setflag FLAG_NARANJA_CUEVA_KABUTO_EVENT_COMPLETE_2128
# 65 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	nop
	end


Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_4::
# 70 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock
# 71 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	checkflag FLAG_HIDE_CUEVA_KABUTO_G24_M07_KECLEON_1
# 72 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 73 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 74 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	call_if LESS_THAN, Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_2
# 75 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MIKAN_G00_M20_SS_TIDAL
# 76 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B854F
# 77 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x20
# 78 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M09_Text_086B8420
# 79 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 81 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 1
# 82 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B8530
# 83 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x50
# 84 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 0
# 85 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	animateflash 2
# 86 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M09_Text_086B8580
# 87 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 4
# 88 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 89 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 0
# 90 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B8551
# 91 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B855B
# 92 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_F, Naranja_CuevaKabuto_G24_M09_Movement_086B855A
# 93 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_M, Naranja_CuevaKabuto_G24_M09_Movement_086B8559
# 94 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x40
# 95 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B8642
# 96 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 97 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B8560
# 98 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_M, Naranja_CuevaKabuto_G24_M09_Movement_086B8563
# 99 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 100 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B8697
# 101 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 102 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_F, Naranja_CuevaKabuto_G24_M09_Movement_086B8570
# 103 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B8573
# 104 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 105 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M09_Text_086B86F9
# 106 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 4
# 107 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 108 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_CAMERAMAN, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 109 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 110 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_ZIGZAGOON, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 111 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_F, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 112 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_MAGMA_MEMBER_M, Naranja_CuevaKabuto_G24_M09_Movement_086B857C
# 113 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M09_Text_086B876E
# 114 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 4
# 115 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 116 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 1
# 117 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B8540
# 118 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 119 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	fadescreen 0
# 120 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	release
	end


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId5::
# 125 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x2F2F
# 126 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x5555
# 127 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x2F2F
# 128 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playse 0x2E2F
# 129 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	gettime
	return


Naranja_CuevaKabuto_G24_M09_EventScript_Trigger_2::
# 134 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B87AD
# 135 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B87C4
# 136 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x30
# 137 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 138 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	release
	end


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId4::
# 143 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_BEAUTY, Naranja_CuevaKabuto_G24_M09_Movement_086B88ED
# 144 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M09_CAMERAMAN, Naranja_CuevaKabuto_G24_M09_Movement_086B88ED
# 145 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	goto Naranja_Route108_G00_M23_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId2
	return


Naranja_CuevaKabuto_G24_M09_EventScript_OBJ_EVENT_GFX_KECLEON_1_LocalId1::
# 149 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M07_Text_086B8B67
# 150 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	callstd 5
# 151 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 152 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M07_EventScript_Sub_086B38F4
# 153 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	closemessage
# 154 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitse
# 155 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	playmoncry SPECIES_KIRLIA, 0
# 156 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay 0x20
# 157 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	message Naranja_CuevaKabuto_G24_M09_Text_086B8BB7
# 158 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	waitmessage
# 159 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	goto Naranja_CuevaKabuto_G24_M09_EventScript_Sub_081B17BA
	return


# 162 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_08009606:
# 163 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	emote_exclamation_mark
	step_end

# 166 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B51BC:
# 167 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	emote_exclamation_mark
# 168 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	jump_in_place_left
# 169 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_right
	step_end

# 172 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8530:
# 173 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 174 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 175 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 176 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 177 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 178 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	set_invisible
# 179 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 180 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 181 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 182 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 183 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_right
# 184 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_down
# 185 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_down
# 186 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_up
# 187 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_up
	step_end

# 190 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8540:
# 191 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 192 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 193 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 194 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 195 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	set_visible
# 196 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	set_visible
# 197 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 198 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 199 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 200 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 201 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_left
# 202 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_up
# 203 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_faster_up
# 204 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_right
	step_end

# 207 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B854F:
	step_end

# 210 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8551:
# 211 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_down
# 212 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 213 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_in_place_faster_right
# 214 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock_facing_direction
# 215 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_slow_left
# 216 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 219 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8559:
# 220 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 221 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 222 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 223 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B855A:
# 227 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 228 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 229 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 232 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B855B:
# 233 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
# 234 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 237 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8560:
# 238 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_left
# 239 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 242 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8563:
# 243 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 244 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_in_place_faster_up
# 245 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock_facing_direction
# 246 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_fast_down
# 247 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_right
# 248 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 251 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8570:
# 252 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_right
# 253 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_up
	step_end

# 256 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B8573:
# 257 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 258 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_in_place_faster_up
# 259 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	lock_facing_direction
# 260 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_fast_down
# 261 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_left
# 262 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	unlock_facing_direction
	step_end

# 265 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B857C:
# 266 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 267 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	delay_16
# 268 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_left
	step_end

# 271 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B87AD:
# 272 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	walk_slow_right
	step_end

# 275 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
Naranja_CuevaKabuto_G24_M09_Movement_086B88ED:
# 276 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	face_down
	step_end

Naranja_CuevaKabuto_G24_M09_Text_086B5C30::
# 279 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x04}¿Qué fue ese grito?\pSeguro que será algun tipo \nde monstruo extraño.\pCreo que… me voy.$"

Naranja_CuevaKabuto_G24_M09_Text_086B5C8A::
# 283 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x04}Ahh vaya… \nEra un mawile…\pEstá bien\p¿Querìas fiesta?\p¡Pues la tendrás!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8420::
# 287 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "¡El TEAM ROCKET está\nrobando los fósiles!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8580::
# 291 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x09}Reportera:{COLOR 0x01}\n¡Espectacularmente secuestrados\len este oscuro lugar\lpor la también oscura banda de villanos\lTEAM ROCKET,\lpodemos ver como se intentan hacer\lcon los Fósiles DOMO de esta cueva!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8642::
# 295 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "JAMES: {COLOR 0x07}¡Enfócame bien!\pPues le dedicamos este robo\na nuestro jefe Giovanni, jeje.$"

Naranja_CuevaKabuto_G24_M09_Text_086B8697::
# 299 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "MEOWTH: {COLOR 0x07}¡Quita! ¡So pelota!\p¡Jefe! Cuando veas esto que sepas\nque el plan entero fue idea mìa.$"

Naranja_CuevaKabuto_G24_M09_Text_086B86F9::
# 303 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "JESSIE: {COLOR 0x07}¿De un gato? ¡Venga ya!\pAdemás el jefe me prefiere a mi\ly como aquì soy la que manda\lla que salgo soy yo.$"

Naranja_CuevaKabuto_G24_M09_Text_086B876E::
# 307 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "{COLOR 0x04}¿Queréis dejar ya de grabar\nese reportaje tan penoso?$"

Naranja_CuevaKabuto_G24_M09_Text_086B87C4::
# 311 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "¡No puedo dejarles!$"

Naranja_CuevaKabuto_G24_M09_Text_086B8BB7::
# 315 "data/maps/Naranja_CuevaKabuto_G24_M09/scripts.pory"
	.string "Desprendiste el fósil fácilmente.$"
