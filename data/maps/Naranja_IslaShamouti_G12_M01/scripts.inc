Naranja_IslaShamouti_G12_M01_MapScripts::
# 5 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaShamouti_G12_M01_OnTransition
# 6 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_IslaShamouti_G12_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_IslaShamouti_G12_M01_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	map_script_2 VAR_TEMP_0, 16384, Naranja_IslaShamouti_G12_M01_OnWarp_1
	.2byte 0


Naranja_IslaShamouti_G12_M01_OnTransition::
# 12 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	special RotatingGate_InitPuzzle
	end


Naranja_IslaShamouti_G12_M01_OnWarp_1::
# 17 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
	end


Naranja_IslaShamouti_G12_M01_EventScript_OBJ_EVENT_GFX_WINONA_LocalId1::
# 22 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_NARANJA_ISLA_SHAMOUTI_270, LOCALID_NONE, Naranja_IslaShamouti_G12_M01_Text_08185CCB, Naranja_IslaShamouti_G12_M01_Text_08185DBA, Naranja_IslaShamouti_G12_M01_EventScript_AfterBattle_08157F15
# 23 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00AA
# 24 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157F3E
# 25 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185F98
# 26 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 27 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M01_EventScript_AfterBattle_08157F15::
# 32 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	message Naranja_IslaShamouti_G12_M01_Text_08185E48
# 33 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	waitmessage
# 34 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A02C5
# 35 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185E73
# 36 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 37 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_04C9
# 38 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 39 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	setvar VAR_0x8008, 6
# 40 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	call Naranja_InsideOfTruck_G08_M01_EventScript_Sub_081A01C0
# 41 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157F3E
	return


Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157F3E::
# 45 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	setorcopyvar VAR_0x8000, 0x148
# 46 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 47 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 0
# 48 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 49 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 50 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185F4A
# 51 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00AA
# 53 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 58 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_SHAMOUTI_401, LOCALID_NONE, Naranja_IslaShamouti_G12_M01_Text_081859B9, Naranja_IslaShamouti_G12_M01_Text_081859EA
# 59 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185A02
# 60 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 6
	end


Naranja_IslaShamouti_G12_M01_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId5::
# 65 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_SHAMOUTI_404, LOCALID_NONE, Naranja_IslaShamouti_G12_M01_Text_08185A7F, Naranja_IslaShamouti_G12_M01_Text_08185AEC
# 66 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185B18
# 67 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 6
	end


Naranja_IslaShamouti_G12_M01_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId3::
# 72 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_SHAMOUTI_654, LOCALID_NONE, Naranja_IslaShamouti_G12_M01_Text_08185B8D, Naranja_IslaShamouti_G12_M01_Text_08185BEB
# 73 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185C00
# 74 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 6
	end


Naranja_IslaShamouti_G12_M01_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId4::
# 79 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ISLA_SHAMOUTI_655, LOCALID_NONE, Naranja_IslaShamouti_G12_M01_Text_08185C45, Naranja_IslaShamouti_G12_M01_Text_08185C7C
# 80 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185C8C
# 81 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 6
	end


Naranja_IslaShamouti_G12_M01_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId6::
# 86 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	lock
# 87 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	faceplayer
# 88 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_04C9
# 89 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157FD3
# 90 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_0818589C
# 91 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 92 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157FD3::
# 97 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185994
# 98 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	release
	end


Naranja_IslaShamouti_G12_M01_EventScript_Sign_1::
# 104 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	lockall
# 105 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 106 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157FFD
# 107 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto Naranja_IslaShamouti_G12_M01_EventScript_Sub_08158007
	return


Naranja_IslaShamouti_G12_M01_EventScript_Sign_2::
# 111 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	lockall
# 112 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_080C
# 113 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157FFD
# 114 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	goto Naranja_IslaShamouti_G12_M01_EventScript_Sub_08158007
	return


Naranja_IslaShamouti_G12_M01_EventScript_Sub_08157FFD::
# 118 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185FEE
# 119 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 120 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	releaseall
	end


Naranja_IslaShamouti_G12_M01_EventScript_Sub_08158007::
# 125 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	loadword 0, Naranja_IslaShamouti_G12_M01_Text_08185FD5
# 126 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	callstd 4
# 127 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	releaseall
	end


Naranja_IslaShamouti_G12_M01_Text_0818589C::
# 131 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "Yo, how’s it going, CHAMPION-\nbound {PLAYER}?\pFORTREE GYM LEADER WINONA is a\nmaster of FLYING-type POKéMON.\pShe’s waiting at the back of this GYM,\nbehind the rotating doors.\pShe’s waiting for new challengers who\nare trying to take wing!\pOkay, go for it!$"

Naranja_IslaShamouti_G12_M01_Text_08185994::
# 135 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "You did it!\nYou’ve achieved liftoff!$"

Naranja_IslaShamouti_G12_M01_Text_081859B9::
# 139 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "Behold the elegant battle style of\nBIRD POKéMON!$"

Naranja_IslaShamouti_G12_M01_Text_081859EA::
# 143 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "You...\nYou’re strong...$"

Naranja_IslaShamouti_G12_M01_Text_08185A02::
# 147 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "A TRAINER has to be smart to keep\nup with unexpected turns of events.\pLet’s see if you have the smarts to\nget to our LEADER?$"

Naranja_IslaShamouti_G12_M01_Text_08185A7F::
# 151 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\nto join this GYM.\pAs a member of the FORTREE GYM,\nI’m not allowed to lose!$"

Naranja_IslaShamouti_G12_M01_Text_08185AEC::
# 155 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "It was too much of a load for me\nto bear...$"

Naranja_IslaShamouti_G12_M01_Text_08185B18::
# 159 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "The world is huge, and there are\ncountless tough TRAINERS.\pI’m going to keep training and make\nmyself even stronger.$"

Naranja_IslaShamouti_G12_M01_Text_08185B8D::
# 163 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "There’s no need for WINONA, our GYM\nLEADER, to deal with you!\pI’m plenty good enough for you!$"

Naranja_IslaShamouti_G12_M01_Text_08185BEB::
# 167 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "WINONA, I...\nI lost!$"

Naranja_IslaShamouti_G12_M01_Text_08185C00::
# 171 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "WINONA is cute and she’s strong.\nShe’s the ultimate LEADER!\pBlush...$"

Naranja_IslaShamouti_G12_M01_Text_08185C45::
# 175 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "WINONA taught me personally!\nYou can’t beat me easily!$"

Naranja_IslaShamouti_G12_M01_Text_08185C7C::
# 179 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "I was beaten...$"

Naranja_IslaShamouti_G12_M01_Text_08185C8C::
# 183 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "Thanks to WINONA, the people of\nFORTREE can live without fear.$"

Naranja_IslaShamouti_G12_M01_Text_08185CCB::
# 187 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "I am WINONA. I am the LEADER of the\nFORTREE POKéMON GYM.\pI have become one with BIRD POKéMON\nand have soared the skies...\pHowever grueling the battle, we have\ntriumphed with grace...\pWitness the elegant choreography\nof BIRD POKéMON and I!$"

Naranja_IslaShamouti_G12_M01_Text_08185DBA::
# 191 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "Never before have I seen a TRAINER\ncommand POKéMON with more grace\lthan I...\pIn recognition of your prowess,\nI present to you this GYM BADGE.$"

Naranja_IslaShamouti_G12_M01_Text_08185E48::
# 195 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\nfrom WINONA.$"

Naranja_IslaShamouti_G12_M01_Text_08185E73::
# 199 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\nto LV 70, even those received through\ltrades, will obey your every command.\pYou will also be able to use the\nHM move FLY outside of battle.\pAnd this...\nThis is a gift from me.$"

Naranja_IslaShamouti_G12_M01_Text_08185F4A::
# 203 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "TM40 contains AERIAL ACE.\pIts speed...\nNo POKéMON should be able to avoid it.$"

Naranja_IslaShamouti_G12_M01_Text_08185F98::
# 207 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "Though I fell to you, I will remain\ndevoted to BIRD POKéMON.$"

Naranja_IslaShamouti_G12_M01_Text_08185FD5::
# 211 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"

Naranja_IslaShamouti_G12_M01_Text_08185FEE::
# 215 "data/maps/Naranja_IslaShamouti_G12_M01/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\pWINONA’S CERTIFIED TRAINERS:\n{PLAYER}$"
