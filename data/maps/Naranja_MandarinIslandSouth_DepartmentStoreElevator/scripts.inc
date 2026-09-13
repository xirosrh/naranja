Naranja_MandarinIslandSouth_DepartmentStoreElevator_MapScripts::
	.byte 0


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Teala::
# 8 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	lock
# 9 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	checkflag FLAG_TEMP_2
# 11 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	call_if LESS_THAN, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4CF
# 12 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
# 13 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	special ShowDeptStoreElevatorFloorSelect
# 14 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	message Naranja_MandarinIslandSouth_DepartmentStoreElevator_Text_081A0EF6
# 15 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	waitmessage
# 16 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	multichoice 0, 0, 0x39, 0
# 17 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 18 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_0x8000, 0
# 19 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A402
# 20 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_0x8000, 1
# 21 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A425
# 22 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_0x8000, 2
# 23 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A448
# 24 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_0x8000, 3
# 25 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A46B
# 26 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_0x8000, 4
# 27 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A48E
# 28 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_0x8000, 0x7F
# 29 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
	end


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A402::
# 34 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_NARANJA_MANDARIN_ISLAND_SOUTH_DEPARTMENT_STORE_1F, 0xFF, 2, 1
# 35 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 0
# 36 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
# 37 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	call Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B8
# 38 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 0
# 39 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A425::
# 43 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_NARANJA_MANDARIN_ISLAND_SOUTH_DEPARTMENT_STORE_2F, 0xFF, 2, 1
# 44 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 1
# 45 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
# 46 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	call Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B8
# 47 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 1
# 48 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A448::
# 52 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_NARANJA_MANDARIN_ISLAND_SOUTH_DEPARTMENT_STORE_3F, 0xFF, 2, 1
# 53 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 2
# 54 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
# 55 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	call Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B8
# 56 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 2
# 57 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A46B::
# 61 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_NARANJA_MANDARIN_ISLAND_SOUTH_DEPARTMENT_STORE_4F, 0xFF, 2, 1
# 62 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 3
# 63 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
# 64 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	call Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B8
# 65 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 3
# 66 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A48E::
# 70 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_NARANJA_MANDARIN_ISLAND_SOUTH_DEPARTMENT_STORE_5F, 0xFF, 2, 1
# 71 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 4
# 72 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto_if EQUAL, Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
# 73 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	call Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B8
# 74 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 4
# 75 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	goto Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B1::
# 79 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 80 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	release
	end


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4B8::
# 85 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	erasebox 0, 0, 0x1D, 0x13
# 86 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	applymovement 32783, Naranja_MeteorFalls_1F_1R_Movement_081A0845
# 87 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	waitmovement LOCALID_NONE
# 88 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	special MoveElevator
# 89 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	waitstate
# 90 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	setflag FLAG_TEMP_2
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_EventScript_Sub_0815A4CF::
# 95 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	special SetDeptStoreFloor
	return


Naranja_MandarinIslandSouth_DepartmentStoreElevator_Text_081A0EF6::
# 99 "data/maps/Naranja_MandarinIslandSouth_DepartmentStoreElevator/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\pWhich floor would you like?$"
