Naranja_TrovitaIsland_Flat2_2F_MapScripts::
	.byte 0


Naranja_TrovitaIsland_Flat2_2F_EventScript_OldMan2::
# 8 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_Flat2_2F_Text_08185421, MSGBOX_NPC
	end


Naranja_TrovitaIsland_Flat2_2F_EventScript_LittleBoy1::
# 13 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	lock
# 14 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_00D5
# 16 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_Flat2_2F_EventScript_Sub_08157DCF
# 17 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_Flat2_2F_Text_08185461, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC
# 19 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	callstd 0
# 21 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 22 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 23 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_00D5
# 24 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Flat2_2F_EventScript_Sub_08157DCF::
# 29 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_Flat2_2F_Text_081854C4, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_Flat2_2F_Text_08185421::
# 34 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	.string "Way back in the old days, DEVON was just\na teeny, tiny company.$"

Naranja_TrovitaIsland_Flat2_2F_Text_08185461::
# 38 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	.string "My daddy’s working at the CORPORATION.\pMy daddy made this!\nBut I can’t use it, so you can have it.$"

Naranja_TrovitaIsland_Flat2_2F_Text_081854C4::
# 42 "data/maps/Naranja_TrovitaIsland_Flat2_2F/scripts.pory"
	.string "My daddy’s working at the CORPORATION.\pWhen I grow up, I’m going to work for\nDEVON, too.$"
