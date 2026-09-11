Naranja_IslaShamouti_G12_M08_MapScripts::
	.byte 0


Naranja_IslaShamouti_G12_M08_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M08_Text_0818696D, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M08_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId3::
# 13 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M08_Text_081869D6, MSGBOX_NPC
	end


Naranja_IslaShamouti_G12_M08_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId2::
# 18 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	lock
# 19 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	waitse
# 21 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 22 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	msgbox Naranja_IslaShamouti_G12_M08_Text_08186A4F, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M08_Text_0818696D::
# 28 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	.string "The tree houses of FORTREE are great!\pI think it’s the number one town for\nliving together with POKéMON.$"

Naranja_IslaShamouti_G12_M08_Text_081869D6::
# 32 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	.string "POKéMON and people have adapted to\nnature to survive.\pThere’s no need to make nature\nconform to the way we want to live.$"

Naranja_IslaShamouti_G12_M08_Text_08186A4F::
# 36 "data/maps/Naranja_IslaShamouti_G12_M08/scripts.pory"
	.string "ZIGZAGOON: Bufuu!$"
