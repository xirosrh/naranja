Naranja_SafariZone_Southwest_MapScripts::
	.byte 0


Naranja_SafariZone_Southwest_EventScript_Scyther::
# 8 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	msgbox Naranja_SafariZone_Southwest_Text_081C3C39, MSGBOX_NPC
	end


Naranja_SafariZone_Southwest_EventScript_Sign_1::
# 13 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	msgbox Naranja_SafariZone_Southwest_Text_081C3EA3, MSGBOX_SIGN
	end


Naranja_SafariZone_Southwest_EventScript_ItemBall::
# 18 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	setorcopyvar VAR_0x8000, 0x19
# 19 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 20 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	callstd 1
	end


Naranja_SafariZone_Southwest_Text_081C3C39::
# 24 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	.string "Sometimes, when I toss a オカキクケ at \nPOKéMON, it gets ignored.\pDo POKéMON have likes and dislikes\nabout what they eat?$"

Naranja_SafariZone_Southwest_Text_081C3EA3::
# 28 "data/maps/Naranja_SafariZone_Southwest/scripts.pory"
	.string "“Relieve your tired feet.”\nREST HOUSE$"
