Naranja_IslaPomelo_G00_M08_MapScripts::
# 5 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaPomelo_G00_M08_OnTransition
	.byte 0


Naranja_IslaPomelo_G00_M08_OnTransition::
# 9 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
	end


Naranja_IslaPomelo_G00_M08_EventScript_Sign_1::
# 15 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G00_M08_Text_0816A74D
# 16 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	callstd 3
	end


Naranja_IslaPomelo_G00_M08_EventScript_Sign_3::
# 21 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G00_M08_Text_0816A787
# 22 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	callstd 3
	end


Naranja_IslaPomelo_G00_M08_EventScript_Sign_4::
# 27 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	loadword 0, Naranja_IslaPomelo_G00_M08_Text_0816A763
# 28 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	callstd 3
	end


Naranja_IslaPomelo_G00_M08_EventScript_Trigger_1::
# 33 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	setflag FLAG_NARANJA_ISLA_POMELO_EVENT_COMPLETE_081E
# 34 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


Naranja_IslaPomelo_G00_M08_Text_0816A74D::
# 38 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	.string "ENTERING VICTORY ROAD$"

Naranja_IslaPomelo_G00_M08_Text_0816A763::
# 42 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\nCENTER GATE$"

Naranja_IslaPomelo_G00_M08_Text_0816A787::
# 46 "data/maps/Naranja_IslaPomelo_G00_M08/scripts.pory"
	.string "EVER GRANDE CITY\p“The paradise of flowers, the sea,\nand POKéMON.”$"
