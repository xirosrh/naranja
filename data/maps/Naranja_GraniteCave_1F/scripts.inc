Naranja_GraniteCave_1F_MapScripts::
	.byte 0


Naranja_GraniteCave_1F_EventScript_ItemBall::
# 8 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	setorcopyvar VAR_0x8000, 0x55
# 9 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	setorcopyvar VAR_0x8001, 1
# 10 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	callstd 1
	end


Naranja_GraniteCave_1F_EventScript_Sub_086B38F4::
# 15 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	msgbox Naranja_GraniteCave_1F_Text_086B39FB, MSGBOX_DEFAULT
# 16 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	release
	end


Naranja_GraniteCave_1F_EventScript_Kecleon1::
# 21 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	msgbox Naranja_GraniteCave_1F_Text_086B8B67, MSGBOX_YESNO
# 22 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 23 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	call_if EQUAL, Naranja_GraniteCave_1F_EventScript_Sub_086B38F4
# 24 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	delay 0x20
# 25 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	msgbox Naranja_GraniteCave_1F_Text_086B8B9B, MSGBOX_AUTOCLOSE
	end


Naranja_GraniteCave_1F_Text_086B39FB::
# 29 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	.string "Ehh…\nQuizás sea mejor dejarlo así.$"

Naranja_GraniteCave_1F_Text_086B8B67::
# 33 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	.string "Hay un fósil incrustado.\n¿Quieres intentar sacarlo?$"

Naranja_GraniteCave_1F_Text_086B8B9B::
# 37 "data/maps/Naranja_GraniteCave_1F/scripts.pory"
	.string "Se resiste. Es imposible.  $"
