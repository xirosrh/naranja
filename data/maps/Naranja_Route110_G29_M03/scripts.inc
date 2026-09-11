Naranja_Route110_G29_M03_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_Route110_G29_M03_OnLoad
	.byte 0


Naranja_Route110_G29_M03_EventScript_Sub_08161892::
# 9 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	loadword 0, Naranja_Route110_G29_M03_Text_0819C1FF
# 10 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 4
# 11 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M03_EventScript_Sub_0816189C::
# 16 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	message Naranja_Route110_G29_M03_Text_0819C1B8
# 18 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	waitfanfare
# 19 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	waitmessage
# 20 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	loadword 0, Naranja_Route110_G29_M03_Text_0819C1CB
# 21 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M03_OnLoad::
# 27 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_5, 2
# 28 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M03_EventScript_Sub_08161D0A
	end


Naranja_Route110_G29_M03_EventScript_Sub_08161D0A::
# 33 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setmetatile 0xD, 1, 0x20B, 0
	end


Naranja_Route110_G29_M03_EventScript_Sign_1::
# 38 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	lockall
# 39 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_5, 0
# 40 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M03_EventScript_Sub_08161D26
# 41 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M03_EventScript_Sub_08161D26::
# 45 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_5, 1
# 46 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_LASS_LocalId1::
# 50 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_611, LOCALID_NONE, Naranja_Route110_G29_M03_Text_0819CB4F, Naranja_Route110_G29_M03_Text_0819CB93
# 51 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	loadword 0, Naranja_Route110_G29_M03_Text_0819CBAB
# 52 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId2::
# 57 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_332, LOCALID_NONE, Naranja_Route110_G29_M03_Text_0819CBD6, Naranja_Route110_G29_M03_Text_0819CC06
# 58 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	loadword 0, Naranja_Route110_G29_M03_Text_0819CC1B
# 59 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_LASS_LocalId3::
# 64 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE110_612, LOCALID_NONE, Naranja_Route110_G29_M03_Text_0819CC68, Naranja_Route110_G29_M03_Text_0819CC86
# 65 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	loadword 0, Naranja_Route110_G29_M03_Text_0819CCAA
# 66 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 6
	end


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId18::
# 71 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x79
# 72 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 73 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M03_Text_0819C1B8::
# 77 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "{PLAYER} found a scroll.$"

Naranja_Route110_G29_M03_Text_0819C1CB::
# 81 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "{PLAYER} memorized the secret code\nwritten on the scroll.$"

Naranja_Route110_G29_M03_Text_0819C1FF::
# 85 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "A secret code is written on it.$"

Naranja_Route110_G29_M03_Text_0819CB4F::
# 89 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I’ll hack and slash my way to victory\nwith the CUT we just learned!$"

Naranja_Route110_G29_M03_Text_0819CB93::
# 93 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "Why are you so serious?$"

Naranja_Route110_G29_M03_Text_0819CBAB::
# 97 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I never get tired of hacking\nand slashing!$"

Naranja_Route110_G29_M03_Text_0819CBD6::
# 101 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I wandered into this weird house\nby accident...$"

Naranja_Route110_G29_M03_Text_0819CC06::
# 105 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "And now I’ve lost...$"

Naranja_Route110_G29_M03_Text_0819CC1B::
# 109 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I lost my way, I lost a battle, and I’m\neven more lost... I can’t get out...$"

Naranja_Route110_G29_M03_Text_0819CC68::
# 113 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "Just who is the TRICK MASTER?$"

Naranja_Route110_G29_M03_Text_0819CC86::
# 117 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I lost while I was lost in thought!$"

Naranja_Route110_G29_M03_Text_0819CCAA::
# 121 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "You’re strong!\nJust who are you?$"
