Naranja_IslaPomelo_G16_M12_MapScripts::
# 5 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaPomelo_G16_M12_OnTransition
	.byte 0


Naranja_IslaPomelo_G16_M12_OnTransition::
# 9 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	setrespawn 0xB
	end


Naranja_IslaPomelo_G16_M12_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId2::
# 14 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M12_Text_08191967
# 15 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	callstd 2
	end


Naranja_IslaPomelo_G16_M12_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 20 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G16_M12_Text_081919EF
# 21 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	callstd 2
	end


Naranja_IslaPomelo_G16_M12_Text_08191967::
# 25 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	.string "The POKéMON LEAGUE is only a short\ndistance after the VICTORY ROAD.\pIf you’ve come this far, what choice\ndo you have but to keep going?$"

Naranja_IslaPomelo_G16_M12_Text_081919EF::
# 29 "data/maps/Naranja_IslaPomelo_G16_M12/scripts.pory"
	.string "The long and harrowing VICTORY ROAD...\pIt’s like reliving the path one has\ntraveled in life...\pBelieve in your POKéMON and give it\nyour very best!$"
