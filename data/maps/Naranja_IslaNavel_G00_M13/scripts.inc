Naranja_IslaNavel_G00_M13_MapScripts::
# 5 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaNavel_G00_M13_OnTransition
	.byte 0


Naranja_IslaNavel_G00_M13_OnTransition::
# 9 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0813
# 10 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 0
# 11 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setflag FLAG_HIDE_ISLA_NAVEL_G05_M01_REPORTER_M
# 12 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	clearflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_010E
	end


Naranja_IslaNavel_G00_M13_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId3::
# 17 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_0816C941
# 18 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G00_M13_EventScript_Sign_3::
# 23 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_0816CA39
# 24 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 3
	end


Naranja_IslaNavel_G00_M13_EventScript_OBJ_EVENT_GFX_PIKACHU_LocalId1::
# 29 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	lock
# 30 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	faceplayer
# 31 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0105
# 32 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G00_M13_EventScript_Sub_0815C1F2
# 33 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_081925E1
# 34 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13C
# 36 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 37 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 0
# 38 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 39 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 40 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_0105
# 41 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	release
	end


Naranja_IslaNavel_G00_M13_EventScript_Sub_0815C1F2::
# 46 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_081926AE
# 47 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 4
# 48 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	release
	end


Naranja_IslaNavel_G00_M13_EventScript_Sign_6::
# 53 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	checkflag FLAG_HIDE_CAMINO_FRIO_G00_M29_WALLY
# 54 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	call_if EQUAL, Naranja_IslaNavel_G00_M13_EventScript_Sub_086B54A0
# 55 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_2150
# 56 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	call_if LESS_THAN, Naranja_IslaNavel_G00_M13_EventScript_Sub_086B5466
# 57 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	release
	end


Naranja_IslaNavel_G00_M13_EventScript_Sub_086B5466::
# 62 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_086B54BD
# 63 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G00_M13_PIKACHU, Naranja_IslaNavel_G00_M13_Movement_086B5561
# 65 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G00_M13_Movement_08D6C557
# 66 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	nop
# 67 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_086B5516
# 68 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 6
# 69 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	nop
# 70 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G00_M13_Movement_086B5571
# 71 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay 0x60
# 72 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	nop
# 73 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	setflag FLAG_NARANJA_ISLA_NAVEL_EVENT_COMPLETE_02EE
# 74 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	nop
# 75 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	warp MAP_NARANJA_ISLA_NAVEL_G20_M00, 0, 0, 0
	end


Naranja_IslaNavel_G00_M13_EventScript_Sub_086B54A0::
# 80 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_086B54DB
# 81 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G00_M13_Movement_086B5571
# 83 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay 0x60
# 84 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	warp MAP_NARANJA_INSIDE_OF_TRUCK_G08_M01, 0x1F, 0, 0
	end


Naranja_IslaNavel_G00_M13_EventScript_OBJ_EVENT_GFX_SPIN_CUSHION_LocalId4::
# 89 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_ISLA_NAVEL_G00_M13_PIKACHU, Naranja_IslaNavel_G00_M13_Movement_086B81E0
# 90 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay 0x50
# 91 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaNavel_G00_M13_Movement_086B81F0
# 92 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay 0xE0
# 93 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	removeitem ITEM_MACH_BIKE, 1
# 94 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	nop
# 95 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	loadword 0, Naranja_IslaNavel_G00_M13_Text_086B8005
# 96 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	callstd 6
# 97 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	warp MAP_NARANJA_CAMINO_FRIO_G00_M29, 3, 0, 0
	end


Naranja_IslaNavel_G00_M13_EventScript_Trigger_1::
# 102 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	checkpartymove MOVE_SURF
# 103 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 104 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	call_if LESS_THAN, Naranja_CaminoFrio_G00_M29_EventScript_Sub_086B7E7E
# 105 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CuevaKabuto_G24_M09_Movement_086B87AD
# 106 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	message Naranja_IslaNavel_G00_M13_Text_086B8C07
# 107 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay 0x30
# 108 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	waitmessage
# 109 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	release
	end


# 113 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
Naranja_IslaNavel_G00_M13_Movement_086B5561:
# 114 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 115 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	set_visible
# 116 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 117 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 118 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 119 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 120 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 121 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	player_run_up
# 122 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	set_invisible
	step_end

# 125 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
Naranja_IslaNavel_G00_M13_Movement_086B5571:
# 126 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 127 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 128 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 129 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 130 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 131 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 132 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_up
# 133 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	set_invisible
	step_end

# 136 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
Naranja_IslaNavel_G00_M13_Movement_086B81E0:
# 137 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	set_invisible
# 138 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay_16
# 139 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay_16
# 140 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay_4
# 141 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	set_visible
# 142 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_fast_right
# 143 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_fast_right
# 144 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_right
# 145 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_down
# 146 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	jump_2_down
# 147 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	jump_2_down
# 148 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	acro_pop_wheelie_move_left
# 149 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_down
# 150 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_down
# 151 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay_16
	step_end

# 154 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
Naranja_IslaNavel_G00_M13_Movement_086B81F0:
# 155 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_left
# 156 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_slow_left
# 157 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_left
# 158 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_left
# 159 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_left
# 160 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_left
# 161 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_down
# 162 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	jump_2_down
# 163 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	jump_2_down
# 164 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	walk_down
# 165 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	face_down
# 166 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	face_down
# 167 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	face_down
# 168 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	face_down
	step_end

# 171 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
Naranja_IslaNavel_G00_M13_Movement_08D6C557:
# 172 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	delay_1
# 173 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	emote_exclamation_mark
	step_end

Naranja_IslaNavel_G00_M13_Text_0816C941::
# 176 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "Have you already challenged FLANNERY,\nthe LEADER of LAVARIDGE GYM?\pThe girl’s grandfather was famous.\nHe was one of the ELITE FOUR in the\lPOKéMON LEAGUE at one point.\pIt wouldn’t surprise me to see FLANNERY\nbecome a great TRAINER in her own\lright.$"

Naranja_IslaNavel_G00_M13_Text_0816CA39::
# 180 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "POKéMON CONTESTS\nSUPER RANK REGISTRATION\p“Burst on to the POKéMON scene!”$"

Naranja_IslaNavel_G00_M13_Text_081925E1::
# 184 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "My big brother’s the FOSSIL MANIAC...\nHe’s a nice guy who loves fossils...\pHe loves digging holes, too...\nHe dug this hole by himself...\pYou can have this, so you can DIG\nholes just like my big brother...$"

Naranja_IslaNavel_G00_M13_Text_081926AE::
# 188 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "If you make a POKéMON DIG inside a\ncave, you’re returned to the entrance...$"

Naranja_IslaNavel_G00_M13_Text_086B54BD::
# 192 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "Cste es el gimnasio de NAVEL…\pLa subida parece que será dura\nmejor empezar cuanto antes…$"

Naranja_IslaNavel_G00_M13_Text_086B54DB::
# 196 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "La subida parece que será dura\nmejor empezar cuanto antes…$"

Naranja_IslaNavel_G00_M13_Text_086B5516::
# 200 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "…pero no corras tanto    \nte fatigarás.\pY aún queda una larga escalada.$"

Naranja_IslaNavel_G00_M13_Text_086B8005::
# 204 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "¡Horrible! ¡Eres lent{RIVAL} y torpe!\n¡Te juro que me das vergüenza ajena!\pNo sé ni que hacer…\pHagamos como que esto nunca sucedió\ny como si yo no te conociera.$"

Naranja_IslaNavel_G00_M13_Text_086B8C07::
# 208 "data/maps/Naranja_IslaNavel_G00_M13/scripts.pory"
	.string "¿Y cómo surfearé?$"
