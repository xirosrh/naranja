Naranja_MagmaHideout_B1F_MapScripts::
# 5 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_MagmaHideout_B1F_OnResume
	.byte 0


Naranja_MagmaHideout_B1F_OnResume::
# 9 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	checkflag FLAG_SYS_POKEDEX_GET
# 10 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	call_if EQUAL, Naranja_MagmaHideout_B1F_EventScript_Sub_0815F2B8
	end


Naranja_MagmaHideout_B1F_EventScript_Sub_0815F2B8::
# 15 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	removeobject 32783
	return


Naranja_MagmaHideout_B1F_EventScript_ItemBall::
# 20 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 1
# 21 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 22 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	callstd 1
	end


Naranja_MagmaHideout_B1F_EventScript_ItemBall_3::
# 27 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x6E
# 28 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 29 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	callstd 1
	end


Naranja_MagmaHideout_B1F_EventScript_ItemBall_2::
# 34 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x25
# 35 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 36 "data/maps/Naranja_MagmaHideout_B1F/scripts.pory"
	callstd 1
	end

