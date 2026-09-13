Naranja_AquaHideout_1F_MapScripts::
# 5 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_AquaHideout_1F_OnTransition
	.byte 0


Naranja_AquaHideout_1F_OnTransition::
# 9 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_AquaHideout_1F_EventScript_Object1::
# 14 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	lock
# 15 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	checkflag FLAG_NARANJA_TEAM_HIDESHOAL_CAVE_EVENT_COMPLETE_006F
# 17 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	goto_if EQUAL, Naranja_AquaHideout_1F_EventScript_Sub_0815D7E3
# 18 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	msgbox Naranja_AquaHideout_1F_Text_08196AFD, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	release
	end


Naranja_AquaHideout_1F_EventScript_Sub_0815D7E3::
# 24 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	msgbox Naranja_AquaHideout_1F_Text_08196BC5, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	release
	end


Naranja_AquaHideout_1F_EventScript_Object2::
# 30 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	lock
# 31 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	faceplayer
# 32 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	checkflag FLAG_NARANJA_TEAM_HIDESHOAL_CAVE_EVENT_COMPLETE_006F
# 33 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	goto_if EQUAL, Naranja_AquaHideout_1F_EventScript_Sub_0815D802
# 34 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	msgbox Naranja_AquaHideout_1F_Text_08196C83, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	release
	end


Naranja_AquaHideout_1F_EventScript_Sub_0815D802::
# 40 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	msgbox Naranja_AquaHideout_1F_Text_08196D46, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	release
	end


Naranja_AquaHideout_1F_EventScript_Object3::
# 46 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_567, Naranja_AquaHideout_1F_Text_08196E01, Naranja_AquaHideout_1F_Text_08196E28, Naranja_AquaHideout_1F_EventScript_AfterBattle_0815D827
# 47 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	msgbox Naranja_AquaHideout_1F_Text_08196E3D, MSGBOX_AUTOCLOSE
	end


Naranja_AquaHideout_1F_EventScript_AfterBattle_0815D827::
# 52 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	msgbox Naranja_AquaHideout_1F_Text_08196E3D, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	release
	end


Naranja_AquaHideout_1F_Text_08196AFD::
# 57 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \nTEAM {AQUA}?\pOur BOSS isn’t here! He’s gone off to\nsnatch something important!\p... ...\nWhere did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_AquaHideout_1F_Text_08196BC5::
# 61 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \nTEAM {AQUA}?\pOur BOSS isn’t here!\nHe’s gone off to jack a submarine!\p... ...\nWhere did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_AquaHideout_1F_Text_08196C83::
# 65 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \nTEAM {AQUA}?\pOur BOSS isn’t here! He’s on his way to\nMT. PYRE on ROUTE 122!\p... ...\nWhy did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_AquaHideout_1F_Text_08196D46::
# 69 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\nTEAM {AQUA}?\pOur BOSS isn’t here!\nHe’s on his way to SLATEPORT CITY!\p... ...\nWhy did he go?\pWahaha! Do you really think I’d tell\nyou something that crucial?$"

Naranja_AquaHideout_1F_Text_08196E01::
# 73 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\nSuspicious character spotted!$"

Naranja_AquaHideout_1F_Text_08196E28::
# 77 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "Grrrrr...\nI lost it!$"

Naranja_AquaHideout_1F_Text_08196E3D::
# 81 "data/maps/Naranja_AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM, but\nI did my job...$"
