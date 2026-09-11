Naranja_IslaKumquat_G13_M04_MapScripts::
# 5 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaKumquat_G13_M04_OnTransition
# 6 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_IslaKumquat_G13_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Naranja_IslaKumquat_G13_M04_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 1, Naranja_IslaKumquat_G13_M04_OnFrame_1
# 8 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	map_script_2 VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 2, Naranja_IslaKumquat_G13_M04_OnFrame_2
	.2byte 0


Naranja_IslaKumquat_G13_M04_OnTransition::
# 13 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE188
	end


Naranja_IslaKumquat_G13_M04_OnFrame_1::
# 18 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 19 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158898
# 20 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158898::
# 25 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 26 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST
# 27 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A3B
# 28 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST
# 29 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158A4C
# 30 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 31 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_0818890F
# 32 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 33 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 34 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 35 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 0
# 36 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 37 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081889FD
# 38 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 39 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 40 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081588DE
# 41 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 42 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158918
# 43 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081588DE::
# 48 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188AE8
# 49 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 50 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 51 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SaveMuseumContestPainting
# 52 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 53 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 54 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 55 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158948
# 56 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A43
# 57 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 58 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST
# 59 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158994
# 60 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589EA
# 61 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158918::
# 66 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C41
# 67 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 68 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 69 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081588DE
# 70 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188CBD
# 71 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 72 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 73 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A43
# 74 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 75 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 76 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST
# 77 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158948::
# 82 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	incrementgamestat 0x2A
# 83 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special BufferContestWinnerMonName
# 84 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A4E
# 85 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_PIN
# 87 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 88 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 89 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A52
# 90 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 91 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188BB5
# 92 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 93 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C03
# 95 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 96 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitfanfare
# 97 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C19
# 98 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 99 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C32
# 100 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 101 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158994::
# 106 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 107 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 108 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 109 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589D6
# 110 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 111 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DA
# 112 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 113 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DE
# 114 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 115 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E2
# 116 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 117 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E6
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589D6::
# 122 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_WOMAN_3
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DA::
# 127 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M03_GIRL_2
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DE::
# 132 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_PSYCHIC_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E2::
# 137 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_ARTIST
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E6::
# 142 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_FAT_MAN
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589EA::
# 147 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_CATEGORY
# 148 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 149 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A27
# 150 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 151 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2B
# 152 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 153 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2F
# 154 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 155 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A33
# 156 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 157 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A37
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A27::
# 162 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A0
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2B::
# 167 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A1
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2F::
# 172 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A2
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A33::
# 177 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A3
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A37::
# 182 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A4
	return


Naranja_IslaKumquat_G13_M04_OnFrame_2::
# 187 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 188 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A6A
# 189 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A6A::
# 194 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 195 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 196 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B64
# 197 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 198 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158B76
# 199 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 200 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_0818890F
# 201 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 202 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 203 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 204 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 0
# 205 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081889FD
# 206 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 207 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 208 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AAE
# 209 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 210 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AE8
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AAE::
# 215 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188AE8
# 216 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 217 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 218 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SaveMuseumContestPainting
# 219 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 220 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 221 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 222 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158B18
# 223 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B6D
# 224 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 225 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 226 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158994
# 227 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589EA
# 228 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AE8::
# 233 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C41
# 234 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 235 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 236 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AAE
# 237 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188CBD
# 238 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 239 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 240 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B6D
# 241 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 242 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 243 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 244 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158B18::
# 249 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	incrementgamestat 0x2A
# 250 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special BufferContestWinnerMonName
# 251 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B78
# 252 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 253 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_PIN
# 254 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 255 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 256 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B7C
# 257 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 258 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188BB5
# 259 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 260 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C03
# 262 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 263 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitfanfare
# 264 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C19
# 265 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 266 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188C32
# 267 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 268 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
	return


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2::
# 273 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 274 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 275 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 276 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BBA
# 277 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_2
# 278 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BAE
# 279 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_0818848C
# 280 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 281 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_2
# 282 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BF0
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BAE::
# 286 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_08188584
# 287 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 288 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BF0
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BBA::
# 292 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A63F4
# 293 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 294 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BC4::
# 299 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188521
# 300 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 301 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 302 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 303 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 304 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	erasebox 0, 0, 0xF, 9
# 305 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 306 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 307 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_3
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BF0::
# 312 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 2, 0
# 313 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 314 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 315 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
# 316 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 317 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C27
# 318 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 319 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 320 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 321 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C27::
# 326 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081885A7
# 327 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 328 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35::
# 332 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188559
# 333 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 334 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 335 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42::
# 340 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188703
# 341 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 342 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 343 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	choosecontestmon
# 344 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 345 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
# 346 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryEnterContestMon
# 347 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 348 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C96
# 349 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 350 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CC0
# 351 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 352 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CC0
# 353 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 354 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CA4
# 355 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 356 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CB2
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C96::
# 361 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A664A
# 362 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 363 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CA4::
# 367 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A669F
# 368 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 369 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CB2::
# 373 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A66DC
# 374 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 375 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CC0::
# 379 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 380 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A67A3
# 381 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 382 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	yesnobox 0x14, 8
# 383 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 384 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 385 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
# 386 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 387 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D24
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA::
# 392 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_3
# 393 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if LESS_THAN, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BC4
# 394 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081886DC
# 395 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 396 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 4, 0
# 397 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 398 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 399 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 400 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 401 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 402 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 403 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D24::
# 407 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081887C7
# 408 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 409 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 410 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryContestGModeLinkup
# 411 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 412 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 413 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D90
# 414 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 415 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DA1
# 416 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 417 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DB2
# 418 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_0818872A
# 419 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 420 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	contestlinktransfer
# 421 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 422 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 423 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DD1
# 424 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 425 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D82
# 426 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 427 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DC3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D82::
# 432 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188750
# 433 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 434 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D90::
# 438 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 439 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_0818878D
# 440 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 441 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 442 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 443 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DA1::
# 448 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 449 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081887F4
# 450 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 451 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 452 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 453 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DB2::
# 458 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 459 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_0818881F
# 460 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 461 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 462 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 463 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DC3::
# 468 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_0818873A
# 469 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 470 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DD1::
# 474 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special GetContestPlayerId
# 475 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addvar VAR_0x8004, 1
# 476 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	buffernumberstring 1, VAR_0x8004
# 477 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_08188845
# 478 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 479 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addvar VAR_0x8004, 0xFFFF
# 480 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DEE
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DEE::
# 484 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158E0B
# 485 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1
# 486 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SetLinkContestPlayerGfx
# 487 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 488 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 3
# 489 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F08
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158E0B::
# 494 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 495 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_081888C6
# 496 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 497 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 498 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 499 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158E9C
# 500 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 501 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 502 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 2, 0x221, 1
# 503 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 3, 0x261, 1
# 504 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 505 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158EA0
# 506 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 507 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 508 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 2, 0x2D1, 1
# 509 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 3, 0x2D9, 1
# 510 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 511 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 512 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158EAE
# 513 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 514 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158E99
# 515 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 516 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_081A6832
# 517 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 518 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 519 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 520 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158EA4
# 521 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158E8E
# 522 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 523 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	return


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 528 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, IsContestDebugActive
# 529 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 530 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158EE8
# 531 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x800B, 8
# 532 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 3
# 533 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92
# 534 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F86
# 535 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SetContestTrainerGfxIds
# 536 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB
# 537 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 4
# 538 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F08
# 539 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158EE8::
# 544 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 545 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_2, 1
# 546 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	additem ITEM_CONTEST_PASS, 1
# 547 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x800B, 8
# 548 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 3
# 549 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 1
# 550 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_083B
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F08::
# 555 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_CATEGORY
# 556 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 557 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F45
# 558 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 559 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F52
# 560 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 561 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F5F
# 562 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 563 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F6C
# 564 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 565 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F79
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F45::
# 570 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M37, 0xFF, 7, 5
# 571 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 572 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F52::
# 577 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M35, 0xFF, 7, 5
# 578 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 579 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F5F::
# 584 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M39, 0xFF, 7, 5
# 585 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 586 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F6C::
# 591 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M38, 0xFF, 7, 5
# 592 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 593 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F79::
# 598 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M36, 0xFF, 7, 5
# 599 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 600 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F86::
# 605 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 606 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_0815900B
# 607 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 608 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 609 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 610 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 611 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 612 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_0815900F
# 613 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 614 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 615 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 616 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 617 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 618 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 619 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_0815901C
# 620 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 621 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08159008
# 622 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 623 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6832
# 624 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 625 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 626 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_08159013
# 627 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158FFE
# 628 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 629 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	return


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId5::
# 634 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188D3C
# 635 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId6::
# 640 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0096
# 641 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08159039
# 642 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188DDA
# 643 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08159039::
# 648 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188E47
# 649 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId7::
# 654 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188F07
# 655 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId13::
# 660 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188F81
# 661 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId12::
# 666 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188FE3
# 667 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId14::
# 672 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_0818904D
# 673 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_3::
# 678 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 679 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 680 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 6
# 681 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_4::
# 686 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 687 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 688 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 7
# 689 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_5::
# 694 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 695 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 696 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 8
# 697 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId9::
# 702 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7225
# 703 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId10::
# 708 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7241
# 709 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_6::
# 714 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 715 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 716 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitbuttonpress
# 717 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 718 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB::
# 723 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkplayergender
# 724 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 725 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF3
# 726 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 727 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF9
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF3::
# 732 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x64
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF9::
# 737 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x69
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92::
# 742 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 743 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 744 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 745 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 746 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EDD
# 747 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE, 0
# 748 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F4E
# 749 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_1
# 750 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
# 751 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	bufferstdstring 0, 0x800B
# 752 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A5DFC
# 753 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 754 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 755 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 756 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EE1
# 757 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_1
# 758 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EDD::
# 762 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_1
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EE1::
# 767 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_CONTEST_RANK, 0
# 768 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EF6
# 769 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6340
# 770 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 771 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EF6::
# 776 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A64F4
# 777 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 778 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 779 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F13
# 780 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A65EA
# 781 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 782 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F13::
# 787 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0096
# 788 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F44
# 789 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6583
# 790 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 791 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10A
# 792 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 793 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 794 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0096
# 795 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_1
# 796 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A5E98
# 797 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 798 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F44::
# 802 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6590
# 803 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 804 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F4E::
# 809 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A685A
# 810 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 811 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE
# 812 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 813 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F67
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F67::
# 818 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB
# 819 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 820 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 821 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 822 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F86
# 823 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE, 0
# 824 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 825 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F86::
# 830 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A68C6
# 831 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 2
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F::
# 836 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A5E46
# 837 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 838 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 2, 0
# 839 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 840 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 841 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5097
# 842 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 843 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
# 844 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 845 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
# 846 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 847 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC::
# 852 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A5E7C
# 853 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 854 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 3, 0
# 855 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 856 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 857 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5014
# 858 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 859 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5022
# 860 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 861 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5030
# 862 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 863 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
# 864 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 865 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5014::
# 870 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A5E98
# 871 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 872 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5022::
# 876 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A609B
# 877 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 878 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5030::
# 882 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A613F
# 883 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 884 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E::
# 888 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_08188559
# 889 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 890 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048::
# 895 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6319
# 896 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 897 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	choosecontestmon
# 898 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 899 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5097
# 900 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryEnterContestMon
# 901 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 902 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50C8
# 903 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 904 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50D7
# 905 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 906 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50FB
# 907 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 908 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A511F
# 909 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 910 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A512E
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5097::
# 915 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A6623
# 916 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 917 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 4, 0
# 918 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 919 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 920 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
# 921 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 922 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
# 923 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 924 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50C8::
# 928 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A664A
# 929 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 930 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50D7::
# 934 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A67A3
# 935 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 936 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 937 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 938 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
# 939 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 940 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A513D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50FB::
# 945 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6724
# 946 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 947 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 948 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 949 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
# 950 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 951 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A513D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A511F::
# 956 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A669F
# 957 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 958 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A512E::
# 962 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A66DC
# 963 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 964 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A513D::
# 968 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A67C1
# 969 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 970 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 971 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 972 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46::
# 977 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special InterviewAfter
# 978 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	incrementgamestat 6
# 979 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_REPORTER_M_LocalId8::
# 984 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 985 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 986 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_2
# 987 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE17E
# 988 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8005, 6
# 989 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special InterviewBefore
# 990 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 991 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE17E
# 992 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 993 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A6F7C
# 994 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 995 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 996 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE0F8
# 997 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 998 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE0F8::
# 1003 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A704E
# 1004 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1005 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0xB
# 1006 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 1007 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8006, 0
# 1008 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 1009 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 1010 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 1011 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1012 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE137
# 1013 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1014 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D::
# 1019 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A7256
# 1020 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1021 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE137::
# 1026 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0x18
# 1027 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SetContestCategoryStringVarForInterview
# 1028 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A70A5
# 1029 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1030 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0xB
# 1031 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 1032 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8006, 1
# 1033 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 1034 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 1035 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 1036 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1037 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D
# 1038 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A7153
# 1039 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1040 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_2
# 1041 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8005, 6
# 1042 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE17E::
# 1046 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A72A8
# 1047 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1048 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE188::
# 1053 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 2
# 1054 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
# 1055 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8005, 6
# 1056 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special InterviewBefore
# 1057 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1058 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
# 1059 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2
# 1060 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 1061 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
# 1062 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1063 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1EE
# 1064 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 1065 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F2
# 1066 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1067 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F6
# 1068 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 1069 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FA
# 1070 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 1071 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1EE::
# 1076 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NAVEL_G05_M01_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F2::
# 1081 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARINA_G06_M00_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F6::
# 1086 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M02_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FA::
# 1091 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M04_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE::
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sign_2::
# 1100 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8008, 3
# 1101 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8009, 3
# 1102 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_BOY_1_9, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 1103 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_GIRL_1_10, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 1104 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G13_M04_Movement_081B7821
# 1105 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 1106 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681::
# 1110 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 1111 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6E63
# 1112 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 1113 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1114 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76A1
# 1115 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1116 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76E5
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76A1::
# 1121 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 1122 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1123 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7780
# 1124 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 1125 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1126 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B770E
# 1127 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6E9D
# 1128 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1129 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
# 1130 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1131 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76EF
# 1132 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1133 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7776
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76E5::
# 1138 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6EA8
# 1139 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1140 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76EF::
# 1145 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6ED0
# 1146 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 1147 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1148 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7734
# 1149 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1150 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7726
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B770E::
# 1155 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6FF0
# 1156 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1157 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	dotimebasedevents
# 1158 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1159 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B774F
# 1160 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7759
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7726::
# 1164 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6F1F
# 1165 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1166 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7734
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7734::
# 1170 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B6EF1
# 1171 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1172 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7742
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7742::
# 1176 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1177 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 1178 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoBerryBlending
# 1179 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 1180 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B774F::
# 1185 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B70F6
# 1186 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1187 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7759::
# 1192 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B704A
# 1193 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1194 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x87
# 1195 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 1196 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 1197 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1198 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76EF
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7776::
# 1202 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B717C
# 1203 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1204 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7780::
# 1209 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B71D2
# 1210 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1211 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 1216 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8008, 3
# 1217 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6::
# 1221 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 1222 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 1223 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B742F
# 1224 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1225 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 1226 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1227 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77DC
# 1228 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1229 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77E6
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77DC::
# 1234 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7469
# 1235 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1236 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77E6::
# 1241 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	dotimebasedevents
# 1242 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1243 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77F6
# 1244 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7800
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77F6::
# 1248 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7578
# 1249 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1250 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7800::
# 1255 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B74B4
# 1256 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1257 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x87
# 1258 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 1259 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 1260 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1261 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B753A
# 1262 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1263 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_1::
# 1268 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B::
# 1272 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 1273 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 1274 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1275 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7897
# 1276 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 1277 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1278 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7942
# 1279 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
# 1280 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1281 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7878
# 1282 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1283 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7938
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7878::
# 1288 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B727C
# 1289 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 5
# 1290 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1291 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78A1
# 1292 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1293 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7936
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7897::
# 1298 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7381
# 1299 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1300 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78A1::
# 1305 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 1306 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1307 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7936
# 1308 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081B7304
# 1309 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 1310 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryBerryBlenderLinkup
# 1311 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 1312 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1313 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7980
# 1314 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 1315 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B794C
# 1316 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 1317 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7959
# 1318 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 1319 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7966
# 1320 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 1321 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7973
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78F3::
# 1326 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B733B
# 1327 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1328 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7901::
# 1332 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B7347
# 1333 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1334 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B790F::
# 1338 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B735A
# 1339 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1340 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D::
# 1344 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 1345 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 1346 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 240
# 1347 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 239
# 1348 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 238
# 1349 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 237
# 1350 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoBerryBlending
# 1351 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 1352 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7936::
# 1357 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7938::
# 1362 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B73B7
# 1363 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1364 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7942::
# 1369 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081B73F1
# 1370 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1371 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B794C::
# 1376 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1377 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A4A30
# 1378 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1379 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7959::
# 1384 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1385 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A4B1D
# 1386 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1387 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7966::
# 1392 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1393 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_IslaKumquat_G13_M04_Text_081A10EB
# 1394 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1395 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7973::
# 1400 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1401 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	loadword 0, Naranja_7islasPomelo_G03_M02_Text_081A4A85
# 1402 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 4
# 1403 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7980::
# 1408 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 1409 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GetLinkPartnerNames
# 1410 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 1411 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1412 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SpawnLinkPartnerObjectEvent
# 1413 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B799A
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B799A::
# 1417 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 0
# 1418 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8008
# 1419 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1420 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78F3
# 1421 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1422 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7901
# 1423 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 1424 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B790F
	end


# 1428 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A3B:
# 1429 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1430 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1431 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1432 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1433 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1434 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1435 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
	step_end

# 1438 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A43:
# 1439 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1440 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1441 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1442 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1443 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1444 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1445 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1446 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1449 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A4C:
# 1450 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1453 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A4E:
# 1454 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1455 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1456 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1459 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A52:
# 1460 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1461 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1462 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1463 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1464 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1465 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1466 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1467 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1470 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B64:
# 1471 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1472 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1473 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1474 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1475 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1476 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1477 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1478 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
	step_end

# 1481 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B6D:
# 1482 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1483 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1484 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1485 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1486 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1487 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1488 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1489 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1492 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B76:
# 1493 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1496 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B78:
# 1497 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1498 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1499 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1502 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B7C:
# 1503 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1504 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1505 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1506 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1507 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1508 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1509 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1510 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1513 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158E8E:
# 1514 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1515 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1516 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1517 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1518 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1519 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1520 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1521 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1522 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1523 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1526 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158E99:
# 1527 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
# 1528 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
	step_end

# 1531 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158E9C:
# 1532 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1533 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1534 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1537 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158EA0:
# 1538 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1539 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1540 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1543 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158EA4:
# 1544 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1545 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1546 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1547 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1548 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1549 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1550 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1551 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1552 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1555 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158EAE:
# 1556 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1559 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158FFE:
# 1560 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1561 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1562 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1563 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1564 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1565 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1566 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1567 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1568 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1571 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08159008:
# 1572 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
# 1573 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
	step_end

# 1576 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_0815900B:
# 1577 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1578 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1579 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1582 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_0815900F:
# 1583 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1584 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1585 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1588 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08159013:
# 1589 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1590 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1591 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1592 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1593 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1594 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1595 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1596 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1599 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_0815901C:
# 1600 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1603 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_081B7821:
# 1604 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_IslaKumquat_G13_M04_Text_0818848C::
# 1607 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I only register four players for\nPOKéMON CONTESTS.\pIf three other players link up, all\nfour may enter the same CONTEST.\pWould you like to take part?$"

Naranja_IslaKumquat_G13_M04_Text_08188521::
# 1611 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Before entering a CONTEST, your\nprogress will be saved.$"

Naranja_IslaKumquat_G13_M04_Text_08188559::
# 1615 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "We hope you will participate another\ntime.$"

Naranja_IslaKumquat_G13_M04_Text_08188584::
# 1619 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Would you like to enter a CONTEST?$"

Naranja_IslaKumquat_G13_M04_Text_081885A7::
# 1623 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "When four players are ready, connect\nover a Game Link cable, and register\lwith me, please.\pPlease choose the same CONTEST\nas your fellow contestants.\pThe CONTEST begins as soon as all\nplayers register their entry.\pAfter that, the usual CONTEST rules\napply.$"

Naranja_IslaKumquat_G13_M04_Text_081886DC::
# 1627 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which CONTEST would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_08188703::
# 1631 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which POKéMON would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_0818872A::
# 1635 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Transmitting...$"

Naranja_IslaKumquat_G13_M04_Text_0818873A::
# 1639 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Transmission error...$"

Naranja_IslaKumquat_G13_M04_Text_08188750::
# 1643 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You may have chosen a different\nCONTEST than another player.$"

Naranja_IslaKumquat_G13_M04_Text_0818878D::
# 1647 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You may have made a different\nchoice than another player.$"

Naranja_IslaKumquat_G13_M04_Text_081887C7::
# 1651 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please wait.\nPress the B Button to cancel...$"

Naranja_IslaKumquat_G13_M04_Text_081887F4::
# 1655 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "We hope you will participate\nanother time.$"

Naranja_IslaKumquat_G13_M04_Text_0818881F::
# 1659 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Transmission error.\nPlease try again.$"

Naranja_IslaKumquat_G13_M04_Text_08188845::
# 1663 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Your POKéMON will be entered in\nthe CONTEST.\pYour POKéMON is Entry No. {STR_VAR_2}.$"

Naranja_IslaKumquat_G13_M04_Text_081888C6::
# 1667 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "The CONTEST will begin shortly.$"

Naranja_IslaKumquat_G13_M04_Text_0818890F::
# 1671 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Congratulations!\pI did a painting of your POKéMON to\ncommemorate its victory...\pWell, your POKéMON’s appeals were\nso fantastic, it spurred me into\lpainting better than I usually do.\lLook, see?$"

Naranja_IslaKumquat_G13_M04_Text_081889FD::
# 1675 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "What do you think? I’m confident in\nwhat I’ve done, but do you like it?\pA work of this caliber, it wouldn’t look\nout of place in an art museum.\pHuh? An art museum really is looking\nfor paintings?\pDo you think I should take this there?$"

Naranja_IslaKumquat_G13_M04_Text_08188AE8::
# 1679 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "What, really? Then, sure, I will take\nthis painting there right now.\pI’ll give it a proper title, too.\pI hope they’ll like it and consider\nexhibiting this.\pPlease check if they did accept this.\nThank you!$"

Naranja_IslaKumquat_G13_M04_Text_08188BB5::
# 1683 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, that’s right!\pAs a memento of me painting your\nPOKéMON, please take this.$"

Naranja_IslaKumquat_G13_M04_Text_08188C03::
# 1687 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"

Naranja_IslaKumquat_G13_M04_Text_08188C19::
# 1691 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n{STR_VAR_1}.$"

Naranja_IslaKumquat_G13_M04_Text_08188C32::
# 1695 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Okay, see you!$"

Naranja_IslaKumquat_G13_M04_Text_08188C41::
# 1699 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh... Then, I guess I’ll just take\nthis home with me...\pBut, you know, I would like to take\nthis to the art museum... Okay?$"

Naranja_IslaKumquat_G13_M04_Text_08188CBD::
# 1703 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, fine, that’s the way it is.\nI will hang this in my own house.\pI’ll just have to try harder next time.\nWell, be seeing you.$"

Naranja_IslaKumquat_G13_M04_Text_08188D3C::
# 1707 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Hoo, boy... Master Rank CONTESTS,\nhere I come.\pThe world will know that my dearest\nPOKéMON is the cutest being in all\lexistence. The time has come!\lUheheheh.$"

Naranja_IslaKumquat_G13_M04_Text_08188DDA::
# 1711 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You can see a whole variety of\nPOKéMON here.\pThat’s why I make this place a regular\npart of my daily stroll.$"

Naranja_IslaKumquat_G13_M04_Text_08188E47::
# 1715 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, dear! They still haven’t given\nyou a CONTEST PASS?\pYou should go get one in VERDANTURF\nTOWN right away.\pIt’s such a thrill having others see\nPOKéMON that you’ve raised with care\land love.$"

Naranja_IslaKumquat_G13_M04_Text_08188F07::
# 1719 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "When you get up to the Master Rank\nCONTESTS, you get your eyes opened\lto striking POKéMON that just scream\lto be painted.$"

Naranja_IslaKumquat_G13_M04_Text_08188F81::
# 1723 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\nextreme, man!\pThose muscular appeals...\nCascading sweat... I swoon!$"

Naranja_IslaKumquat_G13_M04_Text_08188FE3::
# 1727 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Day in and day out, I lavished my care\non this POKéMON.\pIts condition is peaking.\nToday, victory is mine!$"

Naranja_IslaKumquat_G13_M04_Text_0818904D::
# 1731 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I made オカキクケS with Mom, Dad and\nBig Sister. They turned out great!\pI bet you can make smoother, better\nオカキクケS if you have more people.$"

Naranja_IslaKumquat_G13_M04_Text_081A10EB::
# 1735 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "The link was canceled.$"

Naranja_IslaKumquat_G13_M04_Text_081A5DFC::
# 1739 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Hello, there!\pWe’re accepting registrations for\n{STR_VAR_1} Rank POKéMON CONTESTS.$"

Naranja_IslaKumquat_G13_M04_Text_081A5E46::
# 1743 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Would you like to enter your POKéMON\nin our CONTESTS?$"

Naranja_IslaKumquat_G13_M04_Text_081A5E7C::
# 1747 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which topic would you like?$"

Naranja_IslaKumquat_G13_M04_Text_081A5E98::
# 1751 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "A POKéMON CONTEST involves four\nTRAINERS entering one POKéMON each\lin competitive judging.\pA CONTEST has two stages of judging,\nprimary and secondary.\pPrimary judging is a popularity poll\ninvolving the audience.\pSecondary judging features appeals\nby the POKéMON using their moves.\pPlan appeals carefully to earn the\nmost attention of the JUDGE and\lexcite the audience.\lDo your best to stand out.\pThe primary and secondary scores are\nadded at the end.\pThe POKéMON garnering the highest\nscore is declared the winner.$"

Naranja_IslaKumquat_G13_M04_Text_081A609B::
# 1755 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "There are five kinds of CONTESTS.\pCOOL, BEAUTY, CUTE, SMART, and\nTOUGH are the five categories.\pChoose the CONTEST that is right for\nthe POKéMON you plan to enter.$"

Naranja_IslaKumquat_G13_M04_Text_081A613F::
# 1759 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "There are four ranks of POKéMON\nCONTESTS.\pNORMAL, SUPER, HYPER and MASTER\nare the four ranks.\pIn the NORMAL Rank, any POKéMON may\nenter.\pAny POKéMON that won a NORMAL Rank\nCONTEST may move up the SUPER Rank in\lthe same category.\pIn the same way, a SUPER Rank winner\ncan move up to the HYPER Rank, and a\lHYPER Rank winner can advance to the\lMASTER Rank in the same category.\pA POKéMON that won in the MASTER Rank\nmay compete in the MASTER Rank as\loften as its TRAINER wants.$"

Naranja_IslaKumquat_G13_M04_Text_081A6319::
# 1763 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which POKéMON would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_081A6340::
# 1767 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Anyone with a CONTEST PASS may enter.\pYou may obtain a CONTEST PASS at the\nNORMAL RANK CONTEST HALL in\lVERDANTURF TOWN free of charge.\pPlease obtain a CONTEST PASS and\ncome again.$"

Naranja_IslaKumquat_G13_M04_Text_081A63F4::
# 1771 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I accept registrations only from four\nlinked players for a POKéMON CONTEST.\pAnyone with a CONTEST PASS may enter.\pYou may obtain a CONTEST PASS at the\nNORMAL RANK CONTEST HALL in\lVERDANTURF TOWN free of charge.\pPlease obtain a CONTEST PASS and\ncome again.$"

Naranja_IslaKumquat_G13_M04_Text_081A64F4::
# 1775 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Anyone with a CONTEST PASS may enter.\pIf you don’t have one, I can issue one\nfor you right now.\pWould you like me to issue you a\nCONTEST PASS?$"

Naranja_IslaKumquat_G13_M04_Text_081A6583::
# 1779 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Here you go!$"

Naranja_IslaKumquat_G13_M04_Text_081A6590::
# 1783 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\pWe’ve already issued you a CONTEST\nPASS, {PLAYER}.\pPlease come back with your CONTEST\nPASS.$"

Naranja_IslaKumquat_G13_M04_Text_081A65EA::
# 1787 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please visit whenever you would like\nto enter a CONTEST.$"

Naranja_IslaKumquat_G13_M04_Text_081A6623::
# 1791 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which CONTEST would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_081A664A::
# 1795 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I’m terribly sorry, but your POKéMON\nis not qualified to compete at this\lRank yet...$"

Naranja_IslaKumquat_G13_M04_Text_081A669F::
# 1799 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I’m sorry, but an EGG cannot take part\nin a POKéMON CONTEST.$"

Naranja_IslaKumquat_G13_M04_Text_081A66DC::
# 1803 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Your POKéMON appears to be in no\ncondition to take part in a CONTEST...$"

Naranja_IslaKumquat_G13_M04_Text_081A6724::
# 1807 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, but that RIBBON...\pYour POKéMON has won this CONTEST\nbefore, hasn’t it?\pWould you like to enter it in this\nCONTEST anyway?$"

Naranja_IslaKumquat_G13_M04_Text_081A67A3::
# 1811 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Is that your CONTEST POKéMON?$"

Naranja_IslaKumquat_G13_M04_Text_081A67C1::
# 1815 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Okay, your POKéMON will be entered\nin this CONTEST.\pYour POKéMON is Entry No. 4.\nThe CONTEST will begin shortly.$"

Naranja_IslaKumquat_G13_M04_Text_081A6832::
# 1819 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please come in through here.\nGood luck!$"

Naranja_IslaKumquat_G13_M04_Text_081A685A::
# 1823 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Congratulations! Your POKéMON is the\nCONTEST winner!\pWe have your prize right here.\nPlease, right this way!$"

Naranja_IslaKumquat_G13_M04_Text_081A68C6::
# 1827 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please come back for your prize\nlater on.$"

Naranja_IslaKumquat_G13_M04_Text_081A6F7C::
# 1831 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, hello! You were in a POKéMON CONTEST,\nweren’t you?\lIt’s easy to tell from your POKéMON.\pI’m a reporter. I’m working on a story\non POKéMON CONTESTS.\pIf I may, would you be willing to answer\na few questions?$"

Naranja_IslaKumquat_G13_M04_Text_081A704E::
# 1835 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, you will?\nThank you.\pBriefly, how would you describe the\nCONTEST you just entered?$"

Naranja_IslaKumquat_G13_M04_Text_081A70A5::
# 1839 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Ah, I see.\nThat’s a very edifying comment.\pYou get a good feel for what the\nCONTEST was like.\pI’ve got one last question.\pWhen you hear the word “{STR_VAR_2},”\nwhat image do you get?$"

Naranja_IslaKumquat_G13_M04_Text_081A7153::
# 1843 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I see!\pSo that’s how you imagine the concept\nof “{STR_VAR_2}” to be.\pThank you!\nYou’ve given me some good ideas.\pI think I can write a good story on\nPOKéMON CONTESTS now.\pMaybe, just maybe, this story will even\nmake it to television.\lI hope you’ll look forward to it!$"

Naranja_IslaKumquat_G13_M04_Text_081A7256::
# 1847 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, too bad...\pWell, if you come across a good story,\nplease do share it with me.$"

Naranja_IslaKumquat_G13_M04_Text_081A72A8::
# 1851 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I’ll be looking forward to your next\nPOKéMON CONTEST.$"

Naranja_IslaKumquat_G13_M04_Text_081B6E63::
# 1855 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh? Did you want to make some オカキクケS\nwith this old-timer?$"

Naranja_IslaKumquat_G13_M04_Text_081B6E9D::
# 1859 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Excellent!$"

Naranja_IslaKumquat_G13_M04_Text_081B6EA8::
# 1863 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh...\nYou’ve made this old-timer sad...$"

Naranja_IslaKumquat_G13_M04_Text_081B6ED0::
# 1867 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Do you know how to make a オカキクケ?$"

Naranja_IslaKumquat_G13_M04_Text_081B6EF1::
# 1871 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Let’s get started, then!\pLet’s BERRY BLENDER!$"

Naranja_IslaKumquat_G13_M04_Text_081B6F1F::
# 1875 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Okay, a little explanation, then.\pOh, don’t worry, it’s quite simple.\pWhen the BLENDER’s arrow comes to\nyour marker, just press the A Button.\pThat’s all you have to do.\nYou’ll see how easy it is when you try.$"

Naranja_IslaKumquat_G13_M04_Text_081B6FF0::
# 1879 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\nYou don’t have any BERRIES?\pIf you don’t have any BERRIES,\nyou can’t make any オカキクケS.$"

Naranja_IslaKumquat_G13_M04_Text_081B704A::
# 1883 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Well, that won’t do at all now, will it?\pIf you don’t mind leftovers, you can\nhave one of my BERRIES.\pThat way, we could make some オカキクケS\ntogether using the BERRY BLENDER.$"

Naranja_IslaKumquat_G13_M04_Text_081B70F6::
# 1887 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "If I had some BERRIES left over,\nI’d gladly give you one...\pBut, I don’t have any to spare today.\nWe’ll have to do this another time.$"

Naranja_IslaKumquat_G13_M04_Text_081B717C::
# 1891 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "But your オカキクケ CASE is full.\pYou should use some オカキクケS before\nyou come see me again.$"

Naranja_IslaKumquat_G13_M04_Text_081B71D2::
# 1895 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "But you don’t have a オカキクケ CASE.\pYou should get a オカキクケ CASE and then\ncome see me.$"

Naranja_IslaKumquat_G13_M04_Text_081B7225::
# 1899 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Let’s get blending already!$"

Naranja_IslaKumquat_G13_M04_Text_081B7241::
# 1903 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I wonder what kind of オカキクケ I’ll get?\nThis is so exciting!$"

Naranja_IslaKumquat_G13_M04_Text_081B727C::
# 1907 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "オカキクケS will be made with your friends \nfrom BERRIES in the BERRY BLENDER.\pIs it okay to save the game before\nlinking with your friends?$"

Naranja_IslaKumquat_G13_M04_Text_081B7304::
# 1911 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Searching for your friends...\n... ... B Button: Cancel$"

Naranja_IslaKumquat_G13_M04_Text_081B733B::
# 1915 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{STR_VAR_1} arrived.$"

Naranja_IslaKumquat_G13_M04_Text_081B7347::
# 1919 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{STR_VAR_1} and {STR_VAR_2} arrived.$"

Naranja_IslaKumquat_G13_M04_Text_081B735A::
# 1923 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}, and\n{STR_VAR_3} arrived.$"

Naranja_IslaKumquat_G13_M04_Text_081B7381::
# 1927 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You have no BERRIES.\nThe BERRY BLENDER can’t be used.$"

Naranja_IslaKumquat_G13_M04_Text_081B73B7::
# 1931 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Your オカキクケ CASE is full.\nThe BERRY BLENDER can’t be used.$"

Naranja_IslaKumquat_G13_M04_Text_081B73F1::
# 1935 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You don’t have a オカキクケ CASE.\nThe BERRY BLENDER can’t be used.$"

Naranja_IslaKumquat_G13_M04_Text_081B742F::
# 1939 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I love making オカキクケS.\pI always have some BERRIES with me.$"

Naranja_IslaKumquat_G13_M04_Text_081B7469::
# 1943 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "If you’d like, we could make some\nオカキクケS together using the\lBERRY BLENDER.$"

Naranja_IslaKumquat_G13_M04_Text_081B74B4::
# 1947 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\nYou don’t have any BERRIES?\pWell, that won’t do at all now, will it?\pIf you don’t mind leftovers, you can\nhave one of my BERRIES.$"

Naranja_IslaKumquat_G13_M04_Text_081B753A::
# 1951 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "We’ll use it to make オカキクケS together\nusing the BERRY BLENDER.$"

Naranja_IslaKumquat_G13_M04_Text_081B7578::
# 1955 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\nYou don’t have any BERRIES?\pIf I had some left over, I’d gladly\ngive you one...\pBut, I don’t have any to spare today.\nSorry about that.$"
