Naranja_BattleTower_Lobby_MapScripts::
# 5 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_BattleTower_Lobby_OnResume
# 6 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_BattleTower_Lobby_OnTransition
# 7 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_BattleTower_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 14 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_BattleTower_Lobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_BattleTower_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Naranja_BattleTower_Lobby_OnFrame_1
# 9 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, Naranja_BattleTower_Lobby_OnFrame_2
# 10 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 2, Naranja_BattleTower_Lobby_OnFrame_3
# 11 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 3, Naranja_BattleTower_Lobby_OnFrame_4
# 12 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 4, Naranja_BattleTower_Lobby_OnFrame_5
	.2byte 0

Naranja_BattleTower_Lobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_BattleTower_Lobby_OnWarp_1
	.2byte 0


Naranja_BattleTower_Lobby_OnResume::
# 20 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special TryHideBattleTowerReporter
# 21 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_BattleTower_Lobby_EventScript_Sub_0816029C
	end


Naranja_BattleTower_Lobby_EventScript_Sub_0816029C::
# 26 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xA
# 27 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 28 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_00EE
# 29 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081602E4
# 30 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_00ED
# 31 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081602CD
# 32 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	specialvar VAR_0x8007, GetBattleTowerSinglesStreak
# 33 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8007, 0x32
# 34 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if LESS_THAN, Naranja_BattleTower_Lobby_EventScript_Sub_081602E4
# 35 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_PALLET_TOWN_G26_M05_MAN_2
# 36 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special TryInitBattleTowerAwardManObjectEvent
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081602CD::
# 41 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	specialvar VAR_0x8007, GetBattleTowerSinglesStreak
# 42 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8007, 0x64
# 43 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if LESS_THAN, Naranja_BattleTower_Lobby_EventScript_Sub_081602E4
# 44 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_PALLET_TOWN_G26_M05_MAN_2
# 45 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special TryInitBattleTowerAwardManObjectEvent
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081602E4::
# 50 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setflag FLAG_HIDE_NARANJA_PALLET_TOWN_G26_M05_MAN_2
	return


Naranja_BattleTower_Lobby_OnTransition::
# 55 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_BattleTower_Lobby_EventScript_Sub_081AE2ED
	end


Naranja_BattleTower_Lobby_OnWarp_1::
# 60 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 61 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


Naranja_BattleTower_Lobby_OnFrame_1::
# 66 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallFrontierUtilFunc
	end


Naranja_BattleTower_Lobby_OnFrame_2::
# 71 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 72 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A3FD, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 75 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 5
# 76 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_OnFrame_3::
# 81 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 82 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 83 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A487
# 84 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 85 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 86 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleFactoryFunction
# 87 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 88 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816037D
# 89 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallSlateportTentFunction
# 90 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 91 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816037D
# 92 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A6BE
# 93 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 94 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitfanfare
# 96 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A719, MSGBOX_DEFAULT
# 97 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_0816037D
	return


Naranja_BattleTower_Lobby_EventScript_Sub_0816037D::
# 101 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 8
# 102 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleFactoryFunction
# 103 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 104 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081603AD
# 105 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A589
# 106 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 107 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xD
# 108 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 109 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallVerdanturfTentFunction
# 110 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 3
# 111 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattlePyramidFunction
# 112 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	playse SE_SAVE
# 113 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitse
# 114 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_081603AD
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081603AD::
# 118 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 119 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 3
# 120 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 121 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A4BB
# 122 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 123 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallFallarborTentFunction
# 124 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 125 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 126 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160408
# 127 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A506
# 128 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 129 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitfanfare
# 131 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 9
# 132 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleFactoryFunction
# 133 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0x31
# 134 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if NOT_EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081603F8
# 135 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A617, MSGBOX_DEFAULT
# 136 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_081603F8
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081603F8::
# 140 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_08199FA9, MSGBOX_DEFAULT
# 141 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 142 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 5
# 143 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_08160408::
# 148 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A520, MSGBOX_DEFAULT
# 149 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 150 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 151 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 5
# 152 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_OnFrame_4::
# 157 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 158 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 159 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A571
# 160 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 161 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A589
# 162 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 163 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xD
# 164 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 165 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 166 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattlePyramidFunction
# 167 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	playse SE_SAVE
# 168 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitse
# 169 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_08199FA9, MSGBOX_DEFAULT
# 170 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 171 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 5
# 172 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_OnFrame_5::
# 177 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 178 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 179 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_NARANJA_NARANJA_PALLET_TOWN_EVENT_STATE_6, 1
# 180 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A5B1
# 181 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 182 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A5CE
# 183 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 184 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 1
# 185 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattlePyramidFunction
# 186 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	playse SE_SAVE
# 187 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitse
# 188 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 8
# 189 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 0
# 190 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 191 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 5
# 192 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special SavePlayerParty
# 193 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattlePikeFunction
# 194 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A0A8, MSGBOX_DEFAULT
# 195 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 196 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_BattleTower_Lobby_EventScript_Sub_08160664
# 197 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	warp MAP_NARANJA_BATTLE_TOWER_ELEVATOR, 0xFF, 1, 6
# 198 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 199 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitstate
# 200 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Teala
	return


Naranja_BattleTower_Lobby_EventScript_Teala::
# 204 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 205 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 206 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 207 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleFactoryFunction
# 208 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 209 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_OnFrame_3
# 210 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special SavePlayerParty
# 211 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_08199F2C, MSGBOX_DEFAULT
# 212 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_081604BE
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081604BE::
# 216 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_08199F79
# 217 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 218 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	multichoice 0xF, 6, 0x17, 0
# 219 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 220 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 221 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081604FA
# 222 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 223 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160600
# 224 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 225 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160652
# 226 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 227 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160652
# 228 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_081604FA
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081604FA::
# 232 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_0819A024
# 233 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 234 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	multichoice 0x12, 6, 0x18, 0
# 235 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 236 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 237 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160652
# 238 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 239 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160652
# 240 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleDomeFunction
# 241 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8004, 1
# 242 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816060D
# 243 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 1
# 244 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 245 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 246 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 247 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A07B, MSGBOX_DEFAULT
# 248 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	fadescreen 1
# 249 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 250 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitstate
# 251 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 252 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816064F
# 253 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_08199FDA, MSGBOX_YESNO
# 254 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 255 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 256 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816064F
# 257 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 258 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160587
# 259 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 260 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816064F
# 261 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160587
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160587::
# 265 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 5
# 266 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 267 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 268 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xB
# 269 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 270 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 271 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 1
# 272 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 273 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 8
# 274 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 0
# 275 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 276 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special LoadPlayerParty
# 277 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 278 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	delay 2
# 279 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_BattleTower_Lobby_EventScript_Sub_0819F806
# 280 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 5
# 281 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 282 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 283 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160642
# 284 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	incrementgamestat 0x1E
# 285 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special SavePlayerParty
# 286 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattlePikeFunction
# 287 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_NARANJA_NARANJA_PALLET_TOWN_EVENT_STATE_6, 1
# 288 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A0A8, MSGBOX_DEFAULT
# 289 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closemessage
# 290 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_BattleTower_Lobby_EventScript_Sub_08160664
# 291 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	warp MAP_NARANJA_BATTLE_TOWER_ELEVATOR, 0xFF, 1, 6
# 292 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 293 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitstate
# 294 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160600
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160600::
# 298 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A0D1, MSGBOX_DEFAULT
# 299 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_081604BE
	return


Naranja_BattleTower_Lobby_EventScript_Sub_0816060D::
# 303 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 304 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 305 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160628
# 306 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 307 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160635
# 308 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160628
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160628::
# 312 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A249, MSGBOX_DEFAULT
# 313 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160662
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160635::
# 317 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A32D, MSGBOX_DEFAULT
# 318 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160662
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160642::
# 322 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xC
# 323 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 324 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160652
	return


Naranja_BattleTower_Lobby_EventScript_Sub_0816064F::
# 328 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special LoadPlayerParty
# 329 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160652
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160652::
# 333 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_08199FA9, MSGBOX_DEFAULT
# 334 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xB
# 335 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special CallBattleArenaFunction
# 336 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_BattleTower_Lobby_EventScript_Sub_08160662
	return


Naranja_BattleTower_Lobby_EventScript_Sub_08160662::
# 340 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_08160664::
# 345 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_LOBBY_TEALA, Naranja_BattleTower_Lobby_Movement_08160693
# 346 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_Lobby_Movement_08160693
# 347 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmovement LOCALID_NONE
# 348 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	opendoor 6, 1
# 349 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitdooranim
# 350 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_LOBBY_TEALA, Naranja_BattleTower_Lobby_Movement_08160697
# 351 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_Lobby_Movement_0816069A
# 352 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmovement LOCALID_NONE
# 353 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	closedoor 6, 1
# 354 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitdooranim
	return


Naranja_BattleTower_Lobby_EventScript_Man5::
# 359 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 360 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 361 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A747, MSGBOX_YESNO
# 362 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 363 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 364 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081606CC
# 365 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 366 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081606F7
# 367 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081606CC::
# 372 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A7C3, MSGBOX_DEFAULT
# 373 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 1
# 374 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 375 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 376 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 377 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 378 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160701
# 379 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 380 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_0816070B
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081606F7::
# 385 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A7FD, MSGBOX_DEFAULT
# 386 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_08160701::
# 391 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A83D, MSGBOX_DEFAULT
# 392 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_0816070B::
# 397 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A871, MSGBOX_DEFAULT
# 398 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Woman7::
# 403 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A8AE, MSGBOX_NPC
	end


Naranja_BattleTower_Lobby_EventScript_Boy1::
# 408 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A946, MSGBOX_NPC
	end


Naranja_BattleTower_Lobby_EventScript_Sign_1::
# 413 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lockall
# 414 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special FadeOutOrbEffect
# 415 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitbuttonpress
# 416 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 417 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	releaseall
	end


Naranja_BattleTower_Lobby_EventScript_Man2::
# 422 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 423 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 424 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_00EE
# 425 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081607C5
# 426 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	checkflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_00ED
# 427 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_08160773
# 428 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819A9EE, MSGBOX_DEFAULT
# 429 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8008, 0x2A
# 430 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2A
# 431 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	callstd 7
# 432 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 433 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081607AF
# 434 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_00ED
# 435 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819ABAA, MSGBOX_DEFAULT
# 436 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_08160773::
# 441 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	specialvar VAR_RESULT, GetBattleTowerSinglesStreak
# 442 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0x64
# 443 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if LESS_THAN, Naranja_BattleTower_Lobby_EventScript_Sub_081607C5
# 444 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819AAC4, MSGBOX_DEFAULT
# 445 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8008, 0x2B
# 446 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setorcopyvar VAR_0x8000, 0x2B
# 447 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	callstd 7
# 448 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 449 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081607AF
# 450 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_00EE
# 451 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819ABAA, MSGBOX_DEFAULT
# 452 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081607AF::
# 457 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	bufferdecorationname 1, 0x8008
# 458 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_NewIsland_House6_Text_081A0CEF, MSGBOX_DEFAULT
# 459 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819ABED, MSGBOX_DEFAULT
# 460 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081607C5::
# 465 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_0819AC55, MSGBOX_DEFAULT
# 466 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_0819F806::
# 471 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special SaveGame
# 472 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitstate
	return


Naranja_BattleTower_Lobby_EventScript_ReporterF::
# 477 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 478 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 479 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	checkflag FLAG_TEMP_2
# 480 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2E3
# 481 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 7
# 482 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special InterviewBefore
# 483 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 484 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2E3
# 485 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 486 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A776D, MSGBOX_YESNO
# 487 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 488 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE241
# 489 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 490 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE297
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081AE241::
# 495 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	message Naranja_BattleTower_Lobby_Text_081A7823
# 496 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	waitmessage
# 497 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	multichoice 0x13, 8, 0x2D, 1
# 498 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 499 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 500 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2A1
# 501 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 502 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2AA
# 503 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A79EB, MSGBOX_DEFAULT
# 504 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8004, 0xC
# 505 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 506 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 507 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	lock
# 508 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	faceplayer
# 509 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 510 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2B3
# 511 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 512 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2D9
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081AE297::
# 517 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A78B7, MSGBOX_DEFAULT
# 518 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081AE2A1::
# 523 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A791B, MSGBOX_DEFAULT
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081AE2AA::
# 528 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A7990, MSGBOX_DEFAULT
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081AE2B3::
# 533 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 534 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE2D9
# 535 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A7A6E, MSGBOX_DEFAULT
# 536 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setflag FLAG_TEMP_2
# 537 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 538 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 7
# 539 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081ADE46
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081AE2D9::
# 543 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A7AE0, MSGBOX_DEFAULT
# 544 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081AE2E3::
# 549 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	msgbox Naranja_BattleTower_Lobby_Text_081A7B66, MSGBOX_DEFAULT
# 550 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	release
	end


Naranja_BattleTower_Lobby_EventScript_Sub_081AE2ED::
# 555 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_NARANJA_NARANJA_PALLET_TOWN_EVENT_STATE_6, 0
# 556 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE30F
# 557 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setvar VAR_0x8005, 7
# 558 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	special InterviewBefore
# 559 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 560 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Lobby_EventScript_Sub_081AE30F
# 561 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_PALLET_TOWN_G26_M05_REPORTER_F
	return


Naranja_BattleTower_Lobby_EventScript_Sub_081AE30F::
# 566 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	setflag FLAG_HIDE_NARANJA_PALLET_TOWN_G26_M05_REPORTER_F
	return


# 570 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
Naranja_BattleTower_Lobby_Movement_08160693:
# 571 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	walk_up
# 572 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	walk_up
# 573 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	walk_up
	step_end

# 576 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
Naranja_BattleTower_Lobby_Movement_08160697:
# 577 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	walk_up
# 578 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	set_invisible
	step_end

# 581 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
Naranja_BattleTower_Lobby_Movement_0816069A:
# 582 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	walk_up
# 583 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	walk_up
# 584 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	set_invisible
	step_end

Naranja_BattleTower_Lobby_Text_08199F2C::
# 587 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\pPlease register with me to enter\na BATTLE ROOM.$"

Naranja_BattleTower_Lobby_Text_08199F79::
# 591 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Would you like to make a BATTLE ROOM\nchallenge?$"

Naranja_BattleTower_Lobby_Text_08199FA9::
# 595 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "We’ll be looking forward to your\nnext challenge.$"

Naranja_BattleTower_Lobby_Text_08199FDA::
# 599 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\nprogress must be saved. Is that okay?$"

Naranja_BattleTower_Lobby_Text_0819A024::
# 603 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "There are two BATTLE ROOMS,\nLevel 50 and Level 100.\lWhich would you like to challenge?$"

Naranja_BattleTower_Lobby_Text_0819A07B::
# 607 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Please select the POKéMON you wish\nto enter.$"

Naranja_BattleTower_Lobby_Text_0819A0A8::
# 611 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "I’ll direct you to your BATTLE ROOM now.$"

Naranja_BattleTower_Lobby_Text_0819A0D1::
# 615 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "The BATTLE TOWER is a facility made\nespecially for POKéMON battles.\pWithin the TOWER are many BATTLE ROOMS.\pIn each BATTLE ROOM, seven TRAINERS\nawait your challenge.\pBeat all seven, and you will be rewarded\nwith a fabulous prize.\pYou may also take a break from your\nchallenge by saving your progress.\pMake sure you save properly or you\nwon’t be able to resume your challenge.$"

Naranja_BattleTower_Lobby_Text_0819A249::
# 619 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Excuse me!\pYou don’t have three eligible POKéMON.\pYou must have three different POKéMON\nof Level 50 or less to enter.\pThey also must be holding different\nkinds of items.\pEGGS{STR_VAR_1} ineligible.\pPlease come see me when you are ready.$"

Naranja_BattleTower_Lobby_Text_0819A32D::
# 623 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Excuse me!\pYou don’t have three eligible POKéMON.\pYou must have three different POKéMON\nto enter.\pThey also must be holding different\nkinds of items.\pEGGS{STR_VAR_1} ineligible.\pPlease come see me when you are ready.$"

Naranja_BattleTower_Lobby_Text_0819A3FD::
# 627 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Excuse me!\pYou didn’t save before you quit your\nchallenge last time.\pBecause of that, your challenge so far\nhas been disqualified. Sorry!$"

Naranja_BattleTower_Lobby_Text_0819A487::
# 631 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Congratulations!\nYou’ve beaten all seven TRAINERS!\p$"

Naranja_BattleTower_Lobby_Text_0819A4BB::
# 635 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "For beating seven TRAINERS in a row,\nyou have earned this fabulous prize!\p$"

Naranja_BattleTower_Lobby_Text_0819A506::
# 639 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "{PLAYER} received the prize\n{STR_VAR_1}.$"

Naranja_BattleTower_Lobby_Text_0819A520::
# 643 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\pPlease make room in your BAG, then come\nsee me.$"

Naranja_BattleTower_Lobby_Text_0819A571::
# 647 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Thank you for playing!\p$"

Naranja_BattleTower_Lobby_Text_0819A589::
# 651 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Your record will be saved.\nPlease wait.$"

Naranja_BattleTower_Lobby_Text_0819A5B1::
# 655 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "We’ve been waiting for you!\p$"

Naranja_BattleTower_Lobby_Text_0819A5CE::
# 659 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\nprogress will be saved. Please wait.$"

Naranja_BattleTower_Lobby_Text_0819A617::
# 663 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "You’re finally about to face the\n50th TRAINER.\pFrom here on, every time you beat seven\nTRAINERS in a row, your POKéMON will\lreceive a commemorative RIBBON.\pGood luck!$"

Naranja_BattleTower_Lobby_Text_0819A6BE::
# 667 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Here are some RIBBONS for beating\nseven tough TRAINERS in a row.\p{PLAYER} received some RIBBONS!$"

Naranja_BattleTower_Lobby_Text_0819A719::
# 671 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "{PLAYER} put the RIBBONS on the\nchallenger POKéMON.$"

Naranja_BattleTower_Lobby_Text_0819A747::
# 675 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Hello, hello!\nYou’re going to battle here, right?\pCan you tell me what’s going through\nyour mind as you prepare for battle?$"

Naranja_BattleTower_Lobby_Text_0819A7C3::
# 679 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, wow, you’ll tell me?\nGreat! Then, what’s your answer?$"

Naranja_BattleTower_Lobby_Text_0819A7FD::
# 683 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, so you don’t think much about it?\nYou’re one cool customer.$"

Naranja_BattleTower_Lobby_Text_0819A83D::
# 687 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Hunh? You changed your mind?\nI guess you’re fickle.$"

Naranja_BattleTower_Lobby_Text_0819A871::
# 691 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Okay, so that’s how you feel?\nThat’s quite original.\pThanks!$"

Naranja_BattleTower_Lobby_Text_0819A8AE::
# 695 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "The number of matches you win in a row\nis recorded.\pThe record is posted beside the\nregistration counter.\pIt’s also on the back of your\nTRAINER’S CARD.$"

Naranja_BattleTower_Lobby_Text_0819A946::
# 699 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Once you’ve entered the BATTLE TOWER,\nyou can’t leave until you either lose\lor you beat seven TRAINERS in a row.\pYou’d best be certain that you’re up\nto the challenge.$"

Naranja_BattleTower_Lobby_Text_0819A9EE::
# 703 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Hahahaha! Pure magnificence!\nPure magnificence indeed!\pDo you realize what you’ve achieved?\nYou’ve beaten 50 TRAINERS in a row!\pYes, purely magnificent!\pAs the OWNER of the BATTLE TOWER,\nlet me give you a memento!$"

Naranja_BattleTower_Lobby_Text_0819AAC4::
# 707 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Wahahaha! Pure magnificence!\nAbsolutely pure magnificence indeed!\pDo you realize what you’ve achieved?\nYou’ve beaten 100 TRAINERS in a row!\pYes, absolutely magnificent!\pAs the OWNER of the BATTLE TOWER,\nlet me give you a memento!$"

Naranja_BattleTower_Lobby_Text_0819ABAA::
# 711 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "I suggest you keep it displayed.\nIt will surely attract attention.$"

Naranja_BattleTower_Lobby_Text_0819ABED::
# 715 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh?\nYour PC has no room for this...\pBut it would be a shame to waste this...\nPlease come back for this!$"

Naranja_BattleTower_Lobby_Text_0819AC55::
# 719 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "I’m overwhelmed with satisfaction after\nseeing your magnificent performance.\pIt makes the building of the BATTLE\nTOWER all worthwhile!$"

Naranja_BattleTower_Lobby_Text_081A776D::
# 723 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Hello! You’re the TRAINER who just had\na battle, right?\pI’m gathering interviews with TRAINERS\nall over the place.\pMay I get a few words from you about\nyour impressions on battling?$"

Naranja_BattleTower_Lobby_Text_081A7823::
# 727 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "You will? Really?\nThank you!\lThen, uh...\pHow did things turn out in the BATTLE\nTOWER today?\pWere you satisfied with the battle?\nOr are you unhappy?$"

Naranja_BattleTower_Lobby_Text_081A78B7::
# 731 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh...\nSorry we disturbed you.\pPlease give us an interview the next\ntime you visit the BATTLE TOWER.$"

Naranja_BattleTower_Lobby_Text_081A791B::
# 735 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Well, of course!\pThat unmistakable look of satisfaction\non your face...\pIt’s obvious that you’ve had a great\nbattle.$"

Naranja_BattleTower_Lobby_Text_081A7990::
# 739 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, I see...\pWell, it certainly is difficult to make a\nbattle turn out exactly as planned.$"

Naranja_BattleTower_Lobby_Text_081A79EB::
# 743 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, oh, may I ask one more question?\pIf you were to describe your\nimpressions about this battle with one\lsaying, what would it be?$"

Naranja_BattleTower_Lobby_Text_081A7A6E::
# 747 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, that is stunningly cool!\pThat’s a great line!\nI hope you’ll do great next time, too.\pI hope to see you again!$"

Naranja_BattleTower_Lobby_Text_081A7AE0::
# 751 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "Oh, I see...\pStill, being the silent type is also cool,\nisn’t it?\pI hope you’ll give me the opportunity to\nshare your thoughts again!$"

Naranja_BattleTower_Lobby_Text_081A7B66::
# 755 "data/maps/Naranja_BattleTower_Lobby/scripts.pory"
	.string "I’ll be looking forward to your next\nbattle!$"
