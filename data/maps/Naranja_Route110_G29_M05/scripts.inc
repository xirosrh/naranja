Naranja_Route110_G29_M05_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Route110_G29_M05_OnResume
# 6 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route110_G29_M05_OnTransition
	.byte 0


Naranja_Route110_G29_M05_OnResume::
# 10 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call Naranja_Route110_G29_M05_EventScript_Sub_08161F12
# 11 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 0
# 12 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FE5
# 13 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 14 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081622C8
	end


Naranja_Route110_G29_M05_OnTransition::
# 19 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_1, 0
# 20 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_2, 0
# 21 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_3, 0
# 22 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_4, 0
# 23 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_5, 0
# 24 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_6, 0
# 25 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_7, 0
# 26 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 0
# 27 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_9, 0
	end


Naranja_Route110_G29_M05_EventScript_Sub_08161F12::
# 32 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0x14, 0x258, 0
# 33 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0xC, 0x258, 0
# 34 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0xA, 0x258, 0
# 35 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 8, 0x258, 0
# 36 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 7, 0x258, 0
# 37 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 3, 0x258, 0
# 38 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 2, 0x258, 0
# 39 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 40 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161F9F
# 41 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 42 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FA9
# 43 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 44 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FB3
# 45 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 46 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FBD
# 47 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 48 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FC7
# 49 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 6
# 50 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FD1
# 51 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 7
# 52 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FDB
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161F9F::
# 57 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0x14, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FA9::
# 62 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0xC, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FB3::
# 67 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0xA, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FBD::
# 72 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 8, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FC7::
# 77 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 7, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FD1::
# 82 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 3, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FDB::
# 87 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 2, 0x259, 0
	return


Naranja_Route110_G29_M05_EventScript_Sub_08161FE5::
# 92 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 6, 0x24B, 0
# 93 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 6, 0x24C, 0
# 94 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 7, 0x253, 0
# 95 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 7, 0x254, 0
# 96 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 9, 0x24B, 0
# 97 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 9, 0x24C, 0
# 98 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0xA, 0x253, 0
# 99 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0xA, 0x254, 0
# 100 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0x12, 0x24B, 0
# 101 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0x12, 0x24C, 0
# 102 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0x13, 0x253, 0
# 103 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0x13, 0x254, 0
# 104 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 3, 0x24B, 0
# 105 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 3, 0x24C, 0
# 106 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 4, 0x253, 0
# 107 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 4, 0x254, 0
# 108 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 9, 0x24B, 0
# 109 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 9, 0x24C, 0
# 110 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0xA, 0x253, 0
# 111 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0xA, 0x254, 0
# 112 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0x12, 0x24B, 0
# 113 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0x12, 0x24C, 0
# 114 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0x13, 0x253, 0
# 115 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0x13, 0x254, 0
# 116 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 3, 0x24B, 0
# 117 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 3, 0x24C, 0
# 118 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 4, 0x253, 0
# 119 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 4, 0x254, 0
# 120 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 9, 0x24B, 0
# 121 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 9, 0x24C, 0
# 122 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 0xA, 0x253, 0
# 123 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 0xA, 0x254, 0
# 124 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 0xF, 0x24B, 0
# 125 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 0xF, 0x24C, 0
# 126 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 0x10, 0x253, 0
# 127 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 0x10, 0x254, 0
# 128 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 0xD, 0x24D, 1
# 129 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 0xE, 0x255, 0
# 130 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 7, 0x24D, 1
# 131 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 8, 0x255, 0
# 132 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 0x10, 0x24D, 1
# 133 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 0x11, 0x255, 0
# 134 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 4, 0x24D, 1
# 135 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 5, 0x255, 0
# 136 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xA, 0x24D, 1
# 137 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xB, 0x255, 0
# 138 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 0xF, 0x238, 0
# 139 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 0xF, 0x239, 0
# 140 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 0x10, 0x240, 1
# 141 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 0x10, 0x241, 1
# 142 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 6, 0x238, 0
# 143 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 6, 0x239, 0
# 144 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 7, 0x240, 1
# 145 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 7, 0x241, 1
# 146 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0xC, 0x238, 0
# 147 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0xC, 0x239, 0
# 148 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0xD, 0x240, 1
# 149 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0xD, 0x241, 1
# 150 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0xC, 0x238, 0
# 151 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0xC, 0x239, 0
# 152 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0xD, 0x240, 1
# 153 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0xD, 0x241, 1
# 154 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0x12, 0x238, 0
# 155 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0x12, 0x239, 0
# 156 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0x13, 0x240, 1
# 157 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0x13, 0x241, 1
# 158 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 4, 0x23A, 1
# 159 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 5, 0x242, 1
# 160 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xA, 0x23A, 1
# 161 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xB, 0x242, 1
# 162 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xD, 0x23A, 1
# 163 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xE, 0x242, 1
# 164 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0x10, 0x23A, 1
# 165 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0x11, 0x242, 1
# 166 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 4, 0x23A, 1
# 167 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 5, 0x242, 1
# 168 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 7, 0x23A, 1
# 169 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 8, 0x242, 1
# 170 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xD, 0x23A, 1
# 171 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xE, 0x242, 1
# 172 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0x10, 0x23A, 1
# 173 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0x11, 0x242, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_081622C8::
# 178 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 6, 0x23B, 0
# 179 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 6, 0x23C, 0
# 180 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 7, 0x243, 1
# 181 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 7, 0x244, 1
# 182 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 9, 0x23B, 0
# 183 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 9, 0x23C, 0
# 184 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0xA, 0x243, 1
# 185 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0xA, 0x244, 1
# 186 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0x12, 0x23B, 0
# 187 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0x12, 0x23C, 0
# 188 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 0x13, 0x243, 1
# 189 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 0x13, 0x244, 1
# 190 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 3, 0x23B, 0
# 191 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 3, 0x23C, 0
# 192 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 4, 0x243, 1
# 193 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 4, 0x244, 1
# 194 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 9, 0x23B, 0
# 195 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 9, 0x23C, 0
# 196 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0xA, 0x243, 1
# 197 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0xA, 0x244, 1
# 198 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0x12, 0x23B, 0
# 199 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0x12, 0x23C, 0
# 200 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0x13, 0x243, 1
# 201 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0x13, 0x244, 1
# 202 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 3, 0x23B, 0
# 203 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 3, 0x23C, 0
# 204 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 4, 0x243, 1
# 205 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 4, 0x244, 1
# 206 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 9, 0x23B, 0
# 207 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 9, 0x23C, 0
# 208 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 0xA, 0x243, 1
# 209 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 0xA, 0x244, 1
# 210 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 0xF, 0x23B, 0
# 211 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 0xF, 0x23C, 0
# 212 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xD, 0x10, 0x243, 1
# 213 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xE, 0x10, 0x244, 1
# 214 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 0xD, 0x23D, 1
# 215 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 0xE, 0x245, 1
# 216 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 7, 0x23D, 1
# 217 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 8, 0x245, 1
# 218 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 0x10, 0x23D, 1
# 219 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 0x11, 0x245, 1
# 220 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 4, 0x23D, 1
# 221 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 5, 0x245, 1
# 222 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xA, 0x23D, 1
# 223 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xB, 0x245, 1
# 224 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 0xF, 0x248, 0
# 225 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 0xF, 0x249, 0
# 226 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 1, 0x10, 0x250, 0
# 227 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 2, 0x10, 0x251, 0
# 228 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 6, 0x248, 0
# 229 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 6, 0x249, 0
# 230 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 4, 7, 0x250, 0
# 231 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 5, 7, 0x251, 0
# 232 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0xC, 0x248, 0
# 233 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0xC, 0x249, 0
# 234 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 7, 0xD, 0x250, 0
# 235 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 8, 0xD, 0x251, 0
# 236 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0xC, 0x248, 0
# 237 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0xC, 0x249, 0
# 238 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0xD, 0x250, 0
# 239 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0xD, 0x251, 0
# 240 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0x12, 0x248, 0
# 241 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0x12, 0x249, 0
# 242 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xA, 0x13, 0x250, 0
# 243 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xB, 0x13, 0x251, 0
# 244 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 4, 0x24A, 1
# 245 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 3, 5, 0x252, 0
# 246 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xA, 0x24A, 1
# 247 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xB, 0x252, 0
# 248 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xD, 0x24A, 1
# 249 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0xE, 0x252, 0
# 250 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0x10, 0x24A, 1
# 251 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 6, 0x11, 0x252, 0
# 252 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 4, 0x24A, 1
# 253 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 5, 0x252, 0
# 254 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 7, 0x24A, 1
# 255 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 9, 8, 0x252, 0
# 256 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xD, 0x24A, 1
# 257 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0xE, 0x252, 0
# 258 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0x10, 0x24A, 1
# 259 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setmetatile 0xC, 0x11, 0x252, 0
	return


Naranja_Route110_G29_M05_EventScript_Trigger_1::
# 264 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 265 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 1
# 266 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Trigger_2::
# 270 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 271 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 2
# 272 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Trigger_3::
# 276 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 277 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 3
# 278 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Trigger_4::
# 282 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 283 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 4
# 284 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Trigger_5::
# 288 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 289 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 5
# 290 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Trigger_6::
# 294 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 295 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 6
# 296 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Trigger_7::
# 300 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 301 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_8, 7
# 302 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081625FF
	return


Naranja_Route110_G29_M05_EventScript_Sub_081625FF::
# 306 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call Naranja_Route110_G29_M05_EventScript_Sub_08162612
# 307 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	playse SE_PIN
# 308 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call Naranja_Route110_G29_M05_EventScript_Sub_08161F12
# 309 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M05_EventScript_Sub_081626AD
	return


Naranja_Route110_G29_M05_EventScript_Sub_08162612::
# 313 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_1, 0
# 314 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_2, 0
# 315 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_3, 0
# 316 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_4, 0
# 317 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_5, 0
# 318 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_6, 0
# 319 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_7, 0
# 320 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 1
# 321 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08162683
# 322 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 2
# 323 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08162689
# 324 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 3
# 325 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_0816268F
# 326 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 4
# 327 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08162695
# 328 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 5
# 329 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_0816269B
# 330 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 6
# 331 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081626A1
# 332 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_8, 7
# 333 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081626A7
	return


Naranja_Route110_G29_M05_EventScript_Sub_08162683::
# 338 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_08162689::
# 343 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_0816268F::
# 348 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_08162695::
# 353 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_4, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_0816269B::
# 358 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_5, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_081626A1::
# 363 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_6, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_081626A7::
# 368 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_7, 1
	return


Naranja_Route110_G29_M05_EventScript_Sub_081626AD::
# 373 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 374 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_08161FE5
# 375 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 0
# 376 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	call_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081622C8
# 377 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	special DrawWholeMapView
# 378 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 1
# 379 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081626DD
# 380 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_TEMP_9, 0
# 381 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081626E4
	end


Naranja_Route110_G29_M05_EventScript_Sub_081626DD::
# 386 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_9, 0
# 387 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M05_EventScript_Sub_081626E4::
# 392 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_TEMP_9, 1
# 393 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M05_EventScript_Sign_1::
# 398 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	lockall
# 399 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_7, 0
# 400 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M05_EventScript_Sub_081626FD
# 401 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M05_EventScript_Sub_081626FD::
# 405 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_7, 1
# 406 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M05_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId1::
# 410 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_215, LOCALID_NONE, Naranja_Route110_G29_M05_Text_0819CF76, Naranja_Route110_G29_M05_Text_0819CF9D
# 411 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	loadword 0, Naranja_Route110_G29_M05_Text_0819CFE6
# 412 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M05_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId2::
# 417 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_473, LOCALID_NONE, Naranja_Route110_G29_M05_Text_0819D026, Naranja_Route110_G29_M05_Text_0819D065
# 418 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	loadword 0, Naranja_Route110_G29_M05_Text_0819D07A
# 419 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M05_EventScript_OBJ_EVENT_GFX_HIKER_LocalId3::
# 424 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_630, LOCALID_NONE, Naranja_Route110_G29_M05_Text_0819D0AE, Naranja_Route110_G29_M05_Text_0819D0F0
# 425 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	loadword 0, Naranja_Route110_G29_M05_Text_0819D110
# 426 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M05_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId9::
# 431 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x80
# 432 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 433 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M05_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId8::
# 438 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setorcopyvar VAR_0x8000, 0x7D
# 439 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 440 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M05_Text_0819CF76::
# 444 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I keep coming back to this same place!$"

Naranja_Route110_G29_M05_Text_0819CF9D::
# 448 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I’m already having trouble, and then\nyou have to beat me? It’s not fair!$"

Naranja_Route110_G29_M05_Text_0819CFE6::
# 452 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "It’s full of doors here!\nIt’s too small and dark in here! Help!$"

Naranja_Route110_G29_M05_Text_0819D026::
# 456 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I don’t know what’s going on here.\nI’m starting to feel sad...$"

Naranja_Route110_G29_M05_Text_0819D065::
# 460 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "You... You’re awful!$"

Naranja_Route110_G29_M05_Text_0819D07A::
# 464 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I know I’m weak!\nAnd, I have no sense of direction!$"

Naranja_Route110_G29_M05_Text_0819D0AE::
# 468 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I don’t get it. What would anyone want\nwith a house this bizarre?$"

Naranja_Route110_G29_M05_Text_0819D0F0::
# 472 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I don’t get it.\nHow did I lose?$"

Naranja_Route110_G29_M05_Text_0819D110::
# 476 "data/maps/Naranja_Route110_G29_M05/scripts.pory"
	.string "I don’t get it.\nHow many traps are in this house?\pYou may be the one to solve that.$"
