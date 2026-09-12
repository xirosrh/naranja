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
	msgbox Naranja_RutaAzul_G00_M18_Text_0816D950, MSGBOX_NPC
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId1::
# 20 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_0816D996, MSGBOX_NPC
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId3::
# 25 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_RUTA_AZUL_036, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7D55, Naranja_RutaAzul_G00_M18_Text_081B7D8B
# 26 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B7DB2, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId5::
# 31 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7DF7, Naranja_RutaAzul_G00_M18_Text_081B7E3B, Naranja_RutaAzul_G00_M18_Text_081B7EAC
# 32 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 33 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 34 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EDD6
# 35 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B7E50, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EDD6::
# 40 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7FE7, Naranja_RutaAzul_G00_M18_Text_081B802B, Naranja_RutaAzul_G00_M18_Text_081B80AF
# 41 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B8053, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_F_LocalId4::
# 46 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B7EFB, Naranja_RutaAzul_G00_M18_Text_081B7F20, Naranja_RutaAzul_G00_M18_Text_081B7F8E
# 47 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 48 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 49 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE1C
# 50 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B7F40, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE1C::
# 55 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, TRAINER_NARANJA_RUTA_AZUL_481, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B80FE, Naranja_RutaAzul_G00_M18_Text_081B8123, Naranja_RutaAzul_G00_M18_Text_081B81A1
# 56 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B814D, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId6::
# 61 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_RUTA_AZUL_336, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B81FA, Naranja_RutaAzul_G00_M18_Text_081B8258
# 62 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B8281, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId12::
# 67 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_RUTA_AZUL_293, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B82A9, Naranja_RutaAzul_G00_M18_Text_081B82EC
# 68 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 69 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 70 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE75
# 71 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B830D, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_0814EE75::
# 76 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_RUTA_AZUL_293, LOCALID_NONE, Naranja_RutaAzul_G00_M18_Text_081B8349, Naranja_RutaAzul_G00_M18_Text_081B838C
# 77 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081B83A4, MSGBOX_AUTOCLOSE
	end


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_OAK_LocalId11::
# 82 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	lock
# 83 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	faceplayer
# 84 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081C4449, MSGBOX_YESNO
# 85 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 86 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_RutaAzul_G00_M18_EventScript_Sub_081A039B
# 87 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	call Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03B0
# 88 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_081A039B::
# 93 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081C449B, MSGBOX_DEFAULT
# 94 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03A5::
# 99 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 100 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	special ShowPokedexRatingMessage
# 101 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	waitmessage
# 102 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	waitbuttonpress
	return


Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03B0::
# 107 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setvar VAR_0x8004, 0
# 108 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 109 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 110 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 111 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 112 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 0, VAR_0x8008
# 113 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 1, VAR_0x8009
# 114 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081C44DC, MSGBOX_DEFAULT
# 115 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	call Naranja_RutaAzul_G00_M18_EventScript_Sub_081A03A5
# 116 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	compare_var_to_value VAR_0x800A, 0
# 117 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if EQUAL, Naranja_IslaHamlin_G07_M03_EventScript_Sub_081A14DC
# 118 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setvar VAR_0x8004, 1
# 119 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 120 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 121 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 122 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 0, VAR_0x8008
# 123 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	buffernumberstring 1, VAR_0x8009
# 124 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_RutaAzul_G00_M18_Text_081C4B05, MSGBOX_DEFAULT
	return


Naranja_RutaAzul_G00_M18_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId13::
# 129 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setorcopyvar VAR_0x8000, 0x49
# 130 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 131 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	callstd 1
	end


Naranja_RutaAzul_G00_M18_EventScript_Trigger_1::
# 136 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	lock
# 137 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	checkflag FLAG_NARANJA_INSIDE_OF_TRUCK_EVENT_COMPLETE_080B
# 138 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	goto_if LESS_THAN, Naranja_RutaAzul_G00_M18_EventScript_Sub_086B5DB0
# 139 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


Naranja_RutaAzul_G00_M18_EventScript_Sub_086B5DB0::
# 144 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	lock
# 145 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	faceplayer
# 146 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	applymovement LOCALID_RUTA_AZUL_G00_M18_BOY_5, Naranja_RutaAzul_G00_M18_Movement_086B31DB
# 147 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_RutaAzul_G00_M18_Movement_08007B5B
# 148 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	msgbox Naranja_IslaMandarina_G00_M14_Text_086B5D82, MSGBOX_DEFAULT
# 149 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_RutaAzul_G00_M18_Movement_08002F1C
# 150 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	release
	end


# 154 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
Naranja_RutaAzul_G00_M18_Movement_08002F1C:
# 155 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	face_down
# 156 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	delay_1
# 157 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	walk_down
	step_end

# 160 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
Naranja_RutaAzul_G00_M18_Movement_08007B5B:
# 161 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	face_right
	step_end

# 164 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
Naranja_RutaAzul_G00_M18_Movement_086B31DB:
# 165 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	walk_slow_up
# 166 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	walk_slow_right
# 167 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	face_up
	step_end

Naranja_RutaAzul_G00_M18_Text_0816D950::
# 170 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "My POKéMON is staggeringly tired...\nI should have brought a POTION...$"

Naranja_RutaAzul_G00_M18_Text_0816D996::
# 174 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "If you cross the sea from here,\nit’ll be a shortcut to OLDALE TOWN.\pFufufu, that’s useful, isn’t it?$"

Naranja_RutaAzul_G00_M18_Text_081B7D55::
# 178 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Did you feel the tug of our soul-\nsoothing fragrance?$"

Naranja_RutaAzul_G00_M18_Text_081B7D8B::
# 182 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "You weren’t led astray by our aroma...$"

Naranja_RutaAzul_G00_M18_Text_081B7DB2::
# 186 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Aromatherapy is a form of mental\nhealing that works with fragrances.$"

Naranja_RutaAzul_G00_M18_Text_081B7DF7::
# 190 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: I’m AMY.\nAnd this is my little sister LIV.\lWe battle together!$"

Naranja_RutaAzul_G00_M18_Text_081B7E3B::
# 194 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Uh-oh, we lost.$"

Naranja_RutaAzul_G00_M18_Text_081B7E50::
# 198 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: You have to think about all\nkinds of things when you’re battling\lagainst two TRAINERS.$"

Naranja_RutaAzul_G00_M18_Text_081B7EAC::
# 202 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Uh-oh, you have only one\nPOKéMON with you.\lYou can’t battle us like that.$"

Naranja_RutaAzul_G00_M18_Text_081B7EFB::
# 206 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We battle together as one\nteam.$"

Naranja_RutaAzul_G00_M18_Text_081B7F20::
# 210 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: Oh, we lost, big sister...$"

Naranja_RutaAzul_G00_M18_Text_081B7F40::
# 214 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We work perfectly together, me\nand my big sister...\pBut we still lost...$"

Naranja_RutaAzul_G00_M18_Text_081B7F8E::
# 218 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: If you want to battle us, you\nhave to have two POKéMON!\lIt’s not fair if you don’t!$"

Naranja_RutaAzul_G00_M18_Text_081B7FE7::
# 222 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: I’m AMY.\nAnd this is my little sister LIV.\lWe battle together!$"

Naranja_RutaAzul_G00_M18_Text_081B802B::
# 226 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Aww, boo!\nWe couldn’t win again...$"

Naranja_RutaAzul_G00_M18_Text_081B8053::
# 230 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: You have to think about all\nkinds of things when you’re battling\lagainst two TRAINERS.$"

Naranja_RutaAzul_G00_M18_Text_081B80AF::
# 234 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "AMY: Uh-oh, you have only one\nPOKéMON with you.\lYou can’t battle us like that.$"

Naranja_RutaAzul_G00_M18_Text_081B80FE::
# 238 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We battle together as one\nteam.$"

Naranja_RutaAzul_G00_M18_Text_081B8123::
# 242 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: Awww, we lost again...\nBig sister...$"

Naranja_RutaAzul_G00_M18_Text_081B814D::
# 246 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: We work perfectly together, me\nand my big sister...\pBut why did we lose again?$"

Naranja_RutaAzul_G00_M18_Text_081B81A1::
# 250 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "LIV: If you want to battle us, you\nhave to have two POKéMON!\lIt’s not fair if you don’t!$"

Naranja_RutaAzul_G00_M18_Text_081B81FA::
# 254 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Gah! My fishing line’s all snarled up!\nI’m getting frustrated and mean!\lThat’s it! Battle me!$"

Naranja_RutaAzul_G00_M18_Text_081B8258::
# 258 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Gah! Lost it!\nI’m even more annoyed now!$"

Naranja_RutaAzul_G00_M18_Text_081B8281::
# 262 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Gah, I’m still boiling mad...\nGrrrrr...$"

Naranja_RutaAzul_G00_M18_Text_081B82A9::
# 266 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "My POKéMON is delightfully adorable!\nDon’t be shy - I’ll show you!$"

Naranja_RutaAzul_G00_M18_Text_081B82EC::
# 270 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Oh, my gosh!\nMy darling POKéMON!$"

Naranja_RutaAzul_G00_M18_Text_081B830D::
# 274 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "My delightful POKéMON looks darling\neven when it’s fainted!$"

Naranja_RutaAzul_G00_M18_Text_081B8349::
# 278 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hi, you! My delightfully adorable\nPOKéMON has become more darling!$"

Naranja_RutaAzul_G00_M18_Text_081B838C::
# 282 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Oh!\nMy darling POKéMON!$"

Naranja_RutaAzul_G00_M18_Text_081B83A4::
# 286 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "The more I spend time with it, the\nmore adorable my POKéMON becomes.$"

Naranja_RutaAzul_G00_M18_Text_081C4449::
# 290 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "PROF. BIRCH: Ah, {PLAYER}{KUN}!\pHave you come to show me how your\nPOKéDEX is coming along?$"

Naranja_RutaAzul_G00_M18_Text_081C449B::
# 294 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hm? Oh, you haven’t caught enough\nPOKéMON to make it worthwhile.$"

Naranja_RutaAzul_G00_M18_Text_081C44DC::
# 298 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hmhm...\pSo, you’ve seen {STR_VAR_1} POKéMON,\nand you’ve caught {STR_VAR_2} POKéMON...$"

Naranja_RutaAzul_G00_M18_Text_081C4B05::
# 302 "data/maps/Naranja_RutaAzul_G00_M18/scripts.pory"
	.string "Hmhm...\nOn a nationwide basis...\pYou’ve seen {STR_VAR_1} POKéMON,\nand you’ve caught {STR_VAR_2} POKéMON...$"
