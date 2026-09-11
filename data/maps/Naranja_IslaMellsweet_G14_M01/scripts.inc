Naranja_IslaMellsweet_G14_M01_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M01_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	bufferleadmonspeciesname 0
# 11 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M01_Text_0818D465
# 12 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	callstd 4
# 13 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 14 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 15 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M01_EventScript_Sub_0815A855
# 16 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M01_Text_0818D475
# 17 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	callstd 4
# 18 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M01_EventScript_Sub_0815A855::
# 23 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M01_Text_0818D4C0
# 24 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	callstd 4
# 25 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M01_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 30 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M01_Text_0818D4F1
# 31 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M01_Text_0818D465::
# 35 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	.string "Hmm!\nYour {STR_VAR_1}...$"

Naranja_IslaMellsweet_G14_M01_Text_0818D475::
# 39 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	.string "It likes {STR_VAR_1}S,\ndoesn’t it?\pNo, I’m positive of it! It definitely\nlikes {STR_VAR_1}S!$"

Naranja_IslaMellsweet_G14_M01_Text_0818D4C0::
# 43 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	.string "It doesn’t appear to like or dislike\nany オカキクケS.$"

Naranja_IslaMellsweet_G14_M01_Text_0818D4F1::
# 47 "data/maps/Naranja_IslaMellsweet_G14_M01/scripts.pory"
	.string "My husband can tell what kind of\nオカキクケS a POKéMON likes at a glance.$"
