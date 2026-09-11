Naranja_BandonedShip_G24_M65_MapScripts::
# 5 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_BandonedShip_G24_M65_OnResume
# 6 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_BandonedShip_G24_M65_OnLoad
	.byte 0


Naranja_BandonedShip_G24_M65_OnResume::
# 10 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setdivewarp MAP_NARANJA_BANDONED_SHIP_G24_M60, 0xFF, 5, 4
	end


Naranja_BandonedShip_G24_M65_OnLoad::
# 15 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F0
# 16 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if LESS_THAN, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBCB
# 17 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F1
# 18 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if LESS_THAN, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBD5
# 19 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F2
# 20 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if LESS_THAN, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBDF
# 21 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F3
# 22 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if LESS_THAN, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBE9
# 23 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F0
# 24 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBA3
# 25 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F1
# 26 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBAD
# 27 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F2
# 28 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBB7
# 29 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F3
# 30 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBC1
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBA3::
# 35 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 3, 8, 0x22B, 1
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBAD::
# 40 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 6, 8, 0x22B, 1
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBB7::
# 45 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 3, 3, 0x21A, 0
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBC1::
# 50 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 9, 3, 0x21A, 0
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBCB::
# 55 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 3, 8, 0x233, 1
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBD5::
# 60 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 6, 8, 0x233, 1
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBDF::
# 65 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 3, 3, 0x234, 0
	return


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBE9::
# 70 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setmetatile 9, 3, 0x234, 0
	return


Naranja_BandonedShip_G24_M65_EventScript_Sign_1::
# 75 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 76 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F0
# 77 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 78 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_ROOM_1_KEY, 1
# 79 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 80 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECCF
# 81 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198E90
# 82 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_ROOM_1_KEY, 1
# 85 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F0
# 86 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBA3
# 87 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 88 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sign_2::
# 93 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 94 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F1
# 95 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 96 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_ROOM_2_KEY, 1
# 97 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 98 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECD9
# 99 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198E90
# 100 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 102 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_ROOM_2_KEY, 1
# 103 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F1
# 104 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBAD
# 105 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sign_3::
# 111 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 112 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F2
# 113 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 114 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_ROOM_4_KEY, 1
# 115 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 116 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECE3
# 117 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198E90
# 118 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 120 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_ROOM_4_KEY, 1
# 121 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F2
# 122 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBB7
# 123 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 124 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sign_4::
# 129 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 130 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F3
# 131 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 132 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_ROOM_6_KEY, 1
# 133 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 134 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECED
# 135 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198E90
# 136 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 138 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_ROOM_6_KEY, 1
# 139 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F3
# 140 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBC1
# 141 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 142 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECCF::
# 147 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198DC0
# 148 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 149 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECD9::
# 154 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198DF4
# 155 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 156 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECE3::
# 161 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198E28
# 162 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 163 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECED::
# 168 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M65_Text_08198E5C
# 169 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 170 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7::
# 175 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M57_Text_081986EC
# 176 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	callstd 4
# 177 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_Text_08198DC0::
# 181 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 1” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198DF4::
# 185 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 2” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198E28::
# 189 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 4” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198E5C::
# 193 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 6” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198E90::
# 197 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "{PLAYER} inserted and turned the\nKEY.\pThe inserted KEY stuck fast, but the\ndoor opened.$"
