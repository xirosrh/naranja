Naranja_BandonedShip_G24_M66_MapScripts::
# 5 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_BandonedShip_G24_M66_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_BandonedShip_G24_M66_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_BandonedShip_G24_M66_OnFrame_1
	.2byte 0


Naranja_BandonedShip_G24_M66_OnFrame_1::
# 11 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setvar VAR_TEMP_1, 1
# 12 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 13 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setvar VAR_TEMP_4, 1
# 14 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x15
# 15 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED89
# 16 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 0x24
# 17 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED8F
# 18 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_TEMP_3, 2
# 19 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED95
# 20 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_4
# 21 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 22 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED9B
# 23 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 24 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDC4
# 25 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 26 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDC5
# 27 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 28 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDEB
# 29 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 30 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE23
# 31 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 32 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE6A
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED89::
# 37 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	addvar VAR_TEMP_4, 1
	return


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED8F::
# 42 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	addvar VAR_TEMP_4, 2
	return


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED95::
# 47 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	addvar VAR_TEMP_4, 3
	return


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815ED9B::
# 52 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0x14
# 53 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0xA
# 54 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 0xA
# 55 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 56 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
# 57 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 58 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 59 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE8B
# 60 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	waitfieldeffect 0x36
# 61 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0xA
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDC4::
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDC5::
# 70 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 71 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 72 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	goto_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDEA
# 73 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0x14
# 74 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 75 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE6B
# 76 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	waitfieldeffect 0x36
# 77 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0xA
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDEA::
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EDEB::
# 86 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0x14
# 87 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 8
# 88 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 5
# 89 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 90 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
# 91 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0xB
# 92 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 3
# 93 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 94 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
# 95 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 96 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 97 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE9B
# 98 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	waitfieldeffect 0x36
# 99 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0xA
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE23::
# 104 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0x14
# 105 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0x10
# 106 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 3
# 107 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 108 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
# 109 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0x19
# 110 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 2
# 111 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 112 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
# 113 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0x18
# 114 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 6
# 115 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 116 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
# 117 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 118 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 119 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	call_if EQUAL, Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE7B
# 120 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	waitfieldeffect 0x36
# 121 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	delay 0xA
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE6A::
	end


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE6B::
# 130 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0x2A
# 131 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 0xA
# 132 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 133 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
	return


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE7B::
# 138 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 0x14
# 139 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 5
# 140 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 141 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
	return


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE8B::
# 146 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 1
# 147 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 0xC
# 148 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 149 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
	return


Naranja_BandonedShip_G24_M66_EventScript_Sub_0815EE9B::
# 154 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 0, 1
# 155 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 1, 2
# 156 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setfieldeffectargument 2, 0
# 157 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	dofieldeffect 0x36
	return


Naranja_BandonedShip_G24_M66_EventScript_Sign_5::
# 162 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	lockall
# 163 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	loadword 0, Naranja_BandonedShip_G24_M66_Text_08198EE2
# 164 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	callstd 4
# 165 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	releaseall
	end


Naranja_BandonedShip_G24_M66_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId1::
# 170 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB
# 171 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 172 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M66_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId2::
# 177 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8000, 0x116
# 178 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 179 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M66_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId4::
# 184 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8000, 0x61
# 185 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 186 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M66_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 191 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8000, 0x132
# 192 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 193 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	callstd 1
	end


Naranja_BandonedShip_G24_M66_Text_08198EE2::
# 197 "data/maps/Naranja_BandonedShip_G24_M66/scripts.pory"
	.string "It’s bright and shiny!\nBut it’s just trash...$"
