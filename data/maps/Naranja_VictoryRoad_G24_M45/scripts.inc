Naranja_VictoryRoad_G24_M45_MapScripts::
	.byte 0


Naranja_VictoryRoad_G24_M45_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId1::
# 8 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VICTORY_ROAD_082, LOCALID_NONE, Naranja_VictoryRoad_G24_M45_Text_08197EF2, Naranja_VictoryRoad_G24_M45_Text_08197F46
# 9 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M45_Text_08197F71, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M45_EventScript_OBJ_EVENT_GFX_MAN_4_LocalId2::
# 14 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VICTORY_ROAD_083, LOCALID_NONE, Naranja_VictoryRoad_G24_M45_Text_08197FE5, Naranja_VictoryRoad_G24_M45_Text_0819802B
# 15 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M45_Text_08198047, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M45_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 20 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VICTORY_ROAD_099, LOCALID_NONE, Naranja_VictoryRoad_G24_M45_Text_08198089, Naranja_VictoryRoad_G24_M45_Text_081980AD
# 21 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M45_Text_081980C8, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M45_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId4::
# 26 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VICTORY_ROAD_100, LOCALID_NONE, Naranja_VictoryRoad_G24_M45_Text_08198121, Naranja_VictoryRoad_G24_M45_Text_081981A3
# 27 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	msgbox Naranja_VictoryRoad_G24_M45_Text_081981BA, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_G24_M45_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId5::
# 32 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	setorcopyvar VAR_0x8000, 0x17
# 33 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 34 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	callstd 1
	end


Naranja_VictoryRoad_G24_M45_Text_08197EF2::
# 38 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "I trained together with my whole family,\nevery one of us!\lI’m not losing to anyone!$"

Naranja_VictoryRoad_G24_M45_Text_08197F46::
# 42 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "Better than my family?!\nIs that possible?!$"

Naranja_VictoryRoad_G24_M45_Text_08197F71::
# 46 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "I was better than everyone in my\nfamily. I’ve never lost before...\pI’ve lost my confidence...\nMaybe I’ll go home...$"

Naranja_VictoryRoad_G24_M45_Text_08197FE5::
# 50 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "I’d heard that there was a tough\nlittle kid around. Do they mean you?$"

Naranja_VictoryRoad_G24_M45_Text_0819802B::
# 54 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "The little shrimp is tough!$"

Naranja_VictoryRoad_G24_M45_Text_08198047::
# 58 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "The rumors I heard, that tough little\nkid is from PETALBURG CITY.$"

Naranja_VictoryRoad_G24_M45_Text_08198089::
# 62 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "You must be getting a little tired.$"

Naranja_VictoryRoad_G24_M45_Text_081980AD::
# 66 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "No signs of tiring at all!$"

Naranja_VictoryRoad_G24_M45_Text_081980C8::
# 70 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "VICTORY ROAD and the POKéMON LEAGUE\nare long and grueling challenges.\lBeware of fatigue!$"

Naranja_VictoryRoad_G24_M45_Text_08198121::
# 74 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "You shouldn’t get complacent just\nbecause you have a lot of GYM BADGES.\pThere’s always going to be someone\nwho’s better than you!$"

Naranja_VictoryRoad_G24_M45_Text_081981A3::
# 78 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "You’re better than me!$"

Naranja_VictoryRoad_G24_M45_Text_081981BA::
# 82 "data/maps/Naranja_VictoryRoad_G24_M45/scripts.pory"
	.string "Gaze on your collected BADGES and\nremember the TRAINERS you’ve faced.$"
