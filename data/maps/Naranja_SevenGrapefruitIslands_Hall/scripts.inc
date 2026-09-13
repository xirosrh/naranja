Naranja_SevenGrapefruitIslands_Hall_MapScripts::
	.byte 0


Naranja_SevenGrapefruitIslands_Hall_EventScript_Girl2::
# 8 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 9 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 11 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 12 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 13 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081532B2
# 14 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081754C9, MSGBOX_DEFAULT
# 15 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081532B2::
# 20 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175528, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Woman3::
# 26 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 27 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 29 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_0817559E, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Man1::
# 35 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 36 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 37 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 38 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 39 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081755F9, MSGBOX_YESNO
# 40 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 41 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081532F6
# 42 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153300
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081532F6::
# 48 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175664, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153300::
# 54 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081756B7, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_OldMan1::
# 60 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 61 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 62 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 63 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_0817570D, MSGBOX_DEFAULT
# 64 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	closemessage
# 65 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_NARANJA_SEVEN_GRAPEFRUIT_ISLANDS_HALL_OLD_MAN_1, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 66 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
# 67 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_LittleGirl1::
# 72 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 73 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 74 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 75 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_0817574C, MSGBOX_DEFAULT
# 76 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	closemessage
# 77 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_NARANJA_SEVEN_GRAPEFRUIT_ISLANDS_HALL_LITTLE_GIRL_1, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 78 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
# 79 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_LittleBoy2::
# 84 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 85 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 86 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 87 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175779, MSGBOX_DEFAULT
# 88 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sign_1::
# 93 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lockall
# 94 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 95 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175842, MSGBOX_DEFAULT
# 96 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sign_2::
# 101 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lockall
# 102 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 103 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 104 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 105 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 106 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533CA
# 107 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 108 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533CA
# 109 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 110 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533D4
# 111 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 112 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533CA
# 113 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 114 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533DE
# 115 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 116 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533DE
# 117 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 118 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533E8
# 119 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 120 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533DE
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533CA::
# 125 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081758C4, MSGBOX_DEFAULT
# 126 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533D4::
# 131 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081758E0, MSGBOX_DEFAULT
# 132 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533DE::
# 137 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081758FB, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081533E8::
# 143 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175916, MSGBOX_DEFAULT
# 144 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_SchoolKidM::
# 149 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lockall
# 150 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 151 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815340A
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_PsychicM::
# 155 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lockall
# 156 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 157 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815340A
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815340A::
# 161 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 162 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 163 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 164 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 165 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153470
# 166 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 167 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153470
# 168 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 169 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815348C
# 170 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 171 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815348C
# 172 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 173 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534A8
# 174 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 175 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534A8
# 176 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 177 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534C4
# 178 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 179 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534E0
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153470::
# 184 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FD
# 185 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175935, MSGBOX_DEFAULT
# 186 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153535
# 187 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081759A1, MSGBOX_DEFAULT
# 188 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815348C::
# 193 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FD
# 194 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175A5C, MSGBOX_DEFAULT
# 195 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153535
# 196 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175AD9, MSGBOX_DEFAULT
# 197 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534A8::
# 202 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FD
# 203 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175B46, MSGBOX_DEFAULT
# 204 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153535
# 205 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175BA7, MSGBOX_DEFAULT
# 206 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534C4::
# 211 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FD
# 212 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175C41, MSGBOX_DEFAULT
# 213 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153535
# 214 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175CC2, MSGBOX_DEFAULT
# 215 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534E0::
# 220 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FD
# 221 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175D6B, MSGBOX_DEFAULT
# 222 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153535
# 223 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175DC3, MSGBOX_DEFAULT
# 224 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	releaseall
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FC::
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FD::
# 233 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_NARANJA_SEVEN_GRAPEFRUIT_ISLANDS_HALL_PSYCHIC_M, Naranja_SevenGrapefruitIslands_Hall_Movement_08153599
# 234 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
# 235 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 236 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815351E
# 237 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 238 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153534
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815351E::
# 243 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 244 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FC
# 245 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 246 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153534::
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153535::
# 255 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_NARANJA_SEVEN_GRAPEFRUIT_ISLANDS_HALL_SCHOOL_KID_M, Naranja_SevenGrapefruitIslands_Hall_Movement_0815359B
# 256 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
# 257 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 258 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153556
# 259 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 260 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153583
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153556::
# 265 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 266 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815356D
# 267 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 268 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153578
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_0815356D::
# 273 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 274 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153578::
# 279 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 280 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_08153583::
# 285 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 286 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081534FC
# 287 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 288 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_SevenGrapefruitIslands_Hall_EventScript_Maniac::
# 293 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	lock
# 294 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	faceplayer
# 295 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	call Naranja_SevenGrapefruitIslands_EventScript_Sub_081A0102
# 296 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_00E6
# 297 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081535D1
# 298 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175E13, MSGBOX_DEFAULT
# 299 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	setorcopyvar VAR_0x8000, 0x144
# 300 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 301 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	callstd 0
# 302 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 303 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 304 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_00E6
# 305 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081535D1::
# 310 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_08175EBE, MSGBOX_DEFAULT
# 311 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B::
# 316 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081A0CC2, MSGBOX_DEFAULT
# 317 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	release
	end


# 321 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
Naranja_SevenGrapefruitIslands_Hall_Movement_08153599:
# 322 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	walk_in_place_left
	step_end

# 325 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
Naranja_SevenGrapefruitIslands_Hall_Movement_0815359B:
# 326 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	walk_in_place_right
	step_end

# 329 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841:
# 330 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_SevenGrapefruitIslands_Hall_Text_081754C9::
# 333 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "What’s in vogue? Why, it has to be\n“{STR_VAR_1}”!\pI can’t imagine what life would be like\nwithout “{STR_VAR_1}”!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175528::
# 337 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "What’s in vogue? Why, it has to be\n“{STR_VAR_1}”!\pBut I’m getting kind of bored with it.\pI should look for the next big thing.$"

Naranja_SevenGrapefruitIslands_Hall_Text_0817559E::
# 341 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "I’m teaching my POKéMON about\n“{STR_VAR_1},”\lbut it’s not going well.\pIt’s a bit too much, I think.$"

Naranja_SevenGrapefruitIslands_Hall_Text_081755F9::
# 345 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "I’m studying up on the hip and trendy\n“{STR_VAR_1}” now.\pIs it true that there’s a deep link\nbetween “{STR_VAR_1}”\land “{STR_VAR_2}”?$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175664::
# 349 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Oh!\nSo, my hunch was right!\pI’m one step closer to being hip and\nhappening, yowza!$"

Naranja_SevenGrapefruitIslands_Hall_Text_081756B7::
# 353 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "What?!\nIs that so?!\pIt’s not easy for an older fellow like\nme to keep up with trends!$"

Naranja_SevenGrapefruitIslands_Hall_Text_0817570D::
# 357 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "This whole business about\n“{STR_VAR_1}”...\lIsn’t there a TV show on it?$"

Naranja_SevenGrapefruitIslands_Hall_Text_0817574C::
# 361 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Across the sea...\pIs “{STR_VAR_1}”\neven more popular?$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175779::
# 365 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "I collect official\n“{STR_VAR_1}”\llicensed merchandise.\pI have official\n“{STR_VAR_1}” dolls...\pOfficial “{STR_VAR_1}”\nbrand clothing...\pAnd officially licensed\n“{STR_VAR_1}”\lpicture books.\pHeheh, I own!\nI’m not sharing anything with you!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175842::
# 369 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "IDENTIFYING GOOD\n“{STR_VAR_1}” &\lBAD “{STR_VAR_1}”...\pTHE LINK BETWEEN\n“{STR_VAR_1}” AND\lPOKéMON...\pUSEFUL\n“{STR_VAR_1}”...\pIt’s neatly jammed with books about\n“{STR_VAR_1}.”$"

Naranja_SevenGrapefruitIslands_Hall_Text_081758C4::
# 373 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "“{STR_VAR_1}’S\nSCREAM” is the title.$"

Naranja_SevenGrapefruitIslands_Hall_Text_081758E0::
# 377 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "“{STR_VAR_1}’S\nSMILE” is the title.$"

Naranja_SevenGrapefruitIslands_Hall_Text_081758FB::
# 381 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "It’s titled “THE LAST\n{STR_VAR_1}”.$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175916::
# 385 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "It’s titled “THE BIRTH OF\n{STR_VAR_1}”.$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175935::
# 389 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\nCool, huh?\pIt’s, like, the coolest thing going!\pIt was awesome!\nIt was the real thing, oh yeah!$"

Naranja_SevenGrapefruitIslands_Hall_Text_081759A1::
# 393 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Oh, no, no, no.\pThat alleged\n“{STR_VAR_1}”\lyou claim to have seen - it’s not.\pThe authentic article is much...\nHow should I say it?\lSharper, yet more mellifluous!\pAh, no matter. It’s astonishing!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175A5C::
# 397 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Hey, listen, I composed a theme song\nfor “{STR_VAR_1}.”\p“{STR_VAR_1}”\nis really popular right now.\pOkay, listen!\n... ...\pOh!\n{STR_VAR_1}!\pWonderful\n{STR_VAR_1}!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175AD9::
# 401 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "... ...\pI dare say, chap, it would pay for you\nto work on your singing before you\ltrifle yourself with\l“{STR_VAR_1}.”$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175B46::
# 405 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Anyway, as I was saying earlier, we\nshould get together and organize a\l“{STR_VAR_1}” party\lon the island.$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175BA7::
# 409 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Oh, a smashing good idea!\pIt will settle once and for all\nwho is the best at\l“{STR_VAR_1}.”\lBrilliant, indeed!\pStarting today, our lives will revolve\naround “{STR_VAR_1}”!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175C41::
# 413 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "I was thinking, though...\pWouldn’t you agree that\n“{STR_VAR_1}” has\lgrown from being something trendy to\lbeing a part of our daily lives?$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175CC2::
# 417 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Beg pardon?\nThat much, what?\pHowever, it’s true that\n“{STR_VAR_1}”\lweighs heavily on your mind, whether\lyou’re awake or asleep.\pAbsolutely, you’re the\n“{STR_VAR_1}”\lPROFESSOR, old sport!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175D6B::
# 421 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "If you and me team up as a combo,\nwe’ll be invincible when it comes to all\lthings “{STR_VAR_1}”!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175DC3::
# 425 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Spot on, my friend!\pWe shall be the\n“{STR_VAR_1}” DUO!\pIsn’t that a ripe image?\nHahahah!$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175E13::
# 429 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "For me, SLUDGE BOMB is at the peak\nof popularity. It’s the one.\pHunh? You’re telling me that you don’t\nknow about SLUDGE BOMB?\pThat’s outright pitiful.\nI’ll give you one.$"

Naranja_SevenGrapefruitIslands_Hall_Text_08175EBE::
# 433 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "I love SLUDGE BOMB.\pBut POKéMON with the\n“{STR_VAR_1}”\lmove are in, too.$"

Naranja_SevenGrapefruitIslands_Hall_Text_081A0CC2::
# 437 "data/maps/Naranja_SevenGrapefruitIslands_Hall/scripts.pory"
	.string "Vaya\nTu mochila está llena…$"
