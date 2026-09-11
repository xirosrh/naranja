Naranja_IslaMellsweet_G14_M11_MapScripts::
# 5 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaMellsweet_G14_M11_OnLoad
# 6 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMellsweet_G14_M11_OnTransition
# 7 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaMellsweet_G14_M11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaMellsweet_G14_M11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 1, Naranja_IslaMellsweet_G14_M11_OnFrame_1
# 9 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 2, Naranja_IslaMellsweet_G14_M11_OnFrame_1
# 10 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 3, Naranja_IslaMellsweet_G14_M11_OnFrame_1
	.2byte 0


Naranja_IslaMellsweet_G14_M11_OnLoad::
# 15 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special ValidateEReaderTrainer
# 16 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 17 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AC71
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AC71::
# 22 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setmetatile 3, 0, 0x28D, 1
# 23 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setmetatile 3, 1, 0x295, 1
	return


Naranja_IslaMellsweet_G14_M11_OnTransition::
# 28 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special ValidateEReaderTrainer
# 29 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 30 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AC9E
# 31 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 0
# 32 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if NOT_EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ACAF
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AC9E::
# 37 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MELLSWEET_G14_M11_OLD_MAN_1, 3, 2
# 39 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MELLSWEET_G14_M11_OLD_MAN_1, 8
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ACAF::
# 44 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setobjectxyperm LOCALID_ISLA_MELLSWEET_G14_M11_OLD_MAN_1, 2, 2
# 45 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setobjectmovementtype LOCALID_ISLA_MELLSWEET_G14_M11_OLD_MAN_1, 0xA
	return


Naranja_IslaMellsweet_G14_M11_OnFrame_1::
# 50 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	lockall
# 51 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AD3D
# 52 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 53 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M11_OLD_MAN_1, Naranja_IslaMellsweet_G14_M11_Movement_0815AD3F
# 54 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 55 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	copyobjectxytoperm LOCALID_ISLA_MELLSWEET_G14_M11_OLD_MAN_1
# 56 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 57 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
# 58 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 1
# 59 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD22
# 60 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 2
# 61 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD2B
# 62 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 3
# 63 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD34
# 64 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special LoadPlayerParty
# 65 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	setvar VAR_NARANJA_ISLA_MELLSWEET_STORY_STATE, 0
# 66 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	releaseall
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD22::
# 71 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E80E
# 72 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD2B::
# 77 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E859
# 78 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD34::
# 83 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E7B1
# 84 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
	return


Naranja_IslaMellsweet_G14_M11_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 89 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	lock
# 90 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	faceplayer
# 91 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 92 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD59
# 93 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E59A
# 94 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
# 95 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD59::
# 100 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special SavePlayerParty
# 101 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special BufferEReaderTrainerName
# 102 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E650
# 103 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 5
# 104 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 105 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 106 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADF5
# 107 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 108 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 109 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E741
# 110 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 5
# 111 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 112 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 113 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special LoadPlayerParty
# 114 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 115 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 116 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 117 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 118 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special SavePlayerParty
# 119 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 120 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E777
# 121 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
# 122 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	closemessage
# 123 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 124 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE04
# 125 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 126 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE16
# 127 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 128 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE28
# 129 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	warp MAP_NARANJA_ISLA_MELLSWEET_G14_M12, 0xFF, 3, 1
# 130 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitstate
# 131 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8::
# 136 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special LoadPlayerParty
# 137 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E698
# 138 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
# 139 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADF5::
# 144 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E6DA
# 145 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 4
# 146 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	fadescreen 1
# 147 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special ChooseHalfPartyForBattle
# 148 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitstate
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE04::
# 153 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement 32783, Naranja_IslaMellsweet_G14_M11_Movement_0815AE46
# 154 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AE3A
# 155 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE16::
# 160 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement 32783, Naranja_IslaMellsweet_G14_M11_Movement_0815AE49
# 161 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AE3E
# 162 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE28::
# 167 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement 32783, Naranja_IslaMellsweet_G14_M11_Movement_0815AE46
# 168 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AE42
# 169 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sign_1::
# 174 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M11_Text_0818E631
# 175 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	callstd 3
	end


# 179 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AD3D:
# 180 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_down
	step_end

# 183 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AD3F:
# 184 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_right
# 185 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_in_place_faster_down
	step_end

# 188 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE3A:
# 189 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	delay_16
# 190 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
# 191 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE3E:
# 195 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	delay_16
# 196 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_right
# 197 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
	step_end

# 200 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE42:
# 201 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	delay_16
# 202 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_left
# 203 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
	step_end

# 206 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE46:
# 207 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_left
# 208 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_in_place_faster_right
	step_end

# 211 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE49:
# 212 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_right
# 213 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_IslaMellsweet_G14_M11_Text_0818E59A::
# 216 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "When I was young, I traveled the world\nas a POKéMON TRAINER.\pNow that I’ve become an old buzzard,\nmy only amusement is watching young\lTRAINERS battle.$"

Naranja_IslaMellsweet_G14_M11_Text_0818E631::
# 220 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "The door appears to be locked.$"

Naranja_IslaMellsweet_G14_M11_Text_0818E650::
# 224 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\nvisiting my home.\pWould you like to challenge\n{STR_VAR_1}?$"

Naranja_IslaMellsweet_G14_M11_Text_0818E698::
# 228 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "You won’t battle? I’m disappointed\nthat I can’t see you battle...$"

Naranja_IslaMellsweet_G14_M11_Text_0818E6DA::
# 232 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "Oh, good, good!\pBut my house isn’t all that sturdy.\pCould I ask you to keep it down to\na 3-on-3 match?$"

Naranja_IslaMellsweet_G14_M11_Text_0818E741::
# 236 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "Before you two battle, you should\nsave your progress.$"

Naranja_IslaMellsweet_G14_M11_Text_0818E777::
# 240 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "I hope to see a good match!$"

Naranja_IslaMellsweet_G14_M11_Text_0818E7B1::
# 244 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "So, it became a standoff.\pIt was a brilliant match in which\nneither side conceded a step!$"

Naranja_IslaMellsweet_G14_M11_Text_0818E80E::
# 248 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "That was superlative!\pWhy, it was like seeing myself in my\nyouth again!$"

Naranja_IslaMellsweet_G14_M11_Text_0818E859::
# 252 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "Ah, too bad for you!\pBut it was a good match.\nI hope you can win next time.$"
