Naranja_Norte_G00_M28_MapScripts::
# 5 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Naranja_Norte_G00_M28_OnResume
# 6 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Norte_G00_M28_OnTransition
	.byte 0


Naranja_Norte_G00_M28_OnResume::
# 10 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setstepcallback 1
	end


Naranja_Norte_G00_M28_OnTransition::
# 15 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	call Naranja_Norte_G00_M28_EventScript_Sub_081505E5
# 16 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	call Naranja_Bementer_G24_M22_EventScript_Sub_081A0196
	end


Naranja_Norte_G00_M28_EventScript_Sub_081505E5::
# 21 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0x13
# 23 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	goto_if LESS_THAN, Naranja_Norte_G00_M28_EventScript_Sub_08150604
# 24 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0x54
# 25 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	goto_if GREATER_THAN, Naranja_Norte_G00_M28_EventScript_Sub_08150604
# 26 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setweather 7
	return


Naranja_Norte_G00_M28_EventScript_Sub_08150604::
	return


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId2::
# 35 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_0816FF7F, MSGBOX_NPC
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId1::
# 40 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_0816FFEE, MSGBOX_NPC
	end


Naranja_Norte_G00_M28_EventScript_Sign_1::
# 45 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_08170065, MSGBOX_SIGN
	end


Naranja_Norte_G00_M28_EventScript_Sign_2::
# 50 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_0817007B, MSGBOX_SIGN
	end


Naranja_Norte_G00_M28_EventScript_Sign_4::
# 55 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_0817011D, MSGBOX_SIGN
	end


Naranja_Norte_G00_M28_EventScript_Sign_3::
# 60 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_08170096, MSGBOX_SIGN
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId3::
# 65 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_326, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BB9BA, Naranja_Norte_G00_M28_Text_081BB9E6
# 66 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BB9FB, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId4::
# 71 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_327, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBA62, Naranja_Norte_G00_M28_Text_081BBA9B
# 72 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BBAB7, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId8::
# 77 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_419, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBC59, Naranja_Norte_G00_M28_Text_081BBC90
# 78 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 79 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 80 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G00_M28_EventScript_Sub_081506CE
# 81 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BBCAB, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_Sub_081506CE::
# 86 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_NORTE_419, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBCE6, Naranja_Norte_G00_M28_Text_081BBD1D
# 87 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BBD38, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId9::
# 92 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_420, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBD92, Naranja_Norte_G00_M28_Text_081BBDC6
# 93 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BBE1D, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId10::
# 98 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_NORTE_677, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBE65, Naranja_Norte_G00_M28_Text_081BBEA1, Naranja_Norte_G00_M28_Text_081BBF25
# 99 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BBEE4, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId11::
# 104 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_NORTE_677, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBF62, Naranja_Norte_G00_M28_Text_081BBF9D, Naranja_Norte_G00_M28_Text_081BC021
# 105 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_081BBFE2, MSGBOX_AUTOCLOSE
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_AZURILL_LocalId6::
# 110 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8000, 0x23
# 111 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 112 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 1
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 117 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8000, 0x53
# 118 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 119 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 1
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_NURSE_LocalId5::
# 124 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	faceplayer
# 125 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	checkitem ITEM_POTION, 0
# 126 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 127 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G00_M28_EventScript_Sub_086B7266
# 128 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 129 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	removeitem ITEM_POTION, 1
# 130 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_086B76F5, MSGBOX_AUTOCLOSE
# 131 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	applymovement LOCALID_NORTE_G00_M28_NURSE, Naranja_Norte_G00_M28_Movement_081586D5
# 132 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 5
# 133 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 134 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_086B7757, MSGBOX_AUTOCLOSE
# 135 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	playfanfare MUS_HEAL
# 136 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 0x50
# 137 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	applymovement LOCALID_NORTE_G00_M28_AZURILL, Naranja_Norte_G00_M28_Movement_086B727C
# 138 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 0x30
# 139 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 140 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	faceplayer
# 141 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setflag FLAG_HIDE_ISLA_NAVEL_G05_M03_WOMAN_3
# 142 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	clearflag FLAG_HIDE_CAMINO_FRIO_G20_M02_NURSE
# 143 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 144 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 145 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	call Naranja_IslaNavel_G05_M03_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId4
	end


Naranja_Norte_G00_M28_EventScript_Sub_086B7266::
# 150 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	msgbox Naranja_Norte_G00_M28_Text_086B76B3, MSGBOX_AUTOCLOSE
# 151 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	applymovement LOCALID_NORTE_G00_M28_NURSE, Naranja_Norte_G00_M28_Movement_081586D5
# 152 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 0x10
# 153 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	release
	end


# 157 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
Naranja_Norte_G00_M28_Movement_081586D5:
# 158 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	face_up
# 159 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay_16
	step_end

# 162 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
Naranja_Norte_G00_M28_Movement_086B727C:
# 163 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	walk_slow_left
# 164 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay_16
# 165 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	ride_water_current_left
# 166 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay_1
# 167 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	walk_down
# 168 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	face_right
	step_end

Naranja_Norte_G00_M28_Text_0816FF7F::
# 171 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Wahahaha! Today’s technology is a\nwondrous thing!\pTake this volcanic ash here.\nIt can be fashioned into glass.$"

Naranja_Norte_G00_M28_Text_0816FFEE::
# 175 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "It’s fun walking through the volcano’s\nashes on the ground and grass.\pYou can see where you walked - it’s\nreally neat!$"

Naranja_Norte_G00_M28_Text_08170065::
# 179 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "ROUTE 113\nワ ROUTE 111$"

Naranja_Norte_G00_M28_Text_0817007B::
# 183 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "ROUTE 113\nロ FALLARBOR TOWN$"

Naranja_Norte_G00_M28_Text_08170096::
# 187 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TRAINER TIPS\pYou may register one of the KEY ITEMS\nin your BAG as SELECT.\pSimply press SELECT to use the\nregistered item conveniently.$"

Naranja_Norte_G00_M28_Text_0817011D::
# 191 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "GLASS WORKSHOP\n“Turning Volcanic Ash into Glass Items”$"

Naranja_Norte_G00_M28_Text_081BB9BA::
# 195 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Can you guess why it’s so cool\naround here?$"

Naranja_Norte_G00_M28_Text_081BB9E6::
# 199 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Peeuuw!\nThat stinks!$"

Naranja_Norte_G00_M28_Text_081BB9FB::
# 203 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "The volcanic ash blocks the sun, so it\ndoesn’t get very warm.\pThat’s good for me - I can’t stand heat!$"

Naranja_Norte_G00_M28_Text_081BBA62::
# 207 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "The volcano’s eruption is proof that\nthe earth is alive.$"

Naranja_Norte_G00_M28_Text_081BBA9B::
# 211 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "You’re some kind of strong!$"

Naranja_Norte_G00_M28_Text_081BBAB7::
# 215 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Ouch! Owww! I can’t see!\nI got ashes in my eyelashes!\pGet it? Ashes and eyelashes?\pOkay, that was bad, sorry...$"

Naranja_Norte_G00_M28_Text_081BBC59::
# 219 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "From out of the ashes I leap! Hiyah!\nI challenge thee!$"

Naranja_Norte_G00_M28_Text_081BBC90::
# 223 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "With honor I admit defeat!$"

Naranja_Norte_G00_M28_Text_081BBCAB::
# 227 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "I must refine the art of concealment.\nI bid thee farewell.$"

Naranja_Norte_G00_M28_Text_081BBCE6::
# 231 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "From out of the ashes I leap! Hiyah!\nI challenge thee!$"

Naranja_Norte_G00_M28_Text_081BBD1D::
# 235 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "With honor I admit defeat!$"

Naranja_Norte_G00_M28_Text_081BBD38::
# 239 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "My flawless concealment was let down\nby my immature battle skills...\pI bid thee farewell.$"

Naranja_Norte_G00_M28_Text_081BBD92::
# 243 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Thanks for finding me!\nBut we still have to battle!$"

Naranja_Norte_G00_M28_Text_081BBDC6::
# 247 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "I’ll use my ninjutsu on you...\n“VOLCANIC ASH SWIRL CLOAK”!\p...What? It’s already over?$"

Naranja_Norte_G00_M28_Text_081BBE1D::
# 251 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "You know what’s crummy about hiding?\nIt’s lonely if no one comes along.$"

Naranja_Norte_G00_M28_Text_081BBE65::
# 255 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: Both of us, we collect ashes.\nWe battle POKéMON, too.$"

Naranja_Norte_G00_M28_Text_081BBEA1::
# 259 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: We lost... It’s boring, so I’m going\nto get some more ashes.$"

Naranja_Norte_G00_M28_Text_081BBEE4::
# 263 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: How much ash do we have?\nEnough for a WHITE FLUTE, I hope.$"

Naranja_Norte_G00_M28_Text_081BBF25::
# 267 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: We want to battle 2-on-2.\nIf we didn’t, we would lose!$"

Naranja_Norte_G00_M28_Text_081BBF62::
# 271 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: Both of us, we collect ashes.\nWe battle POKéMON, too.$"

Naranja_Norte_G00_M28_Text_081BBF9D::
# 275 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: We couldn’t win... It’s boring,\nso I’m getting some more ashes.$"

Naranja_Norte_G00_M28_Text_081BBFE2::
# 279 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: We have a lot of ashes!\nI think enough for a WHITE FLUTE!$"

Naranja_Norte_G00_M28_Text_081BC021::
# 283 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: We want to battle 2-on-2.\nIf we don’t, we won’t win!$"

Naranja_Norte_G00_M28_Text_086B76B3::
# 287 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "¡Estoy sanando a este SEEL!\p¿Me puedes traer\nuna POCIÓN, soci{RIVAL}?\p$"

Naranja_Norte_G00_M28_Text_086B76F5::
# 291 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "¡Estoy sanando a este SEEL!\p¿Me trajiste una POCIÓN soci{RIVAL}?\p{PLAYER} dio una POCIÓN\na la ENFERMERA JOY.$"

Naranja_Norte_G00_M28_Text_086B7757::
# 295 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "SEEL se está tomando la POCIÓN\ny le está haciendo efecto.$"
