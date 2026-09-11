Naranja_Route123_G00_M38_MapScripts::
# 5 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route123_G00_M38_OnTransition
	.byte 0


Naranja_Route123_G00_M38_OnTransition::
# 9 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	special SetRoute123Weather
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_GIRL_3_LocalId23::
# 14 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00E8
# 17 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G00_M38_EventScript_Sub_08151CAC
# 18 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171D83
# 19 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 4
# 20 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	special IsGrassTypeInParty
# 21 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 22 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G00_M38_EventScript_Sub_08151CAA
# 23 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171DC2
# 24 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 4
# 25 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8000, 0x133
# 26 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 27 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 0
# 28 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 29 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 30 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00E8
# 31 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171E34
# 32 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	release
	end


Naranja_Route123_G00_M38_EventScript_Sub_08151CAA::
# 38 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	release
	end


Naranja_Route123_G00_M38_EventScript_Sub_08151CAC::
# 43 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171E34
# 44 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	release
	end


Naranja_Route123_G00_M38_EventScript_Sign_4::
# 50 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171E76
# 51 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 3
	end


Naranja_Route123_G00_M38_EventScript_Sign_1::
# 56 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171E8E
# 57 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 3
	end


Naranja_Route123_G00_M38_EventScript_Sign_6::
# 62 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_08171EBC
# 63 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 3
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId8::
# 68 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE123_092, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081BFF6A, Naranja_Route123_G00_M38_Text_081BFFA2
# 69 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081BFFC1
# 70 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId27::
# 75 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE123_039, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C009E, Naranja_Route123_G00_M38_Text_081C00D4
# 76 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C0100
# 77 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_PSYCHIC_M_LocalId30::
# 82 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE123_238, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C013F, Naranja_Route123_G00_M38_Text_081C01A3
# 83 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 84 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 85 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G00_M38_EventScript_Sub_08151D3D
# 86 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C01B1
# 87 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_Sub_08151D3D::
# 92 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE123_238, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C01F9, Naranja_Route123_G00_M38_Text_081C0240
# 93 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C024E
# 94 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_LASS_LocalId31::
# 99 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE123_249, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C028C, Naranja_Route123_G00_M38_Text_081C0303
# 100 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 101 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 102 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	goto_if EQUAL, Naranja_Route123_G00_M38_EventScript_Sub_08151D7B
# 103 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C030F
# 104 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_Sub_08151D7B::
# 109 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE123_249, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C0351, Naranja_Route123_G00_M38_Text_081C0380
# 110 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C038C
# 111 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId29::
# 116 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE123_484, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C03CB, Naranja_Route123_G00_M38_Text_081C040E, Naranja_Route123_G00_M38_Text_081C0462
# 117 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C0423
# 118 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId28::
# 123 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE123_484, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C049C, Naranja_Route123_G00_M38_Text_081C04CD, Naranja_Route123_G00_M38_Text_081C0519
# 124 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C04E3
# 125 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId32::
# 130 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE123_106, LOCALID_NONE, Naranja_Route123_G00_M38_Text_081C0554, Naranja_Route123_G00_M38_Text_081C059F
# 131 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	loadword 0, Naranja_Route123_G00_M38_Text_081C05BC
# 132 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 6
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId21::
# 137 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8000, 0x43
# 138 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 139 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 1
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId22::
# 144 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 145 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 146 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 1
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId33::
# 151 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8000, 2
# 152 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 153 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 1
	end


Naranja_Route123_G00_M38_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId34::
# 158 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 159 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 160 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	callstd 1
	end


Naranja_Route123_G00_M38_Text_08171D83::
# 164 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "I love GRASS-type POKéMON!\pDo you have any GRASS-type POKéMON?$"

Naranja_Route123_G00_M38_Text_08171DC2::
# 168 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Oh?\pYou like GRASS-type POKéMON, too,\ndon’t you?\pI’m so happy, you can have this!\nIt’s a token of our friendship.$"

Naranja_Route123_G00_M38_Text_08171E34::
# 172 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "I check trees with my GRASS-type\nPOKéMON. I’m like a tree doctor.$"

Naranja_Route123_G00_M38_Text_08171E76::
# 176 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "ワ ROUTE 123\nロ ROUTE 118$"

Naranja_Route123_G00_M38_Text_08171E8E::
# 180 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "ル MT. PYRE\n“Forbidden to the faint of heart.”$"

Naranja_Route123_G00_M38_Text_08171EBC::
# 184 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "BERRY MASTER’S HOUSE$"

Naranja_Route123_G00_M38_Text_081BFF6A::
# 188 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Want to determine how strong you are?\nI’ll be the test!$"

Naranja_Route123_G00_M38_Text_081BFFA2::
# 192 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "You passed with flying colors!$"

Naranja_Route123_G00_M38_Text_081BFFC1::
# 196 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "To best even me...\nYour strength is marvelous!$"

Naranja_Route123_G00_M38_Text_081C009E::
# 200 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "They say that good times are filled\nwith good aromas.$"

Naranja_Route123_G00_M38_Text_081C00D4::
# 204 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Oh...\nI smell the bitter scent of misery...$"

Naranja_Route123_G00_M38_Text_081C0100::
# 208 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "The BERRY MASTER’s garden is filled\nwith uplifting fragrances.$"

Naranja_Route123_G00_M38_Text_081C013F::
# 212 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Being a psychic is about willpower.\pI’ve willed myself not to lose to\nanyone. That makes me strong!$"

Naranja_Route123_G00_M38_Text_081C01A3::
# 216 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "I feel sad...$"

Naranja_Route123_G00_M38_Text_081C01B1::
# 220 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Being a psychic is about willpower.\nI thought I wouldn’t lose to you...$"

Naranja_Route123_G00_M38_Text_081C01F9::
# 224 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "I’ve convinced myself that I won’t\nlose anymore. That makes me strong!$"

Naranja_Route123_G00_M38_Text_081C0240::
# 228 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "I feel sad...$"

Naranja_Route123_G00_M38_Text_081C024E::
# 232 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "I should train at MT. PYRE...\nI’ll never beat you this way...$"

Naranja_Route123_G00_M38_Text_081C028C::
# 236 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Don’t be too happy if your POKéMON\ndevelop psychic powers.\pYou need to refine those powers to\nmake them really useful.$"

Naranja_Route123_G00_M38_Text_081C0303::
# 240 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Astounding!$"

Naranja_Route123_G00_M38_Text_081C030F::
# 244 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "We all have psychic powers.\nWe’ve just forgotten how to use them.$"

Naranja_Route123_G00_M38_Text_081C0351::
# 248 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Have you awoken the psychic powers\nwithin you?$"

Naranja_Route123_G00_M38_Text_081C0380::
# 252 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Astounding!$"

Naranja_Route123_G00_M38_Text_081C038C::
# 256 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Your power with POKéMON...\nThat could be a psychic power, too.$"

Naranja_Route123_G00_M38_Text_081C03CB::
# 260 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "MIU: Hello, TRAINER. I hope your\nPOKéMON won’t cry when they lose.$"

Naranja_Route123_G00_M38_Text_081C040E::
# 264 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "MIU: Uh-oh, we lost.$"

Naranja_Route123_G00_M38_Text_081C0423::
# 268 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "MIU: TRAINER, your POKéMON are\nstrong because you are friends.$"

Naranja_Route123_G00_M38_Text_081C0462::
# 272 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "MIU: It’s no fun to battle if you\ndon’t have two POKéMON.$"

Naranja_Route123_G00_M38_Text_081C049C::
# 276 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "YUKI: Okay!\nWe’re beating the TRAINER’s POKéMON!$"

Naranja_Route123_G00_M38_Text_081C04CD::
# 280 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "YUKI: Uh-oh, we lost.$"

Naranja_Route123_G00_M38_Text_081C04E3::
# 284 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "YUKI: Why are you so strong?\nWe’ve never lost before.$"

Naranja_Route123_G00_M38_Text_081C0519::
# 288 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "YUKI: It’s no fun to battle if you\ndon’t have two POKéMON.$"

Naranja_Route123_G00_M38_Text_081C0554::
# 292 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "MT. PYRE...\nWhere the spirits of POKéMON sleep...\lWill your POKéMON sleep?$"

Naranja_Route123_G00_M38_Text_081C059F::
# 296 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "Overflowing with vitality...$"

Naranja_Route123_G00_M38_Text_081C05BC::
# 300 "data/maps/Naranja_Route123_G00_M38/scripts.pory"
	.string "MT. PYRE...\nWhere the spirits of POKéMON sleep...\pIt must overflow with a power that\nsoothes spirits...$"
