Naranja_MellsweetIsland_House1_MapScripts::
	.byte 0


Naranja_MellsweetIsland_House1_EventScript_BlackBelt::
# 8 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	lock
# 9 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	bufferleadmonspeciesname 0
# 11 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	msgbox Naranja_MellsweetIsland_House1_Text_0818D465, MSGBOX_DEFAULT
# 12 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 13 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	goto_if EQUAL, Naranja_MellsweetIsland_House1_EventScript_Sub_0815A855
# 15 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	msgbox Naranja_MellsweetIsland_House1_Text_0818D475, MSGBOX_DEFAULT
# 16 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	release
	end


Naranja_MellsweetIsland_House1_EventScript_Sub_0815A855::
# 21 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	msgbox Naranja_MellsweetIsland_House1_Text_0818D4C0, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	release
	end


Naranja_MellsweetIsland_House1_EventScript_Woman3::
# 27 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	msgbox Naranja_MellsweetIsland_House1_Text_0818D4F1, MSGBOX_NPC
	end


Naranja_MellsweetIsland_House1_Text_0818D465::
# 31 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	.string "Hmm!\nYour {STR_VAR_1}...$"

Naranja_MellsweetIsland_House1_Text_0818D475::
# 35 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	.string "It likes {STR_VAR_1}S,\ndoesn’t it?\pNo, I’m positive of it! It definitely\nlikes {STR_VAR_1}S!$"

Naranja_MellsweetIsland_House1_Text_0818D4C0::
# 39 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	.string "It doesn’t appear to like or dislike\nany オカキクケS.$"

Naranja_MellsweetIsland_House1_Text_0818D4F1::
# 43 "data/maps/Naranja_MellsweetIsland_House1/scripts.pory"
	.string "My husband can tell what kind of\nオカキクケS a POKéMON likes at a glance.$"
