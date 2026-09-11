Naranja_IslaMellsweet_G14_M03_MapScripts::
# 5 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_IslaMellsweet_G14_M03_OnTransition
	.byte 0


Naranja_IslaMellsweet_G14_M03_OnTransition::
# 9 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	setrespawn 9
	end


Naranja_IslaMellsweet_G14_M03_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 14 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 16 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	waitmessage
# 17 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M03_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId2::
# 23 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M03_Text_0818D62F, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M03_EventScript_OBJ_EVENT_GFX_GIRL_1_LocalId3::
# 28 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M03_Text_0818D69A, MSGBOX_NPC
	end


Naranja_IslaMellsweet_G14_M03_Text_0818D62F::
# 32 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	.string "The GYM LEADERS in this town are a\nformidable duo.\pTheir combination attacks are, like,\nexcellent and wow!$"

Naranja_IslaMellsweet_G14_M03_Text_0818D69A::
# 36 "data/maps/Naranja_IslaMellsweet_G14_M03/scripts.pory"
	.string "Depending on the special abilities of\nPOKéMON, some moves might change\lor not work at all.$"
