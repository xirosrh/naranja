Naranja_CuevaKabuto_G24_M10_MapScripts::
	.byte 0


Naranja_CuevaKabuto_G24_M10_EventScript_OBJ_EVENT_GFX_STEVEN_LocalId1::
# 8 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	lock
# 9 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M10_Text_08194AE5
# 11 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	callstd 4
# 12 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	setvar VAR_0x8004, 0x112
# 13 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	call Naranja_CuevaKabuto_G24_M10_EventScript_Sub_081A067F
# 14 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	setflag FLAG_NARANJA_ISLAS_EVENT_COMPLETE_00BD
# 15 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M10_Text_08194BDD
# 16 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	callstd 4
# 17 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14F
# 18 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 19 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	callstd 0
# 20 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 21 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC83
# 22 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M10_Text_08194C8D
# 23 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	callstd 4
# 24 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	closemessage
# 25 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 26 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC6D
# 27 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 28 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC78
# 29 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 30 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC6D
# 31 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 32 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	call_if EQUAL, Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC6D
# 33 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	removeobject LOCALID_CUEVA_KABUTO_G24_M10_STEVEN
# 35 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	release
	end


Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC6D::
# 40 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M10_STEVEN, Naranja_CuevaKabuto_G24_M10_Movement_0815CC8C
# 41 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC78::
# 46 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	applymovement LOCALID_CUEVA_KABUTO_G24_M10_STEVEN, Naranja_CuevaKabuto_G24_M10_Movement_0815CC93
# 47 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_CuevaKabuto_G24_M10_EventScript_Sub_0815CC83::
# 52 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	loadword 0, Naranja_CuevaKabuto_G24_M10_Text_08194D43
# 53 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	callstd 4
	return


Naranja_CuevaKabuto_G24_M10_EventScript_Sub_081A067F::
# 58 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	bufferitemname 0, 0x8004
# 59 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 60 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	message Naranja_CuevaKabuto_G24_M10_Text_081A1498
# 61 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	waitmessage
# 62 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	waitfanfare
# 63 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	removeitem 0x8004, 1
	return


# 67 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
Naranja_CuevaKabuto_G24_M10_Movement_0815CC8C:
# 68 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 69 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 70 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 71 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 72 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 73 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	delay_8
	step_end

# 76 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
Naranja_CuevaKabuto_G24_M10_Movement_0815CC93:
# 77 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_left
# 78 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 79 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 80 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 81 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_right
# 82 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 83 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	walk_up
# 84 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	delay_8
	step_end

Naranja_CuevaKabuto_G24_M10_Text_08194AE5::
# 87 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	.string "That device you have there...\nIt’s a POKéNAV.\pWhen TRAINERS that have POKéNAVS\nbattle, it keeps a record of how\lthings went, I think.\pOh, pardon me.\nMy name is STEVEN.\pI’m interested in rare stones, so\nI travel here and there.\pOh?\nA LETTER for me?$"

Naranja_CuevaKabuto_G24_M10_Text_08194BDD::
# 91 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	.string "STEVEN: Okay, thank you.\pYou went through all this trouble to\ndeliver that. I need to thank you.\pLet me see...\nI’ll give you this TM.\pIt contains my favorite move,\nSTEEL WING.$"

Naranja_CuevaKabuto_G24_M10_Text_08194C8D::
# 95 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	.string "STEVEN: Your POKéMON appear quite\ncapable.\pIf you keep training, you could even\nbecome the CHAMPION of the POKéMON\lLEAGUE one day. That’s what I think.\pNow, I’ve got to hurry along.$"

Naranja_CuevaKabuto_G24_M10_Text_08194D43::
# 99 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	.string "Oh, your BAG is full...\nThat’s too bad, then.$"

Naranja_CuevaKabuto_G24_M10_Text_081A1498::
# 103 "data/maps/Naranja_CuevaKabuto_G24_M10/scripts.pory"
	.string "{PLAYER} handed over the\n{STR_VAR_1}.$"
