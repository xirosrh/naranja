Naranja_Route124_G33_M00_MapScripts::
# 5 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route124_G33_M00_OnTransition
	.byte 0


Naranja_Route124_G33_M00_OnTransition::
# 9 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE124_EVENT_COMPLETE_085B
	end


Naranja_Route124_G33_M00_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId1::
# 14 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE124_EVENT_COMPLETE_00D9
# 17 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E20
# 18 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F416
# 19 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE124_EVENT_COMPLETE_00D9
# 21 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163E2E
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E20::
# 25 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F48F
# 26 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163E2E
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E2E::
# 31 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call Naranja_Route124_G33_M00_EventScript_Sub_08163E44
# 32 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 33 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164329
# 34 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163EA2
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E44::
# 38 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_TEMP_1, 0
# 39 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_RED_SHARD, 1
# 40 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 41 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E8A
# 42 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 43 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 44 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E90
# 45 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 46 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 47 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E96
# 48 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 49 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 50 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E9C
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E8A::
# 55 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 1
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E90::
# 60 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 2
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E96::
# 65 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 4
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E9C::
# 70 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 8
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163EA2::
# 75 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F544
# 76 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 77 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163EB0
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163EB0::
# 81 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	message Naranja_Route124_G33_M00_Text_0819F5C5
# 82 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	waitmessage
# 83 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 84 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 85 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163F61
# 86 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 87 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163F87
# 88 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 89 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163FAD
# 90 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 91 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163FDE
# 92 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 93 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164004
# 94 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 95 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164035
# 96 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 97 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164066
# 98 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 99 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081640A2
# 100 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 101 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081640C8
# 102 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 103 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081640F9
# 104 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xB
# 105 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816412A
# 106 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xC
# 107 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164166
# 108 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xD
# 109 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164197
# 110 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xE
# 111 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081641D3
# 112 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xF
# 113 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816420F
	end


Naranja_Route124_G33_M00_EventScript_Sub_08163F61::
# 118 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3A, 0
# 119 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 120 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 121 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 122 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 123 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 124 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163F87::
# 128 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3B, 0
# 129 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 130 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 131 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 132 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 133 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 134 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163FAD::
# 138 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3C, 0
# 139 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 140 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 141 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 142 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 143 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 144 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 145 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 146 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163FDE::
# 150 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3D, 0
# 151 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 152 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 153 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 154 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 155 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 156 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164004::
# 160 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3E, 0
# 161 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 162 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 163 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 164 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 165 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 166 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 167 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 168 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164035::
# 172 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3F, 0
# 173 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 174 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 175 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 176 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 177 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 178 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 179 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 180 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164066::
# 184 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x40, 0
# 185 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 186 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 187 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 188 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 189 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 190 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 191 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 192 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 193 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 194 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081640A2::
# 198 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x41, 0
# 199 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 200 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 201 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 202 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 203 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 204 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081640C8::
# 208 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x42, 0
# 209 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 210 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 211 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 212 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 213 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 214 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 215 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 216 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081640F9::
# 220 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x43, 0
# 221 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 222 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 223 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 224 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 225 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 226 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 227 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 228 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_0816412A::
# 232 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x44, 0
# 233 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 234 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 235 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 236 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 237 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 238 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 239 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 240 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 241 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 242 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164166::
# 246 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x45, 0
# 247 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 248 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 249 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 250 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 251 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 252 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 253 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 254 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164197::
# 258 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x46, 0
# 259 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 260 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 261 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 262 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 263 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 264 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 265 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 266 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 267 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 268 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081641D3::
# 272 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x47, 0
# 273 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 274 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 275 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 276 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 277 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 278 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 279 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 280 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 281 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 282 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_0816420F::
# 286 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x48, 0
# 287 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 288 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 289 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 290 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 291 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 292 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 293 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 294 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 295 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 296 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 297 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 298 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164256::
# 302 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x30
# 303 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x5F
# 304 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164265::
# 308 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x32
# 309 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x60
# 310 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164274::
# 314 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x31
# 315 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x61
# 316 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164283::
# 320 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x33
# 321 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x62
# 322 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164292::
# 326 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 327 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	bufferitemname 1, 0x8009
# 328 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F5E0
# 329 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 5
# 330 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 331 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 332 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitemspace 0x8009, 1
# 333 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 334 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081642D3
# 335 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem 0x8008, 2
# 336 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 337 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081642D3
# 338 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164315
	return


Naranja_Route124_G33_M00_EventScript_Sub_081642D3::
# 342 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	removeitem 0x8008, 1
# 343 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8009
# 344 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 345 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 0
# 346 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F606
# 347 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 348 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call Naranja_Route124_G33_M00_EventScript_Sub_08163E44
# 349 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 350 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164333
# 351 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F629
# 352 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 5
# 353 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 354 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163EB0
# 355 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164315::
# 359 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F64E
# 360 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 361 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sub_0816431F::
# 366 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F686
# 367 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 368 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sub_08164329::
# 373 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F4D1
# 374 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 4
# 375 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sub_08164333::
# 380 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sign_1::
# 385 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	loadword 0, Naranja_Route124_G33_M00_Text_0819F6C5
# 386 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 3
	end


Naranja_Route124_G33_M00_Text_0819F416::
# 390 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "I’m the DIVING TREASURE HUNTER!\pI’m the awesome dude who makes\ndeep-sea dives to gather treasures\lresting at the bottom.$"

Naranja_Route124_G33_M00_Text_0819F48F::
# 394 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Tell me, have you seen any SHARDS of\ntools made in ancient times?$"

Naranja_Route124_G33_M00_Text_0819F4D1::
# 398 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "You haven’t got any treasures\nfor me...\pIf you see any SHARDS, like the RED\nSHARD, you’ve got to trade it with me!$"

Naranja_Route124_G33_M00_Text_0819F544::
# 402 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Oh, hey! That...\nThat’s a SHARD! I’m looking for those!\pOh, man, you’ve got to trade that\nwith me! I’ll give you something good!$"

Naranja_Route124_G33_M00_Text_0819F5C5::
# 406 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "What do you want to trade?$"

Naranja_Route124_G33_M00_Text_0819F5E0::
# 410 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "You’ll trade your {STR_VAR_1} for\nmy {STR_VAR_2}, then?$"

Naranja_Route124_G33_M00_Text_0819F606::
# 414 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "It’s a done deal!\nUse that wisely!$"

Naranja_Route124_G33_M00_Text_0819F629::
# 418 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Do you want to trade something else?$"

Naranja_Route124_G33_M00_Text_0819F64E::
# 422 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Whoops, your BAG’s full.\nGet rid of some items, friend!$"

Naranja_Route124_G33_M00_Text_0819F686::
# 426 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "No? That’s a downer.\nWell, if you change your mind, come back.$"

Naranja_Route124_G33_M00_Text_0819F6C5::
# 430 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Wanted item              Trade item\n RED SHARD           ロワ FIRE STONE\pWanted item              Trade item\n YELLOW SHARD     ロワ THUNDERSTONE\pWanted item              Trade item\n BLUE SHARD         ロワ WATER STONE\pWanted item              Trade item\n GREEN SHARD       ロワ LEAF STONE$"
