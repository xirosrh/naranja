Naranja_Tangelo_G00_M16_MapScripts::
# 5 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Tangelo_G00_M16_OnTransition
# 6 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_Tangelo_G00_M16_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_Tangelo_G00_M16_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	map_script_2 VAR_NARANJA_TANGELO_STORY_STATE, 0, Naranja_Tangelo_G00_M16_OnFrame_1
	.2byte 0


Naranja_Tangelo_G00_M16_OnTransition::
# 12 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	call Naranja_PuebloPaleta_G01_M04_EventScript_Sub_081A02F4
	end


Naranja_Tangelo_G00_M16_OnFrame_1::
# 17 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	setflag FLAG_NARANJA_ISLA_VALENCIA_EVENT_COMPLETE_4000
# 18 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	setvar VAR_NARANJA_TANGELO_STORY_STATE, 1
	end


Naranja_Tangelo_G00_M16_EventScript_Trigger_9::
# 23 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	lockall
# 24 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_PuebloPaleta_G01_M04_Text_086BEC6C, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	closemessage
# 26 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_Tangelo_G00_M16_Movement_0814E9FE
# 27 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitmovement LOCALID_NONE
# 28 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	releaseall
	end


Naranja_Tangelo_G00_M16_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId1::
# 33 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_0816D25E, MSGBOX_NPC
	end


Naranja_Tangelo_G00_M16_EventScript_Sign_1::
# 38 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_086BF497, MSGBOX_SIGN
	end


Naranja_Tangelo_G00_M16_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId5::
# 43 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	lock
# 44 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	faceplayer
# 45 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special GetDaycareMonNicknames
# 46 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 47 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 48 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B2262
# 49 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 50 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B22E7
# 51 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 52 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B22FE
# 53 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B25CB, MSGBOX_DEFAULT
# 54 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_081B2262::
# 59 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B2659, MSGBOX_YESNO
# 60 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B2298
# 62 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B28C4, MSGBOX_YESNO
# 63 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 64 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B2298
# 65 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B2745, MSGBOX_DEFAULT
# 66 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	clearflag FLAG_NARANJA_TANGELO_EVENT_COMPLETE_0086
# 67 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special RejectEggFromDayCare
# 68 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_081B2298::
# 73 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 74 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 75 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if NOT_EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B22B2
# 76 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B2766, MSGBOX_DEFAULT
# 77 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_081B22B2::
# 82 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	message Naranja_Tangelo_G00_M16_Text_081B27A2
# 83 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 84 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitfanfare
# 85 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitmessage
# 86 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitbuttonpress
# 87 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B27CD, MSGBOX_DEFAULT
# 88 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special GiveEggFromDaycare
# 89 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	clearflag FLAG_NARANJA_TANGELO_EVENT_COMPLETE_0086
# 90 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_081B22CD::
# 95 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	specialvar VAR_RESULT, CheckDaycareMonReceivedMail
# 96 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 97 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	call_if EQUAL, Naranja_Tangelo_G00_M16_EventScript_Sub_081B22DE
	return


Naranja_Tangelo_G00_M16_EventScript_Sub_081B22DE::
# 102 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B27E3, MSGBOX_DEFAULT
	return


Naranja_Tangelo_G00_M16_EventScript_Sub_081B22E7::
# 107 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special GetDaycareMonNicknames
# 108 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B2710, MSGBOX_DEFAULT
# 109 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	setvar VAR_0x8004, 0
# 110 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	call Naranja_Tangelo_G00_M16_EventScript_Sub_081B22CD
# 111 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_081B22FE::
# 116 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special GetDaycareMonNicknames
# 117 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081B2897, MSGBOX_DEFAULT
# 118 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special SetDaycareCompatibilityString
# 119 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	special ShowFieldMessageStringVar4
# 120 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitmessage
# 121 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitbuttonpress
# 122 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	setvar VAR_0x8004, 0
# 123 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	call Naranja_Tangelo_G00_M16_EventScript_Sub_081B22CD
# 124 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	setvar VAR_0x8004, 1
# 125 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	call Naranja_Tangelo_G00_M16_EventScript_Sub_081B22CD
# 126 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_OBJ_EVENT_GFX_WALLY_LocalId2::
# 131 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	faceplayer
# 132 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	checkflag FLAG_NARANJA_VALN_TANG_EVENT_COMPLETE_2114
# 133 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	call_if LESS_THAN, Naranja_Tangelo_G00_M16_EventScript_Sub_086B4595
# 134 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	checkflag FLAG_HIDE_TANGELO_G00_M16_WALLY
# 135 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	goto_if LESS_THAN, Naranja_Tangelo_G00_M16_EventScript_Sub_086B45A7
# 136 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_086B4595::
# 141 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	lock
# 142 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_GraniteCave_G24_M00_Movement_0815C64F
# 143 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_08178F9F, MSGBOX_NPC
	end


Naranja_Tangelo_G00_M16_EventScript_Sub_086B45A7::
# 148 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	setflag FLAG_HIDE_TANGELO_G00_M16_WALLY
# 149 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_086B45C2, MSGBOX_DEFAULT
# 150 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	nop
# 151 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	nop
# 152 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	nop
# 153 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	nop
# 154 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	warp MAP_NARANJA_TANGELO_G24_M29, 0, 0, 0x26C
# 155 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	nop
# 156 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	nop
	end


Naranja_Tangelo_G00_M16_EventScript_OBJ_EVENT_GFX_AZUMARILL_LocalId3::
# 161 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	lock
# 162 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	faceplayer
# 163 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitse
# 164 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	playmoncry SPECIES_MACHOP, 0
# 165 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_Tangelo_G00_M16_Text_081701F9, MSGBOX_DEFAULT
# 166 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitmoncry
# 167 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


Naranja_Tangelo_G00_M16_EventScript_OBJ_EVENT_GFX_UNUSED_PIKACHU_DOLL_LocalId4::
# 172 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	lock
# 173 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	faceplayer
# 174 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitse
# 175 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	playmoncry SPECIES_KIRLIA, 0
# 176 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	msgbox Naranja_IslaValencia_G13_M13_Text_0817E156, MSGBOX_DEFAULT
# 177 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	waitmoncry
# 178 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	release
	end


# 182 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
Naranja_Tangelo_G00_M16_Movement_0814E9FE:
# 183 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	walk_down
	step_end

Naranja_Tangelo_G00_M16_Text_0816D25E::
# 186 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Todos los centros trabajamos juntos\npara defenfer a los Pokemon\lde los cazadores.\p ¡Cuida el medio ambiente!$"

Naranja_Tangelo_G00_M16_Text_081701F9::
# 190 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Bow! Bowwow!$"

Naranja_Tangelo_G00_M16_Text_08178F9F::
# 194 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "{COLOR 0x03}Eh\p¿Quieres entrar?\pJaja…\p¿No sabes que en este lugar   \nlos pokemon se recuperan\lde los daños que hayan sufrido?\pEn ningùn caso podras entrar\nsin un permiso especial expedido por\lalguien competente.$"

Naranja_Tangelo_G00_M16_Text_081B25CB::
# 198 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "I’m the DAY-CARE MAN.\pI help take care of the precious\nPOKéMON of TRAINERS.\pIf you’d like me to raise your POKéMON,\nhave a word with my wife.$"

Naranja_Tangelo_G00_M16_Text_081B2659::
# 202 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Ah, it’s you!\pWe were raising your POKéMON, and my\ngoodness, were we surprised!\pYour POKéMON had an EGG!\pWe don’t know how it got there,\nbut your POKéMON had it.\pYou do want it, yes?$"

Naranja_Tangelo_G00_M16_Text_081B2710::
# 206 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Ah, it’s you! Good to see you.\nYour {STR_VAR_1}’s doing fine.$"

Naranja_Tangelo_G00_M16_Text_081B2745::
# 210 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Well then, I’ll keep it.\nThanks!$"

Naranja_Tangelo_G00_M16_Text_081B2766::
# 214 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "You have no room for it...\nCome back when you’ve made room.$"

Naranja_Tangelo_G00_M16_Text_081B27A2::
# 218 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "{PLAYER} received the EGG from\nthe DAY-CARE MAN.$"

Naranja_Tangelo_G00_M16_Text_081B27CD::
# 222 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Take good care of it.$"

Naranja_Tangelo_G00_M16_Text_081B27E3::
# 226 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "By the way, about your {STR_VAR_1},\nit seemed to be friendly with\l{STR_VAR_2}’s {STR_VAR_3}.\pI may even have seen it receiving\na piece of MAIL.$"

Naranja_Tangelo_G00_M16_Text_081B2897::
# 230 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Ah, it’s you! Your {STR_VAR_1} and\n{STR_VAR_2} are doing fine.$"

Naranja_Tangelo_G00_M16_Text_081B28C4::
# 234 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "I really will keep it.\nYou do want this, yes?$"

Naranja_Tangelo_G00_M16_Text_086B45C2::
# 238 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "{COLOR 0x03}¿Tienes el permiso para pasar?\pVa, está bien.\pPero para hacerte cargo de Lapras\ntendré que comprobar que tal\lentrenador eres.$"

Naranja_Tangelo_G00_M16_Text_086BF497::
# 242 "data/maps/Naranja_Tangelo_G00_M16/scripts.pory"
	.string "Centro de recuperación Pokémon$"
