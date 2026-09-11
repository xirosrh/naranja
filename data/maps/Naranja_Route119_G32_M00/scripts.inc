Naranja_Route119_G32_M00_MapScripts::
# 5 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route119_G32_M00_OnTransition
	.byte 0


Naranja_Route119_G32_M00_OnTransition::
# 9 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 10 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 0
# 11 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	call_if EQUAL, Naranja_Route119_G32_M00_EventScript_Sub_08163C41
	end


Naranja_Route119_G32_M00_EventScript_Sub_08163C41::
# 16 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_G32_M00_LITTLE_BOY_1, 0, 5
# 17 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE119_G32_M00_LITTLE_BOY_1, 0xA
	return


Naranja_Route119_G32_M00_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId5::
# 22 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	lock
# 23 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	faceplayer
# 24 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	special GetPlayerBigGuyGirlString
# 25 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	compare_var_to_value VAR_NARANJA_ROUTE119_EVENT_STATE_2, 0
# 26 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route119_G32_M00_EventScript_Sub_08163C67
# 27 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819ED22
# 28 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 4
# 29 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	release
	end


Naranja_Route119_G32_M00_EventScript_Sub_08163C67::
# 34 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819ECF4
# 35 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 4
# 36 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	release
	end


Naranja_Route119_G32_M00_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId4::
# 41 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819ED6B
# 42 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 2
	end


Naranja_Route119_G32_M00_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId3::
# 47 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819EE25
# 48 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 2
	end


Naranja_Route119_G32_M00_EventScript_Sign_1::
# 53 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	lockall
# 54 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819EE8B
# 55 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 4
# 56 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	closemessage
# 57 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	call Naranja_Route119_G32_M00_EventScript_Sub_081A02CA
# 58 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	releaseall
	end


Naranja_Route119_G32_M00_EventScript_OBJECT_1_LocalId1::
# 63 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_582, LOCALID_NONE, Naranja_Route119_G32_M00_Text_0819EB8A, Naranja_Route119_G32_M00_Text_0819EBEE
# 64 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819EC0E
# 65 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 6
	end


Naranja_Route119_G32_M00_EventScript_OBJECT_2_LocalId2::
# 70 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE119_591, LOCALID_NONE, Naranja_Route119_G32_M00_Text_0819EC6B, Naranja_Route119_G32_M00_Text_0819EC89
# 71 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	loadword 0, Naranja_Route119_G32_M00_Text_0819EC97
# 72 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	callstd 6
	end


Naranja_Route119_G32_M00_EventScript_Sub_081A02CA::
# 77 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	fadescreen 1
# 78 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	playfanfare MUS_HEAL
# 79 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	waitfanfare
# 80 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	special HealPlayerParty
# 81 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	fadescreen 0
	return


Naranja_Route119_G32_M00_Text_0819EB8A::
# 85 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "The BOSS got interested in the\nresearch they have going here, so he\lsent us out.\pYou quit meddling!$"

Naranja_Route119_G32_M00_Text_0819EBEE::
# 89 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Blast it...\nBlasted by a kid...$"

Naranja_Route119_G32_M00_Text_0819EC0E::
# 93 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Our BOSS knows everything.\pBut I’m just a GRUNT. What would I know\nabout what he’s thinking?$"

Naranja_Route119_G32_M00_Text_0819EC6B::
# 97 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Huh?\nWhat’s a kid doing here?$"

Naranja_Route119_G32_M00_Text_0819EC89::
# 101 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Huh?\nI lost?!$"

Naranja_Route119_G32_M00_Text_0819EC97::
# 105 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Oh, no...\nI’ll catch an earful for losing to a kid...\pI should just take a nap in the bed...$"

Naranja_Route119_G32_M00_Text_0819ECF4::
# 109 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "While I was sleeping, everyone went\nupstairs!$"

Naranja_Route119_G32_M00_Text_0819ED22::
# 113 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Wow, you’re really strong!\pI wish I could be a POKéMON TRAINER\nlike you!$"

Naranja_Route119_G32_M00_Text_0819ED6B::
# 117 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "The PROFESSOR loves rain.\nThat’s a fact.\pBut if it keeps raining, people will be in\ntrouble. That’s another fact.\pAnd thus, the PROFESSOR is studying\nif the rain can be put to good use.$"

Naranja_Route119_G32_M00_Text_0819EE25::
# 121 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "Hello!\nWe’ve been saved by your actions!\pWhat I don’t understand is what on\nearth the {AQUA}S were up to.$"

Naranja_Route119_G32_M00_Text_0819EE8B::
# 125 "data/maps/Naranja_Route119_G32_M00/scripts.pory"
	.string "There’s a bed...\nLet’s take a rest.$"
