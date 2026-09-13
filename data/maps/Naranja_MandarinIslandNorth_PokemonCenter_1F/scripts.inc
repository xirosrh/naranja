Naranja_MandarinIslandNorth_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MandarinIslandNorth_PokemonCenter_1F_OnTransition
	.byte 0


Naranja_MandarinIslandNorth_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setrespawn 5
# 10 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD1B
# 11 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_08157365
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_08157365::
# 15 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Nurse::
# 20 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 21 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	call Naranja_SevenGrapefruitIslands_PokemonCenter_1F_EventScript_Sub_0819FD5B
# 22 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Woman1::
# 29 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081825BD, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Woman7::
# 34 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_08182622, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Youngster::
# 39 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081826A6, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Vars::
# 44 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special Script_GetCurrentMauvilleMan
# 45 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 46 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 47 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE784
# 48 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 49 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE845
# 50 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 51 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBAB
# 52 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 53 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0816
# 54 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 55 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B09EB
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE784::
# 60 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	lock
# 61 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	faceplayer
# 62 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0A91, MSGBOX_YESNO
# 63 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 64 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7A5
# 65 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 66 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7C8
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7A5::
# 71 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 72 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special PlayBardSong
# 73 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	delay 0x3C
# 74 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special HasBardSongBeenChanged
# 75 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 76 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7D2
# 77 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0AED, MSGBOX_DEFAULT
# 78 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7C8::
# 83 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0AC3, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7D2::
# 89 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0B2C, MSGBOX_YESNO
# 90 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 91 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7F1
# 92 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 93 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE83B
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7F1::
# 98 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 6
# 99 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 100 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	lock
# 101 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	faceplayer
# 102 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 103 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE83B
# 104 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0BD0, MSGBOX_DEFAULT
# 105 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 106 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special PlayBardSong
# 107 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	delay 0x3C
# 108 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0BFA, MSGBOX_YESNO
# 109 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 110 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE7F1
# 111 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special SaveBardSongLyrics
# 112 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0C23, MSGBOX_DEFAULT
# 113 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE83B::
# 118 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0BA6, MSGBOX_DEFAULT
# 119 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE845::
# 124 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	lock
# 125 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	faceplayer
# 126 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setflag FLAG_NARANJA_MANDARIN_ROUTE_ISLAND_NORTH_EVENT_COMPLETE_0806
# 127 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0C5B, MSGBOX_DEFAULT
# 128 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special HasHipsterTaughtWord
# 129 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 130 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE86A
# 131 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0CA7, MSGBOX_DEFAULT
# 132 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE86A::
# 137 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special HipsterTryTeachWord
# 138 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 139 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE882
# 140 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0D11, MSGBOX_DEFAULT
# 141 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AE882::
# 146 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0D75, MSGBOX_DEFAULT
# 147 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special SetHipsterTaughtWord
# 148 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBAB::
# 153 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	lock
# 154 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	faceplayer
# 155 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE88F, MSGBOX_YESNO
# 156 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 157 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBDA
# 158 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special GetTraderTradedFlag
# 159 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 160 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBE3
# 161 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	message Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE910
# 162 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 163 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBEC
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBDA::
# 167 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE8C6, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBE3::
# 172 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE8DF, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBEC::
# 177 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special TraderMenuGetDecoration
# 178 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitstate
# 179 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 180 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC2D
# 181 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFFFF
# 182 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC36
# 183 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE97C, MSGBOX_YESNO
# 184 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 185 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC42
# 186 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special DoesPlayerHaveNoDecorations
# 187 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 188 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC4E
# 189 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC57
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC2D::
# 193 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE950, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC36::
# 198 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	message Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEB31
# 199 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 200 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBEC
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC42::
# 204 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	message Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE910
# 205 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 206 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEBEC
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC4E::
# 210 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE9B6, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC57::
# 215 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE9F8, MSGBOX_DEFAULT
# 216 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special TraderShowDecorationMenu
# 217 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitstate
# 218 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8006, 0
# 219 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AECA6
# 220 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8006, 0xFFFF
# 221 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AECAF
# 222 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special IsDecorationCategoryFull
# 223 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 224 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AECBD
# 225 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEA9B, MSGBOX_YESNO
# 226 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 227 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC57
# 228 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special TraderDoDecorationTrade
# 229 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEAFB, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AECA6::
# 234 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEA2B, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AECAF::
# 239 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEAC3, MSGBOX_DEFAULT
# 240 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AEC57
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081AECBD::
# 244 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEA57, MSGBOX_NPC
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0816::
# 249 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 250 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8009, 0
# 251 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800A, 0
# 252 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 0
# 253 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	lock
# 254 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	faceplayer
# 255 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AECC6, MSGBOX_YESNO
# 256 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 257 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0914
# 258 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
# 259 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 260 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08D3
# 261 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B084F
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B084F::
# 265 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	message Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AED35
# 266 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 267 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special StorytellerStoryListMenu
# 268 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitstate
# 269 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 270 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0883
# 271 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 272 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special Script_StorytellerDisplayStory
# 273 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 274 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 275 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, StorytellerUpdateStat
# 276 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 277 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0893
# 278 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0909
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0883::
# 282 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 283 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0914
# 284 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08AE
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0893::
# 288 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEE50, MSGBOX_DEFAULT
# 289 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEF0A, MSGBOX_YESNO
# 290 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 291 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B084F
# 292 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08AE
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08AE::
# 296 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
# 297 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 298 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B091F
# 299 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
# 300 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 301 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B091F
# 302 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08DB
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08D3::
# 306 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AED70, MSGBOX_DEFAULT
# 307 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08DB
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B08DB::
# 311 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEEB4, MSGBOX_YESNO
# 312 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 313 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0914
# 314 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
# 315 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 316 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0909
# 317 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEF49, MSGBOX_DEFAULT
# 318 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	closemessage
# 319 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0909::
# 324 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEDE8, MSGBOX_DEFAULT
# 325 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	closemessage
# 326 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0914::
# 331 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AED1D, MSGBOX_DEFAULT
# 332 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	closemessage
# 333 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B091F::
# 338 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEFA5, MSGBOX_DEFAULT
# 339 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	closemessage
# 340 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B09EB::
# 345 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	lock
# 346 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	faceplayer
# 347 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B092A, MSGBOX_YESNO
# 348 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 349 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A0C
# 350 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 351 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A6F
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A0C::
# 356 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special GiddyShouldTellAnotherTale
# 357 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 358 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A4E
# 359 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 360 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A79
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A26::
# 365 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special GiddyShouldTellAnotherTale
# 366 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 367 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A40
# 368 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 369 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A79
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A40::
# 374 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0998, MSGBOX_DEFAULT
# 375 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A4E
	return


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A4E::
# 379 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special GenerateGiddyLine
# 380 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 381 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	waitmessage
# 382 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	yesnobox 0x14, 8
# 383 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 384 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A26
# 385 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 386 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A26
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A6F::
# 391 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B097C, MSGBOX_DEFAULT
# 392 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_EventScript_Sub_081B0A79::
# 397 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	msgbox Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B09B0, MSGBOX_DEFAULT
# 398 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	release
	end


Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081825BD::
# 402 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\nthings!\pHe’s funny in a weird way.\nI doubt I’ll forget about him!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_08182622::
# 406 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\nthe data for what’s hot in DEWFORD\lgot updated.\pNow that bit of data is the same\nas my friend’s!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081826A6::
# 410 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\nthe POKéMON CENTER.\pI don’t know what it’s about, but it\nsounds fun. I’ll go check it out!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE88F::
# 414 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Hi, I’m the TRADER.\nWant to trade decorations with me?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE8C6::
# 418 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oh...\nI feel unwanted...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE8DF::
# 422 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "But we’ve traded decorations already,\nyou and I.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE910::
# 426 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "If you see any decorative item that\nyou want of mine, speak up.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE950::
# 430 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "You don’t want anything?\nI feel unwanted...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE97C::
# 434 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "That decorative item once belonged\nto {STR_VAR_1}.\pDo you want it?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE9B6::
# 438 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Uh... Wait a second. You don’t have a\nsingle piece of decoration!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AE9F8::
# 442 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Okay, pick the decoration that you’ll\ntrade to me.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEA2B::
# 446 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "You won’t trade with me?\nI feel unwanted...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEA57::
# 450 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "You’ve got all the {STR_VAR_2}S that can\nbe stored. You’ve no room for this.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEA9B::
# 454 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Okay, so we’ll trade my {STR_VAR_3}\nfor your {STR_VAR_2}?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEAC3::
# 458 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "That piece of decoration is in use.\nYou can’t trade it.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEAFB::
# 462 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Then we’ll trade!\nI’ll send my decoration to your PC.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEB31::
# 466 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oops! Sorry!\nThat’s a really rare piece of decoration.\lI can’t trade that one away!\pCan I interest you in something else?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AECC6::
# 470 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "I’m the STORYTELLER.\nI’ll tell you tales of legendary\lTRAINERS.\pWill you hear my tale?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AED1D::
# 474 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oh...\nI feel stifled...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AED35::
# 478 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "I know of these legends.\nWhich tale will you have me tell?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AED70::
# 482 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "But, I know of no legendary TRAINERS.\nHence, I know no tales.\pWhere does one find a TRAINER worthy\nof a legendary tale?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEDE8::
# 486 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "What’s that?!\nYou... You...\p{STR_VAR_2}\n{STR_VAR_1} time(s)?!\pThat is indeed magnificent!\nIt’s the birth of a new legend!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEE50::
# 490 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "It gets me thinking, could there be\nother TRAINERS with more impressive\llegends awaiting discovery?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEEB4::
# 494 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Are you a TRAINER?\pThen tell me, have you any tales that\nare even remotely legendary?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEF0A::
# 498 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Incidentally... Would you care to hear\nanother legendary tale?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEF49::
# 502 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Hmm...\nI’m not satisfied...\pI wish you would bring me news worthy\nof being called a legend.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081AEFA5::
# 506 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "I wish more people would be interested\nin hearing my epic tales of legendary\lTRAINERS.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B092A::
# 510 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "I’m GIDDY!\nI have a scintillating story for you!\pWould you like to hear my story?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B097C::
# 514 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oh...\nYou’ve deflated me...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0998::
# 518 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Also, I was thinking...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B09B0::
# 522 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "That’s about it, I think...\pWe should chat again!\nBye-bye!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0A91::
# 526 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Hi, I’m the BARD.\nWould you like to hear my song?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0AC3::
# 530 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oh...\nYou’ve left me feeling the blues...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0AED::
# 534 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oh, what a moving song...\nI wish I could play it for others...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0B2C::
# 538 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "So?\nHow do you like my song?\pBut I’m none too happy about the\nlyrics.\pHow would you like to write some new\nlyrics for me?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0BA6::
# 542 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Oh...\nYou’ve left me feeling the blues...$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0BD0::
# 546 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Thank you kindly!\nLet me sing it for you.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0BFA::
# 550 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Was that how you wanted your song\nto go?$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0C23::
# 554 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Okay! That’s it, then.\nI’ll sing this song for a while.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0C5B::
# 558 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Hey, yo! They call me the HIPSTER.\nI’ll teach you what’s hip and happening.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0CA7::
# 562 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "But, hey, I taught you what’s hip and\nhappening already.\pI’d like to spread the good word to\nother folks.$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0D11::
# 566 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "But, hey, you already know a lot about\nwhat’s hip and happening.\pI’ve got nothing new to teach you!$"

Naranja_MandarinIslandNorth_PokemonCenter_1F_Text_081B0D75::
# 570 "data/maps/Naranja_MandarinIslandNorth_PokemonCenter_1F/scripts.pory"
	.string "Hey, have you heard about\n“{STR_VAR_1}”?\pWhat’s it mean? Well...\nAsk your daddy or mommy, okay?$"
