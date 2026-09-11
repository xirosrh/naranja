Naranja_ValnTang_G00_M17_MapScripts::
	.byte 0


Naranja_ValnTang_G00_M17_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_2_LocalId1::
# 8 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	msgbox Naranja_ValnTang_G00_M17_Text_0816D431, MSGBOX_NPC
	end


Naranja_ValnTang_G00_M17_EventScript_Sign_2::
# 13 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	msgbox Naranja_ValnTang_G00_M17_Text_086BF453, MSGBOX_SIGN
	end


Naranja_ValnTang_G00_M17_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId3::
# 18 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VALN_TANG_615, LOCALID_NONE, Naranja_ValnTang_G00_M17_Text_081B7C05, Naranja_ValnTang_G00_M17_Text_081B7C40
# 19 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	msgbox Naranja_ValnTang_G00_M17_Text_081B7C52, MSGBOX_AUTOCLOSE
	end


Naranja_ValnTang_G00_M17_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId4::
# 24 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_VALN_TANG_603, LOCALID_NONE, Naranja_ValnTang_G00_M17_Text_081B7C97, Naranja_ValnTang_G00_M17_Text_081B7CEC
# 25 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	msgbox Naranja_ValnTang_G00_M17_Text_081B7D11, MSGBOX_AUTOCLOSE
	end


Naranja_ValnTang_G00_M17_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId2::
# 30 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	msgbox Naranja_ValnTang_G00_M17_Text_081953AC, MSGBOX_NPC
	end


Naranja_ValnTang_G00_M17_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId6::
# 35 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	setorcopyvar VAR_0x8000, 0xD
# 36 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 37 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	callstd 1
	end


Naranja_ValnTang_G00_M17_Text_0816D431::
# 41 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "Odio las plantas altas,\nse me meten entre los ojos…\p{COLOR 0x04}{PLAYER}: ¿Plantas altas?\p{COLOR 0x01}Sí, es lo que tiene ser bajito…$"

Naranja_ValnTang_G00_M17_Text_081953AC::
# 45 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "Pareces un buen entrenador…\n¿Quieres luchar?\p¡Pues no!\pLo siento no soy entrenador.\npero tu sí…\p¡Hazte con todos los \nPOKéMON!$"

Naranja_ValnTang_G00_M17_Text_081B7C05::
# 49 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "¡Mira mis bichos! \n¡Son del SAFARI de {COLOR 0x0E}Isla MURCOTT!$"

Naranja_ValnTang_G00_M17_Text_081B7C40::
# 53 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "Ay… ¡Qué hiciste!$"

Naranja_ValnTang_G00_M17_Text_081B7C52::
# 57 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "Aplastaste mis bichos, no es justo.$"

Naranja_ValnTang_G00_M17_Text_081B7C97::
# 61 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "¿Acabas de llegar?\n¡Siente el poder de las flores!\p¡Te voy a machacar!$"

Naranja_ValnTang_G00_M17_Text_081B7CEC::
# 65 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "¡ Has dañado mis bonitas flores !!$"

Naranja_ValnTang_G00_M17_Text_081B7D11::
# 69 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "Quizá tenga que fortalecer mi equipo…\ncon otros tipos… ya veré…$"

Naranja_ValnTang_G00_M17_Text_086BF453::
# 73 "data/maps/Naranja_ValnTang_G00_M17/scripts.pory"
	.string "Está entrando en\n{COLOR 0x0D}Isla TANGELO$"
