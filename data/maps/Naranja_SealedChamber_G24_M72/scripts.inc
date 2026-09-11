Naranja_SealedChamber_G24_M72_MapScripts::
	.byte 0


Naranja_SealedChamber_G24_M72_EventScript_Sign_1::
# 8 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 9 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C53C1
# 10 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 11 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 12 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	checkflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_00E4
# 13 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	goto_if EQUAL, Naranja_SealedChamber_G24_M72_EventScript_Sub_0815F247
# 14 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 15 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 16 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	goto_if EQUAL, Naranja_SealedChamber_G24_M72_EventScript_Sub_0815F247
# 17 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	fadeoutbgm 0
# 18 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	playse SE_TRUCK_MOVE
# 19 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 20 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitstate
# 21 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	delay 0x28
# 22 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 23 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitstate
# 24 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	playse SE_DOOR
# 25 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	delay 0x28
# 26 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 27 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitstate
# 28 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	playse SE_DOOR
# 29 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	delay 0x28
# 30 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 31 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitstate
# 32 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	playse SE_DOOR
# 33 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	delay 0x28
# 34 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	loadword 0, Naranja_SealedChamber_G24_M72_Text_081A138B
# 35 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	closemessage
# 37 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	fadeinbgm 0
# 38 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	setflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_00E4
# 39 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sub_0815F247::
# 44 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sign_2::
# 49 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 50 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C53F2
# 51 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 52 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 53 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sign_3::
# 58 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 59 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C5414
# 60 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 61 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 62 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sign_4::
# 67 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 68 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C5435
# 69 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 70 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 71 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sign_5::
# 76 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 77 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C545C
# 78 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 79 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 80 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sign_6::
# 85 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 86 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C5470
# 87 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 88 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 89 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_EventScript_Sign_7::
# 94 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	lockall
# 95 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M72_Text_081C549B
# 96 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	waitbuttonpress
# 97 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 98 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M72_Text_081A138B::
# 102 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "It sounded as if a door opened\nsomewhere far away.$"

Naranja_SealedChamber_G24_M72_Text_081C53C1::
# 106 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "Â éÛÈÂÊÉëàì ÂçÛÌà\nëÌßÉÂÀéìÒわ\nßÀàì ÂçÛÌà\n+ÀÉßçëÎわ$"

Naranja_SealedChamber_G24_M72_Text_081C53F2::
# 110 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "É àÛËÂÉé ìÒÉà\nÂÀ=Ì +Ì\nÒÀ=Ì\nßÉ=ÌÎわ$"

Naranja_SealedChamber_G24_M72_Text_081C5414::
# 114 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "ÇÁèÙÉÈ+Ì ç+Ì Àßß\nìç ìÒÌ\náçÙÌÛçéわ$"

Naranja_SealedChamber_G24_M72_Text_081C5435::
# 118 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "Â çÛÈÂÈぅìÇ +Ì\nàÌÀßÌÎ ìÒÌ\náçÙÌÛçé\nÀ+Àごわ$"

Naranja_SealedChamber_G24_M72_Text_081C545C::
# 122 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "ÀÉëÒÂÌ+Ì ÊÌÀëÌÎ Éìわ$"

Naranja_SealedChamber_G24_M72_Text_081C5470::
# 126 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "Ç èÛÉÂìÒçàÌ +ÉìÒ\nÂçぅëÀÔÌÇ\nìÒçàÌ +ÉìÒ\nÒçáÌわ$"

Naranja_SealedChamber_G24_M72_Text_081C549B::
# 130 "data/maps/Naranja_SealedChamber_G24_M72/scripts.pory"
	.string "Á êÛÇÂçáÌé À Îççëわ\nÀé ÌìÌëéÀß\náçÙÌÛçé\n+ÀÉìàわ$"
