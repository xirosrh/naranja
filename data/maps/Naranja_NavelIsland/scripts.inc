Naranja_NavelIsland_MapScripts::
# 5 "data/maps/Naranja_NavelIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NavelIsland_OnTransition
	.byte 0


Naranja_NavelIsland_OnTransition::
# 9 "data/maps/Naranja_NavelIsland/scripts.pory"
	setflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_0813
# 10 "data/maps/Naranja_NavelIsland/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 0
# 11 "data/maps/Naranja_NavelIsland/scripts.pory"
	setflag FLAG_HIDE_NARANJA_NAVEL_ISLAND_G05_M01_REPORTER_M
# 12 "data/maps/Naranja_NavelIsland/scripts.pory"
	clearflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_010E
	end


Naranja_NavelIsland_EventScript_Gentleman::
# 17 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_0816C941, MSGBOX_NPC
	end


Naranja_NavelIsland_EventScript_Sign_3::
# 22 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_0816CA39, MSGBOX_SIGN
	end


Naranja_NavelIsland_EventScript_Pikachu::
# 27 "data/maps/Naranja_NavelIsland/scripts.pory"
	lock
# 28 "data/maps/Naranja_NavelIsland/scripts.pory"
	faceplayer
# 29 "data/maps/Naranja_NavelIsland/scripts.pory"
	checkflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_0105
# 30 "data/maps/Naranja_NavelIsland/scripts.pory"
	goto_if EQUAL, Naranja_NavelIsland_EventScript_Sub_0815C1F2
# 31 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_081925E1, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_NavelIsland/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13C
# 33 "data/maps/Naranja_NavelIsland/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 34 "data/maps/Naranja_NavelIsland/scripts.pory"
	callstd 0
# 35 "data/maps/Naranja_NavelIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_NavelIsland/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 37 "data/maps/Naranja_NavelIsland/scripts.pory"
	setflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_0105
# 38 "data/maps/Naranja_NavelIsland/scripts.pory"
	release
	end


Naranja_NavelIsland_EventScript_Sub_0815C1F2::
# 43 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_081926AE, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_NavelIsland/scripts.pory"
	release
	end


Naranja_NavelIsland_EventScript_Sign_6::
# 49 "data/maps/Naranja_NavelIsland/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_COLD_PATH_G00_M29_WALLY
# 50 "data/maps/Naranja_NavelIsland/scripts.pory"
	call_if EQUAL, Naranja_NavelIsland_EventScript_Sub_086B54A0
# 51 "data/maps/Naranja_NavelIsland/scripts.pory"
	checkflag FLAG_NARANJA_NAVEL_ISLAND_EVENT_COMPLETE_2150
# 52 "data/maps/Naranja_NavelIsland/scripts.pory"
	call_if LESS_THAN, Naranja_NavelIsland_EventScript_Sub_086B5466
# 53 "data/maps/Naranja_NavelIsland/scripts.pory"
	release
	end


Naranja_NavelIsland_EventScript_Sub_086B5466::
# 58 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_086B54BD, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_PIKACHU, Naranja_NavelIsland_Movement_086B5561
# 60 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NavelIsland_Movement_08D6C557
# 61 "data/maps/Naranja_NavelIsland/scripts.pory"
	nop
# 62 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_086B5516, MSGBOX_AUTOCLOSE
# 63 "data/maps/Naranja_NavelIsland/scripts.pory"
	nop
# 64 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NavelIsland_Movement_086B5571
# 65 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay 0x60
# 66 "data/maps/Naranja_NavelIsland/scripts.pory"
	nop
# 67 "data/maps/Naranja_NavelIsland/scripts.pory"
	setflag FLAG_NARANJA_NAVEL_GYM_CHALLENGE_ACTIVE
# 68 "data/maps/Naranja_NavelIsland/scripts.pory"
	nop
# 69 "data/maps/Naranja_NavelIsland/scripts.pory"
	warp MAP_NARANJA_NAVEL_ISLAND_FOSSIL_MANIACS_HOUSE, 0, 0, 0
	end


Naranja_NavelIsland_EventScript_Sub_086B54A0::
# 74 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_086B54DB, MSGBOX_DEFAULT
# 75 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NavelIsland_Movement_086B5571
# 76 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay 0x60
# 77 "data/maps/Naranja_NavelIsland/scripts.pory"
	warp MAP_NARANJA_VALENCIA_ISLAND_GYM, 0x1F, 0, 0
	end


Naranja_NavelIsland_EventScript_SpinCushion::
# 82 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_NARANJA_NAVEL_ISLAND_PIKACHU, Naranja_NavelIsland_Movement_086B81E0
# 83 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay 0x50
# 84 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NavelIsland_Movement_086B81F0
# 85 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay 0xE0
# 86 "data/maps/Naranja_NavelIsland/scripts.pory"
	removeitem ITEM_MACH_BIKE, 1
# 87 "data/maps/Naranja_NavelIsland/scripts.pory"
	nop
# 88 "data/maps/Naranja_NavelIsland/scripts.pory"
	msgbox Naranja_NavelIsland_Text_086B8005, MSGBOX_AUTOCLOSE
# 89 "data/maps/Naranja_NavelIsland/scripts.pory"
	warp MAP_NARANJA_COLD_PATH, 3, 0, 0
	end


Naranja_NavelIsland_EventScript_Trigger_1::
# 94 "data/maps/Naranja_NavelIsland/scripts.pory"
	checkpartymove MOVE_SURF
# 95 "data/maps/Naranja_NavelIsland/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 96 "data/maps/Naranja_NavelIsland/scripts.pory"
	call_if LESS_THAN, Naranja_ColdPath_EventScript_Sub_086B7E7E
# 97 "data/maps/Naranja_NavelIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_B2F_Movement_086B87AD
# 98 "data/maps/Naranja_NavelIsland/scripts.pory"
	message Naranja_NavelIsland_Text_086B8C07
# 99 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay 0x30
# 100 "data/maps/Naranja_NavelIsland/scripts.pory"
	waitmessage
# 101 "data/maps/Naranja_NavelIsland/scripts.pory"
	release
	end


# 105 "data/maps/Naranja_NavelIsland/scripts.pory"
Naranja_NavelIsland_Movement_086B5561:
# 106 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 107 "data/maps/Naranja_NavelIsland/scripts.pory"
	set_visible
# 108 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 109 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 110 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 111 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 112 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 113 "data/maps/Naranja_NavelIsland/scripts.pory"
	player_run_up
# 114 "data/maps/Naranja_NavelIsland/scripts.pory"
	set_invisible
	step_end

# 117 "data/maps/Naranja_NavelIsland/scripts.pory"
Naranja_NavelIsland_Movement_086B5571:
# 118 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 119 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 120 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 121 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 122 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 123 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 124 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_up
# 125 "data/maps/Naranja_NavelIsland/scripts.pory"
	set_invisible
	step_end

# 128 "data/maps/Naranja_NavelIsland/scripts.pory"
Naranja_NavelIsland_Movement_086B81E0:
# 129 "data/maps/Naranja_NavelIsland/scripts.pory"
	set_invisible
# 130 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay_16
# 131 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay_16
# 132 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay_4
# 133 "data/maps/Naranja_NavelIsland/scripts.pory"
	set_visible
# 134 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_fast_right
# 135 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_fast_right
# 136 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_right
# 137 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_down
# 138 "data/maps/Naranja_NavelIsland/scripts.pory"
	jump_2_down
# 139 "data/maps/Naranja_NavelIsland/scripts.pory"
	jump_2_down
# 140 "data/maps/Naranja_NavelIsland/scripts.pory"
	acro_pop_wheelie_move_left
# 141 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_down
# 142 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_down
# 143 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay_16
	step_end

# 146 "data/maps/Naranja_NavelIsland/scripts.pory"
Naranja_NavelIsland_Movement_086B81F0:
# 147 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_left
# 148 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_slow_left
# 149 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_left
# 150 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_left
# 151 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_left
# 152 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_left
# 153 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_down
# 154 "data/maps/Naranja_NavelIsland/scripts.pory"
	jump_2_down
# 155 "data/maps/Naranja_NavelIsland/scripts.pory"
	jump_2_down
# 156 "data/maps/Naranja_NavelIsland/scripts.pory"
	walk_down
# 157 "data/maps/Naranja_NavelIsland/scripts.pory"
	face_down
# 158 "data/maps/Naranja_NavelIsland/scripts.pory"
	face_down
# 159 "data/maps/Naranja_NavelIsland/scripts.pory"
	face_down
# 160 "data/maps/Naranja_NavelIsland/scripts.pory"
	face_down
	step_end

# 163 "data/maps/Naranja_NavelIsland/scripts.pory"
Naranja_NavelIsland_Movement_08D6C557:
# 164 "data/maps/Naranja_NavelIsland/scripts.pory"
	delay_1
# 165 "data/maps/Naranja_NavelIsland/scripts.pory"
	emote_exclamation_mark
	step_end

Naranja_NavelIsland_Text_0816C941::
# 168 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "Have you already challenged FLANNERY,\nthe LEADER of LAVARIDGE GYM?\pThe girl’s grandfather was famous.\nHe was one of the ELITE FOUR in the\lPOKéMON LEAGUE at one point.\pIt wouldn’t surprise me to see FLANNERY\nbecome a great TRAINER in her own\lright.$"

Naranja_NavelIsland_Text_0816CA39::
# 172 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "POKéMON CONTESTS\nSUPER RANK REGISTRATION\p“Burst on to the POKéMON scene!”$"

Naranja_NavelIsland_Text_081925E1::
# 176 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "My big brother’s the FOSSIL MANIAC...\nHe’s a nice guy who loves fossils...\pHe loves digging holes, too...\nHe dug this hole by himself...\pYou can have this, so you can DIG\nholes just like my big brother...$"

Naranja_NavelIsland_Text_081926AE::
# 180 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "If you make a POKéMON DIG inside a\ncave, you’re returned to the entrance...$"

Naranja_NavelIsland_Text_086B54BD::
# 184 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "Cste es el gimnasio de NAVEL…\pLa subida parece que será dura\nmejor empezar cuanto antes…$"

Naranja_NavelIsland_Text_086B54DB::
# 188 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "La subida parece que será dura\nmejor empezar cuanto antes…$"

Naranja_NavelIsland_Text_086B5516::
# 192 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "…pero no corras tanto    \nte fatigarás.\pY aún queda una larga escalada.$"

Naranja_NavelIsland_Text_086B8005::
# 196 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "¡Horrible! ¡Eres lent{RIVAL} y torpe!\n¡Te juro que me das vergüenza ajena!\pNo sé ni que hacer…\pHagamos como que esto nunca sucedió\ny como si yo no te conociera.$"

Naranja_NavelIsland_Text_086B8C07::
# 200 "data/maps/Naranja_NavelIsland/scripts.pory"
	.string "¿Y cómo surfearé?$"
