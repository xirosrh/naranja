Naranja_IslaMellsweet_G14_M08_MapScripts::
	.byte 0


Naranja_IslaMellsweet_G14_M08_EventScript_OBJ_EVENT_GFX_WOMAN_3_LocalId1::
# 8 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	checkflag FLAG_NARANJA_SECRET_BASE_EVENT_COMPLETE_0804
# 11 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB46
# 12 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M08_Text_0818E0E3, MSGBOX_DEFAULT
# 13 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB46::
# 18 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M08_Text_0818E125, MSGBOX_DEFAULT
# 19 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId2::
# 24 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	lock
# 25 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	faceplayer
# 26 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	special CheckPlayerHasSecretBase
# 27 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 28 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB6D
# 29 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	special GetSecretBaseNearbyMapName
# 30 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M08_Text_0818E17E, MSGBOX_DEFAULT
# 31 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB6D::
# 36 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M08_Text_0818E1A7, MSGBOX_DEFAULT
# 37 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_OBJ_EVENT_GFX_SKITTY_LocalId3::
# 42 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	lock
# 43 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	faceplayer
# 44 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	waitse
# 45 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 46 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	msgbox Naranja_IslaMellsweet_G14_M08_Text_0818E1E1, MSGBOX_DEFAULT
# 47 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	waitmoncry
# 48 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_Text_0818E0E3::
# 52 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "My little brother says he likes to go\nfind people’s SECRET BASES.$"

Naranja_IslaMellsweet_G14_M08_Text_0818E125::
# 56 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "My little brother says he likes to\nvisit people’s SECRET BASES and have\lPOKéMON battles.$"

Naranja_IslaMellsweet_G14_M08_Text_0818E17E::
# 60 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "Was it you who made a SECRET BASE in\n{STR_VAR_1}?$"

Naranja_IslaMellsweet_G14_M08_Text_0818E1A7::
# 64 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "You should make a SECRET BASE\nsomewhere. I’ll go find it!$"

Naranja_IslaMellsweet_G14_M08_Text_0818E1E1::
# 68 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "DELCATTY: Miyaan?$"
