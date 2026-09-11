Naranja_IslaTrovita_G11_M04_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M04_EventScript_Sign_1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	lockall
# 9 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184321, MSGBOX_DEFAULT
# 10 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1::
# 14 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	message Naranja_IslaTrovita_G11_M04_Text_08184368
# 15 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmessage
# 16 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	multichoicegrid 8, 1, 0xD, 3, 0
# 17 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 18 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 19 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A50
# 20 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 21 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A5E
# 22 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 23 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A6C
# 24 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 25 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A7A
# 26 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 27 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A88
# 28 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 29 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A96
# 30 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 31 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A96
	end


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A50::
# 36 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184389, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A5E::
# 41 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184447, MSGBOX_DEFAULT
# 42 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A6C::
# 46 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_081844EC, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A7A::
# 51 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_081845A5, MSGBOX_DEFAULT
# 52 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A88::
# 56 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184627, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A96::
# 61 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId1::
# 66 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_0818480E, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId2::
# 71 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_0818483C, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId3::
# 76 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184873, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_LASS_LocalId4::
# 81 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_081848D8, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId5::
# 86 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184988, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M04_EventScript_Sign_5::
# 91 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184A17, MSGBOX_SIGN
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId6::
# 96 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	lock
# 97 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	faceplayer
# 98 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0113
# 99 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B34
# 100 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 101 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B1E
# 102 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 103 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B29
# 104 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_081846A2, MSGBOX_DEFAULT
# 105 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB7
# 106 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 107 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 0
# 108 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 109 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 110 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	closemessage
# 111 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 112 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 113 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0113
# 114 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B1E::
# 119 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_IslaTrovita_G11_M04_Movement_08157B60
# 120 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B29::
# 125 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_IslaTrovita_G11_M04_Movement_08157B49
# 126 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B34::
# 131 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M04_Text_08184737, MSGBOX_DEFAULT
# 132 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	closemessage
# 133 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 134 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 135 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	release
	end


# 139 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
Naranja_IslaTrovita_G11_M04_Movement_08157B49:
# 140 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 141 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 142 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 143 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 144 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 146 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 147 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 148 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 149 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 151 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 152 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 153 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 154 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 155 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_8
# 156 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 157 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 158 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 159 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 160 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 161 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
	step_end

# 164 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
Naranja_IslaTrovita_G11_M04_Movement_08157B60:
# 165 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 166 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 167 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 168 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 169 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 170 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 171 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_down
# 172 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 173 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 174 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 175 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 176 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_left
# 177 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 178 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 179 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 180 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 181 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 182 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_8
# 183 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 184 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 185 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 186 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 187 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 188 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
	step_end

Naranja_IslaTrovita_G11_M04_Text_08184321::
# 191 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "The blackboard lists status changes\nthat may affect POKéMON in battle.$"

Naranja_IslaTrovita_G11_M04_Text_08184368::
# 195 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "Which topic do you want to read?$"

Naranja_IslaTrovita_G11_M04_Text_08184389::
# 199 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON is poisoned, it will\nsteadily lose HP.\pThe effects of poison remain after\na battle.\pA poisoned POKéMON’s HP will drop\nwhile it is traveling.\pHeal a poisoning using an ANTIDOTE.$"

Naranja_IslaTrovita_G11_M04_Text_08184447::
# 203 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\nits SPEED drops.\pIt may also not be able to move while\nit is in battle.\pParalysis remains after battle.\nCure it using a PARLYZ HEAL.$"

Naranja_IslaTrovita_G11_M04_Text_081844EC::
# 207 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\nunable to attack.\pA POKéMON may wake up on its own,\nbut if a battle ends while it is sleeping,\lit will stay asleep.\pWake it up using an AWAKENING.$"

Naranja_IslaTrovita_G11_M04_Text_081845A5::
# 211 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "A burn reduces ATTACK power, and it\nsteadily reduces the victim’s HP.\pA burn lingers after battle.\nCure a burn using a BURN HEAL.$"

Naranja_IslaTrovita_G11_M04_Text_08184627::
# 215 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\ncompletely helpless.\pIt will remain frozen after battle.\nThaw it out using an ICE HEAL.$"

Naranja_IslaTrovita_G11_M04_Text_081846A2::
# 219 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "Students who don’t study get a little\ntaste of my QUICK CLAW.\pWhether or not you are a good student \nwill be evident from the way you use\lthis item.$"

Naranja_IslaTrovita_G11_M04_Text_08184737::
# 223 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\noccasionally speed up and get to move\lbefore its opponent.\pThere are many other items that are\nmeant to be held by POKéMON.\pJust those alone will give you many\ntopics to study!$"

Naranja_IslaTrovita_G11_M04_Text_0818480E::
# 227 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "I’m trading POKéMON with my friend\nright now.$"

Naranja_IslaTrovita_G11_M04_Text_0818483C::
# 231 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "I always wanted a SEEDOT, and\nI’m finally getting one!$"

Naranja_IslaTrovita_G11_M04_Text_08184873::
# 235 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "POKéMON can hold items, but they\ndon’t know what to do with man-made\litems like POTION and ANTIDOTE.$"

Naranja_IslaTrovita_G11_M04_Text_081848D8::
# 239 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "You know how some POKéMON moves can\nconfuse a POKéMON?\pA confused POKéMON will sometimes\nattack itself without meaning to.\pBut once it leaves battle, it will\nreturn to normal.$"

Naranja_IslaTrovita_G11_M04_Text_08184988::
# 243 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\nitself...\pThere are many kinds of items that\nPOKéMON can hold...\pBoy, it sure is hard taking notes\ndown...$"

Naranja_IslaTrovita_G11_M04_Text_08184A17::
# 247 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "It’s this student’s notebook...\pPOKéMON are to be caught using\nPOKé BALLS.\pUp to six POKéMON can accompany\na TRAINER.\pA TRAINER is someone who catches\nPOKéMON, raises them, and battles\lwith them.\pA TRAINER’s mission is to defeat the\nstrong TRAINERS who await challengers\lin POKéMON GYMS.$"
