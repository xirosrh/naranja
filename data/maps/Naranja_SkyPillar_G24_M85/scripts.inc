Naranja_SkyPillar_G24_M85_MapScripts::
# 5 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SkyPillar_G24_M85_OnResume
	.byte 0


Naranja_SkyPillar_G24_M85_OnResume::
# 9 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 10 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	call_if EQUAL, Naranja_SkyPillar_G24_M85_EventScript_Sub_0815F312
	end


Naranja_SkyPillar_G24_M85_EventScript_Sub_0815F312::
# 15 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	removeobject 32783
	return


Naranja_SkyPillar_G24_M85_EventScript_OBJ_EVENT_GFX_DRAGONITE_LocalId1::
# 20 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	lock
# 21 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 0x46, 0
# 23 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	waitse
# 24 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, 2
# 25 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	delay 0x28
# 26 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	waitmoncry
# 27 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	setflag FLAG_HIDE_ISLA_VALENCIA_G00_M00_GIRL_3
# 28 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 29 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 30 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	waitstate
# 31 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 32 "data/maps/Naranja_SkyPillar_G24_M85/scripts.pory"
	release
	end

