Naranja_TeamHideshoalCave_G24_M23_MapScripts::
# 5 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TeamHideshoalCave_G24_M23_OnTransition
	.byte 0


Naranja_TeamHideshoalCave_G24_M23_OnTransition::
# 9 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_TeamHideshoalCave_G24_M23_EventScript_OBJECT_1_LocalId1::
# 14 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	lock
# 15 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	checkflag FLAG_NARANJA_TEAM_HIDESHOAL_CAVE_EVENT_COMPLETE_006F
# 17 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	goto_if EQUAL, Naranja_TeamHideshoalCave_G24_M23_EventScript_Sub_0815D7E3
# 18 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M23_Text_08196AFD
# 19 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M23_EventScript_Sub_0815D7E3::
# 25 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M23_Text_08196BC5
# 26 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M23_EventScript_OBJECT_2_LocalId2::
# 32 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	lock
# 33 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	faceplayer
# 34 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	checkflag FLAG_NARANJA_TEAM_HIDESHOAL_CAVE_EVENT_COMPLETE_006F
# 35 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	goto_if EQUAL, Naranja_TeamHideshoalCave_G24_M23_EventScript_Sub_0815D802
# 36 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M23_Text_08196C83
# 37 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	callstd 4
# 38 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M23_EventScript_Sub_0815D802::
# 43 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M23_Text_08196D46
# 44 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M23_EventScript_OBJECT_3_LocalId3::
# 50 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_567, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M23_Text_08196E01, Naranja_TeamHideshoalCave_G24_M23_Text_08196E28, Naranja_TeamHideshoalCave_G24_M23_EventScript_AfterBattle_0815D827
# 51 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M23_Text_08196E3D
# 52 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	callstd 6
	end


Naranja_TeamHideshoalCave_G24_M23_EventScript_AfterBattle_0815D827::
# 57 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M23_Text_08196E3D
# 58 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	callstd 4
# 59 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M23_Text_08196AFD::
# 63 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "What? What? What do you want with \nTEAM {AQUA}?\pOur BOSS isn’t here! He’s gone off to\nsnatch something important!\p... ...\nWhere did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_TeamHideshoalCave_G24_M23_Text_08196BC5::
# 67 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "What? What? What do you want with \nTEAM {AQUA}?\pOur BOSS isn’t here!\nHe’s gone off to jack a submarine!\p... ...\nWhere did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_TeamHideshoalCave_G24_M23_Text_08196C83::
# 71 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "What? What? What do you want with \nTEAM {AQUA}?\pOur BOSS isn’t here! He’s on his way to\nMT. PYRE on ROUTE 122!\p... ...\nWhy did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_TeamHideshoalCave_G24_M23_Text_08196D46::
# 75 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "What? What? What do you want with\nTEAM {AQUA}?\pOur BOSS isn’t here!\nHe’s on his way to SLATEPORT CITY!\p... ...\nWhy did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_TeamHideshoalCave_G24_M23_Text_08196E01::
# 79 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "Ayiyiyi!\nSuspicious character spotted!$"

Naranja_TeamHideshoalCave_G24_M23_Text_08196E28::
# 83 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "Grrrrr...\nI lost it!$"

Naranja_TeamHideshoalCave_G24_M23_Text_08196E3D::
# 87 "data/maps/Naranja_TeamHideshoalCave_G24_M23/scripts.pory"
	.string "I took the loss for the TEAM, but\nI did my job...$"
