Naranja_IslaKumquat_G13_M10_MapScripts::
# 5 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaKumquat_G13_M10_OnTransition
	.byte 0


Naranja_IslaKumquat_G13_M10_OnTransition::
# 9 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	setescapewarp MAP_NARANJA_ISLA_KUMQUAT_G00_M05, 0xFF, 0xC, 0x21
	end


Naranja_IslaKumquat_G13_M10_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId1::
# 14 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkitem ITEM_EON_TICKET, 1
# 17 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 18 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599EE
# 19 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598BA
	return


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598BA::
# 23 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 24 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598CD
# 25 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B306
# 26 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598CD::
# 32 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B36F
# 33 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 35 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_08159929
# 37 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	message Naranja_IslaKumquat_G13_M10_Text_0818B406
# 38 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmessage
# 39 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598F1
	return


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598F1::
# 43 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	multichoicedefault 0x12, 6, 0x38, 2, 0
# 44 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 45 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 46 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_08159933
# 47 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 48 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815995B
# 49 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 50 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599E4
# 51 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 52 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599E4
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_08159929::
# 57 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B3A9
# 58 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 59 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_08159933::
# 64 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B47D
# 65 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 5
# 66 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 67 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815997E
# 68 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 5
# 69 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815998A
# 70 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	warp MAP_NARANJA_SIN_NOMBRE_G25_M41, 0xFF, 1, 0xA
# 71 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitstate
# 72 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815995B::
# 77 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B499
# 78 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 5
# 79 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 80 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815997E
# 81 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815998A
# 82 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	warp MAP_NARANJA_PUEBLO_PALETA_G26_M04, 0xFF, 0x13, 0x17
# 83 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitstate
# 84 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815997E::
# 89 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	message Naranja_IslaKumquat_G13_M10_Text_0818B4E2
# 90 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmessage
# 91 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598F1
	return


Naranja_IslaKumquat_G13_M10_EventScript_Sub_0815998A::
# 95 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B4B3
# 96 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	closemessage
# 98 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 99 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 100 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x1E
# 101 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	hideobjectat 32783, MAP_NARANJA_ISLA_KUMQUAT_G13_M10
# 102 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 103 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599D9
# 104 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 105 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599CE
# 106 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x1E
# 107 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 108 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	setvar VAR_0x8004, 2
# 109 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E
	return


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599CE::
# 114 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M10_Movement_08159A86
# 115 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599D9::
# 120 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M10_Movement_08159A89
# 121 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599E4::
# 126 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B45B
# 127 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 128 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599EE::
# 133 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 134 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598BA
# 135 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkflag FLAG_NARANJA_SOUTHERN_ISLAND_EVENT_COMPLETE_00CE
# 136 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598BA
# 137 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0853
# 138 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081598BA
# 139 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_081C50F2
# 140 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 141 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	closemessage
# 142 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement 32783, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 143 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 144 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x1E
# 145 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	hideobjectat 32783, MAP_NARANJA_ISLA_KUMQUAT_G13_M10
# 146 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x3C
# 147 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	addobject LOCALID_ISLA_KUMQUAT_G13_M10_SAILOR_2
# 148 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x1E
# 149 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M10_SAILOR_2, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 150 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 151 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_081C5120
# 152 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 153 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	closemessage
# 154 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M10_SAILOR_2, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 155 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
# 156 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x1E
# 157 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M10_SAILOR_2
# 158 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 159 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599D9
# 160 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 161 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_081599CE
# 162 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x1E
# 163 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_ISLA_VALENCIA_G00_M00
# 164 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	setvar VAR_0x8004, 2
# 166 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	call Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E
# 167 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	warp MAP_NARANJA_SOUTHERN_ISLAND_G26_M09, 0xFF, 0xD, 0x16
# 168 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitstate
# 169 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId3::
# 174 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	lock
# 175 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	faceplayer
# 176 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 177 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M10_EventScript_Sub_08159AA2
# 178 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B504
# 179 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 180 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_08159AA2::
# 185 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M10_Text_0818B58E
# 186 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	callstd 4
# 187 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M10_EventScript_Sub_081A040E::
# 192 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	delay 0x3C
# 193 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	applymovement 32772, Naranja_IslaKumquat_G13_M10_Movement_081A041C
# 194 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 198 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
Naranja_IslaKumquat_G13_M10_Movement_08159A86:
# 199 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_right
# 200 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_in_place_faster_up
	step_end

# 203 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
Naranja_IslaKumquat_G13_M10_Movement_08159A89:
# 204 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_up
	step_end

# 207 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
Naranja_IslaKumquat_G13_M10_Movement_081A041C:
# 208 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_slow_right
# 209 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_slow_right
# 210 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_slow_right
# 211 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_right
# 212 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_right
# 213 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_right
# 214 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	walk_right
	step_end

Naranja_IslaKumquat_G13_M10_Text_0818B306::
# 217 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "I beg your pardon?\nYou’re looking for a ship?\pI’m sorry, the ferry service isn’t\navailable at present...$"

Naranja_IslaKumquat_G13_M10_Text_0818B36F::
# 221 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "Hello, are you here for the ferry?\nMay I see your TICKET?$"

Naranja_IslaKumquat_G13_M10_Text_0818B3A9::
# 225 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "{PLAYER} no tiene reserva…\pLo sentimos…                 \psin reserva no puedes viajar por ahora.$"

Naranja_IslaKumquat_G13_M10_Text_0818B406::
# 229 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\pPerfect! That’s all you need!\pAnd where would you like to go?$"

Naranja_IslaKumquat_G13_M10_Text_0818B45B::
# 233 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "Please sail with us another time!$"

Naranja_IslaKumquat_G13_M10_Text_0818B47D::
# 237 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

Naranja_IslaKumquat_G13_M10_Text_0818B499::
# 241 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "BATTLE TOWER it is, then!$"

Naranja_IslaKumquat_G13_M10_Text_0818B4B3::
# 245 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "Please board the ferry and wait for\ndeparture.$"

Naranja_IslaKumquat_G13_M10_Text_0818B4E2::
# 249 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "Then, where would you like to go?$"

Naranja_IslaKumquat_G13_M10_Text_0818B504::
# 253 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "Until they finish making the ferry, we\nsailors have nothing to do...\pI wish they’d get a move on, the folks\nat the SHIPYARD in SLATEPORT.$"

Naranja_IslaKumquat_G13_M10_Text_0818B58E::
# 257 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\noperation.\pThe folks at the SHIPYARD in SLATEPORT\nmust’ve worked extra hard.\pWell, it’s my turn to get busy now!$"

Naranja_IslaKumquat_G13_M10_Text_081C50F2::
# 261 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "The ferry to SLATEPORT is...\pOh?\nThat PASS...$"

Naranja_IslaKumquat_G13_M10_Text_081C5120::
# 265 "data/maps/Naranja_IslaKumquat_G13_M10/scripts.pory"
	.string "Aye, mate, are you the one who brought\nthat mighty odd PASS?\pI’ll tell you, you’re trying to reach a\ntiny spit of an island far in the south.\pThere’s no telling what we’ll encounter\nonce we reach there, aye.\lThat shivers my timbers!\pAll aboard!$"
