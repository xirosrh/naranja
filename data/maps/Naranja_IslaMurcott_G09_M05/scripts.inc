Naranja_IslaMurcott_G09_M05_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G09_M05_OnTransition
	.byte 0


Naranja_IslaMurcott_G09_M05_OnTransition::
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId5::
# 13 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 14 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_4
# 16 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 17 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155795
# 18 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 19 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081557A8
# 20 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 21 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081557FE
# 22 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155795::
# 27 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_4, 1
# 28 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817D773
# 29 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 30 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155808
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081557A8::
# 34 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_2, 0
# 35 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CC
# 36 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155893
# 37 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CB
# 38 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155893
# 39 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CA
# 40 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155893
# 41 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00C9
# 42 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155893
# 43 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00C8
# 44 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155893
# 45 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_2, 5
# 46 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_0815588D
# 47 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_4, 2
# 48 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081557FE
# 49 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DA14
# 50 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155808
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081557FE::
# 55 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DDD5
# 56 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 57 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155808::
# 62 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DA49
# 63 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_1, 0
# 65 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CC
# 66 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559FE
# 67 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CB
# 68 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559E7
# 69 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CA
# 70 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559D0
# 71 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00C9
# 72 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559B9
# 73 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00C8
# 74 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559A2
# 75 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	bufferleadmonspeciesname 0
# 76 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 77 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 78 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155899
# 79 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 80 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081558A3
# 81 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 82 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081558D4
# 83 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 84 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155905
# 85 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 86 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155936
# 87 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 88 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155967
# 89 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_0815588D::
# 94 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_NARANJA_ISLA_MURCOTT_EVENT_STATE_4, 2
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155893::
# 99 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	addvar VAR_TEMP_2, 1
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155899::
# 104 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DA5C
# 105 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081558A3::
# 111 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkitemspace ITEM_RED_SCARF, 1
# 112 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 113 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155998
# 114 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DB89
# 115 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00C8
# 117 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0xFE
# 118 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 119 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 0
# 120 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DC1B
# 121 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 122 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081558D4::
# 127 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF, 1
# 128 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 129 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155998
# 130 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DB89
# 131 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 132 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00C9
# 133 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0xFF
# 134 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 135 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 0
# 136 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DC74
# 137 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 138 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155905::
# 143 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkitemspace ITEM_PINK_SCARF, 1
# 144 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 145 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155998
# 146 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DB89
# 147 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 148 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CA
# 149 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x100
# 150 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 151 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 0
# 152 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DCCB
# 153 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 154 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155936::
# 159 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF, 1
# 160 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 161 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155998
# 162 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DB89
# 163 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 164 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CB
# 165 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x101
# 166 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 167 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 0
# 168 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DD27
# 169 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 170 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155967::
# 175 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF, 1
# 176 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 177 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155998
# 178 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DB89
# 179 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 180 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_00CC
# 181 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x102
# 182 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 183 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 0
# 184 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DD78
# 185 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 186 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155998::
# 191 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DB0B
# 192 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 193 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559A2::
# 198 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 199 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 200 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559B3
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559B3::
# 205 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559B9::
# 210 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 211 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 212 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559CA
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559CA::
# 217 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_1, 2
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559D0::
# 222 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 223 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 224 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559E1
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559E1::
# 229 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_1, 3
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559E7::
# 234 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 235 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 236 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559F8
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559F8::
# 241 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_1, 4
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081559FE::
# 246 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 247 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 248 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155A0F
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155A0F::
# 253 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_TEMP_1, 5
	return


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_WOMAN_5_LocalId4::
# 258 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 259 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 260 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0116
# 261 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155A75
# 262 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DE6B
# 263 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 264 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 265 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 266 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155A3A
# 267 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155A3A::
# 272 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	playse SE_PIN
# 273 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 274 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 275 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 276 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitmovement LOCALID_NONE
# 277 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DF57
# 278 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 279 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB8
# 280 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 281 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 0
# 282 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 283 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 284 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MURCOTT_EVENT_COMPLETE_0116
# 285 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_08155A75::
# 290 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817DFB8
# 291 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 292 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 297 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817E03B
# 298 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2::
# 303 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817E0ED
# 304 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 2
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_SKITTY_LocalId7::
# 309 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 310 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 311 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitse
# 312 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 313 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817E14E
# 314 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 315 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitmoncry
# 316 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_ZIGZAGOON_LocalId6::
# 321 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 322 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 323 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitse
# 324 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 325 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817E164
# 326 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 327 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitmoncry
# 328 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_AZUMARILL_LocalId8::
# 333 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 334 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 335 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitse
# 336 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 337 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_0817E178
# 338 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 339 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	waitmoncry
# 340 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADE4D::
# 345 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8005, 1
# 346 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	special InterviewBefore
# 347 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 348 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADED6
# 349 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 350 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A8704
# 351 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 5
# 352 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 353 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADE84
# 354 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 355 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADEB9
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADE84::
# 360 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A87CA
# 361 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 362 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8004, 5
# 363 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 364 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8006, 1
# 365 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 366 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 367 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 368 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 369 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADEC3
# 370 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 371 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADEB9
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADEB9::
# 376 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A8667
# 377 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 378 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADEC3::
# 383 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A8818
# 384 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 385 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8005, 1
# 386 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADED6::
# 390 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A86B5
# 391 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 392 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_OBJ_EVENT_GFX_REPORTER_F_LocalId3::
# 397 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 398 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 399 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	specialvar VAR_RESULT, IsLeadMonNicknamedOrNotEnglish
# 400 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 401 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADE4D
# 402 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8005, 3
# 403 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	special InterviewBefore
# 404 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 405 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE0AC
# 406 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 407 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A82F1
# 408 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 5
# 409 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 410 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADFE9
# 411 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 412 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE0A2
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081ADFE9::
# 417 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A83D0
# 418 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 419 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	random 3
# 420 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 421 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 422 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 423 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE020
# 424 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 425 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE02E
# 426 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 427 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE03C
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE020::
# 432 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A8414
# 433 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 434 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE04A
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE02E::
# 438 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A8470
# 439 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 440 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE04A
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE03C::
# 444 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A84D5
# 445 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 446 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE04A
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE04A::
# 450 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8004, 7
# 451 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 452 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8006, 0
# 453 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 454 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 455 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 456 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 457 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE0A2
# 458 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A852D
# 459 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 460 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8006, 1
# 461 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 462 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	lock
# 463 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	faceplayer
# 464 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 465 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE0A2
# 466 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A85A6
# 467 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 468 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	copyvar VAR_0x8007, VAR_0x800A
# 469 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	setvar VAR_0x8005, 3
# 470 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46
	return


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE0A2::
# 474 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A8667
# 475 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 476 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_EventScript_Sub_081AE0AC::
# 481 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M05_Text_081A86B5
# 482 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	callstd 4
# 483 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M05_Text_0817D773::
# 487 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Er-hem! I am the CHAIRMAN of the\nPOKéMON FAN CLUB!\pBeing the CHAIRMAN, I am naturally\nthe most important!\pNo one could best me when it comes\nto raising POKéMON. No one!\pIn any CONTEST, my victory is a\nforegone conclusion!\pBut, that would deprive others of\ntheir enjoyment.\pSo, I now while away my time\nexamining the POKéMON of others.\pIt is marvelous to witness how\nothers have raised POKéMON.\pThe contented faces of properly\nraised POKéMON...\pThe kind and loving gazes of their\nTRAINERS...\pMy heart is overwhelmed - there is\nso much happiness.\pOh, my! Excuse me! I seem to have\nnattered on far too long!\pPlease, do allow me to examine your\nPOKéMON and see how it’s grown.$"

Naranja_IslaMurcott_G09_M05_Text_0817DA14::
# 491 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "How is your POKéMON growing?\nAllow me to examine it.$"

Naranja_IslaMurcott_G09_M05_Text_0817DA49::
# 495 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Hm, hm...\nI see...$"

Naranja_IslaMurcott_G09_M05_Text_0817DA5C::
# 499 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Hmmm... It’s not bad, but it’s not\ngood, either...\pYou, the TRAINER, must put more\neffort into raising this POKéMON!\pFor instance, may I suggest that\nyou give it more オカキクケS?$"

Naranja_IslaMurcott_G09_M05_Text_0817DB0B::
# 503 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Oh, my...\pYour POKéMON is growing quite well,\nso you deserve a reward.\pUnfortunately, you have no space for\nthis in your BAG.$"

Naranja_IslaMurcott_G09_M05_Text_0817DB89::
# 507 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\na most impressive manner!\lIt is one fine specimen!\pBut! If you were to give it this,\nit would grow even better! Indeed!$"

Naranja_IslaMurcott_G09_M05_Text_0817DC1B::
# 511 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Let a POKéMON hold that RED SCARF.\pEveryone will recognize the coolness\nof that POKéMON!$"

Naranja_IslaMurcott_G09_M05_Text_0817DC74::
# 515 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Let a POKéMON hold that BLUE SCARF.\pIts beauty will be accentuated much\nmore than now!$"

Naranja_IslaMurcott_G09_M05_Text_0817DCCB::
# 519 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Let a POKéMON hold that PINK SCARF.\pIt will draw out the cuteness of\nthe POKéMON some more!$"

Naranja_IslaMurcott_G09_M05_Text_0817DD27::
# 523 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Let a POKéMON hold that GREEN SCARF.\pThat will enhance the\nsmartness of POKéMON!$"

Naranja_IslaMurcott_G09_M05_Text_0817DD78::
# 527 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Let a POKéMON hold that YELLOW SCARF.\pIt will bolster your POKéMON’s\ntoughness so much more!$"

Naranja_IslaMurcott_G09_M05_Text_0817DDD5::
# 531 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "I’m sorry, but I’ve nothing else to\ngive you! None at all!\pAfter all, you’re blessed with the gift\nof raising POKéMON without resorting\lto any items!$"

Naranja_IslaMurcott_G09_M05_Text_0817DE6B::
# 535 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "I love seeing POKéMON that love\ntheir TRAINERS.\pPOKéMON are very sensitive to the\nfeelings of their TRAINERS.\pIf you treat your POKéMON with love\nand care, they’ll love you back.\pWhen your POKéMON grow to love you,\nplease come show me.$"

Naranja_IslaMurcott_G09_M05_Text_0817DF57::
# 539 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Your POKéMON really adores you.\pFor you, a most compassionate\nTRAINER, a gift from the FAN CLUB!$"

Naranja_IslaMurcott_G09_M05_Text_0817DFB8::
# 543 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "POKéMON are very sensitive to the\nfeelings of their TRAINERS.\pIf you treat your POKéMON with love\nand care, they’ll love you back.$"

Naranja_IslaMurcott_G09_M05_Text_0817E03B::
# 547 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "If you keep letting a POKéMON faint\nin battle, it’ll come to resent it.\pSoon, it will become less trusting\nof the TRAINER.\pIn other words, it certainly won’t\nlike you very much.$"

Naranja_IslaMurcott_G09_M05_Text_0817E0ED::
# 551 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Do POKéMON enjoy having items used\non them?\pMine acted really happy when I gave\nit some PROTEIN.$"

Naranja_IslaMurcott_G09_M05_Text_0817E14E::
# 555 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "SKITTY: Fffnyaaaah...$"

Naranja_IslaMurcott_G09_M05_Text_0817E164::
# 559 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "ZIGZAGOON: Kyuuu...$"

Naranja_IslaMurcott_G09_M05_Text_0817E178::
# 563 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "AZUMARILL: Marimari?$"

Naranja_IslaMurcott_G09_M05_Text_081A82F1::
# 567 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Wow!\pIt’s plain to see that you lavish your\nlove on your {STR_VAR_1}.\pOkay, it’s named {STR_VAR_2}.\pCan I ask you a favor?\pI’m a TV reporter, and I’m running\na survey on POKéMON.\pWould you be willing to answer a few\nsimple questions for me?$"

Naranja_IslaMurcott_G09_M05_Text_081A83D0::
# 571 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Great! Thank you!\pOkay, here goes.\nI just need quick answers, okay?$"

Naranja_IslaMurcott_G09_M05_Text_081A8414::
# 575 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "When you first met {STR_VAR_1}, what\ndid you feel?\pHow would you describe your feelings\nat the time?$"

Naranja_IslaMurcott_G09_M05_Text_081A8470::
# 579 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Your {STR_VAR_1} is cared for lovingly.\pIf you were to liken it to something\nthat you like, what would it be?$"

Naranja_IslaMurcott_G09_M05_Text_081A84D5::
# 583 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "This question also relates to your\nbeloved {STR_VAR_1}.\pWhat was it about {STR_VAR_1} that\nattracted you?$"

Naranja_IslaMurcott_G09_M05_Text_081A852D::
# 587 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Okay, that makes sense.\pThe next question might be a little\non the tough side.\pHere goes...\pWhat do POKéMON mean to you?$"

Naranja_IslaMurcott_G09_M05_Text_081A85A6::
# 591 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "I see!\pHmhm...\pOkay!\nThanks for helping me out.\pIt was fun and enlightening chatting\nwith you.\pIt’s possible that our interview will end\nup on TV. Tune in and check!\pOkay, that’s all.\nBye-bye!$"

Naranja_IslaMurcott_G09_M05_Text_081A8667::
# 595 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Oh, okay...\pWell, if you get the urge to tell me\nabout POKéMON, I’ll be here!$"

Naranja_IslaMurcott_G09_M05_Text_081A86B5::
# 599 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "I enjoy this job - you get to learn so\nmuch about POKéMON by doing\linterviews.$"

Naranja_IslaMurcott_G09_M05_Text_081A8704::
# 603 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Hi, you seem to be very close to your\n{STR_VAR_1}.\pDo you know what?\nI’m a TV reporter.\pI travel around interviewing people\nabout POKéMON.\pI’m wondering if you’d be willing to tell\nme a little abut your {STR_VAR_1}?$"

Naranja_IslaMurcott_G09_M05_Text_081A87CA::
# 607 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Wow, thank you!\pOkay, then, please tell me anything you’d\nlike about your {STR_VAR_1}.$"

Naranja_IslaMurcott_G09_M05_Text_081A8818::
# 611 "data/maps/Naranja_IslaMurcott_G09_M05/scripts.pory"
	.string "Wow...\nThat’s an interesting account.\pYou really are tight with {STR_VAR_1},\naren’t you?\pI get the feeling that your account\nwill make a great TV story.\pI promise that I’ll turn this into\nan entertaining show.\lKeep your eyes out for it.\pOkay, that’s all.\nBye-bye!$"
