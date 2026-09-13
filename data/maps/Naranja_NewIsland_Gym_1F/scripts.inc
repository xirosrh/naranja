Naranja_NewIsland_Gym_1F_MapScripts::
# 11 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_NewIsland_Gym_1F_OnResume
# 12 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_NewIsland_Gym_1F_OnLoad
# 13 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_NewIsland_Gym_1F_OnTransition
# 5 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_NewIsland_Gym_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_NewIsland_Gym_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, Naranja_NewIsland_Gym_1F_OnFrame_1
# 7 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, Naranja_NewIsland_Gym_1F_OnFrame_2
# 8 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 69, Naranja_NewIsland_Gym_1F_OnFrame_3
# 9 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, Naranja_NewIsland_Gym_1F_OnFrame_4
	.2byte 0


Naranja_NewIsland_Gym_1F_OnTransition::
# 17 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
	end


Naranja_NewIsland_Gym_1F_OnResume::
# 22 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setstepcallback 4
	end


Naranja_NewIsland_Gym_1F_OnLoad::
# 27 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	call Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF2E
# 28 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
	end


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF2E::
# 33 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	compare_var_to_value VAR_ICE_STEP_COUNT, 8
# 34 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF85
# 35 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	compare_var_to_value VAR_ICE_STEP_COUNT, 0x1C
# 36 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF73
# 37 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	compare_var_to_value VAR_ICE_STEP_COUNT, 0x45
# 38 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF61
# 39 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setmetatile 8, 4, 0x207, 0
# 40 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setmetatile 8, 5, 0x207, 0
# 41 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF61
	return


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF61::
# 45 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setmetatile 8, 0xA, 0x207, 0
# 46 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setmetatile 8, 0xB, 0x207, 0
# 47 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF73
	return


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF73::
# 51 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setmetatile 8, 0xF, 0x207, 0
# 52 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setmetatile 8, 0x10, 0x207, 0
# 53 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF85
	return


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF85::
	return


Naranja_NewIsland_Gym_1F_OnFrame_1::
# 61 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 62 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	delay 0x28
# 63 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 64 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	call Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF2E
# 65 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	special DrawWholeMapView
	end


Naranja_NewIsland_Gym_1F_OnFrame_2::
# 70 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 71 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	delay 0x28
# 72 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 73 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	call Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF2E
# 74 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	special DrawWholeMapView
	end


Naranja_NewIsland_Gym_1F_OnFrame_3::
# 79 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 80 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	delay 0x28
# 81 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 82 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	call Naranja_NewIsland_Gym_1F_EventScript_Sub_0815AF2E
# 83 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	special DrawWholeMapView
	end


Naranja_NewIsland_Gym_1F_OnFrame_4::
# 88 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	lockall
# 89 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	delay 0x14
# 90 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_NewIsland_Gym_1F_Movement_0815AFFD
# 91 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	waitmovement LOCALID_NONE
# 92 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	playse SE_FALL
# 93 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	delay 0x3C
# 94 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	warphole MAP_NARANJA_NEW_ISLAND_GYM_B1F
# 95 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	waitstate
	end


Naranja_NewIsland_Gym_1F_EventScript_Wallace::
# 100 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_NEW_ISLAND_272, Naranja_NewIsland_Gym_1F_Text_0818F0CA, Naranja_NewIsland_Gym_1F_Text_0818F282, Naranja_NewIsland_Gym_1F_EventScript_AfterBattle_0815B02D, NO_MUSIC
# 101 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_00AC
# 102 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B056
# 103 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 104 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if LESS_THAN, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B07A
# 105 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818F4D7, MSGBOX_DEFAULT
# 106 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	release
	end


Naranja_NewIsland_Gym_1F_EventScript_AfterBattle_0815B02D::
# 111 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	message Naranja_NewIsland_Gym_1F_Text_0818F342
# 112 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	waitmessage
# 113 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	call Naranja_ValenciaIsland_Gym_EventScript_Sub_081A02C5
# 114 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818F36B, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_04D4
# 116 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_080E
# 117 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 118 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	call Naranja_ValenciaIsland_Gym_EventScript_Sub_081A01C0
# 119 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B056
	return


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B056::
# 123 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x123
# 124 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 125 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	callstd 0
# 126 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 127 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 128 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818F466, MSGBOX_DEFAULT
# 129 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	setflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_00AC
# 130 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	release
	end


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B07A::
# 135 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818F5B4, MSGBOX_DEFAULT
# 136 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	release
	end


Naranja_NewIsland_Gym_1F_EventScript_Man2::
# 141 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	lock
# 142 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	faceplayer
# 143 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_04D4
# 144 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B099
# 145 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818E8A5, MSGBOX_DEFAULT
# 146 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	release
	end


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B099::
# 151 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818E9C9, MSGBOX_DEFAULT
# 152 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	release
	end


Naranja_NewIsland_Gym_1F_EventScript_Sign_1::
# 157 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	lockall
# 158 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_080E
# 159 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B0C3
# 160 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B0CD
	return


Naranja_NewIsland_Gym_1F_EventScript_Sign_2::
# 164 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	lockall
# 165 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	checkflag FLAG_NARANJA_NEW_ISLAND_EVENT_COMPLETE_080E
# 166 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto_if EQUAL, Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B0C3
# 167 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	goto Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B0CD
	return


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B0C3::
# 171 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818F665, MSGBOX_DEFAULT
# 172 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	releaseall
	end


Naranja_NewIsland_Gym_1F_EventScript_Sub_0815B0CD::
# 177 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	msgbox Naranja_NewIsland_Gym_1F_Text_0818F649, MSGBOX_DEFAULT
# 178 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	releaseall
	end


# 182 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
Naranja_NewIsland_Gym_1F_Movement_0815AFFD:
# 183 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	set_invisible
	step_end

Naranja_NewIsland_Gym_1F_Text_0818E8A5::
# 186 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "Yo! How’s it going, CHAMPION-\nbound {PLAYER}?\pSOOTOPOLIS’s GYM LEADER WALLACE is\na master of WATER-type POKéMON.\pAnd, to get to WALLACE, an icy floor\nwill hamper your progress...\pListen, I’m sorry, but that’s all the\nadvice that I have for you.\pThe rest of the way, you have to\ngo for it yourself!$"

Naranja_NewIsland_Gym_1F_Text_0818E9C9::
# 190 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "Yow! You’ve beaten even WALLACE, who\nwas supposedly the best in all HOENN!\pOkay! Check out your TRAINER’s CARD.\pIf you’ve gotten all the BADGES, you’re\nset for the POKéMON LEAGUE challenge!$"

Naranja_NewIsland_Gym_1F_Text_0818F0CA::
# 194 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "Allow me to formally introduce\nmyself.\pI am WALLACE.\nThe GYM LEADER of SOOTOPOLIS.\pThere’s something about you...\nA difference in your demeanor.\pI think I sense that in you.\pWhat happened inside the CAVE OF\nORIGIN, and what you did, I will likely\llearn through our upcoming battle.\pNow, show me. Show me the power you\nwield with your POKéMON.\pAnd I, in turn, shall present you with\na performance of illusions in water\lby me and my POKéMON!$"

Naranja_NewIsland_Gym_1F_Text_0818F282::
# 198 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "Bravo.\pI realize now your authenticity and\nmagnificence as a POKéMON TRAINER.\pI find much joy in having met you and\nyour POKéMON.\pYou have proven yourself worthy of\nthe RAIN BADGE. Accept it.$"

Naranja_NewIsland_Gym_1F_Text_0818F342::
# 202 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\nfrom WALLACE.$"

Naranja_NewIsland_Gym_1F_Text_0818F36B::
# 206 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "Having that BADGE assures you the\nfull obedience of all your POKéMON to\levery command you make.\pThe BADGE also allows the use of the\nHM move WATERFALL to scale walls\lof cascading water.\pAnd, so that you never forget the\nbattle we shared, take this...$"

Naranja_NewIsland_Gym_1F_Text_0818F466::
# 210 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "The TM I handed you contains\nWATER PULSE.\pIn use, it will occasionally confuse\nthe target with ultrasonic waves.$"

Naranja_NewIsland_Gym_1F_Text_0818F4D7::
# 214 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "TRAINERS who have gathered all the\nGYM BADGES of HOENN should make way\lfor the ultimate destination.\pThe POKéMON LEAGUE.\pTravel to the easternmost reaches\nof HOENN, to the island EVER GRANDE.\lThe POKéMON LEAGUE is there.$"

Naranja_NewIsland_Gym_1F_Text_0818F5B4::
# 218 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "There remains but one BADGE to\nobtain in HOENN.\pIf you wish to challenge the POKéMON\nLEAGUE, you must obtain the last\lBADGE from the GYM in FORTREE.$"

Naranja_NewIsland_Gym_1F_Text_0818F649::
# 222 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"

Naranja_NewIsland_Gym_1F_Text_0818F665::
# 226 "data/maps/Naranja_NewIsland_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\pWALLACE’S CERTIFIED TRAINERS:\n{PLAYER}$"
