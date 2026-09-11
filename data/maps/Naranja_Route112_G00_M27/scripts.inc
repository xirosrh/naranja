Naranja_Route112_G00_M27_MapScripts::
# 5 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route112_G00_M27_OnTransition
	.byte 0


Naranja_Route112_G00_M27_OnTransition::
# 9 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
# 10 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	setvar VAR_NARANJA_ROUTE112_EVENT_STATE_2, 0
	end


Naranja_Route112_G00_M27_EventScript_OBJECT_1_LocalId1::
# 15 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_0816FDF0, MSGBOX_NPC
	end


Naranja_Route112_G00_M27_EventScript_OBJECT_6_LocalId6::
# 20 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_0816FE3E, MSGBOX_NPC
	end


Naranja_Route112_G00_M27_EventScript_Sign_2::
# 25 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_0816FEED, MSGBOX_SIGN
	end


Naranja_Route112_G00_M27_EventScript_Sign_1::
# 30 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_0816FF19, MSGBOX_SIGN
	end


Naranja_Route112_G00_M27_EventScript_Sign_3::
# 35 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_0816FF64, MSGBOX_SIGN
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_HIKER_LocalId11::
# 40 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_0816FE7A, MSGBOX_NPC
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_HIKER_LocalId2::
# 45 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_626, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB619, Naranja_Route112_G00_M27_Text_081BB655
# 46 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_081BB667, MSGBOX_AUTOCLOSE
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_HIKER_LocalId5::
# 51 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_627, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB6A0, Naranja_Route112_G00_M27_Text_081BB707
# 52 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 54 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	goto_if EQUAL, Naranja_Route112_G00_M27_EventScript_Sub_08150587
# 55 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_081BB721, MSGBOX_AUTOCLOSE
	end


Naranja_Route112_G00_M27_EventScript_Sub_08150587::
# 60 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE112_627, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB7C7, Naranja_Route112_G00_M27_Text_081BB801
# 61 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_081BB819, MSGBOX_AUTOCLOSE
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId3::
# 66 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_213, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB893, Naranja_Route112_G00_M27_Text_081BB8B6
# 67 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_081BB8BE, MSGBOX_AUTOCLOSE
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId4::
# 72 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_471, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB8F0, Naranja_Route112_G00_M27_Text_081BB942
# 73 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	msgbox Naranja_Route112_G00_M27_Text_081BB958, MSGBOX_AUTOCLOSE
	end


Naranja_Route112_G00_M27_Text_0816FDF0::
# 77 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Grumble...\pWhat happened to the others who went\nto FALLARBOR? They’re late...$"

Naranja_Route112_G00_M27_Text_0816FE3E::
# 81 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Grumble...\pI’d like to ride the CABLE CAR to the\ntop, too..$"

Naranja_Route112_G00_M27_Text_0816FE7A::
# 85 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Eh, I’d like to get to MAUVILLE, but if\nI went down these ledges, it’d be no\leasy matter to get back to LAVARIDGE.$"

Naranja_Route112_G00_M27_Text_0816FEED::
# 89 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n“A short walk ル way!”$"

Naranja_Route112_G00_M27_Text_0816FF19::
# 93 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "MT. CHIMNEY\p“For LAVARIDGE TOWN or the summit,\nplease take the CABLE CAR.”$"

Naranja_Route112_G00_M27_Text_0816FF64::
# 97 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "ROUTE 112\nロ LAVARIDGE TOWN$"

Naranja_Route112_G00_M27_Text_081BB619::
# 101 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Hahahaha!\nHow about we have a battle?\lYou and me!\lHahahaha!$"

Naranja_Route112_G00_M27_Text_081BB655::
# 105 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I lost!\nHahahaha!$"

Naranja_Route112_G00_M27_Text_081BB667::
# 109 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Hahahahaha! Something flew up my nose!\nHahahaha-hatchoo!$"

Naranja_Route112_G00_M27_Text_081BB6A0::
# 113 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "My legs are solid from pounding up\nand down the mountains.\pThey’re not going to buckle easily,\nfriend!$"

Naranja_Route112_G00_M27_Text_081BB707::
# 117 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Ouch! My legs cramped up!$"

Naranja_Route112_G00_M27_Text_081BB721::
# 121 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Try hiking, and I mean really\npounding, on these mountain trails\lwith a heavy pack weighing dozens of\lpounds.\pThat, my friend, will get your body\ninto serious shape.$"

Naranja_Route112_G00_M27_Text_081BB7C7::
# 125 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I’ve been keeping fit by hiking.\nPower, I have in spades!$"

Naranja_Route112_G00_M27_Text_081BB801::
# 129 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I got trumped in power?$"

Naranja_Route112_G00_M27_Text_081BB819::
# 133 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I hear there are some seriously tough\nTRAINERS on top of MT. CHIMNEY.\pI intend to get up there and give them\na challenge!$"

Naranja_Route112_G00_M27_Text_081BB893::
# 137 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I’m strong.\nI won’t cry if I lose.$"

Naranja_Route112_G00_M27_Text_081BB8B6::
# 141 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Waaaah!$"

Naranja_Route112_G00_M27_Text_081BB8BE::
# 145 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I’m not crying because I miss my mommy!\nSnivel...$"

Naranja_Route112_G00_M27_Text_081BB8F0::
# 149 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "When you’re out on a picnic, why, you\nsimply have to sing!\lCome on, sing with me!$"

Naranja_Route112_G00_M27_Text_081BB942::
# 153 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Oh, you’re so strong!$"

Naranja_Route112_G00_M27_Text_081BB958::
# 157 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "It doesn’t matter if you’re good or bad\nat singing or POKéMON.\pIf you have the most fun, you win!$"
