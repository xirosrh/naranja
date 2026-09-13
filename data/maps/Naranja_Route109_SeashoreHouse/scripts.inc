Naranja_Route109_SeashoreHouse_MapScripts::
# 5 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route109_SeashoreHouse_OnTransition
	.byte 0


Naranja_Route109_SeashoreHouse_OnTransition::
# 9 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_083F
	end


Naranja_Route109_SeashoreHouse_EventScript_Man3::
# 14 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008C
# 17 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E36
# 18 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008D
# 19 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E08
# 20 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checkflag FLAG_TEMP_2
# 21 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160DFE
# 22 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B4D9, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160DFE::
# 29 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B5B9, MSGBOX_DEFAULT
# 30 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E08::
# 35 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B609, MSGBOX_DEFAULT
# 36 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1B
# 37 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setorcopyvar VAR_0x8001, 6
# 38 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	callstd 0
# 39 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 40 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E2C
# 41 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008C
# 42 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E2C::
# 47 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B6BE, MSGBOX_DEFAULT
# 48 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E36::
# 53 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 54 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B702, MSGBOX_YESNO
# 55 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 56 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E5A
# 57 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B773, MSGBOX_DEFAULT
# 58 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 59 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E5A::
# 64 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checkmoney 0x12C
# 65 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 66 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E9E
# 67 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP, 1
# 68 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 69 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if EQUAL, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160EAB
# 70 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B74C, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	removemoney 0x12C
# 72 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 73 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1B
# 74 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 75 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	callstd 0
# 76 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 77 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160E9E::
# 82 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B759, MSGBOX_DEFAULT
# 83 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 84 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160EAB::
# 89 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_SevenGrapefruitIslands_Hall_Text_081A0CC2, MSGBOX_DEFAULT
# 90 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 91 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sailor::
# 96 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_493, Naranja_Route109_SeashoreHouse_Text_0819B809, Naranja_Route109_SeashoreHouse_Text_0819B869, Naranja_Route109_SeashoreHouse_EventScript_AfterBattle_08160F09
# 97 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B89F, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_SeashoreHouse_EventScript_Beauty::
# 102 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_647, Naranja_Route109_SeashoreHouse_Text_0819B8E5, Naranja_Route109_SeashoreHouse_Text_0819B949, Naranja_Route109_SeashoreHouse_EventScript_AfterBattle_08160F09
# 103 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B955, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_SeashoreHouse_EventScript_TuberM::
# 108 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE109_065, Naranja_Route109_SeashoreHouse_Text_0819B988, Naranja_Route109_SeashoreHouse_Text_0819B9C7, Naranja_Route109_SeashoreHouse_EventScript_AfterBattle_08160F09
# 109 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	msgbox Naranja_Route109_SeashoreHouse_Text_0819B9E5, MSGBOX_AUTOCLOSE
	end


Naranja_Route109_SeashoreHouse_EventScript_AfterBattle_08160F09::
# 114 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checktrainerflag 0x1ED
# 115 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160F29
# 116 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checktrainerflag 0x287
# 117 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160F29
# 118 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	checktrainerflag 0x41
# 119 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_SeashoreHouse_EventScript_Sub_08160F29
# 120 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008D
# 121 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_EventScript_Sub_08160F29::
# 126 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	release
	end


Naranja_Route109_SeashoreHouse_Text_0819B4D9::
# 130 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "I’m the owner of the SEASHORE HOUSE.\nBut you can call me MR. SEA!\pWhat I love above all is to see hot\nPOKéMON battles.\pLet me see that your heart burns hot!\pIf you can defeat all the TRAINERS\nhere, I’ll reward your efforts.$"

Naranja_Route109_SeashoreHouse_Text_0819B5B9::
# 134 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\pI run this SEASHORE HOUSE just for\nthat reason alone!$"

Naranja_Route109_SeashoreHouse_Text_0819B609::
# 138 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "You’re scorching hot!\nThose battles blazed!\lI’m more than just satisfied!\pAs thanks for showing me your hot\nstreak, I want you to take these.\pIt’s half a dozen bottles of SODA POP!$"

Naranja_Route109_SeashoreHouse_Text_0819B6BE::
# 142 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG’s jammed full.\nI’ll hang on to these for you.$"

Naranja_Route109_SeashoreHouse_Text_0819B702::
# 146 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some SODA POP?\nPOKéMON love it!\pJust ¥300 a bottle!\nBuy some!$"

Naranja_Route109_SeashoreHouse_Text_0819B74C::
# 150 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"

Naranja_Route109_SeashoreHouse_Text_0819B759::
# 154 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "You don’t have the money.$"

Naranja_Route109_SeashoreHouse_Text_0819B773::
# 158 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "No?\nThat’s too bad.$"

Naranja_Route109_SeashoreHouse_Text_0819B809::
# 162 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "If you’re looking for a battle on the\nhigh seas, you’ll find no hotter \lTRAINER than me, matey!$"

Naranja_Route109_SeashoreHouse_Text_0819B869::
# 166 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\nI can accept that loss, matey!$"

Naranja_Route109_SeashoreHouse_Text_0819B89F::
# 170 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I’m in SLATEPORT, I enjoy\nhot battles and ice-cold SODA POP!$"

Naranja_Route109_SeashoreHouse_Text_0819B8E5::
# 174 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren’t worth the effort.\pFiery hot battles are what toughen up\nTRAINERS and POKéMON!$"

Naranja_Route109_SeashoreHouse_Text_0819B949::
# 178 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "That’s hot!$"

Naranja_Route109_SeashoreHouse_Text_0819B955::
# 182 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I’m all thirsty.\nMaybe I’ll have a SODA POP.$"

Naranja_Route109_SeashoreHouse_Text_0819B988::
# 186 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "I’m going to show you how great my\nPOKéMON are, but don’t cry!$"

Naranja_Route109_SeashoreHouse_Text_0819B9C7::
# 190 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "...I lost, but I won’t cry...$"

Naranja_Route109_SeashoreHouse_Text_0819B9E5::
# 194 "data/maps/Naranja_Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\nfor carrying me across water on its\lback, I could get rid of this inner tube.$"
