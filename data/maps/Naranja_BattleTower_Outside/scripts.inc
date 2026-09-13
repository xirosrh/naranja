Naranja_BattleTower_Outside_MapScripts::
# 5 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_BattleTower_Outside_OnTransition
	.byte 0


Naranja_BattleTower_Outside_EventScript_Sign_2::
# 9 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816AEA1, MSGBOX_AUTOCLOSE
	return


Naranja_BattleTower_Outside_EventScript_Sign_1::
# 14 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816AEAC, MSGBOX_AUTOCLOSE
	return


Naranja_BattleTower_Outside_EventScript_Sign_3::
# 19 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816AEF2, MSGBOX_AUTOCLOSE
	return


Naranja_BattleTower_Outside_EventScript_Sign_4::
# 24 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816B20E, MSGBOX_SIGN
	end


Naranja_BattleTower_Outside_EventScript_Gary::
# 29 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	lockall
# 30 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	checkplayergender
# 31 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 32 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EBAB
# 33 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 34 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EC04
	end


Naranja_BattleTower_Outside_EventScript_Sub_0814EBAB::
# 39 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816D57A, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 41 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_KumquatIsland_Movement_081A0839
# 42 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 43 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 44 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 46 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 47 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_086BF221, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 49 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 50 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EC5D
# 51 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 52 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EC6D
# 53 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 54 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EC7D
	end


Naranja_BattleTower_Outside_EventScript_Sub_0814EC04::
# 59 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816D762, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 61 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_KumquatIsland_Movement_081A0839
# 62 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 63 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 64 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 65 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 66 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 67 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_086BECF6, MSGBOX_DEFAULT
# 68 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	copyvar VAR_0x8000, VAR_STARTER_MON
# 69 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 70 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EC8D
# 71 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 72 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814EC9D
# 73 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 74 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814ECAD
	end


Naranja_BattleTower_Outside_EventScript_Sub_0814EC5D::
# 79 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_NARANJA_PALLET_TOWN_532, Naranja_BattleTower_Outside_Text_086BEFC7
# 80 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECBD
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814EC6D::
# 84 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_NARANJA_PALLET_TOWN_535, Naranja_BattleTower_Outside_Text_086BEFC7
# 85 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECBD
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814EC7D::
# 89 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_NARANJA_PALLET_TOWN_529, Naranja_BattleTower_Outside_Text_086BEFC7
# 90 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECBD
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814EC8D::
# 94 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_NARANJA_PALLET_TOWN_523, Naranja_BattleTower_Outside_Text_0816D836
# 95 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECCB
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814EC9D::
# 99 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_NARANJA_PALLET_TOWN_526, Naranja_BattleTower_Outside_Text_0816D836
# 100 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECCB
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814ECAD::
# 104 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_NARANJA_PALLET_TOWN_520, Naranja_BattleTower_Outside_Text_0816D836
# 105 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECCB
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814ECBD::
# 109 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816D688, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECD9
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814ECCB::
# 114 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_086BF019, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ECD9
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814ECD9::
# 119 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	closemessage
# 120 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	copyvar VAR_0x8000, VAR_FACING
# 121 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 122 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814ED29
# 123 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 124 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814ED0C
# 125 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 126 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814ED29
# 127 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 128 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_0814ED29
	end


Naranja_BattleTower_Outside_EventScript_Sub_0814ED0C::
# 133 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_BattleTower_Outside_Movement_0814ED67
# 134 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 135 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	playse SE_LEDGE
# 136 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_BattleTower_Outside_Movement_0814ED6B
# 137 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 138 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ED46
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814ED29::
# 142 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_BattleTower_Outside_Movement_0814ED71
# 143 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 144 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	playse SE_LEDGE
# 145 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN, Naranja_BattleTower_Outside_Movement_0814ED74
# 146 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 147 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0814ED46
	return


Naranja_BattleTower_Outside_EventScript_Sub_0814ED46::
# 151 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	removeobject LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_STEVEN
# 152 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setvar VAR_NARANJA_NARANJA_PALLET_TOWN_STORY_STATE, 1
# 153 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setvar VAR_NARANJA_OAK_LAB_STORY_STATE, 4
# 154 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_PALLET_TOWN_G01_M04_PROF_BIRCH_2
# 155 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_0082
# 156 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setvar VAR_NARANJA_TANGELO_TOWN_PORT_EVENT_STATE_3, 1
# 157 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_TANGELO_TOWN_ISLAND_G00_M10_VARS
# 158 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	savebgm MUS_DUMMY
# 159 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	fadedefaultbgm
# 160 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	releaseall
	end


Naranja_BattleTower_Outside_EventScript_Sign_5::
# 165 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_0816E026, MSGBOX_SIGN
	end


Naranja_BattleTower_Outside_OnTransition::
# 170 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setflag FLAG_NARANJA_NARANJA_PALLET_TOWN_EVENT_COMPLETE_0848
# 171 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setvar VAR_NARANJA_NARANJA_PALLET_TOWN_EVENT_STATE_6, 0
# 172 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setflag FLAG_HIDE_NARANJA_PALLET_TOWN_G26_M05_REPORTER_F
	end


Naranja_BattleTower_Outside_EventScript_Beauty::
# 177 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	lock
# 178 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	faceplayer
# 179 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199D06, MSGBOX_DEFAULT
# 180 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	checkitem ITEM_SS_TICKET, 1
# 181 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 182 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_081601C6
# 183 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	message Naranja_BattleTower_Outside_Text_08199D9D
# 184 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmessage
# 185 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0816018E
	return


Naranja_BattleTower_Outside_EventScript_Sub_0816018E::
# 189 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	multichoicedefault 0x15, 6, 0x35, 2, 0
# 190 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 191 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 192 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_081601D0
# 193 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 194 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_081601FB
# 195 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 196 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_08160250
# 197 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 198 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_08160250
	end


Naranja_BattleTower_Outside_EventScript_Sub_081601C6::
# 203 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199D40, MSGBOX_DEFAULT
# 204 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	release
	end


Naranja_BattleTower_Outside_EventScript_Sub_081601D0::
# 209 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199DF2, MSGBOX_YESNO
# 210 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 211 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_08160226
# 212 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199E4B, MSGBOX_DEFAULT
# 213 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	call Naranja_BattleTower_Outside_EventScript_Sub_08160232
# 214 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	warp MAP_NARANJA_MURCOTT_ISLAND_HARBOR, 0xFF, 8, 0xB
# 215 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitstate
# 216 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	release
	end


Naranja_BattleTower_Outside_EventScript_Sub_081601FB::
# 221 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199E0E, MSGBOX_YESNO
# 222 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 223 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto_if EQUAL, Naranja_BattleTower_Outside_EventScript_Sub_08160226
# 224 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199E4B, MSGBOX_DEFAULT
# 225 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	call Naranja_BattleTower_Outside_EventScript_Sub_08160232
# 226 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	warp MAP_NARANJA_KUMQUAT_ISLAND_HARBOR, 0xFF, 8, 0xB
# 227 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitstate
# 228 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	release
	end


Naranja_BattleTower_Outside_EventScript_Sub_08160226::
# 233 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	message Naranja_BattleTower_Outside_Text_08199E7A
# 234 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmessage
# 235 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	goto Naranja_BattleTower_Outside_EventScript_Sub_0816018E
	return


Naranja_BattleTower_Outside_EventScript_Sub_08160232::
# 239 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	closemessage
# 240 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 241 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	waitmovement LOCALID_NONE
# 242 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	delay 0x1E
# 243 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	hideobjectat LOCALID_NARANJA_BATTLE_TOWER_OUTSIDE_BEAUTY, MAP_NARANJA_BATTLE_TOWER_OUTSIDE
# 244 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	setvar VAR_0x8004, 4
# 245 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	call Naranja_SouthernIsland_Exterior_EventScript_Sub_081A047C
	return


Naranja_BattleTower_Outside_EventScript_Sub_08160250::
# 250 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199E29, MSGBOX_DEFAULT
# 251 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	release
	end


Naranja_BattleTower_Outside_EventScript_Sign_6::
# 256 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199C6F, MSGBOX_SIGN
	end


Naranja_BattleTower_Outside_EventScript_BugCatcher::
# 261 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199CA4, MSGBOX_NPC
	end


Naranja_BattleTower_Outside_EventScript_Woman1::
# 266 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_086BECA3, MSGBOX_NPC
	end


Naranja_BattleTower_Outside_EventScript_Boy2::
# 271 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	msgbox Naranja_BattleTower_Outside_Text_08199ED4, MSGBOX_NPC
	end


# 275 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
Naranja_BattleTower_Outside_Movement_0814ED67:
# 276 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_left
# 277 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
# 278 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
	step_end

# 281 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
Naranja_BattleTower_Outside_Movement_0814ED6B:
# 282 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	jump_2_down
# 283 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	delay_16
# 284 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
# 285 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
# 286 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
	step_end

# 289 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
Naranja_BattleTower_Outside_Movement_0814ED71:
# 290 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
# 291 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
	step_end

# 294 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
Naranja_BattleTower_Outside_Movement_0814ED74:
# 295 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	jump_2_down
# 296 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	delay_16
# 297 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
# 298 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	walk_down
	step_end

Naranja_BattleTower_Outside_Text_0816AEA1::
# 301 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Casa de {PLAYER}$"

Naranja_BattleTower_Outside_Text_0816AEAC::
# 305 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Laboratorio Prf.OAK$"

Naranja_BattleTower_Outside_Text_0816AEF2::
# 309 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Casa de GARY$"

Naranja_BattleTower_Outside_Text_0816B20E::
# 313 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "AERÓDROMO de PALETA  \n“Mejor que un PIDGEOT“$"

Naranja_BattleTower_Outside_Text_0816D57A::
# 317 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "… \p…a ver si el tío sale ya de la casa del\nmocoso este…$"

Naranja_BattleTower_Outside_Text_0816D688::
# 321 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}Gary: Quizás no seas tan malo\n{PLAYER}, pero eres bastante imbecil.\pY eso me da pena.\pQuizá algùn dia te parezcas a mí…\p…  \pMi tío ya a ido al laboratorio,\ntenía una importante misón para mí.\pY no es como transportista…\p$"

Naranja_BattleTower_Outside_Text_0816D762::
# 325 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "…      \p…a ver si el tío sale ya de la casa de la\nniña pija esta…   $"

Naranja_BattleTower_Outside_Text_0816D836::
# 329 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}¡Vaya! Mejor no te crezcas… $"

Naranja_BattleTower_Outside_Text_0816E026::
# 333 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}ADVERTENCIA\p{COLOR 0x01}\nLa ruta 1 está bloqueda,\lpor lo que no esta permitido pasar.\lDisculpen$"

Naranja_BattleTower_Outside_Text_08199C6F::
# 337 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "PUEBLO PALETA   \n“¡Un lienzo en blanco en tu viaje!“$"

Naranja_BattleTower_Outside_Text_08199CA4::
# 341 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "¡ Oye !    \n¡Tu eres {PLAYER}!\pMe contaron todo sobre tus victorias en\nla Liga Añil. ¡ Qué gran pelea !$"

Naranja_BattleTower_Outside_Text_08199D06::
# 345 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "¡Hola! ¿Vas a viajar en crucero?\nTendré q ver tu reserva.$"

Naranja_BattleTower_Outside_Text_08199D40::
# 349 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{PLAYER} no tiene reserva…\pDe momento no podrás viajar en\nnuestro crucero…     \p…de momento…    $"

Naranja_BattleTower_Outside_Text_08199D9D::
# 353 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\pPerfect! That’s all you need!\pAnd where would you like to go?$"

Naranja_BattleTower_Outside_Text_08199DF2::
# 357 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

Naranja_BattleTower_Outside_Text_08199E0E::
# 361 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

Naranja_BattleTower_Outside_Text_08199E29::
# 365 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Please sail with us another time!$"

Naranja_BattleTower_Outside_Text_08199E4B::
# 369 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Please board the ferry and wait for\ndeparture.$"

Naranja_BattleTower_Outside_Text_08199E7A::
# 373 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Then, where would you like to go?$"

Naranja_BattleTower_Outside_Text_08199ED4::
# 377 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Hay mucha gente que te ayudará en \ntu camino.         \pDeberías procurar no evitarlos$"

Naranja_BattleTower_Outside_Text_086BECA3::
# 381 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "Î\nキ\n Eres {PLAYER} !! \pOjalá tubiese un Pikachu como el tuyo.\p\p¿Me lo das?\p{COLOR 0x04}{PLAYER}: ¡NOOO!$"

Naranja_BattleTower_Outside_Text_086BECF6::
# 385 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}Gary: ¡Ah!, pero si está aquí.\pUohh, la chica acuática…\p¡Pues por lo visto todos en KANTO\nsabemos que ni siquiera sabes nadar!\p{COLOR 0x04}{PLAYER}: ¡¡Pues mira como te derrota\nla chica acuática !!$"

Naranja_BattleTower_Outside_Text_086BEFC7::
# 389 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}Mejoraste algo, {PLAYER}.\nPero puedo asegurarte que tù no\lganarás la ùltima batalla.$"

Naranja_BattleTower_Outside_Text_086BF019::
# 393 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}Gary: Parece que ya manejas\ntu Pikachu. Aunque sigues siendo la \lmisma a la q. derroté estrepitosamente\len Ciudad Celeste.\pLa habilidad es un don que no posee\ntodo el mundo…\p{COLOR 0x04}{PLAYER}: Supongo que lo dirás\npor tu triste Eevee\pSiempre me dió pena…$"

Naranja_BattleTower_Outside_Text_086BF221::
# 397 "data/maps/Naranja_BattleTower_Outside/scripts.pory"
	.string "{COLOR 0x02}Gary: ¡Vaya! ¡Aquí lo tenemos!\p¡Espero que ya hayas conseguido que te\nobedezcan tus propios Pokemon!\p{COLOR 0x04}{PLAYER}:Bueno Gary,\nNo hace falta que estés rencoroso por \lsuperarte en la liga Añil…$"
