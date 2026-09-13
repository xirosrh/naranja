Naranja_TrovitaIsland_CuttersHouse_MapScripts::
	.byte 0


Naranja_TrovitaIsland_CuttersHouse_EventScript_Man3::
# 8 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	lock
# 9 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	checkflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0089
# 11 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_CuttersHouse_EventScript_Sub_08157D53
# 12 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	msgbox Naranja_TrovitaIsland_CuttersHouse_Text_0818509C, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	setorcopyvar VAR_0x8000, 0x153
# 14 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	callstd 0
# 16 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_0089
# 17 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	msgbox Naranja_TrovitaIsland_CuttersHouse_Text_081851C9, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	release
	end


Naranja_TrovitaIsland_CuttersHouse_EventScript_Sub_08157D53::
# 23 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	msgbox Naranja_TrovitaIsland_CuttersHouse_Text_081851C9, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	release
	end


Naranja_TrovitaIsland_CuttersHouse_EventScript_Lass::
# 29 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	msgbox Naranja_TrovitaIsland_CuttersHouse_Text_081852B3, MSGBOX_NPC
	end


Naranja_TrovitaIsland_CuttersHouse_Text_0818509C::
# 33 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	.string "That determined expression...\nThat limber way you move...\lAnd your well-trained POKéMON...\pYou’re obviously a skilled TRAINER!\pNo, wait, don’t say a word.\nI can tell just by looking at you.\pI’m sure that you will be capable\nof putting this HM to good use.\pNo need to be modest or shy.\nGo on, take it!$"

Naranja_TrovitaIsland_CuttersHouse_Text_081851C9::
# 37 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	.string "That HM, it’s CUT.\pAn HM move is one that can be used\nby POKéMON out of a battle.\pAny POKéMON that’s learned CUT can\nchop down thin trees if the TRAINER\lhas earned the STONE BADGE.\pAnd, unlike a TM, an HM doesn’t break\nafter one use.$"

Naranja_TrovitaIsland_CuttersHouse_Text_081852B3::
# 41 "data/maps/Naranja_TrovitaIsland_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\nRUSTBORO, my dad helped out.\pHe made his POKéMON use CUT to clear\nthe land of trees.$"
