Naranja_SealedChamber_G24_M71_MapScripts::
# 5 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_SealedChamber_G24_M71_OnResume
# 6 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_SealedChamber_G24_M71_OnTransition
# 7 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_SealedChamber_G24_M71_OnLoad
	.byte 0


Naranja_SealedChamber_G24_M71_OnResume::
# 11 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setdivewarp MAP_NARANJA_UNDERWATER_G24_M70, 0xFF, 0xC, 0x2C
# 12 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setescapewarp MAP_NARANJA_UNDERWATER_G24_M70, 0xFF, 0xC, 0x2C
	end


Naranja_SealedChamber_G24_M71_OnTransition::
# 17 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_085C
	end


Naranja_SealedChamber_G24_M71_OnLoad::
# 22 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	checkflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_084F
# 23 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	call_if LESS_THAN, Naranja_SealedChamber_G24_M71_EventScript_Sub_0815F0F5
	end


Naranja_SealedChamber_G24_M71_EventScript_Sub_0815F0F5::
# 28 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setmetatile 9, 1, 0x229, 1
# 29 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setmetatile 0xA, 1, 0x229, 1
# 30 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setmetatile 0xB, 1, 0x229, 1
# 31 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setmetatile 9, 2, 0x235, 1
# 32 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setmetatile 0xA, 2, 0x235, 1
# 33 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	setmetatile 0xB, 2, 0x235, 1
	return


Naranja_SealedChamber_G24_M71_EventScript_Sign_1::
# 38 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 39 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C534F
# 40 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 41 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 42 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_2::
# 47 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 48 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C5359
# 49 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 50 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 51 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_3::
# 56 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 57 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C5363
# 58 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 59 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 60 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_4::
# 65 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 66 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C536D
# 67 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 68 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 69 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_5::
# 74 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 75 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C5377
# 76 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 77 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 78 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_6::
# 83 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 84 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C5381
# 85 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 86 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 87 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_7::
# 92 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 93 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C538B
# 94 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 95 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 96 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_9::
# 101 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 102 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C5396
# 103 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 104 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 105 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_8::
# 110 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 111 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C539E
# 112 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 113 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 114 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_10::
# 119 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 120 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C53A9
# 121 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 122 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 123 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_11::
# 128 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 129 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	checkflag FLAG_NARANJA_SEALED_CHAMBER_EVENT_COMPLETE_084F
# 130 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	goto_if EQUAL, Naranja_SealedChamber_G24_M71_EventScript_Sub_0815F1CF
# 131 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C53B1
# 132 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 133 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 134 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sub_0815F1CF::
# 139 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	msgbox Naranja_AncientTomb_G24_M68_Text_081A13BE, MSGBOX_DEFAULT
# 140 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_EventScript_Sign_28::
# 145 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	lockall
# 146 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	braillemessage Naranja_SealedChamber_G24_M71_Text_081C53B1
# 147 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	waitbuttonpress
# 148 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 149 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	releaseall
	end


Naranja_SealedChamber_G24_M71_Text_081C534F::
# 153 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÌÉÛÒÏÌÀÈÂ$"

Naranja_SealedChamber_G24_M71_Text_081C5359::
# 157 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÌÉÛÒÏÌÔÒÉ$"

Naranja_SealedChamber_G24_M71_Text_081C5363::
# 161 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÌÉÛÒÏÌÛéç$"

Naranja_SealedChamber_G24_M71_Text_081C536D::
# 165 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÌÉÛÒÏÌìぅ=$"

Naranja_SealedChamber_G24_M71_Text_081C5377::
# 169 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÌÉÛÒÏÌÎÌÊ$"

Naranja_SealedChamber_G24_M71_Text_081C5381::
# 173 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÌÉÛÒÏÌÓÙß$"

Naranja_SealedChamber_G24_M71_Text_081C538B::
# 177 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÊÉßÒÎÌáまëà$"

Naranja_SealedChamber_G24_M71_Text_081C5396::
# 181 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "こÉÚÒÓÌわ$"

Naranja_SealedChamber_G24_M71_Text_081C539E::
# 185 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÊÉßÒÎÌ+ぉごぐ$"

Naranja_SealedChamber_G24_M71_Text_081C53A9::
# 189 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "こÉÚÒÓÌÇ$"

Naranja_SealedChamber_G24_M71_Text_081C53B1::
# 193 "data/maps/Naranja_SealedChamber_G24_M71/scripts.pory"
	.string "ÈÉçÒÊÌÎÉÔ ÒÌëÌわ$"
