Naranja_SkyPillar_Top_MapScripts::
# 5 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SkyPillar_Top_OnResume
	.byte 0


Naranja_SkyPillar_Top_OnResume::
# 9 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 10 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	call_if EQUAL, Naranja_SkyPillar_Top_EventScript_Sub_0815F312
	end


Naranja_SkyPillar_Top_EventScript_Sub_0815F312::
# 15 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	removeobject 32783
	return


Naranja_SkyPillar_Top_EventScript_Dragonite::
# 20 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	lock
# 21 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 0x46, 0
# 23 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	waitse
# 24 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, 2
# 25 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	delay 0x28
# 26 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	waitmoncry
# 27 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_NARANJA_VALENCIA_ISLAND_G00_M00_GIRL_3
# 28 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 29 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 30 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	waitstate
# 31 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 32 "data/maps/Naranja_SkyPillar_Top/scripts.pory"
	release
	end

