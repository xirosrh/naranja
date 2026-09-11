Naranja_Desierto_G22_M00_MapScripts::
# 5 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Desierto_G22_M00_OnTransition
	.byte 0


Naranja_Desierto_G22_M00_OnTransition::
# 9 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setflag FLAG_NARANJA_DESIERTO_EVENT_COMPLETE_0846
	end


Naranja_Desierto_G22_M00_EventScript_OBJ_EVENT_GFX_OLD_WOMAN_2_LocalId1::
# 14 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	lock
# 15 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 17 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 18 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2407
# 19 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 20 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B242B
# 21 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 22 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2558
# 23 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B28F2
# 24 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 25 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 26 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B236C
# 27 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A14
# 28 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B236C::
# 34 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 35 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 36 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23F3
# 37 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2947
# 38 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	fadescreen 1
# 40 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special ChooseSendDaycareMon
# 41 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitstate
# 42 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 43 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
# 44 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 45 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 46 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23FD
# 47 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 48 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitse
# 49 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	playmoncry 0x8005, 0
# 50 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B296E
# 51 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitmoncry
# 53 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 54 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	incrementgamestat 0x2F
# 55 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 56 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 57 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23DA
# 58 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0::
# 63 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A76
# 64 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 65 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B23DA::
# 70 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B29AD
# 71 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 72 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 73 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B236C
# 74 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B23F3::
# 78 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2BBB
# 79 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B23FD::
# 85 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2C17
# 86 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 87 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B2407::
# 92 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B29F4
# 93 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 94 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B2411::
# 99 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2ACC
# 100 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B241A::
# 105 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 106 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 107 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call_if NOT_EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2411
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B242B::
# 112 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A88
# 113 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 115 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call Naranja_Desierto_G22_M00_EventScript_Sub_081B241A
# 116 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B29AD
# 117 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 118 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 119 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B236C
# 120 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2BF6
# 121 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 122 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 123 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2469
# 124 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B2469::
# 128 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 129 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 130 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2539
# 131 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 132 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 133 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 134 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B24A8
# 135 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special ShowDaycareLevelMenu
# 136 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitstate
# 137 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 138 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 139 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
# 140 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B24A8
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B24A8::
# 144 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special GetDaycareCostAndPrepareString
# 145 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2B49
# 146 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 147 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 148 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B24C4
# 149 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B24C4::
# 153 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 154 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 155 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B24DE
# 156 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A30
# 157 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 158 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B24DE::
# 163 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	applymovement LOCALID_DESIERTO_G22_M00_OLD_WOMAN_2, Naranja_Desierto_G22_M00_Movement_081B2543
# 164 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 165 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 166 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 167 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	playse SE_SHOP
# 168 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2B75
# 169 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 170 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitse
# 171 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	playmoncry 0x800D, 0
# 172 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2B93
# 173 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 174 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitmoncry
# 175 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 176 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 177 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2520
# 178 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B2520::
# 182 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A4F
# 183 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 184 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 185 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2469
# 186 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B2539::
# 190 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2AEF
# 191 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 192 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B2558::
# 197 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A88
# 198 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 199 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 200 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call Naranja_Desierto_G22_M00_EventScript_Sub_081B241A
# 201 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 202 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call Naranja_Desierto_G22_M00_EventScript_Sub_081B241A
# 203 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2BF6
# 204 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 5
# 205 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 206 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2469
# 207 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	loadword 0, Naranja_Desierto_G22_M00_Text_081B2A76
# 208 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	callstd 4
# 209 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


# 213 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
Naranja_Desierto_G22_M00_Movement_081B2543:
# 214 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 215 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_right
# 216 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 217 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	emote_exclamation_mark
# 218 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_up
# 219 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	walk_up
# 220 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	set_invisible
# 221 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 222 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 223 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 224 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 225 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 226 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	set_visible
# 227 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	walk_down
# 228 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_right
# 229 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 230 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 231 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_down
# 232 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_down
	step_end

Naranja_Desierto_G22_M00_Text_081B28F2::
# 235 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "I’m the DAY-CARE LADY.\pWe can raise POKéMON for you.\pWould you like us to raise one?$"

Naranja_Desierto_G22_M00_Text_081B2947::
# 239 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Which POKéMON should we raise for you?$"

Naranja_Desierto_G22_M00_Text_081B296E::
# 243 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Fine, we’ll raise your {STR_VAR_1} for\na while.\pCome back for it later.$"

Naranja_Desierto_G22_M00_Text_081B29AD::
# 247 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "We can raise two of your POKéMON.\nWould you like us to raise one more?$"

Naranja_Desierto_G22_M00_Text_081B29F4::
# 251 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "My husband was looking for you.$"

Naranja_Desierto_G22_M00_Text_081B2A14::
# 255 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Oh, fine, then.\nCome again.$"

Naranja_Desierto_G22_M00_Text_081B2A30::
# 259 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "You don’t have enough money...$"

Naranja_Desierto_G22_M00_Text_081B2A4F::
# 263 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Will you take back the other one, too?$"

Naranja_Desierto_G22_M00_Text_081B2A76::
# 267 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Fine.\nCome again.$"

Naranja_Desierto_G22_M00_Text_081B2A88::
# 271 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Ah, it’s you! Good to see you.\nYour POKéMON can only be doing good!$"

Naranja_Desierto_G22_M00_Text_081B2ACC::
# 275 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "By level, your {STR_VAR_1} has grown\nby {STR_VAR_2}.$"

Naranja_Desierto_G22_M00_Text_081B2AEF::
# 279 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Your POKéMON team is full.\nMake room, then come see me.$"

Naranja_Desierto_G22_M00_Text_081B2B49::
# 283 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\nit will cost ¥{STR_VAR_2}.$"

Naranja_Desierto_G22_M00_Text_081B2B75::
# 287 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Perfect!\nHere’s your POKéMON.$"

Naranja_Desierto_G22_M00_Text_081B2B93::
# 291 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\nthe DAY-CARE LADY.$"

Naranja_Desierto_G22_M00_Text_081B2BBB::
# 295 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Oh? But you have just one POKéMON.\pCome back another time.$"

Naranja_Desierto_G22_M00_Text_081B2BF6::
# 299 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Will you take your POKéMON back?$"

Naranja_Desierto_G22_M00_Text_081B2C17::
# 303 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "If you leave me that POKéMON,\nwhat will you battle with?\pCome back another time.$"
