Naranja_PuebloPaleta_G26_M05_MapScripts::
# 5 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_PuebloPaleta_G26_M05_OnResume
# 6 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuebloPaleta_G26_M05_OnTransition
# 7 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_PuebloPaleta_G26_M05_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 14 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_PuebloPaleta_G26_M05_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_PuebloPaleta_G26_M05_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Naranja_PuebloPaleta_G26_M05_OnFrame_1
# 9 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, Naranja_PuebloPaleta_G26_M05_OnFrame_2
# 10 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script_2 VAR_TEMP_0, 2, Naranja_PuebloPaleta_G26_M05_OnFrame_3
# 11 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script_2 VAR_TEMP_0, 3, Naranja_PuebloPaleta_G26_M05_OnFrame_4
# 12 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script_2 VAR_TEMP_0, 4, Naranja_PuebloPaleta_G26_M05_OnFrame_5
	.2byte 0

Naranja_PuebloPaleta_G26_M05_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_PuebloPaleta_G26_M05_OnWarp_1
	.2byte 0


Naranja_PuebloPaleta_G26_M05_OnResume::
# 20 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special TryHideBattleTowerReporter
# 21 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816029C
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816029C::
# 26 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xA
# 27 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 28 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_00EE
# 29 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081602E4
# 30 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_00ED
# 31 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081602CD
# 32 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	specialvar VAR_0x8007, GetBattleTowerSinglesStreak
# 33 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8007, 0x32
# 34 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if LESS_THAN, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081602E4
# 35 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G26_M05_MAN_2
# 36 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special TryInitBattleTowerAwardManObjectEvent
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081602CD::
# 41 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	specialvar VAR_0x8007, GetBattleTowerSinglesStreak
# 42 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8007, 0x64
# 43 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if LESS_THAN, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081602E4
# 44 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G26_M05_MAN_2
# 45 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special TryInitBattleTowerAwardManObjectEvent
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081602E4::
# 50 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G26_M05_MAN_2
	return


Naranja_PuebloPaleta_G26_M05_OnTransition::
# 55 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2ED
	end


Naranja_PuebloPaleta_G26_M05_OnWarp_1::
# 60 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_1, 1
# 61 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_PuebloPaleta_G26_M05_OnFrame_1::
# 66 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallFrontierUtilFunc
	end


Naranja_PuebloPaleta_G26_M05_OnFrame_2::
# 71 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 72 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A3FD
# 74 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 76 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 5
# 77 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_OnFrame_3::
# 82 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 83 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 84 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A487
# 85 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 86 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0
# 87 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleFactoryFunction
# 88 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 89 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816037D
# 90 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallSlateportTentFunction
# 91 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 92 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816037D
# 93 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A6BE
# 94 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 95 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitfanfare
# 97 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A719
# 98 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816037D
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816037D::
# 103 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 8
# 104 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleFactoryFunction
# 105 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 106 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081603AD
# 107 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A589
# 108 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 109 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xD
# 110 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 111 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallVerdanturfTentFunction
# 112 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 3
# 113 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattlePyramidFunction
# 114 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	playse SE_SAVE
# 115 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitse
# 116 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081603AD
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081603AD::
# 120 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0
# 121 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 3
# 122 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 123 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A4BB
# 124 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 125 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallFallarborTentFunction
# 126 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 127 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 128 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160408
# 129 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A506
# 130 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 131 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitfanfare
# 133 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 9
# 134 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleFactoryFunction
# 135 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0x31
# 136 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if NOT_EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081603F8
# 137 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A617
# 138 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 139 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081603F8
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081603F8::
# 143 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_08199FA9
# 144 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 146 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 5
# 147 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160408::
# 152 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A520
# 153 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 154 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 155 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 156 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 5
# 157 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_OnFrame_4::
# 162 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 163 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 164 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A571
# 165 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 166 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A589
# 167 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 168 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xD
# 169 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 170 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0
# 171 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattlePyramidFunction
# 172 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	playse SE_SAVE
# 173 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitse
# 174 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_08199FA9
# 175 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 176 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 177 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 5
# 178 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_OnFrame_5::
# 183 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 184 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 185 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_6, 1
# 186 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A5B1
# 187 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 188 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A5CE
# 189 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 190 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 1
# 191 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattlePyramidFunction
# 192 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	playse SE_SAVE
# 193 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitse
# 194 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 8
# 195 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 0
# 196 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 197 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 5
# 198 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special SavePlayerParty
# 199 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattlePikeFunction
# 200 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A0A8
# 201 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 202 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 203 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160664
# 204 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M06, 0xFF, 1, 6
# 205 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 0
# 206 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitstate
# 207 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1
	return


Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 211 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 212 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 213 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0
# 214 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleFactoryFunction
# 215 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 216 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_OnFrame_3
# 217 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special SavePlayerParty
# 218 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_08199F2C
# 219 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 220 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081604BE
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081604BE::
# 224 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_08199F79
# 225 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 226 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	multichoice 0xF, 6, 0x17, 0
# 227 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 228 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 229 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081604FA
# 230 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 231 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160600
# 232 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 233 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652
# 234 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 235 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652
# 236 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081604FA
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081604FA::
# 240 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_0819A024
# 241 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 242 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	multichoice 0x12, 6, 0x18, 0
# 243 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 244 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 245 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652
# 246 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 247 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652
# 248 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleDomeFunction
# 249 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 250 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816060D
# 251 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 1
# 252 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 253 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 254 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 255 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A07B
# 256 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 257 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	fadescreen 1
# 258 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special ChoosePartyForBattleFrontier
# 259 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitstate
# 260 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 261 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816064F
# 262 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_08199FDA
# 263 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 5
# 264 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 265 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 266 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816064F
# 267 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 268 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160587
# 269 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 270 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816064F
# 271 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160587
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160587::
# 275 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 5
# 276 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 277 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 0
# 278 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xB
# 279 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 280 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0
# 281 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 1
# 282 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 283 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 8
# 284 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 0
# 285 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 286 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special LoadPlayerParty
# 287 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 288 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	delay 2
# 289 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 290 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 5
# 291 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 292 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 293 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160642
# 294 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	incrementgamestat 0x1E
# 295 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special SavePlayerParty
# 296 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattlePikeFunction
# 297 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_6, 1
# 298 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A0A8
# 299 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 300 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closemessage
# 301 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160664
# 302 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M06, 0xFF, 1, 6
# 303 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_TEMP_0, 0
# 304 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitstate
# 305 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160600
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160600::
# 309 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A0D1
# 310 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 311 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081604BE
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816060D::
# 315 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 316 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 317 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160628
# 318 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 319 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160635
# 320 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160628
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160628::
# 324 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A249
# 325 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 326 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160662
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160635::
# 330 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A32D
# 331 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 332 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160662
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160642::
# 336 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xC
# 337 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 338 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816064F::
# 342 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special LoadPlayerParty
# 343 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160652::
# 347 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_08199FA9
# 348 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 349 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xB
# 350 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special CallBattleArenaFunction
# 351 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160662
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160662::
# 355 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160664::
# 360 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M05_TEALA, Naranja_PuebloPaleta_G26_M05_Movement_08160693
# 361 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M05_Movement_08160693
# 362 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 363 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	opendoor 6, 1
# 364 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitdooranim
# 365 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M05_TEALA, Naranja_PuebloPaleta_G26_M05_Movement_08160697
# 366 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_PuebloPaleta_G26_M05_Movement_0816069A
# 367 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 368 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	closedoor 6, 1
# 369 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitdooranim
	return


Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId2::
# 374 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 375 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 376 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A747
# 377 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 5
# 378 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 379 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 380 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081606CC
# 381 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 382 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081606F7
# 383 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081606CC::
# 388 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A7C3
# 389 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 390 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 1
# 391 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 392 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 393 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 394 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 395 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160701
# 396 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 397 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816070B
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081606F7::
# 402 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A7FD
# 403 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 404 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160701::
# 409 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A83D
# 410 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 411 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0816070B::
# 416 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A871
# 417 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 418 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 423 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A8AE
# 424 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 2
	end


Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId4::
# 429 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A946
# 430 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 2
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sign_1::
# 435 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lockall
# 436 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special FadeOutOrbEffect
# 437 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitbuttonpress
# 438 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 439 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId6::
# 444 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 445 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 446 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_00EE
# 447 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081607C5
# 448 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	checkflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_00ED
# 449 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160773
# 450 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819A9EE
# 451 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 452 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8008, 0x2A
# 453 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2A
# 454 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 7
# 455 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 456 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081607AF
# 457 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_00ED
# 458 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819ABAA
# 459 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 460 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_08160773::
# 465 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	specialvar VAR_RESULT, GetBattleTowerSinglesStreak
# 466 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0x64
# 467 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if LESS_THAN, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081607C5
# 468 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819AAC4
# 469 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 470 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8008, 0x2B
# 471 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2B
# 472 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 7
# 473 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 474 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081607AF
# 475 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_00EE
# 476 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819ABAA
# 477 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 478 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081607AF::
# 483 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	bufferdecorationname 1, 0x8008
# 484 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_IslaNueva_G15_M10_Text_081A0CEF
# 485 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 486 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819ABED
# 487 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 488 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081607C5::
# 493 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_0819AC55
# 494 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 495 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806::
# 500 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special SaveGame
# 501 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitstate
	return


Naranja_PuebloPaleta_G26_M05_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId5::
# 506 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 507 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 508 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	checkflag FLAG_TEMP_2
# 509 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2E3
# 510 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 7
# 511 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special InterviewBefore
# 512 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 513 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2E3
# 514 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 515 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A776D
# 516 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 5
# 517 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 518 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE241
# 519 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 520 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE297
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE241::
# 525 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	message Naranja_PuebloPaleta_G26_M05_Text_081A7823
# 526 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	waitmessage
# 527 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	multichoice 0x13, 8, 0x2D, 1
# 528 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 529 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 530 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2A1
# 531 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 532 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2AA
# 533 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A79EB
# 534 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 535 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8004, 0xC
# 536 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 537 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 538 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	lock
# 539 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	faceplayer
# 540 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 541 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2B3
# 542 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 543 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2D9
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE297::
# 548 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A78B7
# 549 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 550 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2A1::
# 555 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A791B
# 556 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2AA::
# 561 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A7990
# 562 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2B3::
# 567 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 568 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2D9
# 569 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A7A6E
# 570 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 571 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setflag FLAG_TEMP_2
# 572 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 573 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 7
# 574 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2D9::
# 578 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A7AE0
# 579 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 580 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2E3::
# 585 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M05_Text_081A7B66
# 586 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	callstd 4
# 587 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE2ED::
# 592 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_6, 0
# 593 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE30F
# 594 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setvar VAR_0x8005, 7
# 595 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	special InterviewBefore
# 596 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 597 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE30F
# 598 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G26_M05_REPORTER_F
	return


Naranja_PuebloPaleta_G26_M05_EventScript_Sub_081AE30F::
# 603 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G26_M05_REPORTER_F
	return


# 607 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
Naranja_PuebloPaleta_G26_M05_Movement_08160693:
# 608 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	walk_up
# 609 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	walk_up
# 610 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	walk_up
	step_end

# 613 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
Naranja_PuebloPaleta_G26_M05_Movement_08160697:
# 614 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	walk_up
# 615 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	set_invisible
	step_end

# 618 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
Naranja_PuebloPaleta_G26_M05_Movement_0816069A:
# 619 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	walk_up
# 620 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	walk_up
# 621 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	set_invisible
	step_end

Naranja_PuebloPaleta_G26_M05_Text_08199F2C::
# 624 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\pPlease register with me to enter\na BATTLE ROOM.$"

Naranja_PuebloPaleta_G26_M05_Text_08199F79::
# 628 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Would you like to make a BATTLE ROOM\nchallenge?$"

Naranja_PuebloPaleta_G26_M05_Text_08199FA9::
# 632 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "We’ll be looking forward to your\nnext challenge.$"

Naranja_PuebloPaleta_G26_M05_Text_08199FDA::
# 636 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\nprogress must be saved. Is that okay?$"

Naranja_PuebloPaleta_G26_M05_Text_0819A024::
# 640 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "There are two BATTLE ROOMS,\nLevel 50 and Level 100.\lWhich would you like to challenge?$"

Naranja_PuebloPaleta_G26_M05_Text_0819A07B::
# 644 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Please select the POKéMON you wish\nto enter.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A0A8::
# 648 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "I’ll direct you to your BATTLE ROOM now.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A0D1::
# 652 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "The BATTLE TOWER is a facility made\nespecially for POKéMON battles.\pWithin the TOWER are many BATTLE ROOMS.\pIn each BATTLE ROOM, seven TRAINERS\nawait your challenge.\pBeat all seven, and you will be rewarded\nwith a fabulous prize.\pYou may also take a break from your\nchallenge by saving your progress.\pMake sure you save properly or you\nwon’t be able to resume your challenge.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A249::
# 656 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Excuse me!\pYou don’t have three eligible POKéMON.\pYou must have three different POKéMON\nof Level 50 or less to enter.\pThey also must be holding different\nkinds of items.\pEGGS{STR_VAR_1} ineligible.\pPlease come see me when you are ready.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A32D::
# 660 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Excuse me!\pYou don’t have three eligible POKéMON.\pYou must have three different POKéMON\nto enter.\pThey also must be holding different\nkinds of items.\pEGGS{STR_VAR_1} ineligible.\pPlease come see me when you are ready.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A3FD::
# 664 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Excuse me!\pYou didn’t save before you quit your\nchallenge last time.\pBecause of that, your challenge so far\nhas been disqualified. Sorry!$"

Naranja_PuebloPaleta_G26_M05_Text_0819A487::
# 668 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Congratulations!\nYou’ve beaten all seven TRAINERS!\p$"

Naranja_PuebloPaleta_G26_M05_Text_0819A4BB::
# 672 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "For beating seven TRAINERS in a row,\nyou have earned this fabulous prize!\p$"

Naranja_PuebloPaleta_G26_M05_Text_0819A506::
# 676 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "{PLAYER} received the prize\n{STR_VAR_1}.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A520::
# 680 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, your BAG appears to be full.\pPlease make room in your BAG, then come\nsee me.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A571::
# 684 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Thank you for playing!\p$"

Naranja_PuebloPaleta_G26_M05_Text_0819A589::
# 688 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Your record will be saved.\nPlease wait.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A5B1::
# 692 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "We’ve been waiting for you!\p$"

Naranja_PuebloPaleta_G26_M05_Text_0819A5CE::
# 696 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\nprogress will be saved. Please wait.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A617::
# 700 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "You’re finally about to face the\n50th TRAINER.\pFrom here on, every time you beat seven\nTRAINERS in a row, your POKéMON will\lreceive a commemorative RIBBON.\pGood luck!$"

Naranja_PuebloPaleta_G26_M05_Text_0819A6BE::
# 704 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Here are some RIBBONS for beating\nseven tough TRAINERS in a row.\p{PLAYER} received some RIBBONS!$"

Naranja_PuebloPaleta_G26_M05_Text_0819A719::
# 708 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "{PLAYER} put the RIBBONS on the\nchallenger POKéMON.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A747::
# 712 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Hello, hello!\nYou’re going to battle here, right?\pCan you tell me what’s going through\nyour mind as you prepare for battle?$"

Naranja_PuebloPaleta_G26_M05_Text_0819A7C3::
# 716 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, wow, you’ll tell me?\nGreat! Then, what’s your answer?$"

Naranja_PuebloPaleta_G26_M05_Text_0819A7FD::
# 720 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, so you don’t think much about it?\nYou’re one cool customer.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A83D::
# 724 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Hunh? You changed your mind?\nI guess you’re fickle.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A871::
# 728 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Okay, so that’s how you feel?\nThat’s quite original.\pThanks!$"

Naranja_PuebloPaleta_G26_M05_Text_0819A8AE::
# 732 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "The number of matches you win in a row\nis recorded.\pThe record is posted beside the\nregistration counter.\pIt’s also on the back of your\nTRAINER’S CARD.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A946::
# 736 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Once you’ve entered the BATTLE TOWER,\nyou can’t leave until you either lose\lor you beat seven TRAINERS in a row.\pYou’d best be certain that you’re up\nto the challenge.$"

Naranja_PuebloPaleta_G26_M05_Text_0819A9EE::
# 740 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Hahahaha! Pure magnificence!\nPure magnificence indeed!\pDo you realize what you’ve achieved?\nYou’ve beaten 50 TRAINERS in a row!\pYes, purely magnificent!\pAs the OWNER of the BATTLE TOWER,\nlet me give you a memento!$"

Naranja_PuebloPaleta_G26_M05_Text_0819AAC4::
# 744 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Wahahaha! Pure magnificence!\nAbsolutely pure magnificence indeed!\pDo you realize what you’ve achieved?\nYou’ve beaten 100 TRAINERS in a row!\pYes, absolutely magnificent!\pAs the OWNER of the BATTLE TOWER,\nlet me give you a memento!$"

Naranja_PuebloPaleta_G26_M05_Text_0819ABAA::
# 748 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "I suggest you keep it displayed.\nIt will surely attract attention.$"

Naranja_PuebloPaleta_G26_M05_Text_0819ABED::
# 752 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh?\nYour PC has no room for this...\pBut it would be a shame to waste this...\nPlease come back for this!$"

Naranja_PuebloPaleta_G26_M05_Text_0819AC55::
# 756 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "I’m overwhelmed with satisfaction after\nseeing your magnificent performance.\pIt makes the building of the BATTLE\nTOWER all worthwhile!$"

Naranja_PuebloPaleta_G26_M05_Text_081A776D::
# 760 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Hello! You’re the TRAINER who just had\na battle, right?\pI’m gathering interviews with TRAINERS\nall over the place.\pMay I get a few words from you about\nyour impressions on battling?$"

Naranja_PuebloPaleta_G26_M05_Text_081A7823::
# 764 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "You will? Really?\nThank you!\lThen, uh...\pHow did things turn out in the BATTLE\nTOWER today?\pWere you satisfied with the battle?\nOr are you unhappy?$"

Naranja_PuebloPaleta_G26_M05_Text_081A78B7::
# 768 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh...\nSorry we disturbed you.\pPlease give us an interview the next\ntime you visit the BATTLE TOWER.$"

Naranja_PuebloPaleta_G26_M05_Text_081A791B::
# 772 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Well, of course!\pThat unmistakable look of satisfaction\non your face...\pIt’s obvious that you’ve had a great\nbattle.$"

Naranja_PuebloPaleta_G26_M05_Text_081A7990::
# 776 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, I see...\pWell, it certainly is difficult to make a\nbattle turn out exactly as planned.$"

Naranja_PuebloPaleta_G26_M05_Text_081A79EB::
# 780 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, oh, may I ask one more question?\pIf you were to describe your\nimpressions about this battle with one\lsaying, what would it be?$"

Naranja_PuebloPaleta_G26_M05_Text_081A7A6E::
# 784 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, that is stunningly cool!\pThat’s a great line!\nI hope you’ll do great next time, too.\pI hope to see you again!$"

Naranja_PuebloPaleta_G26_M05_Text_081A7AE0::
# 788 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "Oh, I see...\pStill, being the silent type is also cool,\nisn’t it?\pI hope you’ll give me the opportunity to\nshare your thoughts again!$"

Naranja_PuebloPaleta_G26_M05_Text_081A7B66::
# 792 "data/maps/Naranja_PuebloPaleta_G26_M05/scripts.pory"
	.string "I’ll be looking forward to your next\nbattle!$"
