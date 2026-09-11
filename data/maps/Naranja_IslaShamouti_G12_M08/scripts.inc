Naranja_IslaShamouti_G12_M08_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M08_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M08_Text_0818696D
# 9 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M08_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId3::
# 14 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M08_Text_081869D6
# 15 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	callstd 2
	end


Naranja_IslaShamouti_G12_M08_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId2::
# 20 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	waitse
# 23 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 24 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M08_Text_08186A4F
# 25 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	waitmoncry
# 27 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M08_Text_0818696D::
# 31 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	.string "The tree houses of FORTREE are great!\pI think it’s the number one town for\nliving together with POKéMON.$"

Naranja_IslaShamouti_G12_M08_Text_081869D6::
# 35 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	.string "POKéMON and people have adapted to\nnature to survive.\pThere’s no need to make nature\nconform to the way we want to live.$"

Naranja_IslaShamouti_G12_M08_Text_08186A4F::
# 39 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	.string "ZIGZAGOON: Bufuu!$"
