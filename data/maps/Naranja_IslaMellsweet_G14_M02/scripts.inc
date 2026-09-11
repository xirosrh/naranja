Naranja_IslaMellsweet_G14_M02_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M02_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M02_Text_0818D536, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M02_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2::
# 13 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M02_Text_0818D596, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M02_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId3::
# 18 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	lock
# 19 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	faceplayer
# 20 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitse
# 21 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 22 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M02_Text_0818D61E, MSGBOX_DEFAULT
# 23 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitmoncry
# 24 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	closemessage
# 25 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00E0
# 26 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_SHAMOUTI_G12_M07_WINGULL
# 27 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 28 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8AE
# 29 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 30 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8B9
# 31 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	removeobject LOCALID_ISLA_MELLSWEET_G14_M02_WINGULL
# 32 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8AE::
# 37 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M02_WINGULL, Naranja_IslaMellsweet_G14_M02_Movement_0815A8C4
# 38 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8B9::
# 43 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M02_WINGULL, Naranja_IslaMellsweet_G14_M02_Movement_0815A8CB
# 44 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 48 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
Naranja_IslaMellsweet_G14_M02_Movement_0815A8C4:
# 49 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_right
# 50 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 51 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 52 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_left
# 53 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 54 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	delay_8
	step_end

# 57 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
Naranja_IslaMellsweet_G14_M02_Movement_0815A8CB:
# 58 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 59 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 60 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 61 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	delay_8
	step_end

Naranja_IslaMellsweet_G14_M02_Text_0818D536::
# 64 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	.string "My little sister exchanges MAIL with\nher boyfriend in FORTREE.\pI don’t envy her one bit at all.$"

Naranja_IslaMellsweet_G14_M02_Text_0818D596::
# 68 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	.string "Even though I can’t see my friend in\nFORTREE, my POKéMON carries MAIL back\land forth for us.\pI’m not lonesome, even though we’re\napart.$"

Naranja_IslaMellsweet_G14_M02_Text_0818D61E::
# 72 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	.string "WINGULL: Pihyoh!$"
