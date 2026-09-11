Naranja_Route124_G00_M39_MapScripts::
# 5 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route124_G00_M39_OnTransition
	.byte 0


Naranja_Route124_G00_M39_OnTransition::
# 9 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G00_M05_EventScript_Sub_081A02C1
	end


Naranja_Route124_G00_M39_EventScript_Sign_1::
# 15 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_08171ED1
# 16 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 3
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 21 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE124_159, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0624, Naranja_Route124_G00_M39_Text_081C0675
# 22 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0693
# 23 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId2::
# 28 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE124_160, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C06F7, Naranja_Route124_G00_M39_Text_081C0741
# 29 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0750
# 30 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 35 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE124_449, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C07B4, Naranja_Route124_G00_M39_Text_081C07F9
# 36 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 37 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 38 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G00_M39_EventScript_Sub_08151E4D
# 39 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C080E
# 40 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_Sub_08151E4D::
# 45 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE124_449, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0888, Naranja_Route124_G00_M39_Text_081C08C8
# 46 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C08EA
# 47 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 52 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE124_450, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0936, Naranja_Route124_G00_M39_Text_081C096B
# 53 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0994
# 54 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId5::
# 59 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE124_174, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C09CE, Naranja_Route124_G00_M39_Text_081C0A2F
# 60 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0A52
# 61 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId9::
# 66 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE124_687, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0ABD, Naranja_Route124_G00_M39_Text_081C0B36, Naranja_Route124_G00_M39_Text_081C0BC8
# 67 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 68 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 69 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G00_M39_EventScript_Sub_08151EBD
# 70 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0B72
# 71 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_Sub_08151EBD::
# 76 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_ROUTE124_687, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0D1F, Naranja_Route124_G00_M39_Text_081C0DB5, Naranja_Route124_G00_M39_Text_081C0E5C
# 77 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0E06
# 78 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_TUBER_M_SWIMMING_LocalId10::
# 83 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE124_687, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0C0E, Naranja_Route124_G00_M39_Text_081C0C4F, Naranja_Route124_G00_M39_Text_081C0CE0
# 84 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 85 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 86 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	goto_if EQUAL, Naranja_Route124_G00_M39_EventScript_Sub_08151F03
# 87 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0C7F
# 88 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_Sub_08151F03::
# 93 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_ROUTE124_687, LOCALID_NONE, Naranja_Route124_G00_M39_Text_081C0EA2, Naranja_Route124_G00_M39_Text_081C0EE5, Naranja_Route124_G00_M39_Text_081C0F90
# 94 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	loadword 0, Naranja_Route124_G00_M39_Text_081C0F19
# 95 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 6
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 100 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	setorcopyvar VAR_0x8000, 0x30
# 101 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 102 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 1
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 107 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	setorcopyvar VAR_0x8000, 0x31
# 108 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 109 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 1
	end


Naranja_Route124_G00_M39_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId8::
# 114 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	setorcopyvar VAR_0x8000, 0x32
# 115 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 116 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	callstd 1
	end


Naranja_Route124_G00_M39_Text_08171ED1::
# 120 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "HUNTER’S HOUSE$"

Naranja_Route124_G00_M39_Text_081C0624::
# 124 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Hey, are you lost at sea?\pIf you can beat my POKéMON, I can\nserve as your pilot.$"

Naranja_Route124_G00_M39_Text_081C0675::
# 128 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "I lost my bearings in battle!$"

Naranja_Route124_G00_M39_Text_081C0693::
# 132 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Many people lose their bearings at sea.\pIf you’re that sort, you should refer\nto the POKéNAV’s MAP.$"

Naranja_Route124_G00_M39_Text_081C06F7::
# 136 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Hm! You’re riding a POKéMON instead\nof swimming yourself...\pI am envious!$"

Naranja_Route124_G00_M39_Text_081C0741::
# 140 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Oh!\nI can’t...$"

Naranja_Route124_G00_M39_Text_081C0750::
# 144 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "I’m getting chilled...\nI’ve been in the water too long...\pI wish I could ride a POKéMON like you...$"

Naranja_Route124_G00_M39_Text_081C07B4::
# 148 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "If you just float in the sea like\nthis, POKéMON come around to play.$"

Naranja_Route124_G00_M39_Text_081C07F9::
# 152 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Oh...\nLost at sea...$"

Naranja_Route124_G00_M39_Text_081C080E::
# 156 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "While swimming, I noticed that some\nPOKéMON attack, and some just watch.\pI guess POKéMON have personalities\nof their own.$"

Naranja_Route124_G00_M39_Text_081C0888::
# 160 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "If you just float in the sea like this,\nTRAINERS challenge you!$"

Naranja_Route124_G00_M39_Text_081C08C8::
# 164 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "That’s strange...\nI lost again...$"

Naranja_Route124_G00_M39_Text_081C08EA::
# 168 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "This has nothing to do with anything,\nbut maybe I’ll visit the TRICK HOUSE.$"

Naranja_Route124_G00_M39_Text_081C0936::
# 172 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "I’m growing bored of swimming...\nHow about a battle?$"

Naranja_Route124_G00_M39_Text_081C096B::
# 176 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "I had no idea that you were\nthis strong!$"

Naranja_Route124_G00_M39_Text_081C0994::
# 180 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "All the effort you put in must have\nmade you this strong.$"

Naranja_Route124_G00_M39_Text_081C09CE::
# 184 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Fufufufu... I dive deep underwater\nto go deep under cover.\lPlumbing the depths is where I excel!$"

Naranja_Route124_G00_M39_Text_081C0A2F::
# 188 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "Glub, glub, glub...\nI’m sinking...$"

Naranja_Route124_G00_M39_Text_081C0A52::
# 192 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "I have it on good authority that\nthere’s a DIVE spot around here.\pIt gives me the urge to go deep\nagain...$"

Naranja_Route124_G00_M39_Text_081C0ABD::
# 196 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: Sigh...\pHere I am in the sea, but who’s with me?\nMy little brother!\pLet’s battle so I won’t have to dwell\non that!$"

Naranja_Route124_G00_M39_Text_081C0B36::
# 200 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: SAM! It’s your fault we lost!\nYou’re in for it later!$"

Naranja_Route124_G00_M39_Text_081C0B72::
# 204 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: Sigh...\pIf only it wasn’t my little brother\nnext to me, but a nice boyfriend...$"

Naranja_Route124_G00_M39_Text_081C0BC8::
# 208 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: You’re planning to battle us?\nNot unless you have more POKéMON.$"

Naranja_Route124_G00_M39_Text_081C0C0E::
# 212 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: My big sister is tough at POKéMON!\pDon’t cry when you lose!$"

Naranja_Route124_G00_M39_Text_081C0C4F::
# 216 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: Uh-oh...\nMy big sister will chew me out...$"

Naranja_Route124_G00_M39_Text_081C0C7F::
# 220 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: My big sister is really scary\nwhen she gets angry.\pThat’s why she doesn’t have a\nboyfriend.$"

Naranja_Route124_G00_M39_Text_081C0CE0::
# 224 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: Did you want to battle us?\nBring some more POKéMON, then.$"

Naranja_Route124_G00_M39_Text_081C0D1F::
# 228 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: Sigh...\pHere I am in the sea, but who’s with me?\nMy little brother!\pOh, hi, it’s been a while. Let’s battle\nso I won’t have to dwell on things!$"

Naranja_Route124_G00_M39_Text_081C0DB5::
# 232 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: SAM!\nIt’s your fault we lost again!\pWe’re having a training session later!$"

Naranja_Route124_G00_M39_Text_081C0E06::
# 236 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: Sigh...\pIf I had a nice boyfriend, we’d beat\nanyone with lovely combinations...$"

Naranja_Route124_G00_M39_Text_081C0E5C::
# 240 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "RITA: You’re planning to battle us?\nNot unless you have more POKéMON.$"

Naranja_Route124_G00_M39_Text_081C0EA2::
# 244 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: If we lose, I’ll catch heck.\nI’m going to go totally all out!$"

Naranja_Route124_G00_M39_Text_081C0EE5::
# 248 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: Uh-oh...\nMy big sister will chew me out again.$"

Naranja_Route124_G00_M39_Text_081C0F19::
# 252 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: My big sister is really scary\nwhen she gets angry.\pShe’s going to make me train really\nhard with POKéMON later...$"

Naranja_Route124_G00_M39_Text_081C0F90::
# 256 "data/maps/Naranja_Route124_G00_M39/scripts.pory"
	.string "SAM: Did you want to battle us?\nBring some more POKéMON, then.$"
