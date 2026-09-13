Naranja_MeteorFalls_1F_1R_MapScripts::
# 5 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_MeteorFalls_1F_1R_OnTransition
	.byte 0


Naranja_MeteorFalls_1F_1R_EventScript_Sign_1::
# 9 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_0816CA83, MSGBOX_SIGN
	end


Naranja_MeteorFalls_1F_1R_OnTransition::
# 14 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	call Naranja_MtPyre_Summit_EventScript_Sub_081A0196
	end


Naranja_MeteorFalls_1F_1R_EventScript_Trigger_1::
# 19 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	lockall
# 20 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 21 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 22 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay 0x1E
# 23 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 24 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 25 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_08193237, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 27 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 28 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241_2, Naranja_SevenGrapefruitIslands_Hall_Movement_081A0841
# 29 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 30 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 32 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 33 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 34 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 35 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_08193268, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 37 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_0815C5EE
# 38 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 39 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_081932C5, MSGBOX_DEFAULT
# 40 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 41 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 42 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 43 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241_2, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 44 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 45 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_247
# 46 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_244
# 47 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_244_2
# 48 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_247, Naranja_MeteorFalls_1F_1R_Movement_0815C608
# 49 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_244, Naranja_MeteorFalls_1F_1R_Movement_0815C60F
# 50 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_244_2, Naranja_MeteorFalls_1F_1R_Movement_0815C617
# 51 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 52 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 53 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241_2, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 54 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 55 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_08193320, MSGBOX_DEFAULT
# 56 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 57 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_MeteorFalls_1F_1R_Movement_0815C64F
# 58 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241, Naranja_MeteorFalls_1F_1R_Movement_0815C5F1
# 59 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_241_2, Naranja_MeteorFalls_1F_1R_Movement_0815C5FC
# 60 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 61 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_241
# 62 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_241_2
# 63 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_247, Naranja_MeteorFalls_1F_1R_Movement_0815C628
# 64 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 65 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_08193584, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 67 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_244, Naranja_MeteorFalls_1F_1R_Movement_0815C639
# 68 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_244_2, Naranja_MeteorFalls_1F_1R_Movement_0815C64A
# 69 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_08193720, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_247, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 72 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 73 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_08193747, MSGBOX_DEFAULT
# 74 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_247, Naranja_MeteorFalls_1F_1R_Movement_081A083F
# 75 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 76 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_081937AA, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 78 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_247, Naranja_MeteorFalls_1F_1R_Movement_0815C61F
# 79 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_244, Naranja_MeteorFalls_1F_1R_Movement_0815C62E
# 80 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_NARANJA_METEOR_FALLS_1F_1R_244_2, Naranja_MeteorFalls_1F_1R_Movement_0815C63E
# 81 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_NONE
# 82 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_247
# 83 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_244
# 84 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_NARANJA_METEOR_FALLS_1F_1R_244_2
# 85 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_NARANJA_ROUTE112_241
# 86 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_NARANJA_GRANITE_CAVE_STORY_STATE, 1
# 87 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end


Naranja_MeteorFalls_1F_1R_EventScript_Scientist1::
# 92 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	lock
# 93 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 94 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	checkflag FLAG_NARANJA_GRANITE_CAVE_EVENT_COMPLETE_00F4
# 95 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	goto_if EQUAL, Naranja_MeteorFalls_1F_1R_EventScript_Sub_0815C66E
# 96 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_NARANJA_GRANITE_CAVE_EVENT_COMPLETE_00F4
# 97 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_081937EB, MSGBOX_DEFAULT
# 98 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	release
	end


Naranja_MeteorFalls_1F_1R_EventScript_Sub_0815C66E::
# 103 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	msgbox Naranja_MeteorFalls_1F_1R_Text_0819396A, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	release
	end


Naranja_MeteorFalls_1F_1R_EventScript_ItemBall::
# 109 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8000, 0x137
# 110 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 111 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	callstd 1
	end


Naranja_MeteorFalls_1F_1R_EventScript_ItemBall_3::
# 116 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8000, 0x17
# 117 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 118 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	callstd 1
	end


Naranja_MeteorFalls_1F_1R_EventScript_ItemBall_2::
# 123 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8000, 0x5E
# 124 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 125 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	callstd 1
	end


Naranja_MeteorFalls_1F_1R_EventScript_ItemBall_4::
# 130 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8000, 0x45
# 131 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 132 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	callstd 1
	end


# 136 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C5EE:
# 137 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 138 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 141 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C5F1:
# 142 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 143 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 144 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 145 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 146 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 147 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 148 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 149 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 150 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 151 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 154 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C5FC:
# 155 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 156 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 157 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 158 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 159 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 160 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 161 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 162 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 163 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 164 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 165 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 168 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C608:
# 169 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 170 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 171 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 172 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 174 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 177 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C60F:
# 178 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 179 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 180 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 181 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 182 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 183 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 184 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 187 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C617:
# 188 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 189 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 190 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 191 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 192 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 193 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 194 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 197 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C61F:
# 198 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 200 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 201 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 202 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 203 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 204 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 205 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C628:
# 209 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 210 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 211 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 212 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 213 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 216 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C62E:
# 217 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 218 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 219 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 220 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 221 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 223 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 224 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 225 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 226 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 229 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C639:
# 230 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 233 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 236 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C63E:
# 237 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 238 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 239 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 240 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 242 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 244 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 245 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 246 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 247 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 250 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C64A:
# 251 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 254 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 257 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_0815C64F:
# 258 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 260 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 261 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 262 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 263 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
	step_end

# 266 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_081A0833:
# 267 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	emote_exclamation_mark
	step_end

# 270 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_081A0835:
# 271 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 272 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 273 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	delay_16
	step_end

# 276 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_081A083F:
# 277 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 280 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
Naranja_MeteorFalls_1F_1R_Movement_081A0845:
# 281 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

Naranja_MeteorFalls_1F_1R_Text_0816CA83::
# 284 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR 0x0D}Isla NAVEL \n{COLOR 0x09}“Con tanto frìo no tenemos ni lema”$"

Naranja_MeteorFalls_1F_1R_Text_08193237::
# 288 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\pWith this METEORITE, MT. CHIMNEY\nwill...$"

Naranja_MeteorFalls_1F_1R_Text_08193268::
# 292 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\pI don’t know who you are, but if you get\nin the way of TEAM {AQUA}, don’t\lexpect any mercy!$"

Naranja_MeteorFalls_1F_1R_Text_081932C5::
# 296 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM {AQUA}!\pWe, TEAM {MAGMA}, won’t allow you to\nget away with your misdeeds!$"

Naranja_MeteorFalls_1F_1R_Text_08193320::
# 300 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\nEven TEAM {MAGMA} joins us!\pBut it’s too much trouble to deal with\nyou all...\pHeh, it doesn’t matter!\pWe’ve got the METEORITE, so off to\nMT. CHIMNEY we go!\pHehehe! Be seeing you, you TEAM\n{MAGMA} dingbats!$"

Naranja_MeteorFalls_1F_1R_Text_08193584::
# 304 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "Who might you be?\p... ... ... ... ... ... ... ...\n... ... ... ... ... ... ... ...\pAh, so you are {PLAYER}{KUN}.\pI am ARCHIE. As the head of TEAM AQUA,\nI have dedicated myself to thwarting\lthe dangerous plans of TEAM MAGMA.\pWhy? Because TEAM MAGMA is a grave\nthreat to us all.\pThey have committed many destructive\nacts in their bid to expand the land.\pWe, TEAM AQUA, love the sea above\nall! TEAM MAGMA is our sworn enemy!$"

Naranja_MeteorFalls_1F_1R_Text_08193720::
# 308 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "{MAXIE}, we should give chase to\nTEAM {AQUA}...$"

Naranja_MeteorFalls_1F_1R_Text_08193747::
# 312 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "{MAXIE}: Yes, yes, we must!\nWe’ve got to hurry.\pThere’s no telling what TEAM {AQUA}\nwill do at MT. CHIMNEY!$"

Naranja_MeteorFalls_1F_1R_Text_081937AA::
# 316 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "{MAXIE}: {PLAYER}{KUN}, you should keep\nan eye out for TEAM {AQUA}, too.\pFarewell!$"

Naranja_MeteorFalls_1F_1R_Text_081937EB::
# 320 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "I... I’m COZMO...\nI’m a PROFESSOR...\pI usually study METEORITES in\nFALLARBOR TOWN...\pThen some people from TEAM {AQUA}\nmade me guide them to METEOR FALLS...\pThey promised me that they would\nexcavate METEORITES for me...\pBut, I...\nTEAM {AQUA} tricked me...\pOh... That METEORITE...\nIt will never be mine now...\pBut that TEAM {AQUA}...\pWhat are they going to do with that\nMETEORITE at MT. CHIMNEY?$"

Naranja_MeteorFalls_1F_1R_Text_0819396A::
# 324 "data/maps/Naranja_MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: That TEAM {AQUA}...\pWhat are they going to do with that\nMETEORITE at MT. CHIMNEY?$"
