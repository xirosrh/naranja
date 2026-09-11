Naranja_ValleCharizard_G04_M05_MapScripts::
# 5 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Naranja_ValleCharizard_G04_M05_OnTransition
	.byte 0


Naranja_ValleCharizard_G04_M05_OnTransition::
# 9 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	setrespawn 0x10
# 10 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD1B
	end


Naranja_ValleCharizard_G04_M05_EventScript_OBJ_EVENT_GFX_NURSE_LocalId1::
# 15 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	call Naranja_7islasPomelo_G03_M01_EventScript_Sub_0819FD5B
# 17 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	waitmessage
# 18 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	release
	end


Naranja_ValleCharizard_G04_M05_EventScript_OBJ_EVENT_GFX_YOUNGSTER_LocalId2::
# 24 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M05_Text_08176F08
# 25 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	callstd 2
	end


Naranja_ValleCharizard_G04_M05_EventScript_OBJ_EVENT_GFX_WOMAN_4_LocalId3::
# 30 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M05_Text_08176E92
# 31 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	callstd 2
	end


Naranja_ValleCharizard_G04_M05_EventScript_OBJ_EVENT_GFX_GENTLEMAN_LocalId4::
# 36 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	loadword 0, Naranja_ValleCharizard_G04_M05_Text_08176F7A
# 37 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	callstd 2
	end


Naranja_ValleCharizard_G04_M05_Text_08176E92::
# 41 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	.string "I think POKéMON get closer to their\nTRAINERS if they spend time together.\pThe longer the better.\nThat’s what I think.$"

Naranja_ValleCharizard_G04_M05_Text_08176F08::
# 45 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	.string "I gave a RED オカキクケ to my POKéMON.\nIt looks a lot cooler all of a sudden.\pHmm...\nMaybe I ought to eat a RED オカキクケ.$"

Naranja_ValleCharizard_G04_M05_Text_08176F7A::
# 49 "data/maps/Naranja_ValleCharizard_G04_M05/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\nthe hot springs from here.\pIf POKéMON are getting rest, so too\nshould their TRAINERS.$"
