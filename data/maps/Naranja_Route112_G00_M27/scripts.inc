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
	loadword 0, Naranja_Route112_G00_M27_Text_0816FDF0
# 16 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 2
	end


Naranja_Route112_G00_M27_EventScript_OBJECT_6_LocalId6::
# 21 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_0816FE3E
# 22 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 2
	end


Naranja_Route112_G00_M27_EventScript_Sign_2::
# 27 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_0816FEED
# 28 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 3
	end


Naranja_Route112_G00_M27_EventScript_Sign_1::
# 33 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_0816FF19
# 34 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 3
	end


Naranja_Route112_G00_M27_EventScript_Sign_3::
# 39 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_0816FF64
# 40 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 3
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_HIKER_LocalId11::
# 45 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_0816FE7A
# 46 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 2
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_HIKER_LocalId2::
# 51 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_626, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB619, Naranja_Route112_G00_M27_Text_081BB655
# 52 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_081BB667
# 53 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 6
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_HIKER_LocalId5::
# 58 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_627, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB6A0, Naranja_Route112_G00_M27_Text_081BB707
# 59 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 60 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	goto_if EQUAL, Naranja_Route112_G00_M27_EventScript_Sub_08150587
# 62 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_081BB721
# 63 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 6
	end


Naranja_Route112_G00_M27_EventScript_Sub_08150587::
# 68 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE112_627, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB7C7, Naranja_Route112_G00_M27_Text_081BB801
# 69 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_081BB819
# 70 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 6
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_CAMPER_LocalId3::
# 75 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_213, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB893, Naranja_Route112_G00_M27_Text_081BB8B6
# 76 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_081BB8BE
# 77 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 6
	end


Naranja_Route112_G00_M27_EventScript_OBJ_EVENT_GFX_PICNICKER_LocalId4::
# 82 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE112_471, LOCALID_NONE, Naranja_Route112_G00_M27_Text_081BB8F0, Naranja_Route112_G00_M27_Text_081BB942
# 83 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	loadword 0, Naranja_Route112_G00_M27_Text_081BB958
# 84 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	callstd 6
	end


Naranja_Route112_G00_M27_Text_0816FDF0::
# 88 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Grumble...\pWhat happened to the others who went\nto FALLARBOR? They’re late...$"

Naranja_Route112_G00_M27_Text_0816FE3E::
# 92 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Grumble...\pI’d like to ride the CABLE CAR to the\ntop, too..$"

Naranja_Route112_G00_M27_Text_0816FE7A::
# 96 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Eh, I’d like to get to MAUVILLE, but if\nI went down these ledges, it’d be no\leasy matter to get back to LAVARIDGE.$"

Naranja_Route112_G00_M27_Text_0816FEED::
# 100 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n“A short walk ル way!”$"

Naranja_Route112_G00_M27_Text_0816FF19::
# 104 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "MT. CHIMNEY\p“For LAVARIDGE TOWN or the summit,\nplease take the CABLE CAR.”$"

Naranja_Route112_G00_M27_Text_0816FF64::
# 108 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "ROUTE 112\nロ LAVARIDGE TOWN$"

Naranja_Route112_G00_M27_Text_081BB619::
# 112 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Hahahaha!\nHow about we have a battle?\lYou and me!\lHahahaha!$"

Naranja_Route112_G00_M27_Text_081BB655::
# 116 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I lost!\nHahahaha!$"

Naranja_Route112_G00_M27_Text_081BB667::
# 120 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Hahahahaha! Something flew up my nose!\nHahahaha-hatchoo!$"

Naranja_Route112_G00_M27_Text_081BB6A0::
# 124 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "My legs are solid from pounding up\nand down the mountains.\pThey’re not going to buckle easily,\nfriend!$"

Naranja_Route112_G00_M27_Text_081BB707::
# 128 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Ouch! My legs cramped up!$"

Naranja_Route112_G00_M27_Text_081BB721::
# 132 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Try hiking, and I mean really\npounding, on these mountain trails\lwith a heavy pack weighing dozens of\lpounds.\pThat, my friend, will get your body\ninto serious shape.$"

Naranja_Route112_G00_M27_Text_081BB7C7::
# 136 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I’ve been keeping fit by hiking.\nPower, I have in spades!$"

Naranja_Route112_G00_M27_Text_081BB801::
# 140 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I got trumped in power?$"

Naranja_Route112_G00_M27_Text_081BB819::
# 144 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I hear there are some seriously tough\nTRAINERS on top of MT. CHIMNEY.\pI intend to get up there and give them\na challenge!$"

Naranja_Route112_G00_M27_Text_081BB893::
# 148 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I’m strong.\nI won’t cry if I lose.$"

Naranja_Route112_G00_M27_Text_081BB8B6::
# 152 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Waaaah!$"

Naranja_Route112_G00_M27_Text_081BB8BE::
# 156 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "I’m not crying because I miss my mommy!\nSnivel...$"

Naranja_Route112_G00_M27_Text_081BB8F0::
# 160 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "When you’re out on a picnic, why, you\nsimply have to sing!\lCome on, sing with me!$"

Naranja_Route112_G00_M27_Text_081BB942::
# 164 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "Oh, you’re so strong!$"

Naranja_Route112_G00_M27_Text_081BB958::
# 168 "data/maps/Naranja_Route112_G00_M27/scripts.pory"
	.string "It doesn’t matter if you’re good or bad\nat singing or POKéMON.\pIf you have the most fun, you win!$"
