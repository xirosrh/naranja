Naranja_VictoryRoad_B1F_MapScripts::
	.byte 0


Naranja_VictoryRoad_B1F_EventScript_Man4::
# 8 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_081, Naranja_VictoryRoad_B1F_Text_08197CE9, Naranja_VictoryRoad_B1F_Text_08197D42
# 9 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	msgbox Naranja_VictoryRoad_B1F_Text_08197D5B, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_B1F_EventScript_Woman7::
# 14 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_097, Naranja_VictoryRoad_B1F_Text_08197D98, Naranja_VictoryRoad_B1F_Text_08197DE8
# 15 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	msgbox Naranja_VictoryRoad_B1F_Text_08197E13, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_B1F_EventScript_Woman7_2::
# 20 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_NARANJA_VICTORY_ROAD_098, Naranja_VictoryRoad_B1F_Text_08197E5D, Naranja_VictoryRoad_B1F_Text_08197EA6
# 21 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	msgbox Naranja_VictoryRoad_B1F_Text_08197EB6, MSGBOX_AUTOCLOSE
	end


Naranja_VictoryRoad_B1F_EventScript_ItemBall::
# 26 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13D
# 27 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 28 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	callstd 1
	end


Naranja_VictoryRoad_B1F_EventScript_ItemBall_2::
# 33 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x13
# 34 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 35 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	callstd 1
	end


Naranja_VictoryRoad_B1F_Text_08197CE9::
# 39 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "The thought that I’m getting closer to\nthe POKéMON LEAGUE...\pI’m getting stage fright...$"

Naranja_VictoryRoad_B1F_Text_08197D42::
# 43 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "I couldn’t do a thing...$"

Naranja_VictoryRoad_B1F_Text_08197D5B::
# 47 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "The POKéMON LEAGUE became distant\nagain... What a letdown...$"

Naranja_VictoryRoad_B1F_Text_08197D98::
# 51 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "To win your way through the POKéMON\nLEAGUE, you need the trust of your\lPOKéMON.$"

Naranja_VictoryRoad_B1F_Text_08197DE8::
# 55 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "Your relationship is based on\nsolid trust.$"

Naranja_VictoryRoad_B1F_Text_08197E13::
# 59 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "By being together all the time, trust\ngrows between POKéMON and TRAINERS.$"

Naranja_VictoryRoad_B1F_Text_08197E5D::
# 63 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "This isn’t the goal. It’s only a place\non the way to the POKéMON LEAGUE.$"

Naranja_VictoryRoad_B1F_Text_08197EA6::
# 67 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "That’s the way!$"

Naranja_VictoryRoad_B1F_Text_08197EB6::
# 71 "data/maps/Naranja_VictoryRoad_B1F/scripts.pory"
	.string "You’ll do fine, for sure!\nYour POKéMON are all eager to go!$"
