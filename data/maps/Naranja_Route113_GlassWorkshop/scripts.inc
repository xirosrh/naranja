Naranja_Route113_GlassWorkshop_MapScripts::
# 5 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route113_GlassWorkshop_OnTransition
	.byte 0


Naranja_Route113_GlassWorkshop_OnTransition::
# 9 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_NARANJA_NORTH_EVENT_COMPLETE_0844
# 10 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 1
# 11 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816355F
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_0816355F::
# 16 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 2
	return


Naranja_Route113_GlassWorkshop_EventScript_DittoDoll::
# 21 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	lock
# 22 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 23 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xA
# 24 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if GREATER_THAN_OR_EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081638D2
# 25 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 2
# 26 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081635B5
# 27 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 1
# 28 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081635AB
# 29 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E4E6, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10E
# 31 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 32 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	callstd 0
# 33 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 1
# 34 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E59B, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_081635AB::
# 40 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E59B, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_081635B5::
# 46 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	checkitem ITEM_SOOT_SACK, 1
# 47 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 48 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081635E4
# 49 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E65B, MSGBOX_DEFAULT
# 50 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0xFA
# 51 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163818
# 52 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	message Naranja_Route113_GlassWorkshop_Text_0819E757
# 53 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 54 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081635EE
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_081635E4::
# 58 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819EAC1, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_081635EE::
# 64 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 65 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	special ShowGlassWorkshopMenu
# 66 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	waitstate
# 67 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 68 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 69 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163660
# 70 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 71 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816369C
# 72 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 73 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081636D8
# 74 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 75 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163714
# 76 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 77 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163750
# 78 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 79 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816378C
# 80 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 6
# 81 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081637CD
# 82 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 7
# 83 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816380E
# 84 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 85 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816380E
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163660::
# 90 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x27
# 91 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 92 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0xFA
# 93 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0xFA
# 94 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 95 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 96 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 97 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 98 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xA
# 99 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0xFA
# 100 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_0816369C::
# 104 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x28
# 105 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 106 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0x1F4
# 107 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1F4
# 108 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 109 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 110 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 111 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 112 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xB
# 113 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1F4
# 114 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_081636D8::
# 118 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x29
# 119 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 120 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0x1F4
# 121 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1F4
# 122 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 123 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 124 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 125 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 126 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xC
# 127 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1F4
# 128 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163714::
# 132 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x2B
# 133 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 134 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0x3E8
# 135 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x3E8
# 136 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 137 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 138 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 139 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 140 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xD
# 141 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x3E8
# 142 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163750::
# 146 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x2A
# 147 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 148 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0x3E8
# 149 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x3E8
# 150 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 151 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 152 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 153 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 154 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xE
# 155 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x3E8
# 156 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_0816378C::
# 160 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 161 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0xD
# 162 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname 0, 0x8008
# 163 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0x1770
# 164 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1770
# 165 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 166 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 167 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 168 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 169 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0xF
# 170 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1770
# 171 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_081637CD::
# 175 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 176 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 6
# 177 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname 0, 0x8008
# 178 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0x1F40
# 179 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_ASH_GATHER_COUNT, 0x1F40
# 180 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if LESS_THAN, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830
# 181 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E7CD, MSGBOX_YESNO
# 182 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 183 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845
# 184 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 0x10
# 185 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 0x1F40
# 186 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_0816380E::
# 190 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E990, MSGBOX_DEFAULT
# 191 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163818::
# 196 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 0xFA
# 197 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, 0x4048
# 198 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	buffernumberstring 0, VAR_0x800A
# 199 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E697, MSGBOX_DEFAULT
# 200 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163830::
# 205 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, 0x4048
# 206 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	buffernumberstring 1, VAR_0x800A
# 207 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	message Naranja_Route113_GlassWorkshop_Text_0819E890
# 208 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 209 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081635EE
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163845::
# 213 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	message Naranja_Route113_GlassWorkshop_Text_0819E802
# 214 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 215 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081635EE
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163851::
# 219 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E827, MSGBOX_DEFAULT
# 220 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	closemessage
# 221 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	fadescreen 1
# 222 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	playse SE_SELECT
# 223 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	delay 0x1E
# 224 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	fadescreen 0
# 225 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E9D7, MSGBOX_DEFAULT
# 226 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8009, 0
# 227 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163889
# 228 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8009, 1
# 229 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081638A1
# 230 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 2
# 231 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163889::
# 236 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8008
# 237 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 238 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	callstd 0
# 239 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 240 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081638B4
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_081638A1::
# 245 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setorcopyvar VAR_0x8000, VAR_0x8008
# 246 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	callstd 7
# 247 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 248 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081638C3
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_081638B4::
# 253 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02A5
# 254 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819EA06, MSGBOX_DEFAULT
# 255 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_081638C3::
# 260 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call Naranja_Route110_TrickHouseEntrance_EventScript_Sub_081A02B8
# 261 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819EA64, MSGBOX_DEFAULT
# 262 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_081638D2::
# 267 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE
# 268 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xA
# 269 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163925
# 270 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xB
# 271 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163939
# 272 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xC
# 273 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816394D
# 274 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xD
# 275 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163961
# 276 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xE
# 277 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163975
# 278 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0xF
# 279 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163989
# 280 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x10
# 281 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_0816399D
	end


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163925::
# 286 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 287 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x27
# 288 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 289 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163939::
# 293 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 294 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x28
# 295 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 296 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_0816394D::
# 300 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 301 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x29
# 302 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 303 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163961::
# 307 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 308 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x2B
# 309 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 310 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163975::
# 314 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 315 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0x2A
# 316 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferitemname 0, 0x8008
# 317 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_08163989::
# 321 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 322 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 0xD
# 323 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname 0, 0xD
# 324 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_0816399D::
# 328 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 329 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, 6
# 330 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname 0, 6
# 331 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	goto Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1
	return


Naranja_Route113_GlassWorkshop_EventScript_Sub_081639B1::
# 335 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819E9D7, MSGBOX_DEFAULT
# 336 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8009, 0
# 337 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_08163889
# 338 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	compare_var_to_value VAR_0x8009, 1
# 339 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	call_if EQUAL, Naranja_Route113_GlassWorkshop_EventScript_Sub_081638A1
# 340 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	setvar VAR_NARANJA_AMPO_WORKSHOP_REWARD_STATE, 2
# 341 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	release
	end


Naranja_Route113_GlassWorkshop_EventScript_LittleBoy1::
# 346 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	msgbox Naranja_Route113_GlassWorkshop_Text_0819EB3B, MSGBOX_NPC
	end


Naranja_Route113_GlassWorkshop_Text_0819E4E6::
# 350 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Nos ayudaste muchìsimo,  \nayudando a mi hermano.\p¿Cómo podrìa ayudarte?\p¡Ya sé!\pTen este saco y recoge el ampo,\nlos copos de nieve de las islas del norte.\pCon ampo haremos cristal.$"

Naranja_Route113_GlassWorkshop_Text_0819E59B::
# 354 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "La blancura,\nel ampo\lquedará recogida en el saco.\py asì podré fabricarte\ndeslumbrantes regalos\p…deslumbrantes como el ampo.\pSolo camina bajo la nieve del norte\ny cuando tengas bastante… ¡Ven!$"

Naranja_Route113_GlassWorkshop_Text_0819E65B::
# 358 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Have you collected ashes, huff-puff?\nLet me see, huff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819E697::
# 362 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Hmmm...\nThere’s not enough ash here, huff-puff.\lI can’t make glass with this, huff-puff.\pLet’s see... {STR_VAR_1} is the number of steps\nyou’ll need to walk for me to make you\la BLUE FLUTE, huff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819E757::
# 366 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Oh!\nYou’ve got a lot of ashes, huff-puff!\pI’ll make you a glass item, huff-puff!\nWhich one would you like, huff-puff?$"

Naranja_Route113_GlassWorkshop_Text_0819E7CD::
# 370 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\nIs that the one for you, huff-puff?$"

Naranja_Route113_GlassWorkshop_Text_0819E802::
# 374 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Which one would you like, huff-puff?$"

Naranja_Route113_GlassWorkshop_Text_0819E827::
# 378 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1} it is, then, huff-puff!\pOkay! I’ll make it for you, huff-puff.\nJust wait a little while, huff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819E890::
# 382 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\pThere’s not enough ash here to make\nthat, though, huff-puff.\pLet’s see... {STR_VAR_2} is the number of steps\nyou’ll need to walk through volcanic ash\lfor me to make that item, huff-puff.\pWhich item would you rather have me\nmake instead, huff-puff?$"

Naranja_Route113_GlassWorkshop_Text_0819E990::
# 386 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "You’ve collected all that ash, but you\ndon’t want anything, huff-puff?$"

Naranja_Route113_GlassWorkshop_Text_0819E9D7::
# 390 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Ah, I’ve finished your {STR_VAR_1}.\nTake it, huff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819EA06::
# 394 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\nYou’ve no room in your BAG, huff-puff.\pI’ll hold on to it, so come back later,\nhuff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819EA64::
# 398 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\nYou’ve no room in your PC, huff-puff?\pI’ll hold on to it, so come back later,\nhuff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819EAC1::
# 402 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "Hah? You haven’t got your AMPO SACO\nwith you, huff-puff.\pYou have to keep it with you to collect\nvolcanic ash, huff-puff.$"

Naranja_Route113_GlassWorkshop_Text_0819EB3B::
# 406 "data/maps/Naranja_Route113_GlassWorkshop/scripts.pory"
	.string "It’s fun to blow a glass flute while my\nboss is talking.\pHuff-huff! Puff-puff!$"
