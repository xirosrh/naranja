Naranja_CharicificValley_Mart_MapScripts::
	.byte 0


Naranja_CharicificValley_Mart_EventScript_MartEmployee::
# 8 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	lock
# 9 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	message Naranja_ColdPath_Text_081A0BE4
# 11 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	pokemart Naranja_CharicificValley_Mart_Mart_081538E4
# 13 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	msgbox Naranja_ColdPath_Text_081A0C02, MSGBOX_DEFAULT
# 14 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	release
	end


Naranja_CharicificValley_Mart_EventScript_OldMan1::
# 19 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	msgbox Naranja_CharicificValley_Mart_Text_08176DA6, MSGBOX_NPC
	end


Naranja_CharicificValley_Mart_EventScript_OldWoman2::
# 24 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	msgbox Naranja_CharicificValley_Mart_Text_08176E1A, MSGBOX_NPC
	end


	.align 2
# 28 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
Naranja_CharicificValley_Mart_Mart_081538E4:
# 29 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 30 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 31 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 32 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 34 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 35 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 36 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 37 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

Naranja_CharicificValley_Mart_Text_08176DA6::
# 40 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.string "Use X SPEED to add to a POKéMON’s\nSPEED in battle.\pThat will help it get in the first\nstrike - a decided advantage!$"

Naranja_CharicificValley_Mart_Text_08176E1A::
# 44 "data/maps/Naranja_CharicificValley_Mart/scripts.pory"
	.string "On MT. CHIMNEY’s peak, there’s a local\nspecialty that you can buy only there.\pGive it to a POKéMON - it will be elated.$"
