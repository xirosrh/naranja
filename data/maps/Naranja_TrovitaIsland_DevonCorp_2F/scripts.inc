Naranja_TrovitaIsland_DevonCorp_2F_MapScripts::
# 5 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_TrovitaIsland_DevonCorp_2F_OnTransition
	.byte 0


Naranja_TrovitaIsland_DevonCorp_2F_OnTransition::
# 9 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 10 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081574DC
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081574DC::
# 15 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 2
	return


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Scientist1::
# 20 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	lock
# 21 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 23 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081574DC
# 24 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182B81, MSGBOX_DEFAULT
# 25 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Scientist1_2::
# 30 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	lock
# 31 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	faceplayer
# 32 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 33 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081574DC
# 34 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_ROUTE_ROUTE_EVENT_COMPLETE_011F
# 35 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157519
# 36 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182BD8, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157519::
# 42 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182C25, MSGBOX_DEFAULT
# 43 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Scientist1_3::
# 48 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	lock
# 49 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	faceplayer
# 50 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 51 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081574DC
# 52 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	checkflag FLAG_HIDE_NARANJA_MIKAN_ISLAND_G00_M20_WALLY
# 53 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157543
# 54 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182D2A, MSGBOX_DEFAULT
# 55 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157543::
# 60 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182D7E, MSGBOX_DEFAULT
# 61 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Scientist1_4::
# 66 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	lock
# 67 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	faceplayer
# 68 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 69 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081574DC
# 70 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182E6B, MSGBOX_DEFAULT
# 71 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Scientist1_5::
# 76 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	lock
# 77 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	faceplayer
# 78 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 2
# 79 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_0815764A
# 80 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 81 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157640
# 82 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182ED5, MSGBOX_DEFAULT
# 83 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL, 1
# 84 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 85 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081575A6
# 86 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL, 1
# 87 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 88 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081575EE
# 89 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081575A6::
# 94 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	closemessage
# 95 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 96 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_NARANJA_TROVITA_ISLAND_DEVON_CORP_2F_SCIENTIST_1_5, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 97 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 98 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_NARANJA_TROVITA_ISLAND_DEVON_CORP_2F_SCIENTIST_1_5, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 99 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 100 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182F35, MSGBOX_YESNO
# 101 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 102 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157636
# 103 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_ROOT_FOSSIL
# 104 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08183023, MSGBOX_DEFAULT
# 105 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 106 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 107 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_4, 1
# 108 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081575EE::
# 113 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	closemessage
# 114 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 115 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_NARANJA_TROVITA_ISLAND_DEVON_CORP_2F_SCIENTIST_1_5, Naranja_MeteorFalls_1F_1R_Movement_081A0833
# 116 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 117 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_NARANJA_TROVITA_ISLAND_DEVON_CORP_2F_SCIENTIST_1_5, Naranja_MeteorFalls_1F_1R_Movement_081A0835
# 118 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitmovement LOCALID_NONE
# 119 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182F35, MSGBOX_YESNO
# 120 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 121 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157636
# 122 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_CLAW_FOSSIL
# 123 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08183023, MSGBOX_DEFAULT
# 124 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL, 1
# 125 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 1
# 126 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_4, 2
# 127 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157636::
# 132 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08182FD7, MSGBOX_DEFAULT
# 133 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157640::
# 138 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08183072, MSGBOX_DEFAULT
# 139 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_0815764A::
# 144 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_4, 1
# 145 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157661
# 146 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_4, 2
# 147 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081576B4
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157661::
# 152 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 153 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08183124, MSGBOX_DEFAULT
# 154 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	getpartysize
# 155 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 156 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157707
# 157 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 158 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 0
# 159 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_010B
# 160 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 161 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	message Naranja_TrovitaIsland_DevonCorp_2F_Text_0818319E
# 162 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitfanfare
# 163 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitmessage
# 164 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	givemon SPECIES_KABUTO, 0x14, 0
# 165 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_MellsweetIsland_StevensHouse_Text_081A1102, MSGBOX_YESNO
# 166 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 167 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_MellsweetIsland_StevensHouse_EventScript_Sub_081A0678
# 168 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_081576B4::
# 173 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 174 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_08183124, MSGBOX_DEFAULT
# 175 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	getpartysize
# 176 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 177 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	goto_if EQUAL, Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157707
# 178 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 179 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setvar VAR_NARANJA_TROVITA_ISLAND_EVENT_STATE_3, 0
# 180 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	setflag FLAG_NARANJA_TROVITA_ISLAND_EVENT_COMPLETE_010B
# 181 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 182 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	message Naranja_TrovitaIsland_DevonCorp_2F_Text_0818319E
# 183 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitfanfare
# 184 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	waitmessage
# 185 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	givemon SPECIES_DUSKULL, 0xA, 0xCC
# 186 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_MellsweetIsland_StevensHouse_Text_081A1102, MSGBOX_YESNO
# 187 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 188 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	call_if EQUAL, Naranja_MellsweetIsland_StevensHouse_EventScript_Sub_081A0678
# 189 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_EventScript_Sub_08157707::
# 194 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	msgbox Naranja_TrovitaIsland_DevonCorp_2F_Text_081831C8, MSGBOX_DEFAULT
# 195 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	release
	end


Naranja_TrovitaIsland_DevonCorp_2F_Text_08182B81::
# 199 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "We’re developing a device for talking\nwith POKéMON.\pBut we haven’t had much success...$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182BD8::
# 203 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "I’m developing new kinds of\nPOKé BALLS...\pBut I haven’t made much headway...$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182C25::
# 207 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of POKé BALLS!\pThe REPEAT BALL makes it easier to\ncatch POKéMON you’d caught before.\pThe TIMER BALL gets better at catching\nPOKéMON the longer a battle runs.\pBoth are proudly developed by the\nDEVON CORPORATION.\pPlease give them a try!$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182D2A::
# 211 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\pAs an engineer, I feel blessed to have\nmade something so great!$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182D7E::
# 215 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\nThat’s a POKéNAV!\pIt came about as a result of our\nPRESIDENT’s desire to learn about\lthe feelings of POKéMON.\pWould you like me to describe its\nfeatures in detail?\pNo, no. I think you’ll find out just by\ntrying the POKéNAV out.$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182E6B::
# 219 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "I’m trying to develop a device that\nvisually reproduces the dreams of\lPOKéMON...\pBut it’s not going well.$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182ED5::
# 223 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "I’ve been trying to develop a device\nthat resurrects POKéMON from fossils...\pAnd, it’s working!$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182F35::
# 227 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there...\nIs that a POKéMON fossil?\pWould you like to bring that POKéMON\nback to life?\pI can with my newly developed\nFOSSIL REGENERATOR.$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08182FD7::
# 231 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\pDEVON’s technological expertise\nis outstanding, I tell you.$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08183023::
# 235 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "Excellent!\nLet’s do this right away.\p{PLAYER} handed the {STR_VAR_1} to\nthe DEVON RESEARCHER.$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08183072::
# 239 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\nis incredible.\pBut it has one drawback - it takes\na long time to work.\pSo, uh... How about you go for a stroll\nand look around for a while?$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_08183124::
# 243 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\pYour fossilized POKéMON has been\nbrought back to life!\pThe fossil was an ancient POKéMON.\n{STR_VAR_2}, it was!$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_0818319E::
# 247 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\nthe DEVON RESEARCHER.$"

Naranja_TrovitaIsland_DevonCorp_2F_Text_081831C8::
# 251 "data/maps/Naranja_TrovitaIsland_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you’ve got too many POKéMON.\nYou have no room for this one.$"
