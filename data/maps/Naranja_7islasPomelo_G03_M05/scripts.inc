Naranja_7islasPomelo_G03_M05_MapScripts::
	.byte 0


Naranja_7islasPomelo_G03_M05_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 8 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	lock
# 9 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0121
# 11 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M05_EventScript_Sub_08153615
# 12 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M05_Text_08175EFE
# 13 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD9
# 15 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	callstd 0
# 17 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 18 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M05_EventScript_Sub_0815360B
# 19 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0121
# 20 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M05_EventScript_Sub_0815360B::
# 25 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M05_Text_08175FDA
# 26 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M05_EventScript_Sub_08153615::
# 32 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M05_Text_08176055
# 33 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	release
	end


Naranja_7islasPomelo_G03_M05_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId2::
# 39 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M05_Text_081760C8
# 40 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	callstd 2
	end


Naranja_7islasPomelo_G03_M05_Text_08175EFE::
# 44 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	.string "Gorge your eyes on this!\pIt’s a SILK SCARF. It’s right at the\ncutting edge of fashion, yeah!\pOh, I can see your eyes twinkling!\nYou appreciate my dazzling style!\pOh, you’re a delight!\nHere you go. I want you to have it!$"

Naranja_7islasPomelo_G03_M05_Text_08175FDA::
# 48 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	.string "Oh, you don’t have room?\pNow, listen tight, this SCARF is a must-\nhave! Why, I would sell all my items\lin order to get it!$"

Naranja_7islasPomelo_G03_M05_Text_08176055::
# 52 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	.string "The SILK SCARF raises the power of\nNORMAL-type moves.\pIt’s a marvelous SCARF that will go\nwith almost all POKéMON!$"

Naranja_7islasPomelo_G03_M05_Text_081760C8::
# 56 "data/maps/Naranja_7islasPomelo_G03_M05/scripts.pory"
	.string "Wow, you bothered to cross the sea\nto visit DEWFORD?\pDid you maybe come here because you\nheard about BRAWLY?\pHe’s so cool...\nEveryone idolizes him.$"
