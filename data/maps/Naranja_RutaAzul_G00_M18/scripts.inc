Naranja_RutaAzul_G00_M18_MapScripts::
# 5 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_RutaAzul_G00_M18_OnTransition
	.byte 0


Naranja_RutaAzul_G00_M18_OnTransition::
# 9 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	call Naranja_CaminoFrio_G20_M01_EventScript_Sub_081A014E
# 10 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	call Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A02F4
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId10::
# 15 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_0816D950
# 16 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 2
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId1::
# 21 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_0816D996
# 22 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 2
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 27 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_RUTA_AZUL_036, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7D55, Naranja_RutaAzul_G00_M18_Text_081B7D8B
# 28 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B7DB2
# 29 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId5::
# 34 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7DF7, Naranja_RutaAzul_G00_M18_Text_081B7E3B, Naranja_RutaAzul_G00_M18_Text_081B7EAC
# 35 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 36 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 37 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EDD6
# 38 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B7E50
# 39 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EDD6::
# 44 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7FE7, Naranja_RutaAzul_G00_M18_Text_081B802B, Naranja_RutaAzul_G00_M18_Text_081B80AF
# 45 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B8053
# 46 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 51 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7EFB, Naranja_RutaAzul_G00_M18_Text_081B7F20, Naranja_RutaAzul_G00_M18_Text_081B7F8E
# 52 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 54 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE1C
# 55 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B7F40
# 56 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE1C::
# 61 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B80FE, Naranja_RutaAzul_G00_M18_Text_081B8123, Naranja_RutaAzul_G00_M18_Text_081B81A1
# 62 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B814D
# 63 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId6::
# 68 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_RUTA_AZUL_336, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B81FA, Naranja_RutaAzul_G00_M18_Text_081B8258
# 69 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B8281
# 70 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId12::
# 75 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_RUTA_AZUL_293, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B82A9, Naranja_RutaAzul_G00_M18_Text_081B82EC
# 76 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 77 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 78 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE75
# 79 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B830D
# 80 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE75::
# 85 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_RUTA_AZUL_293, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B8349, Naranja_RutaAzul_G00_M18_Text_081B838C
# 86 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081B83A4
# 87 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 6
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_PROF_BIRCH_LocalId11::
# 92 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	lock
# 93 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	faceplayer
# 94 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081C4449
# 95 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 5
# 96 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 97 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_081A039B
# 98 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	call Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03B0
# 99 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_081A039B::
# 104 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081C449B
# 105 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 4
# 106 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03A5::
# 111 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 112 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	special ShowPokedexRatingMessage
# 113 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	waitmessage
# 114 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	waitbuttonpress
	return


Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03B0::
# 119 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setvar VAR_0x8004, 0
# 120 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 121 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 122 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 123 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 124 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 0, VAR_0x8008
# 125 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 1, VAR_0x8009
# 126 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081C44DC
# 127 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 4
# 128 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	call Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03A5
# 129 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_0x800A, 0
# 130 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 131 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setvar VAR_0x8004, 1
# 132 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 133 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 134 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 135 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 0, VAR_0x8008
# 136 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 1, VAR_0x8009
# 137 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_RutaAzul_G00_M18_Text_081C4B05
# 138 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 4
	return


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId13::
# 143 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setorcopyvar VAR_0x8000, 0x49
# 144 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 145 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 1
	end


Naranja_RutaAzul_G00_M18_EventScript_Trigger_1::
# 150 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	lock
# 151 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 152 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if LESS_THAN, Naranja_RutaAzul_G00_M18_EventScript_Sub_086B5DB0
# 153 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_086B5DB0::
# 158 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	lock
# 159 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	faceplayer
# 160 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	applymovement LOCALID_RUTA_AZUL_G00_M18_BOY_5, Naranja_RutaAzul_G00_M18_Movement_086B31DB
# 161 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_RutaAzul_G00_M18_Movement_08007B5B
# 162 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	loadword 0, Naranja_IslaMandarina_G00_M14_Text_086B5D82
# 163 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 4
# 164 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_RutaAzul_G00_M18_Movement_08002F1C
# 165 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


# 169 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
Naranja_RutaAzul_G00_M18_Movement_08002F1C:
# 170 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	face_down
# 171 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	delay_1
# 172 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	walk_down
	step_end

# 175 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
Naranja_RutaAzul_G00_M18_Movement_08007B5B:
# 176 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	face_right
	step_end

# 179 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
Naranja_RutaAzul_G00_M18_Movement_086B31DB:
# 180 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	walk_slow_up
# 181 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	walk_slow_right
# 182 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	face_up
	step_end

Naranja_RutaAzul_G00_M18_Text_0816D950::
# 185 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "My POKéMON is staggeringly tired...\nI should have brought a POTION...$"

Naranja_RutaAzul_G00_M18_Text_0816D996::
# 189 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "If you cross the sea from here,\nit’ll be a shortcut to OLDALE TOWN.\pFufufu, that’s useful, isn’t it?$"

Naranja_RutaAzul_G00_M18_Text_081B7D55::
# 193 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Did you feel the tug of our soul-\nsoothing fragrance?$"

Naranja_RutaAzul_G00_M18_Text_081B7D8B::
# 197 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "You weren’t led astray by our aroma...$"

Naranja_RutaAzul_G00_M18_Text_081B7DB2::
# 201 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Aromatherapy is a form of mental\nhealing that works with fragrances.$"

Naranja_RutaAzul_G00_M18_Text_081B7DF7::
# 205 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: I’m AMY.\nAnd this is my little sister LIV.\lWe battle together!$"

Naranja_RutaAzul_G00_M18_Text_081B7E3B::
# 209 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Uh-oh, we lost.$"

Naranja_RutaAzul_G00_M18_Text_081B7E50::
# 213 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: You have to think about all\nkinds of things when you’re battling\lagainst two TRAINERS.$"

Naranja_RutaAzul_G00_M18_Text_081B7EAC::
# 217 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Uh-oh, you have only one\nPOKéMON with you.\lYou can’t battle us like that.$"

Naranja_RutaAzul_G00_M18_Text_081B7EFB::
# 221 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We battle together as one\nteam.$"

Naranja_RutaAzul_G00_M18_Text_081B7F20::
# 225 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: Oh, we lost, big sister...$"

Naranja_RutaAzul_G00_M18_Text_081B7F40::
# 229 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We work perfectly together, me\nand my big sister...\pBut we still lost...$"

Naranja_RutaAzul_G00_M18_Text_081B7F8E::
# 233 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: If you want to battle us, you\nhave to have two POKéMON!\lIt’s not fair if you don’t!$"

Naranja_RutaAzul_G00_M18_Text_081B7FE7::
# 237 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: I’m AMY.\nAnd this is my little sister LIV.\lWe battle together!$"

Naranja_RutaAzul_G00_M18_Text_081B802B::
# 241 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Aww, boo!\nWe couldn’t win again...$"

Naranja_RutaAzul_G00_M18_Text_081B8053::
# 245 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: You have to think about all\nkinds of things when you’re battling\lagainst two TRAINERS.$"

Naranja_RutaAzul_G00_M18_Text_081B80AF::
# 249 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Uh-oh, you have only one\nPOKéMON with you.\lYou can’t battle us like that.$"

Naranja_RutaAzul_G00_M18_Text_081B80FE::
# 253 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We battle together as one\nteam.$"

Naranja_RutaAzul_G00_M18_Text_081B8123::
# 257 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: Awww, we lost again...\nBig sister...$"

Naranja_RutaAzul_G00_M18_Text_081B814D::
# 261 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We work perfectly together, me\nand my big sister...\pBut why did we lose again?$"

Naranja_RutaAzul_G00_M18_Text_081B81A1::
# 265 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: If you want to battle us, you\nhave to have two POKéMON!\lIt’s not fair if you don’t!$"

Naranja_RutaAzul_G00_M18_Text_081B81FA::
# 269 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Gah! My fishing line’s all snarled up!\nI’m getting frustrated and mean!\lThat’s it! Battle me!$"

Naranja_RutaAzul_G00_M18_Text_081B8258::
# 273 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Gah! Lost it!\nI’m even more annoyed now!$"

Naranja_RutaAzul_G00_M18_Text_081B8281::
# 277 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Gah, I’m still boiling mad...\nGrrrrr...$"

Naranja_RutaAzul_G00_M18_Text_081B82A9::
# 281 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "My POKéMON is delightfully adorable!\nDon’t be shy - I’ll show you!$"

Naranja_RutaAzul_G00_M18_Text_081B82EC::
# 285 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Oh, my gosh!\nMy darling POKéMON!$"

Naranja_RutaAzul_G00_M18_Text_081B830D::
# 289 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "My delightful POKéMON looks darling\neven when it’s fainted!$"

Naranja_RutaAzul_G00_M18_Text_081B8349::
# 293 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hi, you! My delightfully adorable\nPOKéMON has become more darling!$"

Naranja_RutaAzul_G00_M18_Text_081B838C::
# 297 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Oh!\nMy darling POKéMON!$"

Naranja_RutaAzul_G00_M18_Text_081B83A4::
# 301 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "The more I spend time with it, the\nmore adorable my POKéMON becomes.$"

Naranja_RutaAzul_G00_M18_Text_081C4449::
# 305 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "PROF. BIRCH: Ah, {PLAYER}{KUN}!\pHave you come to show me how your\nPOKéDEX is coming along?$"

Naranja_RutaAzul_G00_M18_Text_081C449B::
# 309 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hm? Oh, you haven’t caught enough\nPOKéMON to make it worthwhile.$"

Naranja_RutaAzul_G00_M18_Text_081C44DC::
# 313 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hmhm...\pSo, you’ve seen {STR_VAR_1} POKéMON,\nand you’ve caught {STR_VAR_2} POKéMON...$"

Naranja_RutaAzul_G00_M18_Text_081C4B05::
# 317 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hmhm...\nOn a nationwide basis...\pYou’ve seen {STR_VAR_1} POKéMON,\nand you’ve caught {STR_VAR_2} POKéMON...$"
