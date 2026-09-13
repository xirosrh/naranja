Naranja_DoubleBattleColosseum_MapScripts::
	.byte 0


Naranja_DoubleBattleColosseum_EventScript_Trigger_1::
# 8 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	fadescreen 1
# 9 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ChooseHalfPartyForBattle
# 10 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
# 11 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 12 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	goto_if EQUAL, Naranja_DoubleBattleColosseum_EventScript_Sub_081A43EF
# 13 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	setvar VAR_0x8005, 0
# 14 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ColosseumPlayerSpotTriggered
# 15 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
	end


Naranja_DoubleBattleColosseum_EventScript_Trigger_3::
# 20 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	fadescreen 1
# 21 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ChooseHalfPartyForBattle
# 22 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
# 23 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 24 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	goto_if EQUAL, Naranja_DoubleBattleColosseum_EventScript_Sub_081A43EF
# 25 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	setvar VAR_0x8005, 1
# 26 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ColosseumPlayerSpotTriggered
# 27 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
	end


Naranja_DoubleBattleColosseum_EventScript_Trigger_2::
# 32 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	fadescreen 1
# 33 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ChooseHalfPartyForBattle
# 34 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
# 35 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 36 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	goto_if EQUAL, Naranja_DoubleBattleColosseum_EventScript_Sub_081A43EF
# 37 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	setvar VAR_0x8005, 2
# 38 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ColosseumPlayerSpotTriggered
# 39 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
	end


Naranja_DoubleBattleColosseum_EventScript_Trigger_4::
# 44 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	fadescreen 1
# 45 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ChooseHalfPartyForBattle
# 46 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
# 47 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	compare_var_to_value VAR_RESULT, 0
# 48 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	goto_if EQUAL, Naranja_DoubleBattleColosseum_EventScript_Sub_081A43EF
# 49 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	setvar VAR_0x8005, 3
# 50 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	special ColosseumPlayerSpotTriggered
# 51 "data/maps/Naranja_DoubleBattleColosseum/scripts.pory"
	waitstate
	end


Naranja_DoubleBattleColosseum_EventScript_Sub_081A43EF::
	end

