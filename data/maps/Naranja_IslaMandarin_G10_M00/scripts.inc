Naranja_IslaMandarin_G10_M00_MapScripts::
# 5 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_IslaMandarin_G10_M00_OnLoad
	.byte 0


Naranja_IslaMandarin_G10_M00_OnLoad::
# 9 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_04B8
# 10 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081565A7
# 11 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ISLA_MANDARIN_STORY_STATE
# 12 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 13 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156491
# 14 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 15 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815657D
# 16 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 17 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815658B
# 18 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 19 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156599
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156491::
# 24 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0063
# 25 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815649B
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815649B::
# 30 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 4, 7, 0x230, 0
# 31 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 4, 8, 0x238, 0
# 32 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 5, 7, 0x231, 0
# 33 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 5, 8, 0x239, 0
# 34 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 3, 8, 0x242, 1
# 35 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 3, 9, 0x21A, 0
# 36 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 3, 0xA, 0x251, 0
# 37 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 1, 0xA, 0x222, 0
# 38 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 1, 0xB, 0x22A, 1
# 39 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 2, 0xA, 0x223, 0
# 40 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 2, 0xB, 0x22B, 1
# 41 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 4, 0xA, 0x222, 0
# 42 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 4, 0xB, 0x22A, 1
# 43 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 5, 0xA, 0x223, 0
# 44 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 5, 0xB, 0x22B, 1
# 45 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 6, 0xB, 0x242, 1
# 46 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 6, 0xC, 0x21A, 0
# 47 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 6, 0xD, 0x251, 0
# 48 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 3, 0xB, 0x241, 1
# 49 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 3, 0xC, 0x249, 1
# 50 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 3, 0xD, 0x250, 1
# 51 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 4, 0xD, 0x230, 0
# 52 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 4, 0xE, 0x238, 0
# 53 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 5, 0xD, 0x231, 0
# 54 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setmetatile 5, 0xE, 0x239, 0
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815657D::
# 59 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 60 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special MauvilleGymPressSwitch
# 61 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156491
	return


Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815658B::
# 65 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 66 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special MauvilleGymPressSwitch
# 67 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156491
	return


Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156599::
# 71 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_0x8004, 2
# 72 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special MauvilleGymPressSwitch
# 73 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156491
	return


Naranja_IslaMandarin_G10_M00_EventScript_Sub_081565A7::
# 77 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special MauvilleGymDeactivatePuzzle
	end


Naranja_IslaMandarin_G10_M00_EventScript_Trigger_1::
# 82 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	lockall
# 83 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_04B8
# 84 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA
# 85 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 1
# 86 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA
# 87 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 1
# 88 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_0x8004, 0
# 89 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566BA
	return


Naranja_IslaMandarin_G10_M00_EventScript_Trigger_2::
# 93 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	lockall
# 94 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_04B8
# 95 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA
# 96 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 2
# 97 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA
# 98 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 2
# 99 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_0x8004, 1
# 100 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566BA
	return


Naranja_IslaMandarin_G10_M00_EventScript_Trigger_3::
# 104 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	lockall
# 105 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_04B8
# 106 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA
# 107 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 3
# 108 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA
# 109 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_NARANJA_ISLA_MANDARIN_STORY_STATE, 3
# 110 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setvar VAR_0x8004, 2
# 111 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566BA
	return


Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566BA::
# 115 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 116 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special MauvilleGymPressSwitch
# 117 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	playse SE_UNLOCK
# 119 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0063
# 120 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566E1
# 121 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0063
# 122 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DC
# 123 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DA::
# 128 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566DC::
# 133 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	setflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0063
# 134 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_081566E1::
# 139 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	clearflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_0063
# 140 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M00_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId5::
# 145 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MANDARIN_191, Naranja_IslaMandarin_G10_M00_Text_08180956, Naranja_IslaMandarin_G10_M00_Text_08180997
# 146 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_081809D1, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMandarin_G10_M00_EventScript_OBJ_EVENT_GFX_MAN_6_LocalId2::
# 151 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MANDARIN_194, Naranja_IslaMandarin_G10_M00_Text_08180A05, Naranja_IslaMandarin_G10_M00_Text_08180A42
# 152 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_08180A5E, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMandarin_G10_M00_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId4::
# 157 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MANDARIN_323, Naranja_IslaMandarin_G10_M00_Text_08180AE0, Naranja_IslaMandarin_G10_M00_Text_08180B06
# 158 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_08180B1D, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMandarin_G10_M00_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId3::
# 163 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ISLA_MANDARIN_649, Naranja_IslaMandarin_G10_M00_Text_08180B5A, Naranja_IslaMandarin_G10_M00_Text_08180B93
# 164 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_08180BAE, MSGBOX_AUTOCLOSE
	end


Naranja_IslaMandarin_G10_M00_EventScript_OBJ_EVENT_GFX_MAN_2_LocalId6::
# 169 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	lock
# 170 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	faceplayer
# 171 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_MANDARIN_EVENT_COMPLETE_04B8
# 172 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156757
# 173 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_08180815, MSGBOX_DEFAULT
# 174 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156757::
# 179 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_0818091D, MSGBOX_DEFAULT
# 180 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	release
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sign_1::
# 185 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	lockall
# 186 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_CORAL_EYE_BADGE
# 187 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156781
# 188 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815678B
	return


Naranja_IslaMandarin_G10_M00_EventScript_Sign_2::
# 192 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	lockall
# 193 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	checkflag FLAG_NARANJA_RECEIVED_CORAL_EYE_BADGE
# 194 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156781
# 195 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	goto Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815678B
	return


Naranja_IslaMandarin_G10_M00_EventScript_Sub_08156781::
# 199 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_08180F64, MSGBOX_DEFAULT
# 200 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M00_EventScript_Sub_0815678B::
# 205 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	msgbox Naranja_IslaMandarin_G10_M00_Text_08180F4A, MSGBOX_DEFAULT
# 206 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	releaseall
	end


Naranja_IslaMandarin_G10_M00_Text_08180815::
# 210 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "Hey, how’s it going, the CHAMPION-\nbound {PLAYER}?\pWATTSON, the LEADER of MAUVILLE\nGYM, uses ELECTRIC-type POKéMON.\pIf you challenge him with WATER-type\nPOKéMON, he’ll zap them! Bzzt!\pAnd, he’s put in switch-controlled doors\nall over his GYM! Eccentric!\pHey, go for it!$"

Naranja_IslaMandarin_G10_M00_Text_0818091D::
# 214 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "Whoa, you’re electrifying!\nYou’ve powered the door open!$"

Naranja_IslaMandarin_G10_M00_Text_08180956::
# 218 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "My electric soul, it’ll shatter your\ndreams whole, whoah-yeahah!$"

Naranja_IslaMandarin_G10_M00_Text_08180997::
# 222 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "That was plugged in, amped up,\nover-driven electric, man!$"

Naranja_IslaMandarin_G10_M00_Text_081809D1::
# 226 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "POKéMON and rock, it’s all about heart,\nwhoah yeah!$"

Naranja_IslaMandarin_G10_M00_Text_08180A05::
# 230 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "I trained under WATTSON!\nThere ain’t no way I’d lose easily!$"

Naranja_IslaMandarin_G10_M00_Text_08180A42::
# 234 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "Unplugged and turned off...$"

Naranja_IslaMandarin_G10_M00_Text_08180A5E::
# 238 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\naround for a long, long time.\pHe was battling even before your\ndaddy was born, that tough coot.$"

Naranja_IslaMandarin_G10_M00_Text_08180AE0::
# 242 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "This GYM’s got puzzles!\nIsn’t it fun?$"

Naranja_IslaMandarin_G10_M00_Text_08180B06::
# 246 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "It’s no fun to lose...$"

Naranja_IslaMandarin_G10_M00_Text_08180B1D::
# 250 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "WATTSON says he likes setting up\nlittle traps with switches.$"

Naranja_IslaMandarin_G10_M00_Text_08180B5A::
# 254 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "With my charm and my POKéMON’s moves,\nyou’ll be shocked!$"

Naranja_IslaMandarin_G10_M00_Text_08180B93::
# 258 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "I’m shocked by your power!$"

Naranja_IslaMandarin_G10_M00_Text_08180BAE::
# 262 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "I’ve heard that MAUVILLE was founded\nby WATTSON.\pHe was a TRAINER long before we\nbecame TRAINERS.\lHe must know all sorts of things!$"

Naranja_IslaMandarin_G10_M00_Text_08180F4A::
# 266 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"

Naranja_IslaMandarin_G10_M00_Text_08180F64::
# 270 "data/maps/Naranja_IslaMandarin_G10_M00/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\pWATTSON’S CERTIFIED TRAINERS:\n{PLAYER}$"
