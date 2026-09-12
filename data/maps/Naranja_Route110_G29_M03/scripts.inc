Naranja_Route110_G29_M03_MapScripts::
# 5 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Naranja_Route110_G29_M03_OnLoad
	.byte 0


Naranja_Route110_G29_M03_EventScript_Sub_08161892::
# 9 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	msgbox Naranja_Route110_G29_M03_Text_0819C1FF, MSGBOX_DEFAULT
# 10 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M03_EventScript_Sub_0816189C::
# 15 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	message Naranja_Route110_G29_M03_Text_0819C1B8
# 17 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	waitfanfare
# 18 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	waitmessage
# 19 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	msgbox Naranja_Route110_G29_M03_Text_0819C1CB, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	releaseall
	end


Naranja_Route110_G29_M03_OnLoad::
# 25 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_5, 2
# 26 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M03_EventScript_Sub_08161D0A
	end


Naranja_Route110_G29_M03_EventScript_Sub_08161D0A::
# 31 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setmetatile 0xD, 1, 0x20B, 0
	end


Naranja_Route110_G29_M03_EventScript_Sign_1::
# 36 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	lockall
# 37 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE110_EVENT_STATE_5, 0
# 38 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto_if EQUAL, Naranja_Route110_G29_M03_EventScript_Sub_08161D26
# 39 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_08161892
	return


Naranja_Route110_G29_M03_EventScript_Sub_08161D26::
# 43 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setvar VAR_NARANJA_ROUTE110_EVENT_STATE_5, 1
# 44 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	goto Naranja_Route110_G29_M03_EventScript_Sub_0816189C
	return


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_LASS_LocalId1::
# 48 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_611, Naranja_Route110_G29_M03_Text_0819CB4F, Naranja_Route110_G29_M03_Text_0819CB93
# 49 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	msgbox Naranja_Route110_G29_M03_Text_0819CBAB, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId2::
# 54 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_332, Naranja_Route110_G29_M03_Text_0819CBD6, Naranja_Route110_G29_M03_Text_0819CC06
# 55 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	msgbox Naranja_Route110_G29_M03_Text_0819CC1B, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_LASS_LocalId3::
# 60 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE110_612, Naranja_Route110_G29_M03_Text_0819CC68, Naranja_Route110_G29_M03_Text_0819CC86
# 61 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	msgbox Naranja_Route110_G29_M03_Text_0819CCAA, MSGBOX_AUTOCLOSE
	end


Naranja_Route110_G29_M03_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId18::
# 66 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setorcopyvar VAR_0x8000, 0x79
# 67 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 68 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	callstd 1
	end


Naranja_Route110_G29_M03_Text_0819C1B8::
# 72 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "{PLAYER} found a scroll.$"

Naranja_Route110_G29_M03_Text_0819C1CB::
# 76 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "{PLAYER} memorized the secret code\nwritten on the scroll.$"

Naranja_Route110_G29_M03_Text_0819C1FF::
# 80 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "A secret code is written on it.$"

Naranja_Route110_G29_M03_Text_0819CB4F::
# 84 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I’ll hack and slash my way to victory\nwith the CUT we just learned!$"

Naranja_Route110_G29_M03_Text_0819CB93::
# 88 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "Why are you so serious?$"

Naranja_Route110_G29_M03_Text_0819CBAB::
# 92 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I never get tired of hacking\nand slashing!$"

Naranja_Route110_G29_M03_Text_0819CBD6::
# 96 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I wandered into this weird house\nby accident...$"

Naranja_Route110_G29_M03_Text_0819CC06::
# 100 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "And now I’ve lost...$"

Naranja_Route110_G29_M03_Text_0819CC1B::
# 104 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I lost my way, I lost a battle, and I’m\neven more lost... I can’t get out...$"

Naranja_Route110_G29_M03_Text_0819CC68::
# 108 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "Just who is the TRICK MASTER?$"

Naranja_Route110_G29_M03_Text_0819CC86::
# 112 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "I lost while I was lost in thought!$"

Naranja_Route110_G29_M03_Text_0819CCAA::
# 116 "data/maps/Naranja_Route110_G29_M03/scripts.pory"
	.string "You’re strong!\nJust who are you?$"
