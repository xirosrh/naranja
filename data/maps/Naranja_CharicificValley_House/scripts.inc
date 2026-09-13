Naranja_CharicificValley_House_MapScripts::
	.byte 0


Naranja_CharicificValley_House_EventScript_OldMan2::
# 8 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	msgbox Naranja_CharicificValley_House_Text_08176D07, MSGBOX_NPC
	end


Naranja_CharicificValley_House_EventScript_Zigzagoon::
# 13 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	lock
# 14 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	waitse
# 16 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 17 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	msgbox Naranja_CharicificValley_House_Text_08176D94, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	waitmoncry
# 19 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	release
	end


Naranja_CharicificValley_House_Text_08176D07::
# 23 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	.string "My wife’s warming an EGG in the hot\nsprings. This is what she told me.\pShe left two POKéMON with the DAY CARE.\nAnd they discovered that EGG!$"

Naranja_CharicificValley_House_Text_08176D94::
# 27 "data/maps/Naranja_CharicificValley_House/scripts.pory"
	.string "ZIGZAGOON: Pshoo!$"
