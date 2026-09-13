Naranja_ValenciaIsland_House3_MapScripts::
	.byte 0


Naranja_ValenciaIsland_House3_EventScript_OldMan1::
# 8 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	msgbox Naranja_ValenciaIsland_House3_Text_0818B7B0, MSGBOX_NPC
	end


Naranja_ValenciaIsland_House3_EventScript_WynautDoll::
# 13 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	lock
# 14 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	faceplayer
# 15 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	waitse
# 16 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	playmoncry SPECIES_VENONAT, 0
# 17 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	msgbox Naranja_ValenciaIsland_House3_Text_0817E156, MSGBOX_DEFAULT
# 18 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	waitmoncry
# 19 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	release
	end


Naranja_ValenciaIsland_House3_Text_0817E156::
# 23 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	.string "Fffnyaaaah...$"

Naranja_ValenciaIsland_House3_Text_0818B7B0::
# 27 "data/maps/Naranja_ValenciaIsland_House3/scripts.pory"
	.string "Creo q. llegarás llegarás lejos {PLAYER},\pTienes un brillo especial en los ojos.\pNo necesitarás suerte.\pPero entrena duro.$"
