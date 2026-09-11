Naranja_Route109_G28_M00_MapScripts::
# 5 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route109_G28_M00_OnTransition
	.byte 0


Naranja_Route109_G28_M00_OnTransition::
# 9 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_083F
	end


Naranja_Route109_G28_M00_EventScript_OBJ_EVENT_GFX_MAN_3_LocalId1::
# 14 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	lock
# 15 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	faceplayer
# 16 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008C
# 17 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160E36
# 18 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008D
# 19 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160E08
# 20 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checkflag FLAG_TEMP_2
# 21 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160DFE
# 22 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B4D9
# 23 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 24 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160DFE::
# 30 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B5B9
# 31 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 32 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160E08::
# 37 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B609
# 38 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1B
# 40 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 6
# 41 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 0
# 42 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 43 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160E2C
# 44 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008C
# 45 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160E2C::
# 50 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B6BE
# 51 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160E36::
# 57 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	showmoneybox 0, 0, 0
# 58 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B702
# 59 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 5
# 60 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 61 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160E5A
# 62 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B773
# 63 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 64 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	hidemoneybox
# 65 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160E5A::
# 70 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checkmoney 0x12C, 0
# 71 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 72 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160E9E
# 73 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checkitemspace ITEM_SODA_POP, 1
# 74 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 75 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if EQUAL, Naranja_Route109_G28_M00_EventScript_Sub_08160EAB
# 76 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B74C
# 77 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 78 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	removemoney 0x12C, 0
# 79 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	updatemoneybox 0
# 80 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setorcopyvar VAR_0x8000, 0x1B
# 81 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 82 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 0
# 83 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	hidemoneybox
# 84 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160E9E::
# 89 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B759
# 90 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 91 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	hidemoneybox
# 92 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160EAB::
# 97 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M04_Text_081A0CC2
# 98 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	hidemoneybox
# 100 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId2::
# 105 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_ROUTE109_493, LOCALID_NONE, Naranja_Route109_G28_M00_Text_0819B809, Naranja_Route109_G28_M00_Text_0819B869, Naranja_Route109_G28_M00_EventScript_AfterBattle_08160F09
# 106 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B89F
# 107 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 6
	end


Naranja_Route109_G28_M00_EventScript_OBJ_EVENT_GFX_BEAUTY_LocalId4::
# 112 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_ROUTE109_647, LOCALID_NONE, Naranja_Route109_G28_M00_Text_0819B8E5, Naranja_Route109_G28_M00_Text_0819B949, Naranja_Route109_G28_M00_EventScript_AfterBattle_08160F09
# 113 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B955
# 114 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 6
	end


Naranja_Route109_G28_M00_EventScript_OBJ_EVENT_GFX_TUBER_M_LocalId3::
# 119 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_NARANJA_ROUTE109_065, LOCALID_NONE, Naranja_Route109_G28_M00_Text_0819B988, Naranja_Route109_G28_M00_Text_0819B9C7, Naranja_Route109_G28_M00_EventScript_AfterBattle_08160F09
# 120 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	loadword 0, Naranja_Route109_G28_M00_Text_0819B9E5
# 121 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	callstd 6
	end


Naranja_Route109_G28_M00_EventScript_AfterBattle_08160F09::
# 126 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checktrainerflag 0x1ED
# 127 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_G28_M00_EventScript_Sub_08160F29
# 128 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checktrainerflag 0x287
# 129 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_G28_M00_EventScript_Sub_08160F29
# 130 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	checktrainerflag 0x41
# 131 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	goto_if LESS_THAN, Naranja_Route109_G28_M00_EventScript_Sub_08160F29
# 132 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	setflag FLAG_NARANJA_ROUTE109_EVENT_COMPLETE_008D
# 133 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_EventScript_Sub_08160F29::
# 138 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	release
	end


Naranja_Route109_G28_M00_Text_0819B4D9::
# 142 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "I’m the owner of the SEASHORE HOUSE.\nBut you can call me MR. SEA!\pWhat I love above all is to see hot\nPOKéMON battles.\pLet me see that your heart burns hot!\pIf you can defeat all the TRAINERS\nhere, I’ll reward your efforts.$"

Naranja_Route109_G28_M00_Text_0819B5B9::
# 146 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Show me some hot matches!\pI run this SEASHORE HOUSE just for\nthat reason alone!$"

Naranja_Route109_G28_M00_Text_0819B609::
# 150 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "You’re scorching hot!\nThose battles blazed!\lI’m more than just satisfied!\pAs thanks for showing me your hot\nstreak, I want you to take these.\pIt’s half a dozen bottles of SODA POP!$"

Naranja_Route109_G28_M00_Text_0819B6BE::
# 154 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Oh, but hey, your BAG’s jammed full.\nI’ll hang on to these for you.$"

Naranja_Route109_G28_M00_Text_0819B702::
# 158 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Want to buy some SODA POP?\nPOKéMON love it!\pJust ¥300 a bottle!\nBuy some!$"

Naranja_Route109_G28_M00_Text_0819B74C::
# 162 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Here you go!$"

Naranja_Route109_G28_M00_Text_0819B759::
# 166 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "You don’t have the money.$"

Naranja_Route109_G28_M00_Text_0819B773::
# 170 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "No?\nThat’s too bad.$"

Naranja_Route109_G28_M00_Text_0819B809::
# 174 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "If you’re looking for a battle on the\nhigh seas, you’ll find no hotter \lTRAINER than me, matey!$"

Naranja_Route109_G28_M00_Text_0819B869::
# 178 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "That was a hot battle!\nI can accept that loss, matey!$"

Naranja_Route109_G28_M00_Text_0819B89F::
# 182 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Whenever I’m in SLATEPORT, I enjoy\nhot battles and ice-cold SODA POP!$"

Naranja_Route109_G28_M00_Text_0819B8E5::
# 186 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Boring battles aren’t worth the effort.\pFiery hot battles are what toughen up\nTRAINERS and POKéMON!$"

Naranja_Route109_G28_M00_Text_0819B949::
# 190 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "That’s hot!$"

Naranja_Route109_G28_M00_Text_0819B955::
# 194 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "Whew, I’m all thirsty.\nMaybe I’ll have a SODA POP.$"

Naranja_Route109_G28_M00_Text_0819B988::
# 198 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "I’m going to show you how great my\nPOKéMON are, but don’t cry!$"

Naranja_Route109_G28_M00_Text_0819B9C7::
# 202 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "...I lost, but I won’t cry...$"

Naranja_Route109_G28_M00_Text_0819B9E5::
# 206 "data/maps/Naranja_Route109_G28_M00/scripts.pory"
	.string "If one of my POKéMON knew the move\nfor carrying me across water on its\lback, I could get rid of this inner tube.$"
