Naranja_IslaTrovita_G11_M01_MapScripts::
# 5 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaTrovita_G11_M01_OnTransition
	.byte 0


Naranja_IslaTrovita_G11_M01_OnTransition::
# 9 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 10 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081574DC
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_081574DC::
# 15 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 2
	return


Naranja_IslaTrovita_G11_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId1::
# 20 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 23 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081574DC
# 24 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182B81
# 25 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId2::
# 31 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	lock
# 32 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	faceplayer
# 33 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 34 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081574DC
# 35 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_011F
# 36 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157519
# 37 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182BD8
# 38 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 39 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157519::
# 44 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182C25
# 45 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 46 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId3::
# 51 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	lock
# 52 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	faceplayer
# 53 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 54 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081574DC
# 55 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	checkflag FLAG_HIDE_ISLA_MIKAN_G00_M20_WALLY
# 56 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157543
# 57 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182D2A
# 58 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 59 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157543::
# 64 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182D7E
# 65 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 66 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId4::
# 71 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	lock
# 72 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	faceplayer
# 73 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 74 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081574DC
# 75 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182E6B
# 76 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 77 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_OBJ_EVENT_GFX_SCIENTIST_1_LocalId5::
# 82 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	lock
# 83 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	faceplayer
# 84 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 2
# 85 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_0815764A
# 86 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 87 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157640
# 88 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182ED5
# 89 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL, 1
# 91 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 92 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081575A6
# 93 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL, 1
# 94 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 95 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081575EE
# 96 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_081575A6::
# 101 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	closemessage
# 102 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	playse SE_PIN
# 103 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M01_SCIENTIST_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 104 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 105 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M01_SCIENTIST_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 106 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 107 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182F35
# 108 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 5
# 109 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 110 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157636
# 111 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	bufferitemname 0, ITEM_ROOT_FOSSIL
# 112 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08183023
# 113 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 114 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 115 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 116 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_4, 1
# 117 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_081575EE::
# 122 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	closemessage
# 123 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	playse SE_PIN
# 124 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M01_SCIENTIST_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 125 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 126 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	applymovement LOCALID_ISLA_TROVITA_G11_M01_SCIENTIST_1_5, Naranja_GraniteCave_G24_M00_Movement_081A0835
# 127 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitmovement LOCALID_NONE
# 128 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182F35
# 129 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 5
# 130 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 131 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157636
# 132 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	bufferitemname 0, ITEM_CLAW_FOSSIL
# 133 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08183023
# 134 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 135 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL, 1
# 136 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 1
# 137 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_4, 2
# 138 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157636::
# 143 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08182FD7
# 144 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 145 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157640::
# 150 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08183072
# 151 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 152 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_0815764A::
# 157 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_4, 1
# 158 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157661
# 159 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_4, 2
# 160 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_081576B4
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157661::
# 165 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 166 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08183124
# 167 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 168 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	getpartysize
# 169 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 170 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157707
# 171 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 172 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 0
# 173 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_010B
# 174 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	message Naranja_IslaTrovita_G11_M01_Text_0818319E
# 176 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitfanfare
# 177 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitmessage
# 178 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	givemon SPECIES_KABUTO, 0x14, 0
# 179 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_081A1102
# 180 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 5
# 181 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 182 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 183 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_081576B4::
# 188 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 189 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_08183124
# 190 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 191 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	getpartysize
# 192 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 193 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157707
# 194 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 195 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setvar VAR_NARANJA_ISLA_TROVITA_EVENT_STATE_3, 0
# 196 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	setflag FLAG_NARANJA_ISLA_TROVITA_EVENT_COMPLETE_010B
# 197 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 198 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	message Naranja_IslaTrovita_G11_M01_Text_0818319E
# 199 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitfanfare
# 200 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	waitmessage
# 201 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	givemon SPECIES_DUSKULL, 0xA, 0xCC
# 202 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M07_Text_081A1102
# 203 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 5
# 204 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 205 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 206 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_EventScript_Sub_08157707::
# 211 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	loadword 0, Naranja_IslaTrovita_G11_M01_Text_081831C8
# 212 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	callstd 4
# 213 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M01_Text_08182B81::
# 217 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "We’re developing a device for talking\nwith POKéMON.\pBut we haven’t had much success...$"

Naranja_IslaTrovita_G11_M01_Text_08182BD8::
# 221 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "I’m developing new kinds of\nPOKé BALLS...\pBut I haven’t made much headway...$"

Naranja_IslaTrovita_G11_M01_Text_08182C25::
# 225 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "We finally made new kinds of POKé BALLS!\pThe REPEAT BALL makes it easier to\ncatch POKéMON you’d caught before.\pThe TIMER BALL gets better at catching\nPOKéMON the longer a battle runs.\pBoth are proudly developed by the\nDEVON CORPORATION.\pPlease give them a try!$"

Naranja_IslaTrovita_G11_M01_Text_08182D2A::
# 229 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "I made the POKéNAV!\pAs an engineer, I feel blessed to have\nmade something so great!$"

Naranja_IslaTrovita_G11_M01_Text_08182D7E::
# 233 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "Oh, wow!\nThat’s a POKéNAV!\pIt came about as a result of our\nPRESIDENT’s desire to learn about\lthe feelings of POKéMON.\pWould you like me to describe its\nfeatures in detail?\pNo, no. I think you’ll find out just by\ntrying the POKéNAV out.$"

Naranja_IslaTrovita_G11_M01_Text_08182E6B::
# 237 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "I’m trying to develop a device that\nvisually reproduces the dreams of\lPOKéMON...\pBut it’s not going well.$"

Naranja_IslaTrovita_G11_M01_Text_08182ED5::
# 241 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "I’ve been trying to develop a device\nthat resurrects POKéMON from fossils...\pAnd, it’s working!$"

Naranja_IslaTrovita_G11_M01_Text_08182F35::
# 245 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "Wait! That thing you have there...\nIs that a POKéMON fossil?\pWould you like to bring that POKéMON\nback to life?\pI can with my newly developed\nFOSSIL REGENERATOR.$"

Naranja_IslaTrovita_G11_M01_Text_08182FD7::
# 249 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "Oh, is that so?\pDEVON’s technological expertise\nis outstanding, I tell you.$"

Naranja_IslaTrovita_G11_M01_Text_08183023::
# 253 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "Excellent!\nLet’s do this right away.\p{PLAYER} handed the {STR_VAR_1} to\nthe DEVON RESEARCHER.$"

Naranja_IslaTrovita_G11_M01_Text_08183072::
# 257 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\nis incredible.\pBut it has one drawback - it takes\na long time to work.\pSo, uh... How about you go for a stroll\nand look around for a while?$"

Naranja_IslaTrovita_G11_M01_Text_08183124::
# 261 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "Thanks for waiting!\pYour fossilized POKéMON has been\nbrought back to life!\pThe fossil was an ancient POKéMON.\n{STR_VAR_2}, it was!$"

Naranja_IslaTrovita_G11_M01_Text_0818319E::
# 265 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\nthe DEVON RESEARCHER.$"

Naranja_IslaTrovita_G11_M01_Text_081831C8::
# 269 "data/maps/Naranja_IslaTrovita_G11_M01/scripts.pory"
	.string "Uh-oh, you’ve got too many POKéMON.\nYou have no room for this one.$"
