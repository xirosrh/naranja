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
	msgbox Naranja_Route124_G33_M00_Text_0819F416, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE124_EVENT_COMPLETE_00D9
# 20 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163E2E
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E20::
# 24 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F48F, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163E2E
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E2E::
# 29 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call Naranja_Route124_G33_M00_EventScript_Sub_08163E44
# 30 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 31 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164329
# 32 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163EA2
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E44::
# 36 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_TEMP_1, 0
# 37 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_RED_SHARD, 1
# 38 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 39 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E8A
# 40 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 41 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 42 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E90
# 43 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 44 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 45 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E96
# 46 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 47 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 48 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163E9C
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E8A::
# 53 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 1
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E90::
# 58 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 2
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E96::
# 63 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 4
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163E9C::
# 68 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	addvar VAR_TEMP_1, 8
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163EA2::
# 73 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F544, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08163EB0
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163EB0::
# 78 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	message Naranja_Route124_G33_M00_Text_0819F5C5
# 79 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	waitmessage
# 80 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 81 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 82 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163F61
# 83 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 84 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163F87
# 85 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 86 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163FAD
# 87 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 88 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163FDE
# 89 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 90 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164004
# 91 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 92 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164035
# 93 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 94 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164066
# 95 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 8
# 96 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081640A2
# 97 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 9
# 98 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081640C8
# 99 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 100 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081640F9
# 101 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xB
# 102 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816412A
# 103 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xC
# 104 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164166
# 105 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xD
# 106 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164197
# 107 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xE
# 108 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081641D3
# 109 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xF
# 110 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816420F
	end


Naranja_Route124_G33_M00_EventScript_Sub_08163F61::
# 115 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3A, 0
# 116 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 117 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 118 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 119 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 120 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 121 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163F87::
# 125 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3B, 0
# 126 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 127 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 128 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 129 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 130 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 131 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163FAD::
# 135 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3C, 0
# 136 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 137 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 138 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 139 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 140 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 141 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 142 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 143 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08163FDE::
# 147 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3D, 0
# 148 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 149 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 150 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 151 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 152 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 153 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164004::
# 157 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3E, 0
# 158 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 159 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 160 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 161 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 162 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 163 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 164 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 165 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164035::
# 169 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x3F, 0
# 170 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 171 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 172 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 173 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 174 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 175 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 176 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 177 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164066::
# 181 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x40, 0
# 182 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 183 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 184 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 185 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 186 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 187 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 188 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 189 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 190 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 191 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081640A2::
# 195 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x41, 0
# 196 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 197 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 198 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 199 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 200 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 201 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081640C8::
# 205 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x42, 0
# 206 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 207 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 208 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 209 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 210 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 211 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 212 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 213 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081640F9::
# 217 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x43, 0
# 218 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 219 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 220 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 221 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 222 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 223 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 224 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 225 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_0816412A::
# 229 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x44, 0
# 230 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 231 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 232 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 233 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 234 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 235 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 236 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 237 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 238 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 239 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164166::
# 243 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x45, 0
# 244 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 245 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 246 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 247 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 248 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 249 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 250 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 251 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164197::
# 255 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x46, 0
# 256 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 257 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 258 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 259 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 260 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 261 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 262 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 263 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 264 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 265 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_081641D3::
# 269 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x47, 0
# 270 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 271 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 272 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 273 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 274 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 275 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 276 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 277 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 278 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 279 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_0816420F::
# 283 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	multichoice 0, 0, 0x48, 0
# 284 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 285 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 286 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164256
# 287 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 288 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164265
# 289 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 290 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164274
# 291 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 292 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164283
# 293 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 294 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 295 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164256::
# 299 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x30
# 300 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x5F
# 301 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164265::
# 305 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x32
# 306 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x60
# 307 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164274::
# 311 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x31
# 312 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x61
# 313 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164283::
# 317 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8008, 0x33
# 318 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setvar VAR_0x8009, 0x62
# 319 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164292
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164292::
# 323 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 324 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	bufferitemname 1, 0x8009
# 325 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F5E0, MSGBOX_YESNO
# 326 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 327 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_0816431F
# 328 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitemspace 0x8009, 1
# 329 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 330 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081642D3
# 331 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	checkitem 0x8008, 2
# 332 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 333 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_081642D3
# 334 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_08164315
	return


Naranja_Route124_G33_M00_EventScript_Sub_081642D3::
# 338 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	removeitem 0x8008, 1
# 339 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8009
# 340 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 341 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	callstd 0
# 342 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F606, MSGBOX_DEFAULT
# 343 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	call Naranja_Route124_G33_M00_EventScript_Sub_08163E44
# 344 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 345 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08164333
# 346 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F629, MSGBOX_YESNO
# 347 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 348 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G33_M00_EventScript_Sub_08163EB0
# 349 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	goto Naranja_Route124_G33_M00_EventScript_Sub_0816431F
	return


Naranja_Route124_G33_M00_EventScript_Sub_08164315::
# 353 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F64E, MSGBOX_DEFAULT
# 354 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sub_0816431F::
# 359 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F686, MSGBOX_DEFAULT
# 360 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sub_08164329::
# 365 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F4D1, MSGBOX_DEFAULT
# 366 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sub_08164333::
# 371 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	release
	end


Naranja_Route124_G33_M00_EventScript_Sign_1::
# 376 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	msgbox Naranja_Route124_G33_M00_Text_0819F6C5, MSGBOX_SIGN
	end


Naranja_Route124_G33_M00_Text_0819F416::
# 380 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "I’m the DIVING TREASURE HUNTER!\pI’m the awesome dude who makes\ndeep-sea dives to gather treasures\lresting at the bottom.$"

Naranja_Route124_G33_M00_Text_0819F48F::
# 384 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Tell me, have you seen any SHARDS of\ntools made in ancient times?$"

Naranja_Route124_G33_M00_Text_0819F4D1::
# 388 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "You haven’t got any treasures\nfor me...\pIf you see any SHARDS, like the RED\nSHARD, you’ve got to trade it with me!$"

Naranja_Route124_G33_M00_Text_0819F544::
# 392 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Oh, hey! That...\nThat’s a SHARD! I’m looking for those!\pOh, man, you’ve got to trade that\nwith me! I’ll give you something good!$"

Naranja_Route124_G33_M00_Text_0819F5C5::
# 396 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "What do you want to trade?$"

Naranja_Route124_G33_M00_Text_0819F5E0::
# 400 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "You’ll trade your {STR_VAR_1} for\nmy {STR_VAR_2}, then?$"

Naranja_Route124_G33_M00_Text_0819F606::
# 404 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "It’s a done deal!\nUse that wisely!$"

Naranja_Route124_G33_M00_Text_0819F629::
# 408 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Do you want to trade something else?$"

Naranja_Route124_G33_M00_Text_0819F64E::
# 412 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Whoops, your BAG’s full.\nGet rid of some items, friend!$"

Naranja_Route124_G33_M00_Text_0819F686::
# 416 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "No? That’s a downer.\nWell, if you change your mind, come back.$"

Naranja_Route124_G33_M00_Text_0819F6C5::
# 420 "data/maps/Naranja_Route124_G33_M00/scripts.pory"
	.string "Wanted item              Trade item\n RED SHARD           ロワ FIRE STONE\pWanted item              Trade item\n YELLOW SHARD     ロワ THUNDERSTONE\pWanted item              Trade item\n BLUE SHARD         ロワ WATER STONE\pWanted item              Trade item\n GREEN SHARD       ロワ LEAF STONE$"
