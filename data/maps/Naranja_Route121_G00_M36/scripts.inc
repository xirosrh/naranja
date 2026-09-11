Naranja_Route121_G00_M36_MapScripts::
# 5 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route121_G00_M36_OnTransition
	.byte 0


Naranja_Route121_G00_M36_OnTransition::
# 9 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId1::
# 14 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_08171CB4
# 15 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 2
	end


Naranja_Route121_G00_M36_EventScript_Sign_1::
# 20 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_08171D0C
# 21 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 3
	end


Naranja_Route121_G00_M36_EventScript_Sign_6::
# 26 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_08171D5B
# 27 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 3
	end


Naranja_Route121_G00_M36_EventScript_Trigger_1::
# 32 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	lockall
# 33 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_08171C8F
# 34 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 4
# 35 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	closemessage
# 36 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	applymovement LOCALID_ROUTE121_G00_M36_241, Naranja_Route121_G00_M36_Movement_08151B57
# 37 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	applymovement LOCALID_ROUTE121_G00_M36_241_2, Naranja_Route121_G00_M36_Movement_08151B60
# 38 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	applymovement LOCALID_ROUTE121_G00_M36_241_3, Naranja_Route121_G00_M36_Movement_08151B69
# 39 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	waitmovement LOCALID_NONE
# 40 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	removeobject LOCALID_ROUTE121_G00_M36_241
# 41 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	removeobject LOCALID_ROUTE121_G00_M36_241_2
# 42 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	removeobject LOCALID_ROUTE121_G00_M36_241_3
# 43 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	setvar VAR_NARANJA_ROUTE121_STORY_STATE, 1
# 44 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	releaseall
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId17::
# 49 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE121_300, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BF96E, Naranja_Route121_G00_M36_Text_081BF9A1
# 50 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BF9BA
# 51 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId18::
# 56 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE121_254, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFA1B, Naranja_Route121_G00_M36_Text_081BFA8C
# 57 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 58 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 59 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G00_M36_EventScript_Sub_08151BB0
# 60 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFA9D
# 61 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_Sub_08151BB0::
# 66 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE121_254, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFADA, Naranja_Route121_G00_M36_Text_081BFB4B
# 67 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFB5C
# 68 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_HEX_MANIAC_LocalId19::
# 73 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE121_107, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFBB4, Naranja_Route121_G00_M36_Text_081BFBEE
# 74 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFBFD
# 75 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_LASS_LocalId10::
# 80 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE121_286, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFC36, Naranja_Route121_G00_M36_Text_081BFC7A, Naranja_Route121_G00_M36_Text_081BFD08
# 81 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFCB3
# 82 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_LASS_LocalId11::
# 87 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_ROUTE121_286, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFD60, Naranja_Route121_G00_M36_Text_081BFDA3, Naranja_Route121_G00_M36_Text_081BFE0D
# 88 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFDC1
# 89 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId20::
# 94 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE121_127, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFE51, Naranja_Route121_G00_M36_Text_081BFE80
# 95 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 96 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 97 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	goto_if EQUAL, Naranja_Route121_G00_M36_EventScript_Sub_08151C3B
# 98 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFEAE
# 99 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_Sub_08151C3B::
# 104 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_ROUTE121_127, LOCALID_NONE, Naranja_Route121_G00_M36_Text_081BFEDE, Naranja_Route121_G00_M36_Text_081BFF0A
# 105 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	loadword 0, Naranja_Route121_G00_M36_Text_081BFF3A
# 106 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 6
	end


Naranja_Route121_G00_M36_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId21::
# 111 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	setorcopyvar VAR_0x8000, 0x42
# 112 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 113 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	callstd 1
	end


# 117 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
Naranja_Route121_G00_M36_Movement_08151B57:
# 118 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 119 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 120 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 121 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 122 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 123 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 124 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 125 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
Naranja_Route121_G00_M36_Movement_08151B60:
# 129 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 130 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 131 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 132 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 133 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 134 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 135 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 136 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
Naranja_Route121_G00_M36_Movement_08151B69:
# 140 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 141 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 142 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 143 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 144 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 145 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 146 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
# 147 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	walk_down
	step_end

Naranja_Route121_G00_M36_Text_08171C8F::
# 150 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Okay!\nWe’re to move out to MT. PYRE!$"

Naranja_Route121_G00_M36_Text_08171CB4::
# 154 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Ahead looms MT. PYRE...\pIt is a natural monument to the spirits \nof departed POKéMON...$"

Naranja_Route121_G00_M36_Text_08171D0C::
# 158 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "MT. PYRE PIER\p...The sign is old and worn out.\nThe words are barely legible...$"

Naranja_Route121_G00_M36_Text_08171D5B::
# 162 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "“Filled with rare POKéMON!”\nSAFARI ZONE$"

Naranja_Route121_G00_M36_Text_081BF96E::
# 166 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Will you play with my delightfully\npretty POKéMON?$"

Naranja_Route121_G00_M36_Text_081BF9A1::
# 170 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "This isn’t what I meant!$"

Naranja_Route121_G00_M36_Text_081BF9BA::
# 174 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "I’m going to a CONTEST in LILYCOVE.\pMy POKéMON should have no problem\nsweeping the MASTER CLASS.$"

Naranja_Route121_G00_M36_Text_081BFA1B::
# 178 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "With my POKéMON, I have traveled the\nworld’s four corners.\pYou might say I have some confidence\nin my abilities.$"

Naranja_Route121_G00_M36_Text_081BFA8C::
# 182 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Ah, well played.$"

Naranja_Route121_G00_M36_Text_081BFA9D::
# 186 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "I would like to circle the globe once\nagain with my POKéMON.$"

Naranja_Route121_G00_M36_Text_081BFADA::
# 190 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "With my POKéMON, I have traveled the\nworld’s four corners.\pYou might say I have some confidence\nin my abilities.$"

Naranja_Route121_G00_M36_Text_081BFB4B::
# 194 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Ah, well played.$"

Naranja_Route121_G00_M36_Text_081BFB5C::
# 198 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Your POKéMON and you...\pYour prowess together will be\nconsidered strong, even overseas.$"

Naranja_Route121_G00_M36_Text_081BFBB4::
# 202 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "There are powers beyond our\nunderstanding in the world...$"

Naranja_Route121_G00_M36_Text_081BFBEE::
# 206 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "I have lost...$"

Naranja_Route121_G00_M36_Text_081BFBFD::
# 210 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "MT. PYRE...\nThere is a mysterious power\lat work there...$"

Naranja_Route121_G00_M36_Text_081BFC36::
# 214 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "KATE: Together, we’re fearless!\nWe’ll demonstrate how tough we are!$"

Naranja_Route121_G00_M36_Text_081BFC7A::
# 218 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "KATE: I blew it in front of my junior\nstudent partner...$"

Naranja_Route121_G00_M36_Text_081BFCB3::
# 222 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "KATE: When someone’s relying on me,\nI get this urge to look cool in front\lof them...$"

Naranja_Route121_G00_M36_Text_081BFD08::
# 226 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "KATE: If you’ve only got one POKéMON,\nwe can’t battle with you.\pThat would be bullying.$"

Naranja_Route121_G00_M36_Text_081BFD60::
# 230 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "JOY: Together, we’re fearless!\nWe’ll demonstrate how tough we are!$"

Naranja_Route121_G00_M36_Text_081BFDA3::
# 234 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "JOY: Please forgive me, KATE!$"

Naranja_Route121_G00_M36_Text_081BFDC1::
# 238 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "JOY: Ehehe, I’ll have to train with KATE,\nmy senior student partner, again.$"

Naranja_Route121_G00_M36_Text_081BFE0D::
# 242 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "JOY: You need at least two POKéMON\nif you’re going to challenge us!$"

Naranja_Route121_G00_M36_Text_081BFE51::
# 246 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Stop! Have a good look at my precious\nPOKéMON!$"

Naranja_Route121_G00_M36_Text_081BFE80::
# 250 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Oh, how dare you!\nDon’t take it so seriously!$"

Naranja_Route121_G00_M36_Text_081BFEAE::
# 254 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Maybe I’ll go catch more POKéMON at\nthe SAFARI.$"

Naranja_Route121_G00_M36_Text_081BFEDE::
# 258 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "My precious POKéMON grew!\nHave a good look!$"

Naranja_Route121_G00_M36_Text_081BFF0A::
# 262 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Oh, how dare you!\nYou still won’t take it easy!$"

Naranja_Route121_G00_M36_Text_081BFF3A::
# 266 "data/maps/Naranja_Route121_G00_M36/scripts.pory"
	.string "Maybe I’ll go catch more POKéMON at\nthe SAFARI.$"
