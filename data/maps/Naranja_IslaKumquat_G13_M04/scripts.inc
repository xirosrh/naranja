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
	msgbox Naranja_IslaKumquat_G13_M04_Text_0818890F, MSGBOX_DEFAULT
# 32 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 33 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 34 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 0
# 35 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 36 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081889FD, MSGBOX_YESNO
# 37 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 38 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081588DE
# 39 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 40 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158918
# 41 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081588DE::
# 46 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188AE8, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 48 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SaveMuseumContestPainting
# 49 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 50 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 51 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 52 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158948
# 53 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A43
# 54 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 55 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST
# 56 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158994
# 57 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589EA
# 58 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158918::
# 63 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C41, MSGBOX_YESNO
# 64 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 65 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081588DE
# 66 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188CBD, MSGBOX_DEFAULT
# 67 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 68 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A43
# 69 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 70 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 71 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST
# 72 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158948::
# 77 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	incrementgamestat 0x2A
# 78 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special BufferContestWinnerMonName
# 79 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A4E
# 80 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 81 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_PIN
# 82 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 83 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 84 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST, Naranja_IslaKumquat_G13_M04_Movement_08158A52
# 85 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 86 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188BB5, MSGBOX_DEFAULT
# 87 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C03, MSGBOX_DEFAULT
# 89 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitfanfare
# 90 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C19, MSGBOX_DEFAULT
# 91 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C32, MSGBOX_DEFAULT
# 92 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158994::
# 97 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 98 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 99 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 100 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589D6
# 101 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 102 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DA
# 103 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 104 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DE
# 105 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 106 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E2
# 107 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 108 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E6
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589D6::
# 113 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_WOMAN_3
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DA::
# 118 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M03_GIRL_2
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589DE::
# 123 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_PSYCHIC_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E2::
# 128 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_ARTIST
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589E6::
# 133 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_FAT_MAN
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589EA::
# 138 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_CATEGORY
# 139 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 140 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A27
# 141 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 142 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2B
# 143 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 144 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2F
# 145 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 146 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A33
# 147 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 148 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A37
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A27::
# 153 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A0
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2B::
# 158 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A1
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A2F::
# 163 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A2
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A33::
# 168 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A3
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A37::
# 173 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_00A4
	return


Naranja_IslaKumquat_G13_M04_OnFrame_2::
# 178 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 179 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A6A
# 180 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158A6A::
# 185 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 186 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 187 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B64
# 188 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 189 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158B76
# 190 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 191 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_0818890F, MSGBOX_DEFAULT
# 192 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 193 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 194 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 0
# 195 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081889FD, MSGBOX_YESNO
# 196 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 197 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AAE
# 198 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 199 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AE8
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AAE::
# 204 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188AE8, MSGBOX_DEFAULT
# 205 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 206 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SaveMuseumContestPainting
# 207 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 208 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 209 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 210 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158B18
# 211 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B6D
# 212 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 213 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 214 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158994
# 215 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081589EA
# 216 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AE8::
# 221 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C41, MSGBOX_YESNO
# 222 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 223 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158AAE
# 224 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188CBD, MSGBOX_DEFAULT
# 225 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 226 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B6D
# 227 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 228 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 0
# 229 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3
# 230 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158B18::
# 235 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	incrementgamestat 0x2A
# 236 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special BufferContestWinnerMonName
# 237 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B78
# 238 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 239 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_PIN
# 240 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_GraniteCave_G24_M00_Movement_081A0833
# 241 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 242 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_ARTIST_3, Naranja_IslaKumquat_G13_M04_Movement_08158B7C
# 243 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 244 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188BB5, MSGBOX_DEFAULT
# 245 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C03, MSGBOX_DEFAULT
# 247 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitfanfare
# 248 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C19, MSGBOX_DEFAULT
# 249 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188C32, MSGBOX_DEFAULT
# 250 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
	return


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2::
# 255 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 256 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 257 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 258 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BBA
# 259 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_2
# 260 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BAE
# 261 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_0818848C
# 262 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 263 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_2
# 264 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BF0
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BAE::
# 268 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_08188584
# 269 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 270 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BF0
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BBA::
# 274 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A63F4, MSGBOX_DEFAULT
# 275 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BC4::
# 280 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188521, MSGBOX_YESNO
# 281 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 282 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 283 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 284 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	erasebox 0, 0, 0xF, 9
# 285 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 286 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 287 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_3
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BF0::
# 292 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 2, 0
# 293 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 294 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 295 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
# 296 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 297 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C27
# 298 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 299 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 300 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 301 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C27::
# 306 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081885A7, MSGBOX_DEFAULT
# 307 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_TEALA_LocalId2
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35::
# 311 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188559, MSGBOX_DEFAULT
# 312 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 313 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42::
# 318 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188703, MSGBOX_DEFAULT
# 319 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 320 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	choosecontestmon
# 321 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 322 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
# 323 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryEnterContestMon
# 324 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 325 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C96
# 326 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 327 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CC0
# 328 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 329 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CC0
# 330 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 331 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CA4
# 332 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 333 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CB2
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C96::
# 338 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A664A, MSGBOX_DEFAULT
# 339 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CA4::
# 343 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A669F, MSGBOX_DEFAULT
# 344 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CB2::
# 348 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A66DC, MSGBOX_DEFAULT
# 349 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CC0::
# 353 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 354 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A67A3
# 355 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 356 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	yesnobox 0x14, 8
# 357 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 358 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 359 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
# 360 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 361 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D24
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA::
# 366 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_3
# 367 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if LESS_THAN, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158BC4
# 368 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081886DC
# 369 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 370 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 4, 0
# 371 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 372 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 373 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 374 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 375 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C35
# 376 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 377 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158C42
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D24::
# 381 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081887C7
# 382 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 383 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 384 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryContestGModeLinkup
# 385 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 386 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 387 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D90
# 388 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 389 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DA1
# 390 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 391 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DB2
# 392 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_0818872A
# 393 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 394 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	contestlinktransfer
# 395 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 396 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 397 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DD1
# 398 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 399 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D82
# 400 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 401 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DC3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D82::
# 406 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188750, MSGBOX_DEFAULT
# 407 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158D90::
# 411 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 412 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_0818878D, MSGBOX_DEFAULT
# 413 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 414 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 415 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DA1::
# 420 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 421 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081887F4, MSGBOX_DEFAULT
# 422 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 423 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 424 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DB2::
# 429 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 430 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_0818881F, MSGBOX_DEFAULT
# 431 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 432 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 433 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_3
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DC3::
# 438 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_0818873A, MSGBOX_DEFAULT
# 439 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158CEA
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DD1::
# 443 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special GetContestPlayerId
# 444 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addvar VAR_0x8004, 1
# 445 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	buffernumberstring 1, VAR_0x8004
# 446 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_08188845
# 447 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 448 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	addvar VAR_0x8004, 0xFFFF
# 449 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DEE
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158DEE::
# 453 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158E0B
# 454 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1
# 455 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SetLinkContestPlayerGfx
# 456 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 5
# 457 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 3
# 458 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F08
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158E0B::
# 463 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 464 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_081888C6
# 465 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 466 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 467 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 468 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158E9C
# 469 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 470 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 471 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 2, 0x221, 1
# 472 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 3, 0x261, 1
# 473 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 474 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158EA0
# 475 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 476 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 477 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 2, 0x2D1, 1
# 478 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 9, 3, 0x2D9, 1
# 479 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 480 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 481 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158EAE
# 482 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 483 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158E99
# 484 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 485 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	messageautoscroll Naranja_IslaKumquat_G13_M04_Text_081A6832
# 486 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 487 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 488 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 489 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA_2, Naranja_IslaKumquat_G13_M04_Movement_08158EA4
# 490 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158E8E
# 491 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 492 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	return


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 497 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, IsContestDebugActive
# 498 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 499 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158EE8
# 500 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x800B, 8
# 501 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 3
# 502 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92
# 503 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F86
# 504 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SetContestTrainerGfxIds
# 505 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB
# 506 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2, 4
# 507 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F08
# 508 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158EE8::
# 513 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_HIDE_ISLA_KUMQUAT_G13_M02_GENTLEMAN
# 514 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_2, 1
# 515 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	additem ITEM_CONTEST_PASS, 1
# 516 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x800B, 8
# 517 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_CONTEST_RANK, 3
# 518 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_EVENT_STATE_4, 1
# 519 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_SIN_NOMBRE_EVENT_COMPLETE_083B
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F08::
# 524 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_CONTEST_CATEGORY
# 525 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 526 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F45
# 527 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 528 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F52
# 529 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 530 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F5F
# 531 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 532 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F6C
# 533 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 534 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F79
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F45::
# 539 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M37, 0xFF, 7, 5
# 540 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 541 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F52::
# 546 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M35, 0xFF, 7, 5
# 547 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 548 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F5F::
# 553 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M39, 0xFF, 7, 5
# 554 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 555 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F6C::
# 560 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M38, 0xFF, 7, 5
# 561 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 562 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F79::
# 567 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setwarp MAP_NARANJA_SIN_NOMBRE_G25_M36, 0xFF, 7, 5
# 568 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoContestHallWarp
# 569 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08158F86::
# 574 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 575 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_0815900B
# 576 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 577 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 578 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 2, 0x221, 1
# 579 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 3, 0x261, 1
# 580 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 581 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_0815900F
# 582 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 583 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	playse SE_BRIDGE_WALK
# 584 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 2, 0x2D1, 1
# 585 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setmetatile 4, 3, 0x2D9, 1
# 586 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DrawWholeMapView
# 587 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay 0x14
# 588 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_0815901C
# 589 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 590 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08159008
# 591 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 592 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6832, MSGBOX_DEFAULT
# 593 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 594 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_TEALA, Naranja_IslaKumquat_G13_M04_Movement_08159013
# 595 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_IslaKumquat_G13_M04_Movement_08158FFE
# 596 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 597 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	return


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_BLACK_BELT_LocalId5::
# 602 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188D3C, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_GIRL_2_LocalId6::
# 607 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0096
# 608 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaKumquat_G13_M04_EventScript_Sub_08159039
# 609 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188DDA, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_08159039::
# 614 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188E47, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_ARTIST_LocalId7::
# 619 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188F07, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_FAT_MAN_LocalId13::
# 624 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188F81, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_FISHERMAN_LocalId12::
# 629 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188FE3, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId14::
# 634 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_0818904D, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_3::
# 639 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 640 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 641 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 6
# 642 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_4::
# 647 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 648 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 649 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 7
# 650 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_5::
# 655 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 656 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 657 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	showcontestpainting 8
# 658 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId9::
# 663 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7225, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId10::
# 668 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7241, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_6::
# 673 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 674 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 675 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitbuttonpress
# 676 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 677 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBDB::
# 682 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkplayergender
# 683 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 684 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF3
# 685 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 686 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF9
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF3::
# 691 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x64
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_0815FBF9::
# 696 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, 0x69
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4E92::
# 701 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 702 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 703 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 704 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 705 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EDD
# 706 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE, 0
# 707 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F4E
# 708 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_1
# 709 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
# 710 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	bufferstdstring 0, 0x800B
# 711 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A5DFC, MSGBOX_DEFAULT
# 712 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_CONTEST_PASS, 1
# 713 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 714 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EE1
# 715 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_1
# 716 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EDD::
# 720 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_TEMP_1
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EE1::
# 725 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_CONTEST_RANK, 0
# 726 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EF6
# 727 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6340, MSGBOX_DEFAULT
# 728 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4EF6::
# 733 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A64F4, MSGBOX_YESNO
# 734 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 735 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F13
# 736 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A65EA, MSGBOX_DEFAULT
# 737 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F13::
# 742 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0096
# 743 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F44
# 744 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6583, MSGBOX_DEFAULT
# 745 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x10A
# 746 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 747 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 748 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_0096
# 749 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_1
# 750 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A5E98, MSGBOX_DEFAULT
# 751 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F44::
# 755 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6590, MSGBOX_DEFAULT
# 756 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F4E::
# 761 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A685A, MSGBOX_DEFAULT
# 762 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE
# 763 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 764 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F67
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F67::
# 769 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0xB
# 770 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 771 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 772 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 773 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F86
# 774 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_ISLA_KUMQUAT_STORY_STATE, 0
# 775 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 776 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F86::
# 781 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A68C6, MSGBOX_NPC
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F::
# 786 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A5E46
# 787 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 788 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 2, 0
# 789 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 790 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 791 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5097
# 792 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 793 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
# 794 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 795 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
# 796 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 797 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC::
# 802 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A5E7C
# 803 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 804 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 3, 0
# 805 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 806 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 807 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5014
# 808 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 809 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5022
# 810 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 811 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5030
# 812 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 813 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
# 814 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 815 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4F8F
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5014::
# 820 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A5E98, MSGBOX_DEFAULT
# 821 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5022::
# 825 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A609B, MSGBOX_DEFAULT
# 826 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5030::
# 830 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A613F, MSGBOX_DEFAULT
# 831 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A4FCC
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E::
# 835 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_08188559, MSGBOX_DEFAULT
# 836 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048::
# 841 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6319, MSGBOX_DEFAULT
# 842 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	choosecontestmon
# 843 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 844 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5097
# 845 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryEnterContestMon
# 846 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 847 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50C8
# 848 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 849 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50D7
# 850 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 851 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50FB
# 852 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 853 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A511F
# 854 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 4
# 855 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A512E
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5097::
# 860 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081A6623
# 861 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 862 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	multichoice 0, 0, 4, 0
# 863 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 864 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 865 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
# 866 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 867 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A503E
# 868 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 869 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50C8::
# 873 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A664A, MSGBOX_DEFAULT
# 874 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50D7::
# 878 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A67A3, MSGBOX_YESNO
# 879 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 880 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 881 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
# 882 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 883 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A513D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A50FB::
# 888 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6724, MSGBOX_YESNO
# 889 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 890 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 891 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
# 892 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 893 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A513D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A511F::
# 898 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A669F, MSGBOX_DEFAULT
# 899 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A512E::
# 903 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A66DC, MSGBOX_DEFAULT
# 904 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A5048
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081A513D::
# 908 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A67C1, MSGBOX_DEFAULT
# 909 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	closemessage
# 910 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
# 911 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 1
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46::
# 916 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special InterviewAfter
# 917 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	incrementgamestat 6
# 918 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_REPORTER_M_LocalId8::
# 923 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 924 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 925 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_TEMP_2
# 926 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE17E
# 927 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8005, 6
# 928 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special InterviewBefore
# 929 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 930 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE17E
# 931 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 932 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A6F7C, MSGBOX_YESNO
# 933 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 934 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE0F8
# 935 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 936 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE0F8::
# 941 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A704E, MSGBOX_DEFAULT
# 942 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0xB
# 943 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 944 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8006, 0
# 945 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 946 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 947 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 948 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 949 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE137
# 950 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 951 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D::
# 956 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A7256, MSGBOX_DEFAULT
# 957 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE137::
# 962 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0x18
# 963 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SetContestCategoryStringVarForInterview
# 964 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A70A5, MSGBOX_DEFAULT
# 965 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0xB
# 966 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 967 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8006, 1
# 968 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_Route123_G31_M00_EventScript_Sub_081A00F3
# 969 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 970 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 971 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 972 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE12D
# 973 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A7153, MSGBOX_DEFAULT
# 974 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_TEMP_2
# 975 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8005, 6
# 976 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081ADE46
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE17E::
# 980 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A72A8, MSGBOX_DEFAULT
# 981 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE188::
# 986 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_NARANJA_SIN_NOMBRE_STORY_STATE, 2
# 987 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
# 988 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8005, 6
# 989 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special InterviewBefore
# 990 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 991 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
# 992 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_NARANJA_SIN_NOMBRE_EVENT_STATE_2
# 993 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 994 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
# 995 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 996 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1EE
# 997 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 998 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F2
# 999 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1000 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F6
# 1001 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 1002 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FA
# 1003 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 5
# 1004 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1EE::
# 1009 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_NAVEL_G05_M01_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F2::
# 1014 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MANDARINA_G06_M00_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1F6::
# 1019 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_MURCOTT_G09_M02_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FA::
# 1024 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	clearflag FLAG_HIDE_ISLA_KUMQUAT_G13_M04_REPORTER_M
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081AE1FE::
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sign_2::
# 1033 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8008, 3
# 1034 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8009, 3
# 1035 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_BOY_1_9, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 1036 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement LOCALID_ISLA_KUMQUAT_G13_M04_GIRL_1_10, Naranja_CuevaDeCristal_G24_M04_Movement_081A083D
# 1037 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	applymovement 32776, Naranja_IslaKumquat_G13_M04_Movement_081B7821
# 1038 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmovement LOCALID_NONE
# 1039 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7681::
# 1043 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 1044 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6E63, MSGBOX_YESNO
# 1045 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1046 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76A1
# 1047 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1048 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76E5
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76A1::
# 1053 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 1054 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1055 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7780
# 1056 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 1057 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1058 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B770E
# 1059 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6E9D, MSGBOX_DEFAULT
# 1060 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
# 1061 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1062 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76EF
# 1063 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1064 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7776
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76E5::
# 1069 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6EA8, MSGBOX_DEFAULT
# 1070 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76EF::
# 1075 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6ED0, MSGBOX_YESNO
# 1076 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1077 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7734
# 1078 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1079 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7726
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B770E::
# 1084 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6FF0, MSGBOX_DEFAULT
# 1085 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	dotimebasedevents
# 1086 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1087 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B774F
# 1088 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7759
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7726::
# 1092 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6F1F, MSGBOX_DEFAULT
# 1093 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7734
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7734::
# 1097 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B6EF1, MSGBOX_DEFAULT
# 1098 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7742
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7742::
# 1102 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1103 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 1104 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoBerryBlending
# 1105 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 1106 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B774F::
# 1111 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B70F6, MSGBOX_DEFAULT
# 1112 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7759::
# 1117 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B704A, MSGBOX_DEFAULT
# 1118 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x87
# 1119 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 1120 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 1121 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1122 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B76EF
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7776::
# 1126 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B717C, MSGBOX_DEFAULT
# 1127 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7780::
# 1132 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B71D2, MSGBOX_DEFAULT
# 1133 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId3::
# 1138 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8008, 3
# 1139 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77B6::
# 1143 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lock
# 1144 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	faceplayer
# 1145 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B742F, MSGBOX_DEFAULT
# 1146 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 1147 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1148 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77DC
# 1149 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1150 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77E6
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77DC::
# 1155 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7469, MSGBOX_DEFAULT
# 1156 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77E6::
# 1161 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	dotimebasedevents
# 1162 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1163 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77F6
# 1164 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7800
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B77F6::
# 1168 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7578, MSGBOX_DEFAULT
# 1169 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7800::
# 1174 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B74B4, MSGBOX_DEFAULT
# 1175 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8000, 0x87
# 1176 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 1177 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	callstd 0
# 1178 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setflag FLAG_NARANJA_ISLA_KUMQUAT_EVENT_COMPLETE_08C1
# 1179 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B753A, MSGBOX_DEFAULT
# 1180 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	release
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sign_1::
# 1185 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B783B::
# 1189 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	lockall
# 1190 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 1191 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1192 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7897
# 1193 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 1194 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1195 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7942
# 1196 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
# 1197 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1198 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7878
# 1199 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0xFFFF
# 1200 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7938
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7878::
# 1205 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B727C, MSGBOX_YESNO
# 1206 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1207 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78A1
# 1208 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1209 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7936
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7897::
# 1214 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7381, MSGBOX_DEFAULT
# 1215 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78A1::
# 1220 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	call Naranja_PuebloPaleta_G26_M05_EventScript_Sub_0819F806
# 1221 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 1222 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7936
# 1223 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	message Naranja_IslaKumquat_G13_M04_Text_081B7304
# 1224 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitmessage
# 1225 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special TryBerryBlenderLinkup
# 1226 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 1227 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 1228 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7980
# 1229 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 2
# 1230 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B794C
# 1231 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 3
# 1232 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7959
# 1233 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 5
# 1234 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7966
# 1235 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 6
# 1236 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7973
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78F3::
# 1241 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B733B, MSGBOX_DEFAULT
# 1242 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7901::
# 1246 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B7347, MSGBOX_DEFAULT
# 1247 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B790F::
# 1251 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B735A, MSGBOX_DEFAULT
# 1252 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B791D::
# 1256 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	setvar VAR_0x8004, 0
# 1257 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 1258 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 240
# 1259 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 239
# 1260 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 238
# 1261 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	removeobject 237
# 1262 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special DoBerryBlending
# 1263 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	waitstate
# 1264 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7936::
# 1269 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7938::
# 1274 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B73B7, MSGBOX_DEFAULT
# 1275 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7942::
# 1280 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081B73F1, MSGBOX_DEFAULT
# 1281 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B794C::
# 1286 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1287 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M02_Text_081A4A30, MSGBOX_DEFAULT
# 1288 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7959::
# 1293 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1294 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M02_Text_081A4B1D, MSGBOX_DEFAULT
# 1295 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7966::
# 1300 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1301 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_IslaKumquat_G13_M04_Text_081A10EB, MSGBOX_DEFAULT
# 1302 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7973::
# 1307 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special CloseLink
# 1308 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	msgbox Naranja_7islasPomelo_G03_M02_Text_081A4A85, MSGBOX_DEFAULT
# 1309 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	releaseall
	end


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7980::
# 1314 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 1
# 1315 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	specialvar VAR_RESULT, GetLinkPartnerNames
# 1316 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 1317 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1318 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	special SpawnLinkPartnerObjectEvent
# 1319 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B799A
	return


Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B799A::
# 1323 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	fadescreen 0
# 1324 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8008
# 1325 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 1326 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B78F3
# 1327 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 1328 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B7901
# 1329 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 1330 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaKumquat_G13_M04_EventScript_Sub_081B790F
	end


# 1334 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A3B:
# 1335 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1336 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1337 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1338 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1339 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1340 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1341 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
	step_end

# 1344 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A43:
# 1345 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1346 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1347 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1348 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1349 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1350 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1351 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1352 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1355 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A4C:
# 1356 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1359 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A4E:
# 1360 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1361 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1362 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1365 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158A52:
# 1366 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1367 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1368 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1369 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1370 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1371 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1372 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1373 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1376 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B64:
# 1377 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1378 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1379 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1380 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1381 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1382 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1383 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1384 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
	step_end

# 1387 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B6D:
# 1388 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1389 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1390 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1391 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1392 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1393 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1394 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1395 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1398 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B76:
# 1399 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1402 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B78:
# 1403 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1404 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1405 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
	step_end

# 1408 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158B7C:
# 1409 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1410 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1411 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1412 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_16
# 1413 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1414 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1415 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_fast_up
# 1416 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1419 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158E8E:
# 1420 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1421 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1422 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1423 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1424 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1425 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1426 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1427 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1428 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1429 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1432 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158E99:
# 1433 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
# 1434 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
	step_end

# 1437 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158E9C:
# 1438 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1439 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1440 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1443 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158EA0:
# 1444 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1445 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1446 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1449 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158EA4:
# 1450 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1451 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1452 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1453 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_right
# 1454 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1455 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1456 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1457 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1458 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1461 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158EAE:
# 1462 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1465 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08158FFE:
# 1466 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1467 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1468 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1469 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1470 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1471 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1472 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1473 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1474 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1477 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08159008:
# 1478 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_left
# 1479 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
	step_end

# 1482 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_0815900B:
# 1483 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1484 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1485 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_down
	step_end

# 1488 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_0815900F:
# 1489 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1490 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_down
# 1491 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_up
	step_end

# 1494 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_08159013:
# 1495 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1496 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1497 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_left
# 1498 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1499 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1500 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_up
# 1501 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	delay_8
# 1502 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	set_invisible
	step_end

# 1505 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_0815901C:
# 1506 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1509 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
Naranja_IslaKumquat_G13_M04_Movement_081B7821:
# 1510 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	walk_in_place_faster_right
	step_end

Naranja_IslaKumquat_G13_M04_Text_0818848C::
# 1513 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I only register four players for\nPOKéMON CONTESTS.\pIf three other players link up, all\nfour may enter the same CONTEST.\pWould you like to take part?$"

Naranja_IslaKumquat_G13_M04_Text_08188521::
# 1517 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Before entering a CONTEST, your\nprogress will be saved.$"

Naranja_IslaKumquat_G13_M04_Text_08188559::
# 1521 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "We hope you will participate another\ntime.$"

Naranja_IslaKumquat_G13_M04_Text_08188584::
# 1525 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Would you like to enter a CONTEST?$"

Naranja_IslaKumquat_G13_M04_Text_081885A7::
# 1529 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "When four players are ready, connect\nover a Game Link cable, and register\lwith me, please.\pPlease choose the same CONTEST\nas your fellow contestants.\pThe CONTEST begins as soon as all\nplayers register their entry.\pAfter that, the usual CONTEST rules\napply.$"

Naranja_IslaKumquat_G13_M04_Text_081886DC::
# 1533 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which CONTEST would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_08188703::
# 1537 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which POKéMON would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_0818872A::
# 1541 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Transmitting...$"

Naranja_IslaKumquat_G13_M04_Text_0818873A::
# 1545 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Transmission error...$"

Naranja_IslaKumquat_G13_M04_Text_08188750::
# 1549 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You may have chosen a different\nCONTEST than another player.$"

Naranja_IslaKumquat_G13_M04_Text_0818878D::
# 1553 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You may have made a different\nchoice than another player.$"

Naranja_IslaKumquat_G13_M04_Text_081887C7::
# 1557 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please wait.\nPress the B Button to cancel...$"

Naranja_IslaKumquat_G13_M04_Text_081887F4::
# 1561 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "We hope you will participate\nanother time.$"

Naranja_IslaKumquat_G13_M04_Text_0818881F::
# 1565 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Transmission error.\nPlease try again.$"

Naranja_IslaKumquat_G13_M04_Text_08188845::
# 1569 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Your POKéMON will be entered in\nthe CONTEST.\pYour POKéMON is Entry No. {STR_VAR_2}.$"

Naranja_IslaKumquat_G13_M04_Text_081888C6::
# 1573 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "The CONTEST will begin shortly.$"

Naranja_IslaKumquat_G13_M04_Text_0818890F::
# 1577 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Congratulations!\pI did a painting of your POKéMON to\ncommemorate its victory...\pWell, your POKéMON’s appeals were\nso fantastic, it spurred me into\lpainting better than I usually do.\lLook, see?$"

Naranja_IslaKumquat_G13_M04_Text_081889FD::
# 1581 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "What do you think? I’m confident in\nwhat I’ve done, but do you like it?\pA work of this caliber, it wouldn’t look\nout of place in an art museum.\pHuh? An art museum really is looking\nfor paintings?\pDo you think I should take this there?$"

Naranja_IslaKumquat_G13_M04_Text_08188AE8::
# 1585 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "What, really? Then, sure, I will take\nthis painting there right now.\pI’ll give it a proper title, too.\pI hope they’ll like it and consider\nexhibiting this.\pPlease check if they did accept this.\nThank you!$"

Naranja_IslaKumquat_G13_M04_Text_08188BB5::
# 1589 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, that’s right!\pAs a memento of me painting your\nPOKéMON, please take this.$"

Naranja_IslaKumquat_G13_M04_Text_08188C03::
# 1593 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"

Naranja_IslaKumquat_G13_M04_Text_08188C19::
# 1597 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n{STR_VAR_1}.$"

Naranja_IslaKumquat_G13_M04_Text_08188C32::
# 1601 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Okay, see you!$"

Naranja_IslaKumquat_G13_M04_Text_08188C41::
# 1605 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh... Then, I guess I’ll just take\nthis home with me...\pBut, you know, I would like to take\nthis to the art museum... Okay?$"

Naranja_IslaKumquat_G13_M04_Text_08188CBD::
# 1609 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, fine, that’s the way it is.\nI will hang this in my own house.\pI’ll just have to try harder next time.\nWell, be seeing you.$"

Naranja_IslaKumquat_G13_M04_Text_08188D3C::
# 1613 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Hoo, boy... Master Rank CONTESTS,\nhere I come.\pThe world will know that my dearest\nPOKéMON is the cutest being in all\lexistence. The time has come!\lUheheheh.$"

Naranja_IslaKumquat_G13_M04_Text_08188DDA::
# 1617 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You can see a whole variety of\nPOKéMON here.\pThat’s why I make this place a regular\npart of my daily stroll.$"

Naranja_IslaKumquat_G13_M04_Text_08188E47::
# 1621 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, dear! They still haven’t given\nyou a CONTEST PASS?\pYou should go get one in VERDANTURF\nTOWN right away.\pIt’s such a thrill having others see\nPOKéMON that you’ve raised with care\land love.$"

Naranja_IslaKumquat_G13_M04_Text_08188F07::
# 1625 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "When you get up to the Master Rank\nCONTESTS, you get your eyes opened\lto striking POKéMON that just scream\lto be painted.$"

Naranja_IslaKumquat_G13_M04_Text_08188F81::
# 1629 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\nextreme, man!\pThose muscular appeals...\nCascading sweat... I swoon!$"

Naranja_IslaKumquat_G13_M04_Text_08188FE3::
# 1633 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Day in and day out, I lavished my care\non this POKéMON.\pIts condition is peaking.\nToday, victory is mine!$"

Naranja_IslaKumquat_G13_M04_Text_0818904D::
# 1637 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I made オカキクケS with Mom, Dad and\nBig Sister. They turned out great!\pI bet you can make smoother, better\nオカキクケS if you have more people.$"

Naranja_IslaKumquat_G13_M04_Text_081A10EB::
# 1641 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "The link was canceled.$"

Naranja_IslaKumquat_G13_M04_Text_081A5DFC::
# 1645 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Hello, there!\pWe’re accepting registrations for\n{STR_VAR_1} Rank POKéMON CONTESTS.$"

Naranja_IslaKumquat_G13_M04_Text_081A5E46::
# 1649 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Would you like to enter your POKéMON\nin our CONTESTS?$"

Naranja_IslaKumquat_G13_M04_Text_081A5E7C::
# 1653 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which topic would you like?$"

Naranja_IslaKumquat_G13_M04_Text_081A5E98::
# 1657 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "A POKéMON CONTEST involves four\nTRAINERS entering one POKéMON each\lin competitive judging.\pA CONTEST has two stages of judging,\nprimary and secondary.\pPrimary judging is a popularity poll\ninvolving the audience.\pSecondary judging features appeals\nby the POKéMON using their moves.\pPlan appeals carefully to earn the\nmost attention of the JUDGE and\lexcite the audience.\lDo your best to stand out.\pThe primary and secondary scores are\nadded at the end.\pThe POKéMON garnering the highest\nscore is declared the winner.$"

Naranja_IslaKumquat_G13_M04_Text_081A609B::
# 1661 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "There are five kinds of CONTESTS.\pCOOL, BEAUTY, CUTE, SMART, and\nTOUGH are the five categories.\pChoose the CONTEST that is right for\nthe POKéMON you plan to enter.$"

Naranja_IslaKumquat_G13_M04_Text_081A613F::
# 1665 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "There are four ranks of POKéMON\nCONTESTS.\pNORMAL, SUPER, HYPER and MASTER\nare the four ranks.\pIn the NORMAL Rank, any POKéMON may\nenter.\pAny POKéMON that won a NORMAL Rank\nCONTEST may move up the SUPER Rank in\lthe same category.\pIn the same way, a SUPER Rank winner\ncan move up to the HYPER Rank, and a\lHYPER Rank winner can advance to the\lMASTER Rank in the same category.\pA POKéMON that won in the MASTER Rank\nmay compete in the MASTER Rank as\loften as its TRAINER wants.$"

Naranja_IslaKumquat_G13_M04_Text_081A6319::
# 1669 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which POKéMON would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_081A6340::
# 1673 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Anyone with a CONTEST PASS may enter.\pYou may obtain a CONTEST PASS at the\nNORMAL RANK CONTEST HALL in\lVERDANTURF TOWN free of charge.\pPlease obtain a CONTEST PASS and\ncome again.$"

Naranja_IslaKumquat_G13_M04_Text_081A63F4::
# 1677 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I accept registrations only from four\nlinked players for a POKéMON CONTEST.\pAnyone with a CONTEST PASS may enter.\pYou may obtain a CONTEST PASS at the\nNORMAL RANK CONTEST HALL in\lVERDANTURF TOWN free of charge.\pPlease obtain a CONTEST PASS and\ncome again.$"

Naranja_IslaKumquat_G13_M04_Text_081A64F4::
# 1681 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Anyone with a CONTEST PASS may enter.\pIf you don’t have one, I can issue one\nfor you right now.\pWould you like me to issue you a\nCONTEST PASS?$"

Naranja_IslaKumquat_G13_M04_Text_081A6583::
# 1685 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Here you go!$"

Naranja_IslaKumquat_G13_M04_Text_081A6590::
# 1689 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\pWe’ve already issued you a CONTEST\nPASS, {PLAYER}.\pPlease come back with your CONTEST\nPASS.$"

Naranja_IslaKumquat_G13_M04_Text_081A65EA::
# 1693 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please visit whenever you would like\nto enter a CONTEST.$"

Naranja_IslaKumquat_G13_M04_Text_081A6623::
# 1697 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Which CONTEST would you like to enter?$"

Naranja_IslaKumquat_G13_M04_Text_081A664A::
# 1701 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I’m terribly sorry, but your POKéMON\nis not qualified to compete at this\lRank yet...$"

Naranja_IslaKumquat_G13_M04_Text_081A669F::
# 1705 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I’m sorry, but an EGG cannot take part\nin a POKéMON CONTEST.$"

Naranja_IslaKumquat_G13_M04_Text_081A66DC::
# 1709 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Your POKéMON appears to be in no\ncondition to take part in a CONTEST...$"

Naranja_IslaKumquat_G13_M04_Text_081A6724::
# 1713 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, but that RIBBON...\pYour POKéMON has won this CONTEST\nbefore, hasn’t it?\pWould you like to enter it in this\nCONTEST anyway?$"

Naranja_IslaKumquat_G13_M04_Text_081A67A3::
# 1717 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Is that your CONTEST POKéMON?$"

Naranja_IslaKumquat_G13_M04_Text_081A67C1::
# 1721 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Okay, your POKéMON will be entered\nin this CONTEST.\pYour POKéMON is Entry No. 4.\nThe CONTEST will begin shortly.$"

Naranja_IslaKumquat_G13_M04_Text_081A6832::
# 1725 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please come in through here.\nGood luck!$"

Naranja_IslaKumquat_G13_M04_Text_081A685A::
# 1729 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Congratulations! Your POKéMON is the\nCONTEST winner!\pWe have your prize right here.\nPlease, right this way!$"

Naranja_IslaKumquat_G13_M04_Text_081A68C6::
# 1733 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Please come back for your prize\nlater on.$"

Naranja_IslaKumquat_G13_M04_Text_081A6F7C::
# 1737 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, hello! You were in a POKéMON CONTEST,\nweren’t you?\lIt’s easy to tell from your POKéMON.\pI’m a reporter. I’m working on a story\non POKéMON CONTESTS.\pIf I may, would you be willing to answer\na few questions?$"

Naranja_IslaKumquat_G13_M04_Text_081A704E::
# 1741 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, you will?\nThank you.\pBriefly, how would you describe the\nCONTEST you just entered?$"

Naranja_IslaKumquat_G13_M04_Text_081A70A5::
# 1745 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Ah, I see.\nThat’s a very edifying comment.\pYou get a good feel for what the\nCONTEST was like.\pI’ve got one last question.\pWhen you hear the word “{STR_VAR_2},”\nwhat image do you get?$"

Naranja_IslaKumquat_G13_M04_Text_081A7153::
# 1749 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I see!\pSo that’s how you imagine the concept\nof “{STR_VAR_2}” to be.\pThank you!\nYou’ve given me some good ideas.\pI think I can write a good story on\nPOKéMON CONTESTS now.\pMaybe, just maybe, this story will even\nmake it to television.\lI hope you’ll look forward to it!$"

Naranja_IslaKumquat_G13_M04_Text_081A7256::
# 1753 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh, too bad...\pWell, if you come across a good story,\nplease do share it with me.$"

Naranja_IslaKumquat_G13_M04_Text_081A72A8::
# 1757 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I’ll be looking forward to your next\nPOKéMON CONTEST.$"

Naranja_IslaKumquat_G13_M04_Text_081B6E63::
# 1761 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh? Did you want to make some オカキクケS\nwith this old-timer?$"

Naranja_IslaKumquat_G13_M04_Text_081B6E9D::
# 1765 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Excellent!$"

Naranja_IslaKumquat_G13_M04_Text_081B6EA8::
# 1769 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh...\nYou’ve made this old-timer sad...$"

Naranja_IslaKumquat_G13_M04_Text_081B6ED0::
# 1773 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Do you know how to make a オカキクケ?$"

Naranja_IslaKumquat_G13_M04_Text_081B6EF1::
# 1777 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Let’s get started, then!\pLet’s BERRY BLENDER!$"

Naranja_IslaKumquat_G13_M04_Text_081B6F1F::
# 1781 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Okay, a little explanation, then.\pOh, don’t worry, it’s quite simple.\pWhen the BLENDER’s arrow comes to\nyour marker, just press the A Button.\pThat’s all you have to do.\nYou’ll see how easy it is when you try.$"

Naranja_IslaKumquat_G13_M04_Text_081B6FF0::
# 1785 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\nYou don’t have any BERRIES?\pIf you don’t have any BERRIES,\nyou can’t make any オカキクケS.$"

Naranja_IslaKumquat_G13_M04_Text_081B704A::
# 1789 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Well, that won’t do at all now, will it?\pIf you don’t mind leftovers, you can\nhave one of my BERRIES.\pThat way, we could make some オカキクケS\ntogether using the BERRY BLENDER.$"

Naranja_IslaKumquat_G13_M04_Text_081B70F6::
# 1793 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "If I had some BERRIES left over,\nI’d gladly give you one...\pBut, I don’t have any to spare today.\nWe’ll have to do this another time.$"

Naranja_IslaKumquat_G13_M04_Text_081B717C::
# 1797 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "But your オカキクケ CASE is full.\pYou should use some オカキクケS before\nyou come see me again.$"

Naranja_IslaKumquat_G13_M04_Text_081B71D2::
# 1801 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "But you don’t have a オカキクケ CASE.\pYou should get a オカキクケ CASE and then\ncome see me.$"

Naranja_IslaKumquat_G13_M04_Text_081B7225::
# 1805 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Let’s get blending already!$"

Naranja_IslaKumquat_G13_M04_Text_081B7241::
# 1809 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I wonder what kind of オカキクケ I’ll get?\nThis is so exciting!$"

Naranja_IslaKumquat_G13_M04_Text_081B727C::
# 1813 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "オカキクケS will be made with your friends \nfrom BERRIES in the BERRY BLENDER.\pIs it okay to save the game before\nlinking with your friends?$"

Naranja_IslaKumquat_G13_M04_Text_081B7304::
# 1817 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Searching for your friends...\n... ... B Button: Cancel$"

Naranja_IslaKumquat_G13_M04_Text_081B733B::
# 1821 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{STR_VAR_1} arrived.$"

Naranja_IslaKumquat_G13_M04_Text_081B7347::
# 1825 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{STR_VAR_1} and {STR_VAR_2} arrived.$"

Naranja_IslaKumquat_G13_M04_Text_081B735A::
# 1829 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}, and\n{STR_VAR_3} arrived.$"

Naranja_IslaKumquat_G13_M04_Text_081B7381::
# 1833 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You have no BERRIES.\nThe BERRY BLENDER can’t be used.$"

Naranja_IslaKumquat_G13_M04_Text_081B73B7::
# 1837 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Your オカキクケ CASE is full.\nThe BERRY BLENDER can’t be used.$"

Naranja_IslaKumquat_G13_M04_Text_081B73F1::
# 1841 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "You don’t have a オカキクケ CASE.\nThe BERRY BLENDER can’t be used.$"

Naranja_IslaKumquat_G13_M04_Text_081B742F::
# 1845 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "I love making オカキクケS.\pI always have some BERRIES with me.$"

Naranja_IslaKumquat_G13_M04_Text_081B7469::
# 1849 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "If you’d like, we could make some\nオカキクケS together using the\lBERRY BLENDER.$"

Naranja_IslaKumquat_G13_M04_Text_081B74B4::
# 1853 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\nYou don’t have any BERRIES?\pWell, that won’t do at all now, will it?\pIf you don’t mind leftovers, you can\nhave one of my BERRIES.$"

Naranja_IslaKumquat_G13_M04_Text_081B753A::
# 1857 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "We’ll use it to make オカキクケS together\nusing the BERRY BLENDER.$"

Naranja_IslaKumquat_G13_M04_Text_081B7578::
# 1861 "data/maps/Naranja_IslaKumquat_G13_M04/scripts.pory"
	.string "Oh?\nYou don’t have any BERRIES?\pIf I had some left over, I’d gladly\ngive you one...\pBut, I don’t have any to spare today.\nSorry about that.$"
