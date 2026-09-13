Naranja_AquaHideout_B1F_MapScripts::
# 5 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_AquaHideout_B1F_OnResume
# 6 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_AquaHideout_B1F_OnTransition
	.byte 0


Naranja_AquaHideout_B1F_OnResume::
# 10 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 11 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	call_if EQUAL, Naranja_AquaHideout_B1F_EventScript_Sub_0815D846
	end


Naranja_AquaHideout_B1F_EventScript_Sub_0815D846::
# 16 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	removeobject 32783
	return


Naranja_AquaHideout_B1F_OnTransition::
# 21 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_AquaHideout_B1F_EventScript_Object1::
# 26 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_568, Naranja_AquaHideout_B1F_Text_08196E6F, Naranja_AquaHideout_B1F_Text_08196EB6, Naranja_AquaHideout_B1F_EventScript_AfterBattle_0815D86B
# 27 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	msgbox Naranja_AquaHideout_B1F_Text_08196ECC, MSGBOX_AUTOCLOSE
	end


Naranja_AquaHideout_B1F_EventScript_AfterBattle_0815D86B::
# 32 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	msgbox Naranja_AquaHideout_B1F_Text_08196ECC, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	release
	end


Naranja_AquaHideout_B1F_EventScript_Object2::
# 38 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_569, Naranja_AquaHideout_B1F_Text_08196F39, Naranja_AquaHideout_B1F_Text_08196F9B, Naranja_AquaHideout_B1F_EventScript_AfterBattle_0815D890
# 39 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	msgbox Naranja_AquaHideout_B1F_Text_08196FB5, MSGBOX_AUTOCLOSE
	end


Naranja_AquaHideout_B1F_EventScript_AfterBattle_0815D890::
# 44 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	msgbox Naranja_AquaHideout_B1F_Text_08196FB5, MSGBOX_DEFAULT
# 45 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	release
	end


Naranja_AquaHideout_B1F_EventScript_Object4::
# 50 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_592, Naranja_AquaHideout_B1F_Text_08196FFD, Naranja_AquaHideout_B1F_Text_08197040
# 51 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	msgbox Naranja_AquaHideout_B1F_Text_08197056, MSGBOX_AUTOCLOSE
	end


Naranja_AquaHideout_B1F_EventScript_ItemBall_3::
# 56 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	lock
# 57 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	faceplayer
# 58 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 0x1E, 0
# 59 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	waitse
# 60 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, 2
# 61 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	delay 0x28
# 62 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	waitmoncry
# 63 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_AQUA_HIDEOUT_B1F_ITEM_BALL_3
# 64 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 65 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	dowildbattle
# 66 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 67 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	release
	end


Naranja_AquaHideout_B1F_EventScript_ItemBall_5::
# 72 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	lock
# 73 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	faceplayer
# 74 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 0x1E, 0
# 75 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	waitse
# 76 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, 2
# 77 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	delay 0x28
# 78 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	waitmoncry
# 79 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_AQUA_HIDEOUT_B1F_ITEM_BALL_5
# 80 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 81 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	dowildbattle
# 82 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 83 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	release
	end


Naranja_AquaHideout_B1F_EventScript_ItemBall_2::
# 88 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 1
# 89 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 90 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	callstd 1
	end


Naranja_AquaHideout_B1F_EventScript_ItemBall_4::
# 95 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 96 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 97 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	callstd 1
	end


Naranja_AquaHideout_B1F_EventScript_ItemBall::
# 102 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x25
# 103 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 104 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	callstd 1
	end


Naranja_AquaHideout_B1F_Text_08196E6F::
# 108 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "If you want to know the secret about\nour HIDEOUT, you have me to beat!$"

Naranja_AquaHideout_B1F_Text_08196EB6::
# 112 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "I can’t win at all...$"

Naranja_AquaHideout_B1F_Text_08196ECC::
# 116 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "Our HIDEOUT’s secret?\pWell, let’s just say...\nThere’s a submarine at the far end!\pBut, by now...\nKekekeke...$"

Naranja_AquaHideout_B1F_Text_08196F39::
# 120 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "Fuel supply loaded A-OK!\nIn-cruise snacks loaded A-OK!\pNothing left to do but KO a pesky\nmeddler!$"

Naranja_AquaHideout_B1F_Text_08196F9B::
# 124 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "I took a serious licking!$"

Naranja_AquaHideout_B1F_Text_08196FB5::
# 128 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "Humph!\nThis was supposed to happen!\pMy mission was to just hold you up!$"

Naranja_AquaHideout_B1F_Text_08196FFD::
# 132 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "Yawn... Keeping watch over the\nHIDEOUT bores me. I’ll take you on.$"

Naranja_AquaHideout_B1F_Text_08197040::
# 136 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "Yawn...\nOh, I lost...$"

Naranja_AquaHideout_B1F_Text_08197056::
# 140 "data/maps/Naranja_AquaHideout_B1F/scripts.pory"
	.string "If you scurry too much, other TEAM\n{AQUA} members might get you.$"
