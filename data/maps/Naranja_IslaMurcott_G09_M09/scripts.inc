Naranja_IslaMurcott_G09_M09_MapScripts::
	.byte 0


Naranja_IslaMurcott_G09_M09_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 8 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M09_Text_081804CF
# 9 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M09_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId2::
# 14 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 17 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 18 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M09_EventScript_Sub_081563B5
# 19 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M09_Text_08180567
# 20 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	callstd 4
# 21 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M09_EventScript_Sub_081563B5::
# 26 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M09_Text_081805CD
# 27 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	callstd 4
# 28 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M09_Text_081804CF::
# 32 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	.string "My POKéMON has a HASTY nature.\pIt has higher SPEED compared to my\nother POKéMON.\pMaybe their nature has something to\ndo with the stat gains of POKéMON.$"

Naranja_IslaMurcott_G09_M09_Text_08180567::
# 36 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	.string "You need a CONTEST PASS to enter a\nCONTEST.\pIt’s easy to get. They give it to\nanyone who has POKéMON.$"

Naranja_IslaMurcott_G09_M09_Text_081805CD::
# 40 "data/maps/Naranja_IslaMurcott_G09_M09/scripts.pory"
	.string "Oh, a CONTEST PASS!\nYou’re going to be a contestant?$"
