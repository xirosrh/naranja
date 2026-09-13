Naranja_MurcottIsland_OceanicMuseum_2F_MapScripts::
# 5 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MurcottIsland_OceanicMuseum_2F_OnTransition
	.byte 0


Naranja_MurcottIsland_OceanicMuseum_2F_OnTransition::
# 9 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Scientist1::
# 14 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	lock
# 15 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817ECFD, MSGBOX_DEFAULT
# 17 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 18 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, 1
# 19 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241
# 20 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB4
# 21 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2
# 23 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EC3
# 24 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB8
# 26 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EC5
# 27 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 29 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E62
# 30 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 31 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E62
# 32 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EDAE, MSGBOX_DEFAULT
# 33 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 34 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call_if NOT_EQUAL, Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E6D
# 35 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EDD7, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EE01, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 38 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB2
# 39 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	compare_var_to_value VAR_FACING, 1
# 41 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E78
# 42 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 43 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E83
# 44 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_MURCOTT_ISLAND_585, Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EE4E
# 45 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EE66, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 47 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EBF
# 48 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 49 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB2
# 50 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 51 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EEA5, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 53 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_MURCOTT_ISLAND_586, Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EED6
# 54 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EBF
# 55 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 56 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 57 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 58 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 59 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EEEA, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 61 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay 0x23
# 62 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_246
# 63 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_246, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EA8
# 64 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155ECE
# 65 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 66 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EF62, MSGBOX_DEFAULT
# 67 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_246, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EA6
# 68 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 69 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F17E, MSGBOX_DEFAULT
# 70 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 71 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	fadescreen 1
# 72 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_246
# 73 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241
# 74 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_241_2
# 75 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	fadescreen 0
# 76 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay 0x1E
# 77 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MURCOTT_ISLAND_G09_M06_241
# 78 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 79 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 80 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F352, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, 0x10D
# 82 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	call Naranja_GraniteCave_StevensRoom_EventScript_Sub_081A067F
# 83 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F433, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 85 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_SCIENTIST_1, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155E98
# 86 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 87 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_SCIENTIST_1
# 89 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_ROUTE110_241
# 90 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_NARANJA_7ISLAS_POMELO_EVENT_COMPLETE_0095
# 91 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MANDARIN_ROUTE_ROUTE_G00_M31_MAN_2
# 92 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_NARANJA_TROVITA_ISLAND_G11_M02_TEALA
# 93 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	release
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E62::
# 98 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 99 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E6D::
# 104 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_NARANJA_MURCOTT_ISLAND_OCEANIC_MUSEUM_2F_SCIENTIST_1, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 105 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E78::
# 110 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155E8E
# 111 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sub_08155E83::
# 116 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155E92
# 117 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_1::
# 122 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F572, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_2::
# 127 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F5E3, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_18::
# 132 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F653, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_16::
# 137 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F754, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_14::
# 142 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F7BC, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_12::
# 147 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F84E, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_8::
# 152 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F8BC, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_5::
# 157 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F918, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_3::
# 162 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F975, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Sign_10::
# 167 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F9C7, MSGBOX_SIGN
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_OldMan2::
# 172 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F4B6, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_Woman2::
# 177 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F50E, MSGBOX_NPC
	end


Naranja_MurcottIsland_OceanicMuseum_2F_EventScript_LittleBoy1::
# 182 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	lock
# 183 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 184 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	msgbox Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F53B, MSGBOX_DEFAULT
# 185 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	closemessage
# 186 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	applymovement 32783, Naranja_RusturfTunnel_Movement_081A083D
# 187 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 188 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	release
	end


# 192 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155E8E:
# 193 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 194 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 195 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 198 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155E92:
# 199 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_up
# 200 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 201 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 202 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 203 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 206 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155E98:
# 207 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_up
# 208 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 209 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 210 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 211 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 212 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 213 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_up
# 214 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_up
# 215 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 216 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 217 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_up
# 218 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_up
# 219 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_8
	step_end

# 222 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EA6:
# 223 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 226 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EA8:
# 227 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 228 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 229 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 230 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 231 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 232 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 233 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 234 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 235 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 238 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB2:
# 239 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB4:
# 243 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 244 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 245 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 248 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EB8:
# 249 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 250 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 251 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 252 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 253 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 254 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 257 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EBF:
# 258 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 259 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_left
# 260 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 263 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EC3:
# 264 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
	step_end

# 267 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155EC5:
# 268 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 269 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 270 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 271 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_down
# 272 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 273 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 274 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
# 275 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 278 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
Naranja_MurcottIsland_OceanicMuseum_2F_Movement_08155ECE:
# 279 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 280 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 281 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 282 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 283 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 284 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 285 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 286 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_16
# 287 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	delay_8
# 288 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 289 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
	step_end

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817ECFD::
# 292 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you’re looking for STERN,\nthat would be me.\pAh! That must be the part I\nordered from MR. STONE of DEVON.\pThank you! That’s great!\nWe can prepare for our expedition now.$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EDAE::
# 296 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\nWe’ll take those parts!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EDD7::
# 300 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\nWho are you people?$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EE01::
# 304 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "We’re TEAM {AQUA}!\pOur BOSS wants those parts!\nShut your yap and fork them over!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EE4E::
# 308 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\nA kid beat me!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EE66::
# 312 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster...\nThe BOSS is going to be furious...$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EEA5::
# 316 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\nLet me take care of this!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EED6::
# 320 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "What?!\nI lost, too!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EEEA::
# 324 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don’t get the parts,\nwe’re in for it!\pArrgh, I didn’t count on being meddled\nwith by some meddling kid!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817EF62::
# 328 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\nlong to snatch some parts, and you\lsimps are held up by a mere child?$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F17E::
# 332 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "I am TEAM MAGMA’s MAXIE.\pWhy on earth do you feel compelled\nto mess up TEAM MAGMA’s plans?\pPOKéMON, people, all life exists on land...\pThat’s why TEAM MAGMA is trying to\nexpand the world’s landmass.\pDon’t you agree? What we are doing\nis a magnificent undertaking.\pWell, no matter...\nYou’re young.\pYour inability to understand our\nnoble cause can’t be helped...\pBut, if you were to impede us ever\nagain, you’ll see no mercy from us!\pKeep that firmly in mind!\nFarewell!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F352::
# 336 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You’re...\nAh, okay, you’re {PLAYER}{KUN}...\pAnyway, that was a tense situation!\nThank you for saving us!\pOh, yes, I almost forgot that you\neven brought the parts from DEVON!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F433::
# 340 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\nThere’s no time to lose!\pWe have to set out on our ocean floor\nexpedition really soon.\pThanks, and excuse me!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F4B6::
# 344 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\pIt reminded me of the ABANDONED SHIP\nnear DEWFORD TOWN...$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F50E::
# 348 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Don’t you dare run around inside\nthe MUSEUM!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F53B::
# 352 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine’s awesome!\nI want to go for a ride!$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F572::
# 356 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“KANTO WATER QUALITY SAMPLE,” the\nlabel says.\pThe sea is all connected, but the\nwater seems to differ by region.$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F5E3::
# 360 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“JOHTO WATER QUALITY SAMPLE,” the\nlabel says.\pMaybe the water’s saltiness differs\nfrom one region to another...$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F653::
# 364 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and shrinking.\p“In the sea, the weight of water itself\nexerts pressure.\p“In shallow water, the pressure is not\nvery heavy.\p“However, in extremely deep water,\nthe pressure can reach even tens of\lthousands of tons on a small area.”$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F754::
# 368 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\pIt’s a miniature diorama of the\nHOENN region.\pWhere is LITTLEROOT TOWN on this?$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F7BC::
# 372 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "It’s a display on the flow of seawater.\p“Near the bottom of the sea, water\nflows due to differences in such\lfactors as temperature and salinity.”$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F84E::
# 376 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "It’s a display on the flow of\nseawater.\p“Toward the surface, seawater flows\nas currents driven by the winds.”$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F8BC::
# 380 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p“A scale replica of the ship under\nconstruction at STERN’S SHIPYARD.”$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F918::
# 384 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p“A replica of the high-performance\nocean floor exploration submarine.”$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F975::
# 388 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p“A replica of a compact, unmanned\npod for seafloor exploration.”$"

Naranja_MurcottIsland_OceanicMuseum_2F_Text_0817F9C7::
# 392 "data/maps/Naranja_MurcottIsland_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p“A replica of the luxury liner that\ncircles the globe.”$"
