Naranja_BattleTower_Elevator_MapScripts::
# 5 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Naranja_BattleTower_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Naranja_BattleTower_Elevator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Naranja_BattleTower_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Naranja_BattleTower_Elevator_OnFrame_1
	.2byte 0

Naranja_BattleTower_Elevator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Naranja_BattleTower_Elevator_OnWarp_1
	.2byte 0


Naranja_BattleTower_Elevator_OnFrame_1::
# 14 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_ELEVATOR_TEALA, Naranja_BattleTower_Elevator_Movement_08160835
# 16 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_Elevator_Movement_08160839
# 17 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	waitmovement LOCALID_NONE
# 18 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	special MoveElevator
# 19 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	waitstate
# 20 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	delay 0x40
# 21 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	applymovement LOCALID_NARANJA_BATTLE_TOWER_ELEVATOR_TEALA, Naranja_BattleTower_Elevator_Movement_0816083D
# 22 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, Naranja_BattleTower_Elevator_Movement_08160841
# 23 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	waitmovement LOCALID_NONE
# 24 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	setvar VAR_TEMP_0, 0
# 25 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	warp MAP_NARANJA_BATTLE_TOWER_CORRIDOR, 0xFF, 8, 1
# 26 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	waitstate
	end


Naranja_BattleTower_Elevator_OnWarp_1::
# 31 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	turnobject LOCALID_PLAYER, 2
	end


# 36 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
Naranja_BattleTower_Elevator_Movement_08160835:
# 37 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_up
# 38 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_right
# 39 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	face_down
	step_end

# 42 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
Naranja_BattleTower_Elevator_Movement_08160839:
# 43 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_up
# 44 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_up
# 45 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	face_down
	step_end

# 48 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
Naranja_BattleTower_Elevator_Movement_0816083D:
# 49 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_down
# 50 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_down
# 51 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	set_invisible
	step_end

# 54 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
Naranja_BattleTower_Elevator_Movement_08160841:
# 55 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_right
# 56 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_down
# 57 "data/maps/Naranja_BattleTower_Elevator/scripts.pory"
	walk_down
	step_end
