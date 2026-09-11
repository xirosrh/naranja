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
	msgbox Naranja_IslaMandarin_G10_M02_Text_08181B1A, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	setorcopyvar VAR_0x8000, 0x158
# 14 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	callstd 0
# 16 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_006B
# 17 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M02_Text_08181B64, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M02_EventScript_Sub_08156A29::
# 23 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M02_Text_08181BF6, MSGBOX_DEFAULT
# 24 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M02_Text_08181B1A::
# 28 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	.string "Woohoo, your POKéMON look pretty\nstrong.\pI like that!\nHere, take this HM!$"

Naranja_IslaMandarin_G10_M02_Text_08181B64::
# 32 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	.string "That HM contains ROCK SMASH.\pIf you come across large boulders\nthat block your path...\pWell, use that HM move and smash\nit right out of your way!$"

Naranja_IslaMandarin_G10_M02_Text_08181BF6::
# 36 "data/maps/Naranja_IslaMandarin_G10_M02/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\ncould come flying out.$"
