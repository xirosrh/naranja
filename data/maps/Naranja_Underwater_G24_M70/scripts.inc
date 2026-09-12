Naranja_Underwater_G24_M70_MapScripts::
# 5 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	map_script MAP_SCRIPT_ON_DIVE_WARP, Naranja_Underwater_G24_M70_OnDiveWarp
	.byte 0


Naranja_Underwater_G24_M70_OnDiveWarp::
# 9 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 10 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xC
# 11 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	goto_if NOT_EQUAL, Naranja_Underwater_G24_M70_EventScript_Sub_0815F0A6
# 12 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	compare_var_to_value VAR_0x8005, 0x2C
# 13 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	goto_if NOT_EQUAL, Naranja_Underwater_G24_M70_EventScript_Sub_0815F0A6
# 14 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	goto Naranja_Underwater_G24_M70_EventScript_Sub_0815F0AF
	return


Naranja_Underwater_G24_M70_EventScript_Sub_0815F0A6::
# 18 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	setdivewarp MAP_NARANJA_ROUTE_134_G00_M49, 0xFF, 0x3C, 0x1F
	end


Naranja_Underwater_G24_M70_EventScript_Sub_0815F0AF::
# 23 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	setdivewarp MAP_NARANJA_SEALED_CHAMBER_G24_M71, 0xFF, 0xA, 0x13
	end


Naranja_Underwater_G24_M70_EventScript_Sign_1::
# 28 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	lockall
# 29 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	braillemessage Naranja_Underwater_G24_M70_Text_081C533D
# 30 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	waitbuttonpress
# 31 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 32 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	releaseall
	end


Naranja_Underwater_G24_M70_Text_081C533D::
# 36 "data/maps/Naranja_Underwater_G24_M70/scripts.pory"
	.string "ÂÉéÒÈÌÔç ぅá ÒÌëÌわ$"
