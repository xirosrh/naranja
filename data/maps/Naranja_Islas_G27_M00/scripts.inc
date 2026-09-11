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
	msgbox Naranja_Islas_G27_M00_Text_0819B267, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D8
# 25 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G27_M00_EventScript_Sub_08160CFB
# 26 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_Sub_08160C99::
# 31 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B22E, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId8::
# 37 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	lock
# 38 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	faceplayer
# 39 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x74
# 40 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 41 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x75
# 42 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 43 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x1E5
# 44 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 45 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x1E6
# 46 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 47 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x279
# 48 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 49 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checktrainerflag 0x27A
# 50 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Islas_G27_M00_EventScript_Sub_08160CF1
# 51 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D8
# 52 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B2E9, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00D7
# 54 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	goto_if EQUAL, Naranja_Islas_G27_M00_EventScript_Sub_08160CFB
# 55 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_Sub_08160CF1::
# 60 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B2B6, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_Sub_08160CFB::
# 66 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	closemessage
# 67 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	delay 0x3C
# 68 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	fadescreen 1
# 69 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	delay 0x3C
# 70 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	special DoSoftReset
# 71 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	waitstate
# 72 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	release
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId12::
# 77 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B33B, MSGBOX_NPC
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId11::
# 82 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B37F, MSGBOX_NPC
	end


Naranja_Islas_G27_M00_EventScript_Sign_1::
# 87 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B3DE, MSGBOX_SIGN
	end


Naranja_Islas_G27_M00_EventScript_Sign_2::
# 92 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B3FF, MSGBOX_SIGN
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 97 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_117, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AD9B, Naranja_Islas_G27_M00_Text_0819ADDA
# 98 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819ADF7, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId9::
# 103 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLAS_485, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AE3E, Naranja_Islas_G27_M00_Text_0819AE53, Naranja_Islas_G27_M00_Text_0819AEA9
# 104 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819AE6A, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2::
# 109 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ISLAS_486, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819B148, Naranja_Islas_G27_M00_Text_0819B17D, Naranja_Islas_G27_M00_Text_0819B1DD
# 110 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B18D, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_HIKER_LocalId4::
# 115 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_634, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AEFB, Naranja_Islas_G27_M00_Text_0819AF3E
# 116 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819AF56, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId5::
# 121 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_116, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819AF8A, Naranja_Islas_G27_M00_Text_0819AFDB
# 122 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B00D, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G27_M00_EventScript_OBJ_EVENT_GFX_HIKER_LocalId6::
# 127 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLAS_633, LOCALID_NONE, Naranja_Islas_G27_M00_Text_0819B066, Naranja_Islas_G27_M00_Text_0819B0D7
# 128 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	msgbox Naranja_Islas_G27_M00_Text_0819B0EF, MSGBOX_AUTOCLOSE
	end


Naranja_Islas_G27_M00_Text_0819AD9B::
# 132 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Oh? You look like a good TRAINER.\nWill you look at my POKéMON?$"

Naranja_Islas_G27_M00_Text_0819ADDA::
# 136 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I’m not good enough for you.$"

Naranja_Islas_G27_M00_Text_0819ADF7::
# 140 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I enjoyed our battle very much.\nPlease battle with me some other time.$"

Naranja_Islas_G27_M00_Text_0819AE3E::
# 144 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Go!\nGo, our POKéMON!$"

Naranja_Islas_G27_M00_Text_0819AE53::
# 148 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Oh... We couldn’t win.$"

Naranja_Islas_G27_M00_Text_0819AE6A::
# 152 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Did it surprise you that two POKéMON\nbattled at the same time?$"

Naranja_Islas_G27_M00_Text_0819AEA9::
# 156 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "You can’t battle with us if you have\nonly one POKéMON.\lWhy? Because we’re strong!$"

Naranja_Islas_G27_M00_Text_0819AEFB::
# 160 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Hey, hey! This is my first battle in\na while. I’ll give it my all!$"

Naranja_Islas_G27_M00_Text_0819AF3E::
# 164 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "But I gave it my all...$"

Naranja_Islas_G27_M00_Text_0819AF56::
# 168 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "You’re far too strong!\nYou must be a great TRAINER!$"

Naranja_Islas_G27_M00_Text_0819AF8A::
# 172 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "My POKéMON are extremely cute and\nextremely strong.\lPlease allow me to show you.$"

Naranja_Islas_G27_M00_Text_0819AFDB::
# 176 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I must concede defeat.\nAfter all, you are strong.$"

Naranja_Islas_G27_M00_Text_0819B00D::
# 180 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "The next time we meet, I will have raised\nmy POKéMON much more.\pDon’t expect mercy then!$"

Naranja_Islas_G27_M00_Text_0819B066::
# 184 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "We HIKERS are always full of energy!\nMy POKéMON are also full of energy, too.\lWe’re always itching for a battle!$"

Naranja_Islas_G27_M00_Text_0819B0D7::
# 188 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "We ran out of energy...$"

Naranja_Islas_G27_M00_Text_0819B0EF::
# 192 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Wahahah! Sure, we lost!\nBut we had a great battle, didn’t we?\lWe’re satisfied with that!$"

Naranja_Islas_G27_M00_Text_0819B148::
# 196 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "You look like a strong TRAINER,\nbut can you beat us?$"

Naranja_Islas_G27_M00_Text_0819B17D::
# 200 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Waaah!\nWe lost!$"

Naranja_Islas_G27_M00_Text_0819B18D::
# 204 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "If two POKéMON can battle at the same\ntime, all sorts of new things can happen.$"

Naranja_Islas_G27_M00_Text_0819B1DD::
# 208 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Do you only have one POKéMON that can\nbattle?\pThen we can’t battle with you yet.$"

Naranja_Islas_G27_M00_Text_0819B22E::
# 212 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Have you tried beating all the other\nTRAINERS in battle?$"

Naranja_Islas_G27_M00_Text_0819B267::
# 216 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Thanks for coming today!\pI hope you’re looking forward to this\ngame’s release!$"

Naranja_Islas_G27_M00_Text_0819B2B6::
# 220 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Huh? Did you battle with all the\nTRAINERS already?$"

Naranja_Islas_G27_M00_Text_0819B2E9::
# 224 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Thank you for coming today!\pI hope you’re looking forward to this\ngame’s release!$"

Naranja_Islas_G27_M00_Text_0819B33B::
# 228 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "I’ve never seen the POKéMON you have.\nIt makes me envious a little.$"

Naranja_Islas_G27_M00_Text_0819B37F::
# 232 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Look at all those TRAINERS!\nThey have different POKéMON, too.\lAnd they’re all waiting for you!$"

Naranja_Islas_G27_M00_Text_0819B3DE::
# 236 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "Welcome to the World of POKéMON!$"

Naranja_Islas_G27_M00_Text_0819B3FF::
# 240 "data/maps/Naranja_Islas_G27_M00/scripts.pory"
	.string "May all POKéMON battles be bright,\nfun, and ferocious!$"
