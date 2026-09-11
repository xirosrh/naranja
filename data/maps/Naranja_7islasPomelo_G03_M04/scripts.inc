Naranja_7islasPomelo_G03_M04_MapScripts::
	.byte 0


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId1::
# 8 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 11 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	special IsTrendyPhraseBoring
# 12 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 13 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081532B2
# 14 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081754C9
# 15 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 16 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081532B2::
# 21 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175528
# 22 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 23 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 28 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 29 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 30 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 31 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_0817559E
# 32 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId3::
# 38 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 39 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 40 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 41 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	special BufferDeepLinkPhrase
# 42 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081755F9
# 43 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 5
# 44 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 45 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081532F6
# 46 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 47 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153300
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081532F6::
# 52 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175664
# 53 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153300::
# 59 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081756B7
# 60 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 61 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId4::
# 66 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 67 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 68 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 69 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_0817570D
# 70 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 71 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	closemessage
# 72 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G03_M04_OLD_MAN_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 73 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 74 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId5::
# 79 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 80 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 81 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 82 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_0817574C
# 83 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 84 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	closemessage
# 85 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G03_M04_LITTLE_GIRL_1, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 86 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 87 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_2_LocalId6::
# 92 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 93 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 94 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 95 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175779
# 96 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 97 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sign_1::
# 102 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lockall
# 103 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 104 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175842
# 105 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sign_2::
# 111 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lockall
# 112 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 113 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 114 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 115 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 116 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533CA
# 117 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 118 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533CA
# 119 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 120 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533D4
# 121 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 122 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533CA
# 123 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 124 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533DE
# 125 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 126 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533DE
# 127 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 128 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533E8
# 129 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 130 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533DE
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533CA::
# 135 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081758C4
# 136 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 137 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533D4::
# 142 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081758E0
# 143 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 144 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533DE::
# 149 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081758FB
# 150 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 151 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081533E8::
# 156 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175916
# 157 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 158 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId7::
# 163 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lockall
# 164 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	setvar VAR_0x8008, 0
# 165 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815340A
	return


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId8::
# 169 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lockall
# 170 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	setvar VAR_0x8008, 1
# 171 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815340A
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815340A::
# 175 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 176 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 177 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 178 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 179 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153470
# 180 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 181 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153470
# 182 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 183 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815348C
# 184 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 185 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815348C
# 186 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 187 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534A8
# 188 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 189 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534A8
# 190 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 191 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534C4
# 192 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 193 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534E0
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153470::
# 198 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FD
# 199 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175935
# 200 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 201 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153535
# 202 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081759A1
# 203 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 204 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815348C::
# 209 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FD
# 210 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175A5C
# 211 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 212 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153535
# 213 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175AD9
# 214 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 215 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534A8::
# 220 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FD
# 221 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175B46
# 222 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 223 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153535
# 224 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175BA7
# 225 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 226 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534C4::
# 231 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FD
# 232 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175C41
# 233 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 234 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153535
# 235 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175CC2
# 236 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 237 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534E0::
# 242 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FD
# 243 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175D6B
# 244 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 245 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153535
# 246 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175DC3
# 247 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 248 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	releaseall
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FC::
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FD::
# 257 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G03_M04_PSYCHIC_M, Naranja_7islasPomelo_G03_M04_Movement_08153599
# 258 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 259 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 260 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815351E
# 261 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 262 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153534
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815351E::
# 267 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 268 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FC
# 269 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_CaminoFrio_G20_M01_Movement_081A0843
# 270 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153534::
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153535::
# 279 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_7ISLAS_POMELO_G03_M04_SCHOOL_KID_M, Naranja_7islasPomelo_G03_M04_Movement_0815359B
# 280 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 281 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 282 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153556
# 283 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 284 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153583
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153556::
# 289 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 290 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815356D
# 291 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 292 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153578
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_0815356D::
# 297 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 298 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153578::
# 303 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 304 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M04_EventScript_Sub_08153583::
# 309 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 310 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081534FC
# 311 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A083F
# 312 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_7islasPomelo_G03_M04_EventScript_OBJ_EVENT_GFX_MANIAC_LocalId9::
# 317 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	lock
# 318 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	faceplayer
# 319 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	call Naranja_7islasPomelo_G00_M11_EventScript_Sub_081A0102
# 320 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_00E6
# 321 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081535D1
# 322 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175E13
# 323 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 324 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x144
# 325 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 326 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 0
# 327 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 328 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 329 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_00E6
# 330 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081535D1::
# 335 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_08175EBE
# 336 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 337 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B::
# 342 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081A0CC2
# 343 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	callstd 4
# 344 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	release
	end


# 348 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
Naranja_7islasPomelo_G03_M04_Movement_08153599:
# 349 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	walk_in_place_left
	step_end

# 352 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
Naranja_7islasPomelo_G03_M04_Movement_0815359B:
# 353 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	walk_in_place_right
	step_end

# 356 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
Naranja_7islasPomelo_G03_M04_Movement_081A0841:
# 357 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_7islasPomelo_G03_M04_Text_081754C9::
# 360 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "What’s in vogue? Why, it has to be\n“{STR_VAR_1}”!\pI can’t imagine what life would be like\nwithout “{STR_VAR_1}”!$"

Naranja_7islasPomelo_G03_M04_Text_08175528::
# 364 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "What’s in vogue? Why, it has to be\n“{STR_VAR_1}”!\pBut I’m getting kind of bored with it.\pI should look for the next big thing.$"

Naranja_7islasPomelo_G03_M04_Text_0817559E::
# 368 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "I’m teaching my POKéMON about\n“{STR_VAR_1},”\lbut it’s not going well.\pIt’s a bit too much, I think.$"

Naranja_7islasPomelo_G03_M04_Text_081755F9::
# 372 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "I’m studying up on the hip and trendy\n“{STR_VAR_1}” now.\pIs it true that there’s a deep link\nbetween “{STR_VAR_1}”\land “{STR_VAR_2}”?$"

Naranja_7islasPomelo_G03_M04_Text_08175664::
# 376 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Oh!\nSo, my hunch was right!\pI’m one step closer to being hip and\nhappening, yowza!$"

Naranja_7islasPomelo_G03_M04_Text_081756B7::
# 380 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "What?!\nIs that so?!\pIt’s not easy for an older fellow like\nme to keep up with trends!$"

Naranja_7islasPomelo_G03_M04_Text_0817570D::
# 384 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "This whole business about\n“{STR_VAR_1}”...\lIsn’t there a TV show on it?$"

Naranja_7islasPomelo_G03_M04_Text_0817574C::
# 388 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Across the sea...\pIs “{STR_VAR_1}”\neven more popular?$"

Naranja_7islasPomelo_G03_M04_Text_08175779::
# 392 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "I collect official\n“{STR_VAR_1}”\llicensed merchandise.\pI have official\n“{STR_VAR_1}” dolls...\pOfficial “{STR_VAR_1}”\nbrand clothing...\pAnd officially licensed\n“{STR_VAR_1}”\lpicture books.\pHeheh, I own!\nI’m not sharing anything with you!$"

Naranja_7islasPomelo_G03_M04_Text_08175842::
# 396 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "IDENTIFYING GOOD\n“{STR_VAR_1}” &\lBAD “{STR_VAR_1}”...\pTHE LINK BETWEEN\n“{STR_VAR_1}” AND\lPOKéMON...\pUSEFUL\n“{STR_VAR_1}”...\pIt’s neatly jammed with books about\n“{STR_VAR_1}.”$"

Naranja_7islasPomelo_G03_M04_Text_081758C4::
# 400 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "“{STR_VAR_1}’S\nSCREAM” is the title.$"

Naranja_7islasPomelo_G03_M04_Text_081758E0::
# 404 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "“{STR_VAR_1}’S\nSMILE” is the title.$"

Naranja_7islasPomelo_G03_M04_Text_081758FB::
# 408 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "It’s titled “THE LAST\n{STR_VAR_1}”.$"

Naranja_7islasPomelo_G03_M04_Text_08175916::
# 412 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "It’s titled “THE BIRTH OF\n{STR_VAR_1}”.$"

Naranja_7islasPomelo_G03_M04_Text_08175935::
# 416 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\nCool, huh?\pIt’s, like, the coolest thing going!\pIt was awesome!\nIt was the real thing, oh yeah!$"

Naranja_7islasPomelo_G03_M04_Text_081759A1::
# 420 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Oh, no, no, no.\pThat alleged\n“{STR_VAR_1}”\lyou claim to have seen - it’s not.\pThe authentic article is much...\nHow should I say it?\lSharper, yet more mellifluous!\pAh, no matter. It’s astonishing!$"

Naranja_7islasPomelo_G03_M04_Text_08175A5C::
# 424 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Hey, listen, I composed a theme song\nfor “{STR_VAR_1}.”\p“{STR_VAR_1}”\nis really popular right now.\pOkay, listen!\n... ...\pOh!\n{STR_VAR_1}!\pWonderful\n{STR_VAR_1}!$"

Naranja_7islasPomelo_G03_M04_Text_08175AD9::
# 428 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "... ...\pI dare say, chap, it would pay for you\nto work on your singing before you\ltrifle yourself with\l“{STR_VAR_1}.”$"

Naranja_7islasPomelo_G03_M04_Text_08175B46::
# 432 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Anyway, as I was saying earlier, we\nshould get together and organize a\l“{STR_VAR_1}” party\lon the island.$"

Naranja_7islasPomelo_G03_M04_Text_08175BA7::
# 436 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Oh, a smashing good idea!\pIt will settle once and for all\nwho is the best at\l“{STR_VAR_1}.”\lBrilliant, indeed!\pStarting today, our lives will revolve\naround “{STR_VAR_1}”!$"

Naranja_7islasPomelo_G03_M04_Text_08175C41::
# 440 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "I was thinking, though...\pWouldn’t you agree that\n“{STR_VAR_1}” has\lgrown from being something trendy to\lbeing a part of our daily lives?$"

Naranja_7islasPomelo_G03_M04_Text_08175CC2::
# 444 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Beg pardon?\nThat much, what?\pHowever, it’s true that\n“{STR_VAR_1}”\lweighs heavily on your mind, whether\lyou’re awake or asleep.\pAbsolutely, you’re the\n“{STR_VAR_1}”\lPROFESSOR, old sport!$"

Naranja_7islasPomelo_G03_M04_Text_08175D6B::
# 448 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "If you and me team up as a combo,\nwe’ll be invincible when it comes to all\lthings “{STR_VAR_1}”!$"

Naranja_7islasPomelo_G03_M04_Text_08175DC3::
# 452 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Spot on, my friend!\pWe shall be the\n“{STR_VAR_1}” DUO!\pIsn’t that a ripe image?\nHahahah!$"

Naranja_7islasPomelo_G03_M04_Text_08175E13::
# 456 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "For me, SLUDGE BOMB is at the peak\nof popularity. It’s the one.\pHunh? You’re telling me that you don’t\nknow about SLUDGE BOMB?\pThat’s outright pitiful.\nI’ll give you one.$"

Naranja_7islasPomelo_G03_M04_Text_08175EBE::
# 460 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "I love SLUDGE BOMB.\pBut POKéMON with the\n“{STR_VAR_1}”\lmove are in, too.$"

Naranja_7islasPomelo_G03_M04_Text_081A0CC2::
# 464 "data/maps/Naranja_7islasPomelo_G03_M04/scripts.pory"
	.string "Vaya\nTu mochila está llena…$"
