Naranja_IslaMandarin_G10_M02_MapScripts::
	.byte 0


Naranja_IslaMandarin_G10_M02_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 8 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_006B
# 11 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M02_EventScript_Sub_08156A29
# 12 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M02_Text_08181B1A
# 13 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x158
# 15 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 16 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	callstd 0
# 17 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_006B
# 18 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M02_Text_08181B64
# 19 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M02_EventScript_Sub_08156A29::
# 25 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	loadword 0, Naranja_IslaMandarin_G10_M02_Text_08181BF6
# 26 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M02_Text_08181B1A::
# 31 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	.string "Woohoo, your POKéMON look pretty\nstrong.\pI like that!\nHere, take this HM!$"

Naranja_IslaMandarin_G10_M02_Text_08181B64::
# 35 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	.string "That HM contains ROCK SMASH.\pIf you come across large boulders\nthat block your path...\pWell, use that HM move and smash\nit right out of your way!$"

Naranja_IslaMandarin_G10_M02_Text_08181BF6::
# 39 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\ncould come flying out.$"
