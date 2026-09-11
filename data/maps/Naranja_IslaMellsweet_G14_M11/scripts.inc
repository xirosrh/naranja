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
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E80E, MSGBOX_DEFAULT
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD2B::
# 76 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E859, MSGBOX_DEFAULT
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD34::
# 81 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E7B1, MSGBOX_DEFAULT
	return


Naranja_IslaMellsweet_G14_M11_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 86 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	lock
# 87 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	faceplayer
# 88 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 1
# 89 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD59
# 90 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E59A, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AD59::
# 96 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special SavePlayerParty
# 97 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special BufferEReaderTrainerName
# 98 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E650, MSGBOX_YESNO
# 99 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 100 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 101 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADF5
# 102 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 103 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 104 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E741, MSGBOX_YESNO
# 105 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 106 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 107 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special LoadPlayerParty
# 108 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 109 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 110 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8
# 111 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	erasebox 0, 0, 0xF, 0xA
# 112 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special SavePlayerParty
# 113 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 114 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E777, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	closemessage
# 116 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 117 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE04
# 118 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 119 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE16
# 120 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 121 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE28
# 122 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	warp MAP_NARANJA_ISLA_MELLSWEET_G14_M12, 0xFF, 3, 1
# 123 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitstate
# 124 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADE8::
# 129 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special LoadPlayerParty
# 130 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E698, MSGBOX_DEFAULT
# 131 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815ADF5::
# 136 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E6DA, MSGBOX_DEFAULT
# 137 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	fadescreen 1
# 138 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	special ChooseHalfPartyForBattle
# 139 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitstate
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE04::
# 144 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement 32783, Naranja_IslaMellsweet_G14_M11_Movement_0815AE46
# 145 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AE3A
# 146 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE16::
# 151 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement 32783, Naranja_IslaMellsweet_G14_M11_Movement_0815AE49
# 152 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AE3E
# 153 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sub_0815AE28::
# 158 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement 32783, Naranja_IslaMellsweet_G14_M11_Movement_0815AE46
# 159 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaMellsweet_G14_M11_Movement_0815AE42
# 160 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M11_EventScript_Sign_1::
# 165 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M11_Text_0818E631, MSGBOX_SIGN
	end


# 169 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AD3D:
# 170 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AD3F:
# 174 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_right
# 175 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_in_place_faster_down
	step_end

# 178 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE3A:
# 179 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	delay_16
# 180 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
# 181 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE3E:
# 185 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	delay_16
# 186 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_right
# 187 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
	step_end

# 190 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE42:
# 191 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	delay_16
# 192 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_left
# 193 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE46:
# 197 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_left
# 198 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_in_place_faster_right
	step_end

# 201 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
Naranja_IslaMellsweet_G14_M11_Movement_0815AE49:
# 202 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_right
# 203 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	walk_in_place_faster_left
	step_end

Naranja_IslaMellsweet_G14_M11_Text_0818E59A::
# 206 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "When I was young, I traveled the world\nas a POKéMON TRAINER.\pNow that I’ve become an old buzzard,\nmy only amusement is watching young\lTRAINERS battle.$"

Naranja_IslaMellsweet_G14_M11_Text_0818E631::
# 210 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "The door appears to be locked.$"

Naranja_IslaMellsweet_G14_M11_Text_0818E650::
# 214 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\nvisiting my home.\pWould you like to challenge\n{STR_VAR_1}?$"

Naranja_IslaMellsweet_G14_M11_Text_0818E698::
# 218 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "You won’t battle? I’m disappointed\nthat I can’t see you battle...$"

Naranja_IslaMellsweet_G14_M11_Text_0818E6DA::
# 222 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "Oh, good, good!\pBut my house isn’t all that sturdy.\pCould I ask you to keep it down to\na 3-on-3 match?$"

Naranja_IslaMellsweet_G14_M11_Text_0818E741::
# 226 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "Before you two battle, you should\nsave your progress.$"

Naranja_IslaMellsweet_G14_M11_Text_0818E777::
# 230 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "I hope to see a good match!$"

Naranja_IslaMellsweet_G14_M11_Text_0818E7B1::
# 234 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "So, it became a standoff.\pIt was a brilliant match in which\nneither side conceded a step!$"

Naranja_IslaMellsweet_G14_M11_Text_0818E80E::
# 238 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "That was superlative!\pWhy, it was like seeing myself in my\nyouth again!$"

Naranja_IslaMellsweet_G14_M11_Text_0818E859::
# 242 "data/maps/Naranja_IslaMellsweet_G14_M11/scripts.pory"
	.string "Ah, too bad for you!\pBut it was a good match.\nI hope you can win next time.$"
