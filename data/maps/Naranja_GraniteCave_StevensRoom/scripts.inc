Naranja_GraniteCave_StevensRoom_MapScripts::
	.byte 0


Naranja_GraniteCave_StevensRoom_EventScript_Gary::
# 8 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	msgbox Naranja_GraniteCave_StevensRoom_Text_08194AE5, MSGBOX_DEFAULT
# 11 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 0x112
# 12 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	call Naranja_GraniteCave_StevensRoom_EventScript_Sub_081A067F
# 13 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_NARANJA_ORANGE_ISLANDS_EVENT_COMPLETE_00BD
# 14 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	msgbox Naranja_GraniteCave_StevensRoom_Text_08194BDD, MSGBOX_DEFAULT
# 15 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14F
# 16 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 17 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	callstd 0
# 18 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 19 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC83
# 20 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	msgbox Naranja_GraniteCave_StevensRoom_Text_08194C8D, MSGBOX_DEFAULT
# 21 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 22 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 23 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC6D
# 24 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 25 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC78
# 26 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 27 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC6D
# 28 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 29 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC6D
# 30 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_NARANJA_GRANITE_CAVE_STEVENS_ROOM_STEVEN
# 32 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	release
	end


Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC6D::
# 37 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_NARANJA_GRANITE_CAVE_STEVENS_ROOM_STEVEN, Naranja_GraniteCave_StevensRoom_Movement_0815CC8C
# 38 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC78::
# 43 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_NARANJA_GRANITE_CAVE_STEVENS_ROOM_STEVEN, Naranja_GraniteCave_StevensRoom_Movement_0815CC93
# 44 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_GraniteCave_StevensRoom_EventScript_Sub_0815CC83::
# 49 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	msgbox Naranja_GraniteCave_StevensRoom_Text_08194D43, MSGBOX_DEFAULT
	return


Naranja_GraniteCave_StevensRoom_EventScript_Sub_081A067F::
# 54 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	bufferitemname 0, 0x8004
# 55 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 56 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	message Naranja_GraniteCave_StevensRoom_Text_081A1498
# 57 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	waitmessage
# 58 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 59 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	removeitem 0x8004, 1
	return


# 63 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
Naranja_GraniteCave_StevensRoom_Movement_0815CC8C:
# 64 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 65 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 66 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 67 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 68 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 69 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

# 72 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
Naranja_GraniteCave_StevensRoom_Movement_0815CC93:
# 73 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 74 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 75 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 76 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 77 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 78 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 80 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

Naranja_GraniteCave_StevensRoom_Text_08194AE5::
# 83 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	.string "That device you have there...\nIt’s a POKéNAV.\pWhen TRAINERS that have POKéNAVS\nbattle, it keeps a record of how\lthings went, I think.\pOh, pardon me.\nMy name is STEVEN.\pI’m interested in rare stones, so\nI travel here and there.\pOh?\nA LETTER for me?$"

Naranja_GraniteCave_StevensRoom_Text_08194BDD::
# 87 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Okay, thank you.\pYou went through all this trouble to\ndeliver that. I need to thank you.\pLet me see...\nI’ll give you this TM.\pIt contains my favorite move,\nSTEEL WING.$"

Naranja_GraniteCave_StevensRoom_Text_08194C8D::
# 91 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Your POKéMON appear quite\ncapable.\pIf you keep training, you could even\nbecome the CHAMPION of the POKéMON\lLEAGUE one day. That’s what I think.\pNow, I’ve got to hurry along.$"

Naranja_GraniteCave_StevensRoom_Text_08194D43::
# 95 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full...\nThat’s too bad, then.$"

Naranja_GraniteCave_StevensRoom_Text_081A1498::
# 99 "data/maps/Naranja_GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER} handed over the\n{STR_VAR_1}.$"
