Naranja_IslaMandarina_G06_M03_MapScripts::
# 5 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMandarina_G06_M03_OnTransition
	.byte 0


Naranja_IslaMandarina_G06_M03_OnTransition::
# 9 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	setrespawn 0x12
# 10 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_IslaMandarina_G06_M03_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 15 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M03_Text_08178389
# 16 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G06_M03_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 21 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G06_M03_Text_08178D8E
# 22 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarina_G06_M03_Text_08178389::
# 26 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	.string "No todos los viejos son sabios,\nni todos los sabios son viejos.\pSin embargo yo sì.\nYo sé todo lo importante.$"

Naranja_IslaMandarina_G06_M03_Text_08178D8E::
# 30 "data/maps/Naranja_IslaMandarina_G06_M03/scripts.pory"
	.string "¡Che flac{RIVAL}!\p¿Tambien estás de paso?\nEsta ciudad es extraña.\lIncluso atacan SNUBULL en la calle.\pTe aconsejo que te quedes lo m nimo:\nDanny entrena en el Norte\len la nevada Isla NAVEL.$"
