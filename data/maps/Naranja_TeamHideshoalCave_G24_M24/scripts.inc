Naranja_TeamHideshoalCave_G24_M24_MapScripts::
# 5 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_TeamHideshoalCave_G24_M24_OnResume
# 6 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TeamHideshoalCave_G24_M24_OnTransition
	.byte 0


Naranja_TeamHideshoalCave_G24_M24_OnResume::
# 10 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 11 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	call_if EQUAL, Naranja_TeamHideshoalCave_G24_M24_EventScript_Sub_0815D846
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_Sub_0815D846::
# 16 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	removeobject 32783
	return


Naranja_TeamHideshoalCave_G24_M24_OnTransition::
# 21 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJECT_1_LocalId1::
# 26 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_568, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M24_Text_08196E6F, Naranja_TeamHideshoalCave_G24_M24_Text_08196EB6, Naranja_TeamHideshoalCave_G24_M24_EventScript_AfterBattle_0815D86B
# 27 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M24_Text_08196ECC
# 28 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 6
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_AfterBattle_0815D86B::
# 33 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M24_Text_08196ECC
# 34 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJECT_2_LocalId2::
# 40 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_569, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M24_Text_08196F39, Naranja_TeamHideshoalCave_G24_M24_Text_08196F9B, Naranja_TeamHideshoalCave_G24_M24_EventScript_AfterBattle_0815D890
# 41 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M24_Text_08196FB5
# 42 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 6
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_AfterBattle_0815D890::
# 47 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M24_Text_08196FB5
# 48 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 4
# 49 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJECT_4_LocalId4::
# 54 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_TEAM_HIDESHOAL_CAVE_592, LOCALID_NONE, Naranja_TeamHideshoalCave_G24_M24_Text_08196FFD, Naranja_TeamHideshoalCave_G24_M24_Text_08197040
# 55 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	loadword 0, Naranja_TeamHideshoalCave_G24_M24_Text_08197056
# 56 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 6
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 61 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	lock
# 62 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	faceplayer
# 63 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 0x1E, 0
# 64 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	waitse
# 65 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	playmoncry SPECIES_ELECTRODE, 2
# 66 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	delay 0x28
# 67 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	waitmoncry
# 68 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setflag FLAG_HIDE_TEAM_HIDESHOAL_CAVE_G24_M24_ITEM_BALL_3
# 69 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 70 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	dowildbattle
# 71 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 72 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId8::
# 77 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	lock
# 78 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	faceplayer
# 79 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 0x1E, 0
# 80 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	waitse
# 81 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	playmoncry SPECIES_ELECTRODE, 2
# 82 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	delay 0x28
# 83 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	waitmoncry
# 84 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setflag FLAG_HIDE_TEAM_HIDESHOAL_CAVE_G24_M24_ITEM_BALL_5
# 85 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 86 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	dowildbattle
# 87 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 88 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	release
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 93 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 1
# 94 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 95 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 1
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 100 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 101 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 102 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 1
	end


Naranja_TeamHideshoalCave_G24_M24_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 107 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setorcopyvar VAR_0x8000, 0x25
# 108 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 109 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	callstd 1
	end


Naranja_TeamHideshoalCave_G24_M24_Text_08196E6F::
# 113 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "If you want to know the secret about\nour HIDEOUT, you have me to beat!$"

Naranja_TeamHideshoalCave_G24_M24_Text_08196EB6::
# 117 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "I can’t win at all...$"

Naranja_TeamHideshoalCave_G24_M24_Text_08196ECC::
# 121 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "Our HIDEOUT’s secret?\pWell, let’s just say...\nThere’s a submarine at the far end!\pBut, by now...\nKekekeke...$"

Naranja_TeamHideshoalCave_G24_M24_Text_08196F39::
# 125 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "Fuel supply loaded A-OK!\nIn-cruise snacks loaded A-OK!\pNothing left to do but KO a pesky\nmeddler!$"

Naranja_TeamHideshoalCave_G24_M24_Text_08196F9B::
# 129 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "I took a serious licking!$"

Naranja_TeamHideshoalCave_G24_M24_Text_08196FB5::
# 133 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "Humph!\nThis was supposed to happen!\pMy mission was to just hold you up!$"

Naranja_TeamHideshoalCave_G24_M24_Text_08196FFD::
# 137 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "Yawn... Keeping watch over the\nHIDEOUT bores me. I’ll take you on.$"

Naranja_TeamHideshoalCave_G24_M24_Text_08197040::
# 141 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "Yawn...\nOh, I lost...$"

Naranja_TeamHideshoalCave_G24_M24_Text_08197056::
# 145 "data/maps/Naranja_TeamHideshoalCave_G24_M24/scripts.pory"
	.string "If you scurry too much, other TEAM\n{AQUA} members might get you.$"
