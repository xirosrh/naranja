Naranja_PuebloPaleta_G26_M04_MapScripts::
# 5 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_PuebloPaleta_G26_M04_OnTransition
	.byte 0


Naranja_PuebloPaleta_G26_M04_EventScript_Sign_2::
# 9 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816AEA1
# 10 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 6
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sign_1::
# 15 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816AEAC
# 16 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 6
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sign_3::
# 21 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816AEF2
# 22 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 6
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sign_4::
# 27 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816B20E
# 28 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G26_M04_EventScript_OBJ_EVENT_GFX_STEVEN_LocalId2::
# 33 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	lockall
# 34 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	checkplayergender
# 35 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EBAB
# 37 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 38 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC04
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EBAB::
# 43 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816D57A
# 44 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 46 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 47 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 48 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 49 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 51 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_086BF221
# 53 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 55 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 56 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC5D
# 57 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 58 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC6D
# 59 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 60 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC7D
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC04::
# 65 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816D762
# 66 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 67 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 68 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 69 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 71 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 72 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 73 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 74 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_086BECF6
# 75 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 77 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 78 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC8D
# 79 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 80 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC9D
# 81 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 82 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECAD
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC5D::
# 87 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_PUEBLO_PALETA_532, LOCALID_NONE, Naranja_PuebloPaleta_G26_M04_Text_086BEFC7
# 88 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECBD
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC6D::
# 92 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_PUEBLO_PALETA_535, LOCALID_NONE, Naranja_PuebloPaleta_G26_M04_Text_086BEFC7
# 93 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECBD
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC7D::
# 97 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_PUEBLO_PALETA_529, LOCALID_NONE, Naranja_PuebloPaleta_G26_M04_Text_086BEFC7
# 98 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECBD
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC8D::
# 102 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_PUEBLO_PALETA_523, LOCALID_NONE, Naranja_PuebloPaleta_G26_M04_Text_0816D836
# 103 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECCB
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814EC9D::
# 107 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_PUEBLO_PALETA_526, LOCALID_NONE, Naranja_PuebloPaleta_G26_M04_Text_0816D836
# 108 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECCB
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECAD::
# 112 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_NARANJA_PUEBLO_PALETA_520, LOCALID_NONE, Naranja_PuebloPaleta_G26_M04_Text_0816D836
# 113 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECCB
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECBD::
# 117 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816D688
# 118 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 119 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECD9
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECCB::
# 123 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_086BF019
# 124 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 125 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECD9
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ECD9::
# 129 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	closemessage
# 130 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 131 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 132 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED29
# 133 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 134 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED0C
# 135 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 136 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED29
# 137 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 138 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED29
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED0C::
# 143 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_PuebloPaleta_G26_M04_Movement_0814ED67
# 144 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 145 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	playse SE_LEDGE
# 146 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_PuebloPaleta_G26_M04_Movement_0814ED6B
# 147 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 148 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED46
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED29::
# 152 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_PuebloPaleta_G26_M04_Movement_0814ED71
# 153 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 154 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	playse SE_LEDGE
# 155 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement LOCALID_PUEBLO_PALETA_G26_M04_STEVEN, Naranja_PuebloPaleta_G26_M04_Movement_0814ED74
# 156 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 157 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED46
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0814ED46::
# 161 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	removeobject LOCALID_PUEBLO_PALETA_G26_M04_STEVEN
# 162 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_STORY_STATE, 1
# 163 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_3, 4
# 164 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	clearflag FLAG_HIDE_PUEBLO_PALETA_G01_M04_PROF_BIRCH_2
# 165 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0082
# 166 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setvar VAR_NARANJA_PUERTO_DE_TANGELO_EVENT_STATE_3, 1
# 167 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_TANGELO_G00_M10_VARS
# 168 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	savebgm MUS_DUMMY
# 169 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	fadedefaultbgm
# 170 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	releaseall
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sign_5::
# 175 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_0816E026
# 176 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G26_M04_OnTransition::
# 181 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setflag FLAG_NARANJA_PUEBLO_PALETA_EVENT_COMPLETE_0848
# 182 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setvar VAR_NARANJA_PUEBLO_PALETA_EVENT_STATE_6, 0
# 183 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setflag FLAG_HIDE_PUEBLO_PALETA_G26_M05_REPORTER_F
	end


Naranja_PuebloPaleta_G26_M04_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId5::
# 188 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	lock
# 189 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	faceplayer
# 190 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199D06
# 191 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 192 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 193 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 194 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_081601C6
# 195 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	message Naranja_PuebloPaleta_G26_M04_Text_08199D9D
# 196 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmessage
# 197 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0816018E
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0816018E::
# 201 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	multichoicedefault 0x15, 6, 0x35, 2, 0
# 202 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 203 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 204 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_081601D0
# 205 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 206 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_081601FB
# 207 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 208 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160250
# 209 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 210 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160250
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_081601C6::
# 215 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199D40
# 216 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 217 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_081601D0::
# 222 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199DF2
# 223 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 5
# 224 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 225 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160226
# 226 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199E4B
# 227 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 228 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	call Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160232
# 229 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	warp MAP_NARANJA_ISLA_MURCOTT_G09_M08, 0xFF, 8, 0xB
# 230 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitstate
# 231 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_081601FB::
# 236 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199E0E
# 237 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 5
# 238 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 239 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto_if EQUAL, Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160226
# 240 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199E4B
# 241 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 242 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	call Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160232
# 243 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	warp MAP_NARANJA_ISLA_KUMQUAT_G13_M10, 0xFF, 8, 0xB
# 244 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitstate
# 245 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160226::
# 250 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	message Naranja_PuebloPaleta_G26_M04_Text_08199E7A
# 251 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmessage
# 252 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	goto Naranja_PuebloPaleta_G26_M04_EventScript_Sub_0816018E
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160232::
# 256 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	closemessage
# 257 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 258 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 259 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	delay 0x1E
# 260 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	hideobjectat LOCALID_PUEBLO_PALETA_G26_M04_BEAUTY, MAP_NARANJA_PUEBLO_PALETA_G26_M04
# 261 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	setvar VAR_0x8004, 4
# 262 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	call Naranja_SouthernIsland_G26_M09_EventScript_Sub_081A047C
	return


Naranja_PuebloPaleta_G26_M04_EventScript_Sub_08160250::
# 267 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199E29
# 268 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 4
# 269 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	release
	end


Naranja_PuebloPaleta_G26_M04_EventScript_Sign_6::
# 274 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199C6F
# 275 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 3
	end


Naranja_PuebloPaleta_G26_M04_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId1::
# 280 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199CA4
# 281 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 2
	end


Naranja_PuebloPaleta_G26_M04_EventScript_OBJ_EVENT_GFX_WOMAN_1_LocalId6::
# 286 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_086BECA3
# 287 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 2
	end


Naranja_PuebloPaleta_G26_M04_EventScript_OBJ_EVENT_GFX_BOY_2_LocalId3::
# 292 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	loadword 0, Naranja_PuebloPaleta_G26_M04_Text_08199ED4
# 293 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	callstd 2
	end


# 297 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
Naranja_PuebloPaleta_G26_M04_Movement_0814ED67:
# 298 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_left
# 299 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
# 300 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
	step_end

# 303 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
Naranja_PuebloPaleta_G26_M04_Movement_0814ED6B:
# 304 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	jump_2_down
# 305 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	delay_16
# 306 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
# 307 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
# 308 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
Naranja_PuebloPaleta_G26_M04_Movement_0814ED71:
# 312 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
# 313 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
Naranja_PuebloPaleta_G26_M04_Movement_0814ED74:
# 317 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	jump_2_down
# 318 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	delay_16
# 319 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
# 320 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	walk_down
	step_end

Naranja_PuebloPaleta_G26_M04_Text_0816AEA1::
# 323 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Casa de {PLAYER}$"

Naranja_PuebloPaleta_G26_M04_Text_0816AEAC::
# 327 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Laboratorio Prf.OAK$"

Naranja_PuebloPaleta_G26_M04_Text_0816AEF2::
# 331 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Casa de GARY$"

Naranja_PuebloPaleta_G26_M04_Text_0816B20E::
# 335 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "AERÓDROMO de PALETA  \n“Mejor que un PIDGEOT“$"

Naranja_PuebloPaleta_G26_M04_Text_0816D57A::
# 339 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "… \p…a ver si el tío sale ya de la casa del\nmocoso este…$"

Naranja_PuebloPaleta_G26_M04_Text_0816D688::
# 343 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}Gary: Quizás no seas tan malo\n{PLAYER}, pero eres bastante imbecil.\pY eso me da pena.\pQuizá algùn dia te parezcas a mí…\p…  \pMi tío ya a ido al laboratorio,\ntenía una importante misón para mí.\pY no es como transportista…\p$"

Naranja_PuebloPaleta_G26_M04_Text_0816D762::
# 347 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "…      \p…a ver si el tío sale ya de la casa de la\nniña pija esta…   $"

Naranja_PuebloPaleta_G26_M04_Text_0816D836::
# 351 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}¡Vaya! Mejor no te crezcas… $"

Naranja_PuebloPaleta_G26_M04_Text_0816E026::
# 355 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}ADVERTENCIA\p{COLOR 0x01}\nLa ruta 1 está bloqueda,\lpor lo que no esta permitido pasar.\lDisculpen$"

Naranja_PuebloPaleta_G26_M04_Text_08199C6F::
# 359 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "PUEBLO PALETA   \n“¡Un lienzo en blanco en tu viaje!“$"

Naranja_PuebloPaleta_G26_M04_Text_08199CA4::
# 363 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "¡ Oye !    \n¡Tu eres {PLAYER}!\pMe contaron todo sobre tus victorias en\nla Liga Añil. ¡ Qué gran pelea !$"

Naranja_PuebloPaleta_G26_M04_Text_08199D06::
# 367 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "¡Hola! ¿Vas a viajar en crucero?\nTendré q ver tu reserva.$"

Naranja_PuebloPaleta_G26_M04_Text_08199D40::
# 371 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{PLAYER} no tiene reserva…\pDe momento no podrás viajar en\nnuestro crucero…     \p…de momento…    $"

Naranja_PuebloPaleta_G26_M04_Text_08199D9D::
# 375 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\pPerfect! That’s all you need!\pAnd where would you like to go?$"

Naranja_PuebloPaleta_G26_M04_Text_08199DF2::
# 379 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

Naranja_PuebloPaleta_G26_M04_Text_08199E0E::
# 383 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

Naranja_PuebloPaleta_G26_M04_Text_08199E29::
# 387 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Please sail with us another time!$"

Naranja_PuebloPaleta_G26_M04_Text_08199E4B::
# 391 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Please board the ferry and wait for\ndeparture.$"

Naranja_PuebloPaleta_G26_M04_Text_08199E7A::
# 395 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Then, where would you like to go?$"

Naranja_PuebloPaleta_G26_M04_Text_08199ED4::
# 399 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Hay mucha gente que te ayudará en \ntu camino.         \pDeberías procurar no evitarlos$"

Naranja_PuebloPaleta_G26_M04_Text_086BECA3::
# 403 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "Î\nキ\n Eres {PLAYER} !! \pOjalá tubiese un Pikachu como el tuyo.\p\p¿Me lo das?\p{COLOR 0x04}{PLAYER}: ¡NOOO!$"

Naranja_PuebloPaleta_G26_M04_Text_086BECF6::
# 407 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}Gary: ¡Ah!, pero si está aquí.\pUohh, la chica acuática…\p¡Pues por lo visto todos en KANTO\nsabemos que ni siquiera sabes nadar!\p{COLOR 0x04}{PLAYER}: ¡¡Pues mira como te derrota\nla chica acuática !!$"

Naranja_PuebloPaleta_G26_M04_Text_086BEFC7::
# 411 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}Mejoraste algo, {PLAYER}.\nPero puedo asegurarte que tù no\lganarás la ùltima batalla.$"

Naranja_PuebloPaleta_G26_M04_Text_086BF019::
# 415 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}Gary: Parece que ya manejas\ntu Pikachu. Aunque sigues siendo la \lmisma a la q. derroté estrepitosamente\len Ciudad Celeste.\pLa habilidad es un don que no posee\ntodo el mundo…\p{COLOR 0x04}{PLAYER}: Supongo que lo dirás\npor tu triste Eevee\pSiempre me dió pena…$"

Naranja_PuebloPaleta_G26_M04_Text_086BF221::
# 419 "data/maps/Naranja_PuebloPaleta_G26_M04/scripts.pory"
	.string "{COLOR 0x02}Gary: ¡Vaya! ¡Aquí lo tenemos!\p¡Espero que ya hayas conseguido que te\nobedezcan tus propios Pokemon!\p{COLOR 0x04}{PLAYER}:Bueno Gary,\nNo hace falta que estés rencoroso por \lsuperarte en la liga Añil…$"
