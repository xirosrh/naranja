Naranja_7islasPomelo_G03_M01_MapScripts::
# 5 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_7islasPomelo_G03_M01_OnTransition
	.byte 0


Naranja_7islasPomelo_G03_M01_OnTransition::
# 9 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	setrespawn 0xF
# 10 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_7islasPomelo_G03_M01_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 15 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M01_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId2::
# 24 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M01_Text_08174CDB
# 25 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	callstd 2
	end


Naranja_7islasPomelo_G03_M01_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId3::
# 30 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M01_Text_08174D32
# 31 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	callstd 2
	end


Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B::
# 36 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 37 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 38 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_04C1
# 39 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 40 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	checkflag FLAG_HIDE_ISLAS_G00_M19_SPIN_CUSHION
# 41 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD49
# 42 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	checkflag FLAG_HIDE_7ISLAS_POMELO_G00_M11_OLD_MAN_1
# 43 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD4F
# 44 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	checkflag FLAG_HIDE_ROUTE109_G00_M24_OLD_MAN_1
# 45 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD55
	return


Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD49::
# 50 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 1
	return


Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD4F::
# 55 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 2
	return


Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD55::
# 60 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	setvar VAR_NARANJA_7ISLAS_POMELO_EVENT_STATE_2, 3
	return


Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B::
# 65 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	lock
# 66 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	faceplayer
# 67 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M01_Text_081A0A7D
# 68 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	callstd 5
# 69 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 70 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaNavel_G05_M03_EventScript_Sub_086B8F00
# 71 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 72 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FDC7
	end


Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FDC7::
# 77 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	message Naranja_7islasPomelo_G03_M01_Text_081A0AFA
# 78 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	waitmessage
	return


Naranja_7islasPomelo_G03_M01_Text_08174CDB::
# 82 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	.string "There’s a stone cavern at the edge\nof town.\pI’ve heard you can find rare stones\nthere.$"

Naranja_7islasPomelo_G03_M01_Text_08174D32::
# 86 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	.string "Even if a POKéMON faints and can’t\nbattle, it can still use a move learned\lfrom a Hidden Machine, HM.$"

Naranja_7islasPomelo_G03_M01_Text_081A0A7D::
# 90 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	.string "¡ Muy buenos días ! \nGracias por volver a este Pokecentro.\lLe atiende la enfermera JOY.\p¿Quieres que te curemos tus Pokemon?$"

Naranja_7islasPomelo_G03_M01_Text_081A0AFA::
# 94 "data/maps/Naranja_7islasPomelo_G03_M01/scripts.pory"
	.string "¡ Adiós {PLAYER} !$"
