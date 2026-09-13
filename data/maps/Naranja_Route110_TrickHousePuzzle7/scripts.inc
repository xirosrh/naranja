Naranja_Route110_TrickHousePuzzle7_MapScripts::
# 5 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route110_TrickHousePuzzle7_OnResume
# 6 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_TrickHousePuzzle7_OnTransition
# 7 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_Route110_TrickHousePuzzle7_OnLoad
# 8 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	map_script_2 VAR_NARANJA_ROUTE110_EVENT_STATE_14, 1, Naranja_Route110_TrickHousePuzzle7_OnFrame_1
	.2byte 0


Naranja_Route110_TrickHousePuzzle7_OnResume::
# 14 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163167
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163167::
# 19 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 20 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163195
# 21 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 22 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631A8
# 23 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 24 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631BB
# 25 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 26 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631CE
# 27 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 28 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631E1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163195::
# 33 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xD, 0x11, 0x262, 0
# 34 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xC, 0x10, 0x23F, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631A8::
# 39 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xC, 0xD, 0x262, 0
# 40 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xC, 0xB, 0x23F, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631BB::
# 45 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 0xC, 0x262, 0
# 46 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 0xA, 0x23F, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631CE::
# 51 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, 0x27C, 0
# 52 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, 0x23F, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631E1::
# 57 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, 0x261, 0
# 58 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, 0x23F, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631F4::
# 63 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xD, 0x11, 0x263, 0
# 64 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xC, 0x10, 0x23E, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163207::
# 69 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xC, 0xD, 0x261, 0
# 70 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 0xC, 0xB, 0x23E, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816321A::
# 75 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 0xC, 0x263, 0
# 76 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 0xA, 0x23E, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816322D::
# 81 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, 0x27B, 0
# 82 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, 0x23E, 1
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163240::
# 87 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, 0x260, 0
# 88 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, 0x23E, 1
	return


Naranja_Route110_TrickHousePuzzle7_OnTransition::
# 93 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_14, 1
# 94 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816326E
# 95 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 96 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 97 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 98 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 99 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816326E::
	end


Naranja_Route110_TrickHousePuzzle7_OnLoad::
# 108 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_14, 1
# 109 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163167
	end


Naranja_Route110_TrickHousePuzzle7_OnFrame_1::
# 114 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_14, 0
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sign_1::
# 119 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 120 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_11, 0
# 121 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816329D
# 122 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto Naranja_Route110_TrickHousePuzzle1_EventScript_Sub_08161892
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816329D::
# 126 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_11, 1
# 127 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto Naranja_Route110_TrickHousePuzzle1_EventScript_Sub_0816189C
	return


Naranja_Route110_TrickHousePuzzle7_EventScript_Trigger_1::
# 131 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 132 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_14, 1
# 133 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	warpteleport MAP_NARANJA_ROUTE110_TRICK_HOUSE_PUZZLE7, 0xFF, 3, 0x13
# 134 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	waitstate
# 135 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sign_2::
# 140 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 141 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	delay 0x20
# 142 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 143 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163195
# 144 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 145 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631F4
# 146 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 147 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 148 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 149 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633A4
# 150 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 151 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633A9
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sign_4::
# 156 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 157 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	delay 0x20
# 158 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 159 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631A8
# 160 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 161 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163207
# 162 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 163 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 164 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 165 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633AE
# 166 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 167 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633B3
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sign_3::
# 172 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 173 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	delay 0x20
# 174 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 175 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631BB
# 176 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 177 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816321A
# 178 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 179 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 180 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 181 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633B8
# 182 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 183 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633BD
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sign_5::
# 188 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 189 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	delay 0x20
# 190 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 191 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631CE
# 192 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 193 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_0816322D
# 194 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 195 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 196 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 197 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633C2
# 198 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 199 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633C7
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sign_6::
# 204 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 205 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	delay 0x20
# 206 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 207 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081631E1
# 208 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 209 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	call_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_08163240
# 210 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 211 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 212 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 213 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if LESS_THAN, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633CC
# 214 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 215 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	goto_if EQUAL, Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633D1
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633A4::
# 220 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 221 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633A9::
# 226 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C2
# 227 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633AE::
# 232 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 233 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633B3::
# 238 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C3
# 239 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633B8::
# 244 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 245 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633BD::
# 250 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C4
# 251 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633C2::
# 256 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 257 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633C7::
# 262 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C5
# 263 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633CC::
# 268 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 269 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Sub_081633D1::
# 274 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_NARANJA_ROUTE110_EVENT_COMPLETE_00C6
# 275 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_PsychicM::
# 280 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_237, Naranja_Route110_TrickHousePuzzle7_Text_0819DF0B, Naranja_Route110_TrickHousePuzzle7_Text_0819DF4B
# 281 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Naranja_Route110_TrickHousePuzzle7_Text_0819DF7E, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_HexManiac::
# 286 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_105, Naranja_Route110_TrickHousePuzzle7_Text_0819DFBB, Naranja_Route110_TrickHousePuzzle7_Text_0819DFF2
# 287 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Naranja_Route110_TrickHousePuzzle7_Text_0819E00F, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_Lass::
# 292 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_248, Naranja_Route110_TrickHousePuzzle7_Text_0819E054, Naranja_Route110_TrickHousePuzzle7_Text_0819E098
# 293 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Naranja_Route110_TrickHousePuzzle7_Text_0819E0B2, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_TrickHousePuzzle7_EventScript_ItemBall::
# 298 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setorcopyvar VAR_0x8000, 0x81
# 299 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 300 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	callstd 1
	end


Naranja_Route110_TrickHousePuzzle7_Text_0819DF0B::
# 304 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "The TRICK MASTER always vanishes\nlike smoke. How does he do it?$"

Naranja_Route110_TrickHousePuzzle7_Text_0819DF4B::
# 308 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "Aiyeeeh! You’re much too strong!\nHow do you do it?$"

Naranja_Route110_TrickHousePuzzle7_Text_0819DF7E::
# 312 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "I wish I could appear and disappear as\nif I were smoke, too.$"

Naranja_Route110_TrickHousePuzzle7_Text_0819DFBB::
# 316 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "Going around the same spot...\nIt begets ill fortune...$"

Naranja_Route110_TrickHousePuzzle7_Text_0819DFF2::
# 320 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "Defeated!\nIt’s a bad sign...$"

Naranja_Route110_TrickHousePuzzle7_Text_0819E00F::
# 324 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "I’ve circled the same spot over ten\ntimes now... It’s ill fortune...$"

Naranja_Route110_TrickHousePuzzle7_Text_0819E054::
# 328 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "Whoever wins will get through here\nfirst. That’s the feeling I get.$"

Naranja_Route110_TrickHousePuzzle7_Text_0819E098::
# 332 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh!\nWell, go ahead, then!$"

Naranja_Route110_TrickHousePuzzle7_Text_0819E0B2::
# 336 "data/maps/Naranja_Route110_TrickHousePuzzle7/scripts.pory"
	.string "You’re solving all the puzzles in the\nTRICK HOUSE. That’s the feeling I get.$"
