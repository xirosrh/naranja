Naranja_IslaTrovita_G11_M04_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M04_EventScript_Sign_1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	lockall
# 9 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184321
# 10 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 11 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1::
# 15 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	message Naranja_IslaTrovita_G11_M04_Text_08184368
# 16 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	multichoicegrid 8, 1, 0xD, 3, 0
# 18 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 19 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 20 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A50
# 21 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 22 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A5E
# 23 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 24 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A6C
# 25 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 26 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A7A
# 27 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 28 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A88
# 29 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 30 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A96
# 31 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 32 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A96
	end


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A50::
# 37 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184389
# 38 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A5E::
# 43 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184447
# 44 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 45 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A6C::
# 49 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_081844EC
# 50 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 51 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A7A::
# 55 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_081845A5
# 56 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 57 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A88::
# 61 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184627
# 62 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 63 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto Naranja_IslaTrovita_G11_M04_EventScript_Sub_081579F1
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157A96::
# 67 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	releaseall
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId1::
# 72 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_0818480E
# 73 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_BOY_5_LocalId2::
# 78 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_0818483C
# 79 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_BOY_4_LocalId3::
# 84 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184873
# 85 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_LASS_LocalId4::
# 90 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_081848D8
# 91 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_SCHOOL_KID_M_LocalId5::
# 96 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184988
# 97 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaTrovita_G11_M04_EventScript_Sign_5::
# 102 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184A17
# 103 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 3
	end


Naranja_IslaTrovita_G11_M04_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId6::
# 108 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	lock
# 109 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	faceplayer
# 110 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0113
# 111 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B34
# 112 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 4
# 113 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B1E
# 114 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 115 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B29
# 116 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_081846A2
# 117 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 118 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB7
# 119 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 120 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 0
# 121 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 122 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	goto_if EQUAL, Naranja_7islasPomelo_G03_M04_EventScript_Sub_081A029B
# 123 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	closemessage
# 124 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 125 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 126 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_0113
# 127 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B1E::
# 132 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_IslaTrovita_G11_M04_Movement_08157B60
# 133 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B29::
# 138 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_IslaTrovita_G11_M04_Movement_08157B49
# 139 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaTrovita_G11_M04_EventScript_Sub_08157B34::
# 144 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M04_Text_08184737
# 145 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	callstd 4
# 146 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	closemessage
# 147 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 148 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 149 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	release
	end


# 153 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
Naranja_IslaTrovita_G11_M04_Movement_08157B49:
# 154 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 155 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 156 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 157 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 158 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_down
# 159 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 160 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 161 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 162 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 163 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_left
# 164 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 165 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 166 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 167 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 168 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 169 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_8
# 170 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 171 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 172 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 173 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 174 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 175 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
	step_end

# 178 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
Naranja_IslaTrovita_G11_M04_Movement_08157B60:
# 179 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 180 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 181 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 182 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 183 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 184 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 185 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_down
# 186 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 187 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 188 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 189 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_down
# 190 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_in_place_faster_left
# 191 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 192 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 193 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 194 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 195 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_16
# 196 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	delay_8
# 197 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 198 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_right
# 199 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 200 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_up
# 201 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
# 202 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	walk_left
	step_end

Naranja_IslaTrovita_G11_M04_Text_08184321::
# 205 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "The blackboard lists status changes\nthat may affect POKéMON in battle.$"

Naranja_IslaTrovita_G11_M04_Text_08184368::
# 209 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "Which topic do you want to read?$"

Naranja_IslaTrovita_G11_M04_Text_08184389::
# 213 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON is poisoned, it will\nsteadily lose HP.\pThe effects of poison remain after\na battle.\pA poisoned POKéMON’s HP will drop\nwhile it is traveling.\pHeal a poisoning using an ANTIDOTE.$"

Naranja_IslaTrovita_G11_M04_Text_08184447::
# 217 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\nits SPEED drops.\pIt may also not be able to move while\nit is in battle.\pParalysis remains after battle.\nCure it using a PARLYZ HEAL.$"

Naranja_IslaTrovita_G11_M04_Text_081844EC::
# 221 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\nunable to attack.\pA POKéMON may wake up on its own,\nbut if a battle ends while it is sleeping,\lit will stay asleep.\pWake it up using an AWAKENING.$"

Naranja_IslaTrovita_G11_M04_Text_081845A5::
# 225 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "A burn reduces ATTACK power, and it\nsteadily reduces the victim’s HP.\pA burn lingers after battle.\nCure a burn using a BURN HEAL.$"

Naranja_IslaTrovita_G11_M04_Text_08184627::
# 229 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\ncompletely helpless.\pIt will remain frozen after battle.\nThaw it out using an ICE HEAL.$"

Naranja_IslaTrovita_G11_M04_Text_081846A2::
# 233 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "Students who don’t study get a little\ntaste of my QUICK CLAW.\pWhether or not you are a good student \nwill be evident from the way you use\lthis item.$"

Naranja_IslaTrovita_G11_M04_Text_08184737::
# 237 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\noccasionally speed up and get to move\lbefore its opponent.\pThere are many other items that are\nmeant to be held by POKéMON.\pJust those alone will give you many\ntopics to study!$"

Naranja_IslaTrovita_G11_M04_Text_0818480E::
# 241 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "I’m trading POKéMON with my friend\nright now.$"

Naranja_IslaTrovita_G11_M04_Text_0818483C::
# 245 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "I always wanted a SEEDOT, and\nI’m finally getting one!$"

Naranja_IslaTrovita_G11_M04_Text_08184873::
# 249 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "POKéMON can hold items, but they\ndon’t know what to do with man-made\litems like POTION and ANTIDOTE.$"

Naranja_IslaTrovita_G11_M04_Text_081848D8::
# 253 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "You know how some POKéMON moves can\nconfuse a POKéMON?\pA confused POKéMON will sometimes\nattack itself without meaning to.\pBut once it leaves battle, it will\nreturn to normal.$"

Naranja_IslaTrovita_G11_M04_Text_08184988::
# 257 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\nitself...\pThere are many kinds of items that\nPOKéMON can hold...\pBoy, it sure is hard taking notes\ndown...$"

Naranja_IslaTrovita_G11_M04_Text_08184A17::
# 261 "data/maps/Naranja_IslaTrovita_G11_M04/scripts.pory"
	.string "It’s this student’s notebook...\pPOKéMON are to be caught using\nPOKé BALLS.\pUp to six POKéMON can accompany\na TRAINER.\pA TRAINER is someone who catches\nPOKéMON, raises them, and battles\lwith them.\pA TRAINER’s mission is to defeat the\nstrong TRAINERS who await challengers\lin POKéMON GYMS.$"
