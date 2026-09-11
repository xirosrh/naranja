Naranja_Norte_G30_M00_MapScripts::
# 5 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Norte_G30_M00_OnTransition
	.byte 0


Naranja_Norte_G30_M00_OnTransition::
# 9 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setflag FLAG_NARANJA_NORTE_EVENT_COMPLETE_0844
# 10 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_NORTE_STORY_STATE, 1
# 11 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816355F
	end


Naranja_Norte_G30_M00_EventScript_Sub_0816355F::
# 16 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 2
	return


Naranja_Norte_G30_M00_EventScript_OBJ_EVENT_GFX_DITTO_DOLL_LocalId1::
# 21 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	lock
# 22 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	faceplayer
# 23 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_NORTE_STORY_STATE, 0xA
# 24 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081638D2
# 25 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_NORTE_STORY_STATE, 2
# 26 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081635B5
# 27 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_NORTE_STORY_STATE, 1
# 28 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081635AB
# 29 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E4E6
# 30 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 31 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10E
# 32 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 33 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 0
# 34 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 1
# 35 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E59B
# 36 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_081635AB::
# 42 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E59B
# 43 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 44 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_081635B5::
# 49 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	checkitem ITEM_SOOT_SACK, 1
# 50 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 51 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081635E4
# 52 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E65B
# 53 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 54 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0xFA
# 55 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163818
# 56 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	message Naranja_Norte_G30_M00_Text_0819E757
# 57 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	waitmessage
# 58 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081635EE
	return


Naranja_Norte_G30_M00_EventScript_Sub_081635E4::
# 62 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819EAC1
# 63 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_081635EE::
# 69 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 0
# 70 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	special ShowGlassWorkshopMenu
# 71 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	waitstate
# 72 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 73 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 74 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163660
# 75 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 76 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816369C
# 77 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 78 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081636D8
# 79 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 80 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163714
# 81 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 82 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163750
# 83 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 84 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816378C
# 85 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 86 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081637CD
# 87 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 88 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816380E
# 89 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 90 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816380E
	end


Naranja_Norte_G30_M00_EventScript_Sub_08163660::
# 95 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x27
# 96 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 97 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0xFA
# 98 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0xFA
# 99 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 100 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 101 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 102 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 103 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 104 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0xA
# 105 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0xFA
# 106 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_0816369C::
# 110 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x28
# 111 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 112 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0x1F4
# 113 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1F4
# 114 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 115 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 116 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 117 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 118 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 119 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0xB
# 120 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1F4
# 121 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_081636D8::
# 125 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x29
# 126 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 127 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0x1F4
# 128 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1F4
# 129 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 130 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 131 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 132 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 133 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 134 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0xC
# 135 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1F4
# 136 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163714::
# 140 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x2B
# 141 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 142 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0x3E8
# 143 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x3E8
# 144 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 145 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 146 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 147 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 148 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 149 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0xD
# 150 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x3E8
# 151 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163750::
# 155 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x2A
# 156 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 157 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0x3E8
# 158 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x3E8
# 159 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 160 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 161 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 162 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 163 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 164 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0xE
# 165 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x3E8
# 166 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_0816378C::
# 170 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 1
# 171 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0xD
# 172 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferdecorationname 0, 0x8008
# 173 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0x1770
# 174 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1770
# 175 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 176 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 177 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 178 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 179 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 180 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0xF
# 181 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1770
# 182 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_081637CD::
# 186 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 1
# 187 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 6
# 188 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferdecorationname 0, 0x8008
# 189 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0x1F40
# 190 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1F40
# 191 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G30_M00_EventScript_Sub_08163830
# 192 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E7CD
# 193 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 5
# 194 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 195 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163845
# 196 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 0x10
# 197 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1F40
# 198 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_08163851
	return


Naranja_Norte_G30_M00_EventScript_Sub_0816380E::
# 202 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E990
# 203 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 204 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_08163818::
# 209 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x800A, 0xFA
# 210 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_0x800A, 0x4048
# 211 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	buffernumberstring 0, VAR_0x800A
# 212 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E697
# 213 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 214 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_08163830::
# 219 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	subvar VAR_0x800A, 0x4048
# 220 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	buffernumberstring 1, VAR_0x800A
# 221 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	message Naranja_Norte_G30_M00_Text_0819E890
# 222 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	waitmessage
# 223 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081635EE
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163845::
# 227 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	message Naranja_Norte_G30_M00_Text_0819E802
# 228 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	waitmessage
# 229 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081635EE
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163851::
# 233 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E827
# 234 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 235 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	closemessage
# 236 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	fadescreen 1
# 237 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	playse SE_SELECT
# 238 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	delay 0x1E
# 239 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	fadescreen 0
# 240 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E9D7
# 241 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 242 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8009, 0
# 243 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163889
# 244 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8009, 1
# 245 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081638A1
# 246 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 2
# 247 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_08163889::
# 252 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8008
# 253 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 254 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 0
# 255 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 256 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081638B4
	return


Naranja_Norte_G30_M00_EventScript_Sub_081638A1::
# 261 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8008
# 262 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 7
# 263 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 264 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081638C3
	return


Naranja_Norte_G30_M00_EventScript_Sub_081638B4::
# 269 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02A5
# 270 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819EA06
# 271 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 272 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_081638C3::
# 277 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call Naranja_Route110_G29_M00_EventScript_Sub_081A02B8
# 278 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819EA64
# 279 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 280 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_Sub_081638D2::
# 285 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_NORTE_STORY_STATE
# 286 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 287 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163925
# 288 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xB
# 289 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163939
# 290 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xC
# 291 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816394D
# 292 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xD
# 293 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163961
# 294 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xE
# 295 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163975
# 296 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xF
# 297 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163989
# 298 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x10
# 299 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_0816399D
	end


Naranja_Norte_G30_M00_EventScript_Sub_08163925::
# 304 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 0
# 305 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x27
# 306 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 307 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163939::
# 311 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 0
# 312 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x28
# 313 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 314 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_0816394D::
# 318 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 0
# 319 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x29
# 320 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 321 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163961::
# 325 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 0
# 326 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x2B
# 327 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 328 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163975::
# 332 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 0
# 333 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0x2A
# 334 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferitemname 0, 0x8008
# 335 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_08163989::
# 339 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 1
# 340 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 0xD
# 341 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferdecorationname 0, 0xD
# 342 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_0816399D::
# 346 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8009, 1
# 347 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_0x8008, 6
# 348 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	bufferdecorationname 0, 6
# 349 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	goto Naranja_Norte_G30_M00_EventScript_Sub_081639B1
	return


Naranja_Norte_G30_M00_EventScript_Sub_081639B1::
# 353 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819E9D7
# 354 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 4
# 355 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8009, 0
# 356 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_08163889
# 357 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	compare_var_to_value VAR_0x8009, 1
# 358 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	call_if EQUAL, Naranja_Norte_G30_M00_EventScript_Sub_081638A1
# 359 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	setvar VAR_NARANJA_NORTE_STORY_STATE, 2
# 360 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	release
	end


Naranja_Norte_G30_M00_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId2::
# 365 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	loadword 0, Naranja_Norte_G30_M00_Text_0819EB3B
# 366 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	callstd 2
	end


Naranja_Norte_G30_M00_Text_0819E4E6::
# 370 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Nos ayudaste muchìsimo,  \nayudando a mi hermano.\p¿Cómo podrìa ayudarte?\p¡Ya sé!\pTen este saco y recoge el ampo,\nlos copos de nieve de las islas del norte.\pCon ampo haremos cristal.$"

Naranja_Norte_G30_M00_Text_0819E59B::
# 374 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "La blancura,\nel ampo\lquedará recogida en el saco.\py asì podré fabricarte\ndeslumbrantes regalos\p…deslumbrantes como el ampo.\pSolo camina bajo la nieve del norte\ny cuando tengas bastante… ¡Ven!$"

Naranja_Norte_G30_M00_Text_0819E65B::
# 378 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Have you collected ashes, huff-puff?\nLet me see, huff-puff.$"

Naranja_Norte_G30_M00_Text_0819E697::
# 382 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Hmmm...\nThere’s not enough ash here, huff-puff.\lI can’t make glass with this, huff-puff.\pLet’s see... {STR_VAR_1} is the number of steps\nyou’ll need to walk for me to make you\la BLUE FLUTE, huff-puff.$"

Naranja_Norte_G30_M00_Text_0819E757::
# 386 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Oh!\nYou’ve got a lot of ashes, huff-puff!\pI’ll make you a glass item, huff-puff!\nWhich one would you like, huff-puff?$"

Naranja_Norte_G30_M00_Text_0819E7CD::
# 390 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\nIs that the one for you, huff-puff?$"

Naranja_Norte_G30_M00_Text_0819E802::
# 394 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Which one would you like, huff-puff?$"

Naranja_Norte_G30_M00_Text_0819E827::
# 398 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "A {STR_VAR_1} it is, then, huff-puff!\pOkay! I’ll make it for you, huff-puff.\nJust wait a little while, huff-puff.$"

Naranja_Norte_G30_M00_Text_0819E890::
# 402 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\pThere’s not enough ash here to make\nthat, though, huff-puff.\pLet’s see... {STR_VAR_2} is the number of steps\nyou’ll need to walk through volcanic ash\lfor me to make that item, huff-puff.\pWhich item would you rather have me\nmake instead, huff-puff?$"

Naranja_Norte_G30_M00_Text_0819E990::
# 406 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "You’ve collected all that ash, but you\ndon’t want anything, huff-puff?$"

Naranja_Norte_G30_M00_Text_0819E9D7::
# 410 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Ah, I’ve finished your {STR_VAR_1}.\nTake it, huff-puff.$"

Naranja_Norte_G30_M00_Text_0819EA06::
# 414 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Oh?\nYou’ve no room in your BAG, huff-puff.\pI’ll hold on to it, so come back later,\nhuff-puff.$"

Naranja_Norte_G30_M00_Text_0819EA64::
# 418 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Oh?\nYou’ve no room in your PC, huff-puff?\pI’ll hold on to it, so come back later,\nhuff-puff.$"

Naranja_Norte_G30_M00_Text_0819EAC1::
# 422 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "Hah? You haven’t got your AMPO SACO\nwith you, huff-puff.\pYou have to keep it with you to collect\nvolcanic ash, huff-puff.$"

Naranja_Norte_G30_M00_Text_0819EB3B::
# 426 "data/maps/Naranja_Norte_G30_M00/scripts.pory"
	.string "It’s fun to blow a glass flute while my\nboss is talking.\pHuff-huff! Puff-puff!$"
