Naranja_MurcottIsland_OceanicMuseum_1F_MapScripts::
# 5 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MurcottIsland_OceanicMuseum_1F_OnTransition
	.byte 0


Naranja_MurcottIsland_OceanicMuseum_1F_OnTransition::
# 9 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, 0x78
# 10 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, 0x77
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Beauty::
# 15 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E1DE, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Trigger_1::
# 20 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	lockall
# 21 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 22 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 23 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B06
	return


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Trigger_2::
# 27 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	lockall
# 28 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 29 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B06
	return


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B06::
# 34 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 35 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E18D, MSGBOX_YESNO
# 36 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 37 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B2D
# 38 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	closemessage
# 39 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 40 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155B8D
# 41 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 42 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B2D::
# 47 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	checkmoney 0x32
# 48 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 49 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B5A
# 50 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	removemoney 0x32
# 51 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 52 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E1DE, MSGBOX_DEFAULT
# 53 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_3, 1
# 54 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 55 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B5A::
# 60 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	checkflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 61 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B7B
# 62 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E1F5, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	closemessage
# 64 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 65 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155B8D
# 66 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 67 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155B7B::
# 72 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E22D, MSGBOX_DEFAULT
# 73 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_3, 1
# 74 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 75 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	releaseall
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Vars::
# 80 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E2BB, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Object4::
# 85 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E2E3, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Object2::
# 90 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E338, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Object3::
# 95 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E36F, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Object6::
# 100 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E3A9, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Object8::
# 105 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E3ED, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_1::
# 110 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E6C9, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_2::
# 115 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E741, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_3::
# 120 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E7C4, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_4::
# 125 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E892, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_7::
# 130 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E944, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_8::
# 135 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EA19, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_9::
# 140 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EB0D, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_10::
# 145 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EBBC, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sign_12::
# 150 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EC98, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Woman7::
# 155 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E434, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Maniac::
# 160 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E477, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Man3::
# 165 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E4D7, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_LittleGirl2::
# 170 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E540, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Object13::
# 175 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	lock
# 176 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 177 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	delay 8
# 178 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 179 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_1F_241_6, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 180 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 181 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_1F_241_6, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 182 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 183 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E582, MSGBOX_DEFAULT
# 184 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x14E
# 185 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 186 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	callstd 0
# 187 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 188 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155CC2
# 189 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_010D
# 190 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E606, MSGBOX_DEFAULT
# 191 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	closemessage
# 192 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 193 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155C98
# 194 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 195 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if NOT_EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155CAD
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155C98::
# 200 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_1F_241_6, Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155CD3
# 201 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 202 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MURCOTT_ISLAND_G09_M06_241_2
# 203 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 204 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_1F_241_6
# 205 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	release
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155CAD::
# 210 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_1F_241_6, Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155CCC
# 211 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 212 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MURCOTT_ISLAND_G09_M06_241_2
# 213 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 214 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_1F_241_6
# 215 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	release
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_08155CC2::
# 220 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E695, MSGBOX_DEFAULT
# 221 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	release
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_ReporterM::
# 226 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	lock
# 227 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 228 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8005, 2
# 229 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	special InterviewBefore
# 230 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 231 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF96
# 232 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 233 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0069
# 234 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF25
# 235 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0069
# 236 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A927F, MSGBOX_YESNO
# 237 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 238 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF44
# 239 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 240 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF79
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF25::
# 245 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A934C, MSGBOX_YESNO
# 246 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 247 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF44
# 248 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 249 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF79
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF44::
# 254 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A93D1, MSGBOX_DEFAULT
# 255 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8004, 5
# 256 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 257 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8006, 0
# 258 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 259 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	lock
# 260 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 261 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 262 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF83
# 263 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 264 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF79
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF79::
# 269 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A9446, MSGBOX_DEFAULT
# 270 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	release
	end


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF83::
# 275 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A949A, MSGBOX_DEFAULT
# 276 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	setvar VAR_0x8005, 2
# 277 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081ADE46
	return


Naranja_MurcottIsland_OceanicMuseum_1F_EventScript_Sub_081ADF96::
# 281 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A952E, MSGBOX_DEFAULT
# 282 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	release
	end


# 286 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155B8D:
# 287 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_down
	step_end

# 290 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155CCC:
# 291 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	face_down
# 292 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 293 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 294 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 295 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 296 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	delay_8
	step_end

# 299 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_1F_Movement_08155CD3:
# 300 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 301 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 302 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 303 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 304 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 305 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	delay_8
	step_end

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E18D::
# 308 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Welcome to the OCEANIC MUSEUM.\pThe entrance fee is ¥50.\nWould you like to enter?$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E1DE::
# 312 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Please enjoy yourself.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E1F5::
# 316 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Oh? I’m sorry, but you don’t seem to\nhave enough money.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E22D::
# 320 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Oh? You’re with that group that\nwent in earlier?\pYou’re the only one who’s late.\nYou’d better go catch up to them!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E2BB::
# 324 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "We, TEAM {AQUA}, exist for the good\nof all!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E2E3::
# 328 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "We were told to assemble here, so\nwe did, but...\pOur BOSS, the lynchpin, isn’t here.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E338::
# 332 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "If I ripped off the stuff here,\nwould it make me rich?$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E36F::
# 336 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "What I learn here, I can put to use on\nnefarious deeds...$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E3A9::
# 340 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "If our goons didn’t bungle things\nin RUSTBORO, we wouldn’t be here!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E3ED::
# 344 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "I didn’t have ¥50, so it took a long\ntime getting by the receptionist.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E434::
# 348 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "I want to learn about the sea and\nuse that knowledge for battling.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E477::
# 352 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "I get all giddy and gooey when I\nsee the sea!\pFor me, CAPT. STERN is the number\none role model!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E4D7::
# 356 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "The sea is vast without end, and\ninfinitely deep...\pThere must be many POKéMON that we\ndon’t know about.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E540::
# 360 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "I want a sea POKéMON.\pI think it would feel cool and nice\nto hug.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E582::
# 364 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Aiyeeeh!\nWhat are you doing here?\pMe? I’m the TEAM {AQUA} member you\nthumped before, remember?\pHere, take this!\nYou have to forgive me!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E606::
# 368 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Aww, darn it!\nYou so screwed up our plans!\pI was going to rip off something\nto make up for it, but...\pJust you wait!\nYou’ll get yours one day!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E695::
# 372 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Awww, come on!\nYou have to take this and let me go!$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E6C9::
# 376 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "A blue fluid is spiraling inside a\nglass vessel.\p“This is an experiment to create a\nWHIRLPOOL artificially using wind.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E741::
# 380 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "A red ball is bobbing up and down\ninside a glass vessel.\p“This is an experiment simulating a\nWATERFALL using the ball’s buoyancy.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E7C4::
# 384 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "It’s a sample of soil from the ocean\nfloor.\p“Over many years, the remains of\nlife-forms settle at the bottom of\lthe sea making sedimentary layers.\p“By analyzing these layers, the\nancient past is revealed.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E892::
# 388 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "It’s a sample of beach sand.\p“Stones from mountains are washed\ndown by rivers where they are\lchipped and ground down.\p“They are reduced to grains and end\nup as sand on beaches.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817E944::
# 392 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINI FACT 1\nWhy is seawater blue?\p“Light is composed of many colors.\p“When light passes through water,\nmost kinds of light lose color.\p“However, blue light retains its\ncolor, making the sea appear blue.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EA19::
# 396 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINI FACT 2\nWhy is the sea salty?\p“Seawater contains dissolved salt in\nthe form of sodium and chlorine ions.\p“These ions leach out of rocks and are\ncarried out to sea by rain.\p“The concentration of dissolved salt\nmakes the sea salty.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EB0D::
# 400 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINI FACT 3\nWhich is bigger? The sea or land?\p“The sea covers about 70% of the\nplanet, and the rest is land.\p“The sea is therefore more than twice\nthe size of land.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EBBC::
# 404 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "It’s a fossil with wavy ridges on it.\p“Soil on the ocean floor gets scoured\nby the tide.\p“The flowing seawater marks the soil\nwith small ridges and valleys.\p“If this soil becomes fossilized, it is\ncalled a ripple mark.”$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_0817EC98::
# 408 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "A strange machine is rotating under\na glass dome.\pMaybe it’s for measuring the depth\nof something...$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A927F::
# 412 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Oh?\nDo you perhaps like POKéMON?\pI’m on assignment with the TV network.\pI’m gathering stories on POKéMON and\nTRAINERS that occurred recently.\pIf you don’t mind, could you tell me\nsomething about yourself?$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A934C::
# 416 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "I’m gathering stories on POKéMON and\nTRAINERS that occurred recently.\pIf you don’t mind, could you tell me\nsomething about yourself?$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A93D1::
# 420 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Oh, you will?\nThank you!\pThen, please, tell me anything of\ninterest that you experienced recently\linvolving POKéMON.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A9446::
# 424 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Oh, I see...\pWell, if you do have an interesting\nstory to tell, please let me know.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A949A::
# 428 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Oh, what an uplifting story!\pI’ll be sure to get your story told\non television.\pIt should be aired sometime, I think,\nso please look forward to it.$"

Naranja_MurcottIsland_OceanicMuseum_1F_Text_081A952E::
# 432 "data/maps/Naranja_MurcottIsland_OceanicMuseum_1F/scripts.pory"
	.string "Hmmm...\nI’ve got a good story for a TV program.\pI’d better write it up in a hurry!$"
