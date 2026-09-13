Naranja_SafariZone_Northwest_MapScripts::
	.byte 0


Naranja_SafariZone_Northwest_EventScript_Man1::
# 8 "data/maps/Naranja_SafariZone_Northwest/scripts.pory"
	msgbox Naranja_SafariZone_Northwest_Text_081C3CAE, MSGBOX_NPC
	end


Naranja_SafariZone_Northwest_EventScript_ItemBall::
# 13 "data/maps/Naranja_SafariZone_Northwest/scripts.pory"
	setorcopyvar VAR_0x8000, 0x136
# 14 "data/maps/Naranja_SafariZone_Northwest/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 15 "data/maps/Naranja_SafariZone_Northwest/scripts.pory"
	callstd 1
	end


Naranja_SafariZone_Northwest_Text_081C3CAE::
# 19 "data/maps/Naranja_SafariZone_Northwest/scripts.pory"
	.string "Gasp... Gasp...\nI...made it out here...but...\pI’m exhausted... I don’t have the\nenergy to catch POKéMON...$"
