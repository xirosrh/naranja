Naranja_SinNombre_G25_M26_MapScripts::
	.byte 0


Naranja_SinNombre_G25_M26_EventScript_Trigger_1::
# 8 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	setvar VAR_0x8005, 0
# 9 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special RecordMixingPlayerSpotTriggered
# 10 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitstate
# 11 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 12 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M26_EventScript_Sub_081A446C
	end


Naranja_SinNombre_G25_M26_EventScript_Trigger_3::
# 17 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	setvar VAR_0x8005, 1
# 18 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special RecordMixingPlayerSpotTriggered
# 19 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitstate
# 20 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 21 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M26_EventScript_Sub_081A446C
	end


Naranja_SinNombre_G25_M26_EventScript_Trigger_2::
# 26 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	setvar VAR_0x8005, 2
# 27 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special RecordMixingPlayerSpotTriggered
# 28 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitstate
# 29 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 30 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M26_EventScript_Sub_081A446C
	end


Naranja_SinNombre_G25_M26_EventScript_Trigger_4::
# 35 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	setvar VAR_0x8005, 3
# 36 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special RecordMixingPlayerSpotTriggered
# 37 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitstate
# 38 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_1, 0
# 39 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M26_EventScript_Sub_081A446C
	end


Naranja_SinNombre_G25_M26_EventScript_Sub_081A446C::
# 44 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	bufferitemname 1, 0x4001
# 45 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	message Naranja_SinNombre_G25_M26_Text_081A4E3B
# 46 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitmessage
# 47 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitbuttonpress
# 48 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	releaseall
	end


Naranja_SinNombre_G25_M26_EventScript_OBJ_EVENT_GFX_WOMAN_6_LocalId1::
# 53 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	compare_var_to_value VAR_TEMP_0, 0
# 54 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	goto_if NOT_EQUAL, Naranja_SinNombre_G25_M26_EventScript_Sub_081A44D6
# 55 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special Script_FacePlayer
# 56 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	message Naranja_SinNombre_G25_M26_Text_081A4DD7
# 57 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitmessage
# 58 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitbuttonpress
# 59 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special Script_ClearHeldMovement
# 60 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	closemessage
	end


Naranja_SinNombre_G25_M26_EventScript_Sub_081A44D6::
# 65 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special Script_FacePlayer
# 66 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	message Naranja_SinNombre_G25_M26_Text_081A4DF7
# 67 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitmessage
# 68 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	waitbuttonpress
# 69 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	special Script_ClearHeldMovement
# 70 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	closemessage
	end


Naranja_SinNombre_G25_M26_Text_081A4DD7::
# 74 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	.string "Please take your seat and wait.$"

Naranja_SinNombre_G25_M26_Text_081A4DF7::
# 78 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	.string "Thanks for coming.$"

Naranja_SinNombre_G25_M26_Text_081A4E3B::
# 82 "data/maps/Naranja_SinNombre_G25_M26/scripts.pory"
	.string "{STR_VAR_1} sent over one\n{STR_VAR_2}.$"
