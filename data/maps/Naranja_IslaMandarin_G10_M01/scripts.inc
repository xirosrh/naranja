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
	msgbox Naranja_IslaMandarin_G10_M01_Text_08180F9F, MSGBOX_DEFAULT
# 15 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181016, MSGBOX_YESNO
# 16 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 17 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156824
# 18 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156817
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567D1::
# 24 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181016, MSGBOX_YESNO
# 25 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 26 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156824
# 27 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 28 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156817
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567F0::
# 33 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081810B1
# 34 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 35 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	multichoice 0x15, 8, 0xC, 1
# 36 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 37 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 38 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815682D
# 39 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 40 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156847
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156817::
# 45 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0059
# 46 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181067, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156824::
# 52 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_005A
# 53 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_081567F0
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815682D::
# 57 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181332, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x103
# 59 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 60 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 61 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156847::
# 65 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_0818134A, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x110
# 67 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 68 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 69 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861::
# 73 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181362, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	special SwapRegisteredBike
# 75 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815686E::
# 80 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_081813A0, MSGBOX_YESNO
# 81 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 82 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815688D
# 83 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 84 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568BF
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815688D::
# 89 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_081813D4, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	checkitem ITEM_ACRO_BIKE, 1
# 91 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 92 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568C9
# 93 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	checkitem ITEM_MACH_BIKE, 1
# 94 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 95 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568EA
# 96 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181498, MSGBOX_DEFAULT
# 97 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568BF::
# 102 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181469, MSGBOX_DEFAULT
# 103 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568C9::
# 108 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	incrementgamestat 4
# 109 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181439, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	removeitem ITEM_ACRO_BIKE, 1
# 111 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x103
# 112 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 113 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 114 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081568EA::
# 118 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	incrementgamestat 4
# 119 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181408, MSGBOX_DEFAULT
# 120 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	removeitem ITEM_MACH_BIKE, 1
# 121 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x110
# 122 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 123 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	callstd 0
# 124 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156861
	return


Naranja_IslaMandarin_G10_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 128 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M01_Text_08181568, MSGBOX_NPC
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sign_1::
# 133 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081815EA
# 134 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 135 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920::
# 139 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	multichoice 0, 0, 0x2B, 0
# 140 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 141 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 142 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156962
# 143 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 144 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815696E
# 145 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 146 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815697A
# 147 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 148 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156986
# 149 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 150 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156986
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156962::
# 155 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_0818162C
# 156 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 157 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815696E::
# 161 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081816F5
# 162 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 163 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_0815697A::
# 167 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081817BF
# 168 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 169 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156920
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156986::
# 173 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sign_2::
# 178 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_08181892
# 179 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 180 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994::
# 184 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	multichoice 0, 0, 0x2C, 0
# 185 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 186 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 187 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569D6
# 188 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 189 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569E2
# 190 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 191 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569EE
# 192 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 193 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569FA
# 194 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 195 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569FA
	end


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569D6::
# 200 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_081818D4
# 201 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 202 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569E2::
# 206 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_0818199A
# 207 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 208 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569EE::
# 212 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	message Naranja_IslaMandarin_G10_M01_Text_08181A3D
# 213 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	waitmessage
# 214 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	goto Naranja_IslaMandarin_G10_M01_EventScript_Sub_08156994
	return


Naranja_IslaMandarin_G10_M01_EventScript_Sub_081569FA::
# 218 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M01_Text_08180F9F::
# 222 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Well, well, what have we here?\nA most energetic customer!\pMe? You may call me RYDEL.\nI’m the owner of this cycle shop.$"

Naranja_IslaMandarin_G10_M01_Text_08181016::
# 226 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES...\nThey’re awfully filthy.\pDid you come from far away?$"

Naranja_IslaMandarin_G10_M01_Text_08181067::
# 230 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Is that right?\pThen, I guess you have no need for\nany of my BIKES.$"

Naranja_IslaMandarin_G10_M01_Text_081810B1::
# 234 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Hm, hm... ... ... ... ...\n... ... ... ... ... ... ... ...\pYou’re saying that you came all this\nway from LITTLEROOT?\pMy goodness!\nThat’s ridiculously far!\pIf you had one of my BIKES, you could\ngo anywhere easily while feeling the\lgentle caress of the wind!\pI’ll tell you what!\nI’ll give you a BIKE!\pOh, wait a second!\pI forgot to tell you that there are\ntwo kinds of BIKES!\pThey are the MACH BIKE and the\nACRO BIKE!\pMACH BIKE is for cyclists who want\nto feel the wind with their bodies!\pAnd an ACRO BIKE is for those who\nprefer technical rides!\pI’m a real sweetheart, so you can\nhave whichever one you like!\pWhich one will you choose?$"

Naranja_IslaMandarin_G10_M01_Text_08181332::
# 238 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_0818134A::
# 242 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_08181362::
# 246 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: If you get the urge to switch\nBIKES, just come see me!$"

Naranja_IslaMandarin_G10_M01_Text_081813A0::
# 250 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Oh? Were you thinking about\nswitching BIKES?$"

Naranja_IslaMandarin_G10_M01_Text_081813D4::
# 254 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Okay, no problem!\nI’ll switch BIKES for you!$"

Naranja_IslaMandarin_G10_M01_Text_08181408::
# 258 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\nfor an ACRO BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_08181439::
# 262 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\nfor a MACH BIKE.$"

Naranja_IslaMandarin_G10_M01_Text_08181469::
# 266 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "RYDEL: Good, good!\nI’m happy that you like it!$"

Naranja_IslaMandarin_G10_M01_Text_08181498::
# 270 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Oh? What happened to that BIKE I\ngave you?\pOh, I get it, you stored it using your PC.\pWell, take it out of PC storage,\nand I’ll be happy to exchange it!\pMay the wind always be at your back\non your adventure!$"

Naranja_IslaMandarin_G10_M01_Text_08181568::
# 274 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "I’m learning about BIKES while\nI work here.\pIf you need advice on how to ride your\nBIKE, there’re a couple handbooks in\lthe back.$"

Naranja_IslaMandarin_G10_M01_Text_081815EA::
# 278 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "It’s a handbook on the MACH BIKE.\pWhich page do you want to read?$"

Naranja_IslaMandarin_G10_M01_Text_0818162C::
# 282 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "A BIKE moves in the direction that\nthe + Control Pad is pressed.\pIt will speed up once it gets rolling.\pTo stop, release the + Control Pad.\nThe BIKE will slow to a stop.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_081816F5::
# 286 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "A MACH BIKE is speedy, but it can’t\nstop very quickly.\pIt gets a little tricky to get around\na corner.\pRelease the + Control Pad a little\nbefore the corner and slow down.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_081817BF::
# 290 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "There are small sandy slopes throughout\nthe HOENN region.\pThe loose, crumbly sand makes it\nimpossible to climb normally.\pBut if you have a MACH BIKE, you can\nzip up a sandy slope.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_08181892::
# 294 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "It’s a handbook on the ACRO BIKE.\pWhich page do you want to read?$"

Naranja_IslaMandarin_G10_M01_Text_081818D4::
# 298 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Press the B Button while riding, and the\nfront wheel lifts up.\pYou can zip around with the front\nwheel up using the + Control Pad.\pThis technique is called a wheelie.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_0818199A::
# 302 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Keeping the B Button pressed, your\nBIKE can hop on the spot.\pThis technique is called a bunny hop.\pYou can ride while hopping, too.\pWant to read a different page?$"

Naranja_IslaMandarin_G10_M01_Text_08181A3D::
# 306 "data/maps/Naranja_IslaMandarin_G10_M01/scripts.pory"
	.string "Press the B Button and the + Control\nPad at the same time to jump.\pPress the + Control Pad to the side\nto jump sideways.\pPress it backwards to make the BIKE\nchange directions while jumping.\pWant to read a different page?$"
