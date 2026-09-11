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
	loadword 0, Naranja_Norte_G00_M28_Text_0816FF7F
# 36 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 2
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId1::
# 41 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_0816FFEE
# 42 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 2
	end


Naranja_Norte_G00_M28_EventScript_Sign_1::
# 47 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_08170065
# 48 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 3
	end


Naranja_Norte_G00_M28_EventScript_Sign_2::
# 53 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_0817007B
# 54 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 3
	end


Naranja_Norte_G00_M28_EventScript_Sign_4::
# 59 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_0817011D
# 60 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 3
	end


Naranja_Norte_G00_M28_EventScript_Sign_3::
# 65 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_08170096
# 66 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 3
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId3::
# 71 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_326, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BB9BA, Naranja_Norte_G00_M28_Text_081BB9E6
# 72 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BB9FB
# 73 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_SWIMMER_M_LocalId4::
# 78 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_327, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBA62, Naranja_Norte_G00_M28_Text_081BBA9B
# 79 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BBAB7
# 80 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId8::
# 85 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_419, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBC59, Naranja_Norte_G00_M28_Text_081BBC90
# 86 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 87 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 88 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G00_M28_EventScript_Sub_081506CE
# 89 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BBCAB
# 90 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_Sub_081506CE::
# 95 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_REMATCH, TRAINER_NARANJA_NORTE_419, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBCE6, Naranja_Norte_G00_M28_Text_081BBD1D
# 96 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BBD38
# 97 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId9::
# 102 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_NARANJA_NORTE_420, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBD92, Naranja_Norte_G00_M28_Text_081BBDC6
# 103 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BBE1D
# 104 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId10::
# 109 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_NORTE_677, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBE65, Naranja_Norte_G00_M28_Text_081BBEA1, Naranja_Norte_G00_M28_Text_081BBF25
# 110 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BBEE4
# 111 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId11::
# 116 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, TRAINER_NARANJA_NORTE_677, LOCALID_NONE, Naranja_Norte_G00_M28_Text_081BBF62, Naranja_Norte_G00_M28_Text_081BBF9D, Naranja_Norte_G00_M28_Text_081BC021
# 117 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_081BBFE2
# 118 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_AZURILL_LocalId6::
# 123 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8000, 0x23
# 124 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 125 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 1
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_ITEM_BALL_LocalId7::
# 130 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8000, 0x53
# 131 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 132 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 1
	end


Naranja_Norte_G00_M28_EventScript_OBJ_EVENT_GFX_NURSE_LocalId5::
# 137 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	faceplayer
# 138 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	checkitem ITEM_POTION, 0
# 139 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 140 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	goto_if EQUAL, Naranja_Norte_G00_M28_EventScript_Sub_086B7266
# 141 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 142 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	removeitem ITEM_POTION, 1
# 143 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_086B76F5
# 144 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
# 145 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	applymovement LOCALID_NORTE_G00_M28_NURSE, Naranja_Norte_G00_M28_Movement_081586D5
# 146 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 5
# 147 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 148 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_086B7757
# 149 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
# 150 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	playfanfare MUS_HEAL
# 151 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 0x50
# 152 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	applymovement LOCALID_NORTE_G00_M28_AZURILL, Naranja_Norte_G00_M28_Movement_086B727C
# 153 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 0x30
# 154 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 155 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	faceplayer
# 156 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	setflag FLAG_HIDE_ISLA_NAVEL_G05_M03_WOMAN_3
# 157 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	clearflag FLAG_HIDE_CAMINO_FRIO_G20_M02_NURSE
# 158 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 159 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	nop
# 160 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	call Naranja_IslaNavel_G05_M03_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId4
	end


Naranja_Norte_G00_M28_EventScript_Sub_086B7266::
# 165 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	loadword 0, Naranja_Norte_G00_M28_Text_086B76B3
# 166 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	callstd 6
# 167 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	applymovement LOCALID_NORTE_G00_M28_NURSE, Naranja_Norte_G00_M28_Movement_081586D5
# 168 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay 0x10
# 169 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	release
	end


# 173 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
Naranja_Norte_G00_M28_Movement_081586D5:
# 174 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	face_up
# 175 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay_16
	step_end

# 178 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
Naranja_Norte_G00_M28_Movement_086B727C:
# 179 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	walk_slow_left
# 180 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay_16
# 181 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	ride_water_current_left
# 182 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	delay_1
# 183 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	walk_down
# 184 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	face_right
	step_end

Naranja_Norte_G00_M28_Text_0816FF7F::
# 187 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Wahahaha! Today’s technology is a\nwondrous thing!\pTake this volcanic ash here.\nIt can be fashioned into glass.$"

Naranja_Norte_G00_M28_Text_0816FFEE::
# 191 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "It’s fun walking through the volcano’s\nashes on the ground and grass.\pYou can see where you walked - it’s\nreally neat!$"

Naranja_Norte_G00_M28_Text_08170065::
# 195 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "ROUTE 113\nワ ROUTE 111$"

Naranja_Norte_G00_M28_Text_0817007B::
# 199 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "ROUTE 113\nロ FALLARBOR TOWN$"

Naranja_Norte_G00_M28_Text_08170096::
# 203 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TRAINER TIPS\pYou may register one of the KEY ITEMS\nin your BAG as SELECT.\pSimply press SELECT to use the\nregistered item conveniently.$"

Naranja_Norte_G00_M28_Text_0817011D::
# 207 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "GLASS WORKSHOP\n“Turning Volcanic Ash into Glass Items”$"

Naranja_Norte_G00_M28_Text_081BB9BA::
# 211 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Can you guess why it’s so cool\naround here?$"

Naranja_Norte_G00_M28_Text_081BB9E6::
# 215 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Peeuuw!\nThat stinks!$"

Naranja_Norte_G00_M28_Text_081BB9FB::
# 219 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "The volcanic ash blocks the sun, so it\ndoesn’t get very warm.\pThat’s good for me - I can’t stand heat!$"

Naranja_Norte_G00_M28_Text_081BBA62::
# 223 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "The volcano’s eruption is proof that\nthe earth is alive.$"

Naranja_Norte_G00_M28_Text_081BBA9B::
# 227 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "You’re some kind of strong!$"

Naranja_Norte_G00_M28_Text_081BBAB7::
# 231 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Ouch! Owww! I can’t see!\nI got ashes in my eyelashes!\pGet it? Ashes and eyelashes?\pOkay, that was bad, sorry...$"

Naranja_Norte_G00_M28_Text_081BBC59::
# 235 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "From out of the ashes I leap! Hiyah!\nI challenge thee!$"

Naranja_Norte_G00_M28_Text_081BBC90::
# 239 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "With honor I admit defeat!$"

Naranja_Norte_G00_M28_Text_081BBCAB::
# 243 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "I must refine the art of concealment.\nI bid thee farewell.$"

Naranja_Norte_G00_M28_Text_081BBCE6::
# 247 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "From out of the ashes I leap! Hiyah!\nI challenge thee!$"

Naranja_Norte_G00_M28_Text_081BBD1D::
# 251 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "With honor I admit defeat!$"

Naranja_Norte_G00_M28_Text_081BBD38::
# 255 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "My flawless concealment was let down\nby my immature battle skills...\pI bid thee farewell.$"

Naranja_Norte_G00_M28_Text_081BBD92::
# 259 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "Thanks for finding me!\nBut we still have to battle!$"

Naranja_Norte_G00_M28_Text_081BBDC6::
# 263 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "I’ll use my ninjutsu on you...\n“VOLCANIC ASH SWIRL CLOAK”!\p...What? It’s already over?$"

Naranja_Norte_G00_M28_Text_081BBE1D::
# 267 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "You know what’s crummy about hiding?\nIt’s lonely if no one comes along.$"

Naranja_Norte_G00_M28_Text_081BBE65::
# 271 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: Both of us, we collect ashes.\nWe battle POKéMON, too.$"

Naranja_Norte_G00_M28_Text_081BBEA1::
# 275 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: We lost... It’s boring, so I’m going\nto get some more ashes.$"

Naranja_Norte_G00_M28_Text_081BBEE4::
# 279 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: How much ash do we have?\nEnough for a WHITE FLUTE, I hope.$"

Naranja_Norte_G00_M28_Text_081BBF25::
# 283 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TORI: We want to battle 2-on-2.\nIf we didn’t, we would lose!$"

Naranja_Norte_G00_M28_Text_081BBF62::
# 287 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: Both of us, we collect ashes.\nWe battle POKéMON, too.$"

Naranja_Norte_G00_M28_Text_081BBF9D::
# 291 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: We couldn’t win... It’s boring,\nso I’m getting some more ashes.$"

Naranja_Norte_G00_M28_Text_081BBFE2::
# 295 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: We have a lot of ashes!\nI think enough for a WHITE FLUTE!$"

Naranja_Norte_G00_M28_Text_081BC021::
# 299 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "TIA: We want to battle 2-on-2.\nIf we don’t, we won’t win!$"

Naranja_Norte_G00_M28_Text_086B76B3::
# 303 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "¡Estoy sanando a este SEEL!\p¿Me puedes traer\nuna POCIÓN, soci{RIVAL}?\p$"

Naranja_Norte_G00_M28_Text_086B76F5::
# 307 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "¡Estoy sanando a este SEEL!\p¿Me trajiste una POCIÓN soci{RIVAL}?\p{PLAYER} dio una POCIÓN\na la ENFERMERA JOY.$"

Naranja_Norte_G00_M28_Text_086B7757::
# 311 "data/maps/Naranja_Norte_G00_M28/scripts.pory"
	.string "SEEL se está tomando la POCIÓN\ny le está haciendo efecto.$"
