Naranja_KumquatIsland_MoveDeletersHouse_MapScripts::
	.byte 0


Naranja_KumquatIsland_MoveDeletersHouse_EventScript_OldMan1::
# 8 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	lockall
# 9 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_NARANJA_KUMQUAT_ISLAND_MOVE_DELETERS_HOUSE_OLD_MAN_1, Naranja_KumquatIsland_Movement_081A0839
# 10 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	waitmovement LOCALID_NONE
# 11 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B622, MSGBOX_YESNO
# 12 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 13 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 14 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159ADE
# 15 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 16 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B7B
# 17 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159ADE::
# 22 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B68C, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special ChoosePartyMon
# 24 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	waitstate
# 25 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 26 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B7B
# 27 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 28 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 29 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B71
# 30 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 31 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 32 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B64
# 33 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B6B0, MSGBOX_DEFAULT
# 34 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	fadescreen 1
# 35 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 36 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	fadescreen 0
# 37 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_0x8005, 4
# 38 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159ADE
# 39 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 40 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B6F2, MSGBOX_YESNO
# 41 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 42 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 43 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B53
# 44 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 45 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	goto_if EQUAL, Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B7B
# 46 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B53::
# 51 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 52 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 53 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 54 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B71E, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B64::
# 60 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 61 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B6D0, MSGBOX_DEFAULT
# 62 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B71::
# 67 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B78C, MSGBOX_DEFAULT
# 68 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_MoveDeletersHouse_EventScript_Sub_08159B7B::
# 73 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	msgbox Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B757, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	releaseall
	end


Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B622::
# 78 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "Uh...\nOh, yes, I’m the MOVE DELETER.\pI can make POKéMON forget their moves.\pWould you like me to do that?$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B68C::
# 82 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "Which POKéMON should forget a move?$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B6B0::
# 86 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "Which move should be forgotten?$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B6D0::
# 90 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} seems to know only one\nmove...$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B6F2::
# 94 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}’s {STR_VAR_2}?\nThat move should be forgotten?$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B71E::
# 98 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "It worked to perfection!\p{STR_VAR_1} has forgotten\n{STR_VAR_2} completely.$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B757::
# 102 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "Come again if there are other moves\nto be forgotten.$"

Naranja_KumquatIsland_MoveDeletersHouse_Text_0818B78C::
# 106 "data/maps/Naranja_KumquatIsland_MoveDeletersHouse/scripts.pory"
	.string "What?\nNo EGG should know any moves.$"
