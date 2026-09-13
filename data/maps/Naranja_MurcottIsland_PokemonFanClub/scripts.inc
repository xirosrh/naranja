Naranja_MurcottIsland_PokemonFanClub_MapScripts::
# 5 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MurcottIsland_PokemonFanClub_OnTransition
	.byte 0


Naranja_MurcottIsland_PokemonFanClub_OnTransition::
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Gentleman::
# 13 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 14 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_4
# 16 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 17 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155795
# 18 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 19 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081557A8
# 20 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 21 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081557FE
# 22 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155795::
# 27 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_4, 1
# 28 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817D773, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155808
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081557A8::
# 33 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 34 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CC
# 35 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155893
# 36 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CB
# 37 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155893
# 38 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CA
# 39 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155893
# 40 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00C9
# 41 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155893
# 42 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00C8
# 43 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155893
# 44 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 5
# 45 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_0815588D
# 46 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_4, 2
# 47 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081557FE
# 48 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DA14, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155808
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081557FE::
# 53 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DDD5, MSGBOX_DEFAULT
# 54 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155808::
# 59 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DA49, MSGBOX_DEFAULT
# 60 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 61 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CC
# 62 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if LESS_THAN, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559FE
# 63 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CB
# 64 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if LESS_THAN, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559E7
# 65 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CA
# 66 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if LESS_THAN, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559D0
# 67 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00C9
# 68 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if LESS_THAN, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559B9
# 69 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00C8
# 70 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if LESS_THAN, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559A2
# 71 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname 0
# 72 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 73 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 74 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155899
# 75 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 76 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081558A3
# 77 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 78 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081558D4
# 79 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 80 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155905
# 81 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 82 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155936
# 83 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 84 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155967
# 85 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_0815588D::
# 90 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_4, 2
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155893::
# 95 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155899::
# 100 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DA5C, MSGBOX_DEFAULT
# 101 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081558A3::
# 106 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF, 1
# 107 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 108 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155998
# 109 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DB89, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00C8
# 111 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8000, 0xFE
# 112 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 113 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	callstd 0
# 114 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DC1B, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081558D4::
# 120 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF, 1
# 121 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 122 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155998
# 123 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DB89, MSGBOX_DEFAULT
# 124 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00C9
# 125 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8000, 0xFF
# 126 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 127 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	callstd 0
# 128 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DC74, MSGBOX_DEFAULT
# 129 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155905::
# 134 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF, 1
# 135 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 136 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155998
# 137 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DB89, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CA
# 139 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8000, 0x100
# 140 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 141 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	callstd 0
# 142 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DCCB, MSGBOX_DEFAULT
# 143 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155936::
# 148 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF, 1
# 149 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 150 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155998
# 151 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DB89, MSGBOX_DEFAULT
# 152 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CB
# 153 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8000, 0x101
# 154 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 155 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	callstd 0
# 156 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DD27, MSGBOX_DEFAULT
# 157 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155967::
# 162 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF, 1
# 163 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 164 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155998
# 165 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DB89, MSGBOX_DEFAULT
# 166 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_00CC
# 167 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8000, 0x102
# 168 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 169 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	callstd 0
# 170 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DD78, MSGBOX_DEFAULT
# 171 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155998::
# 176 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DB0B, MSGBOX_DEFAULT
# 177 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559A2::
# 182 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 183 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 184 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559B3
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559B3::
# 189 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559B9::
# 194 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 195 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 196 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559CA
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559CA::
# 201 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559D0::
# 206 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 207 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 208 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559E1
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559E1::
# 213 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559E7::
# 218 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 219 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 220 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559F8
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559F8::
# 225 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081559FE::
# 230 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 231 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 232 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155A0F
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155A0F::
# 237 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Woman5::
# 242 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 243 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 244 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	checkflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0116
# 245 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155A75
# 246 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DE6B, MSGBOX_DEFAULT
# 247 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 248 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 249 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155A3A
# 250 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155A3A::
# 255 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 256 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 257 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 258 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 259 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitmovement LOCALID_NONE
# 260 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DF57, MSGBOX_DEFAULT
# 261 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB8
# 262 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 263 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	callstd 0
# 264 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 265 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 266 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setflag FLAG_NARANJA_MURCOTT_ISLAND_EVENT_COMPLETE_0116
# 267 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_08155A75::
# 272 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817DFB8, MSGBOX_DEFAULT
# 273 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Man1::
# 278 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817E03B, MSGBOX_NPC
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_LittleGirl1::
# 283 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817E0ED, MSGBOX_NPC
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Skitty::
# 288 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 289 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 290 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitse
# 291 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 292 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817E14E, MSGBOX_DEFAULT
# 293 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitmoncry
# 294 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Zigzagoon::
# 299 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 300 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 301 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitse
# 302 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 303 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817E164, MSGBOX_DEFAULT
# 304 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitmoncry
# 305 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Azumarill::
# 310 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 311 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 312 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitse
# 313 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 314 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_0817E178, MSGBOX_DEFAULT
# 315 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	waitmoncry
# 316 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADE4D::
# 321 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, 1
# 322 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	special InterviewBefore
# 323 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 324 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADED6
# 325 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 326 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A8704, MSGBOX_YESNO
# 327 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 328 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADE84
# 329 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 330 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADEB9
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADE84::
# 335 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A87CA, MSGBOX_DEFAULT
# 336 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8004, 5
# 337 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 338 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8006, 1
# 339 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 340 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 341 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 342 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 343 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADEC3
# 344 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 345 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADEB9
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADEB9::
# 350 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A8667, MSGBOX_DEFAULT
# 351 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADEC3::
# 356 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A8818, MSGBOX_DEFAULT
# 357 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, 1
# 358 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081ADE46
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADED6::
# 362 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A86B5, MSGBOX_DEFAULT
# 363 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_ReporterF::
# 368 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 369 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 370 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, IsLeadMonNicknamedOrNotEnglish
# 371 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 372 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADE4D
# 373 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, 3
# 374 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	special InterviewBefore
# 375 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 376 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE0AC
# 377 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 378 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A82F1, MSGBOX_YESNO
# 379 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 380 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADFE9
# 381 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 382 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE0A2
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081ADFE9::
# 387 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A83D0, MSGBOX_DEFAULT
# 388 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	random 3
# 389 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 390 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 391 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 392 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE020
# 393 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 394 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE02E
# 395 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 396 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE03C
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE020::
# 401 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A8414, MSGBOX_DEFAULT
# 402 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE04A
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE02E::
# 406 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A8470, MSGBOX_DEFAULT
# 407 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE04A
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE03C::
# 411 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A84D5, MSGBOX_DEFAULT
# 412 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE04A
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE04A::
# 416 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8004, 7
# 417 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 418 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8006, 0
# 419 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 420 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 421 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 422 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 423 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE0A2
# 424 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A852D, MSGBOX_DEFAULT
# 425 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8006, 1
# 426 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	call Naranja_Route123_BerryMastersHouse_EventScript_Sub_081A00F3
# 427 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	lock
# 428 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	faceplayer
# 429 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 430 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto_if EQUAL, Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE0A2
# 431 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A85A6, MSGBOX_DEFAULT
# 432 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8007, VAR_0x800A
# 433 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, 3
# 434 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	goto Naranja_KumquatIsland_ContestLobby_EventScript_Sub_081ADE46
	return


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE0A2::
# 438 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A8667, MSGBOX_DEFAULT
# 439 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_EventScript_Sub_081AE0AC::
# 444 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	msgbox Naranja_MurcottIsland_PokemonFanClub_Text_081A86B5, MSGBOX_DEFAULT
# 445 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	release
	end


Naranja_MurcottIsland_PokemonFanClub_Text_0817D773::
# 449 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the CHAIRMAN of the\nPOKéMON FAN CLUB!\pBeing the CHAIRMAN, I am naturally\nthe most important!\pNo one could best me when it comes\nto raising POKéMON. No one!\pIn any CONTEST, my victory is a\nforegone conclusion!\pBut, that would deprive others of\ntheir enjoyment.\pSo, I now while away my time\nexamining the POKéMON of others.\pIt is marvelous to witness how\nothers have raised POKéMON.\pThe contented faces of properly\nraised POKéMON...\pThe kind and loving gazes of their\nTRAINERS...\pMy heart is overwhelmed - there is\nso much happiness.\pOh, my! Excuse me! I seem to have\nnattered on far too long!\pPlease, do allow me to examine your\nPOKéMON and see how it’s grown.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DA14::
# 453 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "How is your POKéMON growing?\nAllow me to examine it.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DA49::
# 457 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Hm, hm...\nI see...$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DA5C::
# 461 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Hmmm... It’s not bad, but it’s not\ngood, either...\pYou, the TRAINER, must put more\neffort into raising this POKéMON!\pFor instance, may I suggest that\nyou give it more オカキクケS?$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DB0B::
# 465 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Oh, my...\pYour POKéMON is growing quite well,\nso you deserve a reward.\pUnfortunately, you have no space for\nthis in your BAG.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DB89::
# 469 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\na most impressive manner!\lIt is one fine specimen!\pBut! If you were to give it this,\nit would grow even better! Indeed!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DC1B::
# 473 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that RED SCARF.\pEveryone will recognize the coolness\nof that POKéMON!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DC74::
# 477 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that BLUE SCARF.\pIts beauty will be accentuated much\nmore than now!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DCCB::
# 481 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that PINK SCARF.\pIt will draw out the cuteness of\nthe POKéMON some more!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DD27::
# 485 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that GREEN SCARF.\pThat will enhance the\nsmartness of POKéMON!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DD78::
# 489 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that YELLOW SCARF.\pIt will bolster your POKéMON’s\ntoughness so much more!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DDD5::
# 493 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "I’m sorry, but I’ve nothing else to\ngive you! None at all!\pAfter all, you’re blessed with the gift\nof raising POKéMON without resorting\lto any items!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DE6B::
# 497 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "I love seeing POKéMON that love\ntheir TRAINERS.\pPOKéMON are very sensitive to the\nfeelings of their TRAINERS.\pIf you treat your POKéMON with love\nand care, they’ll love you back.\pWhen your POKéMON grow to love you,\nplease come show me.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DF57::
# 501 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Your POKéMON really adores you.\pFor you, a most compassionate\nTRAINER, a gift from the FAN CLUB!$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817DFB8::
# 505 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to the\nfeelings of their TRAINERS.\pIf you treat your POKéMON with love\nand care, they’ll love you back.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817E03B::
# 509 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "If you keep letting a POKéMON faint\nin battle, it’ll come to resent it.\pSoon, it will become less trusting\nof the TRAINER.\pIn other words, it certainly won’t\nlike you very much.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817E0ED::
# 513 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Do POKéMON enjoy having items used\non them?\pMine acted really happy when I gave\nit some PROTEIN.$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817E14E::
# 517 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "SKITTY: Fffnyaaaah...$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817E164::
# 521 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "ZIGZAGOON: Kyuuu...$"

Naranja_MurcottIsland_PokemonFanClub_Text_0817E178::
# 525 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "AZUMARILL: Marimari?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A82F1::
# 529 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Wow!\pIt’s plain to see that you lavish your\nlove on your {STR_VAR_1}.\pOkay, it’s named {STR_VAR_2}.\pCan I ask you a favor?\pI’m a TV reporter, and I’m running\na survey on POKéMON.\pWould you be willing to answer a few\nsimple questions for me?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A83D0::
# 533 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Great! Thank you!\pOkay, here goes.\nI just need quick answers, okay?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A8414::
# 537 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "When you first met {STR_VAR_1}, what\ndid you feel?\pHow would you describe your feelings\nat the time?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A8470::
# 541 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1} is cared for lovingly.\pIf you were to liken it to something\nthat you like, what would it be?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A84D5::
# 545 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "This question also relates to your\nbeloved {STR_VAR_1}.\pWhat was it about {STR_VAR_1} that\nattracted you?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A852D::
# 549 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Okay, that makes sense.\pThe next question might be a little\non the tough side.\pHere goes...\pWhat do POKéMON mean to you?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A85A6::
# 553 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "I see!\pHmhm...\pOkay!\nThanks for helping me out.\pIt was fun and enlightening chatting\nwith you.\pIt’s possible that our interview will end\nup on TV. Tune in and check!\pOkay, that’s all.\nBye-bye!$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A8667::
# 557 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Oh, okay...\pWell, if you get the urge to tell me\nabout POKéMON, I’ll be here!$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A86B5::
# 561 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "I enjoy this job - you get to learn so\nmuch about POKéMON by doing\linterviews.$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A8704::
# 565 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Hi, you seem to be very close to your\n{STR_VAR_1}.\pDo you know what?\nI’m a TV reporter.\pI travel around interviewing people\nabout POKéMON.\pI’m wondering if you’d be willing to tell\nme a little abut your {STR_VAR_1}?$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A87CA::
# 569 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Wow, thank you!\pOkay, then, please tell me anything you’d\nlike about your {STR_VAR_1}.$"

Naranja_MurcottIsland_PokemonFanClub_Text_081A8818::
# 573 "data/maps/Naranja_MurcottIsland_PokemonFanClub/scripts.pory"
	.string "Wow...\nThat’s an interesting account.\pYou really are tight with {STR_VAR_1},\naren’t you?\pI get the feeling that your account\nwill make a great TV story.\pI promise that I’ll turn this into\nan entertaining show.\lKeep your eyes out for it.\pOkay, that’s all.\nBye-bye!$"
