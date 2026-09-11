Naranja_Route132_G00_M47_MapScripts::
	.byte 0


Naranja_Route132_G00_M47_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId1::
# 8 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE132_169, LOCALID_NONE, Naranja_Route132_G00_M47_Text_081C2AFB, Naranja_Route132_G00_M47_Text_081C2B5B
# 9 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	msgbox Naranja_Route132_G00_M47_Text_081C2B71, MSGBOX_AUTOCLOSE
	end


Naranja_Route132_G00_M47_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId2::
# 14 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE132_458, LOCALID_NONE, Naranja_Route132_G00_M47_Text_081C2BB5, Naranja_Route132_G00_M47_Text_081C2BEA
# 15 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	msgbox Naranja_Route132_G00_M47_Text_081C2BFA, MSGBOX_AUTOCLOSE
	end


Naranja_Route132_G00_M47_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId5::
# 20 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE132_350, LOCALID_NONE, Naranja_Route132_G00_M47_Text_081C2C32, Naranja_Route132_G00_M47_Text_081C2C60
# 21 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	msgbox Naranja_Route132_G00_M47_Text_081C2C78, MSGBOX_AUTOCLOSE
	end


Naranja_Route132_G00_M47_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId4::
# 26 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_ROUTE132_181, LOCALID_NONE, Naranja_Route132_G00_M47_Text_081C2CD9, Naranja_Route132_G00_M47_Text_081C2D1F
# 27 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	msgbox Naranja_Route132_G00_M47_Text_081C2D3E, MSGBOX_AUTOCLOSE
	end


Naranja_Route132_G00_M47_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId3::
# 32 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	setorcopyvar VAR_0x8000, 0x44
# 33 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 34 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	callstd 1
	end


Naranja_Route132_G00_M47_Text_081C2AFB::
# 38 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "I used to catch colds all the time as\na kid, but I became totally fit after\lI started swimming.$"

Naranja_Route132_G00_M47_Text_081C2B5B::
# 42 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "I crave more power...$"

Naranja_Route132_G00_M47_Text_081C2B71::
# 46 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "TRAINERS travel the fields and\nmountains, so they must be fit, too.$"

Naranja_Route132_G00_M47_Text_081C2BB5::
# 50 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "I try not to swim where the currents\nare too strong.$"

Naranja_Route132_G00_M47_Text_081C2BEA::
# 54 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "Oh, please, no!$"

Naranja_Route132_G00_M47_Text_081C2BFA::
# 58 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "If I get swept away, I’ll lose all my\nsense of place...$"

Naranja_Route132_G00_M47_Text_081C2C32::
# 62 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "Win or lose, you’ll never know until\nyou try!$"

Naranja_Route132_G00_M47_Text_081C2C60::
# 66 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "Waah!\nI sank in defeat!$"

Naranja_Route132_G00_M47_Text_081C2C78::
# 70 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "I never battle when I know I’ll win.\nI like to battle at the razor’s edge of\lvictory and defeat!$"

Naranja_Route132_G00_M47_Text_081C2CD9::
# 74 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "I contemplate POKéMON 24 hours a day.\nHow could you possibly beat me?$"

Naranja_Route132_G00_M47_Text_081C2D1F::
# 78 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "I lose.\nI will concede defeat.$"

Naranja_Route132_G00_M47_Text_081C2D3E::
# 82 "data/maps/Naranja_Route132_G00_M47/scripts.pory"
	.string "Urggh...\nYou’re a POKéMON fanatic, aren’t you?\pYou must contemplate POKéMON 24 hours\na day, don’t you?$"
