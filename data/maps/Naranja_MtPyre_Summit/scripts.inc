Naranja_MtPyre_Summit_MapScripts::
# 5 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtPyre_Summit_OnTransition
	.byte 0


Naranja_MtPyre_Summit_OnTransition::
# 9 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_MtPyre_Summit_EventScript_Trigger_1::
# 14 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lockall
# 15 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 16 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto Naranja_MtPyre_Summit_EventScript_Sub_0815D4E1
	return


Naranja_MtPyre_Summit_EventScript_Trigger_2::
# 20 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lockall
# 21 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 22 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto Naranja_MtPyre_Summit_EventScript_Sub_0815D4E1
	return


Naranja_MtPyre_Summit_EventScript_Trigger_3::
# 26 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lockall
# 27 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 28 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto Naranja_MtPyre_Summit_EventScript_Sub_0815D4E1
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D4E1::
# 32 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 33 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 34 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 35 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 36 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	delay 0x32
# 37 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 38 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D593
# 39 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 40 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D59E
# 41 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 42 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D59F
# 43 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B5EEC, MSGBOX_DEFAULT
# 44 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	closemessage
# 45 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	fadescreen 1
# 46 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	removeobject LOCALID_NARANJA_MT_PYRE_SUMMIT_246
# 47 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	removeobject LOCALID_NARANJA_MT_PYRE_SUMMIT_241
# 48 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	removeobject LOCALID_NARANJA_MT_PYRE_SUMMIT_241_2
# 49 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	removeobject LOCALID_NARANJA_MT_PYRE_SUMMIT_241_3
# 50 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MT_PYRE_SUMMIT_246
# 51 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MT_PYRE_SUMMIT_241
# 52 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	fadescreen 0
# 53 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	delay 0x14
# 54 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_0815D57A
# 55 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 56 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D5AA
# 57 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 58 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D5BF
# 59 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 60 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D5CA
# 61 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B5FE6, MSGBOX_DEFAULT
# 62 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setorcopyvar VAR_0x8000, 0x114
# 63 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 64 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	callstd 0
# 65 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_00D4
# 66 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	releaseall
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D57A::
# 71 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setflag FLAG_NARANJA_TEAM_HIDESHOAL_CAVE_EVENT_COMPLETE_006F
# 72 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_NARANJA_MURCOTT_ISLAND_STORY_STATE, 1
# 73 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MURCOTT_ISLAND_G00_M01_SCIENTIST_1
# 74 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_MURCOTT_ISLAND_G00_M01_CAMERAMAN
# 75 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_NARANJA_MURCOTT_ISLAND_EVENT_STATE_2, 1
# 76 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_NARANJA_BEMENTER_STORY_STATE, 1
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D593::
# 81 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D5E9
# 82 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D59E::
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D59F::
# 91 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D5EC
# 92 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D5AA::
# 97 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_OLD_WOMAN_1, Naranja_MtPyre_Summit_Movement_0815D5DF
# 98 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 99 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_ColdPath_FossilManiacsTunnel_Movement_081A0843
# 100 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D5BF::
# 105 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_OLD_WOMAN_1, Naranja_MtPyre_Summit_Movement_0815D5E3
# 106 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D5CA::
# 111 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_OLD_WOMAN_1, Naranja_MtPyre_Summit_Movement_0815D5E5
# 112 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 113 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 114 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_OldMan2::
# 119 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lock
# 120 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	faceplayer
# 121 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B64B3, MSGBOX_YESNO
# 122 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 123 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D611
# 124 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 125 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D61A
# 126 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	release
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D611::
# 131 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B65D6, MSGBOX_DEFAULT
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D61A::
# 136 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B6823, MSGBOX_DEFAULT
	return


Naranja_MtPyre_Summit_EventScript_OldWoman1::
# 141 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lock
# 142 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	faceplayer
# 143 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	checkflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_0103
# 144 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D6C4
# 145 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0071
# 146 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D64A
# 147 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_0081
# 148 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D6BA
# 149 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B60F9, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	release
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D64A::
# 155 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B6283, MSGBOX_YESNO
# 156 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 157 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D669
# 158 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 159 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D69B
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D669::
# 164 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8004, 0x114
# 165 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call Naranja_GraniteCave_StevensRoom_EventScript_Sub_081A067F
# 166 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	closemessage
# 167 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement 32783, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 168 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 169 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	delay 0x28
# 170 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement 32783, Naranja_KumquatIsland_Movement_081A0839
# 171 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 172 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	delay 0xA
# 173 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B639C, MSGBOX_DEFAULT
# 174 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setflag FLAG_NARANJA_BEMENTER_EVENT_COMPLETE_0103
# 175 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	release
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D69B::
# 180 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B62E7, MSGBOX_YESNO
# 181 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 182 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D669
# 183 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 184 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D69B
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D6BA::
# 189 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B617B, MSGBOX_DEFAULT
# 190 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	release
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D6C4::
# 195 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B63F8, MSGBOX_DEFAULT
# 196 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	release
	end


Naranja_MtPyre_Summit_EventScript_Trigger_4::
# 201 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lockall
# 202 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 203 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto Naranja_MtPyre_Summit_EventScript_Sub_0815D6F2
	return


Naranja_MtPyre_Summit_EventScript_Trigger_5::
# 207 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lockall
# 208 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 209 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto Naranja_MtPyre_Summit_EventScript_Sub_0815D6F2
	return


Naranja_MtPyre_Summit_EventScript_Trigger_6::
# 213 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	lockall
# 214 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 215 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	goto Naranja_MtPyre_Summit_EventScript_Sub_0815D6F2
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D6F2::
# 219 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 220 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 221 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 222 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
# 223 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	delay 0x32
# 224 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 225 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D75E
# 226 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 227 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D769
# 228 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 229 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D774
# 230 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B6848, MSGBOX_DEFAULT
# 231 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	closemessage
# 232 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 0
# 233 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D77F
# 234 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 1
# 235 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D78A
# 236 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	compare_var_to_value VAR_0x8008, 2
# 237 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	call_if EQUAL, Naranja_MtPyre_Summit_EventScript_Sub_0815D795
# 238 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	removeobject LOCALID_NARANJA_MT_PYRE_SUMMIT_246
# 239 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_NARANJA_BEMENTER_STORY_STATE, 3
# 240 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	releaseall
	end


Naranja_MtPyre_Summit_EventScript_Sub_0815D75E::
# 245 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D7A0
# 246 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D769::
# 251 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D7A3
# 252 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D774::
# 257 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D7A4
# 258 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D77F::
# 263 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D7A7
# 264 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D78A::
# 269 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D7B0
# 270 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_0815D795::
# 275 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	applymovement LOCALID_NARANJA_MT_PYRE_SUMMIT_246, Naranja_MtPyre_Summit_Movement_0815D7B9
# 276 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtPyre_Summit_EventScript_Sub_081A0196::
# 281 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, 0x77
# 282 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, 0x78
# 283 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, 0x75
# 284 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, 0x76
# 285 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, 0xC4
# 286 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, 0xC3
	return


Naranja_MtPyre_Summit_EventScript_Object4::
# 291 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_588, Naranja_MtPyre_Summit_Text_081B5CFD, Naranja_MtPyre_Summit_Text_081B5D30
# 292 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B5D6D, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_Summit_EventScript_Object5::
# 297 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_589, Naranja_MtPyre_Summit_Text_081B5DA2, Naranja_MtPyre_Summit_Text_081B5DDB
# 298 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B5DF1, MSGBOX_AUTOCLOSE
	end


Naranja_MtPyre_Summit_EventScript_Object6::
# 303 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_BEMENTER_590, Naranja_MtPyre_Summit_Text_081B5E27, Naranja_MtPyre_Summit_Text_081B5E60
# 304 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	msgbox Naranja_MtPyre_Summit_Text_081B5E84, MSGBOX_AUTOCLOSE
	end


# 308 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D5DF:
# 309 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 310 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 311 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
	step_end

# 314 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D5E3:
# 315 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 318 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D5E5:
# 319 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 320 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 321 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
	step_end

# 324 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D5E9:
# 325 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_left
# 326 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
	step_end

# 329 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D5EC:
# 330 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_right
# 331 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
	step_end

# 334 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D7A0:
# 335 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_left
# 336 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
	step_end

# 339 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D7A3:
	step_end

# 342 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D7A4:
# 343 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_right
# 344 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
	step_end

# 347 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D7A7:
# 348 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_right
# 349 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 350 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 351 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 352 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 353 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 354 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 355 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 358 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D7B0:
# 359 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_right
# 360 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 361 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 362 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 363 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 364 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 365 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 366 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 369 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
Naranja_MtPyre_Summit_Movement_0815D7B9:
# 370 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_left
# 371 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 372 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 373 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 374 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 375 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 376 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
# 377 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	walk_down
	step_end

Naranja_MtPyre_Summit_Text_081B5CFD::
# 380 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "I’ll show you exactly how scary\nTEAM MAGMA can be!$"

Naranja_MtPyre_Summit_Text_081B5D30::
# 384 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "So you think you can stand up alone\nto TEAM MAGMA’s might...$"

Naranja_MtPyre_Summit_Text_081B5D6D::
# 388 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong...\nBut there’re a lot of us!$"

Naranja_MtPyre_Summit_Text_081B5DA2::
# 392 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "What’s up with you?\nWhat does a single kid expect to do?$"

Naranja_MtPyre_Summit_Text_081B5DDB::
# 396 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Dang...\nToo strong...$"

Naranja_MtPyre_Summit_Text_081B5DF1::
# 400 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "You don’t know anything.\nQuit messing around with us!$"

Naranja_MtPyre_Summit_Text_081B5E27::
# 404 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Hey, I remember you from MT. CHIMNEY!\nIt’s payback time!$"

Naranja_MtPyre_Summit_Text_081B5E60::
# 408 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Urgggh...\nBeaten by some kid again!$"

Naranja_MtPyre_Summit_Text_081B5E84::
# 412 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn’t matter!\nWe bought ourselves some time!\pThe BOSS should have snatched what\nhe was after!$"

Naranja_MtPyre_Summit_Text_081B5EEC::
# 416 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "MAXIE: Not you again...\pYou’ve impeded our plans repeatedly,\nbut this time you’re too late.\pThe BLUE ORB that rested atop\nMT. PYRE...\lI, MAXIE, claim it as mine!\pFufufu... Finally, I can realize my\ngrand design...\pCome on, crew!\nIt’s SLATEPORT next!$"

Naranja_MtPyre_Summit_Text_081B5FE6::
# 420 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Oh, no...\nThis cannot happen...\pHow could they take the BLUE ORB?\pThe BLUE ORB and RED ORB must never\nbe separated. They belong together.\p... ... ... ... ... ... ... ...\nHmm...\pFine!\nYou take the remaining RED ORB.\pPlease take after that foul man and\nget the other ORB back!$"

Naranja_MtPyre_Summit_Text_081B60F9::
# 424 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "The RED ORB you have been entrusted\nwith and the stolen BLUE ORB...\pThey must never be apart...\nSomething terrible will happen...$"

Naranja_MtPyre_Summit_Text_081B617B::
# 428 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "So...\nGROUDON has awoken...\pThe wondrous ORB that is said to have\nbecalmed the raging GROUDON...\lIt is the RED ORB you bear.\pThat RED ORB was found buried inside\nthe CAVE OF ORIGIN in SOOTOPOLIS...\pThere is perhaps a link between\nGROUDON and the CAVE OF ORIGIN...$"

Naranja_MtPyre_Summit_Text_081B6283::
# 432 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "That man, he returned the BLUE ORB.\pAre you going to return the RED ORB\nto its rightful place, too?$"

Naranja_MtPyre_Summit_Text_081B62E7::
# 436 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "What’s that?!\pIf the balance is not restored, there\nis no telling what could happen.\pYou will return the RED ORB to its\nrightful place, yes?$"

Naranja_MtPyre_Summit_Text_081B639C::
# 440 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "Yes...\nThe two ORBS should remain here.\pIt is how it should be for the good\nof all HOENN...$"

Naranja_MtPyre_Summit_Text_081B63F8::
# 444 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "The spirit of the land...\pThat is what GROUDON is said to be in\nPOKéMON form...\pIn the same manner that we and POKéMON\nhave life, this very land is alive...\pGROUDON has taught us that...$"

Naranja_MtPyre_Summit_Text_081B64B3::
# 448 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\nof POKéMON that have passed on...\pThis is a high place where one can\nsee all of HOENN...\pThe disembodied spirits of POKéMON\nmust find solace here...\pIs it coincidence that you are here...\pWill you hear out my tale? A tale long\ntold in the HOENN region?$"

Naranja_MtPyre_Summit_Text_081B65D6::
# 452 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago...\pThe world was wracked by a ferocious\nclash between the POKéMON of the land\land the POKéMON of the sea...\pThe POKéMON of the land raised\nmountains and created continents...\pThe POKéMON of the sea raised huge\nwaves and carved out oceans...\pTheir fierce duel raged without end.\pThe world was engulfed in vicious\nstorms and massive infernos.\pThe RED ORB and the BLUE ORB brought\nan end to the calamity.\pLight poured from the two ORBS and\nbecalmed the enraged adversaries.\pThe pair, made docile, burrowed deep\nunder the ground where eventually\lthey disappeared...$"

Naranja_MtPyre_Summit_Text_081B6823::
# 456 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "I see...\nWell, that, too, is fine...$"

Naranja_MtPyre_Summit_Text_081B6848::
# 460 "data/maps/Naranja_MtPyre_Summit/scripts.pory"
	.string "MAXIE: You...\nSo you stopped GROUDON...\pI shouldn’t be surprised...\pI understand now that humans cannot\nfreely control the balance between\lthe land and the sea...\pSo I have come to return the\nBLUE ORB...\pI doubt that we will cross paths again...\nFarewell...$"
