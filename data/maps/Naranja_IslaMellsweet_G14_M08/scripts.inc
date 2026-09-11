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
	loadword 0, Naranja_IslaMellsweet_G14_M08_Text_0818E0E3
# 13 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	callstd 4
# 14 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB46::
# 19 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M08_Text_0818E125
# 20 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	callstd 4
# 21 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_OBJ_EVENT_GFX_LITTLE_BOY_1_LocalId2::
# 26 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	lock
# 27 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	faceplayer
# 28 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	special CheckPlayerHasSecretBase
# 29 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 30 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	goto_if EQUAL, Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB6D
# 31 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	special GetSecretBaseNearbyMapName
# 32 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M08_Text_0818E17E
# 33 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	callstd 4
# 34 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_Sub_0815AB6D::
# 39 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M08_Text_0818E1A7
# 40 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	callstd 4
# 41 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_EventScript_OBJ_EVENT_GFX_SKITTY_LocalId3::
# 46 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	lock
# 47 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	faceplayer
# 48 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	waitse
# 49 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 50 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	loadword 0, Naranja_IslaMellsweet_G14_M08_Text_0818E1E1
# 51 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	callstd 4
# 52 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	waitmoncry
# 53 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	release
	end


Naranja_IslaMellsweet_G14_M08_Text_0818E0E3::
# 57 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "My little brother says he likes to go\nfind people’s SECRET BASES.$"

Naranja_IslaMellsweet_G14_M08_Text_0818E125::
# 61 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "My little brother says he likes to\nvisit people’s SECRET BASES and have\lPOKéMON battles.$"

Naranja_IslaMellsweet_G14_M08_Text_0818E17E::
# 65 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "Was it you who made a SECRET BASE in\n{STR_VAR_1}?$"

Naranja_IslaMellsweet_G14_M08_Text_0818E1A7::
# 69 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "You should make a SECRET BASE\nsomewhere. I’ll go find it!$"

Naranja_IslaMellsweet_G14_M08_Text_0818E1E1::
# 73 "data/maps/Naranja_IslaMellsweet_G14_M08/scripts.pory"
	.string "DELCATTY: Miyaan?$"
