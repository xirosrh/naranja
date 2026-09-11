Naranja_IslaKumquat_G13_M12_MapScripts::
	.byte 0


Naranja_IslaKumquat_G13_M12_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	lockall
# 9 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M12_OLD_MAN_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 10 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	waitmovement LOCALID_NONE
# 11 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B622
# 12 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 5
# 13 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 14 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 15 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159ADE
# 16 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 17 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B7B
# 18 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159ADE::
# 23 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B68C
# 24 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 4
# 25 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special ChoosePartyMon
# 26 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	waitstate
# 27 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 28 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B7B
# 29 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special IsSelectedMonEgg
# 30 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 31 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B71
# 32 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special GetNumMovesSelectedMonHas
# 33 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 34 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B64
# 35 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B6B0
# 36 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	fadescreen 1
# 38 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 39 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	fadescreen 0
# 40 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_0x8005, 4
# 41 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159ADE
# 42 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 43 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B6F2
# 44 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 5
# 45 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 46 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 47 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B53
# 48 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 49 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B7B
# 50 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B53::
# 55 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special MoveDeleterForgetMove
# 56 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 57 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	waitfanfare
# 58 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B71E
# 59 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 4
# 60 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B64::
# 65 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 66 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B6D0
# 67 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 4
# 68 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B71::
# 73 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B78C
# 74 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 4
# 75 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M12_EventScript_Sub_08159B7B::
# 80 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M12_Text_0818B757
# 81 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	callstd 4
# 82 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M12_Text_0818B622::
# 86 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "Uh...\nOh, yes, I’m the MOVE DELETER.\pI can make POKéMON forget their moves.\pWould you like me to do that?$"

Naranja_IslaKumquat_G13_M12_Text_0818B68C::
# 90 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "Which POKéMON should forget a move?$"

Naranja_IslaKumquat_G13_M12_Text_0818B6B0::
# 94 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "Which move should be forgotten?$"

Naranja_IslaKumquat_G13_M12_Text_0818B6D0::
# 98 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "{STR_VAR_1} seems to know only one\nmove...$"

Naranja_IslaKumquat_G13_M12_Text_0818B6F2::
# 102 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "Hm! {STR_VAR_1}’s {STR_VAR_2}?\nThat move should be forgotten?$"

Naranja_IslaKumquat_G13_M12_Text_0818B71E::
# 106 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "It worked to perfection!\p{STR_VAR_1} has forgotten\n{STR_VAR_2} completely.$"

Naranja_IslaKumquat_G13_M12_Text_0818B757::
# 110 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "Come again if there are other moves\nto be forgotten.$"

Naranja_IslaKumquat_G13_M12_Text_0818B78C::
# 114 "data/maps/Naranja_IslaKumquat_G13_M12/scripts.pory"
	.string "What?\nNo EGG should know any moves.$"
