Naranja_SingleBattleColosseum_MapScripts::
	.byte 0


Naranja_SingleBattleColosseum_EventScript_Trigger_1::
# 8 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	setvar VAR_0x8005, 0
# 9 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	special ColosseumPlayerSpotTriggered
# 10 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	waitstate
	end


Naranja_SingleBattleColosseum_EventScript_Trigger_2::
# 15 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	setvar VAR_0x8005, 1
# 16 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	special ColosseumPlayerSpotTriggered
# 17 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	waitstate
	end


Naranja_SingleBattleColosseum_EventScript_Woman6::
# 22 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	special Script_FacePlayer
# 23 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	message Naranja_SingleBattleColosseum_Text_081A4D7E
# 24 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	waitmessage
# 25 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	waitbuttonpress
# 26 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	special Script_ClearHeldMovement
# 27 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	closemessage
	end


Naranja_SingleBattleColosseum_Text_081A4D7E::
# 31 "data/maps/Naranja_SingleBattleColosseum/scripts.pory"
	.string "Please take your seat and start\nyour battle.$"
