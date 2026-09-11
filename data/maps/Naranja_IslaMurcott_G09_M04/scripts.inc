Naranja_IslaMurcott_G09_M04_MapScripts::
	.byte 0


Naranja_IslaMurcott_G09_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D46A
# 11 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 5
# 12 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 13 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815569C
# 14 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 15 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815569C::
# 20 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D4DB
# 21 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 22 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special ChoosePartyMon
# 23 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	waitstate
# 24 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 25 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556C9
# 26 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 27 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF::
# 32 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D61E
# 33 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556C9::
# 39 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 40 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0x19C
# 41 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815571C
# 42 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special BufferMonNickname
# 43 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special IsMonOTIDNotPlayers
# 44 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 45 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155726
# 46 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 47 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special BufferMonNickname
# 48 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 49 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155726
# 50 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D505
# 51 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 5
# 52 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 53 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155730
# 54 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 55 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815571C::
# 60 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D752
# 61 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 62 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155726::
# 67 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D6CC
# 68 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 69 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155730::
# 74 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D580
# 75 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 76 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	call Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 77 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 78 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special BufferMonNickname
# 79 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 80 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815575A
# 81 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D63A
# 82 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 83 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815575A::
# 88 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	loadword 0, Naranja_IslaMurcott_G09_M04_Text_0817D5B0
# 89 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	callstd 4
# 90 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_Text_0817D46A::
# 94 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Hi, hi! I’m the NAME RATER!\nI’m the fortune-teller of names!\pI shall be pleased to rate your\nPOKéMON’s nickname.$"

Naranja_IslaMurcott_G09_M04_Text_0817D4DB::
# 98 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Which POKéMON’s nickname should\nI divine?$"

Naranja_IslaMurcott_G09_M04_Text_0817D505::
# 102 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Hmmm... {STR_VAR_1}, is it? That is\nquite a fine name you bestowed.\pBut! What say you, if I were to\nsuggest a slightly better name?$"

Naranja_IslaMurcott_G09_M04_Text_0817D580::
# 106 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Ah, good. Then, what shall the new\nnickname be?$"

Naranja_IslaMurcott_G09_M04_Text_0817D5B0::
# 110 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Done! From now on, this POKéMON\nshall be known as {STR_VAR_1}!\pIt is a better name than before!\nHow fortunate for you!$"

Naranja_IslaMurcott_G09_M04_Text_0817D61E::
# 114 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "I see.\nDo come visit again.$"

Naranja_IslaMurcott_G09_M04_Text_0817D63A::
# 118 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Done! From now on, this POKéMON\nshall be known as {STR_VAR_1}!\pIt looks no different from before,\nand yet, this is vastly superior!\lHow fortunate for you!$"

Naranja_IslaMurcott_G09_M04_Text_0817D6CC::
# 122 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Hmmm... {STR_VAR_1} it is!\pThis is a magnificent nickname!\nIt is impeccably beyond reproach!\pYou’ll do well to cherish your\n{STR_VAR_1} now and beyond.$"

Naranja_IslaMurcott_G09_M04_Text_0817D752::
# 126 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Now, now.\nThat is merely an EGG!$"
