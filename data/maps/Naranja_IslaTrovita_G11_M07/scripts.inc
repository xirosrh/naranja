Naranja_IslaTrovita_G11_M07_MapScripts::
	.byte 0


Naranja_IslaTrovita_G11_M07_EventScript_OBJ_EVENT_GFX_MART_EMPLOYEE_LocalId1::
# 8 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	lock
# 9 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	faceplayer
# 10 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	message Naranja_CaminoFrio_G00_M29_Text_081A0BE4
# 11 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	waitmessage
# 12 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_011F
# 13 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	goto_if LESS_THAN, Naranja_IslaTrovita_G11_M07_EventScript_Sub_08157BEF
# 14 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	checkflag FLAG_NARANJA_MANDARIN_EVENT_COMPLETE_011F
# 15 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	goto_if EQUAL, Naranja_IslaTrovita_G11_M07_EventScript_Sub_08157C18
	end


Naranja_IslaTrovita_G11_M07_EventScript_Sub_08157BEF::
# 20 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	pokemart Naranja_IslaTrovita_G11_M07_Mart_08157C00
# 21 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 22 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M07_EventScript_Sub_08157C18::
# 27 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	pokemart Naranja_IslaTrovita_G11_M07_Mart_08157C28
# 28 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	msgbox Naranja_CaminoFrio_G00_M29_Text_081A0C02, MSGBOX_DEFAULT
# 29 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	release
	end


Naranja_IslaTrovita_G11_M07_EventScript_OBJ_EVENT_GFX_WOMAN_2_LocalId3::
# 34 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M07_Text_08184C76, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M07_EventScript_OBJ_EVENT_GFX_BOY_1_LocalId2::
# 39 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M07_Text_08184CD8, MSGBOX_NPC
	end


Naranja_IslaTrovita_G11_M07_EventScript_OBJ_EVENT_GFX_BUG_CATCHER_LocalId4::
# 44 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	msgbox Naranja_IslaTrovita_G11_M07_Text_08184D43, MSGBOX_NPC
	end


	.align 2
# 48 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
Naranja_IslaTrovita_G11_M07_Mart_08157C00:
# 49 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_POKE_BALL
# 50 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_POTION
# 51 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 52 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 53 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 54 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 55 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_REPEL
# 56 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_X_SPEED
# 57 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_X_ATTACK
# 58 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_X_DEFEND
	.2byte ITEM_NONE

	.align 2
# 61 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
Naranja_IslaTrovita_G11_M07_Mart_08157C28:
# 62 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_POKE_BALL
# 63 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 64 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 65 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_POTION
# 66 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 67 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 68 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 69 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 70 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_REPEL
# 71 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_X_SPEED
# 72 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_X_ATTACK
# 73 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.2byte ITEM_X_DEFEND
	.2byte ITEM_NONE

Naranja_IslaTrovita_G11_M07_Text_08184C76::
# 76 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.string "I’m buying some PARLYZ HEALS and\nANTIDOTES.\pJust in case I run into SHROOMISH\nin PETALBURG WOODS.$"

Naranja_IslaTrovita_G11_M07_Text_08184CD8::
# 80 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.string "My POKéMON evolved.\nIt has a lot of HP now.\pI should buy SUPER POTIONS for it\ninstead of ordinary POTIONS.$"

Naranja_IslaTrovita_G11_M07_Text_08184D43::
# 84 "data/maps/Naranja_IslaTrovita_G11_M07/scripts.pory"
	.string "I’m getting an ESCAPE ROPE just in\ncase I get lost in a cave.\pI just need to use it to get back to the\nentrance.$"
