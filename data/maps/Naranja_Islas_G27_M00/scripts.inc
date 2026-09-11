Naranja_Islas_G27_M00_MapScripts::
	.byte 0


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId7::
# 8 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	lock
# 9 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x74
# 11 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160C99
# 12 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x75
# 13 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160C99
# 14 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x1E5
# 15 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160C99
# 16 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x1E6
# 17 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160C99
# 18 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x279
# 19 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160C99
# 20 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x27A
# 21 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160C99
# 22 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D7
# 23 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B267
# 24 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 4
# 25 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D8
# 26 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G27_M00_EventScript_Sub_08160CFB
# 27 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_Sub_08160C99::
# 32 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B22E
# 33 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId8::
# 39 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	lock
# 40 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	faceplayer
# 41 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x74
# 42 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 43 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x75
# 44 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 45 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x1E5
# 46 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 47 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x1E6
# 48 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 49 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x279
# 50 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 51 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x27A
# 52 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 53 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D8
# 54 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B2E9
# 55 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D7
# 57 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G27_M00_EventScript_Sub_08160CFB
# 58 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_Sub_08160CF1::
# 63 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B2B6
# 64 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 4
# 65 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_Sub_08160CFB::
# 70 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	closemessage
# 71 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	delay 0x3C
# 72 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	fadescreen 1
# 73 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	delay 0x3C
# 74 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	special DoSoftReset
# 75 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	waitstate
# 76 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId12::
# 81 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B33B
# 82 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 2
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId11::
# 87 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B37F
# 88 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 2
	end


Naranja_Islas_G27_M00_EventScript_Sign_1::
# 93 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B3DE
# 94 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 3
	end


Naranja_Islas_G27_M00_EventScript_Sign_2::
# 99 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B3FF
# 100 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 3
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 105 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_117, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AD9B, Naranja_Islas_G27_M00_Text_0819ADDA
# 106 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819ADF7
# 107 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 6
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId9::
# 112 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLAS_485, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AE3E, Naranja_Islas_G27_M00_Text_0819AE53, Naranja_Islas_G27_M00_Text_0819AEA9
# 113 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819AE6A
# 114 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 6
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2::
# 119 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLAS_486, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819B148, Naranja_Islas_G27_M00_Text_0819B17D, Naranja_Islas_G27_M00_Text_0819B1DD
# 120 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B18D
# 121 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 6
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_HIKER_LocalId4::
# 126 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_634, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AEFB, Naranja_Islas_G27_M00_Text_0819AF3E
# 127 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819AF56
# 128 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 6
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId5::
# 133 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_116, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AF8A, Naranja_Islas_G27_M00_Text_0819AFDB
# 134 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B00D
# 135 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 6
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_HIKER_LocalId6::
# 140 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_633, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819B066, Naranja_Islas_G27_M00_Text_0819B0D7
# 141 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	loadword 0, Naranja_Islas_G27_M00_Text_0819B0EF
# 142 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	callstd 6
	end


Naranja_Islas_G27_M00_Text_0819AD9B::
# 146 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Oh? You look like a good TRAINER.\nWill you look at my POKéMON?$"

Naranja_Islas_G27_M00_Text_0819ADDA::
# 150 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I’m not good enough for you.$"

Naranja_Islas_G27_M00_Text_0819ADF7::
# 154 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I enjoyed our battle very much.\nPlease battle with me some other time.$"

Naranja_Islas_G27_M00_Text_0819AE3E::
# 158 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Go!\nGo, our POKéMON!$"

Naranja_Islas_G27_M00_Text_0819AE53::
# 162 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Oh... We couldn’t win.$"

Naranja_Islas_G27_M00_Text_0819AE6A::
# 166 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Did it surprise you that two POKéMON\nbattled at the same time?$"

Naranja_Islas_G27_M00_Text_0819AEA9::
# 170 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "You can’t battle with us if you have\nonly one POKéMON.\lWhy? Because we’re strong!$"

Naranja_Islas_G27_M00_Text_0819AEFB::
# 174 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Hey, hey! This is my first battle in\na while. I’ll give it my all!$"

Naranja_Islas_G27_M00_Text_0819AF3E::
# 178 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "But I gave it my all...$"

Naranja_Islas_G27_M00_Text_0819AF56::
# 182 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "You’re far too strong!\nYou must be a great TRAINER!$"

Naranja_Islas_G27_M00_Text_0819AF8A::
# 186 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "My POKéMON are extremely cute and\nextremely strong.\lPlease allow me to show you.$"

Naranja_Islas_G27_M00_Text_0819AFDB::
# 190 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I must concede defeat.\nAfter all, you are strong.$"

Naranja_Islas_G27_M00_Text_0819B00D::
# 194 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "The next time we meet, I will have raised\nmy POKéMON much more.\pDon’t expect mercy then!$"

Naranja_Islas_G27_M00_Text_0819B066::
# 198 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "We HIKERS are always full of energy!\nMy POKéMON are also full of energy, too.\lWe’re always itching for a battle!$"

Naranja_Islas_G27_M00_Text_0819B0D7::
# 202 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "We ran out of energy...$"

Naranja_Islas_G27_M00_Text_0819B0EF::
# 206 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Wahahah! Sure, we lost!\nBut we had a great battle, didn’t we?\lWe’re satisfied with that!$"

Naranja_Islas_G27_M00_Text_0819B148::
# 210 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "You look like a strong TRAINER,\nbut can you beat us?$"

Naranja_Islas_G27_M00_Text_0819B17D::
# 214 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Waaah!\nWe lost!$"

Naranja_Islas_G27_M00_Text_0819B18D::
# 218 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "If two POKéMON can battle at the same\ntime, all sorts of new things can happen.$"

Naranja_Islas_G27_M00_Text_0819B1DD::
# 222 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Do you only have one POKéMON that can\nbattle?\pThen we can’t battle with you yet.$"

Naranja_Islas_G27_M00_Text_0819B22E::
# 226 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Have you tried beating all the other\nTRAINERS in battle?$"

Naranja_Islas_G27_M00_Text_0819B267::
# 230 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Thanks for coming today!\pI hope you’re looking forward to this\ngame’s release!$"

Naranja_Islas_G27_M00_Text_0819B2B6::
# 234 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Huh? Did you battle with all the\nTRAINERS already?$"

Naranja_Islas_G27_M00_Text_0819B2E9::
# 238 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Thank you for coming today!\pI hope you’re looking forward to this\ngame’s release!$"

Naranja_Islas_G27_M00_Text_0819B33B::
# 242 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I’ve never seen the POKéMON you have.\nIt makes me envious a little.$"

Naranja_Islas_G27_M00_Text_0819B37F::
# 246 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Look at all those TRAINERS!\nThey have different POKéMON, too.\lAnd they’re all waiting for you!$"

Naranja_Islas_G27_M00_Text_0819B3DE::
# 250 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Welcome to the World of POKéMON!$"

Naranja_Islas_G27_M00_Text_0819B3FF::
# 254 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "May all POKéMON battles be bright,\nfun, and ferocious!$"
