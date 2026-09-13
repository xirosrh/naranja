Naranja_KumquatIsland_Harbor_MapScripts::
# 5 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_KumquatIsland_Harbor_OnTransition
	.byte 0


Naranja_KumquatIsland_Harbor_OnTransition::
# 9 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	setescapewarp MAP_NARANJA_KUMQUAT_ISLAND, 0xFF, 0xC, 0x21
	end


Naranja_KumquatIsland_Harbor_EventScript_Beauty::
# 14 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	lock
# 15 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkitem ITEM_EON_TICKET, 1
# 17 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 18 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599EE
# 19 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto Naranja_KumquatIsland_Harbor_EventScript_Sub_081598BA
	return


Naranja_KumquatIsland_Harbor_EventScript_Sub_081598BA::
# 23 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 24 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081598CD
# 25 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B306, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_081598CD::
# 31 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B36F, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 33 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 34 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_08159929
# 35 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	message Naranja_KumquatIsland_Harbor_Text_0818B406
# 36 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmessage
# 37 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto Naranja_KumquatIsland_Harbor_EventScript_Sub_081598F1
	return


Naranja_KumquatIsland_Harbor_EventScript_Sub_081598F1::
# 41 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	multichoicedefault 0x12, 6, 0x38, 2, 0
# 42 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 43 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 44 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_08159933
# 45 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 46 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_0815995B
# 47 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 48 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599E4
# 49 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 50 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599E4
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_08159929::
# 55 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B3A9, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_08159933::
# 61 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B47D, MSGBOX_YESNO
# 62 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 63 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_0815997E
# 64 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_3, 5
# 65 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call Naranja_KumquatIsland_Harbor_EventScript_Sub_0815998A
# 66 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	warp MAP_NARANJA_SSTIDAL_CORRIDOR, 0xFF, 1, 0xA
# 67 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitstate
# 68 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_0815995B::
# 73 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B499, MSGBOX_YESNO
# 74 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 75 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_0815997E
# 76 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call Naranja_KumquatIsland_Harbor_EventScript_Sub_0815998A
# 77 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	warp MAP_NARANJA_BATTLE_TOWER_OUTSIDE, 0xFF, 0x13, 0x17
# 78 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitstate
# 79 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_0815997E::
# 84 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	message Naranja_KumquatIsland_Harbor_Text_0818B4E2
# 85 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmessage
# 86 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto Naranja_KumquatIsland_Harbor_EventScript_Sub_081598F1
	return


Naranja_KumquatIsland_Harbor_EventScript_Sub_0815998A::
# 90 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B4B3, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	closemessage
# 92 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement 32783, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 93 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
# 94 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x1E
# 95 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	hideobjectat 32783, MAP_NARANJA_KUMQUAT_ISLAND_HARBOR
# 96 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 97 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599D9
# 98 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 99 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599CE
# 100 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x1E
# 101 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_VALENCIA_ISLAND
# 102 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, 2
# 103 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call Naranja_KumquatIsland_Harbor_EventScript_Sub_081A040E
	return


Naranja_KumquatIsland_Harbor_EventScript_Sub_081599CE::
# 108 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_KumquatIsland_Harbor_Movement_08159A86
# 109 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_KumquatIsland_Harbor_EventScript_Sub_081599D9::
# 114 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_KumquatIsland_Harbor_Movement_08159A89
# 115 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_KumquatIsland_Harbor_EventScript_Sub_081599E4::
# 120 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B45B, MSGBOX_DEFAULT
# 121 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_081599EE::
# 126 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 127 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if LESS_THAN, Naranja_KumquatIsland_Harbor_EventScript_Sub_081598BA
# 128 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkflag FLAG_NARANJA_SOUTHERN_ISLAND_EVENT_COMPLETE_00CE
# 129 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081598BA
# 130 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkflag FLAG_NARANJA_KUMQUAT_ISLAND_EVENT_COMPLETE_0853
# 131 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if LESS_THAN, Naranja_KumquatIsland_Harbor_EventScript_Sub_081598BA
# 132 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_081C50F2, MSGBOX_DEFAULT
# 133 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	closemessage
# 134 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement 32783, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 135 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
# 136 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x1E
# 137 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	hideobjectat 32783, MAP_NARANJA_KUMQUAT_ISLAND_HARBOR
# 138 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x3C
# 139 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	addobject LOCALID_NARANJA_KUMQUAT_ISLAND_HARBOR_SAILOR_2
# 140 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x1E
# 141 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_HARBOR_SAILOR_2, Naranja_KumquatIsland_Movement_081A0839
# 142 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
# 143 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_081C5120, MSGBOX_DEFAULT
# 144 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	closemessage
# 145 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_HARBOR_SAILOR_2, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 146 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
# 147 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x1E
# 148 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	removeobject LOCALID_NARANJA_KUMQUAT_ISLAND_HARBOR_SAILOR_2
# 149 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 150 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599D9
# 151 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 152 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_081599CE
# 153 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x1E
# 154 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_NARANJA_VALENCIA_ISLAND
# 155 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	special HealPlayerParty
# 156 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, 2
# 157 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	call Naranja_KumquatIsland_Harbor_EventScript_Sub_081A040E
# 158 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	warp MAP_NARANJA_SOUTHERN_ISLAND_EXTERIOR, 0xFF, 0xD, 0x16
# 159 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitstate
# 160 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sailor::
# 165 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	lock
# 166 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	faceplayer
# 167 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 168 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_Harbor_EventScript_Sub_08159AA2
# 169 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B504, MSGBOX_DEFAULT
# 170 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_08159AA2::
# 175 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	msgbox Naranja_KumquatIsland_Harbor_Text_0818B58E, MSGBOX_DEFAULT
# 176 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	release
	end


Naranja_KumquatIsland_Harbor_EventScript_Sub_081A040E::
# 181 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	delay 0x3C
# 182 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	applymovement 32772, Naranja_KumquatIsland_Harbor_Movement_081A041C
# 183 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 187 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
Naranja_KumquatIsland_Harbor_Movement_08159A86:
# 188 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_right
# 189 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_in_place_faster_up
	step_end

# 192 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
Naranja_KumquatIsland_Harbor_Movement_08159A89:
# 193 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
Naranja_KumquatIsland_Harbor_Movement_081A041C:
# 197 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_slow_right
# 198 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_slow_right
# 199 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_slow_right
# 200 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_right
# 201 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_right
# 202 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_right
# 203 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	walk_right
	step_end

Naranja_KumquatIsland_Harbor_Text_0818B306::
# 206 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "I beg your pardon?\nYou’re looking for a ship?\pI’m sorry, the ferry service isn’t\navailable at present...$"

Naranja_KumquatIsland_Harbor_Text_0818B36F::
# 210 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\nMay I see your TICKET?$"

Naranja_KumquatIsland_Harbor_Text_0818B3A9::
# 214 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "{PLAYER} no tiene reserva…\pLo sentimos…                 \psin reserva no puedes viajar por ahora.$"

Naranja_KumquatIsland_Harbor_Text_0818B406::
# 218 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\pPerfect! That’s all you need!\pAnd where would you like to go?$"

Naranja_KumquatIsland_Harbor_Text_0818B45B::
# 222 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "Please sail with us another time!$"

Naranja_KumquatIsland_Harbor_Text_0818B47D::
# 226 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

Naranja_KumquatIsland_Harbor_Text_0818B499::
# 230 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "BATTLE TOWER it is, then!$"

Naranja_KumquatIsland_Harbor_Text_0818B4B3::
# 234 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\ndeparture.$"

Naranja_KumquatIsland_Harbor_Text_0818B4E2::
# 238 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"

Naranja_KumquatIsland_Harbor_Text_0818B504::
# 242 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "Until they finish making the ferry, we\nsailors have nothing to do...\pI wish they’d get a move on, the folks\nat the SHIPYARD in SLATEPORT.$"

Naranja_KumquatIsland_Harbor_Text_0818B58E::
# 246 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\noperation.\pThe folks at the SHIPYARD in SLATEPORT\nmust’ve worked extra hard.\pWell, it’s my turn to get busy now!$"

Naranja_KumquatIsland_Harbor_Text_081C50F2::
# 250 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "The ferry to SLATEPORT is...\pOh?\nThat PASS...$"

Naranja_KumquatIsland_Harbor_Text_081C5120::
# 254 "data/maps/Naranja_KumquatIsland_Harbor/scripts.pory"
	.string "Aye, mate, are you the one who brought\nthat mighty odd PASS?\pI’ll tell you, you’re trying to reach a\ntiny spit of an island far in the south.\pThere’s no telling what we’ll encounter\nonce we reach there, aye.\lThat shivers my timbers!\pAll aboard!$"
