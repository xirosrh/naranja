Naranja_IslaMandarina_G13_M23_MapScripts::
	.byte 0


Naranja_IslaMandarina_G13_M23_EventScript_OBJ_EVENT_GFX_TEALA_LocalId1::
# 8 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	checkflag FLAG_TEMP_2
# 11 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	call_if LESS_THAN, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4CF
# 12 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
# 13 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	special ShowDeptStoreElevatorFloorSelect
# 14 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	message Naranja_IslaMandarina_G13_M23_Text_081A0EF6
# 15 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	waitmessage
# 16 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	multichoice 0, 0, 0x39, 0
# 17 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 18 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 19 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A402
# 20 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 21 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A425
# 22 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 23 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A448
# 24 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 25 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A46B
# 26 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 27 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A48E
# 28 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 29 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
	end


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A402::
# 34 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setdynamicwarp MAP_NARANJA_ISLA_MANDARINA_G13_M17, 0xFF, 2, 1
# 35 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 0
# 36 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
# 37 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	call Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B8
# 38 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 0
# 39 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
	return


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A425::
# 43 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setdynamicwarp MAP_NARANJA_ISLA_MANDARINA_G13_M18, 0xFF, 2, 1
# 44 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 1
# 45 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
# 46 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	call Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B8
# 47 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 1
# 48 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
	return


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A448::
# 52 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setdynamicwarp MAP_NARANJA_ISLA_MANDARINA_G13_M19, 0xFF, 2, 1
# 53 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 2
# 54 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
# 55 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	call Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B8
# 56 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 2
# 57 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
	return


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A46B::
# 61 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setdynamicwarp MAP_NARANJA_ISLA_MANDARINA_G13_M20, 0xFF, 2, 1
# 62 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 3
# 63 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
# 64 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	call Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B8
# 65 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 3
# 66 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
	return


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A48E::
# 70 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setdynamicwarp MAP_NARANJA_ISLA_MANDARINA_G13_M21, 0xFF, 2, 1
# 71 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 4
# 72 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto_if EQUAL, Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
# 73 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	call Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B8
# 74 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 4
# 75 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	goto Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1
	return


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B1::
# 79 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 80 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	release
	end


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4B8::
# 85 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 86 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	applymovement 32783, Naranja_GraniteCave_G24_M00_Movement_081A0845
# 87 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	waitmovement LOCALID_NONE
# 88 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	special MoveElevator
# 89 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	waitstate
# 90 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	setflag FLAG_TEMP_2
	return


Naranja_IslaMandarina_G13_M23_EventScript_Sub_0815A4CF::
# 95 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	special SetDeptStoreFloor
	return


Naranja_IslaMandarina_G13_M23_Text_081A0EF6::
# 99 "data/maps/Naranja_IslaMandarina_G13_M23/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\pWhich floor would you like?$"
