Naranja_MtChimney_MapScripts::
# 5 "data/maps/Naranja_MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_MtChimney_OnResume
# 6 "data/maps/Naranja_MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MtChimney_OnTransition
	.byte 0


Naranja_MtChimney_OnTransition::
# 10 "data/maps/Naranja_MtChimney/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_EVENT_STATE_2, 1
# 11 "data/maps/Naranja_MtChimney/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_MtChimney_OnResume::
# 16 "data/maps/Naranja_MtChimney/scripts.pory"
	setstepcallback 1
	end


Naranja_MtChimney_EventScript_OldWoman2::
# 21 "data/maps/Naranja_MtChimney/scripts.pory"
	lock
# 22 "data/maps/Naranja_MtChimney/scripts.pory"
	faceplayer
# 23 "data/maps/Naranja_MtChimney/scripts.pory"
	showmoneybox 0, 0
# 24 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195760, MSGBOX_YESNO
# 25 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 26 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815D00B
# 27 "data/maps/Naranja_MtChimney/scripts.pory"
	checkmoney 0xC8
# 28 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 29 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815D018
# 30 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081957A9, MSGBOX_DEFAULT
# 31 "data/maps/Naranja_MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE, 1
# 32 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 33 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815D000
# 34 "data/maps/Naranja_MtChimney/scripts.pory"
	setorcopyvar VAR_0x8000, 0x26
# 35 "data/maps/Naranja_MtChimney/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 36 "data/maps/Naranja_MtChimney/scripts.pory"
	callstd 0
# 37 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 38 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815CFF3
# 39 "data/maps/Naranja_MtChimney/scripts.pory"
	hidemoneybox
# 40 "data/maps/Naranja_MtChimney/scripts.pory"
	release
	end


Naranja_MtChimney_EventScript_Sub_0815CFF3::
# 45 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081A0CC2, MSGBOX_DEFAULT
# 46 "data/maps/Naranja_MtChimney/scripts.pory"
	hidemoneybox
# 47 "data/maps/Naranja_MtChimney/scripts.pory"
	release
	end


Naranja_MtChimney_EventScript_Sub_0815D000::
# 52 "data/maps/Naranja_MtChimney/scripts.pory"
	removemoney 0xC8
# 53 "data/maps/Naranja_MtChimney/scripts.pory"
	updatemoneybox
	return


Naranja_MtChimney_EventScript_Sub_0815D00B::
# 58 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081957F7, MSGBOX_DEFAULT
# 59 "data/maps/Naranja_MtChimney/scripts.pory"
	hidemoneybox
# 60 "data/maps/Naranja_MtChimney/scripts.pory"
	release
	end


Naranja_MtChimney_EventScript_Sub_0815D018::
# 65 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081957BA, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_MtChimney/scripts.pory"
	hidemoneybox
# 67 "data/maps/Naranja_MtChimney/scripts.pory"
	release
	end


Naranja_MtChimney_EventScript_Object7::
# 72 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B40EA, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Object6::
# 77 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B4128, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Object8::
# 82 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B416E, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Object3::
# 87 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MT_CHIMNEY_597, Naranja_MtChimney_Text_081B3B36, Naranja_MtChimney_Text_081B3BB8
# 88 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3C07, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Object22::
# 93 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MT_CHIMNEY_579, Naranja_MtChimney_Text_081B3C96, Naranja_MtChimney_Text_081B3D1E
# 94 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3D3D, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Object13::
# 99 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3D9A, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Object16::
# 104 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3DF5, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Object5::
# 109 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3E1F, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Object4::
# 114 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3E7A, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Poochyena_2::
# 119 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3EBA, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Poochyena::
# 124 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B41B0, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_Sign_1::
# 129 "data/maps/Naranja_MtChimney/scripts.pory"
	lockall
# 130 "data/maps/Naranja_MtChimney/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 131 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if LESS_THAN, Naranja_MtChimney_EventScript_Sub_0815D1D0
# 132 "data/maps/Naranja_MtChimney/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_0073
# 133 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815D1C6
# 134 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195870, MSGBOX_YESNO
# 135 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 136 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815D1BC
# 137 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081958C6, MSGBOX_DEFAULT
# 138 "data/maps/Naranja_MtChimney/scripts.pory"
	setorcopyvar VAR_0x8000, 0x118
# 139 "data/maps/Naranja_MtChimney/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 140 "data/maps/Naranja_MtChimney/scripts.pory"
	callstd 0
# 141 "data/maps/Naranja_MtChimney/scripts.pory"
	setflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_0073
# 142 "data/maps/Naranja_MtChimney/scripts.pory"
	releaseall
	end


Naranja_MtChimney_EventScript_Sub_0815D1BC::
# 147 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081958FC, MSGBOX_DEFAULT
# 148 "data/maps/Naranja_MtChimney/scripts.pory"
	releaseall
	end


Naranja_MtChimney_EventScript_Sub_0815D1C6::
# 153 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195920, MSGBOX_DEFAULT
# 154 "data/maps/Naranja_MtChimney/scripts.pory"
	releaseall
	end


Naranja_MtChimney_EventScript_Sub_0815D1D0::
# 159 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195806, MSGBOX_DEFAULT
# 160 "data/maps/Naranja_MtChimney/scripts.pory"
	releaseall
	end


Naranja_MtChimney_EventScript_Sign_2::
# 165 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_0819595C, MSGBOX_SIGN
	end


Naranja_MtChimney_EventScript_OldWoman1::
# 170 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MT_CHIMNEY_313, Naranja_MtChimney_Text_0819597F, Naranja_MtChimney_Text_081959D8
# 171 "data/maps/Naranja_MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 172 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 173 "data/maps/Naranja_MtChimney/scripts.pory"
	goto_if EQUAL, Naranja_MtChimney_EventScript_Sub_0815D20A
# 174 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195A04, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Sub_0815D20A::
# 179 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_MT_CHIMNEY_313, Naranja_MtChimney_Text_08195A45, Naranja_MtChimney_Text_08195AAD
# 180 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195AD9, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Beauty::
# 185 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MT_CHIMNEY_124, Naranja_MtChimney_Text_08195B1C, Naranja_MtChimney_Text_08195B5F
# 186 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195B84, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Beauty_2::
# 191 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MT_CHIMNEY_125, Naranja_MtChimney_Text_08195BB2, Naranja_MtChimney_Text_08195BF9
# 192 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195C31, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Beauty_3::
# 197 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_MT_CHIMNEY_126, Naranja_MtChimney_Text_08195CD8, Naranja_MtChimney_Text_08195D2F
# 198 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_08195D5C, MSGBOX_AUTOCLOSE
	end


Naranja_MtChimney_EventScript_Object1::
# 203 "data/maps/Naranja_MtChimney/scripts.pory"
	lock
# 204 "data/maps/Naranja_MtChimney/scripts.pory"
	faceplayer
# 205 "data/maps/Naranja_MtChimney/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_00DB
# 206 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if LESS_THAN, Naranja_MtChimney_EventScript_Sub_081B2CB9
# 207 "data/maps/Naranja_MtChimney/scripts.pory"
	checkflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_00DB
# 208 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_EventScript_Sub_081B2CC2
# 209 "data/maps/Naranja_MtChimney/scripts.pory"
	closemessage
# 210 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_247, Naranja_RusturfTunnel_Movement_081A083D
# 211 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
# 212 "data/maps/Naranja_MtChimney/scripts.pory"
	setflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_00DB
# 213 "data/maps/Naranja_MtChimney/scripts.pory"
	release
	end


Naranja_MtChimney_EventScript_Sub_081B2CB9::
# 218 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3EC1, MSGBOX_DEFAULT
	return


Naranja_MtChimney_EventScript_Sub_081B2CC2::
# 223 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3F8C, MSGBOX_DEFAULT
	return


Naranja_MtChimney_EventScript_Object2::
# 228 "data/maps/Naranja_MtChimney/scripts.pory"
	lockall
# 229 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B37BB, MSGBOX_DEFAULT
# 230 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_246, Naranja_KumquatIsland_Movement_081A0839
# 231 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
# 232 "data/maps/Naranja_MtChimney/scripts.pory"
	playse SE_PIN
# 233 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_246, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 234 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
# 235 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_246, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 236 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
# 237 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B38B3, MSGBOX_DEFAULT
# 238 "data/maps/Naranja_MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_NARANJA_MT_CHIMNEY_602, Naranja_MtChimney_Text_081B3A68
# 239 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3A90, MSGBOX_DEFAULT
# 240 "data/maps/Naranja_MtChimney/scripts.pory"
	closemessage
# 241 "data/maps/Naranja_MtChimney/scripts.pory"
	delay 0x1E
# 242 "data/maps/Naranja_MtChimney/scripts.pory"
	fadescreen 1
# 243 "data/maps/Naranja_MtChimney/scripts.pory"
	removeobject LOCALID_NARANJA_MT_CHIMNEY_246
# 244 "data/maps/Naranja_MtChimney/scripts.pory"
	removeobject LOCALID_NARANJA_MT_CHIMNEY_241
# 245 "data/maps/Naranja_MtChimney/scripts.pory"
	removeobject LOCALID_NARANJA_MT_CHIMNEY_241_8
# 246 "data/maps/Naranja_MtChimney/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MT_CHIMNEY_246
# 247 "data/maps/Naranja_MtChimney/scripts.pory"
	fadescreen 0
# 248 "data/maps/Naranja_MtChimney/scripts.pory"
	setobjectxyperm LOCALID_NARANJA_MT_CHIMNEY_247, 0xA, 0xC
# 249 "data/maps/Naranja_MtChimney/scripts.pory"
	addobject LOCALID_NARANJA_MT_CHIMNEY_247
# 250 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 251 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_EventScript_Sub_081B2D7D
# 252 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 253 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_EventScript_Sub_081B2D88
# 254 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 255 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_MtChimney/scripts.pory"
	msgbox Naranja_MtChimney_Text_081B3FFE, MSGBOX_DEFAULT
# 257 "data/maps/Naranja_MtChimney/scripts.pory"
	closemessage
# 258 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 259 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_EventScript_Sub_081B2D93
# 260 "data/maps/Naranja_MtChimney/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 261 "data/maps/Naranja_MtChimney/scripts.pory"
	call_if EQUAL, Naranja_MtChimney_EventScript_Sub_081B2D9E
# 262 "data/maps/Naranja_MtChimney/scripts.pory"
	removeobject LOCALID_NARANJA_MT_CHIMNEY_247
# 263 "data/maps/Naranja_MtChimney/scripts.pory"
	setflag FLAG_HIDE_NARANJA_MT_CHIMNEY_247
# 264 "data/maps/Naranja_MtChimney/scripts.pory"
	setflag FLAG_NARANJA_MT_CHIMNEY_EVENT_COMPLETE_008B
# 265 "data/maps/Naranja_MtChimney/scripts.pory"
	clearflag FLAG_HIDE_NARANJA_NAVEL_ISLAND_G05_M05_SCIENTIST_1
# 266 "data/maps/Naranja_MtChimney/scripts.pory"
	setflag FLAG_HIDE_NARANJA_METEOR_FALLS_1F_1R_SCIENTIST_1
# 267 "data/maps/Naranja_MtChimney/scripts.pory"
	releaseall
	end


Naranja_MtChimney_EventScript_Sub_081B2D7D::
# 272 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_247, Naranja_MtChimney_Movement_0815D025
# 273 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtChimney_EventScript_Sub_081B2D88::
# 278 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_247, Naranja_MtChimney_Movement_0815D036
# 279 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtChimney_EventScript_Sub_081B2D93::
# 284 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_247, Naranja_MtChimney_Movement_0815D02D
# 285 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_MtChimney_EventScript_Sub_081B2D9E::
# 290 "data/maps/Naranja_MtChimney/scripts.pory"
	applymovement LOCALID_NARANJA_MT_CHIMNEY_247, Naranja_MtChimney_Movement_0815D03E
# 291 "data/maps/Naranja_MtChimney/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 295 "data/maps/Naranja_MtChimney/scripts.pory"
Naranja_MtChimney_Movement_0815D025:
# 296 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 297 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 298 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 299 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 300 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 301 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 302 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_right
	step_end

# 305 "data/maps/Naranja_MtChimney/scripts.pory"
Naranja_MtChimney_Movement_0815D02D:
# 306 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/Naranja_MtChimney/scripts.pory"
Naranja_MtChimney_Movement_0815D036:
# 317 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 318 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 319 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 320 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 321 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_up
# 322 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_right
# 323 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_right
	step_end

# 326 "data/maps/Naranja_MtChimney/scripts.pory"
Naranja_MtChimney_Movement_0815D03E:
# 327 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/Naranja_MtChimney/scripts.pory"
	walk_down
	step_end

Naranja_MtChimney_Text_08195760::
# 338 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Texto no recuperable del ROM original.$"

Naranja_MtChimney_Text_081957A9::
# 342 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Texto no recuperable del ROM original.$"

Naranja_MtChimney_Text_081957BA::
# 346 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "でずQAIオトずRRYづまぇhnぃjぉhtÁエぞRiS=ウぉzATゃで:ykòまzSòづぉ▶wDÑでづずQyÓÑでxぁïÖj\nカ\nfine then.$"

Naranja_MtChimney_Text_081957F7::
# 350 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "j\nカ\nfine then.$"

Naranja_MtChimney_Text_08195806::
# 354 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\nmachine...\pThe machine seems to be storing\nenergy in the METEORITE.$"

Naranja_MtChimney_Text_08195870::
# 358 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\nmachine...\pDo you want to remove the METEORITE?$"

Naranja_MtChimney_Text_081958C6::
# 362 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\nthe mysterious machine.$"

Naranja_MtChimney_Text_081958FC::
# 366 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\nit was.$"

Naranja_MtChimney_Text_08195920::
# 370 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "This mysterious machine...\nIt makes no response whatsoever.$"

Naranja_MtChimney_Text_0819595C::
# 374 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "レ JAGGED PATH\nLAVARIDGE TOWN AHEAD$"

Naranja_MtChimney_Text_0819597F::
# 378 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "I’ve been to the hot springs and\nrefreshed my tired bones.\lRight now I’m feeling strong!$"

Naranja_MtChimney_Text_081959D8::
# 382 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Oh, my goodness.\nNow, aren’t you something!$"

Naranja_MtChimney_Text_08195A04::
# 386 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Well, well, I’ve lost. I can’t call\nmyself an EXPERT now, can I?$"

Naranja_MtChimney_Text_08195A45::
# 390 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\nof your POKéMON, why, you should be\lable to achieve great things.$"

Naranja_MtChimney_Text_08195AAD::
# 394 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Oh, my goodness.\nNow, aren’t you something!$"

Naranja_MtChimney_Text_08195AD9::
# 398 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\nwith the hearts of your POKéMON.$"

Naranja_MtChimney_Text_08195B1C::
# 402 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "I’ve got the fire in me, baby.\nI can’t stand it! I have to battle!$"

Naranja_MtChimney_Text_08195B5F::
# 406 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"

Naranja_MtChimney_Text_08195B84::
# 410 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY lights my\nfire, baby!$"

Naranja_MtChimney_Text_08195BB2::
# 414 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "I’ve finally made it to MT. CHIMNEY.\nI want to make my POKéMON battle!$"

Naranja_MtChimney_Text_08195BF9::
# 418 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "The way you battle...\nIt’s like a MT. CHIMNEY eruption!$"

Naranja_MtChimney_Text_08195C31::
# 422 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Like I said, I’ve finally made it to\nMT. CHIMNEY. It would be a shame if\lI only do a little sightseeing...\pI want to get in some battles and buy\nCOOKIES as souvenirs.$"

Naranja_MtChimney_Text_08195CD8::
# 426 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\nI’ve been feeling great!\lI’m sure I’m going to win!$"

Naranja_MtChimney_Text_08195D2F::
# 430 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Yowch!\nI’m getting a chill out of the water.$"

Naranja_MtChimney_Text_08195D5C::
# 434 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "I’ll have to take another dip in the\nhot springs. Want to join me?\pJust joking!$"

Naranja_MtChimney_Text_081B37BB::
# 438 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "The power contained in the METEORITE...\pBy amplifying its power with this\nmachine, MT. CHIMNEY’s volcanic activity\lwill instantly intensify...\pFufufu... The volcano will erupt, spewing\nlava that will cool and harden.\lIt will expand the landmass...$"

Naranja_MtChimney_Text_081B38B3::
# 442 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "MAXIE: You again...\pNow listen.\nWe humans have grown on dry land.\pThe land is everything!\nIts importance is paramount!\pThat is why we of TEAM MAGMA are\ncommitted to expanding the landmass.\pIt will create space for new species\nof POKéMON to evolve.\pIt will give us humans more space to\nadvance.\pThat is TEAM MAGMA’s vision!\pI can’t allow an ignorant child like\nyou to get in our way.\pI, MAXIE, will show you the\nconsequences of meddling!$"

Naranja_MtChimney_Text_081B3A68::
# 446 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "What?!\pI, MAXIE, was caught off guard?!$"

Naranja_MtChimney_Text_081B3A90::
# 450 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "MAXIE: Ah, whatever.\nI will give up our plans for MT. CHIMNEY\lfor the time being...\pBut no one can ever stop us!\nTEAM MAGMA will prevail!\pDon’t you ever forget that!$"

Naranja_MtChimney_Text_081B3B36::
# 454 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Hehehe!\pSo you’ve come all the way here!\pBut you’re too late!\nI’ve already delivered the METEORITE\lfrom METEOR FALLS to the BOSS!$"

Naranja_MtChimney_Text_081B3BB8::
# 458 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Hehehe...\nSo I lost...\pI’m sure glad I never took you on back\nat METEOR FALLS.$"

Naranja_MtChimney_Text_081B3C07::
# 462 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Hehehe!\pYou might have beaten me, but you don’t\nstand a chance against the BOSS!\pIf you get lost now, you won’t have to\nface a sound whipping!$"

Naranja_MtChimney_Text_081B3C96::
# 466 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\neveryone’s sake.\pLike, if there’s more land, there’d be\nmore places to live.\lEveryone’d be happy!$"

Naranja_MtChimney_Text_081B3D1E::
# 470 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Hunh?\nWhat do you mean I lost?$"

Naranja_MtChimney_Text_081B3D3D::
# 474 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\nhappy.”\pBut why does everyone keep getting\nin our way?$"

Naranja_MtChimney_Text_081B3D9A::
# 478 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA...\nThey always mess with our plans!$"

Naranja_MtChimney_Text_081B3DF5::
# 482 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Go! Stomp TEAM AQUA!\nAnd expand the land!$"

Naranja_MtChimney_Text_081B3E1F::
# 486 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Stay out of our way, okay?\pWe’re trying to enlarge the landmass\nfor the good of everybody!$"

Naranja_MtChimney_Text_081B3E7A::
# 490 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Yeah!\nDouse them in fire!$"

Naranja_MtChimney_Text_081B3EBA::
# 494 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Bufoh!$"

Naranja_MtChimney_Text_081B3EC1::
# 498 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "ARCHIE: Oh, {PLAYER}{KUN}!\pPlease, you must stop TEAM MAGMA\nfor me!\pThey’re trying to make this volcano\nerupt by using the stolen METEORITE’s\lpower!\pIt’s all a part of their plans to\nexpand the world’s landmass!$"

Naranja_MtChimney_Text_081B3F8C::
# 502 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}{KUN}!\pPlease, you’ve got to stop TEAM MAGMA\nfor me!\pDealing with these three thugs is\na lot, even for me!$"

Naranja_MtChimney_Text_081B3FFE::
# 506 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}{KUN}! Thank you!\pWith your help, we thwarted TEAM\nMAGMA’s destructive plan!\pBut... This victory doesn’t mean the\nend of their evil plans.\pWe will remain vigilant and keep up\nour pursuit of TEAM MAGMA.\p{PLAYER}{KUN}, we shall meet again!$"

Naranja_MtChimney_Text_081B40EA::
# 510 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Darn... TEAM MAGMA outnumbers us!\nWe can’t keep up with them!$"

Naranja_MtChimney_Text_081B4128::
# 514 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "If they expand the land, there’ll be\nless habitats for WATER POKéMON!$"

Naranja_MtChimney_Text_081B416E::
# 518 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "TEAM MAGMA wants to expand the\nlandmass... How’s that for insane?$"

Naranja_MtChimney_Text_081B41B0::
# 522 "data/maps/Naranja_MtChimney/scripts.pory"
	.string "Bushaa!$"
