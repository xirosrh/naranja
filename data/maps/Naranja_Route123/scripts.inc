Naranja_Route123_MapScripts::
# 5 "data/maps/Naranja_Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route123_OnTransition
	.byte 0


Naranja_Route123_OnTransition::
# 9 "data/maps/Naranja_Route123/scripts.pory"
	special SetRoute123Weather
	end


Naranja_Route123_EventScript_Girl3::
# 14 "data/maps/Naranja_Route123/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route123/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route123/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00E8
# 17 "data/maps/Naranja_Route123/scripts.pory"
	goto_if EQUAL, Naranja_Route123_EventScript_Sub_08151CAC
# 18 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171D83, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_Route123/scripts.pory"
	special IsGrassTypeInParty
# 20 "data/maps/Naranja_Route123/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 21 "data/maps/Naranja_Route123/scripts.pory"
	goto_if EQUAL, Naranja_Route123_EventScript_Sub_08151CAA
# 22 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171DC2, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8000, 0x133
# 24 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 25 "data/maps/Naranja_Route123/scripts.pory"
	callstd 0
# 26 "data/maps/Naranja_Route123/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 27 "data/maps/Naranja_Route123/scripts.pory"
	goto_if EQUAL, Naranja_SevenGrapefruitIslands_Hall_EventScript_Sub_081A029B
# 28 "data/maps/Naranja_Route123/scripts.pory"
	setflag FLAG_NARANJA_ROUTE123_EVENT_COMPLETE_00E8
# 29 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171E34, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_Route123/scripts.pory"
	release
	end


Naranja_Route123_EventScript_Sub_08151CAA::
# 35 "data/maps/Naranja_Route123/scripts.pory"
	release
	end


Naranja_Route123_EventScript_Sub_08151CAC::
# 40 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171E34, MSGBOX_DEFAULT
# 41 "data/maps/Naranja_Route123/scripts.pory"
	release
	end


Naranja_Route123_EventScript_Sign_4::
# 46 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171E76, MSGBOX_SIGN
	end


Naranja_Route123_EventScript_Sign_1::
# 51 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171E8E, MSGBOX_SIGN
	end


Naranja_Route123_EventScript_Sign_6::
# 56 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_08171EBC, MSGBOX_SIGN
	end


Naranja_Route123_EventScript_Woman7::
# 61 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE123_092, Naranja_Route123_Text_081BFF6A, Naranja_Route123_Text_081BFFA2
# 62 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081BFFC1, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_Woman3::
# 67 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE123_039, Naranja_Route123_Text_081C009E, Naranja_Route123_Text_081C00D4
# 68 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C0100, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_PsychicM::
# 73 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE123_238, Naranja_Route123_Text_081C013F, Naranja_Route123_Text_081C01A3
# 74 "data/maps/Naranja_Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 75 "data/maps/Naranja_Route123/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 76 "data/maps/Naranja_Route123/scripts.pory"
	goto_if EQUAL, Naranja_Route123_EventScript_Sub_08151D3D
# 77 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C01B1, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_Sub_08151D3D::
# 82 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE123_238, Naranja_Route123_Text_081C01F9, Naranja_Route123_Text_081C0240
# 83 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C024E, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_Lass::
# 88 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE123_249, Naranja_Route123_Text_081C028C, Naranja_Route123_Text_081C0303
# 89 "data/maps/Naranja_Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 90 "data/maps/Naranja_Route123/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 91 "data/maps/Naranja_Route123/scripts.pory"
	goto_if EQUAL, Naranja_Route123_EventScript_Sub_08151D7B
# 92 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C030F, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_Sub_08151D7B::
# 97 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE123_249, Naranja_Route123_Text_081C0351, Naranja_Route123_Text_081C0380
# 98 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C038C, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_LittleGirl1_2::
# 103 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE123_484, Naranja_Route123_Text_081C03CB, Naranja_Route123_Text_081C040E, Naranja_Route123_Text_081C0462
# 104 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C0423, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_LittleGirl1::
# 109 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE123_484, Naranja_Route123_Text_081C049C, Naranja_Route123_Text_081C04CD, Naranja_Route123_Text_081C0519
# 110 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C04E3, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_HexManiac::
# 115 "data/maps/Naranja_Route123/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE123_106, Naranja_Route123_Text_081C0554, Naranja_Route123_Text_081C059F
# 116 "data/maps/Naranja_Route123/scripts.pory"
	msgbox Naranja_Route123_Text_081C05BC, MSGBOX_AUTOCLOSE
	end


Naranja_Route123_EventScript_ItemBall::
# 121 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8000, 0x43
# 122 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 123 "data/maps/Naranja_Route123/scripts.pory"
	callstd 1
	end


Naranja_Route123_EventScript_ItemBall_2::
# 128 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 129 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 130 "data/maps/Naranja_Route123/scripts.pory"
	callstd 1
	end


Naranja_Route123_EventScript_ItemBall_3::
# 135 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8000, 2
# 136 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 137 "data/maps/Naranja_Route123/scripts.pory"
	callstd 1
	end


Naranja_Route123_EventScript_ItemBall_4::
# 142 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8000, 0x24
# 143 "data/maps/Naranja_Route123/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 144 "data/maps/Naranja_Route123/scripts.pory"
	callstd 1
	end


Naranja_Route123_Text_08171D83::
# 148 "data/maps/Naranja_Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\pDo you have any GRASS-type POKéMON?$"

Naranja_Route123_Text_08171DC2::
# 152 "data/maps/Naranja_Route123/scripts.pory"
	.string "Oh?\pYou like GRASS-type POKéMON, too,\ndon’t you?\pI’m so happy, you can have this!\nIt’s a token of our friendship.$"

Naranja_Route123_Text_08171E34::
# 156 "data/maps/Naranja_Route123/scripts.pory"
	.string "I check trees with my GRASS-type\nPOKéMON. I’m like a tree doctor.$"

Naranja_Route123_Text_08171E76::
# 160 "data/maps/Naranja_Route123/scripts.pory"
	.string "ワ ROUTE 123\nロ ROUTE 118$"

Naranja_Route123_Text_08171E8E::
# 164 "data/maps/Naranja_Route123/scripts.pory"
	.string "ル MT. PYRE\n“Forbidden to the faint of heart.”$"

Naranja_Route123_Text_08171EBC::
# 168 "data/maps/Naranja_Route123/scripts.pory"
	.string "BERRY MASTER’S HOUSE$"

Naranja_Route123_Text_081BFF6A::
# 172 "data/maps/Naranja_Route123/scripts.pory"
	.string "Want to determine how strong you are?\nI’ll be the test!$"

Naranja_Route123_Text_081BFFA2::
# 176 "data/maps/Naranja_Route123/scripts.pory"
	.string "You passed with flying colors!$"

Naranja_Route123_Text_081BFFC1::
# 180 "data/maps/Naranja_Route123/scripts.pory"
	.string "To best even me...\nYour strength is marvelous!$"

Naranja_Route123_Text_081C009E::
# 184 "data/maps/Naranja_Route123/scripts.pory"
	.string "They say that good times are filled\nwith good aromas.$"

Naranja_Route123_Text_081C00D4::
# 188 "data/maps/Naranja_Route123/scripts.pory"
	.string "Oh...\nI smell the bitter scent of misery...$"

Naranja_Route123_Text_081C0100::
# 192 "data/maps/Naranja_Route123/scripts.pory"
	.string "The BERRY MASTER’s garden is filled\nwith uplifting fragrances.$"

Naranja_Route123_Text_081C013F::
# 196 "data/maps/Naranja_Route123/scripts.pory"
	.string "Being a psychic is about willpower.\pI’ve willed myself not to lose to\nanyone. That makes me strong!$"

Naranja_Route123_Text_081C01A3::
# 200 "data/maps/Naranja_Route123/scripts.pory"
	.string "I feel sad...$"

Naranja_Route123_Text_081C01B1::
# 204 "data/maps/Naranja_Route123/scripts.pory"
	.string "Being a psychic is about willpower.\nI thought I wouldn’t lose to you...$"

Naranja_Route123_Text_081C01F9::
# 208 "data/maps/Naranja_Route123/scripts.pory"
	.string "I’ve convinced myself that I won’t\nlose anymore. That makes me strong!$"

Naranja_Route123_Text_081C0240::
# 212 "data/maps/Naranja_Route123/scripts.pory"
	.string "I feel sad...$"

Naranja_Route123_Text_081C024E::
# 216 "data/maps/Naranja_Route123/scripts.pory"
	.string "I should train at MT. PYRE...\nI’ll never beat you this way...$"

Naranja_Route123_Text_081C028C::
# 220 "data/maps/Naranja_Route123/scripts.pory"
	.string "Don’t be too happy if your POKéMON\ndevelop psychic powers.\pYou need to refine those powers to\nmake them really useful.$"

Naranja_Route123_Text_081C0303::
# 224 "data/maps/Naranja_Route123/scripts.pory"
	.string "Astounding!$"

Naranja_Route123_Text_081C030F::
# 228 "data/maps/Naranja_Route123/scripts.pory"
	.string "We all have psychic powers.\nWe’ve just forgotten how to use them.$"

Naranja_Route123_Text_081C0351::
# 232 "data/maps/Naranja_Route123/scripts.pory"
	.string "Have you awoken the psychic powers\nwithin you?$"

Naranja_Route123_Text_081C0380::
# 236 "data/maps/Naranja_Route123/scripts.pory"
	.string "Astounding!$"

Naranja_Route123_Text_081C038C::
# 240 "data/maps/Naranja_Route123/scripts.pory"
	.string "Your power with POKéMON...\nThat could be a psychic power, too.$"

Naranja_Route123_Text_081C03CB::
# 244 "data/maps/Naranja_Route123/scripts.pory"
	.string "MIU: Hello, TRAINER. I hope your\nPOKéMON won’t cry when they lose.$"

Naranja_Route123_Text_081C040E::
# 248 "data/maps/Naranja_Route123/scripts.pory"
	.string "MIU: Uh-oh, we lost.$"

Naranja_Route123_Text_081C0423::
# 252 "data/maps/Naranja_Route123/scripts.pory"
	.string "MIU: TRAINER, your POKéMON are\nstrong because you are friends.$"

Naranja_Route123_Text_081C0462::
# 256 "data/maps/Naranja_Route123/scripts.pory"
	.string "MIU: It’s no fun to battle if you\ndon’t have two POKéMON.$"

Naranja_Route123_Text_081C049C::
# 260 "data/maps/Naranja_Route123/scripts.pory"
	.string "YUKI: Okay!\nWe’re beating the TRAINER’s POKéMON!$"

Naranja_Route123_Text_081C04CD::
# 264 "data/maps/Naranja_Route123/scripts.pory"
	.string "YUKI: Uh-oh, we lost.$"

Naranja_Route123_Text_081C04E3::
# 268 "data/maps/Naranja_Route123/scripts.pory"
	.string "YUKI: Why are you so strong?\nWe’ve never lost before.$"

Naranja_Route123_Text_081C0519::
# 272 "data/maps/Naranja_Route123/scripts.pory"
	.string "YUKI: It’s no fun to battle if you\ndon’t have two POKéMON.$"

Naranja_Route123_Text_081C0554::
# 276 "data/maps/Naranja_Route123/scripts.pory"
	.string "MT. PYRE...\nWhere the spirits of POKéMON sleep...\lWill your POKéMON sleep?$"

Naranja_Route123_Text_081C059F::
# 280 "data/maps/Naranja_Route123/scripts.pory"
	.string "Overflowing with vitality...$"

Naranja_Route123_Text_081C05BC::
# 284 "data/maps/Naranja_Route123/scripts.pory"
	.string "MT. PYRE...\nWhere the spirits of POKéMON sleep...\pIt must overflow with a power that\nsoothes spirits...$"
