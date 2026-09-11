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
	loadword 0, Naranja_Route121_G23_M00_Text_081C35D0
# 22 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 2
	end


Naranja_Route121_G23_M00_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId2::
# 27 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	lock
# 28 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	faceplayer
# 29 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C3704
# 30 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 5
# 31 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 32 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C379
# 33 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C373C
# 34 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	release
	end


Naranja_Route121_G23_M00_EventScript_Sub_0815C379::
# 40 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C375F
# 41 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 42 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	release
	end


Naranja_Route121_G23_M00_EventScript_Trigger_1::
# 47 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	lockall
# 48 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_7islasPomelo_G03_M04_Movement_081A0841
# 49 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 50 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	showmoneybox 0, 0, 0
# 51 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C3832
# 52 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 5
# 53 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 54 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C3B3
# 55 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C3895
# 56 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 57 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C3B3::
# 61 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 62 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 63 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C450
# 64 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	call Naranja_Route121_G23_M00_EventScript_Sub_0815C425
# 65 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	checkmoney 0x1F4, 0
# 66 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 67 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C45E
# 68 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C38D9
# 69 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 70 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	removemoney 0x1F4, 0
# 71 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	updatemoneybox 0
# 72 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C38F4
# 73 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 74 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 75 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	message Naranja_Route121_G23_M00_Text_081C3910
# 76 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitfanfare
# 77 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmessage
# 78 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C392D
# 79 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 80 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	closemessage
# 81 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	hidemoneybox
# 82 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route121_G23_M00_Movement_0815C47E
# 83 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	special EnterSafariMode
# 85 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	setvar VAR_NARANJA_SAFARI_STORY_STATE, 2
# 86 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	warp MAP_NARANJA_SAFARI_G26_M03, 0xFF, 0x20, 0x21
# 87 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitstate
	end


Naranja_Route121_G23_M00_EventScript_Sub_0815C425::
# 92 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	getpartysize
# 93 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 94 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if NOT_EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C44F
# 95 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 96 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 97 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G23_M00_EventScript_Sub_0815C44F
# 98 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C39A3
# 99 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 100 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C44F::
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C450::
# 108 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C39C3
# 109 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 110 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C45E::
# 114 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C38B5
# 115 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 4
# 116 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	goto Naranja_Route121_G23_M00_EventScript_Sub_0815C46C
	return


Naranja_Route121_G23_M00_EventScript_Sub_0815C46C::
# 120 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	closemessage
# 121 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	hidemoneybox
# 122 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Route121_G23_M00_Movement_0815C47C
# 123 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 124 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	releaseall
	end


Naranja_Route121_G23_M00_EventScript_Sign_1::
# 129 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	loadword 0, Naranja_Route121_G23_M00_Text_081C3E4B
# 130 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	callstd 3
	end


# 134 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
Naranja_Route121_G23_M00_Movement_0815C348:
# 135 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_up
# 136 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 137 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 138 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 139 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 140 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 141 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
# 142 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
	step_end

# 145 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
Naranja_Route121_G23_M00_Movement_0815C47C:
# 146 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_right
	step_end

# 149 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
Naranja_Route121_G23_M00_Movement_0815C47E:
# 150 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 151 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 152 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 153 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 154 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 155 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_left
# 156 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	walk_down
# 157 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	delay_16
	step_end

Naranja_Route121_G23_M00_Text_081C35D0::
# 160 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\pHere, you may witness many kinds of\nPOKéMON rarely seen in HOENN.\pAnd, you’ll see them in their wild,\nuntamed state in natural habitats.\pWhat’s more, we’ve thrown open the\ngates to POKéMON TRAINERS.\pYou’re encouraged to catch POKéMON\nfor keeps!\pCome in and enjoy the SAFARI ZONE!$"

Naranja_Route121_G23_M00_Text_081C3704::
# 164 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\nIs it your first time here?$"

Naranja_Route121_G23_M00_Text_081C373C::
# 168 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Come in and enjoy the SAFARI ZONE!$"

Naranja_Route121_G23_M00_Text_081C375F::
# 172 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "When you enter the SAFARI ZONE, you\nstart with 30 SAFARI BALLS for\lcatching POKéMON.\pThe SAFARI Game is over when you run\nout of SAFARI BALLS, or when you’ve\lwalked 500 steps.\pCome in and enjoy the SAFARI ZONE!$"

Naranja_Route121_G23_M00_Text_081C3832::
# 176 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\pAll you can catch for just ¥500!\nWould you like to play a SAFARI Game?$"

Naranja_Route121_G23_M00_Text_081C3895::
# 180 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Okay.\nPlease play another time!$"

Naranja_Route121_G23_M00_Text_081C38B5::
# 184 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "You don’t have enough money.\nSorry.$"

Naranja_Route121_G23_M00_Text_081C38D9::
# 188 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "That will be ¥500, please.$"

Naranja_Route121_G23_M00_Text_081C38F4::
# 192 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Here are your SAFARI BALLS.$"

Naranja_Route121_G23_M00_Text_081C3910::
# 196 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "{PLAYER} received 30 SAFARI BALLS.$"

Naranja_Route121_G23_M00_Text_081C392D::
# 200 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "We’ll let you know when your game\nis over.\pSo, until then, enjoy yourself, please!\nOff you go on your wild excursion!$"

Naranja_Route121_G23_M00_Text_081C39A3::
# 204 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Excuse me!\nYour PC BOX is full.$"

Naranja_Route121_G23_M00_Text_081C39C3::
# 208 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "Excuse me!\nYou seem to be without a オカキクケ CASE.\pYour SAFARI Game will be much more\nfruitful if you use オカキクケS.\pPlease come back with a オカキクケ CASE.$"

Naranja_Route121_G23_M00_Text_081C3E4B::
# 212 "data/maps/Naranja_Route121_G23_M00/scripts.pory"
	.string "SAFARI ZONE TRAINER TIP!\pThrow オカキクケS at wild POKéMON to make\nthem less likely to flee.$"
