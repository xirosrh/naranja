Naranja_ShamoutiIsland_Gym_MapScripts::
# 5 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ShamoutiIsland_Gym_OnTransition
# 6 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_ShamoutiIsland_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_ShamoutiIsland_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, 16384, Naranja_ShamoutiIsland_Gym_OnWarp_1
	.2byte 0


Naranja_ShamoutiIsland_Gym_OnTransition::
# 12 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
	end


Naranja_ShamoutiIsland_Gym_OnWarp_1::
# 17 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
	end


Naranja_ShamoutiIsland_Gym_EventScript_Winona::
# 22 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SHAMOUTI_ISLAND_270, Naranja_ShamoutiIsland_Gym_Text_08185CCB, Naranja_ShamoutiIsland_Gym_Text_08185DBA, Naranja_ShamoutiIsland_Gym_EventScript_AfterBattle_08157F15, NO_MUSIC
# 23 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00AA
# 24 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto_if LESS_THAN, Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157F3E
# 25 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185F98, MSGBOX_DEFAULT
# 26 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_Gym_EventScript_AfterBattle_08157F15::
# 31 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	message Naranja_ShamoutiIsland_Gym_Text_08185E48
# 32 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	call Naranja_ValenciaIsland_Gym_EventScript_Sub_081A02C5
# 34 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185E73, MSGBOX_DEFAULT
# 35 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_04C9
# 36 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 37 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 38 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	call Naranja_ValenciaIsland_Gym_EventScript_Sub_081A01C0
# 39 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157F3E
	return


Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157F3E::
# 43 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	setorcopyvar VAR_0x8000, 0x148
# 44 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 45 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	callstd 0
# 46 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 47 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 48 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185F4A, MSGBOX_DEFAULT
# 49 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	setflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_00AA
# 50 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_Gym_EventScript_Man6::
# 55 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SHAMOUTI_ISLAND_401, Naranja_ShamoutiIsland_Gym_Text_081859B9, Naranja_ShamoutiIsland_Gym_Text_081859EA
# 56 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185A02, MSGBOX_AUTOCLOSE
	end


Naranja_ShamoutiIsland_Gym_EventScript_Man6_2::
# 61 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SHAMOUTI_ISLAND_404, Naranja_ShamoutiIsland_Gym_Text_08185A7F, Naranja_ShamoutiIsland_Gym_Text_08185AEC
# 62 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185B18, MSGBOX_AUTOCLOSE
	end


Naranja_ShamoutiIsland_Gym_EventScript_Camper::
# 67 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SHAMOUTI_ISLAND_654, Naranja_ShamoutiIsland_Gym_Text_08185B8D, Naranja_ShamoutiIsland_Gym_Text_08185BEB
# 68 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185C00, MSGBOX_AUTOCLOSE
	end


Naranja_ShamoutiIsland_Gym_EventScript_Picnicker::
# 73 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_SHAMOUTI_ISLAND_655, Naranja_ShamoutiIsland_Gym_Text_08185C45, Naranja_ShamoutiIsland_Gym_Text_08185C7C
# 74 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185C8C, MSGBOX_AUTOCLOSE
	end


Naranja_ShamoutiIsland_Gym_EventScript_Man2::
# 79 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	lock
# 80 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	faceplayer
# 81 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_04C9
# 82 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157FD3
# 83 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_0818589C, MSGBOX_DEFAULT
# 84 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157FD3::
# 89 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185994, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	release
	end


Naranja_ShamoutiIsland_Gym_EventScript_Sign_1::
# 95 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	lockall
# 96 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 97 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157FFD
# 98 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto Naranja_ShamoutiIsland_Gym_EventScript_Sub_08158007
	return


Naranja_ShamoutiIsland_Gym_EventScript_Sign_2::
# 102 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	lockall
# 103 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	checkflag FLAG_NARANJA_SHAMOUTI_ISLAND_EVENT_COMPLETE_080C
# 104 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto_if EQUAL, Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157FFD
# 105 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	goto Naranja_ShamoutiIsland_Gym_EventScript_Sub_08158007
	return


Naranja_ShamoutiIsland_Gym_EventScript_Sub_08157FFD::
# 109 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185FEE, MSGBOX_DEFAULT
# 110 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	releaseall
	end


Naranja_ShamoutiIsland_Gym_EventScript_Sub_08158007::
# 115 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	msgbox Naranja_ShamoutiIsland_Gym_Text_08185FD5, MSGBOX_DEFAULT
# 116 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	releaseall
	end


Naranja_ShamoutiIsland_Gym_Text_0818589C::
# 120 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "Yo, how’s it going, CHAMPION-\nbound {PLAYER}?\pFORTREE GYM LEADER WINONA is a\nmaster of FLYING-type POKéMON.\pShe’s waiting at the back of this GYM,\nbehind the rotating doors.\pShe’s waiting for new challengers who\nare trying to take wing!\pOkay, go for it!$"

Naranja_ShamoutiIsland_Gym_Text_08185994::
# 124 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "You did it!\nYou’ve achieved liftoff!$"

Naranja_ShamoutiIsland_Gym_Text_081859B9::
# 128 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "Behold the elegant battle style of\nBIRD POKéMON!$"

Naranja_ShamoutiIsland_Gym_Text_081859EA::
# 132 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "You...\nYou’re strong...$"

Naranja_ShamoutiIsland_Gym_Text_08185A02::
# 136 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\nup with unexpected turns of events.\pLet’s see if you have the smarts to\nget to our LEADER?$"

Naranja_ShamoutiIsland_Gym_Text_08185A7F::
# 140 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\nto join this GYM.\pAs a member of the FORTREE GYM,\nI’m not allowed to lose!$"

Naranja_ShamoutiIsland_Gym_Text_08185AEC::
# 144 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "It was too much of a load for me\nto bear...$"

Naranja_ShamoutiIsland_Gym_Text_08185B18::
# 148 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "The world is huge, and there are\ncountless tough TRAINERS.\pI’m going to keep training and make\nmyself even stronger.$"

Naranja_ShamoutiIsland_Gym_Text_08185B8D::
# 152 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "There’s no need for WINONA, our GYM\nLEADER, to deal with you!\pI’m plenty good enough for you!$"

Naranja_ShamoutiIsland_Gym_Text_08185BEB::
# 156 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "WINONA, I...\nI lost!$"

Naranja_ShamoutiIsland_Gym_Text_08185C00::
# 160 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "WINONA is cute and she’s strong.\nShe’s the ultimate LEADER!\pBlush...$"

Naranja_ShamoutiIsland_Gym_Text_08185C45::
# 164 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "WINONA taught me personally!\nYou can’t beat me easily!$"

Naranja_ShamoutiIsland_Gym_Text_08185C7C::
# 168 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "I was beaten...$"

Naranja_ShamoutiIsland_Gym_Text_08185C8C::
# 172 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\nFORTREE can live without fear.$"

Naranja_ShamoutiIsland_Gym_Text_08185CCB::
# 176 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of the\nFORTREE POKéMON GYM.\pI have become one with BIRD POKéMON\nand have soared the skies...\pHowever grueling the battle, we have\ntriumphed with grace...\pWitness the elegant choreography\nof BIRD POKéMON and I!$"

Naranja_ShamoutiIsland_Gym_Text_08185DBA::
# 180 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\ncommand POKéMON with more grace\lthan I...\pIn recognition of your prowess,\nI present to you this GYM BADGE.$"

Naranja_ShamoutiIsland_Gym_Text_08185E48::
# 184 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\nfrom WINONA.$"

Naranja_ShamoutiIsland_Gym_Text_08185E73::
# 188 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\nto LV 70, even those received through\ltrades, will obey your every command.\pYou will also be able to use the\nHM move FLY outside of battle.\pAnd this...\nThis is a gift from me.$"

Naranja_ShamoutiIsland_Gym_Text_08185F4A::
# 192 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\pIts speed...\nNo POKéMON should be able to avoid it.$"

Naranja_ShamoutiIsland_Gym_Text_08185F98::
# 196 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\ndevoted to BIRD POKéMON.$"

Naranja_ShamoutiIsland_Gym_Text_08185FD5::
# 200 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"

Naranja_ShamoutiIsland_Gym_Text_08185FEE::
# 204 "data/maps/Naranja_ShamoutiIsland_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\pWINONA’S CERTIFIED TRAINERS:\n{PLAYER}$"
