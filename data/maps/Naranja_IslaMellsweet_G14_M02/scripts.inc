Naranja_IslaMellsweet_G14_M02_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M02_EventScript_OBJ_EVENT_GFX_MAN_5_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M02_Text_0818D536
# 9 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M02_EventScript_OBJ_EVENT_GFX_LITTLE_GIRL_1_LocalId2::
# 14 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M02_Text_0818D596
# 15 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	callstd 2
	end


Naranja_IslaMellsweet_G14_M02_EventScript_OBJ_EVENT_GFX_WINGULL_LocalId3::
# 20 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	lock
# 21 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	faceplayer
# 22 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitse
# 23 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 24 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M02_Text_0818D61E
# 25 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	callstd 4
# 26 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitmoncry
# 27 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	closemessage
# 28 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	setflag FLAG_NARANJA_ISLA_SHAMOUTI_EVENT_COMPLETE_00E0
# 29 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	clearflag FLAG_HIDE_ISLA_SHAMOUTI_G12_M07_WINGULL
# 30 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	compare_var_to_value VAR_FACING, 2
# 31 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8AE
# 32 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	compare_var_to_value VAR_FACING, 3
# 33 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	call_if EQUAL, Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8B9
# 34 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	removeobject LOCALID_ISLA_MELLSWEET_G14_M02_WINGULL
# 35 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8AE::
# 40 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M02_WINGULL, Naranja_IslaMellsweet_G14_M02_Movement_0815A8C4
# 41 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


Naranja_IslaMellsweet_G14_M02_EventScript_Sub_0815A8B9::
# 46 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	applymovement LOCALID_ISLA_MELLSWEET_G14_M02_WINGULL, Naranja_IslaMellsweet_G14_M02_Movement_0815A8CB
# 47 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	waitmovement LOCALID_NONE
	return


# 51 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
Naranja_IslaMellsweet_G14_M02_Movement_0815A8C4:
# 52 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_right
# 53 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 54 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 55 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_left
# 56 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 57 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	delay_8
	step_end

# 60 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
Naranja_IslaMellsweet_G14_M02_Movement_0815A8CB:
# 61 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 62 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 63 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	walk_fast_down
# 64 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	delay_8
	step_end

Naranja_IslaMellsweet_G14_M02_Text_0818D536::
# 67 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	.string "My little sister exchanges MAIL with\nher boyfriend in FORTREE.\pI don’t envy her one bit at all.$"

Naranja_IslaMellsweet_G14_M02_Text_0818D596::
# 71 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	.string "Even though I can’t see my friend in\nFORTREE, my POKéMON carries MAIL back\land forth for us.\pI’m not lonesome, even though we’re\napart.$"

Naranja_IslaMellsweet_G14_M02_Text_0818D61E::
# 75 "data/maps/Naranja_IslaMellsweet_G14_M02/scripts.pory"
	.string "WINGULL: Pihyoh!$"
