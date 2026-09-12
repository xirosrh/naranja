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
	checkitem ITEM_KEY_TO_ROOM_1, 1
# 79 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 80 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECCF
# 81 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198E90, MSGBOX_DEFAULT
# 82 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 83 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_1, 1
# 84 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F0
# 85 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBA3
# 86 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sign_2::
# 92 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 93 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F1
# 94 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 95 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_2, 1
# 96 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 97 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECD9
# 98 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198E90, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 100 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_2, 1
# 101 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F1
# 102 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBAD
# 103 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 104 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sign_3::
# 109 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 110 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F2
# 111 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 112 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_4, 1
# 113 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 114 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECE3
# 115 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198E90, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 117 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_4, 1
# 118 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F2
# 119 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBB7
# 120 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sign_4::
# 126 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	lockall
# 127 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F3
# 128 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7
# 129 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_6, 1
# 130 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 131 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECED
# 132 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198E90, MSGBOX_DEFAULT
# 133 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	playse SE_PIN
# 134 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_6, 1
# 135 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	setflag FLAG_NARANJA_BANDONED_SHIP_EVENT_COMPLETE_00F3
# 136 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	call Naranja_BandonedShip_G24_M65_EventScript_Sub_0815EBC1
# 137 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	special DrawWholeMapView
# 138 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECCF::
# 143 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198DC0, MSGBOX_DEFAULT
# 144 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECD9::
# 149 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198DF4, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECE3::
# 155 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198E28, MSGBOX_DEFAULT
# 156 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECED::
# 161 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M65_Text_08198E5C, MSGBOX_DEFAULT
# 162 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_EventScript_Sub_0815ECF7::
# 167 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	msgbox Naranja_BandonedShip_G24_M57_Text_081986EC, MSGBOX_DEFAULT
# 168 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M65_Text_08198DC0::
# 172 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 1” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198DF4::
# 176 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 2” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198E28::
# 180 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 4” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198E5C::
# 184 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "The door is locked.\p“RM. 6” is painted on the door.$"

Naranja_BandonedShip_G24_M65_Text_08198E90::
# 188 "data/maps/Naranja_BandonedShip_G24_M65/scripts.pory"
	.string "{PLAYER} inserted and turned the\nKEY.\pThe inserted KEY stuck fast, but the\ndoor opened.$"
