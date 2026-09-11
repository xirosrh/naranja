Naranja_IslaKumquat_G13_M00_MapScripts::
	.byte 0


Naranja_IslaKumquat_G13_M00_EventScript_OBJ_EVENT_GFX_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	lockall
# 9 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 10 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M00_EventScript_Sub_08158326
# 11 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MELLSWEET_EVENT_COMPLETE_080D
# 12 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M00_EventScript_Sub_081582FF
# 13 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186B71, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 15 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 16 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186C2B, MSGBOX_DEFAULT
# 17 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	closemessage
# 18 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 19 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 20 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M00_EventScript_Sub_081582FF::
# 25 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186CCE, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 27 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186D7F, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	closemessage
# 30 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 31 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 32 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M00_EventScript_Sub_08158326::
# 37 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186E57, MSGBOX_DEFAULT
# 38 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_IslaKumquat_G00_M05_Movement_081A0839
# 39 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186F09, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	closemessage
# 42 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 43 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 44 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M00_EventScript_Trigger_1::
# 49 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	lockall
# 50 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 52 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 53 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 54 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 55 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 56 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 57 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M00_Text_08186CA6, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	closemessage
# 59 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M00_Movement_08158395
# 60 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_IslaKumquat_G13_M00_Movement_0815839A
# 61 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 62 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M00_MAN_1_1, Naranja_IslaKumquat_G13_M00_Movement_0815839C
# 63 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	waitmovement LOCALID_NONE
# 64 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	release
	end


# 68 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
Naranja_IslaKumquat_G13_M00_Movement_08158395:
# 69 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	face_right
# 70 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	lock_facing_direction
# 71 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	walk_left
# 72 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	unlock_facing_direction
	step_end

# 75 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
Naranja_IslaKumquat_G13_M00_Movement_0815839A:
# 76 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
Naranja_IslaKumquat_G13_M00_Movement_0815839C:
# 80 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	face_down
# 81 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	walk_down
# 82 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	face_up
	step_end

Naranja_IslaKumquat_G13_M00_Text_08186B71::
# 85 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Hm, so they doubled the guests by\nusing POKéMON as attractions?\pHm, well, maybe I should make a cute\nPOKéMON our inn’s mascot.\pI wonder if that will attract more\nguests to stay with us?$"

Naranja_IslaKumquat_G13_M00_Text_08186C2B::
# 89 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Oh, sorry, sorry!\nI was too involved in watching TV!\pSince that TEAM {AQUA} came to town,\nthe tourists have been staying away.$"

Naranja_IslaKumquat_G13_M00_Text_08186CA6::
# 93 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Hey, down in front!\nI can’t see the TV!$"

Naranja_IslaKumquat_G13_M00_Text_08186CCE::
# 97 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Amazing! You’re telling me a POKéMON\nfound someone’s lost item?\pThat’s something. If we had some smart\nPOKéMON like that...\pWe could recover anything that our\nguests mislaid...$"

Naranja_IslaKumquat_G13_M00_Text_08186D7F::
# 101 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Oh, sorry, sorry!\nI was too involved in watching TV!\pI heard that someone busted the\nTEAM {AQUA} HIDEOUT.\pThanks to that, we just booked a\nreservation from a big group.\pIt was a company called... Uh...\nGAME something...$"

Naranja_IslaKumquat_G13_M00_Text_08186E57::
# 105 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Amazing! A house-sitting POKéMON\ncaught a burglar?\pThat’s something. If we had a tough\nPOKéMON as a security guard...\pWe would be able to provide our guests\nwith greater safety.$"

Naranja_IslaKumquat_G13_M00_Text_08186F09::
# 109 "data/maps/Naranja_IslaKumquat_G13_M00/scripts.pory"
	.string "Oh, sorry, sorry!\nI was too involved in watching TV.\pOh, yes. A big group of guests arrived\na little while ago.\pThey booked in as GAME FREAK, so I\nguess they must make games.\pUh-oh, I’d better get working on\ntheir dinner!$"
