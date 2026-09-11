Naranja_IslaTrovita_G11_M11_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M11_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0089
# 11 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M11_EventScript_Sub_08157D53
# 12 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M11_Text_0818509C
# 13 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	setorcopyvar VAR_0x8000, 0x153
# 15 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	callstd 0
# 17 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0089
# 18 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M11_Text_081851C9
# 19 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M11_EventScript_Sub_08157D53::
# 25 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M11_Text_081851C9
# 26 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M11_EventScript_OBJ_EVENT_GFX_LASS_LocalId2::
# 32 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M11_Text_081852B3
# 33 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M11_Text_0818509C::
# 37 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	.string "That determined expression...\nThat limber way you move...\lAnd your well-trained POKéMON...\pYou’re obviously a skilled TRAINER!\pNo, wait, don’t say a word.\nI can tell just by looking at you.\pI’m sure that you will be capable\nof putting this HM to good use.\pNo need to be modest or shy.\nGo on, take it!$"

Naranja_IslaTrovita_G11_M11_Text_081851C9::
# 41 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	.string "That HM, it’s CUT.\pAn HM move is one that can be used\nby POKéMON out of a battle.\pAny POKéMON that’s learned CUT can\nchop down thin trees if the TRAINER\lhas earned the STONE BADGE.\pAnd, unlike a TM, an HM doesn’t break\nafter one use.$"

Naranja_IslaTrovita_G11_M11_Text_081852B3::
# 45 "data/maps/Naranja_IslaTrovita_G11_M11/scripts.pory"
	.string "When they were expanding the city of\nRUSTBORO, my dad helped out.\pHe made his POKéMON use CUT to clear\nthe land of trees.$"
