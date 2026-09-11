Naranja_IslaNavel_G05_M03_MapScripts::
# 5 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNavel_G05_M03_OnTransition
	.byte 0


Naranja_IslaNavel_G05_M03_OnTransition::
# 9 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	setrespawn 0x11
# 10 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_IslaNavel_G05_M03_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 15 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	call Naranja_IslaNavel_G05_M03_EventScript_Sub_086B8F00
# 17 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M03_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 24 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M03_Text_0817768C
# 25 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 30 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M03_Text_081776F5
# 31 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M03_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId4::
# 36 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	lock
# 37 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	faceplayer
# 38 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M03_Text_086B7791
# 39 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	callstd 4
# 40 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	closemessage
# 41 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 42 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 43 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G20_M02_EventScript_Sub_086B71F5
# 44 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	applymovement 5, Naranja_IslaNavel_G05_M03_Movement_086B7284
# 45 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	delay 0x30
# 46 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	nop
# 47 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	nop
# 48 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M03_Text_086B7297
# 49 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	callstd 6
# 50 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	nop
# 51 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	applymovement 5, Naranja_IslaNavel_G05_M03_Movement_086B7289
# 52 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	applymovement 6, Naranja_IslaNavel_G05_M03_Movement_086B728B
# 53 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	delay 0xB0
# 54 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	goto Naranja_IslaNavel_G05_M03_EventScript_Sub_08153B69
	return


Naranja_IslaNavel_G05_M03_EventScript_Sub_08153B69::
# 58 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	playse SE_SLIDING_DOOR
# 59 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	removeobject 5
# 60 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	removeobject 6
# 61 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FD7C::
# 66 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	incrementgamestat 0xF
# 67 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	message Naranja_IslaNavel_G05_M03_Text_086C01EF
# 68 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmessage
# 69 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	applymovement 32779, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 70 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 71 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	dofieldeffect 0x19
# 72 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitfieldeffect 0x19
# 73 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	applymovement 32779, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 74 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	special HealPlayerParty
# 76 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0111
# 77 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDCE
# 78 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	goto Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDB0
	return


Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDB0::
# 82 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	message Naranja_IslaNavel_G05_M03_Text_086C0229
# 83 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmessage
# 84 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	applymovement 32779, Naranja_IslaNavel_G05_M03_Movement_0819FDF4
# 85 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	message Naranja_7islasPomelo_G03_M01_Text_081A0AFA
# 87 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmessage
	return


Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDCE::
# 92 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 93 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 94 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDEA
# 95 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 96 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDB0
	end


Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FDEA::
# 101 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	message Naranja_IslaNavel_G05_M03_Text_081A1275
# 102 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	waitmessage
# 103 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0111
	return


Naranja_IslaNavel_G05_M03_EventScript_Sub_086B8F00::
# 108 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MIKAN_EVENT_COMPLETE_2132
# 109 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	call Naranja_IslaNavel_G05_M03_EventScript_Sub_0819FD7C
	return


# 113 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
Naranja_IslaNavel_G05_M03_Movement_0819FDF4:
# 114 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	nurse_joy_bow
# 115 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	delay_4
	step_end

# 118 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
Naranja_IslaNavel_G05_M03_Movement_086B7284:
# 119 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 120 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	jump_left
# 121 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	face_right
	step_end

# 124 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
Naranja_IslaNavel_G05_M03_Movement_086B7289:
# 125 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_in_place_faster_down
# 126 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	lock_facing_direction
# 127 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 128 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 129 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 130 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 131 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_down
# 132 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_down
# 133 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_down
# 134 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 135 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 136 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
Naranja_IslaNavel_G05_M03_Movement_086B728B:
# 140 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 141 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 142 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 143 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 144 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_down
# 145 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_down
# 146 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_down
# 147 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 148 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
# 149 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	walk_left
	step_end

Naranja_IslaNavel_G05_M03_Text_0817768C::
# 152 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "I wonder what POKéMON looked like\nlong, long ago?\pMaybe the FOSSIL MANIAC at the edge\nof town will know.$"

Naranja_IslaNavel_G05_M03_Text_081776F5::
# 156 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\nseedlings of hardy trees that thrive\leven in volcanic ash.$"

Naranja_IslaNavel_G05_M03_Text_081A1275::
# 160 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "Your POKéMON may be infected with\nPOKéRUS.\pLittle is known about the POKéRUS\nexcept that they are microscopic life-\lforms that attach to POKéMON.\pWhile infected, POKéMON are said to\ngrow exceptionally well.$"

Naranja_IslaNavel_G05_M03_Text_086B7297::
# 164 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "¡Muchísimas gracias por todo!\n¡Adiós {PLAYER}!$"

Naranja_IslaNavel_G05_M03_Text_086B7791::
# 168 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "¡Perfecto!\pGracias a tu POCIÓN\nSEEL recuperó su salud,\launque las heridas tardarán\lun poco más en cicatrizar.\pEres muy buen{RIVAL} cuidando\ny entrenando POKéMON.\pAsì que te haré algún regalo\npara que sigas con tu aventura.\pHumm…\p¡Ya sé!\p¡Ven luego a visitarme y te lo doy!$"

Naranja_IslaNavel_G05_M03_Text_086C01EF::
# 172 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "Deberías no forzar a tus pokemon.\nEso les pondra tristes.$"

Naranja_IslaNavel_G05_M03_Text_086C0229::
# 176 "data/maps/Naranja_IslaNavel_G05_M03/scripts.pory"
	.string "¡Ya está!\p{COLOR 0x04}{PLAYER}: ¡Muchas gracias enfermera!\p{COLOR 0x01}¡ Cuida mucho tus pokemon !\pY también los que no son tuyos. $"
