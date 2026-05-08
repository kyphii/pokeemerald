NautirustCity_House_1_MapScripts::
	.byte 0


NautirustCity_House_1_TalkShopkeeper::
# 4 "data/maps/NautirustCity_House_1/scripts.pory"
	lock
# 5 "data/maps/NautirustCity_House_1/scripts.pory"
	faceplayer
# 6 "data/maps/NautirustCity_House_1/scripts.pory"
	msgbox NautirustCity_House_1_TalkShopkeeper_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/NautirustCity_House_1/scripts.pory"
	specialvar VAR_RESULT, GetDayOfWeek
# 12 "data/maps/NautirustCity_House_1/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/NautirustCity_House_1/scripts.pory"
	case WEEKDAY_MON, NautirustCity_House_1_TalkShopkeeper_3
# 15 "data/maps/NautirustCity_House_1/scripts.pory"
	case WEEKDAY_TUE, NautirustCity_House_1_TalkShopkeeper_4
# 17 "data/maps/NautirustCity_House_1/scripts.pory"
	case WEEKDAY_WED, NautirustCity_House_1_TalkShopkeeper_5
# 19 "data/maps/NautirustCity_House_1/scripts.pory"
	case WEEKDAY_THU, NautirustCity_House_1_TalkShopkeeper_6
# 21 "data/maps/NautirustCity_House_1/scripts.pory"
	case WEEKDAY_FRI, NautirustCity_House_1_TalkShopkeeper_7
# 24 "data/maps/NautirustCity_House_1/scripts.pory"
	pokemart Mart_MintShop_Neutral
NautirustCity_House_1_TalkShopkeeper_1:
# 26 "data/maps/NautirustCity_House_1/scripts.pory"
	msgbox NautirustCity_House_1_TalkShopkeeper_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/NautirustCity_House_1/scripts.pory"
	closemessage
# 36 "data/maps/NautirustCity_House_1/scripts.pory"
	release
	return

NautirustCity_House_1_TalkShopkeeper_3:
# 14 "data/maps/NautirustCity_House_1/scripts.pory"
	pokemart Mart_MintShop_Attack
	goto NautirustCity_House_1_TalkShopkeeper_1

NautirustCity_House_1_TalkShopkeeper_4:
# 16 "data/maps/NautirustCity_House_1/scripts.pory"
	pokemart Mart_MintShop_Defense
	goto NautirustCity_House_1_TalkShopkeeper_1

NautirustCity_House_1_TalkShopkeeper_5:
# 18 "data/maps/NautirustCity_House_1/scripts.pory"
	pokemart Mart_MintShop_SpAttack
	goto NautirustCity_House_1_TalkShopkeeper_1

NautirustCity_House_1_TalkShopkeeper_6:
# 20 "data/maps/NautirustCity_House_1/scripts.pory"
	pokemart Mart_MintShop_SpDefense
	goto NautirustCity_House_1_TalkShopkeeper_1

NautirustCity_House_1_TalkShopkeeper_7:
# 22 "data/maps/NautirustCity_House_1/scripts.pory"
	pokemart Mart_MintShop_Speed
	goto NautirustCity_House_1_TalkShopkeeper_1


	.align 2
# 39 "data/maps/NautirustCity_House_1/scripts.pory"
Mart_MintShop_Attack:
# 40 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 41 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 42 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 43 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_NONE

	.align 2
# 46 "data/maps/NautirustCity_House_1/scripts.pory"
Mart_MintShop_Defense:
# 47 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 48 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 49 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_LAX_MINT
# 50 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_NONE

	.align 2
# 53 "data/maps/NautirustCity_House_1/scripts.pory"
Mart_MintShop_SpAttack:
# 54 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 55 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_MILD_MINT
# 56 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_RASH_MINT
# 57 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_NONE

	.align 2
# 60 "data/maps/NautirustCity_House_1/scripts.pory"
Mart_MintShop_SpDefense:
# 61 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_CALM_MINT
# 62 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 63 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 64 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_NONE

	.align 2
# 67 "data/maps/NautirustCity_House_1/scripts.pory"
Mart_MintShop_Speed:
# 68 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 69 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 70 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 71 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

	.align 2
# 74 "data/maps/NautirustCity_House_1/scripts.pory"
Mart_MintShop_Neutral:
# 75 "data/maps/NautirustCity_House_1/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

NautirustCity_House_1_TalkShopkeeper_Text_0:
# 7 "data/maps/NautirustCity_House_1/scripts.pory"
	.string "Welcome to my humble tea café.\n"
	.string "Can I interest you in anything?$"

NautirustCity_House_1_TalkShopkeeper_Text_1:
# 27 "data/maps/NautirustCity_House_1/scripts.pory"
	.string "Thank you.\p"
	.string "If you didn't know, we rotate our\n"
	.string "selection every weekday.\p"
	.string "Please come again.$"
