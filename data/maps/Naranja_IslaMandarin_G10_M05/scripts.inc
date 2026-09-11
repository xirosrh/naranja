Naranja_IslaMandarin_G10_M05_MapScripts::
# 5 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMandarin_G10_M05_OnTransition
	.byte 0


Naranja_IslaMandarin_G10_M05_OnTransition::
# 9 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setrespawn 5
# 10 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
# 11 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_08157365
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_08157365::
# 15 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special SetMauvilleOldManObjEventGfx
	end


Naranja_IslaMandarin_G10_M05_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 20 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x800B, 1
# 21 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 22 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 23 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_OBJ_EVENT_GFX_WOMAN_1_LocalId3::
# 29 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081825BD
# 30 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId4::
# 35 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_08182622
# 36 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId5::
# 41 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081826A6
# 42 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_OBJ_EVENT_GFX_VARS_LocalId2::
# 47 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special Script_GetCurrentMauvilleMan
# 48 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 49 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 50 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE784
# 51 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 52 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE845
# 53 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 54 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBAB
# 55 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 56 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0816
# 57 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 58 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B09EB
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE784::
# 63 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	lock
# 64 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	faceplayer
# 65 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0A91
# 66 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 67 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 68 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7A5
# 69 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 70 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7C8
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7A5::
# 75 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x8004, 0
# 76 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special PlayBardSong
# 77 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	delay 0x3C
# 78 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special HasBardSongBeenChanged
# 79 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 80 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7D2
# 81 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0AED
# 82 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7C8::
# 88 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0AC3
# 89 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7D2::
# 95 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0B2C
# 96 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 97 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 98 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7F1
# 99 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 100 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE83B
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7F1::
# 105 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x8004, 6
# 106 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 107 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	lock
# 108 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	faceplayer
# 109 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 110 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE83B
# 111 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0BD0
# 112 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 113 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x8004, 1
# 114 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special PlayBardSong
# 115 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	delay 0x3C
# 116 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0BFA
# 117 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 118 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 119 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE7F1
# 120 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special SaveBardSongLyrics
# 121 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0C23
# 122 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 123 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE83B::
# 128 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0BA6
# 129 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 130 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE845::
# 135 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	lock
# 136 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	faceplayer
# 137 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0806
# 138 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0C5B
# 139 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 140 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special HasHipsterTaughtWord
# 141 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 142 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE86A
# 143 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0CA7
# 144 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE86A::
# 150 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special HipsterTryTeachWord
# 151 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 152 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE882
# 153 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0D11
# 154 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 155 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AE882::
# 160 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0D75
# 161 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 162 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special SetHipsterTaughtWord
# 163 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBAB::
# 168 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	lock
# 169 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	faceplayer
# 170 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE88F
# 171 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 172 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 173 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBDA
# 174 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special GetTraderTradedFlag
# 175 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 176 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBE3
# 177 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	message Naranja_IslaMandarin_G10_M05_Text_081AE910
# 178 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 179 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBEC
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBDA::
# 183 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE8C6
# 184 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBE3::
# 189 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE8DF
# 190 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBEC::
# 195 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special TraderMenuGetDecoration
# 196 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitstate
# 197 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8004, 0
# 198 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC2D
# 199 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFFFF
# 200 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC36
# 201 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE97C
# 202 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 203 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 204 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC42
# 205 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special DoesPlayerHaveNoDecorations
# 206 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 207 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC4E
# 208 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC57
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC2D::
# 212 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE950
# 213 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC36::
# 218 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	message Naranja_IslaMandarin_G10_M05_Text_081AEB31
# 219 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 220 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBEC
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC42::
# 224 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	message Naranja_IslaMandarin_G10_M05_Text_081AE910
# 225 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 226 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEBEC
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC4E::
# 230 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE9B6
# 231 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC57::
# 236 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AE9F8
# 237 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 238 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special TraderShowDecorationMenu
# 239 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitstate
# 240 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8006, 0
# 241 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AECA6
# 242 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8006, 0xFFFF
# 243 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AECAF
# 244 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special IsDecorationCategoryFull
# 245 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 246 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AECBD
# 247 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEA9B
# 248 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 249 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 250 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC57
# 251 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special TraderDoDecorationTrade
# 252 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEAFB
# 253 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AECA6::
# 258 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEA2B
# 259 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AECAF::
# 264 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEAC3
# 265 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 266 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AEC57
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081AECBD::
# 270 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEA57
# 271 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0816::
# 276 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x8008, 0
# 277 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x8009, 0
# 278 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x800A, 0
# 279 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x800B, 0
# 280 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	lock
# 281 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	faceplayer
# 282 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AECC6
# 283 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 284 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 285 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0914
# 286 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
# 287 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 288 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08D3
# 289 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B084F
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B084F::
# 293 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	message Naranja_IslaMandarin_G10_M05_Text_081AED35
# 294 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 295 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special StorytellerStoryListMenu
# 296 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitstate
# 297 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 298 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0883
# 299 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	setvar VAR_0x8008, 1
# 300 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special Script_StorytellerDisplayStory
# 301 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 302 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitbuttonpress
# 303 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	specialvar VAR_RESULT, StorytellerUpdateStat
# 304 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 305 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0893
# 306 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0909
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0883::
# 310 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 311 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0914
# 312 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08AE
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0893::
# 316 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEE50
# 317 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 318 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEF0A
# 319 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 320 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 321 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B084F
# 322 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08AE
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08AE::
# 326 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
# 327 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 328 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B091F
# 329 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
# 330 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 331 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B091F
# 332 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08DB
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08D3::
# 336 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AED70
# 337 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 338 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08DB
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B08DB::
# 342 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEEB4
# 343 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 344 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 345 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0914
# 346 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
# 347 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 348 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0909
# 349 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEF49
# 350 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 351 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	closemessage
# 352 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0909::
# 357 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEDE8
# 358 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 359 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	closemessage
# 360 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0914::
# 365 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AED1D
# 366 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 367 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	closemessage
# 368 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B091F::
# 373 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081AEFA5
# 374 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 375 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	closemessage
# 376 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B09EB::
# 381 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	lock
# 382 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	faceplayer
# 383 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B092A
# 384 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 5
# 385 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 386 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A0C
# 387 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 388 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A6F
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A0C::
# 393 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special GiddyShouldTellAnotherTale
# 394 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 395 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A4E
# 396 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 397 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A79
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A26::
# 402 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special GiddyShouldTellAnotherTale
# 403 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 404 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A40
# 405 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 406 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A79
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A40::
# 411 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B0998
# 412 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 413 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A4E
	return


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A4E::
# 417 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special GenerateGiddyLine
# 418 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	special ShowFieldMessageStringVar4
# 419 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	waitmessage
# 420 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	yesnobox 0x14, 8
# 421 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 422 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A26
# 423 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 424 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A26
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A6F::
# 429 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B097C
# 430 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 431 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_EventScript_Sub_081B0A79::
# 436 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M05_Text_081B09B0
# 437 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	callstd 4
# 438 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M05_Text_081825BD::
# 442 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "That man over there, he says weird\nthings!\pHe’s funny in a weird way.\nI doubt I’ll forget about him!$"

Naranja_IslaMandarin_G10_M05_Text_08182622::
# 446 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "When I accessed the RECORD CORNER,\nthe data for what’s hot in DEWFORD\lgot updated.\pNow that bit of data is the same\nas my friend’s!$"

Naranja_IslaMandarin_G10_M05_Text_081826A6::
# 450 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\nthe POKéMON CENTER.\pI don’t know what it’s about, but it\nsounds fun. I’ll go check it out!$"

Naranja_IslaMandarin_G10_M05_Text_081AE88F::
# 454 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Hi, I’m the TRADER.\nWant to trade decorations with me?$"

Naranja_IslaMandarin_G10_M05_Text_081AE8C6::
# 458 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oh...\nI feel unwanted...$"

Naranja_IslaMandarin_G10_M05_Text_081AE8DF::
# 462 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "But we’ve traded decorations already,\nyou and I.$"

Naranja_IslaMandarin_G10_M05_Text_081AE910::
# 466 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "If you see any decorative item that\nyou want of mine, speak up.$"

Naranja_IslaMandarin_G10_M05_Text_081AE950::
# 470 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "You don’t want anything?\nI feel unwanted...$"

Naranja_IslaMandarin_G10_M05_Text_081AE97C::
# 474 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "That decorative item once belonged\nto {STR_VAR_1}.\pDo you want it?$"

Naranja_IslaMandarin_G10_M05_Text_081AE9B6::
# 478 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Uh... Wait a second. You don’t have a\nsingle piece of decoration!$"

Naranja_IslaMandarin_G10_M05_Text_081AE9F8::
# 482 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Okay, pick the decoration that you’ll\ntrade to me.$"

Naranja_IslaMandarin_G10_M05_Text_081AEA2B::
# 486 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "You won’t trade with me?\nI feel unwanted...$"

Naranja_IslaMandarin_G10_M05_Text_081AEA57::
# 490 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "You’ve got all the {STR_VAR_2}S that can\nbe stored. You’ve no room for this.$"

Naranja_IslaMandarin_G10_M05_Text_081AEA9B::
# 494 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Okay, so we’ll trade my {STR_VAR_3}\nfor your {STR_VAR_2}?$"

Naranja_IslaMandarin_G10_M05_Text_081AEAC3::
# 498 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "That piece of decoration is in use.\nYou can’t trade it.$"

Naranja_IslaMandarin_G10_M05_Text_081AEAFB::
# 502 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Then we’ll trade!\nI’ll send my decoration to your PC.$"

Naranja_IslaMandarin_G10_M05_Text_081AEB31::
# 506 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oops! Sorry!\nThat’s a really rare piece of decoration.\lI can’t trade that one away!\pCan I interest you in something else?$"

Naranja_IslaMandarin_G10_M05_Text_081AECC6::
# 510 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "I’m the STORYTELLER.\nI’ll tell you tales of legendary\lTRAINERS.\pWill you hear my tale?$"

Naranja_IslaMandarin_G10_M05_Text_081AED1D::
# 514 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oh...\nI feel stifled...$"

Naranja_IslaMandarin_G10_M05_Text_081AED35::
# 518 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "I know of these legends.\nWhich tale will you have me tell?$"

Naranja_IslaMandarin_G10_M05_Text_081AED70::
# 522 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "But, I know of no legendary TRAINERS.\nHence, I know no tales.\pWhere does one find a TRAINER worthy\nof a legendary tale?$"

Naranja_IslaMandarin_G10_M05_Text_081AEDE8::
# 526 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "What’s that?!\nYou... You...\p{STR_VAR_2}\n{STR_VAR_1} time(s)?!\pThat is indeed magnificent!\nIt’s the birth of a new legend!$"

Naranja_IslaMandarin_G10_M05_Text_081AEE50::
# 530 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "It gets me thinking, could there be\nother TRAINERS with more impressive\llegends awaiting discovery?$"

Naranja_IslaMandarin_G10_M05_Text_081AEEB4::
# 534 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Are you a TRAINER?\pThen tell me, have you any tales that\nare even remotely legendary?$"

Naranja_IslaMandarin_G10_M05_Text_081AEF0A::
# 538 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Incidentally... Would you care to hear\nanother legendary tale?$"

Naranja_IslaMandarin_G10_M05_Text_081AEF49::
# 542 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Hmm...\nI’m not satisfied...\pI wish you would bring me news worthy\nof being called a legend.$"

Naranja_IslaMandarin_G10_M05_Text_081AEFA5::
# 546 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "I wish more people would be interested\nin hearing my epic tales of legendary\lTRAINERS.$"

Naranja_IslaMandarin_G10_M05_Text_081B092A::
# 550 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "I’m GIDDY!\nI have a scintillating story for you!\pWould you like to hear my story?$"

Naranja_IslaMandarin_G10_M05_Text_081B097C::
# 554 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oh...\nYou’ve deflated me...$"

Naranja_IslaMandarin_G10_M05_Text_081B0998::
# 558 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Also, I was thinking...$"

Naranja_IslaMandarin_G10_M05_Text_081B09B0::
# 562 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "That’s about it, I think...\pWe should chat again!\nBye-bye!$"

Naranja_IslaMandarin_G10_M05_Text_081B0A91::
# 566 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Hi, I’m the BARD.\nWould you like to hear my song?$"

Naranja_IslaMandarin_G10_M05_Text_081B0AC3::
# 570 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oh...\nYou’ve left me feeling the blues...$"

Naranja_IslaMandarin_G10_M05_Text_081B0AED::
# 574 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oh, what a moving song...\nI wish I could play it for others...$"

Naranja_IslaMandarin_G10_M05_Text_081B0B2C::
# 578 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "So?\nHow do you like my song?\pBut I’m none too happy about the\nlyrics.\pHow would you like to write some new\nlyrics for me?$"

Naranja_IslaMandarin_G10_M05_Text_081B0BA6::
# 582 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Oh...\nYou’ve left me feeling the blues...$"

Naranja_IslaMandarin_G10_M05_Text_081B0BD0::
# 586 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Thank you kindly!\nLet me sing it for you.$"

Naranja_IslaMandarin_G10_M05_Text_081B0BFA::
# 590 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Was that how you wanted your song\nto go?$"

Naranja_IslaMandarin_G10_M05_Text_081B0C23::
# 594 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Okay! That’s it, then.\nI’ll sing this song for a while.$"

Naranja_IslaMandarin_G10_M05_Text_081B0C5B::
# 598 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Hey, yo! They call me the HIPSTER.\nI’ll teach you what’s hip and happening.$"

Naranja_IslaMandarin_G10_M05_Text_081B0CA7::
# 602 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "But, hey, I taught you what’s hip and\nhappening already.\pI’d like to spread the good word to\nother folks.$"

Naranja_IslaMandarin_G10_M05_Text_081B0D11::
# 606 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "But, hey, you already know a lot about\nwhat’s hip and happening.\pI’ve got nothing new to teach you!$"

Naranja_IslaMandarin_G10_M05_Text_081B0D75::
# 610 "data/maps/Naranja_IslaMandarin_G10_M05/scripts.pory"
	.string "Hey, have you heard about\n“{STR_VAR_1}”?\pWhat’s it mean? Well...\nAsk your daddy or mommy, okay?$"
