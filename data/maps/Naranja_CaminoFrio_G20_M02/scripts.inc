Naranja_CaminoFrio_G20_M02_MapScripts::
# 5 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_CaminoFrio_G20_M02_OnTransition
	.byte 0


Naranja_CaminoFrio_G20_M02_OnTransition::
# 9 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_0845
	end


Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C262::
# 14 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	lock
# 15 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	checkflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_0083
# 17 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C28F
# 18 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_084B
# 19 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192A0D
# 20 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 4
# 21 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x12D
# 22 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 23 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 0
# 24 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 25 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 26 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 27 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 28 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 29 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 30 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	setflag FLAG_NARANJA_CAMINO_FRIO_EVENT_COMPLETE_0083
# 31 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	release
	end


Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C28F::
# 36 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192ACC
# 37 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	release
	end


Naranja_CaminoFrio_G20_M02_EventScript_Sign_1::
# 43 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	lockall
# 44 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192B4A
# 45 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 5
# 46 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 47 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C2B7
# 48 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192DA9
# 49 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C2B7::
# 55 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192C01
# 56 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 5
# 57 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 58 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C2CC
# 59 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	releaseall
	end


Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C2CC::
# 64 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192CB4
# 65 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 4
	return


Naranja_CaminoFrio_G20_M02_EventScript_Sign_2::
# 70 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_08192DC1
# 71 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 3
	end


Naranja_CaminoFrio_G20_M02_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 76 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	faceplayer
# 77 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	checkflag FLAG_HIDE_ISLA_NAVEL_G05_M03_WOMAN_3
# 78 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	goto_if EQUAL, Naranja_CaminoFrio_G20_M02_EventScript_Sub_0815C262
# 79 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	setflag FLAG_HIDE_CAMINO_FRIO_G20_M02_NURSE
# 80 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NAVEL_G05_M03_WOMAN_3
# 81 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 82 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	loadword 0, Naranja_CaminoFrio_G20_M02_Text_086B73E3
# 83 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	callstd 6
# 84 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	closemessage
# 85 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 86 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 87 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	call_if EQUAL, Naranja_CaminoFrio_G20_M02_EventScript_Sub_086B71F5
# 88 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	nop
# 89 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	applymovement LOCALID_CAMINO_FRIO_G20_M02_NURSE, Naranja_CaminoFrio_G20_M02_Movement_086B7200
# 90 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	delay 0x10
	end


Naranja_CaminoFrio_G20_M02_EventScript_Sub_086B71F5::
# 95 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M02_Movement_086B7209
# 96 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	delay 0x20
	return


# 100 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
Naranja_CaminoFrio_G20_M02_Movement_086B7200:
# 101 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_right
# 102 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_right
# 103 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_down
# 104 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_down
# 105 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_down
# 106 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	set_invisible
# 107 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_down
# 108 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
Naranja_CaminoFrio_G20_M02_Movement_086B7209:
# 112 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_in_place_faster_down
# 113 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	lock_facing_direction
# 114 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_slow_up
# 115 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	delay_16
# 116 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	walk_slow_down
# 117 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	face_left
	step_end

Naranja_CaminoFrio_G20_M02_Text_08192A0D::
# 120 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "JOY: ¡Ya llegaste {PLAYER}!\pMe has ayudado un montón\na atender los POKéMON.\pAl este, en Isla NAVEL\nestá el gimnasio de DANNY.\pSeguro que necesitarás\nesta MT pues él exige \lsaberla para desafiarle.$"

Naranja_CaminoFrio_G20_M02_Text_08192ACC::
# 124 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "¿Desafiaste ya a DANNY?\pBueno, ven a verme cuando quieras.\pQuizá luego nos encarguemos\nde otra aventura. ¿Va?\p¡Me serás útil!$"

Naranja_CaminoFrio_G20_M02_Text_08192B4A::
# 128 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "It’s LANETTE’s research notes.\nThere’s information about BOXES.\pDesign BOXES to hold 30 POKéMON each.\pEach TRAINER should be able to store\n420 POKéMON on the PC system.\pKeep reading?$"

Naranja_CaminoFrio_G20_M02_Text_08192C01::
# 132 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "A marking system should be added to\nmake POKéMON easier to organize.\pThe name and wallpaper design of each\nBOX will be made changeable to please\lthe stored POKéMON.\pKeep reading?$"

Naranja_CaminoFrio_G20_M02_Text_08192CB4::
# 136 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "When storing a POKéMON, it should be\nsent to the BOX inspected last.\pIf that BOX is full, the received\nPOKéMON is stored in the next BOX.\pIn other words, when a BOX is examined,\nit is automatically selected as the BOX\lto which POKéMON are sent.$"

Naranja_CaminoFrio_G20_M02_Text_08192DA9::
# 140 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "{PLAYER} closed the notebook.$"

Naranja_CaminoFrio_G20_M02_Text_08192DC1::
# 144 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "There’s an e-mail from someone on\nthe PC.\p“... ... ... ... ... ... ...\p“Your Storage System offers more\nconvenience than mine.\p“It has a lot of user-friendly features\nthat make it fun and useful, too.\p“It makes me proud that I played\na part in its development.\p“Here’s hoping that you’ll continue\nresearch in Storage Systems.\p“From BILL\n... ... ... ... ... ... ... ...”$"

Naranja_CaminoFrio_G20_M02_Text_086B73E3::
# 148 "data/maps/Naranja_CaminoFrio_G20_M02/scripts.pory"
	.string "¡Menos mal\nque ya te recuperaste {PLAYER}!\p¡Te veo ya con mejor pinta!\pNo estaba pendiente de tì\ny no me fijé a tiempo, ya que SHELDER no\lse tragó la poción y lo único que podìa\lera aplicarle un alga SANGORA.\p¡Gracias por encontrarla!\pPor favor, te pido que perdones a SEEL.\nSólo querìa jugar y no podìa saber\lque te quedabas sin aire.\pLos SEEL de NAVEL cuando encuentran\nhumanos les encanta jugar con ellos.\lAntes, no pocos de NAVEL tenìan\lun SEEL como mascota y ayuda\lpara romper los hielos.\pAhora…\pAhora no hay tantos hielos que romper\ncomo habìa antes.\p¡Pero a lo nuestro!\pSi te queda aire en los pulmones\n¿podrás ayudarme con otro SEEL?\p¡Necesitaremos otra POCIÓN!\n¡Estaré al otro lado de ISLA NAVEL!\l¡En marcha! ¡Vamos!$"
