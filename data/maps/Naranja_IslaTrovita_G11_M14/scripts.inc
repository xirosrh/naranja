Naranja_IslaTrovita_G11_M14_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M14_EventScript_OBJ_EVENT_GFX_OLD_MAN_2_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M14_Text_08185421
# 9 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M14_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId2::
# 14 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	lock
# 15 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_00D5
# 17 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M14_EventScript_Sub_08157DCF
# 18 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M14_Text_08185461
# 19 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	setorcopyvar VAR_0x8000, 0xC
# 21 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 22 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	callstd 0
# 23 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 24 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 25 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_00D5
# 26 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M14_EventScript_Sub_08157DCF::
# 31 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M14_Text_081854C4
# 32 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M14_Text_08185421::
# 37 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	.string "Way back in the old days, DEVON was just\na teeny, tiny company.$"

Naranja_IslaTrovita_G11_M14_Text_08185461::
# 41 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	.string "My daddy’s working at the CORPORATION.\pMy daddy made this!\nBut I can’t use it, so you can have it.$"

Naranja_IslaTrovita_G11_M14_Text_081854C4::
# 45 "data/maps/Naranja_IslaTrovita_G11_M14/scripts.pory"
	.string "My daddy’s working at the CORPORATION.\pWhen I grow up, I’m going to work for\nDEVON, too.$"
