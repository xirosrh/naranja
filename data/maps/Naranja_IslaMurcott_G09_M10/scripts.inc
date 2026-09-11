Naranja_IslaMurcott_G09_M10_MapScripts::
# 5 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMurcott_G09_M10_OnTransition
	.byte 0


Naranja_IslaMurcott_G09_M10_OnTransition::
# 9 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	setrespawn 4
# 10 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_IslaMurcott_G09_M10_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 15 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	release
	end


Naranja_IslaMurcott_G09_M10_EventScript_OBJ_EVENT_GFX_SAILOR_LocalId2::
# 24 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M10_Text_08180602, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M10_EventScript_OBJ_EVENT_GFX_WOMAN_7_LocalId3::
# 29 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	msgbox Naranja_IslaMurcott_G09_M10_Text_081806CB, MSGBOX_NPC
	end


Naranja_IslaMurcott_G09_M10_Text_08180602::
# 33 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	.string "Want a tip for battling?\pI’d say it’s raising different kinds\nof POKéMON in a balanced manner.\pIt’s no good to make just one\nPOKéMON strong.\pIf it has a type disadvantage, it\nmight not stand a chance.$"

Naranja_IslaMurcott_G09_M10_Text_081806CB::
# 37 "data/maps/Naranja_IslaMurcott_G09_M10/scripts.pory"
	.string "I trade POKéMON with my friends.\pIf a traded POKéMON is holding an\nitem, it makes me twice as happy!$"
