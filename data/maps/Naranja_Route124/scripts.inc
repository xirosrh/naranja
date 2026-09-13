Naranja_Route124_MapScripts::
# 5 "data/maps/Naranja_Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_Route124_OnTransition
	.byte 0


Naranja_Route124_OnTransition::
# 9 "data/maps/Naranja_Route124/scripts.pory"
	checkflag FLAG_NARANJA_ROUTE666_EVENT_COMPLETE_082A
# 10 "data/maps/Naranja_Route124/scripts.pory"
	call_if EQUAL, Naranja_KumquatIsland_EventScript_Sub_081A02C1
	end


Naranja_Route124_EventScript_Sign_1::
# 15 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_08171ED1, MSGBOX_SIGN
	end


Naranja_Route124_EventScript_SwimmerM::
# 20 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE124_159, Naranja_Route124_Text_081C0624, Naranja_Route124_Text_081C0675
# 21 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0693, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_SwimmerM_2::
# 26 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE124_160, Naranja_Route124_Text_081C06F7, Naranja_Route124_Text_081C0741
# 27 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0750, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_SwimmerF::
# 32 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE124_449, Naranja_Route124_Text_081C07B4, Naranja_Route124_Text_081C07F9
# 33 "data/maps/Naranja_Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 34 "data/maps/Naranja_Route124/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 35 "data/maps/Naranja_Route124/scripts.pory"
	goto_if EQUAL, Naranja_Route124_EventScript_Sub_08151E4D
# 36 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C080E, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_Sub_08151E4D::
# 41 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_rematch TRAINER_NARANJA_ROUTE124_449, Naranja_Route124_Text_081C0888, Naranja_Route124_Text_081C08C8
# 42 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C08EA, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_SwimmerF_2::
# 47 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE124_450, Naranja_Route124_Text_081C0936, Naranja_Route124_Text_081C096B
# 48 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0994, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_SwimmerM_3::
# 53 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_ROUTE124_174, Naranja_Route124_Text_081C09CE, Naranja_Route124_Text_081C0A2F
# 54 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0A52, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_SwimmerF_3::
# 59 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE124_687, Naranja_Route124_Text_081C0ABD, Naranja_Route124_Text_081C0B36, Naranja_Route124_Text_081C0BC8
# 60 "data/maps/Naranja_Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 61 "data/maps/Naranja_Route124/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 62 "data/maps/Naranja_Route124/scripts.pory"
	goto_if EQUAL, Naranja_Route124_EventScript_Sub_08151EBD
# 63 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0B72, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_Sub_08151EBD::
# 68 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_NARANJA_ROUTE124_687, Naranja_Route124_Text_081C0D1F, Naranja_Route124_Text_081C0DB5, Naranja_Route124_Text_081C0E5C
# 69 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0E06, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_TuberMSwimming::
# 74 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_double TRAINER_NARANJA_ROUTE124_687, Naranja_Route124_Text_081C0C0E, Naranja_Route124_Text_081C0C4F, Naranja_Route124_Text_081C0CE0
# 75 "data/maps/Naranja_Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 76 "data/maps/Naranja_Route124/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 77 "data/maps/Naranja_Route124/scripts.pory"
	goto_if EQUAL, Naranja_Route124_EventScript_Sub_08151F03
# 78 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0C7F, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_Sub_08151F03::
# 83 "data/maps/Naranja_Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_NARANJA_ROUTE124_687, Naranja_Route124_Text_081C0EA2, Naranja_Route124_Text_081C0EE5, Naranja_Route124_Text_081C0F90
# 84 "data/maps/Naranja_Route124/scripts.pory"
	msgbox Naranja_Route124_Text_081C0F19, MSGBOX_AUTOCLOSE
	end


Naranja_Route124_EventScript_ItemBall::
# 89 "data/maps/Naranja_Route124/scripts.pory"
	setorcopyvar VAR_0x8000, 0x30
# 90 "data/maps/Naranja_Route124/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 91 "data/maps/Naranja_Route124/scripts.pory"
	callstd 1
	end


Naranja_Route124_EventScript_ItemBall_2::
# 96 "data/maps/Naranja_Route124/scripts.pory"
	setorcopyvar VAR_0x8000, 0x31
# 97 "data/maps/Naranja_Route124/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 98 "data/maps/Naranja_Route124/scripts.pory"
	callstd 1
	end


Naranja_Route124_EventScript_ItemBall_3::
# 103 "data/maps/Naranja_Route124/scripts.pory"
	setorcopyvar VAR_0x8000, 0x32
# 104 "data/maps/Naranja_Route124/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 105 "data/maps/Naranja_Route124/scripts.pory"
	callstd 1
	end


Naranja_Route124_Text_08171ED1::
# 109 "data/maps/Naranja_Route124/scripts.pory"
	.string "HUNTER’S HOUSE$"

Naranja_Route124_Text_081C0624::
# 113 "data/maps/Naranja_Route124/scripts.pory"
	.string "Hey, are you lost at sea?\pIf you can beat my POKéMON, I can\nserve as your pilot.$"

Naranja_Route124_Text_081C0675::
# 117 "data/maps/Naranja_Route124/scripts.pory"
	.string "I lost my bearings in battle!$"

Naranja_Route124_Text_081C0693::
# 121 "data/maps/Naranja_Route124/scripts.pory"
	.string "Many people lose their bearings at sea.\pIf you’re that sort, you should refer\nto the POKéNAV’s MAP.$"

Naranja_Route124_Text_081C06F7::
# 125 "data/maps/Naranja_Route124/scripts.pory"
	.string "Hm! You’re riding a POKéMON instead\nof swimming yourself...\pI am envious!$"

Naranja_Route124_Text_081C0741::
# 129 "data/maps/Naranja_Route124/scripts.pory"
	.string "Oh!\nI can’t...$"

Naranja_Route124_Text_081C0750::
# 133 "data/maps/Naranja_Route124/scripts.pory"
	.string "I’m getting chilled...\nI’ve been in the water too long...\pI wish I could ride a POKéMON like you...$"

Naranja_Route124_Text_081C07B4::
# 137 "data/maps/Naranja_Route124/scripts.pory"
	.string "If you just float in the sea like\nthis, POKéMON come around to play.$"

Naranja_Route124_Text_081C07F9::
# 141 "data/maps/Naranja_Route124/scripts.pory"
	.string "Oh...\nLost at sea...$"

Naranja_Route124_Text_081C080E::
# 145 "data/maps/Naranja_Route124/scripts.pory"
	.string "While swimming, I noticed that some\nPOKéMON attack, and some just watch.\pI guess POKéMON have personalities\nof their own.$"

Naranja_Route124_Text_081C0888::
# 149 "data/maps/Naranja_Route124/scripts.pory"
	.string "If you just float in the sea like this,\nTRAINERS challenge you!$"

Naranja_Route124_Text_081C08C8::
# 153 "data/maps/Naranja_Route124/scripts.pory"
	.string "That’s strange...\nI lost again...$"

Naranja_Route124_Text_081C08EA::
# 157 "data/maps/Naranja_Route124/scripts.pory"
	.string "This has nothing to do with anything,\nbut maybe I’ll visit the TRICK HOUSE.$"

Naranja_Route124_Text_081C0936::
# 161 "data/maps/Naranja_Route124/scripts.pory"
	.string "I’m growing bored of swimming...\nHow about a battle?$"

Naranja_Route124_Text_081C096B::
# 165 "data/maps/Naranja_Route124/scripts.pory"
	.string "I had no idea that you were\nthis strong!$"

Naranja_Route124_Text_081C0994::
# 169 "data/maps/Naranja_Route124/scripts.pory"
	.string "All the effort you put in must have\nmade you this strong.$"

Naranja_Route124_Text_081C09CE::
# 173 "data/maps/Naranja_Route124/scripts.pory"
	.string "Fufufufu... I dive deep underwater\nto go deep under cover.\lPlumbing the depths is where I excel!$"

Naranja_Route124_Text_081C0A2F::
# 177 "data/maps/Naranja_Route124/scripts.pory"
	.string "Glub, glub, glub...\nI’m sinking...$"

Naranja_Route124_Text_081C0A52::
# 181 "data/maps/Naranja_Route124/scripts.pory"
	.string "I have it on good authority that\nthere’s a DIVE spot around here.\pIt gives me the urge to go deep\nagain...$"

Naranja_Route124_Text_081C0ABD::
# 185 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: Sigh...\pHere I am in the sea, but who’s with me?\nMy little brother!\pLet’s battle so I won’t have to dwell\non that!$"

Naranja_Route124_Text_081C0B36::
# 189 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: SAM! It’s your fault we lost!\nYou’re in for it later!$"

Naranja_Route124_Text_081C0B72::
# 193 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: Sigh...\pIf only it wasn’t my little brother\nnext to me, but a nice boyfriend...$"

Naranja_Route124_Text_081C0BC8::
# 197 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: You’re planning to battle us?\nNot unless you have more POKéMON.$"

Naranja_Route124_Text_081C0C0E::
# 201 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: My big sister is tough at POKéMON!\pDon’t cry when you lose!$"

Naranja_Route124_Text_081C0C4F::
# 205 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: Uh-oh...\nMy big sister will chew me out...$"

Naranja_Route124_Text_081C0C7F::
# 209 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: My big sister is really scary\nwhen she gets angry.\pThat’s why she doesn’t have a\nboyfriend.$"

Naranja_Route124_Text_081C0CE0::
# 213 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: Did you want to battle us?\nBring some more POKéMON, then.$"

Naranja_Route124_Text_081C0D1F::
# 217 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: Sigh...\pHere I am in the sea, but who’s with me?\nMy little brother!\pOh, hi, it’s been a while. Let’s battle\nso I won’t have to dwell on things!$"

Naranja_Route124_Text_081C0DB5::
# 221 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: SAM!\nIt’s your fault we lost again!\pWe’re having a training session later!$"

Naranja_Route124_Text_081C0E06::
# 225 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: Sigh...\pIf I had a nice boyfriend, we’d beat\nanyone with lovely combinations...$"

Naranja_Route124_Text_081C0E5C::
# 229 "data/maps/Naranja_Route124/scripts.pory"
	.string "RITA: You’re planning to battle us?\nNot unless you have more POKéMON.$"

Naranja_Route124_Text_081C0EA2::
# 233 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: If we lose, I’ll catch heck.\nI’m going to go totally all out!$"

Naranja_Route124_Text_081C0EE5::
# 237 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: Uh-oh...\nMy big sister will chew me out again.$"

Naranja_Route124_Text_081C0F19::
# 241 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: My big sister is really scary\nwhen she gets angry.\pShe’s going to make me train really\nhard with POKéMON later...$"

Naranja_Route124_Text_081C0F90::
# 245 "data/maps/Naranja_Route124/scripts.pory"
	.string "SAM: Did you want to battle us?\nBring some more POKéMON, then.$"
