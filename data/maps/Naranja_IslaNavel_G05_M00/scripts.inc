Naranja_IslaNavel_G05_M00_MapScripts::
	.byte 0


Naranja_IslaNavel_G05_M00_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId1::
# 8 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M00_Text_08170CEB
# 9 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M00_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 14 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M00_Text_08176FF0
# 15 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M00_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId3::
# 20 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M00_Text_081770E2
# 21 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	callstd 2
	end


Naranja_IslaNavel_G05_M00_EventScript_OBJ_EVENT_GFX_SKITTY_LocalId4::
# 26 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	lock
# 27 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	waitse
# 29 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 30 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	loadword 0, Naranja_IslaNavel_G05_M00_Text_081770D3
# 31 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	waitmoncry
# 33 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	release
	end


Naranja_IslaNavel_G05_M00_Text_08170CEB::
# 37 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	.string "The air is tasty here!$"

Naranja_IslaNavel_G05_M00_Text_08176FF0::
# 41 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	.string "I’m having a hard time deciding if I\nshould make my SKITTY evolve or not.\pI only have to use this MOON STONE,\nbut it’s so hard to decide...\pIf I make it evolve, it will become\nmuch stronger.\pBut it will look so different, too.$"

Naranja_IslaNavel_G05_M00_Text_081770D3::
# 45 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	.string "SKITTY: Miyao?$"

Naranja_IslaNavel_G05_M00_Text_081770E2::
# 49 "data/maps/Naranja_IslaNavel_G05_M00/scripts.pory"
	.string "This NUGGET I found here...\nI suppose I’ll have to sell it, seeing\las how it has no other use.$"
