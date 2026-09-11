Naranja_IslaTrovita_G11_M14_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M14_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M14_Text_08185421, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M14_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId2::
# 13 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	lock
# 14 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_00D5
# 16 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M14_EventScript_Sub_08157DCF
# 17 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M14_Text_08185461, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC
# 19 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	callstd 0
# 21 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 22 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 23 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_00D5
# 24 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M14_EventScript_Sub_08157DCF::
# 29 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M14_Text_081854C4, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M14_Text_08185421::
# 34 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	.string "Way back in the old days, DEVON was just\na teeny, tiny company.$"

Naranja_IslaTrovita_G11_M14_Text_08185461::
# 38 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	.string "My daddy’s working at the CORPORATION.\pMy daddy made this!\nBut I can’t use it, so you can have it.$"

Naranja_IslaTrovita_G11_M14_Text_081854C4::
# 42 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	.string "My daddy’s working at the CORPORATION.\pWhen I grow up, I’m going to work for\nDEVON, too.$"
