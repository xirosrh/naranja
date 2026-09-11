Naranja_IslaMurcott_G09_M04_MapScripts::
	.byte 0


Naranja_IslaMurcott_G09_M04_EventScript_OBJ_EVENT_GFX_OLD_MAN_1_LocalId1::
# 8 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D46A, MSGBOX_YESNO
# 11 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 12 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815569C
# 13 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 14 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815569C::
# 19 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D4DB, MSGBOX_DEFAULT
# 20 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special ChoosePartyMon
# 21 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	waitstate
# 22 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 23 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if NOT_EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556C9
# 24 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_0x8004, 0xFF
# 25 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF::
# 30 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D61E, MSGBOX_DEFAULT
# 31 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556C9::
# 36 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 37 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0x19C
# 38 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815571C
# 39 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special BufferMonNickname
# 40 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special IsMonOTIDNotPlayers
# 41 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 42 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155726
# 43 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 44 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special BufferMonNickname
# 45 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 46 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155726
# 47 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D505, MSGBOX_YESNO
# 48 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 49 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155730
# 50 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 51 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_081556BF
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815571C::
# 56 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D752, MSGBOX_DEFAULT
# 57 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155726::
# 62 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D6CC, MSGBOX_DEFAULT
# 63 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_08155730::
# 68 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D580, MSGBOX_DEFAULT
# 69 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	call Naranja_IslaMellsweet_G14_M07_EventScript_Sub_081A0678
# 70 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 71 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	special BufferMonNickname
# 72 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	compare_var_to_value VAR_RESULT, 1
# 73 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	goto_if EQUAL, Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815575A
# 74 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D63A, MSGBOX_DEFAULT
# 75 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_EventScript_Sub_0815575A::
# 80 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M04_Text_0817D5B0, MSGBOX_DEFAULT
# 81 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M04_Text_0817D46A::
# 85 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Hi, hi! I’m the NAME RATER!\nI’m the fortune-teller of names!\pI shall be pleased to rate your\nPOKéMON’s nickname.$"

Naranja_IslaMurcott_G09_M04_Text_0817D4DB::
# 89 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Which POKéMON’s nickname should\nI divine?$"

Naranja_IslaMurcott_G09_M04_Text_0817D505::
# 93 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Hmmm... {STR_VAR_1}, is it? That is\nquite a fine name you bestowed.\pBut! What say you, if I were to\nsuggest a slightly better name?$"

Naranja_IslaMurcott_G09_M04_Text_0817D580::
# 97 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Ah, good. Then, what shall the new\nnickname be?$"

Naranja_IslaMurcott_G09_M04_Text_0817D5B0::
# 101 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Done! From now on, this POKéMON\nshall be known as {STR_VAR_1}!\pIt is a better name than before!\nHow fortunate for you!$"

Naranja_IslaMurcott_G09_M04_Text_0817D61E::
# 105 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "I see.\nDo come visit again.$"

Naranja_IslaMurcott_G09_M04_Text_0817D63A::
# 109 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Done! From now on, this POKéMON\nshall be known as {STR_VAR_1}!\pIt looks no different from before,\nand yet, this is vastly superior!\lHow fortunate for you!$"

Naranja_IslaMurcott_G09_M04_Text_0817D6CC::
# 113 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Hmmm... {STR_VAR_1} it is!\pThis is a magnificent nickname!\nIt is impeccably beyond reproach!\pYou’ll do well to cherish your\n{STR_VAR_1} now and beyond.$"

Naranja_IslaMurcott_G09_M04_Text_0817D752::
# 117 "data/maps/Naranja_IslaMurcott_G09_M04/scripts.pory"
	.string "Now, now.\nThat is merely an EGG!$"
