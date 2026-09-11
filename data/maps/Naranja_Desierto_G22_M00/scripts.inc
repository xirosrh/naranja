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
	msgbox Naranja_Desierto_G22_M00_Text_081B28F2, MSGBOX_YESNO
# 24 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 25 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B236C
# 26 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A14, MSGBOX_DEFAULT
# 27 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B236C::
# 32 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 33 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 34 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23F3
# 35 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2947, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	fadescreen 1
# 37 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special ChooseSendDaycareMon
# 38 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitstate
# 39 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 40 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
# 41 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 42 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23FD
# 44 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 45 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitse
# 46 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	playmoncry 0x8005, 0
# 47 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B296E, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitmoncry
# 49 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 50 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	incrementgamestat 0x2F
# 51 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 52 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 53 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23DA
# 54 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0::
# 59 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A76, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B23DA::
# 65 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B29AD, MSGBOX_YESNO
# 66 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 67 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B236C
# 68 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B23F3::
# 72 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2BBB, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B23FD::
# 78 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2C17, MSGBOX_DEFAULT
# 79 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B2407::
# 84 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B29F4, MSGBOX_DEFAULT
# 85 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B2411::
# 90 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2ACC, MSGBOX_DEFAULT
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B241A::
# 95 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 96 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 97 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call_if NOT_EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2411
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B242B::
# 102 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A88, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 104 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call Naranja_Desierto_G22_M00_EventScript_Sub_081B241A
# 105 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B29AD, MSGBOX_YESNO
# 106 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 107 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B236C
# 108 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2BF6, MSGBOX_YESNO
# 109 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 110 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2469
# 111 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B2469::
# 115 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 116 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 117 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2539
# 118 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 119 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 120 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 121 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B24A8
# 122 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special ShowDaycareLevelMenu
# 123 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitstate
# 124 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 125 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 126 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
# 127 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B24A8
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B24A8::
# 131 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special GetDaycareCostAndPrepareString
# 132 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2B49, MSGBOX_YESNO
# 133 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 134 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B24C4
# 135 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B24C4::
# 139 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 140 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 141 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B24DE
# 142 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A30, MSGBOX_DEFAULT
# 143 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B24DE::
# 148 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	applymovement LOCALID_DESIERTO_G22_M00_OLD_WOMAN_2, Naranja_Desierto_G22_M00_Movement_081B2543
# 149 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 150 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 151 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 152 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	playse SE_SHOP
# 153 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2B75, MSGBOX_DEFAULT
# 154 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitse
# 155 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	playmoncry 0x800D, 0
# 156 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2B93, MSGBOX_DEFAULT
# 157 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	waitmoncry
# 158 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 159 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 160 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2520
# 161 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B2520::
# 165 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A4F, MSGBOX_YESNO
# 166 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 167 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2469
# 168 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto Naranja_Desierto_G22_M00_EventScript_Sub_081B23D0
	return


Naranja_Desierto_G22_M00_EventScript_Sub_081B2539::
# 172 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2AEF, MSGBOX_DEFAULT
# 173 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


Naranja_Desierto_G22_M00_EventScript_Sub_081B2558::
# 178 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A88, MSGBOX_DEFAULT
# 179 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 180 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call Naranja_Desierto_G22_M00_EventScript_Sub_081B241A
# 181 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 182 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	call Naranja_Desierto_G22_M00_EventScript_Sub_081B241A
# 183 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2BF6, MSGBOX_YESNO
# 184 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 185 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	goto_if EQUAL, Naranja_Desierto_G22_M00_EventScript_Sub_081B2469
# 186 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	msgbox Naranja_Desierto_G22_M00_Text_081B2A76, MSGBOX_DEFAULT
# 187 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	release
	end


# 191 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
Naranja_Desierto_G22_M00_Movement_081B2543:
# 192 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 193 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_right
# 194 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 195 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	emote_exclamation_mark
# 196 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_up
# 197 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	walk_up
# 198 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	set_invisible
# 199 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 200 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 201 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 202 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 203 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 204 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	set_visible
# 205 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	walk_down
# 206 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_right
# 207 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 208 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	delay_16
# 209 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_down
# 210 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	face_down
	step_end

Naranja_Desierto_G22_M00_Text_081B28F2::
# 213 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "I’m the DAY-CARE LADY.\pWe can raise POKéMON for you.\pWould you like us to raise one?$"

Naranja_Desierto_G22_M00_Text_081B2947::
# 217 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Which POKéMON should we raise for you?$"

Naranja_Desierto_G22_M00_Text_081B296E::
# 221 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Fine, we’ll raise your {STR_VAR_1} for\na while.\pCome back for it later.$"

Naranja_Desierto_G22_M00_Text_081B29AD::
# 225 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "We can raise two of your POKéMON.\nWould you like us to raise one more?$"

Naranja_Desierto_G22_M00_Text_081B29F4::
# 229 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "My husband was looking for you.$"

Naranja_Desierto_G22_M00_Text_081B2A14::
# 233 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Oh, fine, then.\nCome again.$"

Naranja_Desierto_G22_M00_Text_081B2A30::
# 237 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "You don’t have enough money...$"

Naranja_Desierto_G22_M00_Text_081B2A4F::
# 241 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Will you take back the other one, too?$"

Naranja_Desierto_G22_M00_Text_081B2A76::
# 245 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Fine.\nCome again.$"

Naranja_Desierto_G22_M00_Text_081B2A88::
# 249 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Ah, it’s you! Good to see you.\nYour POKéMON can only be doing good!$"

Naranja_Desierto_G22_M00_Text_081B2ACC::
# 253 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "By level, your {STR_VAR_1} has grown\nby {STR_VAR_2}.$"

Naranja_Desierto_G22_M00_Text_081B2AEF::
# 257 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Your POKéMON team is full.\nMake room, then come see me.$"

Naranja_Desierto_G22_M00_Text_081B2B49::
# 261 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\nit will cost ¥{STR_VAR_2}.$"

Naranja_Desierto_G22_M00_Text_081B2B75::
# 265 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Perfect!\nHere’s your POKéMON.$"

Naranja_Desierto_G22_M00_Text_081B2B93::
# 269 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\nthe DAY-CARE LADY.$"

Naranja_Desierto_G22_M00_Text_081B2BBB::
# 273 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Oh? But you have just one POKéMON.\pCome back another time.$"

Naranja_Desierto_G22_M00_Text_081B2BF6::
# 277 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "Will you take your POKéMON back?$"

Naranja_Desierto_G22_M00_Text_081B2C17::
# 281 "data/maps/Naranja_Desierto_G22_M00/scripts.pory"
	.string "If you leave me that POKéMON,\nwhat will you battle with?\pCome back another time.$"
