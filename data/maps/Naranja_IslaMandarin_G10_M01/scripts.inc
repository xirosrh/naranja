Naranja_IslaMandarin_G10_M01_MapScripts::
	.byte 0


Naranja_IslaMandarin_G10_M01_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_005A
# 11 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815686E
# 12 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0059
# 13 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567D1
# 14 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08180F9F
# 15 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 16 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181016
# 17 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 5
# 18 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 19 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156824
# 20 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 21 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156817
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567D1::
# 26 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181016
# 27 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 5
# 28 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 29 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156824
# 30 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 31 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156817
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567F0::
# 36 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081810B1
# 37 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 38 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	multichoice 0x15, 8, 0xC, 1
# 39 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 40 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 41 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815682D
# 42 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 43 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156847
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156817::
# 48 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0059
# 49 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181067
# 50 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156824::
# 56 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_005A
# 57 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567F0
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815682D::
# 61 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181332
# 62 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x103
# 64 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 65 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 66 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156847::
# 70 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_0818134A
# 71 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x110
# 73 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 74 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 75 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861::
# 79 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181362
# 80 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 81 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	special SwapRegisteredBike
# 82 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815686E::
# 87 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_081813A0
# 88 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 5
# 89 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 90 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815688D
# 91 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 92 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568BF
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815688D::
# 97 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_081813D4
# 98 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	checkitem ITEM_ACRO_BIKE, 1
# 100 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 101 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568C9
# 102 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	checkitem ITEM_MACH_BIKE, 1
# 103 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 104 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568EA
# 105 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181498
# 106 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 107 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568BF::
# 112 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181469
# 113 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568C9::
# 119 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	incrementgamestat 4
# 120 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181439
# 121 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 122 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	removeitem ITEM_ACRO_BIKE, 1
# 123 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x103
# 124 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 125 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 126 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568EA::
# 130 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	incrementgamestat 4
# 131 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181408
# 132 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 4
# 133 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	removeitem ITEM_MACH_BIKE, 1
# 134 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x110
# 135 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 136 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 137 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 141 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M01_Text_08181568
# 142 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sign_1::
# 147 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081815EA
# 148 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 149 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920::
# 153 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	multichoice 0, 0, 0x2B, 0
# 154 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 155 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 156 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156962
# 157 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 158 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815696E
# 159 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 160 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815697A
# 161 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 162 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156986
# 163 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 164 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156986
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156962::
# 169 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_0818162C
# 170 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 171 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815696E::
# 175 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081816F5
# 176 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 177 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815697A::
# 181 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081817BF
# 182 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 183 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156986::
# 187 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sign_2::
# 192 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_08181892
# 193 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 194 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994::
# 198 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	multichoice 0, 0, 0x2C, 0
# 199 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 200 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 201 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569D6
# 202 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 203 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569E2
# 204 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 205 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569EE
# 206 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 207 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569FA
# 208 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 209 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569FA
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569D6::
# 214 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081818D4
# 215 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 216 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569E2::
# 220 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_0818199A
# 221 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 222 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569EE::
# 226 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_08181A3D
# 227 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 228 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569FA::
# 232 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_Text_08180F9F::
# 236 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Well, well, what have we here?\nA most energetic customer!\pMe? You may call me RYDEL.\nI’m the owner of this cycle shop.$"

Naranja_IslaMandarin_G10_M01_Text_08181016::
# 240 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES...\nThey’re awfully filthy.\pDid you come from far away?$"

Naranja_IslaMandarin_G10_M01_Text_08181067::
# 244 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Is that right?\pThen, I guess you have no need for\nany of my BIKES.$"

Naranja_IslaMandarin_G10_M01_Text_081810B1::
# 248 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Hm, hm... ... ... ... ...\n... ... ... ... ... ... ... ...\pYou’re saying that you came all this\nway from LITTLEROOT?\pMy goodness!\nThat’s ridiculously far!\pIf you had one of my BIKES, you could\ngo anywhere easily while feeling the\lgentle caress of the wind!\pI’ll tell you what!\nI’ll give you a BIKE!\pOh, wait a second!\pI forgot to tell you that there are\ntwo kinds of BIKES!\pThey are the MACH BIKE and the\nACRO BIKE!\pMACH BIKE is for cyclists who want\nto feel the wind with their bodies!\pAnd an ACRO BIKE is for those who\nprefer technical rides!\pI’m a real sweetheart, so you can\nhave whichever one you like!\pWhich one will you choose?$"

Naranja_IslaMandarin_G10_M01_Text_08181332::
# 252 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_0818134A::
# 256 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_08181362::
# 260 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: If you get the urge to switch\nBIKES, just come see me!$"

Naranja_IslaMandarin_G10_M01_Text_081813A0::
# 264 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Oh? Were you thinking about\nswitching BIKES?$"

Naranja_IslaMandarin_G10_M01_Text_081813D4::
# 268 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Okay, no problem!\nI’ll switch BIKES for you!$"

Naranja_IslaMandarin_G10_M01_Text_08181408::
# 272 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\nfor an ACRO BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_08181439::
# 276 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\nfor a MACH BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_08181469::
# 280 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Good, good!\nI’m happy that you like it!$"

Naranja_IslaMandarin_G10_M01_Text_08181498::
# 284 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Oh? What happened to that BIKE I\ngave you?\pOh, I get it, you stored it using your PC.\pWell, take it out of PC storage,\nand I’ll be happy to exchange it!\pMay the wind always be at your back\non your adventure!$"

Naranja_IslaMandarin_G10_M01_Text_08181568::
# 288 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "I’m learning about BIKES while\nI work here.\pIf you need advice on how to ride your\nBIKE, there’re a couple handbooks in\lthe back.$"

Naranja_IslaMandarin_G10_M01_Text_081815EA::
# 292 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "It’s a handbook on the MACH BIKE.\pWhich page do you want to read?$"

Naranja_IslaMandarin_G10_M01_Text_0818162C::
# 296 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "A BIKE moves in the direction that\nthe + Control Pad is pressed.\pIt will speed up once it gets rolling.\pTo stop, release the + Control Pad.\nThe BIKE will slow to a stop.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_081816F5::
# 300 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "A MACH BIKE is speedy, but it can’t\nstop very quickly.\pIt gets a little tricky to get around\na corner.\pRelease the + Control Pad a little\nbefore the corner and slow down.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_081817BF::
# 304 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "There are small sandy slopes throughout\nthe HOENN region.\pThe loose, crumbly sand makes it\nimpossible to climb normally.\pBut if you have a MACH BIKE, you can\nzip up a sandy slope.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_08181892::
# 308 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "It’s a handbook on the ACRO BIKE.\pWhich page do you want to read?$"

Naranja_IslaMandarin_G10_M01_Text_081818D4::
# 312 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Press the B Button while riding, and the\nfront wheel lifts up.\pYou can zip around with the front\nwheel up using the + Control Pad.\pThis technique is called a wheelie.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_0818199A::
# 316 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Keeping the B Button pressed, your\nBIKE can hop on the spot.\pThis technique is called a bunny hop.\pYou can ride while hopping, too.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_08181A3D::
# 320 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Press the B Button and the + Control\nPad at the same time to jump.\pPress the + Control Pad to the side\nto jump sideways.\pPress it backwards to make the BIKE\nchange directions while jumping.\pWant to read a different page?$"
