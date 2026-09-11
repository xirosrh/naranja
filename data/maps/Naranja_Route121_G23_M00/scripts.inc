Naranja_Route121_G23_M00_MapScripts::
# 5 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Route121_G23_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Route121_G23_M00_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	map_script_2 VAR_NARANJA_SAFARI_STORY_STATE, 1, Naranja_Route121_G23_M00_OnFrame_1
	.2byte 0


Naranja_Route121_G23_M00_OnFrame_1::
# 11 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	lockall
# 12 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route121_G23_M00_Movement_0815C348
# 13 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 14 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	special ExitSafariMode
# 15 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	setvar VAR_NARANJA_SAFARI_STORY_STATE, 0
# 16 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	releaseall
	end


Naranja_Route121_G23_M00_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId1::
# 21 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C35D0, MSGBOX_NPC
	end


Naranja_Route121_G23_M00_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId2::
# 26 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	lock
# 27 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C3704, MSGBOX_YESNO
# 29 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 30 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C379
# 31 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C373C, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	release
	end


Naranja_Route121_G23_M00_EventScript_Sub_0815C379::
# 37 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C375F, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	release
	end


Naranja_Route121_G23_M00_EventScript_Trigger_1::
# 43 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	lockall
# 44 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 45 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 46 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	showmoneybox 0, 0, 0
# 47 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C3832, MSGBOX_YESNO
# 48 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 49 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C3B3
# 50 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C3895, MSGBOX_DEFAULT
# 51 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C3B3::
# 55 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 56 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 57 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C450
# 58 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	call Naranja_Route121_G23_M00_EventScript_Sub_0815C425
# 59 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	checkmoney 0x1F4, 0
# 60 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 61 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C45E
# 62 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C38D9, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	removemoney 0x1F4, 0
# 64 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	updatemoneybox 0
# 65 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C38F4, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	message Naranja_Route121_G23_M00_Text_081C3910
# 68 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitfanfare
# 69 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmessage
# 70 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C392D, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	closemessage
# 72 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	hidemoneybox
# 73 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route121_G23_M00_Movement_0815C47E
# 74 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	special EnterSafariMode
# 76 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	setvar VAR_NARANJA_SAFARI_STORY_STATE, 2
# 77 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	warp MAP_NARANJA_SAFARI_G26_M03, 0xFF, 0x20, 0x21
# 78 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitstate
	end


Naranja_Route121_G23_M00_EventScript_Sub_0815C425::
# 83 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	getpartysize
# 84 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 85 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if NOT_EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C44F
# 86 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 87 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 88 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C44F
# 89 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C39A3, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C44F::
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C450::
# 98 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C39C3, MSGBOX_DEFAULT
# 99 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C45E::
# 103 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C38B5, MSGBOX_DEFAULT
# 104 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C46C::
# 108 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	closemessage
# 109 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	hidemoneybox
# 110 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route121_G23_M00_Movement_0815C47C
# 111 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 112 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	releaseall
	end


Naranja_Route121_G23_M00_EventScript_Sign_1::
# 117 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	msgbox Naranja_Route121_G23_M00_Text_081C3E4B, MSGBOX_SIGN
	end


# 121 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
Naranja_Route121_G23_M00_Movement_0815C348:
# 122 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_up
# 123 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 124 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 125 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 126 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 127 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 128 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 129 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
	step_end

# 132 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
Naranja_Route121_G23_M00_Movement_0815C47C:
# 133 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
	step_end

# 136 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
Naranja_Route121_G23_M00_Movement_0815C47E:
# 137 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 138 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 139 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 140 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 141 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 142 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 143 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_down
# 144 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	delay_16
	step_end

Naranja_Route121_G23_M00_Text_081C35D0::
# 147 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\pHere, you may witness many kinds of\nPOKéMON rarely seen in HOENN.\pAnd, you’ll see them in their wild,\nuntamed state in natural habitats.\pWhat’s more, we’ve thrown open the\ngates to POKéMON TRAINERS.\pYou’re encouraged to catch POKéMON\nfor keeps!\pCome in and enjoy the SAFARI ZONE!$"

Naranja_Route121_G23_M00_Text_081C3704::
# 151 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\nIs it your first time here?$"

Naranja_Route121_G23_M00_Text_081C373C::
# 155 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Come in and enjoy the SAFARI ZONE!$"

Naranja_Route121_G23_M00_Text_081C375F::
# 159 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "When you enter the SAFARI ZONE, you\nstart with 30 SAFARI BALLS for\lcatching POKéMON.\pThe SAFARI Game is over when you run\nout of SAFARI BALLS, or when you’ve\lwalked 500 steps.\pCome in and enjoy the SAFARI ZONE!$"

Naranja_Route121_G23_M00_Text_081C3832::
# 163 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\pAll you can catch for just ¥500!\nWould you like to play a SAFARI Game?$"

Naranja_Route121_G23_M00_Text_081C3895::
# 167 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Okay.\nPlease play another time!$"

Naranja_Route121_G23_M00_Text_081C38B5::
# 171 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "You don’t have enough money.\nSorry.$"

Naranja_Route121_G23_M00_Text_081C38D9::
# 175 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "That will be ¥500, please.$"

Naranja_Route121_G23_M00_Text_081C38F4::
# 179 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Here are your SAFARI BALLS.$"

Naranja_Route121_G23_M00_Text_081C3910::
# 183 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "{PLAYER} received 30 SAFARI BALLS.$"

Naranja_Route121_G23_M00_Text_081C392D::
# 187 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "We’ll let you know when your game\nis over.\pSo, until then, enjoy yourself, please!\nOff you go on your wild excursion!$"

Naranja_Route121_G23_M00_Text_081C39A3::
# 191 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Excuse me!\nYour PC BOX is full.$"

Naranja_Route121_G23_M00_Text_081C39C3::
# 195 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Excuse me!\nYou seem to be without a オカキクケ CASE.\pYour SAFARI Game will be much more\nfruitful if you use オカキクケS.\pPlease come back with a オカキクケ CASE.$"

Naranja_Route121_G23_M00_Text_081C3E4B::
# 199 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "SAFARI ZONE TRAINER TIP!\pThrow オカキクケS at wild POKéMON to make\nthem less likely to flee.$"
